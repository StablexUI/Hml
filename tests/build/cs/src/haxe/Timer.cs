
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe {
	public class Timer : global::haxe.lang.HxObject {
		
		public Timer(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Timer() {
			#line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
			global::haxe.Timer.__hx_ctor_haxe_Timer(this);
		}
		#line default
		
		public static void __hx_ctor_haxe_Timer(global::haxe.Timer __temp_me42) {
		}
		
		
		public static double stamp() {
			#line 166 "/usr/lib/haxe/std/haxe/Timer.hx"
			return global::Sys.time();
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
			return new global::haxe.Timer(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
			return new global::haxe.Timer();
		}
		#line default
		
	}
}


