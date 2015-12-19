package hunit.utils;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TestCaseData_getTests_139__Fun extends haxe.lang.Function
{
	public TestCaseData_getTests_139__Fun(haxe.root.Array<java.lang.String> excludeGroups, hunit.utils.TestCaseData _g)
	{
		//line 139 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		super(1, 0);
		//line 139 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		this.excludeGroups = excludeGroups;
		//line 139 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		this._g = _g;
	}
	
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 139 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		java.lang.Object t1 = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((java.lang.Object) (__fn_float1) )) : (((java.lang.Object) (__fn_dyn1) )) );
		//line 139 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		return  ! (this._g.testIsInGroups(t1, this.excludeGroups)) ;
	}
	
	
	public haxe.root.Array<java.lang.String> excludeGroups;
	
	public hunit.utils.TestCaseData _g;
	
}


