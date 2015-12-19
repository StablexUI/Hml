
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.abstracts._AAutoSize {
	public sealed class AAutoSize_Impl_ {
		
		static AAutoSize_Impl_() {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			global::sx.properties.abstracts._AAutoSize.AAutoSize_Impl_.__pool = new global::sx.ds.ObjectPool<object>();
		}
		#line default
		
		public static global::sx.ds.ObjectPool<object> __pool;
		
		public static global::sx.properties.AutoSize fromBool(bool v) {
			#line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			global::sx.properties.abstracts._AAutoSize.WeakAutoSize weakAutoSize = null;
			#line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			{
				#line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
				global::sx.ds.ObjectPool<object> _this = global::sx.properties.abstracts._AAutoSize.AAutoSize_Impl_.__pool;
				#line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
				if (( _this.length > 0 )) {
					#line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
					_this.length--;
					#line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
					weakAutoSize = ((global::sx.properties.abstracts._AAutoSize.WeakAutoSize) (_this.__pool[_this.length]) );
				}
				else {
					#line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
					weakAutoSize = null;
				}
				
			}
			
			#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			if (( weakAutoSize == null )) {
				#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
				weakAutoSize = new global::sx.properties.abstracts._AAutoSize.WeakAutoSize();
			}
			
			#line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			weakAutoSize.weak = true;
			weakAutoSize.set_width(v);
			weakAutoSize.set_height(v);
			#line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			return weakAutoSize;
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.abstracts._AAutoSize {
	public class WeakAutoSize : global::sx.properties.AutoSize {
		
		public WeakAutoSize(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public WeakAutoSize() : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
			#line 51 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			global::sx.properties.abstracts._AAutoSize.WeakAutoSize.__hx_ctor_sx_properties_abstracts__AAutoSize_WeakAutoSize(this);
		}
		#line default
		
		public static void __hx_ctor_sx_properties_abstracts__AAutoSize_WeakAutoSize(global::sx.properties.abstracts._AAutoSize.WeakAutoSize __temp_me148) {
			#line 51 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			global::sx.properties.AutoSize.__hx_ctor_sx_properties_AutoSize(__temp_me148, default(global::haxe.lang.Null<bool>));
			__temp_me148.onChange = null;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			return new global::sx.properties.abstracts._AAutoSize.WeakAutoSize(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			return new global::sx.properties.abstracts._AAutoSize.WeakAutoSize();
		}
		#line default
		
		public override void dispose() {
			#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			{
				#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
				global::sx.ds.ObjectPool<object> _this = global::sx.properties.abstracts._AAutoSize.AAutoSize_Impl_.__pool;
				#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
				_this.__pool[_this.length] = this;
				#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
				_this.length++;
			}
			
			#line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			this.weak = false;
		}
		#line default
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
				switch (hash) {
					case 994869407:
					{
						#line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "dispose", 994869407)) );
					}
					
					
					default:
					{
						#line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
	}
}


