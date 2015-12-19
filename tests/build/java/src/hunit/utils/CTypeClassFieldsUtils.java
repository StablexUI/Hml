package hunit.utils;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class CTypeClassFieldsUtils extends haxe.lang.HxObject
{
	static
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
		hunit.utils.CTypeClassFieldsUtils.TEST_INDICATOR = "test";
	}
	
	public CTypeClassFieldsUtils(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public CTypeClassFieldsUtils()
	{
		//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
		hunit.utils.CTypeClassFieldsUtils.__hx_ctor_hunit_utils_CTypeClassFieldsUtils(this);
	}
	
	
	public static void __hx_ctor_hunit_utils_CTypeClassFieldsUtils(hunit.utils.CTypeClassFieldsUtils __temp_me94)
	{
	}
	
	
	public static java.lang.String TEST_INDICATOR;
	
	public static boolean isTest(java.lang.Object field)
	{
		//line 23 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
		if (haxe.lang.Runtime.valEq(haxe.lang.StringExt.substr(haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(field, "name", true)), 0, "test".length()), "test")) 
		{
			//line 24 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
			return true;
		}
		else
		{
			//line 27 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
			int _g = 0;
			//line 27 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
			haxe.root.Array<java.lang.Object> _g1 = ((haxe.root.Array<java.lang.Object>) (haxe.lang.Runtime.getField(field, "meta", true)) );
			//line 27 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
			while (( _g < _g1.length ))
			{
				//line 27 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
				java.lang.Object meta = _g1.__get(_g);
				//line 27 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
				 ++ _g;
				//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
				if (haxe.lang.Runtime.valEq(haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(meta, "name", true)), "test")) 
				{
					//line 30 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
					return true;
				}
				
			}
			
		}
		
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
		return false;
	}
	
	
	public static boolean mIsTest(java.lang.Object field)
	{
		//line 46 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
		if (haxe.lang.Runtime.valEq(haxe.lang.StringExt.substr(haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(field, "name", true)), 0, "test".length()), "test")) 
		{
			//line 47 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
			return true;
		}
		else
		{
			//line 50 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
			return haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(haxe.lang.Runtime.getField(field, "meta", true), "has", new haxe.root.Array(new java.lang.Object[]{"test"})));
		}
		
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
		return new hunit.utils.CTypeClassFieldsUtils(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
		return new hunit.utils.CTypeClassFieldsUtils();
	}
	
	
}


