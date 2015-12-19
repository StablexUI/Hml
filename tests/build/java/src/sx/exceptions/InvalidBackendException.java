package sx.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class InvalidBackendException extends sx.exceptions.SxException
{
	public InvalidBackendException(haxe.lang.EmptyObject empty)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/InvalidBackendException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public InvalidBackendException(java.lang.String msg, java.lang.Object pos)
	{
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
		sx.exceptions.InvalidBackendException.__hx_ctor_sx_exceptions_InvalidBackendException(this, msg, pos);
	}
	
	
	public static void __hx_ctor_sx_exceptions_InvalidBackendException(sx.exceptions.InvalidBackendException __temp_me120, java.lang.String msg, java.lang.Object pos)
	{
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
		sx.exceptions.SxException.__hx_ctor_sx_exceptions_SxException(__temp_me120, msg, pos);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/InvalidBackendException.hx"
		return new sx.exceptions.InvalidBackendException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/InvalidBackendException.hx"
		return new sx.exceptions.InvalidBackendException(haxe.lang.Runtime.toString(arr.__get(0)), arr.__get(1));
	}
	
	
}


