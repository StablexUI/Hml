
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.exceptions {
	public class UnmetExpectationException : global::hunit.exceptions.TestFailException {
		
		public UnmetExpectationException(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public UnmetExpectationException(global::hunit.call.Expect expect, string reason, object pos) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
			global::hunit.exceptions.UnmetExpectationException.__hx_ctor_hunit_exceptions_UnmetExpectationException(this, expect, reason, pos);
		}
		#line default
		
		public static void __hx_ctor_hunit_exceptions_UnmetExpectationException(global::hunit.exceptions.UnmetExpectationException __temp_me92, global::hunit.call.Expect expect, string reason, object pos) {
			#line 21 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
			if (string.Equals(reason, null)) {
				#line 21 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
				reason = "";
			}
			
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
			string file = global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(expect.pos, "fileName", 1648581351, true));
			int line = ((int) (global::haxe.lang.Runtime.getField_f(expect.pos, "lineNumber", 1981972957, true)) );
			string msg = null;
			#line 24 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
			msg = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("", global::Std.@string(expect)), (( (( reason.Length != 0 )) ? (global::haxe.lang.Runtime.concat("", reason)) : ("") )));
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
			global::hunit.exceptions.TestFailException.__hx_ctor_hunit_exceptions_TestFailException(__temp_me92, msg, pos);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
			return new global::hunit.exceptions.UnmetExpectationException(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx"
				return new global::hunit.exceptions.UnmetExpectationException(((global::hunit.call.Expect) (arr[0]) ), global::haxe.lang.Runtime.toString(arr[1]), arr[2]);
			}
			#line default
		}
		
		
	}
}


