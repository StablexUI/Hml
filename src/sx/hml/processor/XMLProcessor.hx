package sx.hml.processor;

import hml.xml.XMLProcessor in HmlXMLProcessor;
import hml.xml.adapters.IAdapter;
import hml.xml.Data;



/**
 * Substitude default hml.xml.XMLWriter with sx.hml.processor.XMLWriter
 *
 */
class XMLProcessor extends HmlXMLProcessor
{

    /**
     * Constructor
     */
    public function new (adapters:Array<IAdapter<XMLData, Node, Type>>) : Void
    {
        super(adapters);
        writer = new XMLWriter(cast writer);
    }

}//class XMLProcessor