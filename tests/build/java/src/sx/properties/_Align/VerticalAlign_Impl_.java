package sx.properties._Align;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class VerticalAlign_Impl_
{
	static
	{
		//line 39 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		sx.properties._Align.VerticalAlign_Impl_.Top = haxe.lang.Runtime.toString("top");
		//line 40 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		sx.properties._Align.VerticalAlign_Impl_.Middle = haxe.lang.Runtime.toString("middle");
		//line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		sx.properties._Align.VerticalAlign_Impl_.Bottom = haxe.lang.Runtime.toString("bottom");
		//line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		sx.properties._Align.VerticalAlign_Impl_.VNone = haxe.lang.Runtime.toString("none");
	}
	
	public static java.lang.String Top;
	
	public static java.lang.String Middle;
	
	public static java.lang.String Bottom;
	
	public static java.lang.String VNone;
	
	public static sx.properties.Align andHorizontal(java.lang.String this1, java.lang.String b)
	{
		//line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		sx.properties.Align weakAlign = sx.properties.abstracts._AAlign.AAlign_Impl_.fromHorizontal(b);
		//line 48 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		weakAlign.set_vertical(haxe.lang.Runtime.toString(this1));
		//line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		return weakAlign;
	}
	
	
}


