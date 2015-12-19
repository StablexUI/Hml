
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.call {
	public class CallCount : global::haxe.lang.ParamEnum {
		
		public CallCount(int index, object[] @params) : base(index, @params) {
		}
		
		
		public static readonly string[] __hx_constructs = new string[]{"Never", "Any", "Once", "AtLeast", "Exactly"};
		
		public static readonly global::hunit.call.CallCount Never = new global::hunit.call.CallCount(0, null);
		
		public static readonly global::hunit.call.CallCount Any = new global::hunit.call.CallCount(1, null);
		
		public static readonly global::hunit.call.CallCount Once = new global::hunit.call.CallCount(2, null);
		
		public static global::hunit.call.CallCount AtLeast(int amount) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/CallCount.hx"
				return new global::hunit.call.CallCount(3, new object[]{amount});
			}
			#line default
		}
		
		
		public static global::hunit.call.CallCount Exactly(int amount) {
			unchecked {
				#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/call/CallCount.hx"
				return new global::hunit.call.CallCount(4, new object[]{amount});
			}
			#line default
		}
		
		
		public override string getTag() {
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/call/CallCount.hx"
			return global::hunit.call.CallCount.__hx_constructs[this.index];
		}
		#line default
		
	}
}


