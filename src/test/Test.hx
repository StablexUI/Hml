package test;

import sx.flatui.FlatUITheme;
import sx.Sx;
import test.Panel;


/**
 * Description
 *
 */
class Test
{

    /**
     * Description
     */
    static public function main () : Void
    {
        Sx.theme = new FlatUITheme();
        Sx.init(run);
    }


    /**
     * Description
     */
    static public function run () : Void
    {
        Sx.root.addChild(new Panel());
    }

}//class Test