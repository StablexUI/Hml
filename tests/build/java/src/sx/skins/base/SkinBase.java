package sx.skins.base;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class SkinBase extends haxe.lang.HxObject
{
	public SkinBase(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public SkinBase()
	{
		//line 28 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		sx.skins.base.SkinBase.__hx_ctor_sx_skins_base_SkinBase(this);
	}
	
	
	public static void __hx_ctor_sx_skins_base_SkinBase(sx.skins.base.SkinBase __temp_me146)
	{
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		return new sx.skins.base.SkinBase(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		return new sx.skins.base.SkinBase();
	}
	
	
	
	
	public sx.properties.metric.Padding __padding;
	
	public sx.widgets.Widget __widget;
	
	public void refresh()
	{
	}
	
	
	public boolean hasPadding()
	{
		//line 48 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		return ( this.__padding != null );
	}
	
	
	public void usedBy(sx.widgets.Widget widget)
	{
		//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		if (( this.__widget != null )) 
		{
			//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			this.__widget.set_skin(null);
		}
		
		//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		this.__widget = widget;
		//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		this.__widget.get_onResize().add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetResized")) ));
		//line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		if (this.__widget.initialized) 
		{
			//line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			this.refresh();
		}
		
	}
	
	
	public void removed()
	{
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		if (( this.__widget != null )) 
		{
			//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			this.__widget.get_onResize().remove(((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetResized")) ));
			//line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			this.__widget = null;
		}
		
	}
	
	
	public void __widgetResized(sx.widgets.Widget widget, sx.properties.metric.Size changed, java.lang.String previousUnits, double previousValue)
	{
		//line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		if (this.__widget.initialized) 
		{
			//line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			this.refresh();
		}
		
	}
	
	
	public sx.properties.metric.Size __widgetWidthProvider()
	{
		//line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		if (( this.__widget == null )) 
		{
			//line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			return sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
		}
		else
		{
			//line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			return this.__widget.get_width();
		}
		
	}
	
	
	public sx.properties.metric.Size __widgetHeightProvider()
	{
		//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		if (( this.__widget == null )) 
		{
			//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			return sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
		}
		else
		{
			//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			return this.__widget.get_width();
		}
		
	}
	
	
	public sx.properties.metric.Padding get_padding()
	{
		//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		if (( this.__padding == null )) 
		{
			//line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			this.__padding = new sx.properties.metric.Padding();
			//line 114 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			this.__padding.ownerWidth = ((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetWidthProvider")) );
			//line 115 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			this.__padding.ownerWidth = ((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetHeightProvider")) );
		}
		
		//line 118 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		return this.__padding;
	}
	
	
	public sx.properties.metric.Padding set_padding(sx.properties.metric.Size v)
	{
		//line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		{
			//line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			((sx.properties.metric.Padding) (this.get_padding()) ).copyValueFrom(v);
			//line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			return this.get_padding();
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		{
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			switch (field.hashCode())
			{
				case -16318940:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("__widget")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						this.__widget = ((sx.widgets.Widget) (value) );
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case -806339567:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("padding")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						this.set_padding(((sx.properties.metric.Size) (value) ));
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case 1642402865:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("__padding")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						this.__padding = ((sx.properties.metric.Padding) (value) );
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		{
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			switch (field.hashCode())
			{
				case -818406092:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("set_padding")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_padding")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case -806339567:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("padding")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.get_padding();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case -729826264:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("get_padding")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_padding")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case 1642402865:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("__padding")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.__padding;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case 2023169916:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("__widgetHeightProvider")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetHeightProvider")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case -16318940:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("__widget")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.__widget;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case 29539859:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("__widgetWidthProvider")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetWidthProvider")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case 1085444827:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("refresh")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "refresh")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case -653778068:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("__widgetResized")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__widgetResized")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case 1226047511:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("hasPadding")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "hasPadding")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case 1091836000:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("removed")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "removed")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case -836044556:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("usedBy")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "usedBy")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		{
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			switch (field.hashCode())
			{
				case -818406092:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("set_padding")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.set_padding(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case 1085444827:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("refresh")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						this.refresh();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case -729826264:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("get_padding")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.get_padding();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case 1226047511:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("hasPadding")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.hasPadding();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case 2023169916:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("__widgetHeightProvider")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.__widgetHeightProvider();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case -836044556:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("usedBy")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						this.usedBy(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case 29539859:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("__widgetWidthProvider")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.__widgetWidthProvider();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case 1091836000:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("removed")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						this.removed();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
				case -653778068:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					if (field.equals("__widgetResized")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						this.__widgetResized(((sx.widgets.Widget) (dynargs.__get(0)) ), ((sx.properties.metric.Size) (dynargs.__get(1)) ), haxe.lang.Runtime.toString(dynargs.__get(2)), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(3))) ));
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		baseArr.push("__widget");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		baseArr.push("__padding");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		baseArr.push("padding");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
		{
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


