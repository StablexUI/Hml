package test;

class Panel extends sx.widgets.Widget {

    var alert_initialized:Bool = false;

    @:isVar var alert(get, set):sx.widgets.Popup;

    public function destroyHml():Void {
        
    }
    

    function set_alert(value:sx.widgets.Popup):sx.widgets.Popup {
        alert_initialized = true;
        return alert = value;
    }

    inline function get_text__0():sx.widgets.Text {
        /* gen/xml/test/Panel.xml:7 characters: 13-17 */
        var res = new sx.widgets.Text();
        /* gen/xml/test/Panel.xml:7 characters: 19-23 */
        res.text = 'hello';
        return res;
    }

    function get_alert():sx.widgets.Popup {
        /* gen/xml/test/Panel.xml:6 characters: 9-14 */
        if (alert_initialized) return alert;
        alert_initialized = true;
        this.alert = new sx.widgets.Popup();
        var res = this.alert;
        res.addChild(get_text__0());
        return res;
    }

    inline function get_button__0():sx.widgets.Button {
        /* gen/xml/test/Panel.xml:11 characters: 5-11 */
        var res = new sx.widgets.Button();
        /* gen/xml/test/Panel.xml:11 characters: 36-41 */
        res.right.pct = 20;
        /* gen/xml/test/Panel.xml:11 characters: 64-71 */
        res.onClick = alert.show();
        /* gen/xml/test/Panel.xml:11 characters: 13-17 */
        res.text = 'Hello, world!';
        /* gen/xml/test/Panel.xml:11 characters: 48-54 */
        res.bottom.dip = 100;
        return res;
    }

    public function new() {
        /* gen/xml/test/Panel.xml:1 characters: 1-7 */
        super();
        /* gen/xml/test/Panel.xml:2 characters: 8-13 */
        this.width = 600;
        /* gen/xml/test/Panel.xml:3 characters: 7-13 */
        this.height = 400;
        this.addChild(get_button__0());
    }
}
