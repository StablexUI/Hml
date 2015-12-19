package sx.backend.dummy;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class BackendManager extends haxe.lang.HxObject implements sx.backend.interfaces.IBackendManager
{
	public BackendManager(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public BackendManager()
	{
		//line 29 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		sx.backend.dummy.BackendManager.__hx_ctor_sx_backend_dummy_BackendManager(this);
	}
	
	
	public static void __hx_ctor_sx_backend_dummy_BackendManager(sx.backend.dummy.BackendManager __temp_me111)
	{
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		return new sx.backend.dummy.BackendManager(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		return new sx.backend.dummy.BackendManager();
	}
	
	
	public sx.widgets.Widget __root;
	
	public void setupPointerDevices()
	{
	}
	
	
	public void setupFrames()
	{
	}
	
	
	public sx.backend.dummy.Point getPointerPosition(java.lang.Object touchId)
	{
		//line 60 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		int __temp_touchId110 = ( (haxe.lang.Runtime.eq(touchId, null)) ? (0) : (((int) (haxe.lang.Runtime.toInt(touchId)) )) );
		//line 60 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		return new sx.backend.dummy.Point(null, null);
	}
	
	
	public sx.widgets.Widget getRoot()
	{
		//line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		if (( this.__root == null )) 
		{
			//line 70 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			this.__root = new sx.widgets.Widget();
		}
		
		//line 73 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		return this.__root;
	}
	
	
	public sx.backend.dummy.Backend widgetBackend(sx.widgets.Widget widget)
	{
		//line 82 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		return new sx.backend.dummy.Backend(((sx.widgets.Widget) (widget) ));
	}
	
	
	public sx.backend.dummy.TextRenderer textRenderer(sx.widgets.Text textField)
	{
		//line 91 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		return new sx.backend.dummy.TextRenderer(((sx.widgets.Text) (textField) ));
	}
	
	
	public sx.backend.dummy.TextInputRenderer textInputRenderer(sx.widgets.TextInput textInput)
	{
		//line 100 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		return new sx.backend.dummy.TextInputRenderer(((sx.widgets.TextInput) (textInput) ));
	}
	
	
	public sx.backend.dummy.BitmapRenderer bitmapRenderer(sx.widgets.Bmp bmp)
	{
		//line 109 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		return new sx.backend.dummy.BitmapRenderer(((sx.widgets.Bmp) (bmp) ));
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		{
			//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			boolean __temp_executeDef1 = true;
			//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			switch (field.hashCode())
			{
				case -1483957054:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("__root")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						this.__root = ((sx.widgets.Widget) (value) );
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return value;
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
			}
			
			//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			if (__temp_executeDef1) 
			{
				//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		{
			//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			boolean __temp_executeDef1 = true;
			//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			switch (field.hashCode())
			{
				case -2136738030:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("bitmapRenderer")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "bitmapRenderer")) );
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
				case -1483957054:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("__root")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return this.__root;
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
				case 864882304:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("textInputRenderer")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "textInputRenderer")) );
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
				case 985161661:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("setupPointerDevices")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setupPointerDevices")) );
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
				case -763073264:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("textRenderer")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "textRenderer")) );
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
				case -1891427965:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("setupFrames")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setupFrames")) );
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
				case 1496706992:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("widgetBackend")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "widgetBackend")) );
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
				case 1428062288:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("getPointerPosition")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getPointerPosition")) );
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
				case -75175592:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("getRoot")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getRoot")) );
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
			}
			
			//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			if (__temp_executeDef1) 
			{
				//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		{
			//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			boolean __temp_executeDef1 = true;
			//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			switch (field.hashCode())
			{
				case -2136738030:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("bitmapRenderer")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return this.bitmapRenderer(((sx.widgets.Bmp) (dynargs.__get(0)) ));
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
				case 985161661:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("setupPointerDevices")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						this.setupPointerDevices();
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
				case 864882304:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("textInputRenderer")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return this.textInputRenderer(((sx.widgets.TextInput) (dynargs.__get(0)) ));
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
				case -1891427965:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("setupFrames")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						this.setupFrames();
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
				case -763073264:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("textRenderer")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return this.textRenderer(((sx.widgets.Text) (dynargs.__get(0)) ));
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
				case 1428062288:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("getPointerPosition")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return this.getPointerPosition(dynargs.__get(0));
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
				case 1496706992:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("widgetBackend")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return this.widgetBackend(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
				case -75175592:
				{
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					if (field.equals("getRoot")) 
					{
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return this.getRoot();
					}
					
					//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
					break;
				}
				
				
			}
			
			//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			if (__temp_executeDef1) 
			{
				//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		baseArr.push("__root");
		//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
		{
			//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


