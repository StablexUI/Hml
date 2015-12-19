
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.lang {
	public class Runtime {
		
		
	public static object getField(haxe.lang.HxObject obj, string field, int fieldHash, bool throwErrors)
	{
		if (obj == null && !throwErrors) return null;
		return obj.__hx_getField(field, (fieldHash == 0) ? haxe.lang.FieldLookup.hash(field) : fieldHash, throwErrors, false, false);
	}

	public static double getField_f(haxe.lang.HxObject obj, string field, int fieldHash, bool throwErrors)
	{
		if (obj == null && !throwErrors) return 0.0;
		return obj.__hx_getField_f(field, (fieldHash == 0) ? haxe.lang.FieldLookup.hash(field) : fieldHash, throwErrors, false);
	}

	public static object setField(haxe.lang.HxObject obj, string field, int fieldHash, object value)
	{
		return obj.__hx_setField(field, (fieldHash == 0) ? haxe.lang.FieldLookup.hash(field) : fieldHash, value, false);
	}

	public static double setField_f(haxe.lang.HxObject obj, string field, int fieldHash, double value)
	{
		return obj.__hx_setField_f(field, (fieldHash == 0) ? haxe.lang.FieldLookup.hash(field) : fieldHash, value, false);
	}

	public static object callField(haxe.lang.HxObject obj, string field, int fieldHash, Array args)
	{
		return obj.__hx_invokeField(field, (fieldHash == 0) ? haxe.lang.FieldLookup.hash(field) : fieldHash, args);
	}
		public Runtime() {
		}
		
		
		public static readonly object undefined = ((object) (new global::System.Object()) );
		
		public static object closure(object obj, int hash, string field) {
			#line 78 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			return new global::haxe.lang.Closure(obj, field, hash);
		}
		#line default
		
		public static bool eq(object v1, object v2) {
			#line 83 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (global::System.Object.ReferenceEquals(((object) (v1) ), ((object) (v2) ))) {
				#line 84 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return true;
			}
			
			#line 85 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( global::System.Object.ReferenceEquals(((object) (v1) ), ((object) (null) )) || global::System.Object.ReferenceEquals(((object) (v2) ), ((object) (null) )) )) {
				#line 86 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return false;
			}
			
			#line 88 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.IConvertible v1c = ((global::System.IConvertible) (( v1 as global::System.IConvertible )) );
			if (( v1c != null )) {
				#line 91 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				global::System.IConvertible v2c = ((global::System.IConvertible) (( v2 as global::System.IConvertible )) );
				if (( v2c == null )) {
					#line 94 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return false;
				}
				
				#line 97 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				global::System.TypeCode t1 = v1c.GetTypeCode();
				global::System.TypeCode t2 = v2c.GetTypeCode();
				if (( t1 == t2 )) {
					#line 100 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return global::System.Object.Equals(((object) (v1c) ), ((object) (v2c) ));
				}
				
				#line 102 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (( ( t1 == global::System.TypeCode.String ) || ( t2 == global::System.TypeCode.String ) )) {
					#line 103 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return false;
				}
				
				#line 105 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				switch (t1) {
					case global::System.TypeCode.Decimal:
					{
						#line 108 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						return v1c.ToDecimal(((global::System.IFormatProvider) (null) )).Equals(v2c.ToDecimal(((global::System.IFormatProvider) (null) )));
					}
					
					
					case global::System.TypeCode.UInt64:
					case global::System.TypeCode.Int64:
					case global::System.TypeCode.DateTime:
					{
						#line 105 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						switch (t2) {
							case global::System.TypeCode.Decimal:
							{
								#line 108 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								return v1c.ToDecimal(((global::System.IFormatProvider) (null) )).Equals(v2c.ToDecimal(((global::System.IFormatProvider) (null) )));
							}
							
							
							case global::System.TypeCode.UInt64:
							case global::System.TypeCode.Int64:
							case global::System.TypeCode.DateTime:
							case global::System.TypeCode.Double:
							case global::System.TypeCode.Single:
							{
								#line 110 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								return ( v1c.ToUInt64(((global::System.IFormatProvider) (null) )) == v2c.ToUInt64(((global::System.IFormatProvider) (null) )) );
							}
							
							
							default:
							{
								#line 110 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								return ( v1c.ToUInt64(((global::System.IFormatProvider) (null) )) == v2c.ToUInt64(((global::System.IFormatProvider) (null) )) );
							}
							
						}
						
					}
					
					
					case global::System.TypeCode.Double:
					case global::System.TypeCode.Single:
					{
						#line 105 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						switch (t2) {
							case global::System.TypeCode.Decimal:
							{
								#line 108 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								return v1c.ToDecimal(((global::System.IFormatProvider) (null) )).Equals(v2c.ToDecimal(((global::System.IFormatProvider) (null) )));
							}
							
							
							case global::System.TypeCode.UInt64:
							case global::System.TypeCode.Int64:
							case global::System.TypeCode.DateTime:
							{
								#line 110 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								return ( v1c.ToUInt64(((global::System.IFormatProvider) (null) )) == v2c.ToUInt64(((global::System.IFormatProvider) (null) )) );
							}
							
							
							case global::System.TypeCode.Double:
							case global::System.TypeCode.Single:
							{
								#line 112 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								return ( v1c.ToDouble(((global::System.IFormatProvider) (null) )) == v2c.ToDouble(((global::System.IFormatProvider) (null) )) );
							}
							
							
							default:
							{
								#line 112 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								return ( v1c.ToDouble(((global::System.IFormatProvider) (null) )) == v2c.ToDouble(((global::System.IFormatProvider) (null) )) );
							}
							
						}
						
					}
					
					
					default:
					{
						#line 105 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						switch (t2) {
							case global::System.TypeCode.Decimal:
							{
								#line 108 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								return v1c.ToDecimal(((global::System.IFormatProvider) (null) )).Equals(v2c.ToDecimal(((global::System.IFormatProvider) (null) )));
							}
							
							
							case global::System.TypeCode.UInt64:
							case global::System.TypeCode.Int64:
							case global::System.TypeCode.DateTime:
							{
								#line 110 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								return ( v1c.ToUInt64(((global::System.IFormatProvider) (null) )) == v2c.ToUInt64(((global::System.IFormatProvider) (null) )) );
							}
							
							
							case global::System.TypeCode.Double:
							case global::System.TypeCode.Single:
							{
								#line 112 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								return ( v1c.ToDouble(((global::System.IFormatProvider) (null) )) == v2c.ToDouble(((global::System.IFormatProvider) (null) )) );
							}
							
							
							default:
							{
								#line 114 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								return ( v1c.ToInt32(((global::System.IFormatProvider) (null) )) == v2c.ToInt32(((global::System.IFormatProvider) (null) )) );
							}
							
						}
						
					}
					
				}
				
			}
			
			#line 118 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.ValueType v1v = ((global::System.ValueType) (( v1 as global::System.ValueType )) );
			if (( v1v != null )) {
				#line 121 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return v1.Equals(v2);
			}
			else {
				#line 124 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				global::System.Type v1t = ((global::System.Type) (( v1 as global::System.Type )) );
				if (( v1t != null )) {
					#line 127 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					global::System.Type v2t = ((global::System.Type) (( v2 as global::System.Type )) );
					if (( v2t != null )) {
						#line 129 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						return global::haxe.lang.Runtime.typeEq(v1t, v2t);
					}
					
					#line 130 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return false;
				}
				
			}
			
			#line 135 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			return false;
		}
		#line default
		
		public static bool refEq(object v1, object v2) {
			#line 141 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( v1 is global::System.Type )) {
				#line 142 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return global::haxe.lang.Runtime.typeEq(((global::System.Type) (( v1 as global::System.Type )) ), ((global::System.Type) (( v2 as global::System.Type )) ));
			}
			
			#line 144 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			return global::System.Object.ReferenceEquals(((object) (v1) ), ((object) (v2) ));
		}
		#line default
		
		public static double toDouble(object obj) {
			#line 149 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( obj == null )) {
				#line 149 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return .0;
			}
			else if (( obj is double )) {
				#line 149 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return ((double) (obj) );
			}
			else {
				#line 149 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return ((global::System.IConvertible) (( obj as global::System.IConvertible )) ).ToDouble(((global::System.IFormatProvider) (null) ));
			}
			
		}
		#line default
		
		public static int toInt(object obj) {
			#line 154 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( obj == null )) {
				#line 154 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return 0;
			}
			else if (( obj is int )) {
				#line 154 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return ((int) (obj) );
			}
			else {
				#line 154 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return ((global::System.IConvertible) (( obj as global::System.IConvertible )) ).ToInt32(((global::System.IFormatProvider) (null) ));
			}
			
		}
		#line default
		
		public static bool isInt(object obj) {
			#line 159 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.IConvertible cv1 = ((global::System.IConvertible) (( obj as global::System.IConvertible )) );
			if (( cv1 != null )) {
				#line 162 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				global::System.TypeCode _g = cv1.GetTypeCode();
				#line 162 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				switch (_g) {
					case global::System.TypeCode.Double:
					{
						#line 165 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						double d = ((double) (obj) );
						return ( ( ( d >= global::System.Int32.MinValue ) && ( d <= global::System.Int32.MaxValue ) ) && ( d == ((int) (d) ) ) );
					}
					
					
					case global::System.TypeCode.UInt32:
					case global::System.TypeCode.Int32:
					{
						#line 168 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						return true;
					}
					
					
					default:
					{
						#line 170 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						return false;
					}
					
				}
				
			}
			
			#line 173 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			return false;
		}
		#line default
		
		public static bool isUInt(object obj) {
			#line 178 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.IConvertible cv1 = ((global::System.IConvertible) (( obj as global::System.IConvertible )) );
			if (( cv1 != null )) {
				#line 181 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				global::System.TypeCode _g = cv1.GetTypeCode();
				#line 181 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				switch (_g) {
					case global::System.TypeCode.Double:
					{
						#line 184 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						double d = ((double) (obj) );
						bool __temp_boolv4 = ((bool) (( d >= global::System.UInt32.MinValue )) );
						#line 185 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						bool __temp_boolv3 = false;
						#line 185 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						bool __temp_boolv2 = false;
						#line 185 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						if (__temp_boolv4) {
							#line 185 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							__temp_boolv3 = ((bool) (( d <= global::System.UInt32.MaxValue )) );
							#line 185 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							if (__temp_boolv3) {
								#line 185 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								{
									#line 185 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									double _g1 = d;
									#line 185 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									uint _g2 = default(uint);
									#line 185 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									_g2 = ((uint) (d) );
									#line 185 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									__temp_boolv2 = ((bool) (( _g2 == _g1 )) );
								}
								
							}
							
						}
						
						#line 185 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						bool __temp_stmt1 = ( ( __temp_boolv4 && __temp_boolv3 ) && __temp_boolv2 );
						#line 185 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						return __temp_stmt1;
					}
					
					
					case global::System.TypeCode.UInt32:
					{
						#line 187 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						return true;
					}
					
					
					default:
					{
						#line 189 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						return false;
					}
					
				}
				
			}
			
			#line 193 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			return false;
		}
		#line default
		
		public static int compare(object v1, object v2) {
			unchecked {
				#line 198 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (global::System.Object.ReferenceEquals(((object) (v1) ), ((object) (v2) ))) {
					#line 198 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return 0;
				}
				
				#line 199 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (global::System.Object.ReferenceEquals(((object) (v1) ), ((object) (null) ))) {
					#line 199 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return -1;
				}
				
				#line 200 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (global::System.Object.ReferenceEquals(((object) (v2) ), ((object) (null) ))) {
					#line 200 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return 1;
				}
				
				#line 202 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				global::System.IConvertible cv1 = ((global::System.IConvertible) (( v1 as global::System.IConvertible )) );
				if (( cv1 != null )) {
					#line 205 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					global::System.IConvertible cv2 = ((global::System.IConvertible) (( v2 as global::System.IConvertible )) );
					#line 207 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					if (( cv2 == null )) {
						#line 209 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						throw new global::System.ArgumentException(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Cannot compare ", ( global::cs.Lib.getNativeType(v1) as global::System.Reflection.MemberInfo ).ToString()), " and "), ( global::cs.Lib.getNativeType(v2) as global::System.Reflection.MemberInfo ).ToString()));
					}
					
					#line 212 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					{
						#line 212 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						global::System.TypeCode _g = cv1.GetTypeCode();
						#line 212 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						switch (_g) {
							case global::System.TypeCode.String:
							{
								#line 215 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								if (( cv2.GetTypeCode() != global::System.TypeCode.String )) {
									#line 216 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									throw new global::System.ArgumentException(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Cannot compare ", ( global::cs.Lib.getNativeType(v1) as global::System.Reflection.MemberInfo ).ToString()), " and "), ( global::cs.Lib.getNativeType(v2) as global::System.Reflection.MemberInfo ).ToString()));
								}
								
								#line 217 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								string s1 = ((string) (( v1 as string )) );
								string s2 = ((string) (( v2 as string )) );
								return string.Compare(((string) (s1) ), ((string) (s2) ), ((global::System.StringComparison) (global::System.StringComparison.Ordinal) ));
							}
							
							
							case global::System.TypeCode.Double:
							{
								#line 221 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								double d1 = ((double) (v1) );
								double d2 = cv2.ToDouble(((global::System.IFormatProvider) (null) ));
								if (( d1 < d2 )) {
									#line 223 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									return -1;
								}
								else if (( d1 > d2 )) {
									#line 223 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									return 1;
								}
								else {
									#line 223 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									return 0;
								}
								
							}
							
							
							default:
							{
								#line 225 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								double d1d = cv1.ToDouble(((global::System.IFormatProvider) (null) ));
								double d2d = cv2.ToDouble(((global::System.IFormatProvider) (null) ));
								if (( d1d < d2d )) {
									#line 227 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									return -1;
								}
								else if (( d1d > d2d )) {
									#line 227 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									return 1;
								}
								else {
									#line 227 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									return 0;
								}
								
							}
							
						}
						
					}
					
				}
				
				#line 231 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				global::System.IComparable c1 = ((global::System.IComparable) (( v1 as global::System.IComparable )) );
				global::System.IComparable c2 = ((global::System.IComparable) (( v2 as global::System.IComparable )) );
				#line 234 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (( ( c1 == null ) || ( c2 == null ) )) {
					#line 236 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					throw new global::System.ArgumentException(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Cannot compare ", ( global::cs.Lib.getNativeType(v1) as global::System.Reflection.MemberInfo ).ToString()), " and "), ( global::cs.Lib.getNativeType(v2) as global::System.Reflection.MemberInfo ).ToString()));
				}
				
				#line 239 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return c1.CompareTo(((object) (c2) ));
			}
			#line default
		}
		
		
		public static object plus(object v1, object v2) {
			#line 244 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( ( v1 is string ) || ( v2 is string ) )) {
				#line 245 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return global::haxe.lang.Runtime.concat(global::Std.@string(v1), global::Std.@string(v2));
			}
			
			#line 247 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( v1 == null )) {
				#line 249 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (( v2 == null )) {
					#line 249 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return null;
				}
				
				#line 250 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				v1 = 0;
			}
			else if (( v2 == null )) {
				#line 251 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				v2 = 0;
			}
			
			#line 253 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.IConvertible cv1 = ((global::System.IConvertible) (( v1 as global::System.IConvertible )) );
			if (( cv1 != null )) {
				#line 256 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				global::System.IConvertible cv2 = ((global::System.IConvertible) (( v2 as global::System.IConvertible )) );
				if (( cv2 == null )) {
					#line 259 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					throw new global::System.ArgumentException(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Cannot dynamically add ", ( global::cs.Lib.getNativeType(v1) as global::System.Reflection.MemberInfo ).ToString()), " and "), ( global::cs.Lib.getNativeType(v2) as global::System.Reflection.MemberInfo ).ToString()));
				}
				
				#line 261 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return ( cv1.ToDouble(((global::System.IFormatProvider) (null) )) + cv2.ToDouble(((global::System.IFormatProvider) (null) )) );
			}
			
			#line 264 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			throw new global::System.ArgumentException(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Cannot dynamically add ", global::Std.@string(v1)), " and "), global::Std.@string(v2)));
		}
		#line default
		
		public static object slowGetField(object obj, string field, bool throwErrors) {
			#line 269 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( obj == null )) {
				#line 270 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (throwErrors) {
					#line 271 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					throw new global::System.NullReferenceException(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Cannot access field \'", field), "\' of null."));
				}
				else {
					#line 273 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return null;
				}
				
			}
			
			#line 275 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.Type t = ((global::System.Type) (( obj as global::System.Type )) );
			#line 277 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.Reflection.BindingFlags bf = default(global::System.Reflection.BindingFlags);
			#line 277 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( t == null )) {
				#line 279 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				string s = ((string) (( obj as string )) );
				if ( ! (string.Equals(s, null)) ) {
					#line 281 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return global::haxe.lang.StringRefl.handleGetField(s, field, throwErrors);
				}
				
				#line 282 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				t = ((global::System.Type) (obj.GetType()) );
				bf = ((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Instance) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Public) ) )) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.FlattenHierarchy) ) )) );
			}
			else {
				#line 285 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (( ( t == ((global::System.Type) (typeof(string)) ) ) && string.Equals(field, "fromCharCode") )) {
					#line 286 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return new global::haxe.lang.Closure(typeof(global::haxe.lang.StringExt), field, 0);
				}
				
				#line 288 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				obj = null;
				bf = ((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Static) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Public) ) )) );
			}
			
			#line 292 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.Reflection.FieldInfo f = t.GetField(((string) (field) ), ((global::System.Reflection.BindingFlags) (bf) ));
			if (( f != null )) {
				#line 295 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return global::haxe.lang.Runtime.unbox(f.GetValue(((object) (obj) )));
			}
			else {
				#line 299 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				global::System.Reflection.PropertyInfo prop = t.GetProperty(((string) (field) ), ((global::System.Reflection.BindingFlags) (bf) ));
				if (( prop == null )) {
					#line 302 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					global::System.Reflection.MemberInfo[] m = t.GetMember(((string) (field) ), ((global::System.Reflection.BindingFlags) (bf) ));
					if (( ( ( m as global::System.Array ).Length == 0 ) && (( string.Equals(field, "__get") || string.Equals(field, "__set") )) )) {
						#line 304 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						m = t.GetMember(((string) (( (string.Equals(field, "__get")) ? ("get_Item") : ("set_Item") )) ), ((global::System.Reflection.BindingFlags) (bf) ));
					}
					
					#line 306 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					if (( ( m as global::System.Array ).Length > 0 )) {
						#line 308 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						return new global::haxe.lang.Closure(( (( obj != null )) ? (obj) : (t) ), field, 0);
					}
					else {
						#line 313 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						if (t.IsCOMObject) {
							#line 317 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							try {
								#line 317 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								return t.InvokeMember(((string) (field) ), ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.GetProperty) ), ((global::System.Reflection.Binder) (null) ), ((object) (obj) ), ((object[]) (new object[0]) ));
							}
							catch (global::System.Exception e){
								#line 320 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								global::haxe.lang.Exceptions.exception = e;
							}
							
							
						}
						
						#line 325 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						if (throwErrors) {
							#line 326 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Cannot access field \'", field), "\'."));
						}
						else {
							#line 328 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							return null;
						}
						
					}
					
				}
				
				#line 331 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return global::haxe.lang.Runtime.unbox(prop.GetValue(((object) (obj) ), ((object[]) (null) )));
			}
			
		}
		#line default
		
		public static bool slowHasField(object obj, string field) {
			#line 337 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( obj == null )) {
				#line 337 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return false;
			}
			
			#line 338 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.Type t = ((global::System.Type) (( obj as global::System.Type )) );
			#line 340 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.Reflection.BindingFlags bf = default(global::System.Reflection.BindingFlags);
			#line 340 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( t == null )) {
				#line 341 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				string s = ((string) (( obj as string )) );
				if ( ! (string.Equals(s, null)) ) {
					#line 343 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return ( global::haxe.lang.StringRefl.handleGetField(s, field, false) != null );
				}
				
				#line 344 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				t = ((global::System.Type) (obj.GetType()) );
				bf = ((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Instance) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Public) ) )) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.FlattenHierarchy) ) )) );
			}
			else {
				#line 347 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (( t == ((global::System.Type) (typeof(string)) ) )) {
					#line 348 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return string.Equals(field, "fromCharCode");
				}
				
				#line 349 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				obj = null;
				bf = ((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Static) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Public) ) )) );
			}
			
			#line 352 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.Reflection.MemberInfo[] mi = t.GetMember(((string) (field) ), ((global::System.Reflection.BindingFlags) (bf) ));
			return ( ( mi != null ) && ( ( mi as global::System.Array ).Length > 0 ) );
		}
		#line default
		
		public static object slowSetField(object obj, string field, object @value) {
			#line 358 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( obj == null )) {
				#line 359 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				throw new global::System.NullReferenceException(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Cannot access field \'", field), "\' of null."));
			}
			
			#line 361 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.Type t = ((global::System.Type) (( obj as global::System.Type )) );
			#line 363 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.Reflection.BindingFlags bf = default(global::System.Reflection.BindingFlags);
			#line 363 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( t == null )) {
				#line 365 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				t = ((global::System.Type) (obj.GetType()) );
				bf = ((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Instance) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Public) ) )) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.FlattenHierarchy) ) )) );
			}
			else {
				#line 368 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				obj = null;
				bf = ((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Static) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Public) ) )) );
			}
			
			#line 372 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.Reflection.FieldInfo f = t.GetField(((string) (field) ), ((global::System.Reflection.BindingFlags) (bf) ));
			if (( f != null )) {
				#line 375 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (( f.FieldType as global::System.Reflection.MemberInfo ).ToString().StartsWith("haxe.lang.Null")) {
					#line 377 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					@value = global::haxe.lang.Runtime.mkNullable(@value, f.FieldType);
				}
				
				#line 379 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (( global::System.Object.ReferenceEquals(((global::System.Type) (typeof(global::System.Double)) ), ((object) (global::cs.Lib.getNativeType(@value)) )) &&  ! (global::System.Object.ReferenceEquals(((object) (t) ), ((object) (f.FieldType) )))  )) {
					#line 381 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					global::System.IConvertible ic = ((global::System.IConvertible) (( @value as global::System.IConvertible )) );
					@value = ic.ToType(((global::System.Type) (f.FieldType) ), ((global::System.IFormatProvider) (null) ));
				}
				
				#line 385 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				f.SetValue(((object) (obj) ), ((object) (@value) ));
				return @value;
			}
			else {
				#line 390 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				global::System.Reflection.PropertyInfo prop = t.GetProperty(((string) (field) ), ((global::System.Reflection.BindingFlags) (bf) ));
				if (( prop == null )) {
					#line 394 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					if (t.IsCOMObject) {
						#line 398 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						try {
							#line 398 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							return t.InvokeMember(((string) (field) ), ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.SetProperty) ), ((global::System.Reflection.Binder) (null) ), ((object) (obj) ), ((object[]) (new object[]{@value}) ));
						}
						catch (global::System.Exception e){
							#line 401 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							global::haxe.lang.Exceptions.exception = e;
						}
						
						
					}
					
					#line 405 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Field \'", field), "\' not found for writing from Class "), global::Std.@string(t)));
				}
				
				#line 408 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (( prop.PropertyType as global::System.Reflection.MemberInfo ).ToString().StartsWith("haxe.lang.Null")) {
					#line 410 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					@value = global::haxe.lang.Runtime.mkNullable(@value, prop.PropertyType);
				}
				
				#line 412 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (( global::System.Object.ReferenceEquals(((global::System.Type) (typeof(global::System.Double)) ), ((object) (global::cs.Lib.getNativeType(@value)) )) &&  ! (global::System.Object.ReferenceEquals(((object) (t) ), ((object) (f.FieldType) )))  )) {
					#line 414 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					global::System.IConvertible ic1 = ((global::System.IConvertible) (( @value as global::System.IConvertible )) );
					@value = ic1.ToType(((global::System.Type) (f.FieldType) ), ((global::System.IFormatProvider) (null) ));
				}
				
				#line 417 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				prop.SetValue(((object) (obj) ), ((object) (@value) ), ((object[]) (null) ));
				#line 419 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return @value;
			}
			
		}
		#line default
		
		public static object callMethod(object obj, global::System.Reflection.MethodBase[] methods, int methodLength, global::Array args) {
			unchecked {
				#line 425 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (( methodLength == 0 )) {
					#line 425 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					throw global::haxe.lang.HaxeException.wrap("No available methods");
				}
				
				#line 426 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				int length = ((int) (global::haxe.lang.Runtime.getField_f(args, "length", 520590566, true)) );
				object[] oargs = new object[length];
				global::System.Type[] ts = new global::System.Type[length];
				int[] rates = new int[( methods as global::System.Array ).Length];
				#line 431 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				{
					#line 431 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					int _g = 0;
					#line 431 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					while (( _g < length )) {
						#line 431 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						int i = _g++;
						#line 433 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						oargs[i] = args[i];
						if (( args[i] != null )) {
							#line 435 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							ts[i] = global::cs.Lib.getNativeType(args[i]);
						}
						
					}
					
				}
				
				#line 438 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				int last = 0;
				#line 441 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (( methodLength > 1 )) {
					#line 443 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					{
						#line 443 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						int _g1 = 0;
						#line 443 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						while (( _g1 < methodLength )) {
							#line 443 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							int i1 = _g1++;
							#line 445 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							global::System.Reflection.ParameterInfo[] @params = methods[i1].GetParameters();
							if (( ( @params as global::System.Array ).Length != length )) {
								#line 447 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								continue;
							}
							else {
								#line 449 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								bool fits = true;
								#line 449 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								int crate = 0;
								{
									#line 450 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									int _g2 = 0;
									#line 450 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									int _g11 = ( @params as global::System.Array ).Length;
									#line 450 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									while (( _g2 < _g11 )) {
										#line 450 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
										int i2 = _g2++;
										#line 452 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
										global::System.Type param = @params[i2].ParameterType;
										string strParam = global::haxe.lang.Runtime.concat(global::Std.@string(param), "");
										if (( param.IsAssignableFrom(((global::System.Type) (ts[i2]) )) || ( ( ts[i2] == null ) &&  ! (param.IsValueType)  ) )) {
											#line 457 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
											continue;
										}
										else if (( strParam.StartsWith("haxe.lang.Null") || ( (( ( oargs[i2] == null ) || ( oargs[i2] is global::System.IConvertible ) )) && (((global::System.Type) (typeof(global::System.IConvertible)) )).IsAssignableFrom(((global::System.Type) (param) )) ) )) {
											#line 461 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
											crate++;
											continue;
										}
										else if ( ! (param.ContainsGenericParameters) ) {
											#line 464 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
											fits = false;
											break;
										}
										
									}
									
								}
								
								#line 469 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								if (fits) {
									#line 471 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									rates[last] = crate;
									methods[last++] = methods[i1];
								}
								
							}
							
						}
						
					}
					
					#line 477 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					methodLength = last;
				}
				else if (( ( methodLength == 1 ) && ( ( methods[0].GetParameters() as global::System.Array ).Length != length ) )) {
					#line 479 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					methodLength = 0;
				}
				
				#line 487 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (( methodLength == 0 )) {
					#line 488 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Invalid calling parameters for method ", ( methods[0] as global::System.Reflection.MemberInfo ).Name));
				}
				
				#line 490 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				double best = global::System.Double.PositiveInfinity;
				int bestMethod = 0;
				{
					#line 492 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					int _g3 = 0;
					#line 492 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					while (( _g3 < methodLength )) {
						#line 492 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						int i3 = _g3++;
						#line 494 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						if (( rates[i3] < best )) {
							#line 496 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							bestMethod = i3;
							best = ((double) (rates[i3]) );
						}
						
					}
					
				}
				
				#line 501 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				methods[0] = methods[bestMethod];
				global::System.Reflection.ParameterInfo[] params1 = methods[0].GetParameters();
				{
					#line 503 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					int _g12 = 0;
					#line 503 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					int _g4 = ( params1 as global::System.Array ).Length;
					#line 503 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					while (( _g12 < _g4 )) {
						#line 503 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						int i4 = _g12++;
						#line 505 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						global::System.Type param1 = params1[i4].ParameterType;
						string strParam1 = global::haxe.lang.Runtime.concat(global::Std.@string(param1), "");
						object arg = oargs[i4];
						if (strParam1.StartsWith("haxe.lang.Null")) {
							#line 510 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							oargs[i4] = global::haxe.lang.Runtime.mkNullable(arg, param1);
						}
						else if ((((global::System.Type) (typeof(global::System.IConvertible)) )).IsAssignableFrom(((global::System.Type) (param1) ))) {
							#line 512 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							if (( arg == null )) {
								#line 513 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								if (param1.IsValueType) {
									#line 514 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
									oargs[i4] = global::System.Activator.CreateInstance(((global::System.Type) (param1) ));
								}
								
							}
							else if ( ! (global::cs.Lib.getNativeType(arg).IsAssignableFrom(((global::System.Type) (param1) ))) ) {
								#line 516 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
								oargs[i4] = (((global::System.IConvertible) (arg) )).ToType(((global::System.Type) (param1) ), ((global::System.IFormatProvider) (null) ));
							}
							
						}
						
					}
					
				}
				
				#line 521 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (( methods[0].ContainsGenericParameters && ( methods[0] is global::System.Reflection.MethodInfo ) )) {
					#line 523 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					global::System.Reflection.MethodInfo m = ((global::System.Reflection.MethodInfo) (methods[0]) );
					global::System.Type[] tgs = ( m as global::System.Reflection.MethodBase ).GetGenericArguments();
					{
						#line 525 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						int _g13 = 0;
						#line 525 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						int _g5 = ( tgs as global::System.Array ).Length;
						#line 525 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						while (( _g13 < _g5 )) {
							#line 525 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							int i5 = _g13++;
							#line 527 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							tgs[i5] = typeof(object);
						}
						
					}
					
					#line 529 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					m = m.MakeGenericMethod(((global::System.Type[]) (tgs) ));
					object retg = ( m as global::System.Reflection.MethodBase ).Invoke(((object) (obj) ), ((object[]) (oargs) ));
					return global::haxe.lang.Runtime.unbox(retg);
				}
				
				#line 534 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				global::System.Reflection.MethodBase m1 = methods[0];
				if (( ( obj == null ) && ( m1 is global::System.Reflection.ConstructorInfo ) )) {
					#line 537 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					object ret = (((global::System.Reflection.ConstructorInfo) (m1) )).Invoke(((object[]) (oargs) ));
					return global::haxe.lang.Runtime.unbox(ret);
				}
				
				#line 541 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				object ret1 = m1.Invoke(((object) (obj) ), ((object[]) (oargs) ));
				return global::haxe.lang.Runtime.unbox(ret1);
			}
			#line default
		}
		
		
		public static object unbox(object dyn) {
			#line 547 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( ( dyn != null ) && (global::haxe.lang.Runtime.concat(global::Std.@string(global::cs.Lib.getNativeType(dyn)), "")).StartsWith("haxe.lang.Null") )) {
				#line 549 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return ((object) (global::haxe.lang.Runtime.callField(dyn, "toDynamic", 1705629508, null)) );
			}
			else {
				#line 551 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return dyn;
			}
			
		}
		#line default
		
		public static object mkNullable(object obj, global::System.Type nullableType) {
			
		if (nullableType.ContainsGenericParameters)
			return haxe.lang.Null<object>.ofDynamic<object>(obj);
		return nullableType.GetMethod("_ofDynamic").Invoke(null, new object[] { obj });
	
		}
		
		
		public static object slowCallField(object obj, string field, global::Array args) {
			#line 640 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( string.Equals(field, "toString") && (( ( args == null ) || ( ((int) (global::haxe.lang.Runtime.getField_f(args, "length", 520590566, true)) ) == 0 ) )) )) {
				#line 642 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return obj.ToString();
			}
			
			#line 644 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( args == null )) {
				#line 644 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				args = new global::Array<object>(new object[]{});
			}
			
			#line 646 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.Reflection.BindingFlags bf = default(global::System.Reflection.BindingFlags);
			global::System.Type t = ((global::System.Type) (( obj as global::System.Type )) );
			if (( t == null )) {
				#line 650 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				string s = ((string) (( obj as string )) );
				if ( ! (string.Equals(s, null)) ) {
					#line 652 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return global::haxe.lang.StringRefl.handleCallField(s, field, args);
				}
				
				#line 653 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				t = obj.GetType();
				bf = ((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Instance) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Public) ) )) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.FlattenHierarchy) ) )) );
			}
			else {
				#line 656 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (( ( t == ((global::System.Type) (typeof(string)) ) ) && string.Equals(field, "fromCharCode") )) {
					#line 657 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return global::haxe.lang.StringExt.fromCharCode(global::haxe.lang.Runtime.toInt(args[0]));
				}
				
				#line 658 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				obj = null;
				bf = ((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Static) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Public) ) )) );
			}
			
			#line 662 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::System.Reflection.MethodBase[] mis = ((global::System.Reflection.MethodBase[]) (t.GetMethods(((global::System.Reflection.BindingFlags) (bf) ))) );
			int last = 0;
			{
				#line 664 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				int _g1 = 0;
				#line 664 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				int _g = ( mis as global::System.Array ).Length;
				#line 664 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				while (( _g1 < _g )) {
					#line 664 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					int i = _g1++;
					#line 666 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					string name = ( mis[i] as global::System.Reflection.MemberInfo ).Name;
					if (string.Equals(name, field)) {
						#line 668 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						mis[last++] = mis[i];
					}
					
				}
				
			}
			
			#line 671 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( ( last == 0 ) && (( string.Equals(field, "__get") || string.Equals(field, "__set") )) )) {
				#line 673 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (string.Equals(field, "__get")) {
					#line 673 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					field = "get_Item";
				}
				else {
					#line 673 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					field = "set_Item";
				}
				
				#line 674 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				{
					#line 674 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					int _g11 = 0;
					#line 674 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					int _g2 = ( mis as global::System.Array ).Length;
					#line 674 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					while (( _g11 < _g2 )) {
						#line 674 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						int i1 = _g11++;
						#line 676 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						string name1 = ( mis[i1] as global::System.Reflection.MemberInfo ).Name;
						if (string.Equals(name1, field)) {
							#line 679 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
							mis[last++] = mis[i1];
						}
						
					}
					
				}
				
			}
			
			#line 684 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( ( last == 0 ) && t.IsCOMObject )) {
				#line 686 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				object[] oargs = new object[((int) (global::haxe.lang.Runtime.getField_f(args, "length", 520590566, true)) )];
				{
					#line 687 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					int _g12 = 0;
					#line 687 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					int _g3 = ( oargs as global::System.Array ).Length;
					#line 687 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					while (( _g12 < _g3 )) {
						#line 687 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						int i2 = _g12++;
						#line 689 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						oargs[i2] = args[i2];
					}
					
				}
				
				#line 691 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return t.InvokeMember(((string) (field) ), ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.InvokeMethod) ), ((global::System.Reflection.Binder) (null) ), ((object) (obj) ), ((object[]) (oargs) ));
			}
			
			#line 694 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( last == 0 )) {
				#line 696 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Method \"", field), "\" not found on type "), global::Std.@string(t)));
			}
			
			#line 699 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			return global::haxe.lang.Runtime.callMethod(obj, mis, last, args);
		}
		#line default
		
		public static object callField(object obj, string field, int fieldHash, global::Array args) {
			#line 704 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::haxe.lang.HxObject hxObj = ((global::haxe.lang.HxObject) (( obj as global::haxe.lang.HxObject )) );
			if (( hxObj != null )) {
				#line 706 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return hxObj.__hx_invokeField(field, ( (( fieldHash == 0 )) ? (global::haxe.lang.FieldLookup.hash(field)) : (fieldHash) ), args);
			}
			
			#line 707 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			return global::haxe.lang.Runtime.slowCallField(obj, field, args);
		}
		#line default
		
		public static object getField(object obj, string field, int fieldHash, bool throwErrors) {
			#line 712 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::haxe.lang.HxObject hxObj = ((global::haxe.lang.HxObject) (( obj as global::haxe.lang.HxObject )) );
			if (( hxObj != null )) {
				#line 714 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return hxObj.__hx_getField(field, ( (( fieldHash == 0 )) ? (global::haxe.lang.FieldLookup.hash(field)) : (fieldHash) ), throwErrors, false, false);
			}
			
			#line 716 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			return global::haxe.lang.Runtime.slowGetField(obj, field, throwErrors);
		}
		#line default
		
		public static double getField_f(object obj, string field, int fieldHash, bool throwErrors) {
			#line 721 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::haxe.lang.HxObject hxObj = ((global::haxe.lang.HxObject) (( obj as global::haxe.lang.HxObject )) );
			if (( hxObj != null )) {
				#line 723 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return hxObj.__hx_getField_f(field, ( (( fieldHash == 0 )) ? (global::haxe.lang.FieldLookup.hash(field)) : (fieldHash) ), throwErrors, false);
			}
			
			#line 725 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			return global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.slowGetField(obj, field, throwErrors));
		}
		#line default
		
		public static object setField(object obj, string field, int fieldHash, object @value) {
			#line 730 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::haxe.lang.HxObject hxObj = ((global::haxe.lang.HxObject) (( obj as global::haxe.lang.HxObject )) );
			if (( hxObj != null )) {
				#line 732 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return hxObj.__hx_setField(field, ( (( fieldHash == 0 )) ? (global::haxe.lang.FieldLookup.hash(field)) : (fieldHash) ), @value, false);
			}
			
			#line 734 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			return global::haxe.lang.Runtime.slowSetField(obj, field, @value);
		}
		#line default
		
		public static double setField_f(object obj, string field, int fieldHash, double @value) {
			#line 739 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			global::haxe.lang.HxObject hxObj = ((global::haxe.lang.HxObject) (( obj as global::haxe.lang.HxObject )) );
			if (( hxObj != null )) {
				#line 741 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return hxObj.__hx_setField_f(field, ( (( fieldHash == 0 )) ? (global::haxe.lang.FieldLookup.hash(field)) : (fieldHash) ), @value, false);
			}
			
			#line 743 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			return global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.slowSetField(obj, field, @value));
		}
		#line default
		
		public static string toString(object obj) {
			#line 748 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( obj == null )) {
				#line 749 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return null;
			}
			
			#line 750 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( obj is bool )) {
				#line 751 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (global::haxe.lang.Runtime.toBool((obj))) {
					#line 752 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return "true";
				}
				else {
					#line 754 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					return "false";
				}
				
			}
			
			#line 756 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			return obj.ToString();
		}
		#line default
		
		public static bool typeEq(global::System.Type t1, global::System.Type t2) {
			#line 764 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( ( t1 == null ) || ( t2 == null ) )) {
				#line 765 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return ( t1 == t2 );
			}
			
			#line 767 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			bool t1i = t1.IsInterface;
			bool t2i = t2.IsInterface;
			if (( t1i != t2i )) {
				#line 771 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				if (t1i) {
					#line 773 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					global::haxe.lang.GenericInterface g = global::haxe.lang.Runtime.getGenericAttr(t1);
					if (( g != null )) {
						#line 775 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						t1 = g.generic;
					}
					
				}
				else {
					#line 777 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					global::haxe.lang.GenericInterface g1 = global::haxe.lang.Runtime.getGenericAttr(t2);
					if (( g1 != null )) {
						#line 779 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						t2 = g1.generic;
					}
					
				}
				
			}
			
			#line 784 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( ( t1.GetGenericArguments() as global::System.Array ).Length > 0 )) {
				#line 784 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				t1 = t1.GetGenericTypeDefinition();
			}
			
			#line 785 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( ( t2.GetGenericArguments() as global::System.Array ).Length > 0 )) {
				#line 785 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				t2 = t2.GetGenericTypeDefinition();
			}
			
			#line 786 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			return global::System.Object.ReferenceEquals(((object) (t1) ), ((object) (t2) ));
		}
		#line default
		
		public static global::haxe.lang.GenericInterface getGenericAttr(global::System.Type t) {
			#line 793 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			{
				#line 793 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				object[] _this = ( t as global::System.Reflection.MemberInfo ).GetCustomAttributes(((bool) (true) ));
				#line 793 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				object[] _g_arr = _this;
				#line 793 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				uint _g_idx = ((uint) (0) );
				#line 793 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				while (((bool) (( _g_idx < ( _g_arr as global::System.Array ).Length )) )) {
					#line 793 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
					object attr = ((object) (_g_arr[((int) (_g_idx++) )]) );
					if (( attr is global::haxe.lang.GenericInterface )) {
						#line 795 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
						return ((global::haxe.lang.GenericInterface) (attr) );
					}
					
				}
				
			}
			
			#line 796 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			return null;
		}
		#line default
		
		public static To genericCast<To>(object obj) {
			
		if (obj is To)
			return (To) obj;
		else if (obj == null)
			return default(To);
		if (typeof(To) == typeof(double))
			return (To)(object) toDouble(obj);
		else if (typeof(To) == typeof(int))
			return (To)(object) toInt(obj);
		else if (typeof(To) == typeof(float))
			return (To)(object)(float)toDouble(obj);
		else if (typeof(To) == typeof(long))
			return (To)(object)(long)toDouble(obj);
		else
			return (To) obj;
	
		}
		
		
		public static string concat(string s1, string s2) {
			
		return (s1 == null ? "null" : s1) + (s2 == null ? "null" : s2);
	
		}
		
		
		public static bool toBool(object dyn) {
			#line 833 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
			if (( dyn == null )) {
				#line 833 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return false;
			}
			else {
				#line 833 "/usr/lib/haxe/std/cs/internal/Runtime.hx"
				return (bool)dyn;
			}
			
		}
		#line default
		
	}
}



namespace haxe.lang{
	public enum EmptyObject{
		EMPTY
	}
}


