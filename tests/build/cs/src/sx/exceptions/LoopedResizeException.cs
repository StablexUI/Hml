
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.exceptions {
	public class LoopedResizeException : global::sx.exceptions.SxException {
		
		public LoopedResizeException(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public LoopedResizeException(string msg, object pos) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx"
			global::sx.exceptions.LoopedResizeException.__hx_ctor_sx_exceptions_LoopedResizeException(this, msg, pos);
		}
		#line default
		
		public static void __hx_ctor_sx_exceptions_LoopedResizeException(global::sx.exceptions.LoopedResizeException __temp_me139, string msg, object pos) {
			#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx"
			if (string.Equals(msg, null)) {
				#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx"
				msg = "Possible endless resizing loop detected.";
			}
			
			#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx"
			global::sx.exceptions.SxException.__hx_ctor_sx_exceptions_SxException(__temp_me139, msg, pos);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx"
			return new global::sx.exceptions.LoopedResizeException(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx"
				return new global::sx.exceptions.LoopedResizeException(global::haxe.lang.Runtime.toString(arr[0]), arr[1]);
			}
			#line default
		}
		
		
	}
}


