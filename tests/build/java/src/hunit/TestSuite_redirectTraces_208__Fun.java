package hunit;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TestSuite_redirectTraces_208__Fun extends haxe.lang.Function
{
	public TestSuite_redirectTraces_208__Fun(haxe.lang.Function a1)
	{
		//line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		super(2, 0);
		//line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.a1 = a1;
	}
	
	
	@Override public java.lang.Object __hx_invoke2_o(double __fn_float1, java.lang.Object __fn_dyn1, double __fn_float2, java.lang.Object __fn_dyn2)
	{
		//line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		java.lang.Object a3 = ( (( __fn_dyn2 == haxe.lang.Runtime.undefined )) ? (((java.lang.Object) (__fn_float2) )) : (( (( __fn_dyn2 == null )) ? (null) : (((java.lang.Object) (__fn_dyn2) )) )) );
		//line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		java.lang.Object a2 = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((java.lang.Object) (__fn_float1) )) : (((java.lang.Object) (__fn_dyn1) )) );
		//line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		hunit.Utils.printTrace(this.a1, a2, a3);
		//line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		return null;
	}
	
	
	public haxe.lang.Function a1;
	
}


