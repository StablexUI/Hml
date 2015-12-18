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
        // var finalProperty = node.name.name.split('.').pop();
        // if (finalProperty.indexOf('on') != 0) {
        //     return false;
        // }

        return isSignalType(node.nativeType);
    }


    /**
     * Check if specified type is a signal type
     */
    static public function isSignalType (type:Type) : Bool
    {
        type = type.follow();
        switch (type) {
            case TInst(_.get() => t, _):
                var fullTypeName = t.module + '.' + t.name;
                if (fullTypeName == 'sx.signals.Signal.Signal') {
                    return true;
                }

                if (t.superClass != null) {
                    var superTypeName = t.superClass.t.toString();
                    return isSignalType(Context.getType(superTypeName));
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