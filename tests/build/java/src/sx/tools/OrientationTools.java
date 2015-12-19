package sx.tools;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class OrientationTools extends haxe.lang.HxObject
{
	public OrientationTools(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public OrientationTools()
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		sx.tools.OrientationTools.__hx_ctor_sx_tools_OrientationTools(this);
	}
	
	
	public static void __hx_ctor_sx_tools_OrientationTools(sx.tools.OrientationTools __temp_me148)
	{
	}
	
	
	public static java.lang.String opposite(java.lang.String orientation)
	{
		//line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		{
			//line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			java.lang.String __temp_svar1 = (orientation);
			//line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			switch (__temp_svar1.hashCode())
			{
				case -1984141450:
				{
					//line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("vertical")) 
					{
						//line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return haxe.lang.Runtime.toString("horizontal");
					}
					
					//line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
				case 1387629604:
				{
					//line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("horizontal")) 
					{
						//line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return haxe.lang.Runtime.toString("vertical");
					}
					
					//line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
			}
			
		}
		
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		return null;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		return new sx.tools.OrientationTools(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		return new sx.tools.OrientationTools();
	}
	
	
}


