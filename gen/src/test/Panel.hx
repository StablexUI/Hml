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
        res.text = 'Very important message!';
        return res;
    }

    inline function get_button__0():sx.widgets.Button {
        /* gen/xml/test/Panel.xml:8 characters: 13-19 */
        var res = new sx.widgets.Button();
        /* gen/xml/test/Panel.xml:8 characters: 33-40 */
        res.onClick.add(function(__0, __1, __2) {
            alert.close();
        });
        /* gen/xml/test/Panel.xml:8 characters: 21-25 */
        res.text = 'OK';
        return res;
    }

    function get_alert():sx.widgets.Popup {
        /* gen/xml/test/Panel.xml:6 characters: 9-14 */
        if (alert_initialized) return alert;
        alert_initialized = true;
        this.alert = new sx.widgets.Popup();
        var res = this.alert;
        res.addChild(get_text__0());
        res.addChild(get_button__0());
        return res;
    }

    inline function get_button__1():sx.widgets.Button {
        /* gen/xml/test/Panel.xml:12 characters: 5-11 */
        var res = new sx.widgets.Button();
        /* gen/xml/test/Panel.xml:12 characters: 33-38 */
        res.right.pct = 20;
        /* gen/xml/test/Panel.xml:12 characters: 13-17 */
        res.text = 'Show alert';
        /* gen/xml/test/Panel.xml:12 characters: 45-51 */
        res.bottom.dip = 100;
        /* gen/xml/test/Panel.xml:13 characters: 9-16 */
        res.onClick.add(function(__0, __1, __2) {
            alert.show();
        });
        /* gen/xml/test/Panel.xml:14 characters: 9-22 */
        res.onPointerOver.add(function(__0, __1, __2) {
            trace('Ready to show!');
        });
        return res;
    }

    public function new() {
        /* gen/xml/test/Panel.xml:1 characters: 1-7 */
        super();
        /* gen/xml/test/Panel.xml:2 characters: 8-13 */
        this.width = 600;
        /* gen/xml/test/Panel.xml:3 characters: 7-13 */
        this.height = 400;
        this.addChild(get_button__1());
    }
}
