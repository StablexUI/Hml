package hunit.utils;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class ValueTools extends haxe.lang.HxObject
{
	public ValueTools(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public ValueTools()
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
		hunit.utils.ValueTools.__hx_ctor_hunit_utils_ValueTools(this);
	}
	
	
	public static void __hx_ctor_hunit_utils_ValueTools(hunit.utils.ValueTools __temp_me96)
	{
	}
	
	
	public static <T> boolean hasValue(hunit.utils.Value holder)
	{
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
		if (( holder == null )) 
		{
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
			return false;
		}
		
		//line 30 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
		if (( holder != null )) 
		{
			//line 30 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
			switch (holder.index)
			{
				case 0:
				{
					//line 31 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
					return false;
				}
				
				
				case 1:
				{
					//line 32 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
					return true;
				}
				
				
			}
			
		}
		
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
		return false;
	}
	
	
	public static <T> T getValue(hunit.utils.Value holder)
	{
		//line 45 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
		if (( holder == null )) 
		{
			//line 46 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
			throw haxe.lang.HaxeException.wrap(new haxe.root.Exception("No value here", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.utils.ValueTools", "Value.hx", "getValue"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (46) )) )})));
		}
		
		//line 49 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
		if (( holder != null )) 
		{
			//line 49 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
			switch (holder.index)
			{
				case 0:
				{
					//line 50 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
					throw haxe.lang.HaxeException.wrap(new haxe.root.Exception("No value here", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.utils.ValueTools", "Value.hx", "getValue"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (50) )) )})));
				}
				
				
				case 1:
				{
					//line 49 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
					T v = ((T) (holder.params[0]) );
					//line 51 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
					return v;
				}
				
				
			}
			
		}
		
		//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
		throw haxe.lang.HaxeException.wrap(new haxe.root.Exception("No value here", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.utils.ValueTools", "Value.hx", "getValue"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (54) )) )})));
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
		return new hunit.utils.ValueTools(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
		return new hunit.utils.ValueTools();
	}
	
	
}


