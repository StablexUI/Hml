package sx.tools;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class WidgetTools extends haxe.lang.HxObject
{
	public WidgetTools(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public WidgetTools()
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		sx.tools.WidgetTools.__hx_ctor_sx_tools_WidgetTools(this);
	}
	
	
	public static void __hx_ctor_sx_tools_WidgetTools(sx.tools.WidgetTools __temp_me151)
	{
	}
	
	
	public static boolean sizeDependsOnParent(sx.widgets.Widget widget)
	{
		//line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		return ( haxe.lang.Runtime.valEq(widget.get_width().units, haxe.lang.Runtime.toString("pct")) || haxe.lang.Runtime.valEq(widget.get_height().units, haxe.lang.Runtime.toString("pct")) );
	}
	
	
	public static boolean positionDependsOnParent(sx.widgets.Widget widget)
	{
		//line 32 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		sx.properties.metric.Coordinate left = widget.get_left();
		//line 33 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		if (( left.selected && haxe.lang.Runtime.valEq(left.units, haxe.lang.Runtime.toString("pct")) )) 
		{
			//line 33 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return true;
		}
		
		//line 34 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		if (widget.get_right().selected) 
		{
			//line 34 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return true;
		}
		
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		sx.properties.metric.Coordinate top = widget.get_top();
		//line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		if (( top.selected && haxe.lang.Runtime.valEq(top.units, haxe.lang.Runtime.toString("pct")) )) 
		{
			//line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return true;
		}
		
		//line 38 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		if (widget.get_bottom().selected) 
		{
			//line 38 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return true;
		}
		
		//line 40 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		return false;
	}
	
	
	public static boolean positionDependsOnSize(sx.widgets.Widget widget)
	{
		//line 49 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		return ( widget.get_bottom().selected || widget.get_right().selected );
	}
	
	
	public static sx.properties.metric.Coordinate coordinate(sx.widgets.Widget widget, java.lang.String side)
	{
		//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		{
			//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			java.lang.String __temp_svar1 = (side);
			//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			switch (__temp_svar1.hashCode())
			{
				case 3317767:
				{
					//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					if (__temp_svar1.equals("left")) 
					{
						//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						return widget.get_left();
					}
					
					//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					break;
				}
				
				
				case -1383228885:
				{
					//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					if (__temp_svar1.equals("bottom")) 
					{
						//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						return widget.get_bottom();
					}
					
					//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					break;
				}
				
				
				case 108511772:
				{
					//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					if (__temp_svar1.equals("right")) 
					{
						//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						return widget.get_right();
					}
					
					//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					break;
				}
				
				
				case 115029:
				{
					//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					if (__temp_svar1.equals("top")) 
					{
						//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						return widget.get_top();
					}
					
					//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					break;
				}
				
				
			}
			
		}
		
		//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		return null;
	}
	
	
	public static sx.properties.metric.Coordinate selectedCoordinate(sx.widgets.Widget widget, java.lang.String orientation)
	{
		//line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		{
			//line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			java.lang.String __temp_svar1 = (orientation);
			//line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			switch (__temp_svar1.hashCode())
			{
				case 1387629604:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					if (__temp_svar1.equals("horizontal")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						if (widget.get_left().selected) 
						{
							//line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
							return widget.get_left();
						}
						else
						{
							//line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
							return widget.get_right();
						}
						
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					break;
				}
				
				
				case -1984141450:
				{
					//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					if (__temp_svar1.equals("vertical")) 
					{
						//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						if (widget.get_top().selected) 
						{
							//line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
							return widget.get_top();
						}
						else
						{
							//line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
							return widget.get_bottom();
						}
						
					}
					
					//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					break;
				}
				
				
			}
			
		}
		
		//line 70 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		return null;
	}
	
	
	public static java.lang.String selectedSide(sx.widgets.Widget widget, java.lang.String orientation)
	{
		//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		{
			//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			java.lang.String __temp_svar1 = (orientation);
			//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			switch (__temp_svar1.hashCode())
			{
				case 1387629604:
				{
					//line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					if (__temp_svar1.equals("horizontal")) 
					{
						//line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						if (widget.get_left().selected) 
						{
							//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
							return haxe.lang.Runtime.toString("left");
						}
						else
						{
							//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
							return haxe.lang.Runtime.toString("right");
						}
						
					}
					
					//line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					break;
				}
				
				
				case -1984141450:
				{
					//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					if (__temp_svar1.equals("vertical")) 
					{
						//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						if (widget.get_top().selected) 
						{
							//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
							return haxe.lang.Runtime.toString("top");
						}
						else
						{
							//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
							return haxe.lang.Runtime.toString("bottom");
						}
						
					}
					
					//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					break;
				}
				
				
			}
			
		}
		
		//line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		return null;
	}
	
	
	public static sx.properties.metric.Size size(sx.widgets.Widget widget, java.lang.String orientation)
	{
		//line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		{
			//line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			java.lang.String __temp_svar1 = (orientation);
			//line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			switch (__temp_svar1.hashCode())
			{
				case 1387629604:
				{
					//line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					if (__temp_svar1.equals("horizontal")) 
					{
						//line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						return widget.get_width();
					}
					
					//line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					break;
				}
				
				
				case -1984141450:
				{
					//line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					if (__temp_svar1.equals("vertical")) 
					{
						//line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						return widget.get_height();
					}
					
					//line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					break;
				}
				
				
			}
			
		}
		
		//line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		return null;
	}
	
	
	public static sx.widgets.Widget findEnabled(sx.widgets.Widget widget)
	{
		//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		sx.widgets.Widget current = widget;
		//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		boolean useNextEnabled = false;
		//line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		while (( current != null ))
		{
			//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			if (useNextEnabled) 
			{
				//line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
				if (current.enabled) 
				{
					//line 114 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					widget = current;
					//line 115 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					useNextEnabled = false;
					//line 116 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					break;
				}
				
			}
			else
			{
				//line 119 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
				if ( ! (current.enabled) ) 
				{
					//line 120 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					useNextEnabled = true;
				}
				
			}
			
			//line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			current = current.get_parent();
		}
		
		//line 127 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		if (useNextEnabled) 
		{
			//line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			widget = null;
		}
		
		//line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		return widget;
	}
	
	
	public static boolean hasOrigin(sx.widgets.Widget widget)
	{
		//line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		return ( widget.__origin != null );
	}
	
	
	public static boolean hasOffset(sx.widgets.Widget widget)
	{
		//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		return ( widget.__offset != null );
	}
	
	
	public static boolean isArrangeable(sx.widgets.Widget widget)
	{
		//line 160 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		return ( widget.arrangeable && widget.visible );
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		return new sx.tools.WidgetTools(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
		return new sx.tools.WidgetTools();
	}
	
	
}


