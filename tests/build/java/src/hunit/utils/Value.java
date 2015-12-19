package hunit.utils;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Value extends haxe.lang.ParamEnum
{
	public Value(int index, java.lang.Object[] params)
	{
		//line 100 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		super(index, params);
	}
	
	
	public static final java.lang.String[] __hx_constructs = new java.lang.String[]{"Nothing", "Thing"};
	
	public static final hunit.utils.Value Nothing = new hunit.utils.Value(0, null);
	
	public static hunit.utils.Value Thing(java.lang.Object v)
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
		return new hunit.utils.Value(1, new java.lang.Object[]{v});
	}
	
	
	@Override public java.lang.String getTag()
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
		return hunit.utils.Value.__hx_constructs[this.index];
	}
	
	
}


