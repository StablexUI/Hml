package sx.hml;

import hml.base.MatchLevel;
import hml.xml.Data;
import hml.xml.reader.IXMLParser;
import com.tenderowls.xml176.Xml176Parser;



/**
 * Node parser
 *
 */
class XMLNodeParser implements IXMLNodeParser<XMLData>
{

    /**
     * Constructor
     */
    public function new () : Void
    {

    }


    public function match(xml:Xml176Document, parent:XMLData) : MatchLevel
    {
        return CustomLevel(ClassLevel, 10);
    }


    public function parse(xml:Xml176Document, parent:XMLData, parser:IXMLParser<XMLData>) : XMLData
    {
        return new XMLData();
    }


}//class XMLNodeParser