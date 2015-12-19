package sx.backend.interfaces;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public interface IRenderer extends haxe.lang.IHxObject
{
	double getWidth();
	
	double getHeight();
	
	void onResize(haxe.lang.Function callback);
	
	void setAvailableAreaWidth(double width);
	
	void setAvailableAreaHeight(double height);
	
	void dispose();
	
}


