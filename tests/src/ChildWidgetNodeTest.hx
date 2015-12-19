package ;

import hunit.TestCase;
import sx.properties.metric.Units;
import sx.widgets.Widget;


/**
 * Check child widget nodes added via `addChild`.
 *
 */
class ChildWidgetNodeTest extends TestCase
{

    @test
    public function childWidgetNode () : Void
    {
        var root = new Child();
        var level1 = root.level1;
        var level2 = root.level2;

        assert.equal(level1, level2.parent);
        assert.equal((root:Widget), level1.parent);
    }

}//class ChildWidgetNodeTest