
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.exceptions {
	public class AssertException : global::hunit.exceptions.TestFailException {
		
		public AssertException(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public AssertException(string message, object pos) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			global::hunit.exceptions.AssertException.__hx_ctor_hunit_exceptions_AssertException(this, message, pos);
		}
		#line default
		
		public static void __hx_ctor_hunit_exceptions_AssertException(global::hunit.exceptions.AssertException __temp_me85, string message, object pos) {
			#line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			global::hunit.exceptions.TestFailException.__hx_ctor_hunit_exceptions_TestFailException(__temp_me85, message, pos);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/AssertException.hx"
			return new global::hunit.exceptions.AssertException(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/AssertException.hx"
				return new global::hunit.exceptions.AssertException(global::haxe.lang.Runtime.toString(arr[0]), arr[1]);
			}
			#line default
		}
		
		
	}
}


