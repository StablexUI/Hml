package sx.backend.interfaces;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public interface IBackendManager extends haxe.lang.IHxObject
{
	void setupPointerDevices();
	
	void setupFrames();
	
	sx.widgets.Widget getRoot();
	
	sx.backend.dummy.Point getPointerPosition(java.lang.Object touchId);
	
	sx.backend.dummy.Backend widgetBackend(sx.widgets.Widget widget);
	
	sx.backend.dummy.TextRenderer textRenderer(sx.widgets.Text textField);
	
	sx.backend.dummy.TextInputRenderer textInputRenderer(sx.widgets.TextInput textInput);
	
	sx.backend.dummy.BitmapRenderer bitmapRenderer(sx.widgets.Bmp bmp);
	
}


