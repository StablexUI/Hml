package sx.hml;

import hml.xml.adapters.IAdapter;
import hml.xml.Data;
import hml.xml.reader.IXMLParser;
import hml.xml.typeResolver.IHaxeTypeResolver;
import hml.xml.writer.IHaxeWriter;



/**
 * Description
 *
 */
class WidgetAdapter implements IAdapter<XMLData, Node, Type>
{

    /**
     * Constructor
     */
    public function new () : Void
    {

    }


    public function getXmlNodeParsers () : Array<IXMLNodeParser<XMLData>>
    {
        return null;
    }


    public function getXmlDataNodeParsers () : Array<IXMLDataNodeParser<XMLData, Node, Node>>
    {
        return null;
    }


    public function getTypeResolvers () : Array<IHaxeTypeResolver<Node, Type>>
    {
        return [new HaxeTypeResolver()];
    }


    public function getNodeWriters () : Array<IHaxeNodeWriter<Node>>
    {
        return null;
    }



}//class WidgetAdapter