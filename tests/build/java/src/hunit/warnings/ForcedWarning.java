package hunit.warnings;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class ForcedWarning extends hunit.warnings.Warning
{
	public ForcedWarning(haxe.lang.EmptyObject empty)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/ForcedWarning.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public ForcedWarning(java.lang.String message)
	{
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		hunit.warnings.ForcedWarning.__hx_ctor_hunit_warnings_ForcedWarning(this, message);
	}
	
	
	public static void __hx_ctor_hunit_warnings_ForcedWarning(hunit.warnings.ForcedWarning __temp_me98, java.lang.String message)
	{
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		hunit.warnings.Warning.__hx_ctor_hunit_warnings_Warning(__temp_me98, message);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/ForcedWarning.hx"
		return new hunit.warnings.ForcedWarning(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/ForcedWarning.hx"
		return new hunit.warnings.ForcedWarning(haxe.lang.Runtime.toString(arr.__get(0)));
	}
	
	
}


