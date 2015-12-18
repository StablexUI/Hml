package sx.hml.writers;

import hml.xml.Data;
import hml.xml.writer.base.StringNode;
import hml.xml.adapters.base.BaseMetaAdapter;



/**
 * Description
 *
 */
class ChildWidgetNodeWriter extends BaseNodeWithMetaWriter
{

    override function child(node:Node, scope:String, child:Node, method:Array<String>, assign = false) : Void
    {
        if (!assign) {
            method.push(StringNode.ifCond(child, '$scope.addChild(${universalGet(child)});'));
        } else {
            super.child(node, scope, child, method, assign);
        }
    }

}//class ChildWidgetNodeWriter