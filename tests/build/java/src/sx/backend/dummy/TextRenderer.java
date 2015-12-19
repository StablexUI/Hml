package sx.backend.dummy;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TextRenderer extends haxe.lang.HxObject implements sx.backend.interfaces.ITextRenderer
{
	public TextRenderer(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public TextRenderer(sx.widgets.Text textField)
	{
		//line 28 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		sx.backend.dummy.TextRenderer.__hx_ctor_sx_backend_dummy_TextRenderer(this, textField);
	}
	
	
	public static void __hx_ctor_sx_backend_dummy_TextRenderer(sx.backend.dummy.TextRenderer __temp_me117, sx.widgets.Text textField)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		__temp_me117.__text = "";
		//line 30 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		__temp_me117.__textField = textField;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		return new sx.backend.dummy.TextRenderer(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		return new sx.backend.dummy.TextRenderer(((sx.widgets.Text) (arr.__get(0)) ));
	}
	
	
	public sx.widgets.Text __textField;
	
	public java.lang.String __text;
	
	public haxe.lang.Function __onResize;
	
	public java.lang.Object __format;
	
	public void setText(java.lang.String text)
	{
		//line 39 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		this.__text = text;
		//line 40 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		if (( this.__onResize != null )) 
		{
			//line 40 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			this.__onResize.__hx_invoke2_o(this.getWidth(), haxe.lang.Runtime.undefined, this.getHeight(), haxe.lang.Runtime.undefined);
		}
		
	}
	
	
	public java.lang.Object getFormat()
	{
		//line 49 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		return this.__format;
	}
	
	
	public void setFormat(java.lang.Object format)
	{
		//line 58 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		this.__format = format;
	}
	
	
	public void onResize(haxe.lang.Function callback)
	{
		//line 67 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		this.__onResize = callback;
	}
	
	
	public double getWidth()
	{
		//line 77 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		int max = 0;
		//line 78 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		int nlPos = 0;
		//line 79 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		int prevPos = 0;
		//line 80 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		do 
		{
			//line 81 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			nlPos = haxe.lang.StringExt.indexOf(this.__text, "\n", prevPos);
			//line 82 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			if (( ( nlPos > 0 ) && ( ( nlPos - prevPos ) > max ) )) 
			{
				//line 83 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				max = ( nlPos - prevPos );
			}
			
			//line 85 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			prevPos = ( nlPos + 1 );
		}
		while (( nlPos >= 0 ));
		//line 88 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		return ((double) (max) );
	}
	
	
	public double getHeight()
	{
		//line 97 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		int linesCount = 0;
		//line 98 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		int pos = haxe.lang.StringExt.indexOf(this.__text, "\n", null);
		//line 99 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		while (( pos >= 0 ))
		{
			//line 100 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			pos = haxe.lang.StringExt.indexOf(this.__text, "\n", ( pos + 1 ));
		}
		
		//line 103 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		return ((double) (linesCount) );
	}
	
	
	public void setAvailableAreaWidth(double width)
	{
	}
	
	
	public void setAvailableAreaHeight(double height)
	{
	}
	
	
	public void dispose()
	{
		//line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		this.__textField = null;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			switch (field.hashCode())
			{
				case -497050665:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("__format")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.__format = ((java.lang.Object) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			switch (field.hashCode())
			{
				case -497050665:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("__format")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.__format = ((java.lang.Object) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case -1461587987:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("__textField")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.__textField = ((sx.widgets.Text) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case 65576787:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("__onResize")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.__onResize = ((haxe.lang.Function) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case -1483906803:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("__text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.__text = haxe.lang.Runtime.toString(value);
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			switch (field.hashCode())
			{
				case 1671767583:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("dispose")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "dispose")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case -1461587987:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("__textField")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return this.__textField;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case -1573794821:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("setAvailableAreaHeight")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setAvailableAreaHeight")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case -1483906803:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("__text")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return this.__text;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case -452441998:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("setAvailableAreaWidth")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setAvailableAreaWidth")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case 65576787:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("__onResize")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return this.__onResize;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case 474985501:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("getHeight")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getHeight")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case -497050665:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("__format")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return this.__format;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case 1968952336:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("getWidth")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getWidth")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case 1984984239:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("setText")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setText")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case 1463972723:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("onResize")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "onResize")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case 427236077:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("getFormat")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getFormat")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case 212619001:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("setFormat")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setFormat")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			switch (field.hashCode())
			{
				case -497050665:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("__format")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((double) (haxe.lang.Runtime.toDouble(this.__format)) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			switch (field.hashCode())
			{
				case 1671767583:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("dispose")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.dispose();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case 1984984239:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("setText")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.setText(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case -1573794821:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("setAvailableAreaHeight")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.setAvailableAreaHeight(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case 427236077:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("getFormat")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return this.getFormat();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case -452441998:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("setAvailableAreaWidth")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.setAvailableAreaWidth(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case 212619001:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("setFormat")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.setFormat(dynargs.__get(0));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case 474985501:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("getHeight")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return this.getHeight();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case 1463972723:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("onResize")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.onResize(((haxe.lang.Function) (dynargs.__get(0)) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
				case 1968952336:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					if (field.equals("getWidth")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return this.getWidth();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		baseArr.push("__format");
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		baseArr.push("__onResize");
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		baseArr.push("__text");
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		baseArr.push("__textField");
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


