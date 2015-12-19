
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.exceptions {
	public class NoReadException : global::sx.exceptions.SxException {
		
		public NoReadException(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public NoReadException(string msg, object pos) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx"
			global::sx.exceptions.NoReadException.__hx_ctor_sx_exceptions_NoReadException(this, msg, pos);
		}
		#line default
		
		public static void __hx_ctor_sx_exceptions_NoReadException(global::sx.exceptions.NoReadException __temp_me140, string msg, object pos) {
			#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx"
			if (string.Equals(msg, null)) {
				#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx"
				msg = "Accessing this property for reading is not allowed.";
			}
			
			#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx"
			global::sx.exceptions.SxException.__hx_ctor_sx_exceptions_SxException(__temp_me140, msg, pos);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx"
			return new global::sx.exceptions.NoReadException(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx"
				return new global::sx.exceptions.NoReadException(global::haxe.lang.Runtime.toString(arr[0]), arr[1]);
			}
			#line default
		}
		
		
	}
}


