package sx.backend.interfaces;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public interface IBitmapRenderer extends haxe.lang.IHxObject, sx.backend.interfaces.IRenderer
{
	void setBitmapData(java.lang.Object bitmapData);
	
	double getBitmapDataWidth();
	
	double getBitmapDataHeight();
	
	void setBitmapScale(double scaleX, double scaleY);
	
	void setBitmapSmoothing(boolean smoothing);
	
}


