
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.assert {
	public class AssertFactory : global::haxe.lang.HxObject {
		
		public AssertFactory(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public AssertFactory(global::hunit.TestCase testCase) {
			#line 27 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			global::hunit.assert.AssertFactory.__hx_ctor_hunit_assert_AssertFactory(this, testCase);
		}
		#line default
		
		public static void __hx_ctor_hunit_assert_AssertFactory(global::hunit.assert.AssertFactory __temp_me78, global::hunit.TestCase testCase) {
			#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			__temp_me78.testCase = testCase;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			return new global::hunit.assert.AssertFactory(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			return new global::hunit.assert.AssertFactory(((global::hunit.TestCase) (arr[0]) ));
		}
		#line default
		
		public global::hunit.TestCase testCase;
		
		public virtual void match<T>(global::hunit.match.Match<T> match, T @value, string message, object pos) {
			#line 39 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			global::hunit.assert.MatchAssert assert = new global::hunit.assert.MatchAssert(match, @value, message, pos);
			this.testCase.__hu_state.asserted.@add(assert);
			#line 42 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			assert.validate();
		}
		#line default
		
		public virtual void equal<T>(T expected, T actual, string message, object pos) {
			#line 52 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			global::hunit.assert.MatchAssert assert = new global::hunit.assert.MatchAssert(this.testCase.match.equal<T>(expected), actual, message, pos);
			this.testCase.__hu_state.asserted.@add(assert);
			#line 55 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			assert.validate();
		}
		#line default
		
		public virtual void notEqual<T>(T expected, T actual, string message, object pos) {
			#line 65 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			global::hunit.assert.MatchAssert assert = new global::hunit.assert.MatchAssert(this.testCase.match.notEqual<T>(expected), actual, message, pos);
			this.testCase.__hu_state.asserted.@add(assert);
			#line 68 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			assert.validate();
		}
		#line default
		
		public virtual void type(global::System.Type expectedType, object @value, string message, object pos) {
			#line 78 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			global::hunit.assert.MatchAssert assert = new global::hunit.assert.MatchAssert(this.testCase.match.type<object>(expectedType), @value, message, pos);
			this.testCase.__hu_state.asserted.@add(assert);
			#line 81 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			assert.validate();
		}
		#line default
		
		public virtual void isNull(object @value, string message, object pos) {
			#line 91 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			global::hunit.assert.MatchAssert assert = new global::hunit.assert.MatchAssert(this.testCase.match.equal<object>(null), @value, message, pos);
			this.testCase.__hu_state.asserted.@add(assert);
			#line 94 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			assert.validate();
		}
		#line default
		
		public virtual void notNull(object @value, string message, object pos) {
			#line 104 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			global::hunit.assert.MatchAssert assert = new global::hunit.assert.MatchAssert(this.testCase.match.notEqual<object>(null), @value, message, pos);
			this.testCase.__hu_state.asserted.@add(assert);
			#line 107 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			assert.validate();
		}
		#line default
		
		public virtual void isTrue(bool @value, string message, object pos) {
			#line 117 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			global::hunit.assert.MatchAssert assert = new global::hunit.assert.MatchAssert(this.testCase.match.equal<bool>(true), @value, message, pos);
			this.testCase.__hu_state.asserted.@add(assert);
			#line 120 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			assert.validate();
		}
		#line default
		
		public virtual void isFalse(bool @value, string message, object pos) {
			#line 130 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			global::hunit.assert.MatchAssert assert = new global::hunit.assert.MatchAssert(this.testCase.match.equal<bool>(false), @value, message, pos);
			this.testCase.__hu_state.asserted.@add(assert);
			#line 133 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			assert.validate();
		}
		#line default
		
		public virtual void regexp(global::EReg pattern, string @value, string message, object pos) {
			#line 143 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			global::hunit.assert.MatchAssert assert = new global::hunit.assert.MatchAssert(this.testCase.match.regexp(pattern), @value, message, pos);
			this.testCase.__hu_state.asserted.@add(assert);
			#line 146 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			assert.validate();
		}
		#line default
		
		public virtual void similar(object expected, object actual, string message, object pos) {
			#line 169 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			global::hunit.assert.MatchAssert assert = new global::hunit.assert.MatchAssert(this.testCase.match.similar(expected), actual, message, pos);
			this.testCase.__hu_state.asserted.@add(assert);
			#line 172 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			assert.validate();
		}
		#line default
		
		public virtual void fail(string message, object pos) {
			#line 182 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.AssertException(( (string.Equals(message, null)) ? ("Forced test failure.") : (message) ), pos));
		}
		#line default
		
		public virtual void warn(string message, object pos) {
			#line 192 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			this.testCase.__hu_state.warn(new global::hunit.warnings.ForcedWarning(((string) (( (string.Equals(message, null)) ? ("Forced warning") : (message) )) )));
			this.testCase.__hu_state.asserted.@add(new global::hunit.assert.BaseAssert(((object) (pos) )));
		}
		#line default
		
		public virtual void success(object pos) {
			#line 203 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			this.testCase.__hu_state.asserted.@add(new global::hunit.assert.BaseAssert(((object) (pos) )));
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
				switch (hash) {
					case 1156359202:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.testCase = ((global::hunit.TestCase) (@value) );
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return @value;
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
				switch (hash) {
					case 944645571:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "success", 944645571)) );
					}
					
					
					case 1324507718:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "warn", 1324507718)) );
					}
					
					
					case 1135983070:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "fail", 1135983070)) );
					}
					
					
					case 839132715:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "similar", 839132715)) );
					}
					
					
					case 9027529:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "regexp", 9027529)) );
					}
					
					
					case 399825241:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "isFalse", 399825241)) );
					}
					
					
					case 1785359448:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "isTrue", 1785359448)) );
					}
					
					
					case 1043933498:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "notNull", 1043933498)) );
					}
					
					
					case 1718969233:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "isNull", 1718969233)) );
					}
					
					
					case 1292432058:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "type", 1292432058)) );
					}
					
					
					case 43098529:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "notEqual", 43098529)) );
					}
					
					
					case 1921175476:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "equal", 1921175476)) );
					}
					
					
					case 52644165:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "match", 52644165)) );
					}
					
					
					case 1156359202:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return this.testCase;
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
				switch (hash) {
					case 944645571:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.success(dynargs[0]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						break;
					}
					
					
					case 1324507718:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.warn(global::haxe.lang.Runtime.toString(dynargs[0]), dynargs[1]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						break;
					}
					
					
					case 1135983070:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.fail(global::haxe.lang.Runtime.toString(dynargs[0]), dynargs[1]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						break;
					}
					
					
					case 839132715:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.similar(dynargs[0], dynargs[1], global::haxe.lang.Runtime.toString(dynargs[2]), dynargs[3]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						break;
					}
					
					
					case 9027529:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.regexp(((global::EReg) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), global::haxe.lang.Runtime.toString(dynargs[2]), dynargs[3]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						break;
					}
					
					
					case 399825241:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.isFalse(global::haxe.lang.Runtime.toBool(dynargs[0]), global::haxe.lang.Runtime.toString(dynargs[1]), dynargs[2]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						break;
					}
					
					
					case 1785359448:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.isTrue(global::haxe.lang.Runtime.toBool(dynargs[0]), global::haxe.lang.Runtime.toString(dynargs[1]), dynargs[2]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						break;
					}
					
					
					case 1043933498:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.notNull(dynargs[0], global::haxe.lang.Runtime.toString(dynargs[1]), dynargs[2]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						break;
					}
					
					
					case 1718969233:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.isNull(dynargs[0], global::haxe.lang.Runtime.toString(dynargs[1]), dynargs[2]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						break;
					}
					
					
					case 1292432058:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.type(((global::System.Type) (dynargs[0]) ), dynargs[1], global::haxe.lang.Runtime.toString(dynargs[2]), dynargs[3]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						break;
					}
					
					
					case 43098529:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.notEqual<object>(dynargs[0], dynargs[1], global::haxe.lang.Runtime.toString(dynargs[2]), dynargs[3]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						break;
					}
					
					
					case 1921175476:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.equal<object>(dynargs[0], dynargs[1], global::haxe.lang.Runtime.toString(dynargs[2]), dynargs[3]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						break;
					}
					
					
					case 52644165:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.match<object>(((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (dynargs[0]) ))) ), dynargs[1], global::haxe.lang.Runtime.toString(dynargs[2]), dynargs[3]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						break;
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			baseArr.push("testCase");
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			{
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


