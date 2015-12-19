
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.exceptions {
	public class NoExpectedException : global::hunit.exceptions.TestFailException {
		
		public NoExpectedException(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public NoExpectedException(global::hunit.match.Match exceptionMatch, object pos) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 21 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/NoExpectedException.hx"
			global::hunit.exceptions.NoExpectedException.__hx_ctor_hunit_exceptions_NoExpectedException(this, exceptionMatch, pos);
		}
		#line default
		
		public static void __hx_ctor_hunit_exceptions_NoExpectedException(global::hunit.exceptions.NoExpectedException __temp_me89, global::hunit.match.Match exceptionMatch, object pos) {
			#line 21 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/NoExpectedException.hx"
			global::hunit.exceptions.TestFailException.__hx_ctor_hunit_exceptions_TestFailException(__temp_me89, global::haxe.lang.Runtime.concat("Expected exception was not thrown: ", exceptionMatch.toString()), pos);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/NoExpectedException.hx"
			return new global::hunit.exceptions.NoExpectedException(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/NoExpectedException.hx"
				return new global::hunit.exceptions.NoExpectedException(((global::hunit.match.Match) (arr[0]) ), arr[1]);
			}
			#line default
		}
		
		
	}
}


