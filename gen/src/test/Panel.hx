package test;

class Panel extends sx.widgets.VBox {

    var alert_initialized:Bool = false;

    @:isVar var alert(get, set):sx.widgets.Popup;

    var label_initialized:Bool = false;

    @:isVar public var label(get, set):sx.widgets.Text;

    public function destroyHml():Void {
        
    }
    

    function set_alert(value:sx.widgets.Popup):sx.widgets.Popup {
        alert_initialized = true;
        return alert = value;
    }

    inline function get_text__0():sx.widgets.Text {
        /* gen/xml/test/Panel.xml:4 characters: 13-17 */
        var res = new sx.widgets.Text();
        /* gen/xml/test/Panel.xml:4 characters: 19-23 */
        res.text = 'Very important message!';
        return res;
    }

    inline function get_button__0():sx.widgets.Button {
        /* gen/xml/test/Panel.xml:5 characters: 13-19 */
        var res = new sx.widgets.Button();
        /* gen/xml/test/Panel.xml:5 characters: 33-40 */
        res.onClick.add(function(__0, __1, __2) {
            alert.close();
        });
        /* gen/xml/test/Panel.xml:5 characters: 21-25 */
        res.text = 'OK';
        return res;
    }

    function get_alert():sx.widgets.Popup {
        /* gen/xml/test/Panel.xml:3 characters: 9-14 */
        if (alert_initialized) return alert;
        alert_initialized = true;
        this.alert = new sx.widgets.Popup();
        var res = this.alert;
        res.addChild(get_text__0());
        res.addChild(get_button__0());
        return res;
    }

    function set_label(value:sx.widgets.Text):sx.widgets.Text {
        label_initialized = true;
        return label = value;
    }

    function get_label():sx.widgets.Text {
        /* gen/xml/test/Panel.xml:16 characters: 13-17 */
        if (label_initialized) return label;
        label_initialized = true;
        this.label = new sx.widgets.Text();
        var res = this.label;
        /* gen/xml/test/Panel.xml:16 characters: 30-34 */
        res.text = 'click this bar';
        return res;
    }

    inline function get_vBox__0():sx.widgets.VBox {
        /* gen/xml/test/Panel.xml:15 characters: 9-13 */
        var res = new sx.widgets.VBox();
        /* gen/xml/test/Panel.xml:15 characters: 42-49 */
        res.enabled = false;
        /* gen/xml/test/Panel.xml:15 characters: 15-20 */
        res.width.pct = 100;
        /* gen/xml/test/Panel.xml:15 characters: 28-34 */
        res.height.pct = 100;
        res.addChild(label);
        return res;
    }

    inline function get_progressBar__0():sx.widgets.ProgressBar {
        /* gen/xml/test/Panel.xml:9 characters: 5-16 */
        var res = new sx.widgets.ProgressBar();
        /* gen/xml/test/Panel.xml:9 characters: 42-53 */
        res.interactive = true;
        /* gen/xml/test/Panel.xml:9 characters: 18-23 */
        res.value = Std.random(100);
        /* gen/xml/test/Panel.xml:10 characters: 9-17 */
        res.onChange.add(
            function(bar) {
                    label.text = Math.round(bar.value) + '/' + bar.max;
                }
        );
        res.addChild(get_vBox__0());
        return res;
    }

    inline function get_button__1():sx.widgets.Button {
        /* gen/xml/test/Panel.xml:20 characters: 5-11 */
        var res = new sx.widgets.Button();
        /* gen/xml/test/Panel.xml:20 characters: 33-38 */
        res.right.pct = 20;
        /* gen/xml/test/Panel.xml:20 characters: 61-68 */
        res.onClick.add(function(__0, __1, __2) {
            alert.show();
        });
        /* gen/xml/test/Panel.xml:20 characters: 13-17 */
        res.text = 'Show alert';
        /* gen/xml/test/Panel.xml:20 characters: 45-51 */
        res.bottom.dip = 100;
        return res;
    }

    public function new() {
        /* gen/xml/test/Panel.xml:1 characters: 1-5 */
        super();
        /* gen/xml/test/Panel.xml:1 characters: 56-61 */
        this.width.pct = 100;
        /* gen/xml/test/Panel.xml:1 characters: 69-75 */
        this.height.pct = 100;
        /* gen/xml/test/Panel.xml:1 characters: 83-86 */
        this.gap = 10;
        this.addChild(get_progressBar__0());
        this.addChild(get_button__1());
    }
}
