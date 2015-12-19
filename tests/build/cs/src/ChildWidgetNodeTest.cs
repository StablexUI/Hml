
#pragma warning disable 109, 114, 219, 429, 168, 162
public class ChildWidgetNodeTest : global::hunit.TestCase {
	
	static ChildWidgetNodeTest() {
		#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		{
			#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			object __temp_odecl2 = null;
			#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			{
				#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
				object __temp_odecl1 = new global::haxe.lang.DynamicObject(new int[]{1291438162}, new object[]{null}, new int[]{}, new double[]{});
				#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
				__temp_odecl2 = new global::haxe.lang.DynamicObject(new int[]{887382178}, new object[]{__temp_odecl1}, new int[]{}, new double[]{});
			}
			
			#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			global::ChildWidgetNodeTest.__meta__ = new global::haxe.lang.DynamicObject(new int[]{9342585}, new object[]{__temp_odecl2}, new int[]{}, new double[]{});
		}
		
		#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		global::ChildWidgetNodeTest.__rtti = "<class path=\"ChildWidgetNodeTest\" params=\"\">\n\t<extends path=\"hunit.TestCase\"/>\n\t<childWidgetNode public=\"1\" set=\"method\" line=\"16\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</childWidgetNode>\n\t<meta>\n\t\t<m n=\":directlyUsed\"/>\n\t\t<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t</meta>\n</class>";
	}
	#line default
	
	public ChildWidgetNodeTest(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
	}
	
	
	public ChildWidgetNodeTest() : base(global::haxe.lang.EmptyObject.EMPTY) {
		#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		global::ChildWidgetNodeTest.__hx_ctor__ChildWidgetNodeTest(this);
	}
	#line default
	
	public static void __hx_ctor__ChildWidgetNodeTest(global::ChildWidgetNodeTest __temp_me13) {
		#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		global::hunit.TestCase.__hx_ctor_hunit_TestCase(__temp_me13);
	}
	#line default
	
	public static object __meta__;
	
	public static new string __rtti;
	
	public static new object __hx_createEmpty() {
		#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		return new global::ChildWidgetNodeTest(global::haxe.lang.EmptyObject.EMPTY);
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		return new global::ChildWidgetNodeTest();
	}
	#line default
	
	public virtual void childWidgetNode() {
		unchecked {
			#line 18 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			global::Child root = new global::Child();
			global::sx.widgets.Widget level1 = root.get_level1();
			global::sx.widgets.Widget level2 = root.get_level2();
			#line 22 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			this.assert.equal<object>(level1, level2.get_parent(), null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"childWidgetNode", "ChildWidgetNodeTest", "ChildWidgetNodeTest.hx"}, new int[]{1981972957}, new double[]{((double) (22) )}));
			this.assert.equal<object>(((global::sx.widgets.Widget) (root) ), level1.get_parent(), null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"childWidgetNode", "ChildWidgetNodeTest", "ChildWidgetNodeTest.hx"}, new int[]{1981972957}, new double[]{((double) (23) )}));
		}
		#line default
	}
	
	
	public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
		unchecked {
			#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			switch (hash) {
				case 887382178:
				{
					#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "childWidgetNode", 887382178)) );
				}
				
				
				default:
				{
					#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
					return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
		unchecked {
			#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			switch (hash) {
				case 887382178:
				{
					#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
					this.childWidgetNode();
					#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
					break;
				}
				
				
				default:
				{
					#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
					return base.__hx_invokeField(field, hash, dynargs);
				}
				
			}
			
			#line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			return null;
		}
		#line default
	}
	
	
}


