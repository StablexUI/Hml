package sx.layout;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Layout extends haxe.lang.HxObject
{
	public Layout(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Layout()
	{
		//line 31 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		sx.layout.Layout.__hx_ctor_sx_layout_Layout(this);
	}
	
	
	public static void __hx_ctor_sx_layout_Layout(sx.layout.Layout __temp_me126)
	{
		//line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		__temp_me126.autoArrange = true;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		return new sx.layout.Layout(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		return new sx.layout.Layout();
	}
	
	
	public boolean autoArrange;
	
	public sx.widgets.Widget __widget;
	
	public void arrangeChildren()
	{
	}
	
	
	public void usedBy(sx.widgets.Widget widget)
	{
		//line 52 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		if (( this.__widget != null )) 
		{
			//line 52 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			this.__widget.set_layout(null);
		}
		
		//line 53 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		this.__widget = widget;
		//line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		{
			//line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			this.__widget.get_onResize().add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetResized")) ));
			//line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			this.__widget.get_onChildAdded().add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__childAdded")) ));
			//line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			this.__widget.get_onChildRemoved().add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__childRemoved")) ));
		}
		
		//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		if (widget.initialized) 
		{
			//line 57 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			this.arrangeChildren();
		}
		else
		{
			//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			widget.get_onInitialize().add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetInitialized")) ));
		}
		
	}
	
	
	public void removed()
	{
		//line 70 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		if (( this.__widget != null )) 
		{
			//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			{
				//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				sx.widgets.Widget widget = this.__widget;
				//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				if ( ! (widget.initialized) ) 
				{
					//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					widget.get_onInitialize().remove(((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetInitialized")) ));
				}
				
				//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				widget.get_onResize().remove(((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetResized")) ));
				//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				widget.get_onChildAdded().remove(((haxe.lang.Function) (new haxe.lang.Closure(this, "__childAdded")) ));
				//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				widget.get_onChildRemoved().remove(((haxe.lang.Function) (new haxe.lang.Closure(this, "__childRemoved")) ));
			}
			
			//line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			this.__widget = null;
		}
		
	}
	
	
	public boolean __isChildArrangeable(sx.widgets.Widget child)
	{
		//line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		return ( child.arrangeable && child.visible );
	}
	
	
	public final void __hookWidget(sx.widgets.Widget widget)
	{
		//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		this.__widget.get_onResize().add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetResized")) ));
		//line 92 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		this.__widget.get_onChildAdded().add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__childAdded")) ));
		//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		this.__widget.get_onChildRemoved().add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__childRemoved")) ));
	}
	
	
	public final void __releaseWidget(sx.widgets.Widget widget)
	{
		//line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		if ( ! (widget.initialized) ) 
		{
			//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			widget.get_onInitialize().remove(((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetInitialized")) ));
		}
		
		//line 106 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		widget.get_onResize().remove(((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetResized")) ));
		//line 107 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		widget.get_onChildAdded().remove(((haxe.lang.Function) (new haxe.lang.Closure(this, "__childAdded")) ));
		//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		widget.get_onChildRemoved().remove(((haxe.lang.Function) (new haxe.lang.Closure(this, "__childRemoved")) ));
	}
	
	
	public void __widgetInitialized(sx.widgets.Widget widget)
	{
		//line 117 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		widget.get_onInitialize().remove(((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetInitialized")) ));
		//line 118 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		if (( this.autoArrange && ( this.__widget == widget ) )) 
		{
			//line 119 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			this.arrangeChildren();
		}
		
	}
	
	
	public void __childAdded(sx.widgets.Widget parent, sx.widgets.Widget child)
	{
		//line 129 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		if (( ( this.autoArrange && this.__widget.initialized ) && this.__isChildArrangeable(child) )) 
		{
			//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			this.arrangeChildren();
		}
		
	}
	
	
	public void __childRemoved(sx.widgets.Widget parent, sx.widgets.Widget child)
	{
		//line 140 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		if (( ( this.autoArrange && this.__widget.initialized ) && this.__isChildArrangeable(child) )) 
		{
			//line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			this.arrangeChildren();
		}
		
	}
	
	
	public void __widgetResized(sx.widgets.Widget widget, sx.properties.metric.Size changed, java.lang.String previousUnits, double previousValue)
	{
		//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		if (( this.autoArrange && this.__widget.initialized )) 
		{
			//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			this.arrangeChildren();
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		{
			//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			switch (field.hashCode())
			{
				case -16318940:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__widget")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.__widget = ((sx.widgets.Widget) (value) );
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case -2125534467:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("autoArrange")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.autoArrange = haxe.lang.Runtime.toBool(value);
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		{
			//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			switch (field.hashCode())
			{
				case -653778068:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__widgetResized")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetResized")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case -2125534467:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("autoArrange")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return this.autoArrange;
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case -1043775612:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__childRemoved")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__childRemoved")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case -16318940:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__widget")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return this.__widget;
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case 1793229092:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__childAdded")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__childAdded")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case -349865525:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("arrangeChildren")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "arrangeChildren")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case -2059349488:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__widgetInitialized")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetInitialized")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case -836044556:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("usedBy")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "usedBy")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case -336245429:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__releaseWidget")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__releaseWidget")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case 1091836000:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("removed")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "removed")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case 1687570727:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__hookWidget")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__hookWidget")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case 1549745524:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__isChildArrangeable")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__isChildArrangeable")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		{
			//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			switch (field.hashCode())
			{
				case -653778068:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__widgetResized")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.__widgetResized(((sx.widgets.Widget) (dynargs.__get(0)) ), ((sx.properties.metric.Size) (dynargs.__get(1)) ), haxe.lang.Runtime.toString(dynargs.__get(2)), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(3))) ));
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case -349865525:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("arrangeChildren")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.arrangeChildren();
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case -1043775612:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__childRemoved")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.__childRemoved(((sx.widgets.Widget) (dynargs.__get(0)) ), ((sx.widgets.Widget) (dynargs.__get(1)) ));
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case -836044556:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("usedBy")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.usedBy(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case 1793229092:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__childAdded")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.__childAdded(((sx.widgets.Widget) (dynargs.__get(0)) ), ((sx.widgets.Widget) (dynargs.__get(1)) ));
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case 1091836000:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("removed")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.removed();
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case -2059349488:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__widgetInitialized")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.__widgetInitialized(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case 1549745524:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__isChildArrangeable")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return this.__isChildArrangeable(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case -336245429:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__releaseWidget")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.__releaseWidget(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
				case 1687570727:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if (field.equals("__hookWidget")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.__hookWidget(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		baseArr.push("__widget");
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		baseArr.push("autoArrange");
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
		{
			//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


