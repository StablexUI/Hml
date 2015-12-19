
#pragma warning disable 109, 114, 219, 429, 168, 162
public class Std {
	
	public Std() {
	}
	
	
	public static bool @is(object v, object t) {
		#line 29 "/usr/lib/haxe/std/cs/_std/Std.hx"
		if (( v == null )) {
			#line 30 "/usr/lib/haxe/std/cs/_std/Std.hx"
			return global::haxe.lang.Runtime.eq(t, typeof(object));
		}
		
		#line 31 "/usr/lib/haxe/std/cs/_std/Std.hx"
		if (( t == null )) {
			#line 32 "/usr/lib/haxe/std/cs/_std/Std.hx"
			return false;
		}
		
		#line 33 "/usr/lib/haxe/std/cs/_std/Std.hx"
		global::System.Type clt = ((global::System.Type) (t) );
		if (global::haxe.lang.Runtime.typeEq(clt, null)) {
			#line 35 "/usr/lib/haxe/std/cs/_std/Std.hx"
			return false;
		}
		
		#line 36 "/usr/lib/haxe/std/cs/_std/Std.hx"
		string name = global::haxe.lang.Runtime.toString(clt);
		#line 38 "/usr/lib/haxe/std/cs/_std/Std.hx"
		switch (name) {
			case "System.Double":
			{
				#line 41 "/usr/lib/haxe/std/cs/_std/Std.hx"
				return v is double || v is int;
			}
			
			
			case "System.Int32":
			{
				#line 43 "/usr/lib/haxe/std/cs/_std/Std.hx"
				return haxe.lang.Runtime.isInt(v);
			}
			
			
			case "System.Boolean":
			{
				#line 45 "/usr/lib/haxe/std/cs/_std/Std.hx"
				return v is bool;
			}
			
			
			case "System.Object":
			{
				#line 47 "/usr/lib/haxe/std/cs/_std/Std.hx"
				return true;
			}
			
			
		}
		
		#line 50 "/usr/lib/haxe/std/cs/_std/Std.hx"
		return clt.IsAssignableFrom(((global::System.Type) (global::cs.Lib.getNativeType(v)) ));
	}
	#line default
	
	public static string @string(object s) {
		#line 54 "/usr/lib/haxe/std/cs/_std/Std.hx"
		if (( s == null )) {
			#line 55 "/usr/lib/haxe/std/cs/_std/Std.hx"
			return "null";
		}
		
		#line 56 "/usr/lib/haxe/std/cs/_std/Std.hx"
		if (( s is bool )) {
			#line 57 "/usr/lib/haxe/std/cs/_std/Std.hx"
			if (global::haxe.lang.Runtime.toBool(s)) {
				#line 57 "/usr/lib/haxe/std/cs/_std/Std.hx"
				return "true";
			}
			else {
				#line 57 "/usr/lib/haxe/std/cs/_std/Std.hx"
				return "false";
			}
			
		}
		
		#line 59 "/usr/lib/haxe/std/cs/_std/Std.hx"
		return s.ToString();
	}
	#line default
	
	public static global::haxe.lang.Null<int> parseInt(string x) {
		unchecked {
			#line 67 "/usr/lib/haxe/std/cs/_std/Std.hx"
			if (string.Equals(x, null)) {
				#line 67 "/usr/lib/haxe/std/cs/_std/Std.hx"
				return default(global::haxe.lang.Null<int>);
			}
			
			#line 69 "/usr/lib/haxe/std/cs/_std/Std.hx"
			int ret = 0;
			int @base = 10;
			int i = -1;
			int len = x.Length;
			#line 74 "/usr/lib/haxe/std/cs/_std/Std.hx"
			if (( x.StartsWith("0") && ( len > 2 ) )) {
				#line 76 "/usr/lib/haxe/std/cs/_std/Std.hx"
				int c = ((int) (global::haxe.lang.Runtime.toInt(x[1])) );
				if (( ( c == 120 ) || ( c == 88 ) )) {
					#line 79 "/usr/lib/haxe/std/cs/_std/Std.hx"
					i = 1;
					@base = 16;
				}
				
			}
			
			#line 84 "/usr/lib/haxe/std/cs/_std/Std.hx"
			bool foundAny = ( i != -1 );
			bool isNeg = false;
			while ((  ++ i < len )) {
				#line 88 "/usr/lib/haxe/std/cs/_std/Std.hx"
				int c1 = default(int);
				#line 88 "/usr/lib/haxe/std/cs/_std/Std.hx"
				c1 = ((int) (global::haxe.lang.Runtime.toInt(x[i])) );
				if ( ! (foundAny) ) {
					#line 91 "/usr/lib/haxe/std/cs/_std/Std.hx"
					switch (c1) {
						case 45:
						{
							#line 94 "/usr/lib/haxe/std/cs/_std/Std.hx"
							isNeg = true;
							continue;
						}
						
						
						case 32:
						case 9:
						case 10:
						case 13:
						case 43:
						{
							#line 97 "/usr/lib/haxe/std/cs/_std/Std.hx"
							if (isNeg) {
								#line 98 "/usr/lib/haxe/std/cs/_std/Std.hx"
								return default(global::haxe.lang.Null<int>);
							}
							
							#line 99 "/usr/lib/haxe/std/cs/_std/Std.hx"
							continue;
						}
						
						
					}
					
				}
				
				#line 103 "/usr/lib/haxe/std/cs/_std/Std.hx"
				if (( ( c1 >= 48 ) && ( c1 <= 57 ) )) {
					#line 105 "/usr/lib/haxe/std/cs/_std/Std.hx"
					if ((  ! (foundAny)  && ( c1 == 48 ) )) {
						#line 107 "/usr/lib/haxe/std/cs/_std/Std.hx"
						foundAny = true;
						continue;
					}
					
					#line 110 "/usr/lib/haxe/std/cs/_std/Std.hx"
					ret *= @base;
					#line 110 "/usr/lib/haxe/std/cs/_std/Std.hx"
					foundAny = true;
					#line 112 "/usr/lib/haxe/std/cs/_std/Std.hx"
					ret += ( c1 - 48 );
				}
				else if (( @base == 16 )) {
					#line 114 "/usr/lib/haxe/std/cs/_std/Std.hx"
					if (( ( c1 >= 97 ) && ( c1 <= 102 ) )) {
						#line 115 "/usr/lib/haxe/std/cs/_std/Std.hx"
						ret *= @base;
						#line 115 "/usr/lib/haxe/std/cs/_std/Std.hx"
						foundAny = true;
						ret += ( ( c1 - 97 ) + 10 );
					}
					else if (( ( c1 >= 65 ) && ( c1 <= 70 ) )) {
						#line 118 "/usr/lib/haxe/std/cs/_std/Std.hx"
						ret *= @base;
						#line 118 "/usr/lib/haxe/std/cs/_std/Std.hx"
						foundAny = true;
						ret += ( ( c1 - 65 ) + 10 );
					}
					else {
						#line 121 "/usr/lib/haxe/std/cs/_std/Std.hx"
						break;
					}
					
				}
				else {
					#line 124 "/usr/lib/haxe/std/cs/_std/Std.hx"
					break;
				}
				
			}
			
			#line 128 "/usr/lib/haxe/std/cs/_std/Std.hx"
			if (foundAny) {
				#line 129 "/usr/lib/haxe/std/cs/_std/Std.hx"
				if (isNeg) {
					#line 129 "/usr/lib/haxe/std/cs/_std/Std.hx"
					return new global::haxe.lang.Null<int>( - (ret) , true);
				}
				else {
					#line 129 "/usr/lib/haxe/std/cs/_std/Std.hx"
					return new global::haxe.lang.Null<int>(ret, true);
				}
				
			}
			else {
				#line 131 "/usr/lib/haxe/std/cs/_std/Std.hx"
				return default(global::haxe.lang.Null<int>);
			}
			
		}
		#line default
	}
	
	
}


