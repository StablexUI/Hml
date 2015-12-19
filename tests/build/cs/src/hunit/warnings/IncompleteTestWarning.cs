
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.warnings {
	public class IncompleteTestWarning : global::hunit.warnings.Warning {
		
		public IncompleteTestWarning(global::haxe.lang.EmptyObject empty) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
		}
		
		
		public IncompleteTestWarning(string message) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
			#line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			global::hunit.warnings.IncompleteTestWarning.__hx_ctor_hunit_warnings_IncompleteTestWarning(this, message);
		}
		#line default
		
		public static void __hx_ctor_hunit_warnings_IncompleteTestWarning(global::hunit.warnings.IncompleteTestWarning __temp_me122, string message) {
			#line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			global::hunit.warnings.Warning.__hx_ctor_hunit_warnings_Warning(__temp_me122, message);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
			return new global::hunit.warnings.IncompleteTestWarning(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
			return new global::hunit.warnings.IncompleteTestWarning(global::haxe.lang.Runtime.toString(arr[0]));
		}
		#line default
		
		public override string defaultMessage() {
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
			return "Incomplete test.";
		}
		#line default
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
				switch (hash) {
					case 1230081798:
					{
						#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "defaultMessage", 1230081798)) );
					}
					
					
					default:
					{
						#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
	}
}


