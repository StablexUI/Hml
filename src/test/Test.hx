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
        var panel = new Panel();
    }

}//class Test