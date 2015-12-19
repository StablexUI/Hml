package sx.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class OutOfBoundsException extends sx.exceptions.SxException
{
	public OutOfBoundsException(haxe.lang.EmptyObject empty)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public OutOfBoundsException(java.lang.String msg, java.lang.Object pos)
	{
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx"
		sx.exceptions.OutOfBoundsException.__hx_ctor_sx_exceptions_OutOfBoundsException(this, msg, pos);
	}
	
	
	public static void __hx_ctor_sx_exceptions_OutOfBoundsException(sx.exceptions.OutOfBoundsException __temp_me125, java.lang.String msg, java.lang.Object pos)
	{
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx"
		if (( msg == null )) 
		{
			//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx"
			msg = "Provided argument does not fit required bounds.";
		}
		
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx"
		sx.exceptions.SxException.__hx_ctor_sx_exceptions_SxException(__temp_me125, msg, pos);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx"
		return new sx.exceptions.OutOfBoundsException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx"
		return new sx.exceptions.OutOfBoundsException(haxe.lang.Runtime.toString(arr.__get(0)), arr.__get(1));
	}
	
	
}


