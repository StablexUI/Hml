package ;

import sx.properties.Orientation;
import sx.properties.Align.HorizontalAlign;
import sx.properties.Align.VerticalAlign;
import sx.properties.Align.NoneAlign;
import sx.properties.metric.Units;

class Child extends sx.widgets.Widget {

    var level1_initialized:Bool = false;

    @:isVar public var level1(get, set):sx.widgets.Widget;

    var level2_initialized:Bool = false;

    @:isVar public var level2(get, set):sx.widgets.Widget;

    private function destroyHml():Void {
        
    }
    

    override public function dispose(disposeChildren:Bool = true):Void {
        destroyHml();
        super.dispose(disposeChildren);
    }
    

    function set_level1(value:sx.widgets.Widget):sx.widgets.Widget {
        level1_initialized = true;
        return level1 = value;
    }

    function set_level2(value:sx.widgets.Widget):sx.widgets.Widget {
        level2_initialized = true;
        return level2 = value;
    }

    function get_level2():sx.widgets.Widget {
        /* hml/xml/Child.xml:3 characters: 9-15 */
        if (level2_initialized) return level2;
        level2_initialized = true;
        this.level2 = new sx.widgets.Widget();
        var res = this.level2;
        return res;
    }

    function get_level1():sx.widgets.Widget {
        /* hml/xml/Child.xml:2 characters: 5-11 */
        if (level1_initialized) return level1;
        level1_initialized = true;
        this.level1 = new sx.widgets.Widget();
        var res = this.level1;
        res.addChild(level2);
        return res;
    }

    public function new() {
        /* hml/xml/Child.xml:1 characters: 1-7 */
        super();
        this.addChild(level1);
    }

    




        
}
