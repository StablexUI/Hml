
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.exceptions {
	public class SxException : global::Exception {
		
		public SxException(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public SxException(string msg, object pos) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
			global::sx.exceptions.SxException.__hx_ctor_sx_exceptions_SxException(this, msg, pos);
		}
		#line default
		
		public static void __hx_ctor_sx_exceptions_SxException(global::sx.exceptions.SxException __temp_me136, string msg, object pos) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
				if (string.Equals(msg, null)) {
					#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
					msg = "";
				}
				
				#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
				global::Exception.__hx_ctor__Exception(__temp_me136, msg, pos);
				__temp_me136.truncateStack(new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"new", "sx.exceptions.SxException", "SxException.hx"}, new int[]{1981972957}, new double[]{((double) (20) )}), new global::haxe.lang.Null<int>(1, true));
			}
			#line default
		}
		
		
		public static new object __hx_createEmpty() {
			#line 10 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
			return new global::sx.exceptions.SxException(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 10 "/home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx"
				return new global::sx.exceptions.SxException(global::haxe.lang.Runtime.toString(arr[0]), arr[1]);
			}
			#line default
		}
		
		
	}
}


