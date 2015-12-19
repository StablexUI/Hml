package sx.tools;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class SizeTools extends haxe.lang.HxObject
{
	public SizeTools(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public SizeTools()
	{
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		sx.tools.SizeTools.__hx_ctor_sx_tools_SizeTools(this);
	}
	
	
	public static void __hx_ctor_sx_tools_SizeTools(sx.tools.SizeTools __temp_me149)
	{
	}
	
	
	public static boolean isZero(sx.properties.metric.Size size)
	{
		//line 45 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		return ( size.__value == 0 );
	}
	
	
	public static boolean notZero(sx.properties.metric.Size size)
	{
		//line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		return ( size.__value != 0 );
	}
	
	
	public static double get(sx.properties.metric.Size size, java.lang.String units)
	{
		//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		{
			//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			java.lang.String __temp_svar1 = (units);
			//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			switch (__temp_svar1.hashCode())
			{
				case 99467:
				{
					//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("dip")) 
					{
						//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return size.get_dip();
					}
					
					//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
				case 110817:
				{
					//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("pct")) 
					{
						//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return size.get_pct();
					}
					
					//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
				case 3592:
				{
					//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("px")) 
					{
						//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return size.get_px();
					}
					
					//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
			}
			
		}
		
		//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		return 0.0;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		return new sx.tools.SizeTools(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		return new sx.tools.SizeTools();
	}
	
	
}


