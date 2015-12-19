
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.exceptions {
	public class UnexpectedCallException : global::hunit.exceptions.TestFailException {
		
		public UnexpectedCallException(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public UnexpectedCallException(global::hunit.call.Call call, global::hunit.call.Expect expect, string reason, object pos) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 52 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
			global::hunit.exceptions.UnexpectedCallException.__hx_ctor_hunit_exceptions_UnexpectedCallException(this, call, expect, reason, pos);
		}
		#line default
		
		public static void __hx_ctor_hunit_exceptions_UnexpectedCallException(global::hunit.exceptions.UnexpectedCallException __temp_me90, global::hunit.call.Call call, global::hunit.call.Expect expect, string reason, object pos) {
			#line 50 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
			string msg = null;
			#line 50 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
			if ( ! (string.Equals(reason, null)) ) {
				#line 50 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
				msg = reason;
			}
			else {
				#line 50 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
				msg = global::hunit.exceptions.UnexpectedCallException.generateMessage(call, expect);
			}
			
			#line 52 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
			global::hunit.exceptions.TestFailException.__hx_ctor_hunit_exceptions_TestFailException(__temp_me90, msg, pos);
			#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
			__temp_me90.stack = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::Exception.processCallStackOnCreation.__hx_invoke1_o(default(double), call.stack)) ))) );
		}
		#line default
		
		public static string generateMessage(global::hunit.call.Call call, global::hunit.call.Expect expect) {
			unchecked {
				#line 28 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
				string expectMsg = "";
				if (( expect != null )) {
					#line 30 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
					string s = null;
					#line 30 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
					if (( expect.timesMatched == 1 )) {
						#line 30 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
						s = "";
					}
					else {
						#line 30 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
						s = "s";
					}
					
					#line 31 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
					expectMsg = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(" ", global::Std.@string(expect)), ", but called "), global::haxe.lang.Runtime.toString(expect.timesMatched)), " time"), s), " and last one was");
				}
				
				#line 34 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
				string msg = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Unexpected call:", expectMsg), " "), global::Std.@string(call));
				#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
				return msg;
			}
			#line default
		}
		
		
		public static new object __hx_createEmpty() {
			#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
			return new global::hunit.exceptions.UnexpectedCallException(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx"
				return new global::hunit.exceptions.UnexpectedCallException(((global::hunit.call.Call) (arr[0]) ), ((global::hunit.call.Expect) (arr[1]) ), global::haxe.lang.Runtime.toString(arr[2]), arr[3]);
			}
			#line default
		}
		
		
	}
}


