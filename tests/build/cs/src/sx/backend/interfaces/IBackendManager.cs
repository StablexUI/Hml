
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.backend.interfaces {
	public interface IBackendManager : global::haxe.lang.IHxObject {
		
		void setupPointerDevices();
		
		void setupFrames();
		
		global::sx.widgets.Widget getRoot();
		
		global::sx.backend.dummy.Point getPointerPosition(global::haxe.lang.Null<int> touchId);
		
		global::sx.backend.dummy.Backend widgetBackend(global::sx.widgets.Widget widget);
		
		global::sx.backend.dummy.TextRenderer textRenderer(global::sx.widgets.Text textField);
		
		global::sx.backend.dummy.TextInputRenderer textInputRenderer(global::sx.widgets.TextInput textInput);
		
		global::sx.backend.dummy.BitmapRenderer bitmapRenderer(global::sx.widgets.Bmp bmp);
		
	}
}


