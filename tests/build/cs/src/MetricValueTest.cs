
#pragma warning disable 109, 114, 219, 429, 168, 162
public class MetricValueTest : global::hunit.TestCase {
	
	static MetricValueTest() {
		#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		{
			#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			object __temp_odecl4 = null;
			#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			{
				#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
				object __temp_odecl1 = new global::haxe.lang.DynamicObject(new int[]{1291438162}, new object[]{null}, new int[]{}, new double[]{});
				#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
				object __temp_odecl2 = new global::haxe.lang.DynamicObject(new int[]{1291438162}, new object[]{null}, new int[]{}, new double[]{});
				#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
				object __temp_odecl3 = new global::haxe.lang.DynamicObject(new int[]{1291438162}, new object[]{null}, new int[]{}, new double[]{});
				#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
				__temp_odecl4 = new global::haxe.lang.DynamicObject(new int[]{4996427, 5591841, 1118029446}, new object[]{__temp_odecl1, __temp_odecl3, __temp_odecl2}, new int[]{}, new double[]{});
			}
			
			#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			global::MetricValueTest.__meta__ = new global::haxe.lang.DynamicObject(new int[]{9342585}, new object[]{__temp_odecl4}, new int[]{}, new double[]{});
		}
		
		#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		global::MetricValueTest.__rtti = "<class path=\"MetricValueTest\" params=\"\">\n\t<extends path=\"hunit.TestCase\"/>\n\t<dip public=\"1\" set=\"method\" line=\"15\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</dip>\n\t<pixel public=\"1\" set=\"method\" line=\"24\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</pixel>\n\t<pct public=\"1\" set=\"method\" line=\"33\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</pct>\n\t<meta>\n\t\t<m n=\":directlyUsed\"/>\n\t\t<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t</meta>\n</class>";
	}
	#line default
	
	public MetricValueTest(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
	}
	
	
	public MetricValueTest() : base(global::haxe.lang.EmptyObject.EMPTY) {
		#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		global::MetricValueTest.__hx_ctor__MetricValueTest(this);
	}
	#line default
	
	public static void __hx_ctor__MetricValueTest(global::MetricValueTest __temp_me22) {
		#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		global::hunit.TestCase.__hx_ctor_hunit_TestCase(__temp_me22);
	}
	#line default
	
	public static object __meta__;
	
	public static new string __rtti;
	
	public static new object __hx_createEmpty() {
		#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		return new global::MetricValueTest(global::haxe.lang.EmptyObject.EMPTY);
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		return new global::MetricValueTest();
	}
	#line default
	
	public virtual void dip() {
		unchecked {
			#line 17 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			global::Metric ui = new global::Metric();
			#line 19 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			this.assert.equal<object>(((string) ("dip") ), ui.get_dips().get_left().units, null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"dip", "MetricValueTest", "MetricValueTest.hx"}, new int[]{1981972957}, new double[]{((double) (19) )}));
		}
		#line default
	}
	
	
	public virtual void pixel() {
		unchecked {
			#line 26 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			global::Metric ui = new global::Metric();
			#line 28 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			this.assert.equal<object>(((string) ("px") ), ui.get_pixels().get_left().units, null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"pixel", "MetricValueTest", "MetricValueTest.hx"}, new int[]{1981972957}, new double[]{((double) (28) )}));
		}
		#line default
	}
	
	
	public virtual void pct() {
		unchecked {
			#line 35 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			global::Metric ui = new global::Metric();
			#line 37 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			this.assert.equal<object>(((string) ("pct") ), ui.get_percents().get_left().units, null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"pct", "MetricValueTest", "MetricValueTest.hx"}, new int[]{1981972957}, new double[]{((double) (37) )}));
		}
		#line default
	}
	
	
	public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
		unchecked {
			#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			switch (hash) {
				case 5591841:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "pct", 5591841)) );
				}
				
				
				case 1118029446:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "pixel", 1118029446)) );
				}
				
				
				case 4996427:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "dip", 4996427)) );
				}
				
				
				default:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
		unchecked {
			#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			switch (hash) {
				case 5591841:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					this.pct();
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					break;
				}
				
				
				case 1118029446:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					this.pixel();
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					break;
				}
				
				
				case 4996427:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					this.dip();
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					break;
				}
				
				
				default:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					return base.__hx_invokeField(field, hash, dynargs);
				}
				
			}
			
			#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			return null;
		}
		#line default
	}
	
	
}


