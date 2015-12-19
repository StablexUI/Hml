package hunit.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class UnmetExpectationException extends hunit.exceptions.TestFailException
{
	public UnmetExpectationException(haxe.lang.EmptyObject empty)
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public UnmetExpectationException(hunit.call.Expect expect, java.lang.String reason, java.lang.Object pos)
	{
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
		hunit.exceptions.UnmetExpectationException.__hx_ctor_hunit_exceptions_UnmetExpectationException(this, expect, reason, pos);
	}
	
	
	public static void __hx_ctor_hunit_exceptions_UnmetExpectationException(hunit.exceptions.UnmetExpectationException __temp_me69, hunit.call.Expect expect, java.lang.String reason, java.lang.Object pos)
	{
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
		if (( reason == null )) 
		{
			//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
			reason = "";
		}
		
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
		java.lang.String file = haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(expect.pos, "fileName", true));
		//line 23 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
		int line = ((int) (haxe.lang.Runtime.getField_f(expect.pos, "lineNumber", true)) );
		//line 24 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
		java.lang.String msg = null;
		//line 24 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
		msg = ( ( "" + haxe.root.Std.string(expect) ) + (( (( reason.length() != 0 )) ? (( "" + reason )) : ("") )) );
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
		hunit.exceptions.TestFailException.__hx_ctor_hunit_exceptions_TestFailException(__temp_me69, msg, pos);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
		return new hunit.exceptions.UnmetExpectationException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
		return new hunit.exceptions.UnmetExpectationException(((hunit.call.Expect) (arr.__get(0)) ), haxe.lang.Runtime.toString(arr.__get(1)), arr.__get(2));
	}
	
	
}


