package sx.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class LoopedResizeException extends sx.exceptions.SxException
{
	public LoopedResizeException(haxe.lang.EmptyObject empty)
	{
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public LoopedResizeException(java.lang.String msg, java.lang.Object pos)
	{
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx"
		sx.exceptions.LoopedResizeException.__hx_ctor_sx_exceptions_LoopedResizeException(this, msg, pos);
	}
	
	
	public static void __hx_ctor_sx_exceptions_LoopedResizeException(sx.exceptions.LoopedResizeException __temp_me122, java.lang.String msg, java.lang.Object pos)
	{
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx"
		if (( msg == null )) 
		{
			//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx"
			msg = "Possible endless resizing loop detected.";
		}
		
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx"
		sx.exceptions.SxException.__hx_ctor_sx_exceptions_SxException(__temp_me122, msg, pos);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx"
		return new sx.exceptions.LoopedResizeException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx"
		return new sx.exceptions.LoopedResizeException(haxe.lang.Runtime.toString(arr.__get(0)), arr.__get(1));
	}
	
	
}


