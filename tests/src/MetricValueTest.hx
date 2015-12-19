package ;

import hunit.TestCase;
import sx.properties.metric.Units;


/**
 * Check values with specified metric units parsed correctly
 *
 */
class MetricValueTest extends TestCase
{

    @test
    public function dip () : Void
    {
        var ui = new Metric();

        assert.equal(Dip, ui.dips.left.units);
    }


    @test
    public function pixel () : Void
    {
        var ui = new Metric();

        assert.equal(Pixel, ui.pixels.left.units);
    }


    @test
    public function pct () : Void
    {
        var ui = new Metric();

        assert.equal(Percent, ui.percents.left.units);
    }


}//class MetricValueTest