
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe {
	public class Log : global::haxe.lang.HxObject {
		
		static Log() {
			#line 45 "/usr/lib/haxe/std/haxe/Log.hx"
			global::haxe.Log.trace = ( (( global::haxe.Log_Anon_45__Fun.__hx_current != null )) ? (global::haxe.Log_Anon_45__Fun.__hx_current) : (global::haxe.Log_Anon_45__Fun.__hx_current = ((global::haxe.Log_Anon_45__Fun) (new global::haxe.Log_Anon_45__Fun()) )) );
		}
		#line default
		
		public Log(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Log() {
			#line 28 "/usr/lib/haxe/std/haxe/Log.hx"
			global::haxe.Log.__hx_ctor_haxe_Log(this);
		}
		#line default
		
		public static void __hx_ctor_haxe_Log(global::haxe.Log __temp_me41) {
		}
		
		
		public static global::haxe.lang.Function trace;
		
		public static new object __hx_createEmpty() {
			#line 28 "/usr/lib/haxe/std/haxe/Log.hx"
			return new global::haxe.Log(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 28 "/usr/lib/haxe/std/haxe/Log.hx"
			return new global::haxe.Log();
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe {
	public class Log_Anon_45__Fun : global::haxe.lang.Function {
		
		public Log_Anon_45__Fun() : base(2, 0) {
		}
		
		
		public static global::haxe.Log_Anon_45__Fun __hx_current;
		
		public override object __hx_invoke2_o(double __fn_float1, object __fn_dyn1, double __fn_float2, object __fn_dyn2) {
			#line 45 "/usr/lib/haxe/std/haxe/Log.hx"
			object infos = ( (( __fn_dyn2 == global::haxe.lang.Runtime.undefined )) ? (((object) (__fn_float2) )) : (( (( __fn_dyn2 == null )) ? (null) : (((object) (__fn_dyn2) )) )) );
			#line 45 "/usr/lib/haxe/std/haxe/Log.hx"
			object v = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((object) (__fn_float1) )) : (((object) (__fn_dyn1) )) );
			#line 82 "/usr/lib/haxe/std/haxe/Log.hx"
			string str = null;
			if (( infos != null )) {
				#line 84 "/usr/lib/haxe/std/haxe/Log.hx"
				str = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(infos, "fileName", 1648581351, true)), ":"), global::haxe.lang.Runtime.toString(((int) (global::haxe.lang.Runtime.getField_f(infos, "lineNumber", 1981972957, true)) ))), ": "), global::Std.@string(v));
				if (( ((global::Array) (global::haxe.lang.Runtime.getField(infos, "customParams", 1830310359, true)) ) != null )) {
					#line 87 "/usr/lib/haxe/std/haxe/Log.hx"
					str = global::haxe.lang.Runtime.concat(str, global::haxe.lang.Runtime.concat(",", ((global::Array) (global::haxe.lang.Runtime.getField(infos, "customParams", 1830310359, true)) ).@join(",")));
				}
				
			}
			else {
				#line 90 "/usr/lib/haxe/std/haxe/Log.hx"
				str = global::haxe.lang.Runtime.toString(v);
			}
			
			#line 93 "/usr/lib/haxe/std/haxe/Log.hx"
			global::System.Console.WriteLine(((string) (str) ));
			#line 45 "/usr/lib/haxe/std/haxe/Log.hx"
			return null;
		}
		#line default
		
	}
}


