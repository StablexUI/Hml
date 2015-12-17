package sx.hml;

import haxe.macro.Context;
import hml.base.MatchLevel;
import hml.xml.Data;
import hml.xml.writer.base.StringNode;
import hml.xml.writer.IHaxeWriter;
import hml.xml.adapters.base.BaseMetaAdapter;

using sx.hml.Tools;



/**
 * Description
 *
 */
class HaxeNodeWriter extends BaseNodeWithMetaWriter
{
    /** regexp to find xml attributes which has metric values */
    static private var erMetricValue : EReg = ~/\s*([0-9.]+)\s*(px|dip|%)\s*/;


    override public function match (node:Node) : MatchLevel
    {
        return super.match(node);
    }


    override public function write (node:Node, writer:IHaxeWriter<Node>) : Void
    {
        super.write(node, writer);
    }


    override public function writeAttribute(node:Node, scope:String, child:Node, writer:IHaxeWriter<Node>, method:Array<String>) : Void
    {
        super.writeAttribute(node, scope, child, writer, method);
    }


    override function writeNodes(node:Node, scope:String, writer:IHaxeWriter<Node>, method:Array<String>)
    {
        handleSignalNodes(node.nodes);
        standardizeMetricNodes(node.nodes);
        super.writeNodes(node, scope, writer, method);
    }


    override function child(node:Node, scope:String, child:Node, method:Array<String>, assign = false) : Void
    {
        if (!assign) {
            method.push(StringNode.ifCond(child, '$scope.addChild(${universalGet(child)});'));
        } else {
            super.child(node, scope, child, method, assign);
        }
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


    /**
     * Create signal handlers using nodes which represent signals
     */
    private function handleSignalNodes (nodes:Iterable<Node>) : Void
    {
        var isSignal;
        for (node in nodes) {
            if (!node.isSignalNode()) continue;

            trace(node.nativeType.countSignalArguments());
        }
    }

}//class HaxeNodeWriter