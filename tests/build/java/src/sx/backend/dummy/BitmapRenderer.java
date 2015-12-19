package sx.backend.dummy;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class BitmapRenderer extends haxe.lang.HxObject implements sx.backend.interfaces.IBitmapRenderer
{
	public BitmapRenderer(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public BitmapRenderer(sx.widgets.Bmp bmp)
	{
		//line 26 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		sx.backend.dummy.BitmapRenderer.__hx_ctor_sx_backend_dummy_BitmapRenderer(this, bmp);
	}
	
	
	public static void __hx_ctor_sx_backend_dummy_BitmapRenderer(sx.backend.dummy.BitmapRenderer __temp_me112, sx.widgets.Bmp bmp)
	{
		//line 28 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		__temp_me112.__bmp = bmp;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		return new sx.backend.dummy.BitmapRenderer(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		return new sx.backend.dummy.BitmapRenderer(((sx.widgets.Bmp) (arr.__get(0)) ));
	}
	
	
	public sx.widgets.Bmp __bmp;
	
	public java.lang.Object __bitmapData;
	
	public haxe.lang.Function __onResize;
	
	public void setBitmapData(java.lang.Object bitmapData)
	{
		//line 37 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		this.__bitmapData = bitmapData;
	}
	
	
	public final double getBitmapDataWidth()
	{
		//line 46 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		if (( ( this.__bitmapData == null ) || ( haxe.lang.Runtime.getField(this.__bitmapData, "width", true) == null ) )) 
		{
			//line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			return ((double) (0) );
		}
		else
		{
			//line 49 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			return ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(this.__bitmapData, "width", true))) );
		}
		
	}
	
	
	public final double getBitmapDataHeight()
	{
		//line 59 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		if (( ( this.__bitmapData == null ) || ( haxe.lang.Runtime.getField(this.__bitmapData, "height", true) == null ) )) 
		{
			//line 60 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			return ((double) (0) );
		}
		else
		{
			//line 62 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			return ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(this.__bitmapData, "height", true))) );
		}
		
	}
	
	
	public void setBitmapScale(double scaleX, double scaleY)
	{
	}
	
	
	public void setBitmapSmoothing(boolean smooth)
	{
	}
	
	
	public double getWidth()
	{
		//line 90 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		return ((double) (( (( ( this.__bitmapData == null ) || ( haxe.lang.Runtime.getField(this.__bitmapData, "width", true) == null ) )) ? (0) : (((int) (haxe.lang.Runtime.toInt(haxe.lang.Runtime.getField(this.__bitmapData, "width", true))) )) )) );
	}
	
	
	public double getHeight()
	{
		//line 99 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		return ((double) (( (( ( this.__bitmapData == null ) || ( haxe.lang.Runtime.getField(this.__bitmapData, "height", true) == null ) )) ? (0) : (((int) (haxe.lang.Runtime.toInt(haxe.lang.Runtime.getField(this.__bitmapData, "height", true))) )) )) );
	}
	
	
	public void onResize(haxe.lang.Function callback)
	{
		//line 110 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		this.__onResize = callback;
	}
	
	
	public void setAvailableAreaWidth(double width)
	{
		//line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		if (( ! (( this.__bitmapData == null )) )) 
		{
			//line 120 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			haxe.lang.Runtime.setField_f(this.__bitmapData, "width", ((double) (width) ));
		}
		
	}
	
	
	public void setAvailableAreaHeight(double height)
	{
		//line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		if (( ! (( this.__bitmapData == null )) )) 
		{
			//line 131 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			haxe.lang.Runtime.setField_f(this.__bitmapData, "height", ((double) (height) ));
		}
		
	}
	
	
	public void dispose()
	{
		//line 141 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		this.__bmp = null;
		//line 142 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		this.__onResize = null;
		//line 143 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		this.__bitmapData = null;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			switch (field.hashCode())
			{
				case -1277568679:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("__bitmapData")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.__bitmapData = ((java.lang.Object) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			switch (field.hashCode())
			{
				case 65576787:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("__onResize")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.__onResize = ((haxe.lang.Function) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case 90662309:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("__bmp")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.__bmp = ((sx.widgets.Bmp) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -1277568679:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("__bitmapData")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.__bitmapData = ((java.lang.Object) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			switch (field.hashCode())
			{
				case 1671767583:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("dispose")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "dispose")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case 90662309:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("__bmp")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return this.__bmp;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -1573794821:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("setAvailableAreaHeight")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setAvailableAreaHeight")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -1277568679:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("__bitmapData")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return this.__bitmapData;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -452441998:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("setAvailableAreaWidth")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setAvailableAreaWidth")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case 65576787:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("__onResize")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return this.__onResize;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case 1463972723:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("onResize")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "onResize")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -1267455109:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("setBitmapData")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setBitmapData")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case 474985501:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("getHeight")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getHeight")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -193499753:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("getBitmapDataWidth")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getBitmapDataWidth")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case 1968952336:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("getWidth")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getWidth")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -2136519818:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("getBitmapDataHeight")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getBitmapDataHeight")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -891577789:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("setBitmapSmoothing")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setBitmapSmoothing")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -622508135:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("setBitmapScale")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setBitmapScale")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			switch (field.hashCode())
			{
				case -1277568679:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("__bitmapData")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((double) (haxe.lang.Runtime.toDouble(this.__bitmapData)) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			switch (field.hashCode())
			{
				case 1671767583:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("dispose")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.dispose();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -1267455109:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("setBitmapData")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.setBitmapData(dynargs.__get(0));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -1573794821:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("setAvailableAreaHeight")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.setAvailableAreaHeight(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -193499753:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("getBitmapDataWidth")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return this.getBitmapDataWidth();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -452441998:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("setAvailableAreaWidth")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.setAvailableAreaWidth(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -2136519818:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("getBitmapDataHeight")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return this.getBitmapDataHeight();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case 1463972723:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("onResize")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.onResize(((haxe.lang.Function) (dynargs.__get(0)) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -622508135:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("setBitmapScale")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.setBitmapScale(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(1))) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case 474985501:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("getHeight")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return this.getHeight();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case -891577789:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("setBitmapSmoothing")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.setBitmapSmoothing(haxe.lang.Runtime.toBool(dynargs.__get(0)));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
				case 1968952336:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					if (field.equals("getWidth")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return this.getWidth();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		baseArr.push("__onResize");
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		baseArr.push("__bitmapData");
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		baseArr.push("__bmp");
		//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


