package sx.hml;

import haxe.macro.Expr;
import hml.base.MatchLevel;
import hml.xml.adapters.base.BaseMetaAdapter;
import hml.xml.Data;
import hml.xml.reader.IXMLParser;
import hml.xml.typeResolver.DefaultHaxeTypeResolver;
import hml.xml.typeResolver.IHaxeTypeResolver;
import hml.xml.writer.IHaxeWriter;



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


    override public function getXmlNodeParsers () : Array<IXMLNodeParser<XMLData>>
    {
        return super.getXmlNodeParsers();
    }


    override public function getXmlDataNodeParsers () : Array<IXMLDataNodeParser<XMLData, Node, Node>>
    {
        return super.getXmlDataNodeParsers();
    }


    override public function getTypeResolvers () : Array<IHaxeTypeResolver<Node, Type>>
    {
        return [new HaxeTypeResolver(baseType, meta)];
    }


    override public function getNodeWriters () : Array<IHaxeNodeWriter<Node>>
    {
        return [new HaxeNodeWriter(baseType, metaWriter, matchLevel)];
    }



}//class WidgetAdapter