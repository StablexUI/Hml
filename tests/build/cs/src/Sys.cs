
#pragma warning disable 109, 114, 219, 429, 168, 162
public class Sys : global::haxe.lang.HxObject {
	
	public Sys(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public Sys() {
		#line 27 "/usr/lib/haxe/std/cs/_std/Sys.hx"
		global::Sys.__hx_ctor__Sys(this);
	}
	#line default
	
	public static void __hx_ctor__Sys(global::Sys __temp_me28) {
	}
	
	
	public static double time() {
		unchecked {
			#line 132 "/usr/lib/haxe/std/cs/_std/Sys.hx"
			double __temp_stmt1 = default(double);
			#line 132 "/usr/lib/haxe/std/cs/_std/Sys.hx"
			{
				#line 132 "/usr/lib/haxe/std/cs/_std/Sys.hx"
				global::Date _this = global::Date.now();
				#line 132 "/usr/lib/haxe/std/cs/_std/Sys.hx"
				__temp_stmt1 = ( ((double) (_this.date.Ticks) ) / ((double) (global::System.TimeSpan.TicksPerMillisecond) ) );
			}
			
			#line 132 "/usr/lib/haxe/std/cs/_std/Sys.hx"
			return ( __temp_stmt1 / 1000 );
		}
		#line default
	}
	
	
	public static new object __hx_createEmpty() {
		#line 27 "/usr/lib/haxe/std/cs/_std/Sys.hx"
		return new global::Sys(global::haxe.lang.EmptyObject.EMPTY);
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		#line 27 "/usr/lib/haxe/std/cs/_std/Sys.hx"
		return new global::Sys();
	}
	#line default
	
}


