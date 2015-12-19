package sx.backend.interfaces;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public interface ITextInputRenderer extends haxe.lang.IHxObject, sx.backend.interfaces.IRenderer
{
	void onTextChange(haxe.lang.Function callback);
	
	void onReceiveCursor(haxe.lang.Function callback);
	
	void onLoseCursor(haxe.lang.Function callback);
	
	java.lang.String getText();
	
	void setText(java.lang.String text);
	
	java.lang.Object getFormat();
	
	void setFormat(java.lang.Object format);
	
}


