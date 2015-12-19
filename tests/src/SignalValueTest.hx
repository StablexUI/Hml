package ;

import hunit.TestCase;
import sx.properties.metric.Units;


/**
 * Check signal properties get corresponding attribute values added as signal handlers.
 *
 */
class SignalValueTest extends TestCase
{

    @test
    public function simple () : Void
    {
        var ui = new Signal();

        ui.simple.onClick.dispatch(ui.simple, ui.simple, -1);

        assert.isTrue(ui.simpleClicked);
    }


    @test
    public function closureWithBlockBody () : Void
    {
        var ui = new Signal();

        ui.closureBlockBody.onClick.dispatch(ui.closureBlockBody, ui.closureBlockBody, -1);

        assert.isTrue(ui.closureBlockClicked);
    }


    @test
    public function closureWithSingleExprBody () : Void
    {
        var ui = new Signal();

        ui.closureSingleExpr.onClick.dispatch(ui.closureSingleExpr, ui.closureSingleExpr, -1);

        assert.isTrue(ui.closureSingleExprClicked);
    }

}//class SignalValueTest