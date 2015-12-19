
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.exceptions {
	public class OutOfBoundsException : global::sx.exceptions.SxException {
		
		public OutOfBoundsException(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public OutOfBoundsException(string msg, object pos) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx"
			global::sx.exceptions.OutOfBoundsException.__hx_ctor_sx_exceptions_OutOfBoundsException(this, msg, pos);
		}
		#line default
		
		public static void __hx_ctor_sx_exceptions_OutOfBoundsException(global::sx.exceptions.OutOfBoundsException __temp_me142, string msg, object pos) {
			#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx"
			if (string.Equals(msg, null)) {
				#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx"
				msg = "Provided argument does not fit required bounds.";
			}
			
			#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx"
			global::sx.exceptions.SxException.__hx_ctor_sx_exceptions_SxException(__temp_me142, msg, pos);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx"
			return new global::sx.exceptions.OutOfBoundsException(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx"
				return new global::sx.exceptions.OutOfBoundsException(global::haxe.lang.Runtime.toString(arr[0]), arr[1]);
			}
			#line default
		}
		
		
	}
}


