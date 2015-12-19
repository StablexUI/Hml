package sx.widgets;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Text extends sx.widgets.base.RendererHolder
{
	public Text(haxe.lang.EmptyObject empty)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public Text()
	{
		//line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		sx.widgets.Text.__hx_ctor_sx_widgets_Text(this);
	}
	
	
	public static void __hx_ctor_sx_widgets_Text(sx.widgets.Text __temp_me157)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		__temp_me157.__text = "";
		//line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		sx.widgets.base.RendererHolder.__hx_ctor_sx_widgets_base_RendererHolder(__temp_me157);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		return new sx.widgets.Text(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		return new sx.widgets.Text();
	}
	
	
	
	
	public java.lang.String __text;
	
	public sx.backend.dummy.TextRenderer renderer;
	
	public java.lang.Object getTextFormat()
	{
		//line 28 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		return this.renderer.getFormat();
	}
	
	
	public void setTextFormat(java.lang.Object format)
	{
		//line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		this.renderer.setFormat(format);
		//line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		return ;
	}
	
	
	@Override public void __createRenderer()
	{
		//line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		this.renderer = sx.Sx.get_backendManager().textRenderer(this);
	}
	
	
	public java.lang.String set_text(java.lang.String value)
	{
		//line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		this.__text = value;
		//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		this.renderer.setText(this.__text);
		//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		return value;
	}
	
	
	public java.lang.String get_text()
	{
		//line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		return this.__text;
	}
	
	
	@Override public sx.backend.interfaces.IRenderer get___renderer()
	{
		//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		return this.renderer;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			switch (field.hashCode())
			{
				case -494845757:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("renderer")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						this.renderer = ((sx.backend.dummy.TextRenderer) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
				case 3556653:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						this.set_text(haxe.lang.Runtime.toString(value));
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
				case -1483906803:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("__text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						this.__text = haxe.lang.Runtime.toString(value);
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			switch (field.hashCode())
			{
				case 1181901100:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("get___renderer")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get___renderer")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
				case 3556653:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return this.get_text();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
				case 1976669302:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("get_text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_text")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
				case -1483906803:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("__text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return this.__text;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
				case 1415556842:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("set_text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_text")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
				case -494845757:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("renderer")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return this.renderer;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
				case 655117759:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("__createRenderer")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__createRenderer")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
				case 1177324410:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("getTextFormat")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getTextFormat")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
				case 1951455622:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("setTextFormat")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setTextFormat")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			int __temp_hash2 = field.hashCode();
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			switch (__temp_hash2)
			{
				case 1181901100:
				case 655117759:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (( (( ( __temp_hash2 == 1181901100 ) && field.equals("get___renderer") )) || field.equals("__createRenderer") )) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
				case 1177324410:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("getTextFormat")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return this.getTextFormat();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
				case 1976669302:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("get_text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return this.get_text();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
				case 1951455622:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("setTextFormat")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						this.setTextFormat(dynargs.__get(0));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
				case 1415556842:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					if (field.equals("set_text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return this.set_text(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		baseArr.push("renderer");
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		baseArr.push("__text");
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		baseArr.push("text");
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


