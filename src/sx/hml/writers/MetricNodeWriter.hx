package sx.hml.writers;

import haxe.macro.Context;
import hml.base.MatchLevel;
import hml.xml.Data;
import hml.xml.writer.IHaxeWriter;
import hml.xml.adapters.base.BaseMetaAdapter;

using sx.hml.Tools;



/**
 * Description
 *
 */
class MetricNodeWriter extends BaseNodeWithMetaWriter
{
    /** regexp to find xml attributes which has metric values */
    static private var erMetricValue : EReg = ~/^\s*(-{0,1}[0-9.]+)\s*(px|dip|%|pct)\s*$/;


    override public function match (node:Node) : MatchLevel
    {
        return (node.isMetricNode() ? matchLevel : None);
    }


    override public function writeAttribute(node:Node, scope:String, child:Node, writer:IHaxeWriter<Node>, method:Array<String>) : Void
    {
        var value = child.cData;
        if (value != null && erMetricValue.match(value)) {
            value = erMetricValue.matched(1);
            var units = erMetricValue.matched(2);
            var field = switch (units) {
                case '%' : 'pct';
                case _   : units;
            }

            child.name.name += '.$field';
            child.cData = value;
        }

        super.writeAttribute(node, scope, child, writer, method);
    }


    /**
     * Change nodes which has values with `%`, `dip`, `px` etc.
     */
    private function standardizeMetricNodes (nodes:Iterable<Node>) : Void
    {
        var value, units, field;
        for (node in nodes) {
            value = node.cData;

            if (value != null && erMetricValue.match(value)) {
                value = erMetricValue.matched(1);
                units = erMetricValue.matched(2);
                field = switch (units) {
                    case '%' : 'pct';
                    case _   : units;
                }

                node.name.name += '.$field';
                node.cData = value;
            }
        }
    }

}//class MetricNodeWriter