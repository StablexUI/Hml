package sx.hml;

#if macro
import hml.xml.adapters.base.MergedAdapter;
import hml.xml.adapters.DefaultXMLAdapter;
import hml.xml.Data;
import hml.xml.XMLProcessor;



/**
 * StablexUI adapter for HML
 *
 */
class SxAdapter extends MergedAdapter<XMLData, Node, Type>
{

    /**
     * Constructor
     */
    public function new () : Void
    {
        super([
            new WidgetAdapter(),
            new DefaultXMLAdapter()
        ]);
    }


    /**
     * Plug SxAdapter in
     */
    static public function register() : Void
    {
        hml.Hml.registerProcessor(new XMLProcessor([new SxAdapter()]));
    }

}//class SxAdapter
#end