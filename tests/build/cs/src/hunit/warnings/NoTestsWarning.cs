
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.warnings {
	public class NoTestsWarning : global::hunit.warnings.Warning {
		
		public NoTestsWarning(global::haxe.lang.EmptyObject empty) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
		}
		
		
		public NoTestsWarning(string message) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
			#line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			global::hunit.warnings.NoTestsWarning.__hx_ctor_hunit_warnings_NoTestsWarning(this, message);
		}
		#line default
		
		public static void __hx_ctor_hunit_warnings_NoTestsWarning(global::hunit.warnings.NoTestsWarning __temp_me124, string message) {
			#line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			global::hunit.warnings.Warning.__hx_ctor_hunit_warnings_Warning(__temp_me124, message);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/NoTestsWarning.hx"
			return new global::hunit.warnings.NoTestsWarning(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/NoTestsWarning.hx"
			return new global::hunit.warnings.NoTestsWarning(global::haxe.lang.Runtime.toString(arr[0]));
		}
		#line default
		
	}
}


