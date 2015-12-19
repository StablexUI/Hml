
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit {
	public class TestCase : global::haxe.lang.HxObject {
		
		static TestCase() {
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			global::hunit.TestCase.__rtti = "<class path=\"hunit.TestCase\" params=\"\">\n\t<getMockData public=\"1\" set=\"method\" line=\"54\" static=\"1\">\n\t\t<f a=\"mock\">\n\t\t\t<c path=\"hunit.mock.IMock\"/>\n\t\t\t<c path=\"hunit.mock.MockData\"/>\n\t\t</f>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</getMockData>\n\t<match public=\"1\" set=\"accessor\"><c path=\"hunit.match.MatchFactory\"/></match>\n\t<assert public=\"1\" set=\"accessor\"><c path=\"hunit.assert.AssertFactory\"/></assert>\n\t<__hu_state public=\"1\">\n\t\t<t path=\"Null\"><c path=\"hunit.TestState\"/></t>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</__hu_state>\n\t<setupTestCase public=\"1\" set=\"method\" line=\"75\"><f a=\"\"><x path=\"Void\"/></f></setupTestCase>\n\t<setup public=\"1\" set=\"method\" line=\"84\"><f a=\"\"><x path=\"Void\"/></f></setup>\n\t<tearDown public=\"1\" set=\"method\" line=\"94\"><f a=\"\"><x path=\"Void\"/></f></tearDown>\n\t<tearDownTestCase public=\"1\" set=\"method\" line=\"104\"><f a=\"\"><x path=\"Void\"/></f></tearDownTestCase>\n\t<expectException public=\"1\" params=\"T\" set=\"method\" line=\"173\">\n\t\t<f a=\"?match:?pos\" v=\"null:\">\n\t\t\t<x path=\"hunit.Match\"><c path=\"expectException.T\"/></x>\n\t\t\t<t path=\"haxe.PosInfos\"/>\n\t\t\t<x path=\"Void\"/>\n\t\t</f>\n\t\t<meta><m n=\":value\"><e>{match:null}</e></m></meta>\n\t</expectException>\n\t<notice public=\"1\" set=\"method\" line=\"187\"><f a=\"msg:?pos\">\n\t<c path=\"String\"/>\n\t<t path=\"haxe.PosInfos\"/>\n\t<x path=\"Void\"/>\n</f></notice>\n\t<set_match set=\"method\" line=\"198\">\n\t\t<f a=\"match\">\n\t\t\t<c path=\"hunit.match.MatchFactory\"/>\n\t\t\t<c path=\"hunit.match.MatchFactory\"/>\n\t\t</f>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</set_match>\n\t<set_assert set=\"method\" line=\"213\">\n\t\t<f a=\"assert\">\n\t\t\t<c path=\"hunit.assert.AssertFactory\"/>\n\t\t\t<c path=\"hunit.assert.AssertFactory\"/>\n\t\t</f>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</set_assert>\n\t<new public=\"1\" set=\"method\" line=\"64\"><f a=\"\"><x path=\"Void\"/></f></new>\n\t<meta>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t\t<m n=\":access\"><e>hunit.mock.IMock</e></m>\n\t\t<m n=\":rtti\"/>\n\t\t<m n=\":keepSub\"/>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t</meta>\n</class>";
		}
		#line default
		
		public TestCase(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public TestCase() {
			#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			global::hunit.TestCase.__hx_ctor_hunit_TestCase(this);
		}
		#line default
		
		public static void __hx_ctor_hunit_TestCase(global::hunit.TestCase __temp_me12) {
			#line 66 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			__temp_me12.set_match(new global::hunit.match.MatchFactory());
			__temp_me12.set_assert(new global::hunit.assert.AssertFactory(((global::hunit.TestCase) (__temp_me12) )));
		}
		#line default
		
		public static string __rtti;
		
		[global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
		public static global::hunit.mock.MockData getMockData(global::hunit.mock.IMock mock) {
			#line 56 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			return ((global::hunit.mock.MockData) (global::haxe.lang.Runtime.getField(mock, "__hu_mock__", 853968700, true)) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			return new global::hunit.TestCase(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			return new global::hunit.TestCase();
		}
		#line default
		
		public global::hunit.match.MatchFactory match;
		
		public global::hunit.assert.AssertFactory assert;
		
		[global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
		public global::hunit.TestState __hu_state;
		
		public virtual void setupTestCase() {
		}
		
		
		public virtual void setup() {
		}
		
		
		public virtual void tearDown() {
		}
		
		
		public virtual void tearDownTestCase() {
		}
		
		
		public virtual void expectException<T>(object match, object pos) {
			#line 175 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			if (( match == null )) {
				#line 176 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
				match = new global::hunit.match.AnyMatch<T>(null, null);
			}
			
			#line 179 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			this.__hu_state.set_expectedException(new global::hunit.exceptions.ExpectedExceptionData(((global::hunit.match.Match) (match) ), pos));
		}
		#line default
		
		public virtual void notice(string msg, object pos) {
			#line 189 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			this.__hu_state.notice(msg, pos);
		}
		#line default
		
		[global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
		public virtual global::hunit.match.MatchFactory set_match(global::hunit.match.MatchFactory match) {
			unchecked {
				#line 200 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
				if (( this.match != null )) {
					#line 201 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.InvalidTestException("Matcher factory already set", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"set_match", "hunit.TestCase", "TestCase.hx"}, new int[]{1981972957}, new double[]{((double) (201) )})));
				}
				
				#line 204 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
				return this.match = match;
			}
			#line default
		}
		
		
		[global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
		public virtual global::hunit.assert.AssertFactory set_assert(global::hunit.assert.AssertFactory assert) {
			unchecked {
				#line 215 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
				if (( this.assert != null )) {
					#line 216 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.InvalidTestException("Assertion factory already set", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"set_assert", "hunit.TestCase", "TestCase.hx"}, new int[]{1981972957}, new double[]{((double) (216) )})));
				}
				
				#line 219 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
				return this.assert = assert;
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
				switch (hash) {
					case 1626919743:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						this.__hu_state = ((global::hunit.TestState) (@value) );
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return @value;
					}
					
					
					case 1275283142:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							this.set_assert(((global::hunit.assert.AssertFactory) (@value) ));
							#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							this.assert = ((global::hunit.assert.AssertFactory) (@value) );
							#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							return @value;
						}
						
					}
					
					
					case 52644165:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							this.set_match(((global::hunit.match.MatchFactory) (@value) ));
							#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							this.match = ((global::hunit.match.MatchFactory) (@value) );
							#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							return @value;
						}
						
					}
					
					
					default:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
				switch (hash) {
					case 1074287875:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_assert", 1074287875)) );
					}
					
					
					case 706580904:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_match", 706580904)) );
					}
					
					
					case 834197528:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "notice", 834197528)) );
					}
					
					
					case 1618018102:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "expectException", 1618018102)) );
					}
					
					
					case 1488845414:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "tearDownTestCase", 1488845414)) );
					}
					
					
					case 1818678820:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "tearDown", 1818678820)) );
					}
					
					
					case 2049945213:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setup", 2049945213)) );
					}
					
					
					case 1963742143:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setupTestCase", 1963742143)) );
					}
					
					
					case 1626919743:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return this.__hu_state;
					}
					
					
					case 1275283142:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return this.assert;
					}
					
					
					case 52644165:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return this.match;
					}
					
					
					default:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
				switch (hash) {
					case 1074287875:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return this.set_assert(((global::hunit.assert.AssertFactory) (dynargs[0]) ));
					}
					
					
					case 706580904:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return this.set_match(((global::hunit.match.MatchFactory) (dynargs[0]) ));
					}
					
					
					case 834197528:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						this.notice(global::haxe.lang.Runtime.toString(dynargs[0]), dynargs[1]);
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						break;
					}
					
					
					case 1618018102:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						this.expectException<object>(dynargs[0], dynargs[1]);
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						break;
					}
					
					
					case 1488845414:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						this.tearDownTestCase();
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						break;
					}
					
					
					case 1818678820:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						this.tearDown();
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						break;
					}
					
					
					case 2049945213:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						this.setup();
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						break;
					}
					
					
					case 1963742143:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						this.setupTestCase();
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						break;
					}
					
					
					default:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			baseArr.push("__hu_state");
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			baseArr.push("assert");
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			baseArr.push("match");
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			{
				#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


