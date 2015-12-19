package hunit.utils;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TestCaseData_processTestCaseRttiMeta_154__Fun extends haxe.lang.Function
{
	public TestCaseData_processTestCaseRttiMeta_154__Fun()
	{
		//line 154 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		super(1, 0);
	}
	
	
	public static hunit.utils.TestCaseData_processTestCaseRttiMeta_154__Fun __hx_current;
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 154 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		java.lang.String s = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (haxe.lang.Runtime.toString(__fn_float1)) : (haxe.lang.Runtime.toString(__fn_dyn1)) );
		//line 154 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		return haxe.root.StringTools.replace(s, "\"", "");
	}
	
	
}


