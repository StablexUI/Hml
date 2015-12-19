
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.exceptions {
	public class InvalidBackendException : global::sx.exceptions.SxException {
		
		public InvalidBackendException(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public InvalidBackendException(string msg, object pos) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
			global::sx.exceptions.InvalidBackendException.__hx_ctor_sx_exceptions_InvalidBackendException(this, msg, pos);
		}
		#line default
		
		public static void __hx_ctor_sx_exceptions_InvalidBackendException(global::sx.exceptions.InvalidBackendException __temp_me137, string msg, object pos) {
			#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
			global::sx.exceptions.SxException.__hx_ctor_sx_exceptions_SxException(__temp_me137, msg, pos);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/InvalidBackendException.hx"
			return new global::sx.exceptions.InvalidBackendException(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/InvalidBackendException.hx"
				return new global::sx.exceptions.InvalidBackendException(global::haxe.lang.Runtime.toString(arr[0]), arr[1]);
			}
			#line default
		}
		
		
	}
}


