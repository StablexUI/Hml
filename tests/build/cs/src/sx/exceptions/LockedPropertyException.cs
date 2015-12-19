
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.exceptions {
	public class LockedPropertyException : global::Exception {
		
		public LockedPropertyException(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public LockedPropertyException(string msg, object pos) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx"
			global::sx.exceptions.LockedPropertyException.__hx_ctor_sx_exceptions_LockedPropertyException(this, msg, pos);
		}
		#line default
		
		public static void __hx_ctor_sx_exceptions_LockedPropertyException(global::sx.exceptions.LockedPropertyException __temp_me138, string msg, object pos) {
			#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx"
			if (string.Equals(msg, null)) {
				#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx"
				msg = "Property cannot be changed.";
			}
			
			#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx"
			global::Exception.__hx_ctor__Exception(__temp_me138, msg, pos);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx"
			return new global::sx.exceptions.LockedPropertyException(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx"
				return new global::sx.exceptions.LockedPropertyException(global::haxe.lang.Runtime.toString(arr[0]), arr[1]);
			}
			#line default
		}
		
		
	}
}


