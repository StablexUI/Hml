package hunit.call;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class CallCount extends haxe.lang.ParamEnum
{
	public CallCount(int index, java.lang.Object[] params)
	{
		//line 100 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		super(index, params);
	}
	
	
	public static final java.lang.String[] __hx_constructs = new java.lang.String[]{"Never", "Any", "Once", "AtLeast", "Exactly"};
	
	public static final hunit.call.CallCount Never = new hunit.call.CallCount(0, null);
	
	public static final hunit.call.CallCount Any = new hunit.call.CallCount(1, null);
	
	public static final hunit.call.CallCount Once = new hunit.call.CallCount(2, null);
	
	public static hunit.call.CallCount AtLeast(int amount)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/CallCount.hx"
		return new hunit.call.CallCount(3, new java.lang.Object[]{amount});
	}
	
	
	public static hunit.call.CallCount Exactly(int amount)
	{
		//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/call/CallCount.hx"
		return new hunit.call.CallCount(4, new java.lang.Object[]{amount});
	}
	
	
	@Override public java.lang.String getTag()
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/call/CallCount.hx"
		return hunit.call.CallCount.__hx_constructs[this.index];
	}
	
	
}


