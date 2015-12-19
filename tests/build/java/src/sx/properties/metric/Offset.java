package sx.properties.metric;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Offset extends haxe.lang.HxObject
{
	public Offset(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Offset(haxe.lang.Function widthProvider, haxe.lang.Function heightProvider)
	{
		//line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		sx.properties.metric.Offset.__hx_ctor_sx_properties_metric_Offset(this, widthProvider, heightProvider);
	}
	
	
	public static void __hx_ctor_sx_properties_metric_Offset(sx.properties.metric.Offset __temp_me143, haxe.lang.Function widthProvider, haxe.lang.Function heightProvider)
	{
		//line 35 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__silentChanges = false;
		//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__left = new sx.properties.metric.Coordinate(haxe.lang.Runtime.toString("horizontal"));
		//line 44 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__left.pctSource = widthProvider;
		//line 45 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__left.ownerSize = widthProvider;
		//line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__left.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me143, "__changed")) ));
		//line 48 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__right = new sx.properties.metric.Coordinate(haxe.lang.Runtime.toString("horizontal"));
		//line 49 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__right.pctSource = widthProvider;
		//line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__right.ownerSize = widthProvider;
		//line 51 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__right.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me143, "__changed")) ));
		//line 53 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__top = new sx.properties.metric.Coordinate(haxe.lang.Runtime.toString("vertical"));
		//line 54 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__top.pctSource = heightProvider;
		//line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__top.ownerSize = heightProvider;
		//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__top.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me143, "__changed")) ));
		//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__bottom = new sx.properties.metric.Coordinate(haxe.lang.Runtime.toString("vertical"));
		//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__bottom.pctSource = heightProvider;
		//line 60 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__bottom.ownerSize = heightProvider;
		//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__bottom.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me143, "__changed")) ));
		//line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__left.pair = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me143, "get_right")) );
		//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__right.pair = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me143, "get_left")) );
		//line 65 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__top.pair = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me143, "get_bottom")) );
		//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.__bottom.pair = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me143, "get_top")) );
		//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		{
			//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			sx.properties.metric.Coordinate _this = __temp_me143.__left;
			//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			if ( ! (_this.selected) ) 
			{
				//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				_this.selected = true;
				//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				((sx.properties.metric.Coordinate) (_this.pair.__hx_invoke0_o()) ).selected = false;
			}
			
		}
		
		//line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		{
			//line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			sx.properties.metric.Coordinate _this1 = __temp_me143.__top;
			//line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			if ( ! (_this1.selected) ) 
			{
				//line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				_this1.selected = true;
				//line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				((sx.properties.metric.Coordinate) (_this1.pair.__hx_invoke0_o()) ).selected = false;
			}
			
		}
		
		//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		__temp_me143.onChange = new sx.signals.Signal<haxe.lang.Function>();
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		return new sx.properties.metric.Offset(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		return new sx.properties.metric.Offset(((haxe.lang.Function) (arr.__get(0)) ), ((haxe.lang.Function) (arr.__get(1)) ));
	}
	
	
	
	
	public sx.properties.metric.Coordinate __left;
	
	
	
	public sx.properties.metric.Coordinate __right;
	
	
	
	public sx.properties.metric.Coordinate __top;
	
	
	
	public sx.properties.metric.Coordinate __bottom;
	
	public sx.signals.Signal<haxe.lang.Function> onChange;
	
	public boolean __silentChanges;
	
	public void set(double x, double y)
	{
		//line 89 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		this.__silentChanges = true;
		//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		if (( ( -1 <= x ) && ( x <= 1 ) )) 
		{
			//line 92 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			this.get_left().set_pct(( x * 100 ));
		}
		else
		{
			//line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			this.get_left().set_dip(x);
		}
		
		//line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		if (( ( -1 <= y ) && ( y <= 1 ) )) 
		{
			//line 97 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			this.get_top().set_pct(( y * 100 ));
		}
		else
		{
			//line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			this.get_top().set_dip(y);
		}
		
		//line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		this.__silentChanges = false;
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
						listener.__hx_invoke0_o();
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
						listener1.__hx_invoke0_o();
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.onChange.__listenersInUse = false;
			}
			
		}
		
	}
	
	
	public void __changed(sx.properties.metric.Size property, java.lang.String previousUnits, double previousValue)
	{
		//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		if ( ! (this.__silentChanges) ) 
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
							listener.__hx_invoke0_o();
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
							listener1.__hx_invoke0_o();
						}
						
					}
					
					//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.onChange.__listenersInUse = false;
				}
				
			}
			
		}
		
	}
	
	
	public sx.properties.metric.Coordinate get_left()
	{
		//line 117 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		return this.__left;
	}
	
	
	public sx.properties.metric.Coordinate get_right()
	{
		//line 118 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		return this.__right;
	}
	
	
	public sx.properties.metric.Coordinate get_top()
	{
		//line 119 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		return this.__top;
	}
	
	
	public sx.properties.metric.Coordinate get_bottom()
	{
		//line 120 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		return this.__bottom;
	}
	
	
	public sx.properties.metric.Coordinate set_left(sx.properties.metric.Size v)
	{
		//line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		this.__left.copyValueFrom(v);
		//line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		return this.__left;
	}
	
	
	public sx.properties.metric.Coordinate set_right(sx.properties.metric.Size v)
	{
		//line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		this.__right.copyValueFrom(v);
		//line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		return this.__right;
	}
	
	
	public sx.properties.metric.Coordinate set_top(sx.properties.metric.Size v)
	{
		//line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		this.__top.copyValueFrom(v);
		//line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		return this.__top;
	}
	
	
	public sx.properties.metric.Coordinate set_bottom(sx.properties.metric.Size v)
	{
		//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		this.__bottom.copyValueFrom(v);
		//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		return this.__bottom;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		{
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			switch (field.hashCode())
			{
				case -23327538:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("__silentChanges")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.__silentChanges = haxe.lang.Runtime.toBool(value);
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 3317767:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("left")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.set_left(((sx.properties.metric.Size) (value) ));
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 1036773999:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("onChange")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.onChange = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case -1484145689:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("__left")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.__left = ((sx.properties.metric.Coordinate) (value) );
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case -611500533:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("__bottom")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.__bottom = ((sx.properties.metric.Coordinate) (value) );
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 108511772:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("right")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.set_right(((sx.properties.metric.Size) (value) ));
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case -1383228885:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("bottom")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.set_bottom(((sx.properties.metric.Size) (value) ));
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 1241784892:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("__right")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.__right = ((sx.properties.metric.Coordinate) (value) );
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 90679669:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("__top")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.__top = ((sx.properties.metric.Coordinate) (value) );
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 115029:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("top")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.set_top(((sx.properties.metric.Size) (value) ));
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		{
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			switch (field.hashCode())
			{
				case -1660712792:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("set_bottom")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_bottom")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 3317767:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("left")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_left();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 1985326072:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("set_top")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_top")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case -1484145689:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("__left")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.__left;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 930844671:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("set_right")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_right")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 108511772:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("right")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_right();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 1415317956:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("set_left")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_left")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 1241784892:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("__right")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.__right;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 697449268:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("get_bottom")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_bottom")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 115029:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("top")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_top();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case -74783508:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("get_top")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_top")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 90679669:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("__top")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.__top;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 1145461747:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("get_right")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_right")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case -1383228885:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("bottom")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_bottom();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 1976430416:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("get_left")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_left")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case -611500533:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("__bottom")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.__bottom;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case -1107281196:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("__changed")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__changed")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 1036773999:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("onChange")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.onChange;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 113762:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("set")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case -23327538:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("__silentChanges")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.__silentChanges;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		{
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			switch (field.hashCode())
			{
				case -1660712792:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("set_bottom")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.set_bottom(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 113762:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("set")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.set(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(1))) ));
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 1985326072:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("set_top")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.set_top(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case -1107281196:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("__changed")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.__changed(((sx.properties.metric.Size) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(2))) ));
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 930844671:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("set_right")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.set_right(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 1976430416:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("get_left")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_left();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 1415317956:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("set_left")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.set_left(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 1145461747:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("get_right")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_right();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case 697449268:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("get_bottom")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_bottom();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
				case -74783508:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					if (field.equals("get_top")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_top();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		baseArr.push("__silentChanges");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		baseArr.push("onChange");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		baseArr.push("__bottom");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		baseArr.push("bottom");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		baseArr.push("__top");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		baseArr.push("top");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		baseArr.push("__right");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		baseArr.push("right");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		baseArr.push("__left");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		baseArr.push("left");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
		{
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


