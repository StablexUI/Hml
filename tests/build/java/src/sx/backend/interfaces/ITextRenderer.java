package sx.backend.interfaces;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public interface ITextRenderer extends haxe.lang.IHxObject, sx.backend.interfaces.IRenderer
{
	void setText(java.lang.String text);
	
	java.lang.Object getFormat();
	
	void setFormat(java.lang.Object format);
	
}


