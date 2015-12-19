package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class ChildWidgetNodeTest extends hunit.TestCase
{
	static
	{
		//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		{
			//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			java.lang.Object __temp_odecl2 = null;
			//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			{
				//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
				java.lang.Object __temp_odecl1 = new haxe.lang.DynamicObject(new java.lang.String[]{"test"}, new java.lang.Object[]{null}, new java.lang.String[]{}, new double[]{});
				//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
				__temp_odecl2 = new haxe.lang.DynamicObject(new java.lang.String[]{"childWidgetNode"}, new java.lang.Object[]{__temp_odecl1}, new java.lang.String[]{}, new double[]{});
			}
			
			//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			haxe.root.ChildWidgetNodeTest.__meta__ = new haxe.lang.DynamicObject(new java.lang.String[]{"fields"}, new java.lang.Object[]{__temp_odecl2}, new java.lang.String[]{}, new double[]{});
		}
		
		//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		haxe.root.ChildWidgetNodeTest.__rtti = "<class path=\"ChildWidgetNodeTest\" params=\"\">\n\t<extends path=\"hunit.TestCase\"/>\n\t<childWidgetNode public=\"1\" set=\"method\" line=\"16\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</childWidgetNode>\n\t<meta>\n\t\t<m n=\":directlyUsed\"/>\n\t\t<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t</meta>\n</class>";
	}
	
	public ChildWidgetNodeTest(haxe.lang.EmptyObject empty)
	{
		//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public ChildWidgetNodeTest()
	{
		//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		haxe.root.ChildWidgetNodeTest.__hx_ctor__ChildWidgetNodeTest(this);
	}
	
	
	public static void __hx_ctor__ChildWidgetNodeTest(haxe.root.ChildWidgetNodeTest __temp_me9)
	{
		//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		hunit.TestCase.__hx_ctor_hunit_TestCase(__temp_me9);
	}
	
	
	public static java.lang.Object __meta__;
	
	public static java.lang.String __rtti;
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		return new haxe.root.ChildWidgetNodeTest(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		return new haxe.root.ChildWidgetNodeTest();
	}
	
	
	public void childWidgetNode()
	{
		//line 18 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		haxe.root.Child root = new haxe.root.Child();
		//line 19 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		sx.widgets.Widget level1 = root.get_level1();
		//line 20 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		sx.widgets.Widget level2 = root.get_level2();
		//line 22 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		this._assert.equal(level1, level2.get_parent(), null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"ChildWidgetNodeTest", "ChildWidgetNodeTest.hx", "childWidgetNode"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (22) )) )}));
		//line 23 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		this._assert.equal(((sx.widgets.Widget) (root) ), level1.get_parent(), null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"ChildWidgetNodeTest", "ChildWidgetNodeTest.hx", "childWidgetNode"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (23) )) )}));
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		{
			//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			switch (field.hashCode())
			{
				case 578345122:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
					if (field.equals("childWidgetNode")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "childWidgetNode")) );
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
					break;
				}
				
				
			}
			
			//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		{
			//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			switch (field.hashCode())
			{
				case 578345122:
				{
					//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
					if (field.equals("childWidgetNode")) 
					{
						//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
						this.childWidgetNode();
					}
					
					//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
					break;
				}
				
				
			}
			
			//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 12 "/home/alex/Work/HaXe/sx2-hml/tests/src/ChildWidgetNodeTest.hx"
		return null;
	}
	
	
}


