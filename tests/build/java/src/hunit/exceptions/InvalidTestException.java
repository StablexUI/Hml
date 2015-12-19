package hunit.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class InvalidTestException extends haxe.root.Exception
{
	public InvalidTestException(haxe.lang.EmptyObject empty)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/InvalidTestException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public InvalidTestException(java.lang.String message, java.lang.Object pos)
	{
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		hunit.exceptions.InvalidTestException.__hx_ctor_hunit_exceptions_InvalidTestException(this, message, pos);
	}
	
	
	public static void __hx_ctor_hunit_exceptions_InvalidTestException(hunit.exceptions.InvalidTestException __temp_me63, java.lang.String message, java.lang.Object pos)
	{
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		haxe.root.Exception.__hx_ctor__Exception(__temp_me63, message, pos);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/InvalidTestException.hx"
		return new hunit.exceptions.InvalidTestException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/InvalidTestException.hx"
		return new hunit.exceptions.InvalidTestException(haxe.lang.Runtime.toString(arr.__get(0)), arr.__get(1));
	}
	
	
}


