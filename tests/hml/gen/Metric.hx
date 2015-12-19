package ;

import sx.properties.Orientation;
import sx.properties.Align.HorizontalAlign;
import sx.properties.Align.VerticalAlign;
import sx.properties.Align.NoneAlign;
import sx.properties.metric.Units;

class Metric extends sx.widgets.Widget {

    var dips_initialized:Bool = false;

    @:isVar public var dips(get, set):sx.widgets.Widget;

    var pixels_initialized:Bool = false;

    @:isVar public var pixels(get, set):sx.widgets.Widget;

    var percents_initialized:Bool = false;

    @:isVar public var percents(get, set):sx.widgets.Widget;

    public function destroyHml():Void {
        
    }
    

    function set_dips(value:sx.widgets.Widget):sx.widgets.Widget {
        dips_initialized = true;
        return dips = value;
    }

    function get_dips():sx.widgets.Widget {
        /* hml/xml/Metric.xml:3 characters: 5-11 */
        if (dips_initialized) return dips;
        dips_initialized = true;
        this.dips = new sx.widgets.Widget();
        var res = this.dips;
        /* hml/xml/Metric.xml:3 characters: 23-27 */
        res.left.dip = 10;
        return res;
    }

    function set_pixels(value:sx.widgets.Widget):sx.widgets.Widget {
        pixels_initialized = true;
        return pixels = value;
    }

    function get_pixels():sx.widgets.Widget {
        /* hml/xml/Metric.xml:4 characters: 5-11 */
        if (pixels_initialized) return pixels;
        pixels_initialized = true;
        this.pixels = new sx.widgets.Widget();
        var res = this.pixels;
        /* hml/xml/Metric.xml:4 characters: 25-29 */
        res.left.px = 10;
        return res;
    }

    function set_percents(value:sx.widgets.Widget):sx.widgets.Widget {
        percents_initialized = true;
        return percents = value;
    }

    function get_percents():sx.widgets.Widget {
        /* hml/xml/Metric.xml:5 characters: 5-11 */
        if (percents_initialized) return percents;
        percents_initialized = true;
        this.percents = new sx.widgets.Widget();
        var res = this.percents;
        /* hml/xml/Metric.xml:5 characters: 27-31 */
        res.left.pct = 10;
        return res;
    }

    public function new() {
        /* hml/xml/Metric.xml:1 characters: 1-7 */
        super();
        this.addChild(dips);
        this.addChild(pixels);
        this.addChild(percents);
    }

    




        
}
