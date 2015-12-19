package sx.tools;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class PaddingTools extends haxe.lang.HxObject
{
	public PaddingTools(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public PaddingTools()
	{
		//line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		sx.tools.PaddingTools.__hx_ctor_sx_tools_PaddingTools(this);
	}
	
	
	public static void __hx_ctor_sx_tools_PaddingTools(sx.tools.PaddingTools __temp_me150)
	{
	}
	
	
	public static double sumDip(sx.properties.metric.Padding padding, java.lang.String orientation)
	{
		//line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		{
			//line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			java.lang.String __temp_svar1 = (orientation);
			//line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			switch (__temp_svar1.hashCode())
			{
				case 1387629604:
				{
					//line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("horizontal")) 
					{
						//line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return ( padding.get_left().get_dip() + padding.get_right().get_dip() );
					}
					
					//line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
				case -1984141450:
				{
					//line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("vertical")) 
					{
						//line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return ( padding.get_top().get_dip() + padding.get_bottom().get_dip() );
					}
					
					//line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
			}
			
		}
		
		//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		return 0.0;
	}
	
	
	public static double sumPx(sx.properties.metric.Padding padding, java.lang.String orientation)
	{
		//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		{
			//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			java.lang.String __temp_svar1 = (orientation);
			//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			switch (__temp_svar1.hashCode())
			{
				case 1387629604:
				{
					//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("horizontal")) 
					{
						//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return ( padding.get_left().get_px() + padding.get_right().get_px() );
					}
					
					//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
				case -1984141450:
				{
					//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("vertical")) 
					{
						//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return ( padding.get_top().get_px() + padding.get_bottom().get_px() );
					}
					
					//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
			}
			
		}
		
		//line 98 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		return 0.0;
	}
	
	
	public static sx.properties.metric.Size side(sx.properties.metric.Padding padding, java.lang.String side)
	{
		//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		{
			//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			java.lang.String __temp_svar1 = (side);
			//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			switch (__temp_svar1.hashCode())
			{
				case 3317767:
				{
					//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("left")) 
					{
						//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return padding.get_left();
					}
					
					//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
				case -1383228885:
				{
					//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("bottom")) 
					{
						//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return padding.get_bottom();
					}
					
					//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
				case 108511772:
				{
					//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("right")) 
					{
						//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return padding.get_right();
					}
					
					//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
				case 115029:
				{
					//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("top")) 
					{
						//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return padding.get_top();
					}
					
					//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
			}
			
		}
		
		//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		return null;
	}
	
	
	public static sx.properties.metric.Size oppositeSide(sx.properties.metric.Padding padding, java.lang.String side)
	{
		//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		{
			//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			java.lang.String __temp_svar1 = (side);
			//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			switch (__temp_svar1.hashCode())
			{
				case 3317767:
				{
					//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("left")) 
					{
						//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return padding.get_right();
					}
					
					//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
				case -1383228885:
				{
					//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("bottom")) 
					{
						//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return padding.get_top();
					}
					
					//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
				case 108511772:
				{
					//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("right")) 
					{
						//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return padding.get_left();
					}
					
					//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
				case 115029:
				{
					//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					if (__temp_svar1.equals("top")) 
					{
						//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
						return padding.get_bottom();
					}
					
					//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					break;
				}
				
				
			}
			
		}
		
		//line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		return null;
	}
	
	
	public static boolean isZero(sx.properties.metric.Padding padding)
	{
		//line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		boolean leftZero = ( ((sx.properties.metric.Size) (padding.get_left()) ).__value == 0 );
		//line 142 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		boolean rightZero = ( ((sx.properties.metric.Size) (padding.get_right()) ).__value == 0 );
		//line 143 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		boolean topZero = ( ((sx.properties.metric.Size) (padding.get_top()) ).__value == 0 );
		//line 144 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		boolean bottomZero = ( ((sx.properties.metric.Size) (padding.get_bottom()) ).__value == 0 );
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		return ( ( ( leftZero && rightZero ) && topZero ) && bottomZero );
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		return new sx.tools.PaddingTools(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
		return new sx.tools.PaddingTools();
	}
	
	
}


