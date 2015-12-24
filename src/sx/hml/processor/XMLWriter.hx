package sx.hml.processor;

import hml.base.code.Access;
import hml.base.IFileProcessor;
import hml.base.Output;
import hml.xml.Data;
import hml.xml.XMLWriter in HmlXMLWriter;
import hml.xml.writer.IHaxeWriter;
import hml.xml.writer.base.StringNode;

using hml.base.MacroTools;


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


    /**
     * Make `destroyHml` private because user should call `dispose` which will automatically call `destroyHml`
     */
    override private function getDestroyHmlAccess (type:Type, allTypes:Array<Type>) : Array<Access>
    {
        var access = super.getDestroyHmlAccess(type, allTypes);

        if (type.nativeType.isChildOf(macro:sx.widgets.Widget)) {
            access.remove(APublic);
            access.push(APrivate);
        }

        return access;
    }


    /**
     * Override `dispose()` method for widgets to automatically invoke `destroyHml()`
     */
    override private function getAdditionalNodes (type:Type, allTypes:Array<Type>) : Array<WriteNode<Node>>
    {
        var additional = super.getAdditionalNodes(type, allTypes);

        if (type.nativeType.isChildOf(macro:sx.widgets.Widget)) {
            additional.push(
                new StringNode(null,
                    'override public function dispose(disposeChildren:Bool = true):Void {\n' +
                    HmlXMLWriter.TAB + 'destroyHml();\n' +
                    HmlXMLWriter.TAB + 'super.dispose(disposeChildren);\n' +
                    '}\n'
                )
            );
        }

        return additional;
    }

}//class XMLWriter