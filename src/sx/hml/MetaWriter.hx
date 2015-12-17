package sx.hml;

import hml.xml.adapters.base.BaseMetaAdapter;
import hml.xml.writer.base.StringNode;
import hml.xml.Data;
import hml.xml.writer.IHaxeWriter;
import hml.xml.writer.DefaultNodeWriter;


/**
 * Description
 *
 */
class MetaWriter implements IMetaWriter
{

    /**
     * Constructor
     */
    public function new () : Void
    {

    }


    /**
     * Description
     */
    public function writeMeta(node:Node, scope:String, metaData:MetaData, parent:Node, metaWriter:DefaultNodeWriter, writer:IHaxeWriter<Node>, method:Array<String>) : Void
    {
        // method.push(StringNode.ifCond(node, '$scope.addEventListener(${metaWriter.printer.printExpr(metaData.getExpr())}, ${metaWriter.universalGet(node)});'));
        // switch (node.nativeType) {
        //     case TFun(t, ret):
        //         var body = node.cData;
        //         if (!body.rtrim().endsWith(";")) body += ";";
        //         node.cData = 'function (event:${metaWriter.printer.printComplexType(t[0].t.toComplexType())}):' +
        //             '${metaWriter.printer.printComplexType(ret.toComplexType())} { ${body} }';
        //     case _:
        // }
        // writer.writeNode(node);
    }

}//class MetaWriter