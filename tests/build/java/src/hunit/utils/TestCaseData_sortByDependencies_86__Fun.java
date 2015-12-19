package hunit.utils;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TestCaseData_sortByDependencies_86__Fun extends haxe.lang.Function
{
	public TestCaseData_sortByDependencies_86__Fun()
	{
		//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		super(2, 1);
	}
	
	
	public static hunit.utils.TestCaseData_sortByDependencies_86__Fun __hx_current;
	
	@Override public double __hx_invoke2_f(double __fn_float1, java.lang.Object __fn_dyn1, double __fn_float2, java.lang.Object __fn_dyn2)
	{
		//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		java.lang.Object b = ( (( __fn_dyn2 == haxe.lang.Runtime.undefined )) ? (((java.lang.Object) (__fn_float2) )) : (((java.lang.Object) (__fn_dyn2) )) );
		//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		java.lang.Object a = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((java.lang.Object) (__fn_float1) )) : (((java.lang.Object) (__fn_dyn1) )) );
		//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		return ((double) (( ((haxe.root.Array<java.lang.String>) (haxe.lang.Runtime.getField(a, "depends", true)) ).length - ((haxe.root.Array<java.lang.String>) (haxe.lang.Runtime.getField(b, "depends", true)) ).length )) );
	}
	
	
}


