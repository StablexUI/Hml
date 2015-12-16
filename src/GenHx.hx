package ;

/**
 * Entry point for HML generation phase.
 */
class GenHx
{

    static function main()
    {
        initHML();
    }


    macro static function initHML() {
        sx.hml.SxAdapter.register();

        return macro hml.Hml.parse({path:"gen"}, "ui");
    }

}