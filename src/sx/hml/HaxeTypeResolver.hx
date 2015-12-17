package sx.hml;

import haxe.macro.Type in MacroType;
import hml.xml.Data;
import hml.xml.adapters.base.BaseMetaAdapter;



/**
 * Description
 *
 */
class HaxeTypeResolver extends BaseMetaResolver
{

    override public function getNativeType (node:Node) : Null<MacroType>
    {
        // trace('getNativeType ${node.name}, super: ${node.superType}');
        return super.getNativeType(node);
    }


    override public function getFieldNativeType (node:Node, qName:XMLQName) : Null<MacroType>
    {
        // trace('getFieldNativeType ${node.name} $qName');
        return super.getFieldNativeType(node, qName);
    }

}//class HaxeTypeResolver