package hunit.warnings;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class NoAssertionsWarning extends hunit.warnings.Warning
{
	public NoAssertionsWarning(haxe.lang.EmptyObject empty)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/NoAssertionsWarning.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public NoAssertionsWarning(java.lang.String message)
	{
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		hunit.warnings.NoAssertionsWarning.__hx_ctor_hunit_warnings_NoAssertionsWarning(this, message);
	}
	
	
	public static void __hx_ctor_hunit_warnings_NoAssertionsWarning(hunit.warnings.NoAssertionsWarning __temp_me100, java.lang.String message)
	{
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		hunit.warnings.Warning.__hx_ctor_hunit_warnings_Warning(__temp_me100, message);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/NoAssertionsWarning.hx"
		return new hunit.warnings.NoAssertionsWarning(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/NoAssertionsWarning.hx"
		return new hunit.warnings.NoAssertionsWarning(haxe.lang.Runtime.toString(arr.__get(0)));
	}
	
	
}


