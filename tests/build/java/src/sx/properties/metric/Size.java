package sx.properties.metric;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Size extends haxe.lang.HxObject
{
	public Size(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Size(java.lang.String orientation)
	{
		//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		sx.properties.metric.Size.__hx_ctor_sx_properties_metric_Size(this, orientation);
	}
	
	
	public static void __hx_ctor_sx_properties_metric_Size(sx.properties.metric.Size __temp_me132, java.lang.String orientation)
	{
		//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		__temp_me132.__value = ((double) (((int) (0.0) )) );
		//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		__temp_me132.weak = false;
		//line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		__temp_me132.units = haxe.lang.Runtime.toString("dip");
		//line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		if (( orientation == null )) 
		{
			//line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			orientation = "horizontal";
		}
		
		//line 80 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		__temp_me132.orientation = orientation;
		//line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		__temp_me132.onChange = new sx.signals.Signal<haxe.lang.Function>();
	}
	
	
	
	
	public static sx.properties.metric.Size get_zeroProperty()
	{
		//line 399 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return new sx.properties.metric.Size(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return new sx.properties.metric.Size(haxe.lang.Runtime.toString(arr.__get(0)));
	}
	
	
	
	
	
	
	
	
	
	
	public sx.properties.metric.Size __min;
	
	
	
	public sx.properties.metric.Size __max;
	
	public java.lang.String units;
	
	public java.lang.String orientation;
	
	public haxe.lang.Function pctSource;
	
	public sx.signals.Signal<haxe.lang.Function> onChange;
	
	public boolean weak;
	
	public double __value;
	
	public final boolean isVertical()
	{
		//line 90 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return haxe.lang.Runtime.valEq(this.orientation, haxe.lang.Runtime.toString("vertical"));
	}
	
	
	public final boolean isHorizontal()
	{
		//line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return haxe.lang.Runtime.valEq(this.orientation, haxe.lang.Runtime.toString("horizontal"));
	}
	
	
	@Override public java.lang.String toString()
	{
		//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		double value = 0.0;
		//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		{
			//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			java.lang.String _g = this.units;
			//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			{
				//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				java.lang.String __temp_svar1 = (_g);
				//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				switch (__temp_svar1.hashCode())
				{
					case 99467:
					{
						//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						if (__temp_svar1.equals("dip")) 
						{
							//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							value = this.get_dip();
						}
						
						//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
					case 110817:
					{
						//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						if (__temp_svar1.equals("pct")) 
						{
							//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							value = this.get_pct();
						}
						
						//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
					case 3592:
					{
						//line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						if (__temp_svar1.equals("px")) 
						{
							//line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							value = this.get_px();
						}
						
						//line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
				}
				
			}
			
		}
		
		//line 115 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return ( ( "" + haxe.lang.Runtime.toString(value) ) + this.units );
	}
	
	
	public sx.properties.metric.Size copyValueFrom(sx.properties.metric.Size size)
	{
		//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		java.lang.String previousUnits = this.units;
		//line 127 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		double previousValue = this.__value;
		//line 129 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		this.units = size.units;
		//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		this.__value = size.__value;
		//line 132 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		if (size.weak) 
		{
			//line 132 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			size.dispose();
		}
		
		//line 134 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		this.__invokeOnChange(previousUnits, previousValue);
		//line 136 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return this;
	}
	
	
	public boolean hasMin()
	{
		//line 145 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return ( this.__min != null );
	}
	
	
	public void dispose()
	{
	}
	
	
	public sx.properties.metric.Size __pctSource()
	{
		//line 163 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		if (( this.pctSource == null )) 
		{
			//line 163 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
		}
		else
		{
			//line 163 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return ((sx.properties.metric.Size) (this.pctSource.__hx_invoke0_o()) );
		}
		
	}
	
	
	public void __invokeOnChange(java.lang.String previousUnits, double previousValue)
	{
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) 
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (this.onChange.__listenersInUse) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g = 0;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = this.onChange.__listeners;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g < _g1.length ))
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener.__hx_invoke3_o(0.0, this, 0.0, previousUnits, previousValue, haxe.lang.Runtime.undefined);
					}
					
				}
				
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.onChange.__listenersInUse = true;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g2 = 0;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = this.onChange.__listeners;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g2 < _g11.length ))
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g2;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener1.__hx_invoke3_o(0.0, this, 0.0, previousUnits, previousValue, haxe.lang.Runtime.undefined);
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.onChange.__listenersInUse = false;
			}
			
		}
		
	}
	
	
	public void __constraintChanged(sx.properties.metric.Size constraint, java.lang.String previousUnits, double previousValue)
	{
		//line 181 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		if (( constraint == this.__min )) 
		{
			//line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			double minValue = 0.0;
			//line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			{
				//line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				sx.properties.metric.Size size = this.__min;
				//line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				{
					//line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					java.lang.String __temp_svar1 = (this.units);
					//line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					switch (__temp_svar1.hashCode())
					{
						case 99467:
						{
							//line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							if (__temp_svar1.equals("dip")) 
							{
								//line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								minValue = size.get_dip();
							}
							
							//line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case 110817:
						{
							//line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							if (__temp_svar1.equals("pct")) 
							{
								//line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								minValue = size.get_pct();
							}
							
							//line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case 3592:
						{
							//line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							if (__temp_svar1.equals("px")) 
							{
								//line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								minValue = size.get_px();
							}
							
							//line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
					}
					
				}
				
			}
			
			//line 183 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (( this.__value < minValue )) 
			{
				//line 184 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				double previous = this.__value;
				//line 185 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = minValue;
				//line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__invokeOnChange(this.units, previous);
			}
			
			//line 189 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return ;
		}
		
		//line 192 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		if (( constraint == this.__max )) 
		{
			//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			double maxValue = 0.0;
			//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			{
				//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				sx.properties.metric.Size size1 = this.__max;
				//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				{
					//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					java.lang.String __temp_svar3 = (this.units);
					//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					switch (__temp_svar3.hashCode())
					{
						case 99467:
						{
							//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							if (__temp_svar3.equals("dip")) 
							{
								//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								maxValue = size1.get_dip();
							}
							
							//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case 110817:
						{
							//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							if (__temp_svar3.equals("pct")) 
							{
								//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								maxValue = size1.get_pct();
							}
							
							//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case 3592:
						{
							//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							if (__temp_svar3.equals("px")) 
							{
								//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								maxValue = size1.get_px();
							}
							
							//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
					}
					
				}
				
			}
			
			//line 194 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (( this.__value > maxValue )) 
			{
				//line 195 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				double previous1 = this.__value;
				//line 196 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = maxValue;
				//line 197 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__invokeOnChange(this.units, previous1);
			}
			
			//line 200 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return ;
		}
		
	}
	
	
	public double get_dip()
	{
		//line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		{
			//line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			java.lang.String _g = this.units;
			//line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			{
				//line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				java.lang.String __temp_svar1 = (_g);
				//line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				switch (__temp_svar1.hashCode())
				{
					case 99467:
					{
						//line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						if (__temp_svar1.equals("dip")) 
						{
							//line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							return this.__value;
						}
						
						//line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
					case 110817:
					{
						//line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						if (__temp_svar1.equals("pct")) 
						{
							//line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							return ( ( this.__pctSource().get_dip() * this.__value ) * 0.01 );
						}
						
						//line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
					case 3592:
					{
						//line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						if (__temp_svar1.equals("px")) 
						{
							//line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							return ( this.__value / sx.Sx.dipFactor );
						}
						
						//line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
				}
				
			}
			
		}
		
		//line 209 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return 0.0;
	}
	
	
	public double get_px()
	{
		//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		{
			//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			java.lang.String _g = this.units;
			//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			{
				//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				java.lang.String __temp_svar1 = (_g);
				//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				switch (__temp_svar1.hashCode())
				{
					case 99467:
					{
						//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						if (__temp_svar1.equals("dip")) 
						{
							//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							return ( this.__value * sx.Sx.dipFactor );
						}
						
						//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
					case 110817:
					{
						//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						if (__temp_svar1.equals("pct")) 
						{
							//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							return ( ( this.__pctSource().get_px() * this.__value ) * 0.01 );
						}
						
						//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
					case 3592:
					{
						//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						if (__temp_svar1.equals("px")) 
						{
							//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							return this.__value;
						}
						
						//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
				}
				
			}
			
		}
		
		//line 223 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return 0.0;
	}
	
	
	public double get_pct()
	{
		//line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		{
			//line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			java.lang.String _g = this.units;
			//line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			{
				//line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				java.lang.String __temp_svar1 = (_g);
				//line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				switch (__temp_svar1.hashCode())
				{
					case 99467:
					{
						//line 240 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						if (__temp_svar1.equals("dip")) 
						{
							//line 241 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							double dip = this.__pctSource().get_dip();
							//line 242 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							if (( dip == 0 )) 
							{
								//line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								return ((double) (100) );
							}
							else
							{
								//line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								return ( ( this.__value / dip ) * 100 );
							}
							
						}
						
						//line 240 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
					case 110817:
					{
						//line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						if (__temp_svar1.equals("pct")) 
						{
							//line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							return this.__value;
						}
						
						//line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
					case 3592:
					{
						//line 243 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						if (__temp_svar1.equals("px")) 
						{
							//line 244 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							double px = this.__pctSource().get_px();
							//line 245 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							if (( px == 0 )) 
							{
								//line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								return ((double) (100) );
							}
							else
							{
								//line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								return ( ( this.__value / px ) * 100 );
							}
							
						}
						
						//line 243 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
				}
				
			}
			
		}
		
		//line 237 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return 0.0;
	}
	
	
	public double set_dip(double value)
	{
		//line 258 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		java.lang.String previousUnits = this.units;
		//line 259 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		double previousValue = this.__value;
		//line 261 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		this.units = haxe.lang.Runtime.toString("dip");
		//line 262 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		if (( ( this.__min != null ) && ( this.__min.get_dip() > value ) )) 
		{
			//line 263 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.__value = this.__min.get_dip();
		}
		else
		{
			//line 264 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (( ( this.__max != null ) && ( this.__max.get_dip() < value ) )) 
			{
				//line 265 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = this.__max.get_dip();
			}
			else
			{
				//line 267 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = value;
			}
			
		}
		
		//line 270 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		this.__invokeOnChange(previousUnits, previousValue);
		//line 272 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return value;
	}
	
	
	public double set_px(double value)
	{
		//line 282 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		java.lang.String previousUnits = this.units;
		//line 283 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		double previousValue = this.__value;
		//line 285 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		this.units = haxe.lang.Runtime.toString("px");
		//line 286 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		if (( ( this.__min != null ) && ( this.__min.get_px() > value ) )) 
		{
			//line 287 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.__value = this.__min.get_px();
		}
		else
		{
			//line 288 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (( ( this.__max != null ) && ( this.__max.get_px() < value ) )) 
			{
				//line 289 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = this.__max.get_px();
			}
			else
			{
				//line 291 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = value;
			}
			
		}
		
		//line 294 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		this.__invokeOnChange(previousUnits, previousValue);
		//line 296 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return value;
	}
	
	
	public double set_pct(double value)
	{
		//line 306 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		java.lang.String previousUnits = this.units;
		//line 307 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		double previousValue = this.__value;
		//line 309 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		this.units = haxe.lang.Runtime.toString("pct");
		//line 310 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		if (( ( this.__min != null ) && ( this.__min.get_pct() > value ) )) 
		{
			//line 311 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.__value = this.__min.get_pct();
		}
		else
		{
			//line 312 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (( ( this.__max != null ) && ( this.__max.get_pct() < value ) )) 
			{
				//line 313 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = this.__max.get_pct();
			}
			else
			{
				//line 315 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = value;
			}
			
		}
		
		//line 318 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		this.__invokeOnChange(previousUnits, previousValue);
		//line 320 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return value;
	}
	
	
	public sx.properties.metric.Size get_min()
	{
		//line 329 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		if (( this.__min == null )) 
		{
			//line 330 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.__min = new sx.properties.metric.Size(haxe.lang.Runtime.toString(this.orientation));
			//line 331 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.__min.pctSource = ((haxe.lang.Function) (new haxe.lang.Closure(this, "__pctSource")) );
			//line 332 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.__min.__value = java.lang.Double.NEGATIVE_INFINITY;
			//line 333 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.__min.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__constraintChanged")) ));
		}
		
		//line 336 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return this.__min;
	}
	
	
	public sx.properties.metric.Size set_min(sx.properties.metric.Size value)
	{
		//line 345 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		if (( value == null )) 
		{
			//line 346 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (( this.__min != null )) 
			{
				//line 347 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				java.lang.String _g = this.__min.units;
				//line 347 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				{
					//line 347 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					java.lang.String __temp_svar1 = (_g);
					//line 347 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					switch (__temp_svar1.hashCode())
					{
						case 99467:
						{
							//line 348 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							if (__temp_svar1.equals("dip")) 
							{
								//line 348 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								this.__min.set_dip(java.lang.Double.NEGATIVE_INFINITY);
							}
							
							//line 348 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case 110817:
						{
							//line 350 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							if (__temp_svar1.equals("pct")) 
							{
								//line 350 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								this.__min.set_pct(java.lang.Double.NEGATIVE_INFINITY);
							}
							
							//line 350 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case 3592:
						{
							//line 349 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							if (__temp_svar1.equals("px")) 
							{
								//line 349 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								this.__min.set_px(java.lang.Double.NEGATIVE_INFINITY);
							}
							
							//line 349 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
					}
					
				}
				
			}
			
		}
		else
		{
			//line 354 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			((sx.properties.metric.Size) (this.get_min()) ).copyValueFrom(value);
		}
		
		//line 357 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return value;
	}
	
	
	public sx.properties.metric.Size get_max()
	{
		//line 366 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		if (( this.__max == null )) 
		{
			//line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.__max = new sx.properties.metric.Size(haxe.lang.Runtime.toString(this.orientation));
			//line 368 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.__max.pctSource = ((haxe.lang.Function) (new haxe.lang.Closure(this, "__pctSource")) );
			//line 369 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.__max.__value = java.lang.Double.POSITIVE_INFINITY;
			//line 370 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.__max.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__constraintChanged")) ));
		}
		
		//line 373 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return this.__max;
	}
	
	
	public sx.properties.metric.Size set_max(sx.properties.metric.Size value)
	{
		//line 382 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		if (( value == null )) 
		{
			//line 383 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (( this.__max != null )) 
			{
				//line 384 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				java.lang.String _g = this.__max.units;
				//line 384 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				{
					//line 384 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					java.lang.String __temp_svar1 = (_g);
					//line 384 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					switch (__temp_svar1.hashCode())
					{
						case 99467:
						{
							//line 385 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							if (__temp_svar1.equals("dip")) 
							{
								//line 385 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								this.__max.set_dip(java.lang.Double.NEGATIVE_INFINITY);
							}
							
							//line 385 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case 110817:
						{
							//line 387 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							if (__temp_svar1.equals("pct")) 
							{
								//line 387 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								this.__max.set_pct(java.lang.Double.NEGATIVE_INFINITY);
							}
							
							//line 387 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case 3592:
						{
							//line 386 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							if (__temp_svar1.equals("px")) 
							{
								//line 386 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								this.__max.set_px(java.lang.Double.NEGATIVE_INFINITY);
							}
							
							//line 386 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
					}
					
				}
				
			}
			
		}
		else
		{
			//line 391 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			((sx.properties.metric.Size) (this.get_max()) ).copyValueFrom(value);
		}
		
		//line 394 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return value;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			switch (field.hashCode())
			{
				case 1245245841:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("__value")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.__value = ((double) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 99467:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("dip")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_dip(value);
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 110817:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("pct")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_pct(value);
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 3592:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("px")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_px(value);
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			switch (field.hashCode())
			{
				case 1245245841:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("__value")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.__value = ((double) (haxe.lang.Runtime.toDouble(value)) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 99467:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("dip")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_dip(((double) (haxe.lang.Runtime.toDouble(value)) ));
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 3645304:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("weak")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.weak = haxe.lang.Runtime.toBool(value);
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 3592:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("px")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_px(((double) (haxe.lang.Runtime.toDouble(value)) ));
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 1036773999:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("onChange")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.onChange = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 110817:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("pct")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_pct(((double) (haxe.lang.Runtime.toDouble(value)) ));
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -1773332388:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("pctSource")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.pctSource = ((haxe.lang.Function) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 108114:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("min")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_min(((sx.properties.metric.Size) (value) ));
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -1439500848:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("orientation")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.orientation = haxe.lang.Runtime.toString(value);
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 90672754:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("__min")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.__min = ((sx.properties.metric.Size) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 111433583:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("units")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.units = haxe.lang.Runtime.toString(value);
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 107876:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("max")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_max(((sx.properties.metric.Size) (value) ));
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 90672516:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("__max")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.__max = ((sx.properties.metric.Size) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			switch (field.hashCode())
			{
				case 1985318919:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("set_max")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_max")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 99467:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("dip")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_dip();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -74790661:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("get_max")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_max")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 3592:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("px")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_px();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 1985319157:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("set_min")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_min")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 110817:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("pct")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_pct();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -74790423:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("get_min")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_min")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 108114:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("min")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_min();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 1985321860:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("set_pct")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_pct")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 90672754:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("__min")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.__min;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -905788667:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("set_px")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_px")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 107876:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("max")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_max();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 1985310510:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("set_dip")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_dip")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 90672516:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("__max")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.__max;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -74787720:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("get_pct")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_pct")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 111433583:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("units")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.units;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -1249338479:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("get_px")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_px")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -1439500848:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("orientation")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.orientation;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -74799070:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("get_dip")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_dip")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -1773332388:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("pctSource")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.pctSource;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -886296009:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("__constraintChanged")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__constraintChanged")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 1036773999:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("onChange")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.onChange;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 607543015:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("__invokeOnChange")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__invokeOnChange")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 3645304:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("weak")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.weak;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 2121033852:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("__pctSource")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__pctSource")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 1245245841:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("__value")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.__value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 1671767583:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("dispose")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "dispose")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 1517555392:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("isVertical")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "isVertical")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -1224450728:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("hasMin")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "hasMin")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -736065298:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("isHorizontal")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "isHorizontal")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 2000617670:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("copyValueFrom")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "copyValueFrom")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -1776922004:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("toString")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "toString")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			switch (field.hashCode())
			{
				case 1245245841:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("__value")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.__value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 99467:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("dip")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_dip();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 110817:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("pct")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_pct();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 3592:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("px")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_px();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			switch (field.hashCode())
			{
				case 1985318919:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("set_max")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.set_max(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 1517555392:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("isVertical")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.isVertical();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -74790661:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("get_max")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_max();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -736065298:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("isHorizontal")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.isHorizontal();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 1985319157:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("set_min")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.set_min(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -1776922004:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("toString")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.toString();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -74790423:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("get_min")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_min();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 2000617670:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("copyValueFrom")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.copyValueFrom(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 1985321860:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("set_pct")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.set_pct(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -1224450728:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("hasMin")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.hasMin();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -905788667:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("set_px")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.set_px(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 1671767583:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("dispose")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.dispose();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 1985310510:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("set_dip")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.set_dip(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 2121033852:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("__pctSource")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.__pctSource();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -74787720:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("get_pct")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_pct();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case 607543015:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("__invokeOnChange")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.__invokeOnChange(haxe.lang.Runtime.toString(dynargs.__get(0)), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(1))) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -1249338479:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("get_px")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_px();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -886296009:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("__constraintChanged")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.__constraintChanged(((sx.properties.metric.Size) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(2))) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
				case -74799070:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					if (field.equals("get_dip")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_dip();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		baseArr.push("__value");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		baseArr.push("weak");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		baseArr.push("onChange");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		baseArr.push("pctSource");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		baseArr.push("orientation");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		baseArr.push("units");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		baseArr.push("__max");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		baseArr.push("max");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		baseArr.push("__min");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		baseArr.push("min");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		baseArr.push("pct");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		baseArr.push("px");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		baseArr.push("dip");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


