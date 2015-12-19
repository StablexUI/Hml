package sx.properties.metric._Size;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Size_Internal_ZeroSize extends sx.properties.metric.Size
{
	static
	{
		//line 411 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		sx.properties.metric._Size.Size_Internal_ZeroSize.instance = ((sx.properties.metric.Size) (new sx.properties.metric._Size.Size_Internal_ZeroSize(haxe.lang.Runtime.toString(null))) );
	}
	
	public Size_Internal_ZeroSize(haxe.lang.EmptyObject empty)
	{
		//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public Size_Internal_ZeroSize(java.lang.String orientation)
	{
		//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		sx.properties.metric._Size.Size_Internal_ZeroSize.__hx_ctor_sx_properties_metric__Size_Size_Internal_ZeroSize(this, orientation);
	}
	
	
	public static void __hx_ctor_sx_properties_metric__Size_Size_Internal_ZeroSize(sx.properties.metric._Size.Size_Internal_ZeroSize __temp_me145, java.lang.String orientation)
	{
		//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		sx.properties.metric.Size.__hx_ctor_sx_properties_metric_Size(__temp_me145, orientation);
	}
	
	
	public static sx.properties.metric.Size instance;
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return new sx.properties.metric._Size.Size_Internal_ZeroSize(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return new sx.properties.metric._Size.Size_Internal_ZeroSize(haxe.lang.Runtime.toString(arr.__get(0)));
	}
	
	
	@Override public double get_px()
	{
		//line 417 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return 0;
	}
	
	
	@Override public double get_pct()
	{
		//line 418 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return 0;
	}
	
	
	@Override public double get_dip()
	{
		//line 419 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return 0;
	}
	
	
	@Override public double set_px(double v)
	{
		//line 420 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return v;
	}
	
	
	@Override public double set_pct(double v)
	{
		//line 421 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return v;
	}
	
	
	@Override public double set_dip(double v)
	{
		//line 422 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return v;
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		{
			//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			boolean __temp_executeDef1 = true;
			//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			switch (field.hashCode())
			{
				case 1985310510:
				{
					//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("set_dip")) 
					{
						//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_dip")) );
					}
					
					//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -1249338479:
				{
					//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("get_px")) 
					{
						//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_px")) );
					}
					
					//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 1985321860:
				{
					//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("set_pct")) 
					{
						//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_pct")) );
					}
					
					//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -74787720:
				{
					//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("get_pct")) 
					{
						//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_pct")) );
					}
					
					//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -905788667:
				{
					//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("set_px")) 
					{
						//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_px")) );
					}
					
					//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -74799070:
				{
					//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("get_dip")) 
					{
						//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_dip")) );
					}
					
					//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
			}
			
			//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (__temp_executeDef1) 
			{
				//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


