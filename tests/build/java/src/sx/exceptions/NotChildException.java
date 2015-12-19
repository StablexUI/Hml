package sx.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class NotChildException extends sx.exceptions.SxException
{
	public NotChildException(haxe.lang.EmptyObject empty)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public NotChildException(java.lang.String msg, java.lang.Object pos)
	{
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx"
		sx.exceptions.NotChildException.__hx_ctor_sx_exceptions_NotChildException(this, msg, pos);
	}
	
	
	public static void __hx_ctor_sx_exceptions_NotChildException(sx.exceptions.NotChildException __temp_me124, java.lang.String msg, java.lang.Object pos)
	{
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx"
		if (( msg == null )) 
		{
			//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx"
			msg = "Provided widget is not a child of this one.";
		}
		
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx"
		sx.exceptions.SxException.__hx_ctor_sx_exceptions_SxException(__temp_me124, msg, pos);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx"
		return new sx.exceptions.NotChildException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx"
		return new sx.exceptions.NotChildException(haxe.lang.Runtime.toString(arr.__get(0)), arr.__get(1));
	}
	
	
}


