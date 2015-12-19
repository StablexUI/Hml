package hunit.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class NoExpectedException extends hunit.exceptions.TestFailException
{
	public NoExpectedException(haxe.lang.EmptyObject empty)
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/NoExpectedException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public NoExpectedException(hunit.match.Match exceptionMatch, java.lang.Object pos)
	{
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/NoExpectedException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/NoExpectedException.hx"
		hunit.exceptions.NoExpectedException.__hx_ctor_hunit_exceptions_NoExpectedException(this, exceptionMatch, pos);
	}
	
	
	public static void __hx_ctor_hunit_exceptions_NoExpectedException(hunit.exceptions.NoExpectedException __temp_me66, hunit.match.Match exceptionMatch, java.lang.Object pos)
	{
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/NoExpectedException.hx"
		hunit.exceptions.TestFailException.__hx_ctor_hunit_exceptions_TestFailException(__temp_me66, ( "Expected exception was not thrown: " + exceptionMatch.toString() ), pos);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/NoExpectedException.hx"
		return new hunit.exceptions.NoExpectedException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/NoExpectedException.hx"
		return new hunit.exceptions.NoExpectedException(((hunit.match.Match) (arr.__get(0)) ), arr.__get(1));
	}
	
	
}


