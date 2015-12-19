
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.abstracts._AAlign {
	public sealed class AAlign_Impl_ {
		
		static AAlign_Impl_() {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			global::sx.properties.abstracts._AAlign.AAlign_Impl_.__pool = new global::sx.ds.ObjectPool<object>();
		}
		#line default
		
		public static global::sx.ds.ObjectPool<object> __pool;
		
		public static global::sx.properties.Align fromHorizontal(string v) {
			#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			global::sx.properties.abstracts._AAlign.WeakAlign weakAlign = null;
			#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			{
				#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				global::sx.ds.ObjectPool<object> _this = global::sx.properties.abstracts._AAlign.AAlign_Impl_.__pool;
				#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				if (( _this.length > 0 )) {
					#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
					_this.length--;
					#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
					weakAlign = ((global::sx.properties.abstracts._AAlign.WeakAlign) (_this.__pool[_this.length]) );
				}
				else {
					#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
					weakAlign = null;
				}
				
			}
			
			#line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			if (( weakAlign == null )) {
				#line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				weakAlign = new global::sx.properties.abstracts._AAlign.WeakAlign();
			}
			
			#line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			weakAlign.weak = true;
			weakAlign.@set(v, ((string) ("none") ));
			#line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			return weakAlign;
		}
		#line default
		
		public static global::sx.properties.Align fromVertical(string v) {
			#line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			global::sx.properties.abstracts._AAlign.WeakAlign weakAlign = null;
			#line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			{
				#line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				global::sx.ds.ObjectPool<object> _this = global::sx.properties.abstracts._AAlign.AAlign_Impl_.__pool;
				#line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				if (( _this.length > 0 )) {
					#line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
					_this.length--;
					#line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
					weakAlign = ((global::sx.properties.abstracts._AAlign.WeakAlign) (_this.__pool[_this.length]) );
				}
				else {
					#line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
					weakAlign = null;
				}
				
			}
			
			#line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			if (( weakAlign == null )) {
				#line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				weakAlign = new global::sx.properties.abstracts._AAlign.WeakAlign();
			}
			
			#line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			weakAlign.weak = true;
			weakAlign.@set(((string) ("none") ), v);
			#line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			return weakAlign;
		}
		#line default
		
		public static global::sx.properties.Align fromNone(string v) {
			#line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			return global::sx.properties.abstracts._AAlign.AAlign_Impl_.fromHorizontal(((string) ("none") ));
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.abstracts._AAlign {
	public class WeakAlign : global::sx.properties.Align {
		
		public WeakAlign(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public WeakAlign() : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 76 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			global::sx.properties.abstracts._AAlign.WeakAlign.__hx_ctor_sx_properties_abstracts__AAlign_WeakAlign(this);
		}
		#line default
		
		public static void __hx_ctor_sx_properties_abstracts__AAlign_WeakAlign(global::sx.properties.abstracts._AAlign.WeakAlign __temp_me147) {
			#line 76 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			global::sx.properties.Align.__hx_ctor_sx_properties_Align(__temp_me147, null, null);
			__temp_me147.onChange = null;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			return new global::sx.properties.abstracts._AAlign.WeakAlign(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			return new global::sx.properties.abstracts._AAlign.WeakAlign();
		}
		#line default
		
		public override void dispose() {
			#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			{
				#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				global::sx.ds.ObjectPool<object> _this = global::sx.properties.abstracts._AAlign.AAlign_Impl_.__pool;
				#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				_this.__pool[_this.length] = this;
				#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				_this.length++;
			}
			
			#line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			this.weak = false;
		}
		#line default
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				switch (hash) {
					case 994869407:
					{
						#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "dispose", 994869407)) );
					}
					
					
					default:
					{
						#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
	}
}


