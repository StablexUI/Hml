package sx.properties.metric;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class SizeSetterProxy extends sx.properties.metric.Size
{
	public SizeSetterProxy(haxe.lang.EmptyObject empty)
	{
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public SizeSetterProxy(java.lang.String orientation)
	{
		//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		sx.properties.metric.SizeSetterProxy.__hx_ctor_sx_properties_metric_SizeSetterProxy(this, orientation);
	}
	
	
	public static void __hx_ctor_sx_properties_metric_SizeSetterProxy(sx.properties.metric.SizeSetterProxy __temp_me135, java.lang.String orientation)
	{
		//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
		sx.properties.metric.Size.__hx_ctor_sx_properties_metric_Size(__temp_me135, orientation);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
		return new sx.properties.metric.SizeSetterProxy(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
		return new sx.properties.metric.SizeSetterProxy(haxe.lang.Runtime.toString(arr.__get(0)));
	}
	
	
	@Override public void __invokeOnChange(java.lang.String previousUnits, double previousValue)
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
						listener.__hx_invoke3_o(0.0, this, 0.0, this.units, this.__value, haxe.lang.Runtime.undefined);
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
						listener1.__hx_invoke3_o(0.0, this, 0.0, this.units, this.__value, haxe.lang.Runtime.undefined);
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.onChange.__listenersInUse = false;
			}
			
		}
		
	}
	
	
	@Override public double get_dip()
	{
		//line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
		throw haxe.lang.HaxeException.wrap(new sx.exceptions.NoReadException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.properties.metric.SizeSetterProxy", "SizeSetterProxy.hx", "get_dip"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (30) )) )})));
	}
	
	
	@Override public double get_px()
	{
		//line 31 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
		throw haxe.lang.HaxeException.wrap(new sx.exceptions.NoReadException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.properties.metric.SizeSetterProxy", "SizeSetterProxy.hx", "get_px"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (31) )) )})));
	}
	
	
	@Override public double get_pct()
	{
		//line 32 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
		throw haxe.lang.HaxeException.wrap(new sx.exceptions.NoReadException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.properties.metric.SizeSetterProxy", "SizeSetterProxy.hx", "get_pct"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (32) )) )})));
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
		{
			//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
			switch (field.hashCode())
			{
				case -74787720:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
					if (field.equals("get_pct")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_pct")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
					break;
				}
				
				
				case 607543015:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
					if (field.equals("__invokeOnChange")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__invokeOnChange")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
					break;
				}
				
				
				case -1249338479:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
					if (field.equals("get_px")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_px")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
					break;
				}
				
				
				case -74799070:
				{
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
					if (field.equals("get_dip")) 
					{
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_dip")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


