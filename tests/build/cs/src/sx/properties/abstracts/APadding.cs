
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.abstracts._APadding {
	public sealed class APadding_Impl_ {
		
		static APadding_Impl_() {
			#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			global::sx.properties.abstracts._APadding.APadding_Impl_.__pool = new global::sx.ds.ObjectPool<object>();
		}
		#line default
		
		public static global::sx.ds.ObjectPool<object> __pool;
		
		public static global::sx.properties.metric.Padding fromFloat(double v) {
			#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			global::sx.properties.abstracts._APadding.WeakPadding weakPadding = null;
			#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			{
				#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
				global::sx.ds.ObjectPool<object> _this = global::sx.properties.abstracts._APadding.APadding_Impl_.__pool;
				#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
				if (( _this.length > 0 )) {
					#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
					_this.length--;
					#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
					weakPadding = ((global::sx.properties.abstracts._APadding.WeakPadding) (_this.__pool[_this.length]) );
				}
				else {
					#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
					weakPadding = null;
				}
				
			}
			
			#line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			if (( weakPadding == null )) {
				#line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
				weakPadding = new global::sx.properties.abstracts._APadding.WeakPadding();
			}
			
			#line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			weakPadding.weak = true;
			weakPadding.set_dip(v);
			#line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			return weakPadding;
		}
		#line default
		
		
		
		
		
		
		
		
		
		public static global::sx.signals.Signal<object> get_onChange(global::sx.properties.metric.Padding this1) {
			#line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			return this1.onComponentsChange;
		}
		#line default
		
		public static double set_dip(global::sx.properties.metric.Padding this1, double v) {
			#line 53 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			return this1.set_dip(v);
		}
		#line default
		
		public static double set_px(global::sx.properties.metric.Padding this1, double v) {
			#line 54 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			return this1.set_px(v);
		}
		#line default
		
		public static double set_pct(global::sx.properties.metric.Padding this1, double v) {
			#line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			return this1.set_pct(v);
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.abstracts._APadding {
	public class WeakPadding : global::sx.properties.metric.Padding {
		
		public WeakPadding(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public WeakPadding() : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			global::sx.properties.abstracts._APadding.WeakPadding.__hx_ctor_sx_properties_abstracts__APadding_WeakPadding(this);
		}
		#line default
		
		public static void __hx_ctor_sx_properties_abstracts__APadding_WeakPadding(global::sx.properties.abstracts._APadding.WeakPadding __temp_me154) {
			#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			global::sx.properties.metric.Padding.__hx_ctor_sx_properties_metric_Padding(__temp_me154);
			__temp_me154.onChange = null;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			return new global::sx.properties.abstracts._APadding.WeakPadding(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			return new global::sx.properties.abstracts._APadding.WeakPadding();
		}
		#line default
		
		public override void dispose() {
			#line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			{
				#line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
				global::sx.ds.ObjectPool<object> _this = global::sx.properties.abstracts._APadding.APadding_Impl_.__pool;
				#line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
				_this.__pool[_this.length] = this;
				#line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
				_this.length++;
			}
			
			#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			this.weak = false;
		}
		#line default
		
		public override void __invokeOnChange(string units, double @value) {
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
				switch (hash) {
					case 1038712487:
					{
						#line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__invokeOnChange", 1038712487)) );
					}
					
					
					case 994869407:
					{
						#line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "dispose", 994869407)) );
					}
					
					
					default:
					{
						#line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
	}
}


