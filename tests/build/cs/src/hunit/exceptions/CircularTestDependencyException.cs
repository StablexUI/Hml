
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.exceptions {
	public class CircularTestDependencyException : global::hunit.exceptions.InvalidTestException {
		
		public CircularTestDependencyException(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public CircularTestDependencyException(string message, object pos) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			global::hunit.exceptions.CircularTestDependencyException.__hx_ctor_hunit_exceptions_CircularTestDependencyException(this, message, pos);
		}
		#line default
		
		public static void __hx_ctor_hunit_exceptions_CircularTestDependencyException(global::hunit.exceptions.CircularTestDependencyException __temp_me87, string message, object pos) {
			#line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			global::hunit.exceptions.InvalidTestException.__hx_ctor_hunit_exceptions_InvalidTestException(__temp_me87, message, pos);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/CircularTestDependencyException.hx"
			return new global::hunit.exceptions.CircularTestDependencyException(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/CircularTestDependencyException.hx"
				return new global::hunit.exceptions.CircularTestDependencyException(global::haxe.lang.Runtime.toString(arr[0]), arr[1]);
			}
			#line default
		}
		
		
	}
}


