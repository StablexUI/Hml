package ;

import hunit.TestCase;


/**
 * Check `destroyHml()` generated correctly
 *
 */
class DestroyHmlTest extends TestCase
{

    @test
    public function XMLWriter_xmlExtendsWidget_generatesOverridenDisposeWhichCallsPrivateDestroyHml () : Void
    {
        var ui = mock(Child).create();

        expect(ui).destroyHml().once();

        ui.dispose();
    }


    @test
    public function XMLWriter_xmlExtendsNonWidgetClass_generatesPublicDestroyHml () : Void
    {
        var nonWidget = new NonWidget();

        nonWidget.destroyHml();

        assert.success();
    }


}//class DestroyHmlTest