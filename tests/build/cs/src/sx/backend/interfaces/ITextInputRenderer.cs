
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.backend.interfaces {
	public interface ITextInputRenderer : global::haxe.lang.IHxObject, global::sx.backend.interfaces.IRenderer {
		
		void onTextChange(global::haxe.lang.Function callback);
		
		void onReceiveCursor(global::haxe.lang.Function callback);
		
		void onLoseCursor(global::haxe.lang.Function callback);
		
		string getText();
		
		void setText(string text);
		
		object getFormat();
		
		void setFormat(object format);
		
	}
}


