
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace cs {
	public class Lib : global::haxe.lang.HxObject {
		
		public Lib(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Lib() {
			#line 29 "/usr/lib/haxe/std/cs/Lib.hx"
			global::cs.Lib.__hx_ctor_cs_Lib(this);
		}
		#line default
		
		public static void __hx_ctor_cs_Lib(global::cs.Lib __temp_me32) {
		}
		
		
		public static string decimalSeparator;
		
		public static void applyCultureChanges() {
			#line 39 "/usr/lib/haxe/std/cs/Lib.hx"
			global::System.Globalization.CultureInfo ci = new global::System.Globalization.CultureInfo(((string) (global::System.Threading.Thread.CurrentThread.CurrentCulture.Name) ), ((bool) (true) ));
			global::cs.Lib.decimalSeparator = ci.NumberFormat.NumberDecimalSeparator;
			ci.NumberFormat.NumberDecimalSeparator = ((string) (".") );
			global::System.Threading.Thread.CurrentThread.CurrentCulture = ((global::System.Globalization.CultureInfo) (ci) );
		}
		#line default
		
		public static global::System.Type getNativeType(object obj) {
			#line 137 "/usr/lib/haxe/std/cs/Lib.hx"
			return obj.GetType();
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 29 "/usr/lib/haxe/std/cs/Lib.hx"
			return new global::cs.Lib(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 29 "/usr/lib/haxe/std/cs/Lib.hx"
			return new global::cs.Lib();
		}
		#line default
		
	}
}


