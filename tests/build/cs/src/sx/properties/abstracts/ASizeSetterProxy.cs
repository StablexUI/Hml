
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.abstracts._ASizeSetterProxy {
	public sealed class ASizeSetterProxy_Impl_ {
		
		static ASizeSetterProxy_Impl_() {
			#line 16 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			global::sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_.__pool = new global::sx.ds.ObjectPool<object>();
		}
		#line default
		
		public static global::sx.ds.ObjectPool<object> __pool;
		
		public static global::sx.properties.metric.SizeSetterProxy fromFloat(double v) {
			#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			global::sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy weakSizeSetterProxy = null;
			#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			{
				#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
				global::sx.ds.ObjectPool<object> _this = global::sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_.__pool;
				#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
				if (( _this.length > 0 )) {
					#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
					_this.length--;
					#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
					weakSizeSetterProxy = ((global::sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy) (_this.__pool[_this.length]) );
				}
				else {
					#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
					weakSizeSetterProxy = null;
				}
				
			}
			
			#line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			if (( weakSizeSetterProxy == null )) {
				#line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
				weakSizeSetterProxy = new global::sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy();
			}
			
			#line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			weakSizeSetterProxy.weak = true;
			weakSizeSetterProxy.set_dip(v);
			#line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			return weakSizeSetterProxy;
		}
		#line default
		
		
		
		
		
		
		
		public static double set_dip(global::sx.properties.metric.SizeSetterProxy this1, double v) {
			#line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			return this1.set_dip(v);
		}
		#line default
		
		public static double set_px(global::sx.properties.metric.SizeSetterProxy this1, double v) {
			#line 44 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			return this1.set_px(v);
		}
		#line default
		
		public static double set_pct(global::sx.properties.metric.SizeSetterProxy this1, double v) {
			#line 45 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			return this1.set_pct(v);
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.abstracts._ASizeSetterProxy {
	public class WeakSizeSetterProxy : global::sx.properties.metric.SizeSetterProxy {
		
		public WeakSizeSetterProxy(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public WeakSizeSetterProxy() : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
			#line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			global::sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy.__hx_ctor_sx_properties_abstracts__ASizeSetterProxy_WeakSizeSetterProxy(this);
		}
		#line default
		
		public static void __hx_ctor_sx_properties_abstracts__ASizeSetterProxy_WeakSizeSetterProxy(global::sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy __temp_me156) {
			#line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			global::sx.properties.metric.SizeSetterProxy.__hx_ctor_sx_properties_metric_SizeSetterProxy(__temp_me156, null);
			__temp_me156.onChange = null;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			return new global::sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			return new global::sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy();
		}
		#line default
		
		public override void dispose() {
			#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			{
				#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
				global::sx.ds.ObjectPool<object> _this = global::sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_.__pool;
				#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
				_this.__pool[_this.length] = this;
				#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
				_this.length++;
			}
			
			#line 76 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			this.weak = false;
		}
		#line default
		
		public override void __invokeOnChange(string units, double @value) {
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
				switch (hash) {
					case 1038712487:
					{
						#line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__invokeOnChange", 1038712487)) );
					}
					
					
					case 994869407:
					{
						#line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "dispose", 994869407)) );
					}
					
					
					default:
					{
						#line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
	}
}


