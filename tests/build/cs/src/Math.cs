
#pragma warning disable 109, 114, 219, 429, 168, 162
public class Math {
	
	public Math() {
	}
	
	
	public static readonly double NEGATIVE_INFINITY = global::System.Double.NegativeInfinity;
	
	public static readonly double POSITIVE_INFINITY = global::System.Double.PositiveInfinity;
	
	public static int round(double v) {
		unchecked {
			#line 103 "/usr/lib/haxe/std/cs/_std/Math.hx"
			int vint = ((int) (v) );
			double dec = ( v - vint );
			if (( ( dec >= 1 ) || ( dec <= -1 ) )) {
				#line 106 "/usr/lib/haxe/std/cs/_std/Math.hx"
				return vint;
			}
			
			#line 107 "/usr/lib/haxe/std/cs/_std/Math.hx"
			if (( dec >= .5 )) {
				#line 108 "/usr/lib/haxe/std/cs/_std/Math.hx"
				return ( vint + 1 );
			}
			
			#line 109 "/usr/lib/haxe/std/cs/_std/Math.hx"
			if (( dec < -.5 )) {
				#line 110 "/usr/lib/haxe/std/cs/_std/Math.hx"
				return ( vint - 1 );
			}
			
			#line 111 "/usr/lib/haxe/std/cs/_std/Math.hx"
			return vint;
		}
		#line default
	}
	
	
}


