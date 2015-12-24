package ;

import sx.properties.Orientation;
import sx.properties.Align.HorizontalAlign;
import sx.properties.Align.VerticalAlign;
import sx.properties.Align.NoneAlign;
import sx.properties.metric.Units;

class Signal extends sx.widgets.Widget {

    var simpleClicked_initialized:Bool = false;

    @:isVar public var simpleClicked(get, set):Bool;

    var closureBlockClicked_initialized:Bool = false;

    @:isVar public var closureBlockClicked(get, set):Bool;

    var closureSingleExprClicked_initialized:Bool = false;

    @:isVar public var closureSingleExprClicked(get, set):Bool;

    var simple_initialized:Bool = false;

    @:isVar public var simple(get, set):sx.widgets.Widget;

    var closureBlockBody_initialized:Bool = false;

    @:isVar public var closureBlockBody(get, set):sx.widgets.Widget;

    var closureSingleExpr_initialized:Bool = false;

    @:isVar public var closureSingleExpr(get, set):sx.widgets.Widget;

    private function destroyHml():Void {
        
    }
    

    override public function dispose(disposeChildren:Bool = true):Void {
        destroyHml();
        super.dispose(disposeChildren);
    }
    

    function set_simpleClicked(value:Bool):Bool {
        simpleClicked_initialized = true;
        return simpleClicked = value;
    }

    function get_simpleClicked():Bool {
        /* hml/xml/Signal.xml:3 characters: 9-18 */
        if (simpleClicked_initialized) return simpleClicked;
        simpleClicked_initialized = true;
        this.simpleClicked = false;
        var res = this.simpleClicked;
        return res;
    }

    function set_closureBlockClicked(value:Bool):Bool {
        closureBlockClicked_initialized = true;
        return closureBlockClicked = value;
    }

    function get_closureBlockClicked():Bool {
        /* hml/xml/Signal.xml:4 characters: 9-18 */
        if (closureBlockClicked_initialized) return closureBlockClicked;
        closureBlockClicked_initialized = true;
        this.closureBlockClicked = false;
        var res = this.closureBlockClicked;
        return res;
    }

    function set_closureSingleExprClicked(value:Bool):Bool {
        closureSingleExprClicked_initialized = true;
        return closureSingleExprClicked = value;
    }

    function get_closureSingleExprClicked():Bool {
        /* hml/xml/Signal.xml:5 characters: 9-18 */
        if (closureSingleExprClicked_initialized) return closureSingleExprClicked;
        closureSingleExprClicked_initialized = true;
        this.closureSingleExprClicked = false;
        var res = this.closureSingleExprClicked;
        return res;
    }

    function set_simple(value:sx.widgets.Widget):sx.widgets.Widget {
        simple_initialized = true;
        return simple = value;
    }

    function get_simple():sx.widgets.Widget {
        /* hml/xml/Signal.xml:8 characters: 5-11 */
        if (simple_initialized) return simple;
        simple_initialized = true;
        this.simple = new sx.widgets.Widget();
        var res = this.simple;
        /* hml/xml/Signal.xml:8 characters: 25-32 */
        res.onClick.add(function(__0, __1, __2) {
            simpleClicked = true;
        });
        return res;
    }

    function set_closureBlockBody(value:sx.widgets.Widget):sx.widgets.Widget {
        closureBlockBody_initialized = true;
        return closureBlockBody = value;
    }

    function get_closureBlockBody():sx.widgets.Widget {
        /* hml/xml/Signal.xml:9 characters: 5-11 */
        if (closureBlockBody_initialized) return closureBlockBody;
        closureBlockBody_initialized = true;
        this.closureBlockBody = new sx.widgets.Widget();
        var res = this.closureBlockBody;
        /* hml/xml/Signal.xml:9 characters: 35-42 */
        res.onClick.add({
            function (processor, dispatcher, touchId) {closureBlockClicked = true;}
        });
        return res;
    }

    function set_closureSingleExpr(value:sx.widgets.Widget):sx.widgets.Widget {
        closureSingleExpr_initialized = true;
        return closureSingleExpr = value;
    }

    function get_closureSingleExpr():sx.widgets.Widget {
        /* hml/xml/Signal.xml:10 characters: 5-11 */
        if (closureSingleExpr_initialized) return closureSingleExpr;
        closureSingleExpr_initialized = true;
        this.closureSingleExpr = new sx.widgets.Widget();
        var res = this.closureSingleExpr;
        /* hml/xml/Signal.xml:10 characters: 36-43 */
        res.onClick.add({
            function (processor, dispatcher, touchId) closureSingleExprClicked = true;
        });
        return res;
    }

    public function new() {
        /* hml/xml/Signal.xml:1 characters: 1-7 */
        super();
        this.addChild(simple);
        this.addChild(closureBlockBody);
        this.addChild(closureSingleExpr);
    }

    




        
}
