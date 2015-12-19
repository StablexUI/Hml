
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.backend.interfaces {
	public interface IBitmapRenderer : global::haxe.lang.IHxObject, global::sx.backend.interfaces.IRenderer {
		
		void setBitmapData(object bitmapData);
		
		double getBitmapDataWidth();
		
		double getBitmapDataHeight();
		
		void setBitmapScale(double scaleX, double scaleY);
		
		void setBitmapSmoothing(bool smoothing);
		
	}
}


