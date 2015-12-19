
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.exceptions {
	public class NotChildException : global::sx.exceptions.SxException {
		
		public NotChildException(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public NotChildException(string msg, object pos) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx"
			global::sx.exceptions.NotChildException.__hx_ctor_sx_exceptions_NotChildException(this, msg, pos);
		}
		#line default
		
		public static void __hx_ctor_sx_exceptions_NotChildException(global::sx.exceptions.NotChildException __temp_me141, string msg, object pos) {
			#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx"
			if (string.Equals(msg, null)) {
				#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx"
				msg = "Provided widget is not a child of this one.";
			}
			
			#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx"
			global::sx.exceptions.SxException.__hx_ctor_sx_exceptions_SxException(__temp_me141, msg, pos);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx"
			return new global::sx.exceptions.NotChildException(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx"
				return new global::sx.exceptions.NotChildException(global::haxe.lang.Runtime.toString(arr[0]), arr[1]);
			}
			#line default
		}
		
		
	}
}


