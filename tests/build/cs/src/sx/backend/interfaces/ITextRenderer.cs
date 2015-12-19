
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.backend.interfaces {
	public interface ITextRenderer : global::haxe.lang.IHxObject, global::sx.backend.interfaces.IRenderer {
		
		void setText(string text);
		
		object getFormat();
		
		void setFormat(object format);
		
	}
}


