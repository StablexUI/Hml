package hunit.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class AssertException extends hunit.exceptions.TestFailException
{
	public AssertException(haxe.lang.EmptyObject empty)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/AssertException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public AssertException(java.lang.String message, java.lang.Object pos)
	{
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		hunit.exceptions.AssertException.__hx_ctor_hunit_exceptions_AssertException(this, message, pos);
	}
	
	
	public static void __hx_ctor_hunit_exceptions_AssertException(hunit.exceptions.AssertException __temp_me62, java.lang.String message, java.lang.Object pos)
	{
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		hunit.exceptions.TestFailException.__hx_ctor_hunit_exceptions_TestFailException(__temp_me62, message, pos);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/AssertException.hx"
		return new hunit.exceptions.AssertException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/AssertException.hx"
		return new hunit.exceptions.AssertException(haxe.lang.Runtime.toString(arr.__get(0)), arr.__get(1));
	}
	
	
}


