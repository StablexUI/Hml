package hunit.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TestFailException extends haxe.root.Exception
{
	public TestFailException(haxe.lang.EmptyObject empty)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/TestFailException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public TestFailException(java.lang.String message, java.lang.Object pos)
	{
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		hunit.exceptions.TestFailException.__hx_ctor_hunit_exceptions_TestFailException(this, message, pos);
	}
	
	
	public static void __hx_ctor_hunit_exceptions_TestFailException(hunit.exceptions.TestFailException __temp_me61, java.lang.String message, java.lang.Object pos)
	{
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		haxe.root.Exception.__hx_ctor__Exception(__temp_me61, message, pos);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/TestFailException.hx"
		return new hunit.exceptions.TestFailException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/TestFailException.hx"
		return new hunit.exceptions.TestFailException(haxe.lang.Runtime.toString(arr.__get(0)), arr.__get(1));
	}
	
	
}


