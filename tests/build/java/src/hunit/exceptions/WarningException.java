package hunit.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class WarningException extends haxe.root.Exception
{
	public WarningException(haxe.lang.EmptyObject empty)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/WarningException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public WarningException(java.lang.String message, java.lang.Object pos)
	{
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		hunit.exceptions.WarningException.__hx_ctor_hunit_exceptions_WarningException(this, message, pos);
	}
	
	
	public static void __hx_ctor_hunit_exceptions_WarningException(hunit.exceptions.WarningException __temp_me70, java.lang.String message, java.lang.Object pos)
	{
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		haxe.root.Exception.__hx_ctor__Exception(__temp_me70, message, pos);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/WarningException.hx"
		return new hunit.exceptions.WarningException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/WarningException.hx"
		return new hunit.exceptions.WarningException(haxe.lang.Runtime.toString(arr.__get(0)), arr.__get(1));
	}
	
	
}


