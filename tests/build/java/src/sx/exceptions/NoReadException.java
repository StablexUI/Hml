package sx.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class NoReadException extends sx.exceptions.SxException
{
	public NoReadException(haxe.lang.EmptyObject empty)
	{
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public NoReadException(java.lang.String msg, java.lang.Object pos)
	{
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx"
		sx.exceptions.NoReadException.__hx_ctor_sx_exceptions_NoReadException(this, msg, pos);
	}
	
	
	public static void __hx_ctor_sx_exceptions_NoReadException(sx.exceptions.NoReadException __temp_me123, java.lang.String msg, java.lang.Object pos)
	{
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx"
		if (( msg == null )) 
		{
			//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx"
			msg = "Accessing this property for reading is not allowed.";
		}
		
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx"
		sx.exceptions.SxException.__hx_ctor_sx_exceptions_SxException(__temp_me123, msg, pos);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx"
		return new sx.exceptions.NoReadException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx"
		return new sx.exceptions.NoReadException(haxe.lang.Runtime.toString(arr.__get(0)), arr.__get(1));
	}
	
	
}


