
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.lang {
	public class StringExt {
		
		public StringExt() {
		}
		
		
		public static readonly global::System.String empty = new global::System.String(((char) (0) ), 0);
		
		public static global::System.String charAt(global::System.String me, int index) {
			unchecked {
				#line 32 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				if (((bool) (( ((uint) (index) ) >= me.Length )) )) {
					#line 33 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					return global::haxe.lang.StringExt.empty;
				}
				else {
					#line 35 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					return new global::System.String(me[index], 1);
				}
				
			}
			#line default
		}
		
		
		public static global::haxe.lang.Null<int> charCodeAt(global::System.String me, int index) {
			#line 40 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			if (((bool) (( ((uint) (index) ) >= me.Length )) )) {
				#line 41 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				return default(global::haxe.lang.Null<int>);
			}
			else {
				#line 43 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				return new global::haxe.lang.Null<int>(((int) (me[index]) ), true);
			}
			
		}
		#line default
		
		public static int indexOf(global::System.String me, string str, global::haxe.lang.Null<int> startIndex) {
			unchecked {
				#line 48 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				int sIndex = default(int);
				#line 48 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				if (startIndex.hasValue) {
					#line 48 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					sIndex = (startIndex).@value;
				}
				else {
					#line 48 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					sIndex = 0;
				}
				
				#line 49 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				if (( sIndex >= me.Length )) {
					#line 50 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					return -1;
				}
				
				#line 51 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				return me.IndexOf(((string) (str) ), ((int) (sIndex) ), ((global::System.StringComparison) (global::System.StringComparison.Ordinal) ));
			}
			#line default
		}
		
		
		public static int lastIndexOf(global::System.String me, global::System.String str, global::haxe.lang.Null<int> startIndex) {
			unchecked {
				#line 56 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				int sIndex = default(int);
				#line 56 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				if ( ! (startIndex.hasValue) ) {
					#line 56 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					sIndex = ( me.Length - 1 );
				}
				else {
					#line 56 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					sIndex = (startIndex).@value;
				}
				
				#line 57 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				if (( sIndex >= me.Length )) {
					#line 58 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					sIndex = ( me.Length - 1 );
				}
				else if (( sIndex < 0 )) {
					#line 60 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					return -1;
				}
				
				#line 63 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				if (startIndex.hasValue) {
					#line 65 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					int i = ( sIndex + 1 );
					while (( i-- > 0 )) {
						#line 68 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
						bool found = true;
						{
							#line 69 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
							int _g1 = 0;
							#line 69 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
							int _g = str.Length;
							#line 69 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
							while (( _g1 < _g )) {
								#line 69 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
								int j = _g1++;
								#line 71 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
								if (( me[( i + j )] != str[j] )) {
									#line 73 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
									found = false;
									break;
								}
								
							}
							
						}
						
						#line 78 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
						if (found) {
							#line 79 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
							return i;
						}
						
					}
					
					#line 82 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					return -1;
				}
				else {
					#line 84 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					return me.LastIndexOf(((string) (str) ), ((int) (sIndex) ), ((global::System.StringComparison) (global::System.StringComparison.Ordinal) ));
				}
				
			}
			#line default
		}
		
		
		public static global::Array<object> split(global::System.String me, global::System.String delimiter) {
			unchecked {
				#line 91 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				string[] native = null;
				if (( delimiter.Length == 0 )) {
					#line 94 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					int len = me.Length;
					native = new string[len];
					{
						#line 96 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
						int _g = 0;
						#line 96 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
						while (( _g < len )) {
							#line 96 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
							int i = _g++;
							native[i] = new global::System.String(me[i], 1);
						}
						
					}
					
				}
				else {
					#line 99 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					string[] str = new string[1];
					str[0] = global::haxe.lang.Runtime.toString(delimiter);
					#line 102 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					native = me.Split(((string[]) (str) ), ((global::System.StringSplitOptions) (global::System.StringSplitOptions.None) ));
				}
				
				#line 105 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				return new global::Array<object>(((object[]) (native) ));
			}
			#line default
		}
		
		
		public static string substr(global::System.String me, int pos, global::haxe.lang.Null<int> len) {
			#line 110 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			int meLen = me.Length;
			int targetLen = meLen;
			if (len.hasValue) {
				#line 114 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				targetLen = (len).@value;
				if (( ( targetLen == 0 ) || ( ( pos != 0 ) && ( targetLen < 0 ) ) )) {
					#line 116 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					return "";
				}
				
			}
			
			#line 119 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			if (( pos < 0 )) {
				#line 121 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				pos = ( meLen + pos );
				if (( pos < 0 )) {
					#line 122 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					pos = 0;
				}
				
			}
			else if (( targetLen < 0 )) {
				#line 124 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				targetLen = ( ( meLen + targetLen ) - pos );
			}
			
			#line 127 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			if (( ( pos + targetLen ) > meLen )) {
				#line 129 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				targetLen = ( meLen - pos );
			}
			
			#line 132 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			if (( ( pos < 0 ) || ( targetLen <= 0 ) )) {
				#line 132 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				return "";
			}
			
			#line 134 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			return me.Substring(((int) (pos) ), ((int) (targetLen) ));
		}
		#line default
		
		public static string substring(global::System.String me, int startIndex, global::haxe.lang.Null<int> endIndex) {
			#line 139 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			int len = me.Length;
			int endIdx = default(int);
			if ( ! (endIndex.hasValue) ) {
				#line 142 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				endIdx = len;
			}
			else if (( (endIdx = (endIndex).@value) < 0 )) {
				#line 144 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				endIdx = 0;
			}
			else if (( endIdx > len )) {
				#line 146 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				endIdx = len;
			}
			
			#line 148 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			if (( startIndex < 0 )) {
				#line 149 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				startIndex = 0;
			}
			else if (( startIndex > len )) {
				#line 151 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				startIndex = len;
			}
			
			#line 153 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			if (( startIndex > endIdx )) {
				#line 155 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				int tmp = startIndex;
				startIndex = endIdx;
				endIdx = tmp;
			}
			
			#line 160 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			return me.Substring(((int) (startIndex) ), ((int) (( endIdx - startIndex )) ));
		}
		#line default
		
		public static global::System.String toString(global::System.String me) {
			#line 165 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			return me;
		}
		#line default
		
		public static string toLowerCase(global::System.String me) {
			#line 170 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			return me.ToLowerInvariant();
		}
		#line default
		
		public static string toUpperCase(global::System.String me) {
			#line 175 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			return me.ToUpperInvariant();
		}
		#line default
		
		public static global::System.String toNativeString(global::System.String me) {
			#line 180 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			return me;
		}
		#line default
		
		public static global::System.String fromCharCode(int code) {
			unchecked {
				#line 185 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				return new global::System.String(((char) (code) ), 1);
			}
			#line default
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.lang {
	public class StringRefl {
		
		static StringRefl() {
			#line 191 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			global::haxe.lang.StringRefl.fields = new global::Array<object>(new object[]{"length", "toUpperCase", "toLowerCase", "charAt", "charCodeAt", "indexOf", "lastIndexOf", "split", "substr", "substring"});
		}
		#line default
		
		public StringRefl() {
		}
		
		
		public static global::Array<object> fields;
		
		public static object handleGetField(string str, string f, bool throwErrors) {
			#line 195 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			switch (f) {
				case "length":
				{
					#line 197 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					return str.Length;
				}
				
				
				case "toUpperCase":
				case "toLowerCase":
				case "charAt":
				case "charCodeAt":
				case "indexOf":
				case "lastIndexOf":
				case "split":
				case "substr":
				case "substring":
				{
					#line 199 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					return new global::haxe.lang.Closure(str, f, 0);
				}
				
				
				default:
				{
					#line 201 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
					if (throwErrors) {
						#line 202 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
						throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Field not found: \'", f), "\' in String"));
					}
					else {
						#line 204 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
						return null;
					}
					
				}
				
			}
			
		}
		#line default
		
		public static object handleCallField(global::System.String str, string f, global::Array args) {
			#line 210 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			global::Array _args = new global::Array<object>(new object[]{str});
			if (( args == null )) {
				#line 212 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				args = _args;
			}
			else {
				#line 214 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
				args = ((global::Array) (global::haxe.lang.Runtime.callField(_args, "concat", 1204816148, new global::Array<object>(new object[]{args}))) );
			}
			
			#line 216 "/usr/lib/haxe/std/cs/internal/StringExt.hx"
			return global::haxe.lang.Runtime.slowCallField(typeof(global::haxe.lang.StringExt), f, args);
		}
		#line default
		
	}
}


