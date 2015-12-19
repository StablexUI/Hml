package hunit.warnings;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class NoTestsWarning extends hunit.warnings.Warning
{
	public NoTestsWarning(haxe.lang.EmptyObject empty)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/NoTestsWarning.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public NoTestsWarning(java.lang.String message)
	{
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		hunit.warnings.NoTestsWarning.__hx_ctor_hunit_warnings_NoTestsWarning(this, message);
	}
	
	
	public static void __hx_ctor_hunit_warnings_NoTestsWarning(hunit.warnings.NoTestsWarning __temp_me101, java.lang.String message)
	{
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		hunit.warnings.Warning.__hx_ctor_hunit_warnings_Warning(__temp_me101, message);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/NoTestsWarning.hx"
		return new hunit.warnings.NoTestsWarning(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/NoTestsWarning.hx"
		return new hunit.warnings.NoTestsWarning(haxe.lang.Runtime.toString(arr.__get(0)));
	}
	
	
}


