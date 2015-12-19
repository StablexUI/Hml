package sx.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class SxException extends haxe.root.Exception
{
	public SxException(haxe.lang.EmptyObject empty)
	{
		//line 10 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public SxException(java.lang.String msg, java.lang.Object pos)
	{
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
		sx.exceptions.SxException.__hx_ctor_sx_exceptions_SxException(this, msg, pos);
	}
	
	
	public static void __hx_ctor_sx_exceptions_SxException(sx.exceptions.SxException __temp_me119, java.lang.String msg, java.lang.Object pos)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
		if (( msg == null )) 
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
			msg = "";
		}
		
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
		haxe.root.Exception.__hx_ctor__Exception(__temp_me119, msg, pos);
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
		__temp_me119.truncateStack(new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.exceptions.SxException", "SxException.hx", "new"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (20) )) )}), 1);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 10 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
		return new sx.exceptions.SxException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 10 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
		return new sx.exceptions.SxException(haxe.lang.Runtime.toString(arr.__get(0)), arr.__get(1));
	}
	
	
}


