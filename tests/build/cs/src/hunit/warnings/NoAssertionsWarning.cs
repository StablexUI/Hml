
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.warnings {
	public class NoAssertionsWarning : global::hunit.warnings.Warning {
		
		public NoAssertionsWarning(global::haxe.lang.EmptyObject empty) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
		}
		
		
		public NoAssertionsWarning(string message) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
			#line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			global::hunit.warnings.NoAssertionsWarning.__hx_ctor_hunit_warnings_NoAssertionsWarning(this, message);
		}
		#line default
		
		public static void __hx_ctor_hunit_warnings_NoAssertionsWarning(global::hunit.warnings.NoAssertionsWarning __temp_me123, string message) {
			#line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			global::hunit.warnings.Warning.__hx_ctor_hunit_warnings_Warning(__temp_me123, message);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/NoAssertionsWarning.hx"
			return new global::hunit.warnings.NoAssertionsWarning(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/NoAssertionsWarning.hx"
			return new global::hunit.warnings.NoAssertionsWarning(global::haxe.lang.Runtime.toString(arr[0]));
		}
		#line default
		
	}
}


