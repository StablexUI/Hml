
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.backend.interfaces {
	public interface IRenderer : global::haxe.lang.IHxObject {
		
		double getWidth();
		
		double getHeight();
		
		void onResize(global::haxe.lang.Function callback);
		
		void setAvailableAreaWidth(double width);
		
		void setAvailableAreaHeight(double height);
		
		void dispose();
		
	}
}


