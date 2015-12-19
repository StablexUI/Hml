
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.exceptions {
	public class WarningException : global::Exception {
		
		public WarningException(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public WarningException(string message, object pos) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			global::hunit.exceptions.WarningException.__hx_ctor_hunit_exceptions_WarningException(this, message, pos);
		}
		#line default
		
		public static void __hx_ctor_hunit_exceptions_WarningException(global::hunit.exceptions.WarningException __temp_me93, string message, object pos) {
			#line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			global::Exception.__hx_ctor__Exception(__temp_me93, message, pos);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/WarningException.hx"
			return new global::hunit.exceptions.WarningException(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/WarningException.hx"
				return new global::hunit.exceptions.WarningException(global::haxe.lang.Runtime.toString(arr[0]), arr[1]);
			}
			#line default
		}
		
		
	}
}


