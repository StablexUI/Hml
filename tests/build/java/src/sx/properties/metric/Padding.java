package sx.properties.metric;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Padding extends sx.properties.metric.SizeSetterProxy
{
	public Padding(haxe.lang.EmptyObject empty)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public Padding()
	{
		//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		sx.properties.metric.Padding.__hx_ctor_sx_properties_metric_Padding(this);
	}
	
	
	public static void __hx_ctor_sx_properties_metric_Padding(sx.properties.metric.Padding __temp_me136)
	{
		//line 54 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		__temp_me136.__batchChanges = false;
		//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		sx.properties.metric.SizeSetterProxy.__hx_ctor_sx_properties_metric_SizeSetterProxy(__temp_me136, null);
		//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		__temp_me136.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me136, "__setAll")) ));
		//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		__temp_me136.__left = new sx.properties.metric.Size(haxe.lang.Runtime.toString("horizontal"));
		//line 67 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		__temp_me136.__right = new sx.properties.metric.Size(haxe.lang.Runtime.toString("horizontal"));
		//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		__temp_me136.__top = new sx.properties.metric.Size(haxe.lang.Runtime.toString("vertical"));
		//line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		__temp_me136.__bottom = new sx.properties.metric.Size(haxe.lang.Runtime.toString("vertical"));
		//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		__temp_me136.__left.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me136, "__sideChanged")) ));
		//line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		__temp_me136.__right.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me136, "__sideChanged")) ));
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		__temp_me136.__top.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me136, "__sideChanged")) ));
		//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		__temp_me136.__bottom.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me136, "__sideChanged")) ));
		//line 76 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		__temp_me136.__left.pctSource = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me136, "__ownerWidthProvider")) );
		//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		__temp_me136.__right.pctSource = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me136, "__ownerWidthProvider")) );
		//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		__temp_me136.__top.pctSource = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me136, "__ownerHeightProvider")) );
		//line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		__temp_me136.__bottom.pctSource = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me136, "__ownerHeightProvider")) );
		//line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		__temp_me136.onComponentsChange = new sx.signals.Signal<haxe.lang.Function>();
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return new sx.properties.metric.Padding(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return new sx.properties.metric.Padding();
	}
	
	
	
	
	public sx.properties.metric.Size __left;
	
	
	
	public sx.properties.metric.Size __right;
	
	
	
	public sx.properties.metric.Size __top;
	
	
	
	public sx.properties.metric.Size __bottom;
	
	
	
	public sx.properties.metric.SizeSetterProxy __horizontal;
	
	
	
	public sx.properties.metric.SizeSetterProxy __vertical;
	
	public haxe.lang.Function ownerWidth;
	
	public haxe.lang.Function ownerHeight;
	
	public sx.signals.Signal<haxe.lang.Function> onComponentsChange;
	
	public boolean __batchChanges;
	
	public void __sideChanged(sx.properties.metric.Size changed, java.lang.String previousUnits, double previousValue)
	{
		//line 90 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		if (this.__batchChanges) 
		{
			//line 90 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return ;
		}
		
		//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		{
			//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			boolean horizontal = haxe.lang.Runtime.valEq(changed.orientation, haxe.lang.Runtime.toString("horizontal"));
			//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			boolean vertical = haxe.lang.Runtime.valEq(changed.orientation, haxe.lang.Runtime.toString("vertical"));
			//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (( ( this.onComponentsChange != null ) && ( this.onComponentsChange.__listeners.length > 0 ) )) 
			{
				//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				if (this.onComponentsChange.__listenersInUse) 
				{
					//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					{
						//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						int _g = 0;
						//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						haxe.root.Array<haxe.lang.Function> _g1 = this.onComponentsChange.__listeners;
						//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						while (( _g < _g1.length ))
						{
							//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							haxe.lang.Function listener = _g1.__get(_g);
							//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							 ++ _g;
							//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							listener.__hx_invoke2_o(0.0, horizontal, 0.0, vertical);
						}
						
					}
					
					//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					boolean __temp_expr1 = false;
				}
				else
				{
					//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.onComponentsChange.__listenersInUse = true;
					//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					{
						//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						int _g2 = 0;
						//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						haxe.root.Array<haxe.lang.Function> _g11 = this.onComponentsChange.__listeners;
						//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						while (( _g2 < _g11.length ))
						{
							//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							haxe.lang.Function listener1 = _g11.__get(_g2);
							//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							 ++ _g2;
							//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							listener1.__hx_invoke2_o(0.0, horizontal, 0.0, vertical);
						}
						
					}
					
					//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.onComponentsChange.__listenersInUse = false;
				}
				
			}
			
		}
		
	}
	
	
	public void __dimensionChanged(sx.properties.metric.Size changed, java.lang.String units, double value)
	{
		//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		this.__batchChanges = true;
		//line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		if (haxe.lang.Runtime.valEq(changed.orientation, haxe.lang.Runtime.toString("horizontal"))) 
		{
			//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			sx.properties.metric.Size first = this.get_left();
			//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			sx.properties.metric.Size second = this.get_right();
			//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			{
				//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				java.lang.String __temp_svar2 = (units);
				//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				switch (__temp_svar2.hashCode())
				{
					case 99467:
					{
						//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						if (__temp_svar2.equals("dip")) 
						{
							//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							first.set_dip(value);
							//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							second.set_dip(value);
						}
						
						//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
					case 110817:
					{
						//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						if (__temp_svar2.equals("pct")) 
						{
							//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							first.set_pct(value);
							//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							second.set_pct(value);
						}
						
						//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
					case 3592:
					{
						//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						if (__temp_svar2.equals("px")) 
						{
							//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							first.set_px(value);
							//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							second.set_px(value);
						}
						
						//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
				}
				
			}
			
		}
		else
		{
			//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			sx.properties.metric.Size first1 = this.get_top();
			//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			sx.properties.metric.Size second1 = this.get_bottom();
			//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			{
				//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				java.lang.String __temp_svar4 = (units);
				//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				switch (__temp_svar4.hashCode())
				{
					case 99467:
					{
						//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						if (__temp_svar4.equals("dip")) 
						{
							//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							first1.set_dip(value);
							//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							second1.set_dip(value);
						}
						
						//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
					case 110817:
					{
						//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						if (__temp_svar4.equals("pct")) 
						{
							//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							first1.set_pct(value);
							//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							second1.set_pct(value);
						}
						
						//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
					case 3592:
					{
						//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						if (__temp_svar4.equals("px")) 
						{
							//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							first1.set_px(value);
							//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							second1.set_px(value);
						}
						
						//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
				}
				
			}
			
		}
		
		//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		this.__batchChanges = false;
		//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		{
			//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			boolean horizontal = haxe.lang.Runtime.valEq(changed.orientation, haxe.lang.Runtime.toString("horizontal"));
			//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			boolean vertical = haxe.lang.Runtime.valEq(changed.orientation, haxe.lang.Runtime.toString("vertical"));
			//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (( ( this.onComponentsChange != null ) && ( this.onComponentsChange.__listeners.length > 0 ) )) 
			{
				//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				if (this.onComponentsChange.__listenersInUse) 
				{
					//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					{
						//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						int _g = 0;
						//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						haxe.root.Array<haxe.lang.Function> _g1 = this.onComponentsChange.__listeners;
						//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						while (( _g < _g1.length ))
						{
							//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							haxe.lang.Function listener = _g1.__get(_g);
							//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							 ++ _g;
							//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							listener.__hx_invoke2_o(0.0, horizontal, 0.0, vertical);
						}
						
					}
					
					//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					boolean __temp_expr1 = false;
				}
				else
				{
					//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.onComponentsChange.__listenersInUse = true;
					//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					{
						//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						int _g2 = 0;
						//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						haxe.root.Array<haxe.lang.Function> _g11 = this.onComponentsChange.__listeners;
						//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						while (( _g2 < _g11.length ))
						{
							//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							haxe.lang.Function listener1 = _g11.__get(_g2);
							//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							 ++ _g2;
							//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							listener1.__hx_invoke2_o(0.0, horizontal, 0.0, vertical);
						}
						
					}
					
					//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.onComponentsChange.__listenersInUse = false;
				}
				
			}
			
		}
		
	}
	
	
	public final void __setDimension(sx.properties.metric.Size first, sx.properties.metric.Size second, java.lang.String units, double value)
	{
		//line 118 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		{
			//line 118 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			java.lang.String __temp_svar1 = (units);
			//line 118 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			switch (__temp_svar1.hashCode())
			{
				case 99467:
				{
					//line 119 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (__temp_svar1.equals("dip")) 
					{
						//line 120 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						first.set_dip(value);
						//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						second.set_dip(value);
					}
					
					//line 119 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 110817:
				{
					//line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (__temp_svar1.equals("pct")) 
					{
						//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						first.set_pct(value);
						//line 127 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						second.set_pct(value);
					}
					
					//line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 3592:
				{
					//line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (__temp_svar1.equals("px")) 
					{
						//line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						first.set_px(value);
						//line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						second.set_px(value);
					}
					
					//line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
			}
			
		}
		
	}
	
	
	public final void __setAll(sx.properties.metric.Size changed, java.lang.String units, double value)
	{
		//line 137 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		this.__batchChanges = true;
		//line 139 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		{
			//line 139 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			java.lang.String __temp_svar2 = (units);
			//line 139 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			switch (__temp_svar2.hashCode())
			{
				case 99467:
				{
					//line 140 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (__temp_svar2.equals("dip")) 
					{
						//line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.get_left().set_dip(value);
						//line 142 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.get_right().set_dip(value);
						//line 143 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.get_top().set_dip(value);
						//line 144 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.get_bottom().set_dip(value);
					}
					
					//line 140 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 110817:
				{
					//line 150 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (__temp_svar2.equals("pct")) 
					{
						//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.get_left().set_pct(value);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.get_right().set_pct(value);
						//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.get_top().set_pct(value);
						//line 154 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.get_bottom().set_pct(value);
					}
					
					//line 150 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 3592:
				{
					//line 145 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (__temp_svar2.equals("px")) 
					{
						//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.get_left().set_px(value);
						//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.get_right().set_px(value);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.get_top().set_px(value);
						//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.get_bottom().set_px(value);
					}
					
					//line 145 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
			}
			
		}
		
		//line 157 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		this.__batchChanges = false;
		//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		if (( ( this.onComponentsChange != null ) && ( this.onComponentsChange.__listeners.length > 0 ) )) 
		{
			//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (this.onComponentsChange.__listenersInUse) 
			{
				//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				{
					//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					int _g = 0;
					//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = this.onComponentsChange.__listeners;
					//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					while (( _g < _g1.length ))
					{
						//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						 ++ _g;
						//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						listener.__hx_invoke2_o(0.0, true, 0.0, true);
					}
					
				}
				
				//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.onComponentsChange.__listenersInUse = true;
				//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				{
					//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					int _g2 = 0;
					//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = this.onComponentsChange.__listeners;
					//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					while (( _g2 < _g11.length ))
					{
						//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						 ++ _g2;
						//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						listener1.__hx_invoke2_o(0.0, true, 0.0, true);
					}
					
				}
				
				//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.onComponentsChange.__listenersInUse = false;
			}
			
		}
		
	}
	
	
	public final void __invokeOnComponentsChange(boolean horizontal, boolean vertical)
	{
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( ( this.onComponentsChange != null ) && ( this.onComponentsChange.__listeners.length > 0 ) )) 
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (this.onComponentsChange.__listenersInUse) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g = 0;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = this.onComponentsChange.__listeners;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g < _g1.length ))
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener.__hx_invoke2_o(0.0, horizontal, 0.0, vertical);
					}
					
				}
				
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.onComponentsChange.__listenersInUse = true;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g2 = 0;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = this.onComponentsChange.__listeners;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g2 < _g11.length ))
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g2;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener1.__hx_invoke2_o(0.0, horizontal, 0.0, vertical);
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.onComponentsChange.__listenersInUse = false;
			}
			
		}
		
	}
	
	
	public sx.properties.metric.Size __ownerWidthProvider()
	{
		//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		if (( this.ownerWidth == null )) 
		{
			//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
		}
		else
		{
			//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return ((sx.properties.metric.Size) (this.ownerWidth.__hx_invoke0_o()) );
		}
		
	}
	
	
	public sx.properties.metric.Size __ownerHeightProvider()
	{
		//line 185 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		if (( this.ownerHeight == null )) 
		{
			//line 185 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
		}
		else
		{
			//line 185 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return ((sx.properties.metric.Size) (this.ownerHeight.__hx_invoke0_o()) );
		}
		
	}
	
	
	@Override public void __constraintChanged(sx.properties.metric.Size constraint, java.lang.String previousUnits, double previousValue)
	{
		//line 194 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		super.__constraintChanged(constraint, previousUnits, previousValue);
		//line 196 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		if (( constraint == this.__min )) 
		{
			//line 197 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (( this.__horizontal != null )) 
			{
				//line 198 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.__horizontal.set_min(constraint);
			}
			else
			{
				//line 200 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.get_left().set_min(constraint);
				//line 201 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.get_right().set_min(constraint);
			}
			
			//line 204 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (( this.__vertical != null )) 
			{
				//line 205 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.__vertical.set_min(constraint);
			}
			else
			{
				//line 207 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.get_top().set_min(constraint);
				//line 208 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.get_bottom().set_min(constraint);
			}
			
		}
		else
		{
			//line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (( constraint == this.__max )) 
			{
				//line 212 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				if (( this.__horizontal != null )) 
				{
					//line 213 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.__horizontal.set_max(constraint);
				}
				else
				{
					//line 215 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.get_left().set_max(constraint);
					//line 216 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.get_right().set_max(constraint);
				}
				
				//line 219 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				if (( this.__vertical != null )) 
				{
					//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.__vertical.set_max(constraint);
				}
				else
				{
					//line 222 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.get_top().set_max(constraint);
					//line 223 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.get_bottom().set_max(constraint);
				}
				
			}
			
		}
		
	}
	
	
	public void __verticalConstraintChanged(sx.properties.metric.Size constraint, java.lang.String previousUnits, double previousValue)
	{
		//line 234 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		boolean __temp_stmt1 = false;
		//line 234 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		{
			//line 234 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			sx.properties.metric.Size b = this.__vertical.get_max();
			//line 234 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			__temp_stmt1 = ( constraint.get_dip() == b.get_dip() );
		}
		
		//line 234 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		if (__temp_stmt1) 
		{
			//line 235 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.get_top().set_max(constraint);
			//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.get_bottom().set_max(constraint);
		}
		else
		{
			//line 237 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			boolean __temp_stmt2 = false;
			//line 237 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			{
				//line 237 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				sx.properties.metric.Size b1 = this.__vertical.get_min();
				//line 237 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				__temp_stmt2 = ( constraint.get_dip() == b1.get_dip() );
			}
			
			//line 237 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (__temp_stmt2) 
			{
				//line 238 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.get_top().set_min(constraint);
				//line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.get_bottom().set_min(constraint);
			}
			
		}
		
	}
	
	
	public void __horizontalConstraintChanged(sx.properties.metric.Size constraint, java.lang.String previousUnits, double previousValue)
	{
		//line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		boolean __temp_stmt1 = false;
		//line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		{
			//line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			sx.properties.metric.Size b = this.__horizontal.get_max();
			//line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			__temp_stmt1 = ( constraint.get_dip() == b.get_dip() );
		}
		
		//line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		if (__temp_stmt1) 
		{
			//line 250 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.get_left().set_max(constraint);
			//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.get_right().set_max(constraint);
		}
		else
		{
			//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			boolean __temp_stmt2 = false;
			//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			{
				//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				sx.properties.metric.Size b1 = this.__horizontal.get_min();
				//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				__temp_stmt2 = ( constraint.get_dip() == b1.get_dip() );
			}
			
			//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (__temp_stmt2) 
			{
				//line 253 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.get_left().set_min(constraint);
				//line 254 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.get_right().set_min(constraint);
			}
			
		}
		
	}
	
	
	public sx.properties.metric.SizeSetterProxy get_horizontal()
	{
		//line 264 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		if (( this.__horizontal == null )) 
		{
			//line 265 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.__horizontal = new sx.properties.metric.SizeSetterProxy(haxe.lang.Runtime.toString("horizontal"));
			//line 266 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.__horizontal.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__dimensionChanged")) ));
			//line 267 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.__horizontal.get_min().onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__horizontalConstraintChanged")) ));
			//line 268 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.__horizontal.get_max().onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__horizontalConstraintChanged")) ));
		}
		
		//line 271 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return this.__horizontal;
	}
	
	
	public sx.properties.metric.SizeSetterProxy get_vertical()
	{
		//line 280 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		if (( this.__vertical == null )) 
		{
			//line 281 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.__vertical = new sx.properties.metric.SizeSetterProxy(haxe.lang.Runtime.toString("vertical"));
			//line 282 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.__vertical.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__dimensionChanged")) ));
			//line 283 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.__vertical.get_min().onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__verticalConstraintChanged")) ));
			//line 284 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.__vertical.get_max().onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__verticalConstraintChanged")) ));
		}
		
		//line 287 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return this.__vertical;
	}
	
	
	public sx.properties.metric.SizeSetterProxy set_horizontal(sx.properties.metric.SizeSetterProxy value)
	{
		//line 296 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		sx.properties.metric.SizeSetterProxy proxy = this.get_horizontal();
		//line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		proxy.copyValueFrom(value);
		//line 299 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return proxy;
	}
	
	
	public sx.properties.metric.SizeSetterProxy set_vertical(sx.properties.metric.SizeSetterProxy value)
	{
		//line 308 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		sx.properties.metric.SizeSetterProxy proxy = this.get_vertical();
		//line 309 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		proxy.copyValueFrom(value);
		//line 311 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return proxy;
	}
	
	
	@Override public java.lang.String toString()
	{
		//line 320 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return ( ( ( ( ( ( ( ( "{ left : " + haxe.root.Std.string(this.get_left()) ) + ", top : " ) + haxe.root.Std.string(this.get_top()) ) + ", right : " ) + haxe.root.Std.string(this.get_right()) ) + ", bottom : " ) + haxe.root.Std.string(this.get_bottom()) ) + " }" );
	}
	
	
	public sx.properties.metric.Size get_left()
	{
		//line 325 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return this.__left;
	}
	
	
	public sx.properties.metric.Size get_right()
	{
		//line 326 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return this.__right;
	}
	
	
	public sx.properties.metric.Size get_top()
	{
		//line 327 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return this.__top;
	}
	
	
	public sx.properties.metric.Size get_bottom()
	{
		//line 328 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return this.__bottom;
	}
	
	
	public sx.properties.metric.Size set_left(sx.properties.metric.Size v)
	{
		//line 331 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return this.__left.copyValueFrom(v);
	}
	
	
	public sx.properties.metric.Size set_right(sx.properties.metric.Size v)
	{
		//line 332 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return this.__right.copyValueFrom(v);
	}
	
	
	public sx.properties.metric.Size set_top(sx.properties.metric.Size v)
	{
		//line 333 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return this.__top.copyValueFrom(v);
	}
	
	
	public sx.properties.metric.Size set_bottom(sx.properties.metric.Size v)
	{
		//line 334 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return this.__bottom.copyValueFrom(v);
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			switch (field.hashCode())
			{
				case 2064820745:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__batchChanges")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__batchChanges = haxe.lang.Runtime.toBool(value);
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 3317767:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("left")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.set_left(((sx.properties.metric.Size) (value) ));
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 481168997:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("onComponentsChange")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.onComponentsChange = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -1484145689:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__left")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__left = ((sx.properties.metric.Size) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -575709766:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("ownerHeight")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.ownerHeight = ((haxe.lang.Function) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 108511772:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("right")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.set_right(((sx.properties.metric.Size) (value) ));
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 549585619:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("ownerWidth")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.ownerWidth = ((haxe.lang.Function) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1241784892:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__right")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__right = ((sx.properties.metric.Size) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 912429910:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__vertical")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__vertical = ((sx.properties.metric.SizeSetterProxy) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 115029:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("top")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.set_top(((sx.properties.metric.Size) (value) ));
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -1984141450:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("vertical")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.set_vertical(((sx.properties.metric.SizeSetterProxy) (value) ));
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 90679669:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__top")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__top = ((sx.properties.metric.Size) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1853898756:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__horizontal")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__horizontal = ((sx.properties.metric.SizeSetterProxy) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -1383228885:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("bottom")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.set_bottom(((sx.properties.metric.Size) (value) ));
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1387629604:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("horizontal")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.set_horizontal(((sx.properties.metric.SizeSetterProxy) (value) ));
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -611500533:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__bottom")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__bottom = ((sx.properties.metric.Size) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			switch (field.hashCode())
			{
				case -1660712792:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("set_bottom")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_bottom")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 3317767:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("left")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_left();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1985326072:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("set_top")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_top")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -1484145689:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__left")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__left;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 930844671:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("set_right")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_right")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 108511772:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("right")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_right();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1415317956:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("set_left")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_left")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1241784892:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__right")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__right;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 697449268:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("get_bottom")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_bottom")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 115029:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("top")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_top();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -74783508:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("get_top")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_top")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 90679669:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__top")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__top;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1145461747:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("get_right")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_right")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -1383228885:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("bottom")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_bottom();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1976430416:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("get_left")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_left")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -611500533:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__bottom")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__bottom;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -1776922004:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("toString")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "toString")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1387629604:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("horizontal")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_horizontal();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1936763571:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("set_vertical")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_vertical")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1853898756:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__horizontal")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__horizontal;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -1603931103:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("set_horizontal")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_horizontal")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -1984141450:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("vertical")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_vertical();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 387770943:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("get_vertical")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_vertical")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 912429910:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__vertical")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__vertical;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 167805101:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("get_horizontal")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_horizontal")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 549585619:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("ownerWidth")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.ownerWidth;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1575127667:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__horizontalConstraintChanged")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__horizontalConstraintChanged")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -575709766:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("ownerHeight")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.ownerHeight;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1498088801:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__verticalConstraintChanged")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__verticalConstraintChanged")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 481168997:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("onComponentsChange")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.onComponentsChange;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -886296009:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__constraintChanged")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__constraintChanged")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 2064820745:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__batchChanges")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__batchChanges;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -1081403925:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__ownerHeightProvider")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__ownerHeightProvider")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -398621315:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__sideChanged")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__sideChanged")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 206486980:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__ownerWidthProvider")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__ownerWidthProvider")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -47703474:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__dimensionChanged")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__dimensionChanged")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -221557539:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__invokeOnComponentsChange")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__invokeOnComponentsChange")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1852431108:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__setDimension")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__setDimension")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -134089281:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__setAll")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__setAll")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			int __temp_hash2 = field.hashCode();
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			switch (__temp_hash2)
			{
				case -1776922004:
				case -886296009:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (( (( ( __temp_hash2 == -1776922004 ) && field.equals("toString") )) || field.equals("__constraintChanged") )) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -398621315:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__sideChanged")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__sideChanged(((sx.properties.metric.Size) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(2))) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -1660712792:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("set_bottom")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.set_bottom(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -47703474:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__dimensionChanged")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__dimensionChanged(((sx.properties.metric.Size) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(2))) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1985326072:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("set_top")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.set_top(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1852431108:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__setDimension")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__setDimension(((sx.properties.metric.Size) (dynargs.__get(0)) ), ((sx.properties.metric.Size) (dynargs.__get(1)) ), haxe.lang.Runtime.toString(dynargs.__get(2)), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(3))) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 930844671:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("set_right")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.set_right(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -134089281:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__setAll")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__setAll(((sx.properties.metric.Size) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(2))) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1415317956:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("set_left")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.set_left(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -221557539:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__invokeOnComponentsChange")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__invokeOnComponentsChange(haxe.lang.Runtime.toBool(dynargs.__get(0)), haxe.lang.Runtime.toBool(dynargs.__get(1)));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 697449268:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("get_bottom")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_bottom();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 206486980:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__ownerWidthProvider")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__ownerWidthProvider();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -74783508:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("get_top")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_top();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -1081403925:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__ownerHeightProvider")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__ownerHeightProvider();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1145461747:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("get_right")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_right();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1498088801:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__verticalConstraintChanged")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__verticalConstraintChanged(((sx.properties.metric.Size) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(2))) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1976430416:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("get_left")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_left();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1575127667:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("__horizontalConstraintChanged")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__horizontalConstraintChanged(((sx.properties.metric.Size) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(2))) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 1936763571:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("set_vertical")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.set_vertical(((sx.properties.metric.SizeSetterProxy) (dynargs.__get(0)) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 167805101:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("get_horizontal")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_horizontal();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case -1603931103:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("set_horizontal")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.set_horizontal(((sx.properties.metric.SizeSetterProxy) (dynargs.__get(0)) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case 387770943:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (field.equals("get_vertical")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_vertical();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("__batchChanges");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("onComponentsChange");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("ownerHeight");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("ownerWidth");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("__vertical");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("vertical");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("__horizontal");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("horizontal");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("__bottom");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("bottom");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("__top");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("top");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("__right");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("right");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("__left");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		baseArr.push("left");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


