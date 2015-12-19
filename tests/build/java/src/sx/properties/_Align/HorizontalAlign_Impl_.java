package sx.properties._Align;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class HorizontalAlign_Impl_
{
	static
	{
		//line 14 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		sx.properties._Align.HorizontalAlign_Impl_.Left = haxe.lang.Runtime.toString("left");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		sx.properties._Align.HorizontalAlign_Impl_.Center = haxe.lang.Runtime.toString("center");
		//line 16 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		sx.properties._Align.HorizontalAlign_Impl_.Right = haxe.lang.Runtime.toString("right");
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		sx.properties._Align.HorizontalAlign_Impl_.HNone = haxe.lang.Runtime.toString("none");
	}
	
	public static java.lang.String Left;
	
	public static java.lang.String Center;
	
	public static java.lang.String Right;
	
	public static java.lang.String HNone;
	
	public static sx.properties.Align andVertical(java.lang.String this1, java.lang.String b)
	{
		//line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		sx.properties.Align weakAlign = sx.properties.abstracts._AAlign.AAlign_Impl_.fromVertical(b);
		//line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		weakAlign.set_horizontal(haxe.lang.Runtime.toString(this1));
		//line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		return weakAlign;
	}
	
	
}


