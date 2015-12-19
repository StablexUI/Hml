package hunit.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class UnexpectedCallException extends hunit.exceptions.TestFailException
{
	public UnexpectedCallException(haxe.lang.EmptyObject empty)
	{
		//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public UnexpectedCallException(hunit.call.Call call, hunit.call.Expect expect, java.lang.String reason, java.lang.Object pos)
	{
		//line 52 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 52 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
		hunit.exceptions.UnexpectedCallException.__hx_ctor_hunit_exceptions_UnexpectedCallException(this, call, expect, reason, pos);
	}
	
	
	public static void __hx_ctor_hunit_exceptions_UnexpectedCallException(hunit.exceptions.UnexpectedCallException __temp_me67, hunit.call.Call call, hunit.call.Expect expect, java.lang.String reason, java.lang.Object pos)
	{
		//line 50 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
		java.lang.String msg = null;
		//line 50 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
		if (( reason != null )) 
		{
			//line 50 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
			msg = reason;
		}
		else
		{
			//line 50 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
			msg = hunit.exceptions.UnexpectedCallException.generateMessage(call, expect);
		}
		
		//line 52 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
		hunit.exceptions.TestFailException.__hx_ctor_hunit_exceptions_TestFailException(__temp_me67, msg, pos);
		//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
		__temp_me67.stack = ((haxe.root.Array<haxe.StackItem>) (haxe.root.Exception.processCallStackOnCreation.__hx_invoke1_o(0.0, call.stack)) );
	}
	
	
	public static java.lang.String generateMessage(hunit.call.Call call, hunit.call.Expect expect)
	{
		//line 28 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
		java.lang.String expectMsg = "";
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
		if (( expect != null )) 
		{
			//line 30 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
			java.lang.String s = null;
			//line 30 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
			if (( expect.timesMatched == 1 )) 
			{
				//line 30 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
				s = "";
			}
			else
			{
				//line 30 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
				s = "s";
			}
			
			//line 31 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
			expectMsg = ( ( ( ( ( ( " " + haxe.root.Std.string(expect) ) + ", but called " ) + expect.timesMatched ) + " time" ) + s ) + " and last one was" );
		}
		
		//line 34 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
		java.lang.String msg = ( ( ( "Unexpected call:" + expectMsg ) + " " ) + haxe.root.Std.string(call) );
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
		return msg;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
		return new hunit.exceptions.UnexpectedCallException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
		return new hunit.exceptions.UnexpectedCallException(((hunit.call.Call) (arr.__get(0)) ), ((hunit.call.Expect) (arr.__get(1)) ), haxe.lang.Runtime.toString(arr.__get(2)), arr.__get(3));
	}
	
	
}


