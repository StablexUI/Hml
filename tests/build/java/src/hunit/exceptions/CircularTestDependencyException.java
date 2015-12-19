package hunit.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class CircularTestDependencyException extends hunit.exceptions.InvalidTestException
{
	public CircularTestDependencyException(haxe.lang.EmptyObject empty)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/CircularTestDependencyException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public CircularTestDependencyException(java.lang.String message, java.lang.Object pos)
	{
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		hunit.exceptions.CircularTestDependencyException.__hx_ctor_hunit_exceptions_CircularTestDependencyException(this, message, pos);
	}
	
	
	public static void __hx_ctor_hunit_exceptions_CircularTestDependencyException(hunit.exceptions.CircularTestDependencyException __temp_me64, java.lang.String message, java.lang.Object pos)
	{
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		hunit.exceptions.InvalidTestException.__hx_ctor_hunit_exceptions_InvalidTestException(__temp_me64, message, pos);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/CircularTestDependencyException.hx"
		return new hunit.exceptions.CircularTestDependencyException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/CircularTestDependencyException.hx"
		return new hunit.exceptions.CircularTestDependencyException(haxe.lang.Runtime.toString(arr.__get(0)), arr.__get(1));
	}
	
	
}


