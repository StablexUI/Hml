package sx.themes;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Theme extends haxe.lang.HxObject
{
	static
	{
		//line 16 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		sx.themes.Theme.DEFAULT_STYLE = "__DEFAULT__";
	}
	
	public Theme(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Theme()
	{
		//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		sx.themes.Theme.__hx_ctor_sx_themes_Theme(this);
	}
	
	
	public static void __hx_ctor_sx_themes_Theme(sx.themes.Theme __temp_me147)
	{
		//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		__temp_me147.__styles = new haxe.ds.StringMap<haxe.ds.StringMap<haxe.lang.Function>>();
		//line 29 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		__temp_me147.initialize();
	}
	
	
	public static java.lang.String DEFAULT_STYLE;
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		return new sx.themes.Theme(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		return new sx.themes.Theme();
	}
	
	
	public haxe.ds.StringMap<haxe.ds.StringMap<haxe.lang.Function>> __styles;
	
	public void initialize()
	{
	}
	
	
	public haxe.ds.StringMap<haxe.lang.Function> styles(java.lang.Class cls)
	{
		//line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		java.lang.String className = haxe.root.Type.getClassName(cls);
		//line 51 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		haxe.ds.StringMap<haxe.lang.Function> styles = ((haxe.ds.StringMap<haxe.lang.Function>) (this.__styles.get(className)) );
		//line 53 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		if (( styles == null )) 
		{
			//line 54 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			styles = new haxe.ds.StringMap<haxe.lang.Function>();
			//line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			this.__styles.set(className, styles);
		}
		
		//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		return styles;
	}
	
	
	public void apply(sx.widgets.Widget widget)
	{
		//line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		if (( widget.style == null )) 
		{
			//line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			return ;
		}
		
		//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		haxe.lang.Function fn = null;
		//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		{
			//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			haxe.IMap<java.lang.String, haxe.lang.Function> this1 = this.styles(((java.lang.Class) (haxe.root.Type.getClass(widget)) ));
			//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			fn = ((haxe.lang.Function) (((haxe.IMap<java.lang.String, haxe.lang.Function>) (this1) ).get(widget.style)) );
		}
		
		//line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		if (( fn == null )) 
		{
			//line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			return ;
		}
		
		//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		fn.__hx_invoke1_o(0.0, widget);
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			switch (field.hashCode())
			{
				case -120046398:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					if (field.equals("__styles")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						this.__styles = ((haxe.ds.StringMap<haxe.ds.StringMap<haxe.lang.Function>>) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			switch (field.hashCode())
			{
				case 93029230:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					if (field.equals("apply")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "apply")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					break;
				}
				
				
				case -120046398:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					if (field.equals("__styles")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						return this.__styles;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					break;
				}
				
				
				case -891774750:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					if (field.equals("styles")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "styles")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					break;
				}
				
				
				case 871091088:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					if (field.equals("initialize")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "initialize")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			switch (field.hashCode())
			{
				case 93029230:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					if (field.equals("apply")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						this.apply(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					break;
				}
				
				
				case 871091088:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					if (field.equals("initialize")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						this.initialize();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					break;
				}
				
				
				case -891774750:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					if (field.equals("styles")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						return this.styles(((java.lang.Class) (dynargs.__get(0)) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		baseArr.push("__styles");
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


