package sx.hml.writers;

import haxe.macro.Expr;
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
class SignalNodeWriter extends BaseNodeWithMetaWriter
{

    override public function match (node:Node) : MatchLevel
    {
        return (node.isSignalNode() ? matchLevel : None);
    }


    override public function writeAttribute(node:Node, scope:String, child:Node, writer:IHaxeWriter<Node>, method:Array<String>) : Void
    {
        var signal    = child.name.name;
        var argsCount = child.nativeType.countSignalArguments();
        var args      = [for (i in 0...argsCount) '__$i'].join(', ');
        var expr      = child.cData;

        writeNodePos(child, method);
        method.push('$scope.$signal.add(function($args) {');
        method.push('\t$expr');
        method.push('});');
    }


}//class SignalNodeWriter