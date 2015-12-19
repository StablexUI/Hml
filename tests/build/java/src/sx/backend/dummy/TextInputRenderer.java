package sx.backend.dummy;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TextInputRenderer extends haxe.lang.HxObject implements sx.backend.interfaces.ITextInputRenderer
{
	public TextInputRenderer(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public TextInputRenderer(sx.widgets.TextInput textInput)
	{
		//line 33 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		sx.backend.dummy.TextInputRenderer.__hx_ctor_sx_backend_dummy_TextInputRenderer(this, textInput);
	}
	
	
	public static void __hx_ctor_sx_backend_dummy_TextInputRenderer(sx.backend.dummy.TextInputRenderer __temp_me116, sx.widgets.TextInput textInput)
	{
		//line 27 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		__temp_me116.__height = ((double) (((int) (0.0) )) );
		//line 25 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		__temp_me116.__width = ((double) (((int) (0.0) )) );
		//line 19 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		__temp_me116.__text = "";
		//line 35 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		__temp_me116.__textInput = textInput;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		return new sx.backend.dummy.TextInputRenderer(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		return new sx.backend.dummy.TextInputRenderer(((sx.widgets.TextInput) (arr.__get(0)) ));
	}
	
	
	public sx.widgets.TextInput __textInput;
	
	
	
	public java.lang.String __text;
	
	public haxe.lang.Function __onTextChange;
	
	public java.lang.Object __format;
	
	public double __width;
	
	public double __height;
	
	public void onTextChange(haxe.lang.Function onTextChange)
	{
		//line 44 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		this.__onTextChange = onTextChange;
	}
	
	
	public void onReceiveCursor(haxe.lang.Function callback)
	{
	}
	
	
	public void onLoseCursor(haxe.lang.Function callback)
	{
	}
	
	
	public java.lang.String getText()
	{
		//line 71 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		return this.__text;
	}
	
	
	public void setText(java.lang.String text)
	{
		//line 81 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		this.__text = text;
	}
	
	
	public java.lang.Object getFormat()
	{
		//line 90 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		return this.__format;
	}
	
	
	public void setFormat(java.lang.Object format)
	{
		//line 99 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		this.__format = format;
	}
	
	
	public void onResize(haxe.lang.Function callback)
	{
	}
	
	
	public double getWidth()
	{
		//line 117 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		return this.__width;
	}
	
	
	public double getHeight()
	{
		//line 126 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		return this.__height;
	}
	
	
	public void setAvailableAreaWidth(double width)
	{
		//line 135 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		this.__width = width;
	}
	
	
	public void setAvailableAreaHeight(double height)
	{
		//line 144 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		this.__height = height;
	}
	
	
	public void dispose()
	{
		//line 153 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		this.__textInput = null;
	}
	
	
	public java.lang.String set_text(java.lang.String value)
	{
		//line 162 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		this.__text = value;
		//line 163 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		if (( this.__onTextChange != null )) 
		{
			//line 163 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			this.__onTextChange.__hx_invoke1_o(0.0, value);
		}
		
		//line 165 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		return value;
	}
	
	
	public java.lang.String get_text()
	{
		//line 170 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		return this.__text;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			switch (field.hashCode())
			{
				case -449301241:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__height")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__height = ((double) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case -497050665:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__format")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__format = ((java.lang.Object) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1246399974:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__width")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__width = ((double) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			switch (field.hashCode())
			{
				case -449301241:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__height")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__height = ((double) (haxe.lang.Runtime.toDouble(value)) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case -1458657603:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__textInput")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__textInput = ((sx.widgets.TextInput) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1246399974:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__width")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__width = ((double) (haxe.lang.Runtime.toDouble(value)) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 3556653:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.set_text(haxe.lang.Runtime.toString(value));
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case -497050665:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__format")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__format = ((java.lang.Object) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case -1483906803:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__text = haxe.lang.Runtime.toString(value);
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1835895388:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__onTextChange")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__onTextChange = ((haxe.lang.Function) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			switch (field.hashCode())
			{
				case 1976669302:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("get_text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_text")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case -1458657603:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__textInput")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__textInput;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1415556842:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("set_text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_text")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 3556653:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.get_text();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1671767583:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("dispose")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "dispose")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case -1483906803:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__text;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case -1573794821:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("setAvailableAreaHeight")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setAvailableAreaHeight")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1835895388:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__onTextChange")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__onTextChange;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case -452441998:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("setAvailableAreaWidth")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setAvailableAreaWidth")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case -497050665:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__format")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__format;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 474985501:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("getHeight")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getHeight")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1246399974:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__width")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__width;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1968952336:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("getWidth")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getWidth")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case -449301241:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__height")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__height;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1463972723:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("onResize")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "onResize")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 427839100:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("onTextChange")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "onTextChange")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 212619001:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("setFormat")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setFormat")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1905614970:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("onReceiveCursor")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "onReceiveCursor")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 427236077:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("getFormat")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getFormat")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 566018570:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("onLoseCursor")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "onLoseCursor")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1984984239:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("setText")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setText")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case -75125341:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("getText")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getText")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			switch (field.hashCode())
			{
				case -449301241:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__height")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__height;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case -497050665:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__format")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((double) (haxe.lang.Runtime.toDouble(this.__format)) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1246399974:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("__width")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__width;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			switch (field.hashCode())
			{
				case 1976669302:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("get_text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.get_text();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 427839100:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("onTextChange")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.onTextChange(((haxe.lang.Function) (dynargs.__get(0)) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1415556842:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("set_text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.set_text(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1905614970:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("onReceiveCursor")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.onReceiveCursor(((haxe.lang.Function) (dynargs.__get(0)) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1671767583:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("dispose")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.dispose();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 566018570:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("onLoseCursor")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.onLoseCursor(((haxe.lang.Function) (dynargs.__get(0)) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case -1573794821:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("setAvailableAreaHeight")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.setAvailableAreaHeight(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case -75125341:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("getText")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.getText();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case -452441998:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("setAvailableAreaWidth")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.setAvailableAreaWidth(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1984984239:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("setText")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.setText(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 474985501:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("getHeight")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.getHeight();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 427236077:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("getFormat")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.getFormat();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1968952336:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("getWidth")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.getWidth();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 212619001:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("setFormat")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.setFormat(dynargs.__get(0));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
				case 1463972723:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					if (field.equals("onResize")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.onResize(((haxe.lang.Function) (dynargs.__get(0)) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		baseArr.push("__height");
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		baseArr.push("__width");
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		baseArr.push("__format");
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		baseArr.push("__onTextChange");
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		baseArr.push("__text");
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		baseArr.push("text");
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		baseArr.push("__textInput");
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


