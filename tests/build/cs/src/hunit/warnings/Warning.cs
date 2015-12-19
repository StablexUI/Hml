
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.warnings {
	public class Warning : global::haxe.lang.HxObject {
		
		public Warning(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Warning(string message) {
			#line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			global::hunit.warnings.Warning.__hx_ctor_hunit_warnings_Warning(this, message);
		}
		#line default
		
		public static void __hx_ctor_hunit_warnings_Warning(global::hunit.warnings.Warning __temp_me120, string message) {
			#line 23 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			if (( string.Equals(message, null) || ( message.Trim().Length == 0 ) )) {
				#line 24 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				message = __temp_me120.defaultMessage();
			}
			
			#line 27 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			__temp_me120.message = message;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			return new global::hunit.warnings.Warning(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			return new global::hunit.warnings.Warning(global::haxe.lang.Runtime.toString(arr[0]));
		}
		#line default
		
		public string message;
		
		public virtual string defaultMessage() {
			unchecked {
				#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				string className = global::haxe.lang.Runtime.toString((global::haxe.lang.StringExt.split(global::Type.getClassName(global::Type.getClass<object>(this)), ".").pop()).toDynamic());
				#line 38 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				global::Array<object> words = new global::Array<object>(new object[]{});
				int wordStart = -1;
				{
					#line 40 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
					int _g1 = 0;
					#line 40 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
					int _g = className.Length;
					#line 40 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
					while (( _g1 < _g )) {
						#line 40 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						int i = _g1++;
						string @char = global::haxe.lang.StringExt.charAt(className, i);
						#line 43 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						if (string.Equals(@char.ToUpperInvariant(), @char)) {
							#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
							if (( wordStart >= 0 )) {
								#line 45 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
								string word = global::haxe.lang.StringExt.substring(className, wordStart, new global::haxe.lang.Null<int>(i, true));
								if (( wordStart > 0 )) {
									#line 47 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
									word = word.ToLowerInvariant();
								}
								
								#line 50 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
								words.push(word);
							}
							
							#line 52 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
							wordStart = i;
						}
						
					}
					
				}
				
				#line 55 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				if (( wordStart >= 0 )) {
					#line 56 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
					words.push(global::haxe.lang.StringExt.substr(className, wordStart, default(global::haxe.lang.Null<int>)).ToLowerInvariant());
				}
				
				#line 59 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				return words.@join(" ");
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				switch (hash) {
					case 437335495:
					{
						#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						this.message = global::haxe.lang.Runtime.toString(@value);
						#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						return @value;
					}
					
					
					default:
					{
						#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				switch (hash) {
					case 1230081798:
					{
						#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "defaultMessage", 1230081798)) );
					}
					
					
					case 437335495:
					{
						#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						return this.message;
					}
					
					
					default:
					{
						#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				switch (hash) {
					case 1230081798:
					{
						#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						return this.defaultMessage();
					}
					
					
					default:
					{
						#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			baseArr.push("message");
			#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			{
				#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


