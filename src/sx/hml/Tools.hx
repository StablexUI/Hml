package sx.hml;

import haxe.macro.Context;
import hml.xml.Data;
import haxe.macro.Type;

using haxe.macro.Tools;


/**
 * Utility methods
 *
 */
class Tools
{

    /**
     * Check if specified node represents signal
     */
    static public function isSignalNode (node:Node) : Bool
    {
        return isOfType(node.nativeType, 'sx.signals.Signal.Signal');
    }


    /**
     * Check if specified node represents metric property
     */
    static public function isMetricNode (node:Node) : Bool
    {
        return isOfType(node.nativeType, 'sx.properties.metric.Size.Size');
    }



    /**
     * Check if specified type is a descendant of `requiredType` or `requireType` itself
     */
    static public function isOfType (type:Type, requiredType:String) : Bool
    {
        type = type.follow();
        switch (type) {
            case TAbstract(ref, _):
                var name = ref.toString();
                var abstractType = ref.get();
                switch (abstractType.type) {
                    case TAbstract(_.toString() => nextName,_):
                        if (name == nextName) {
                            return false;
                        }
                    case _:
                }

                return isOfType(abstractType.type, requiredType);
            case TInst(_.get() => t, _):
                var fullTypeName = t.module + '.' + t.name;
                if (fullTypeName == requiredType) {
                    return true;
                }

                if (t.superClass != null) {
                    var superTypeName = t.superClass.t.toString();
                    return isOfType(Context.getType(superTypeName), requiredType);
                }
            case _:
        }

        return false;
    }


    /**
     * Return amount of arguments for signal handler of specified type
     */
    static public function countSignalArguments (type:Type) : Int
    {
        var count = 0;

        type = type.follow();
        switch (type) {
            case TInst(_, params):
                if (params.length != 1) throw 'Signal should have only one type parameter';

                switch (params[0]) {
                    case TFun(_.length => length, _): count = length;
                    case _: throw 'Signal should have function type parameter';
                }

            case _:
                throw 'TInst expected';
        }

        return count;
    }


}//class Tools