package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Sys extends haxe.lang.HxObject
{
	public Sys(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Sys()
	{
		//line 27 "/usr/lib/haxe/std/java/_std/Sys.hx"
		haxe.root.Sys.__hx_ctor__Sys(this);
	}
	
	
	public static void __hx_ctor__Sys(haxe.root.Sys __temp_me23)
	{
	}
	
	
	public static double time()
	{
		//line 129 "/usr/lib/haxe/std/java/_std/Sys.hx"
		long __temp_stmt1 = 0L;
		//line 129 "/usr/lib/haxe/std/java/_std/Sys.hx"
		{
			//line 129 "/usr/lib/haxe/std/java/_std/Sys.hx"
			long a = java.lang.System.currentTimeMillis();
			//line 129 "/usr/lib/haxe/std/java/_std/Sys.hx"
			__temp_stmt1 = ((long) (( ((long) (a) ) / ((long) (1000) ) )) );
		}
		
		//line 129 "/usr/lib/haxe/std/java/_std/Sys.hx"
		return ((double) (haxe.lang.Runtime.toDouble(__temp_stmt1)) );
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 27 "/usr/lib/haxe/std/java/_std/Sys.hx"
		return new haxe.root.Sys(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 27 "/usr/lib/haxe/std/java/_std/Sys.hx"
		return new haxe.root.Sys();
	}
	
	
}


