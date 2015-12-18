package sx.hml.processor;

import hml.base.IFileProcessor;
import hml.base.Output;
import hml.xml.Data;
import hml.xml.XMLWriter in HmlXMLWriter;


/**
 * Adds global imports etc.
 *
 */
class XMLWriter extends HmlXMLWriter
{

    /**
     * Constructor
     */
    public function new (sourceWriter:HmlXMLWriter) : Void
    {
        super(sourceWriter.writers);
    }


    override public function write(types:Array<Type>, output:Output) : WriterResult
    {
        var imports = '
            import sx.properties.Orientation;
            import sx.properties.Align.HorizontalAlign;
            import sx.properties.Align.VerticalAlign;
            import sx.properties.Align.NoneAlign;
            import sx.properties.metric.Units;
        ';

        for (type in types) {
            if (type.script == null) {
                type.script = imports;
            } else {
                type.script += imports;
            }
        }

        return super.write(types, output);
    }

}//class XMLWriter