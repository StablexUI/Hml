
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.io {
	public class Eof : global::haxe.lang.HxObject {
		
		public Eof(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Eof() {
			#line 27 "/usr/lib/haxe/std/haxe/io/Eof.hx"
			global::haxe.io.Eof.__hx_ctor_haxe_io_Eof(this);
		}
		#line default
		
		public static void __hx_ctor_haxe_io_Eof(global::haxe.io.Eof __temp_me57) {
		}
		
		
		public static new object __hx_createEmpty() {
			#line 27 "/usr/lib/haxe/std/haxe/io/Eof.hx"
			return new global::haxe.io.Eof(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 27 "/usr/lib/haxe/std/haxe/io/Eof.hx"
			return new global::haxe.io.Eof();
		}
		#line default
		
		public virtual string toString() {
			#line 31 "/usr/lib/haxe/std/haxe/io/Eof.hx"
			return "Eof";
		}
		#line default
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 27 "/usr/lib/haxe/std/haxe/io/Eof.hx"
				switch (hash) {
					case 946786476:
					{
						#line 27 "/usr/lib/haxe/std/haxe/io/Eof.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "toString", 946786476)) );
					}
					
					
					default:
					{
						#line 27 "/usr/lib/haxe/std/haxe/io/Eof.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 27 "/usr/lib/haxe/std/haxe/io/Eof.hx"
				switch (hash) {
					case 946786476:
					{
						#line 27 "/usr/lib/haxe/std/haxe/io/Eof.hx"
						return this.toString();
					}
					
					
					default:
					{
						#line 27 "/usr/lib/haxe/std/haxe/io/Eof.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override string ToString(){
			return this.toString();
		}
		
		
	}
}


