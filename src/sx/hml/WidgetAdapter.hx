package sx.hml;

import hml.base.MatchLevel;
import hml.xml.adapters.base.BaseMetaAdapter;
import hml.xml.Data;
import hml.xml.writer.IHaxeWriter;
import sx.hml.writers.MetaWriter;
import sx.hml.writers.MetricNodeWriter;
import sx.hml.writers.SignalNodeWriter;



/**
 * Description
 *
 */
class WidgetAdapter extends BaseMetaAdapter
{

    /**
     * Constructor
     */
    public function new () : Void
    {
        var baseType   = macro:sx.widgets.Widget;
        var meta       = new Map();
        var matchLevel = CustomLevel(ClassLevel, 50);
        var metaWriter = new MetaWriter();

        super(baseType, meta, metaWriter, matchLevel);
    }


    override public function getNodeWriters () : Array<IHaxeNodeWriter<Node>>
    {
        return [
            new MetricNodeWriter(baseType, metaWriter, CustomLevel(matchLevel, 1)),
            new SignalNodeWriter(baseType, metaWriter, CustomLevel(matchLevel, 2))
        ];
    }



}//class WidgetAdapter