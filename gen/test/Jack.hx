package test;

class Jack extends test.base.Person {

    public function destroyHml():Void {
        
    }
    

    inline function get_name__0():test.base.Name {
        /* ui/test/Jack.xml:5 characters: 9-13 */
        var res = new test.base.Name();
        /* ui/test/Jack.xml:5 characters: 15-20 */
        res.first = 'Jack';
        return res;
    }

    public function new() {
        /* ui/test/Jack.xml:1 characters: 1-7 */
        super();
        /* ui/test/Jack.xml:1 characters: 57-60 */
        this.age = 32;
        /* ui/test/Jack.xml:4 characters: 5-9 */
        this.name = get_name__0();
        /* ui/test/Jack.xml:8 characters: 5-20 */
        this.favoriteNumbers = [3, 7, 21];
    }
}
