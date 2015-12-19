package hunit.utils;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TestCaseData_getTests_136__Fun extends haxe.lang.Function
{
	public TestCaseData_getTests_136__Fun(haxe.root.Array<java.lang.String> groups, hunit.utils.TestCaseData _g)
	{
		//line 136 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		super(1, 0);
		//line 136 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		this.groups = groups;
		//line 136 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		this._g = _g;
	}
	
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 136 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		java.lang.Object t = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((java.lang.Object) (__fn_float1) )) : (((java.lang.Object) (__fn_dyn1) )) );
		//line 136 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		return this._g.testIsInGroups(t, this.groups);
	}
	
	
	public haxe.root.Array<java.lang.String> groups;
	
	public hunit.utils.TestCaseData _g;
	
}


