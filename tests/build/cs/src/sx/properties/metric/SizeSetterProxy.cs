
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.metric {
	public class SizeSetterProxy : global::sx.properties.metric.Size {
		
		public SizeSetterProxy(global::haxe.lang.EmptyObject empty) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
		}
		
		
		public SizeSetterProxy(string orientation) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
			#line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			global::sx.properties.metric.SizeSetterProxy.__hx_ctor_sx_properties_metric_SizeSetterProxy(this, orientation);
		}
		#line default
		
		public static void __hx_ctor_sx_properties_metric_SizeSetterProxy(global::sx.properties.metric.SizeSetterProxy __temp_me152, string orientation) {
			#line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			global::sx.properties.metric.Size.__hx_ctor_sx_properties_metric_Size(__temp_me152, orientation);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
			return new global::sx.properties.metric.SizeSetterProxy(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
			return new global::sx.properties.metric.SizeSetterProxy(global::haxe.lang.Runtime.toString(arr[0]));
		}
		#line default
		
		public override void __invokeOnChange(string previousUnits, double previousValue) {
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) {
				#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (this.onChange.__listenersInUse) {
					#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g1 = this.onChange.__listeners;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g < _g1.length )) {
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener.__hx_invoke3_o(default(double), this, default(double), this.units, this.__value, global::haxe.lang.Runtime.undefined);
						}
						
					}
					
					#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					bool __temp_expr1 = false;
				}
				else {
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.onChange.__listenersInUse = true;
					{
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g11 = this.onChange.__listeners;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g2 < _g11.length )) {
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g2;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener1.__hx_invoke3_o(default(double), this, default(double), this.units, this.__value, global::haxe.lang.Runtime.undefined);
						}
						
					}
					
					#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.onChange.__listenersInUse = false;
				}
				
			}
			
		}
		#line default
		
		public override double get_dip() {
			unchecked {
				#line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
				throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.NoReadException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"get_dip", "sx.properties.metric.SizeSetterProxy", "SizeSetterProxy.hx"}, new int[]{1981972957}, new double[]{((double) (30) )})));
			}
			#line default
		}
		
		
		public override double get_px() {
			unchecked {
				#line 31 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
				throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.NoReadException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"get_px", "sx.properties.metric.SizeSetterProxy", "SizeSetterProxy.hx"}, new int[]{1981972957}, new double[]{((double) (31) )})));
			}
			#line default
		}
		
		
		public override double get_pct() {
			unchecked {
				#line 32 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
				throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.NoReadException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"get_pct", "sx.properties.metric.SizeSetterProxy", "SizeSetterProxy.hx"}, new int[]{1981972957}, new double[]{((double) (32) )})));
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
				switch (hash) {
					case 650779576:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_pct", 650779576)) );
					}
					
					
					case 590346577:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_px", 590346577)) );
					}
					
					
					case 650184162:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_dip", 650184162)) );
					}
					
					
					case 1038712487:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__invokeOnChange", 1038712487)) );
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
	}
}


