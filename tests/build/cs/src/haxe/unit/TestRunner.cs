
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.unit {
	public class TestRunner : global::haxe.lang.HxObject {
		
		static TestRunner() {
			#line 33 "/usr/lib/haxe/std/haxe/unit/TestRunner.hx"
			global::haxe.unit.TestRunner.print = ( (( global::haxe.unit.TestRunner_Anon_33__Fun.__hx_current != null )) ? (global::haxe.unit.TestRunner_Anon_33__Fun.__hx_current) : (global::haxe.unit.TestRunner_Anon_33__Fun.__hx_current = ((global::haxe.unit.TestRunner_Anon_33__Fun) (new global::haxe.unit.TestRunner_Anon_33__Fun()) )) );
		}
		#line default
		
		public TestRunner(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public TestRunner() {
			#line 25 "/usr/lib/haxe/std/haxe/unit/TestRunner.hx"
			global::haxe.unit.TestRunner.__hx_ctor_haxe_unit_TestRunner(this);
		}
		#line default
		
		public static void __hx_ctor_haxe_unit_TestRunner(global::haxe.unit.TestRunner __temp_me62) {
		}
		
		
		public static global::haxe.lang.Function print;
		
		public static new object __hx_createEmpty() {
			#line 25 "/usr/lib/haxe/std/haxe/unit/TestRunner.hx"
			return new global::haxe.unit.TestRunner(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 25 "/usr/lib/haxe/std/haxe/unit/TestRunner.hx"
			return new global::haxe.unit.TestRunner();
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.unit {
	public class TestRunner_Anon_33__Fun : global::haxe.lang.Function {
		
		public TestRunner_Anon_33__Fun() : base(1, 0) {
		}
		
		
		public static global::haxe.unit.TestRunner_Anon_33__Fun __hx_current;
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			#line 33 "/usr/lib/haxe/std/haxe/unit/TestRunner.hx"
			object v = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((object) (__fn_float1) )) : (((object) (__fn_dyn1) )) );
			#line 66 "/usr/lib/haxe/std/haxe/unit/TestRunner.hx"
			global::System.Console.Write(((object) (v) ));
			#line 66 "/usr/lib/haxe/std/haxe/unit/TestRunner.hx"
			return null;
		}
		#line default
		
	}
}


