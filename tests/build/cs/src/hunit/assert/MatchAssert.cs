
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.assert {
	public class MatchAssert : global::hunit.assert.BaseAssert {
		
		public MatchAssert(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public MatchAssert(global::hunit.match.Match expected, object actual, string message, object pos) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
			#line 31 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			global::hunit.assert.MatchAssert.__hx_ctor_hunit_assert_MatchAssert(this, expected, actual, message, pos);
		}
		#line default
		
		public static void __hx_ctor_hunit_assert_MatchAssert(global::hunit.assert.MatchAssert __temp_me80, global::hunit.match.Match expected, object actual, string message, object pos) {
			#line 31 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			global::hunit.assert.BaseAssert.__hx_ctor_hunit_assert_BaseAssert(__temp_me80, pos);
			#line 33 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			__temp_me80.expected = expected;
			__temp_me80.actual = actual;
			__temp_me80.message = message;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			return new global::hunit.assert.MatchAssert(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				return new global::hunit.assert.MatchAssert(((global::hunit.match.Match) (arr[0]) ), arr[1], global::haxe.lang.Runtime.toString(arr[2]), arr[3]);
			}
			#line default
		}
		
		
		public global::hunit.match.Match expected;
		
		public object actual;
		
		public string message;
		
		public override void validate() {
			#line 45 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			if (this.expected.match(this.actual)) {
				#line 45 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				return;
			}
			
			#line 47 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			this.failed(( (string.Equals(this.message, null)) ? (this.buildMessage()) : (this.message) ));
		}
		#line default
		
		public virtual string buildMessage() {
			#line 57 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			string a = global::hunit.Utils.shortenQuote(this.actual);
			#line 59 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			if (this.expected.isChained()) {
				#line 60 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Failed asserting that ", a), " matches "), global::Std.@string(this.expected)), ".");
			}
			else {
				#line 62 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				global::System.Type cls = global::Type.getClass<object>(this.expected);
				#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				{
					#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					global::System.Type __temp_switch1 = (cls);
					#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (global::haxe.lang.Runtime.eq(__temp_switch1, typeof(global::hunit.match.TypeMatch<object>))) {
						#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Failed asserting that ", this.actualType()), " is "), global::Type.getClassName(((global::System.Type) (global::haxe.lang.Runtime.getField((((global::hunit.match.TypeMatch) (this.expected) )), "type", 1292432058, true)) )));
					}
					else if (global::haxe.lang.Runtime.eq(__temp_switch1, typeof(global::hunit.match.NotEqualMatch<object>))) {
						#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Failed asserting that ", a), " does not equal "), global::hunit.Utils.shortenQuote(global::haxe.lang.Runtime.getField((((global::hunit.match.NotEqualMatch) (this.expected) )), "value", 834174833, true)));
					}
					else if (global::haxe.lang.Runtime.eq(__temp_switch1, typeof(global::hunit.match.EqualMatch<object>))) {
						#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Failed asserting that ", a), " equals "), global::hunit.Utils.shortenQuote(global::haxe.lang.Runtime.getField((((global::hunit.match.EqualMatch) (this.expected) )), "value", 834174833, true)));
					}
					else {
						#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Failed asserting that ", a), " matches "), global::Std.@string(this.expected)), ".");
					}
					
				}
				
			}
			
		}
		#line default
		
		public virtual string actualType() {
			unchecked {
				#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				{
					#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					global::ValueType _g = global::Type.@typeof(this.actual);
					#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					switch (_g.index) {
						case 6:
						{
							#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
							global::System.Type c = ((global::System.Type) (_g.@params[0]) );
							#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
							return global::Type.getClassName(c);
						}
						
						
						case 7:
						{
							#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
							global::System.Type e = ((global::System.Type) (_g.@params[0]) );
							#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
							return global::Type.getEnumName(e);
						}
						
						
						case 0:
						{
							#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
							return "Null";
						}
						
						
						case 1:
						{
							#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
							return "Int";
						}
						
						
						case 2:
						{
							#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
							return "Float";
						}
						
						
						case 3:
						{
							#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
							return "Bool";
						}
						
						
						case 4:
						{
							#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
							return "Object";
						}
						
						
						case 5:
						{
							#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
							return "Function";
						}
						
						
						case 8:
						{
							#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
							return "Unknown Type";
						}
						
						
					}
					
				}
				
				#line 78 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				return null;
			}
			#line default
		}
		
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				switch (hash) {
					case 374295182:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						this.actual = ((object) (@value) );
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return @value;
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				switch (hash) {
					case 437335495:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						this.message = global::haxe.lang.Runtime.toString(@value);
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return @value;
					}
					
					
					case 374295182:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						this.actual = ((object) (@value) );
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return @value;
					}
					
					
					case 1076899448:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						this.expected = ((global::hunit.match.Match) (@value) );
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return @value;
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				switch (hash) {
					case 193251432:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "actualType", 193251432)) );
					}
					
					
					case 745104441:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "buildMessage", 745104441)) );
					}
					
					
					case 82038934:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "validate", 82038934)) );
					}
					
					
					case 437335495:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return this.message;
					}
					
					
					case 374295182:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return this.actual;
					}
					
					
					case 1076899448:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return this.expected;
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				switch (hash) {
					case 374295182:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(this.actual)) );
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				switch (hash) {
					case 82038934:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return global::haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					
					case 193251432:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return this.actualType();
					}
					
					
					case 745104441:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return this.buildMessage();
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			baseArr.push("message");
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			baseArr.push("actual");
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			baseArr.push("expected");
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			{
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


