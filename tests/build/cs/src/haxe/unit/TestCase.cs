
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.unit {
	public class TestCase : global::haxe.lang.HxObject {
		
		public TestCase(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public TestCase() {
			#line 30 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			global::haxe.unit.TestCase.__hx_ctor_haxe_unit_TestCase(this);
		}
		#line default
		
		public static void __hx_ctor_haxe_unit_TestCase(global::haxe.unit.TestCase __temp_me61) {
		}
		
		
		public static new object __hx_createEmpty() {
			#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			return new global::haxe.unit.TestCase(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			return new global::haxe.unit.TestCase();
		}
		#line default
		
		public global::haxe.unit.TestStatus currentTest;
		
		public virtual void setup() {
		}
		
		
		public virtual void tearDown() {
		}
		
		
		public virtual void print(object v) {
			#line 40 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			global::haxe.unit.TestRunner.print.__hx_invoke1_o(default(double), v);
		}
		#line default
		
		public virtual void assertTrue(bool b, object c) {
			#line 44 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			this.currentTest.done = true;
			if (( b != true )) {
				#line 46 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
				this.currentTest.success = false;
				this.currentTest.error = "expected true but was false";
				this.currentTest.posInfos = c;
				throw global::haxe.lang.HaxeException.wrap(this.currentTest);
			}
			
		}
		#line default
		
		public virtual void assertFalse(bool b, object c) {
			#line 54 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			this.currentTest.done = true;
			if (( b == true )) {
				#line 56 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
				this.currentTest.success = false;
				this.currentTest.error = "expected false but was true";
				this.currentTest.posInfos = c;
				throw global::haxe.lang.HaxeException.wrap(this.currentTest);
			}
			
		}
		#line default
		
		public virtual void assertEquals<T>(T expected, T actual, object c) {
			#line 64 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			this.currentTest.done = true;
			if (( ! (global::haxe.lang.Runtime.eq(actual, expected)) )) {
				#line 66 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
				this.currentTest.success = false;
				this.currentTest.error = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("expected \'", global::Std.@string(expected)), "\' but was \'"), global::Std.@string(actual)), "\'");
				this.currentTest.posInfos = c;
				throw global::haxe.lang.HaxeException.wrap(this.currentTest);
			}
			
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
				switch (hash) {
					case 93036843:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						this.currentTest = ((global::haxe.unit.TestStatus) (@value) );
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return @value;
					}
					
					
					default:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
				switch (hash) {
					case 752681381:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "assertEquals", 752681381)) );
					}
					
					
					case 2105872637:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "assertFalse", 2105872637)) );
					}
					
					
					case 1330771252:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "assertTrue", 1330771252)) );
					}
					
					
					case 1217091629:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "print", 1217091629)) );
					}
					
					
					case 1818678820:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "tearDown", 1818678820)) );
					}
					
					
					case 2049945213:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setup", 2049945213)) );
					}
					
					
					case 93036843:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return this.currentTest;
					}
					
					
					default:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
				switch (hash) {
					case 752681381:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						this.assertEquals<object>(dynargs[0], dynargs[1], dynargs[2]);
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						break;
					}
					
					
					case 2105872637:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						this.assertFalse(global::haxe.lang.Runtime.toBool(dynargs[0]), dynargs[1]);
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						break;
					}
					
					
					case 1330771252:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						this.assertTrue(global::haxe.lang.Runtime.toBool(dynargs[0]), dynargs[1]);
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						break;
					}
					
					
					case 1217091629:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						this.print(dynargs[0]);
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						break;
					}
					
					
					case 1818678820:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						this.tearDown();
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						break;
					}
					
					
					case 2049945213:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						this.setup();
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						break;
					}
					
					
					default:
					{
						#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			baseArr.push("currentTest");
			#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			{
				#line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


