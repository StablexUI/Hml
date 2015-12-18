package sx.hml;


/**
 * Entry point for HML generation phase.
 */
class Generator
{

    static function main()
    {
        initHML();
    }


    macro static function initHML() {
        sx.hml.SxAdapter.register();

        var sourcePath      = "hml/xml";
        var destinationPath = "hml/gen";

        return macro hml.Hml.parse({path:$v{destinationPath}}, $v{sourcePath});
    }

}