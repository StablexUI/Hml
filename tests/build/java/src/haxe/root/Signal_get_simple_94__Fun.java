package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Signal_get_simple_94__Fun extends haxe.lang.Function
{
	public Signal_get_simple_94__Fun(haxe.root.Signal _g)
	{
		//line 95 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		super(3, 0);
		//line 95 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this._g = _g;
	}
	
	
	@Override public java.lang.Object __hx_invoke3_o(double __fn_float1, java.lang.Object __fn_dyn1, double __fn_float2, java.lang.Object __fn_dyn2, double __fn_float3, java.lang.Object __fn_dyn3)
	{
		//line 94 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		int __2 = ( (( __fn_dyn3 == haxe.lang.Runtime.undefined )) ? (((int) (__fn_float3) )) : (((int) (haxe.lang.Runtime.toInt(__fn_dyn3)) )) );
		//line 94 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		sx.widgets.Widget __1 = ( (( __fn_dyn2 == haxe.lang.Runtime.undefined )) ? (((sx.widgets.Widget) (((java.lang.Object) (__fn_float2) )) )) : (((sx.widgets.Widget) (__fn_dyn2) )) );
		//line 94 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		sx.widgets.Widget __0 = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((sx.widgets.Widget) (((java.lang.Object) (__fn_float1) )) )) : (((sx.widgets.Widget) (__fn_dyn1) )) );
		//line 95 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this._g.set_simpleClicked(true);
		//line 95 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return null;
	}
	
	
	public haxe.root.Signal _g;
	
}


