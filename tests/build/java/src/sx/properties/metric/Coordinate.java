package sx.properties.metric;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Coordinate extends sx.properties.metric.Size
{
	public Coordinate(haxe.lang.EmptyObject empty)
	{
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public Coordinate(java.lang.String orientation)
	{
		//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		sx.properties.metric.Coordinate.__hx_ctor_sx_properties_metric_Coordinate(this, orientation);
	}
	
	
	public static void __hx_ctor_sx_properties_metric_Coordinate(sx.properties.metric.Coordinate __temp_me133, java.lang.String orientation)
	{
		//line 22 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		__temp_me133.selected = false;
		//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		sx.properties.metric.Size.__hx_ctor_sx_properties_metric_Size(__temp_me133, orientation);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		return new sx.properties.metric.Coordinate(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		return new sx.properties.metric.Coordinate(haxe.lang.Runtime.toString(arr.__get(0)));
	}
	
	
	public haxe.lang.Function ownerSize;
	
	public haxe.lang.Function pair;
	
	public boolean selected;
	
	public final void select()
	{
		//line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		if ( ! (this.selected) ) 
		{
			//line 31 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			this.selected = true;
			//line 32 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			((sx.properties.metric.Coordinate) (this.pair.__hx_invoke0_o()) ).selected = false;
		}
		
	}
	
	
	public sx.properties.metric.Size __ownerSize()
	{
		//line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		if (( this.ownerSize == null )) 
		{
			//line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			return sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
		}
		else
		{
			//line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			return ((sx.properties.metric.Size) (this.ownerSize.__hx_invoke0_o()) );
		}
		
	}
	
	
	@Override public double get_px()
	{
		//line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		if (this.selected) 
		{
			//line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			return super.get_px();
		}
		
		//line 51 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		return ( ( this.__pctSource().get_px() - ((sx.properties.metric.Coordinate) (this.pair.__hx_invoke0_o()) ).get_px() ) - this.__ownerSize().get_px() );
	}
	
	
	@Override public double get_pct()
	{
		//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		if (this.selected) 
		{
			//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			return super.get_pct();
		}
		
		//line 60 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		return ( ( this.__pctSource().get_pct() - ((sx.properties.metric.Coordinate) (this.pair.__hx_invoke0_o()) ).get_pct() ) - this.__ownerSize().get_pct() );
	}
	
	
	@Override public double get_dip()
	{
		//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		if (this.selected) 
		{
			//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			return super.get_dip();
		}
		
		//line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		return ( ( this.__pctSource().get_dip() - ((sx.properties.metric.Coordinate) (this.pair.__hx_invoke0_o()) ).get_dip() ) - this.__ownerSize().get_dip() );
	}
	
	
	@Override public void __invokeOnChange(java.lang.String previousUnits, double previousValue)
	{
		//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		if ( ! (this.selected) ) 
		{
			//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			this.selected = true;
			//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			((sx.properties.metric.Coordinate) (this.pair.__hx_invoke0_o()) ).selected = false;
		}
		
		//line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		super.__invokeOnChange(previousUnits, previousValue);
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		{
			//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			switch (field.hashCode())
			{
				case 1191572123:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					if (field.equals("selected")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						this.selected = haxe.lang.Runtime.toBool(value);
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return value;
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					break;
				}
				
				
				case 17610068:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					if (field.equals("ownerSize")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						this.ownerSize = ((haxe.lang.Function) (value) );
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return value;
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					break;
				}
				
				
				case 3433178:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					if (field.equals("pair")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						this.pair = ((haxe.lang.Function) (value) );
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return value;
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					break;
				}
				
				
			}
			
			//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		{
			//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			switch (field.hashCode())
			{
				case 607543015:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					if (field.equals("__invokeOnChange")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__invokeOnChange")) );
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					break;
				}
				
				
				case 17610068:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					if (field.equals("ownerSize")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return this.ownerSize;
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					break;
				}
				
				
				case -74799070:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					if (field.equals("get_dip")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_dip")) );
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					break;
				}
				
				
				case 3433178:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					if (field.equals("pair")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return this.pair;
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					break;
				}
				
				
				case -74787720:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					if (field.equals("get_pct")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_pct")) );
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					break;
				}
				
				
				case 1191572123:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					if (field.equals("selected")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return this.selected;
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					break;
				}
				
				
				case -1249338479:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					if (field.equals("get_px")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_px")) );
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					break;
				}
				
				
				case -906021636:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					if (field.equals("select")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "select")) );
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					break;
				}
				
				
				case -382990988:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					if (field.equals("__ownerSize")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__ownerSize")) );
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					break;
				}
				
				
			}
			
			//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		{
			//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			int __temp_hash2 = field.hashCode();
			//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			switch (__temp_hash2)
			{
				case 607543015:
				case -74799070:
				case -74787720:
				case -1249338479:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					if (( (( ( __temp_hash2 == 607543015 ) && field.equals("__invokeOnChange") )) || ( (( ( __temp_hash2 == -74799070 ) && field.equals("get_dip") )) || ( (( ( __temp_hash2 == -74787720 ) && field.equals("get_pct") )) || field.equals("get_px") ) ) )) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					break;
				}
				
				
				case -906021636:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					if (field.equals("select")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						this.select();
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					break;
				}
				
				
				case -382990988:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					if (field.equals("__ownerSize")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return this.__ownerSize();
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
					break;
				}
				
				
			}
			
			//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		baseArr.push("selected");
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		baseArr.push("pair");
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		baseArr.push("ownerSize");
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
		{
			//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


