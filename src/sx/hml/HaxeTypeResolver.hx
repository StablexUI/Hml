package sx.hml;

import haxe.macro.Type in MacroType;
import hml.xml.Data;
import hml.xml.typeResolver.IHaxeTypeResolver;



/**
 * Description
 *
 */
class HaxeTypeResolver implements IHaxeTypeResolver<Node, Type>
{

    public var types:Map<String, Type>;


    /**
     * Constructor
     */
    public function new () : Void
    {
        types = new Map();
    }


    public function getNativeType (node:Node) : Null<MacroType>
    {
        trace('getNativeType ${node.name}');
        return null;
    }


    public function getFieldNativeType (node:Node, qName:XMLQName) : Null<MacroType>
    {
        trace('getFieldNativeType ${node.name} $qName');
        return null;
    }

}//class HaxeTypeResolver