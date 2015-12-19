package sx.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class LockedPropertyException extends haxe.root.Exception
{
	public LockedPropertyException(haxe.lang.EmptyObject empty)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public LockedPropertyException(java.lang.String msg, java.lang.Object pos)
	{
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx"
		sx.exceptions.LockedPropertyException.__hx_ctor_sx_exceptions_LockedPropertyException(this, msg, pos);
	}
	
	
	public static void __hx_ctor_sx_exceptions_LockedPropertyException(sx.exceptions.LockedPropertyException __temp_me121, java.lang.String msg, java.lang.Object pos)
	{
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx"
		if (( msg == null )) 
		{
			//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx"
			msg = "Property cannot be changed.";
		}
		
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx"
		haxe.root.Exception.__hx_ctor__Exception(__temp_me121, msg, pos);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx"
		return new sx.exceptions.LockedPropertyException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx"
		return new sx.exceptions.LockedPropertyException(haxe.lang.Runtime.toString(arr.__get(0)), arr.__get(1));
	}
	
	
}


