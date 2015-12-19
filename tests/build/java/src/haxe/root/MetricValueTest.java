package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class MetricValueTest extends hunit.TestCase
{
	static
	{
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			java.lang.Object __temp_odecl4 = null;
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			{
				//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
				java.lang.Object __temp_odecl1 = new haxe.lang.DynamicObject(new java.lang.String[]{"test"}, new java.lang.Object[]{null}, new java.lang.String[]{}, new double[]{});
				//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
				java.lang.Object __temp_odecl2 = new haxe.lang.DynamicObject(new java.lang.String[]{"test"}, new java.lang.Object[]{null}, new java.lang.String[]{}, new double[]{});
				//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
				java.lang.Object __temp_odecl3 = new haxe.lang.DynamicObject(new java.lang.String[]{"test"}, new java.lang.Object[]{null}, new java.lang.String[]{}, new double[]{});
				//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
				__temp_odecl4 = new haxe.lang.DynamicObject(new java.lang.String[]{"dip", "pct", "pixel"}, new java.lang.Object[]{__temp_odecl1, __temp_odecl3, __temp_odecl2}, new java.lang.String[]{}, new double[]{});
			}
			
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			haxe.root.MetricValueTest.__meta__ = new haxe.lang.DynamicObject(new java.lang.String[]{"fields"}, new java.lang.Object[]{__temp_odecl4}, new java.lang.String[]{}, new double[]{});
		}
		
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		haxe.root.MetricValueTest.__rtti = "<class path=\"MetricValueTest\" params=\"\">\n\t<extends path=\"hunit.TestCase\"/>\n\t<dip public=\"1\" set=\"method\" line=\"15\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</dip>\n\t<pixel public=\"1\" set=\"method\" line=\"24\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</pixel>\n\t<pct public=\"1\" set=\"method\" line=\"33\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</pct>\n\t<meta>\n\t\t<m n=\":directlyUsed\"/>\n\t\t<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t</meta>\n</class>";
	}
	
	public MetricValueTest(haxe.lang.EmptyObject empty)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public MetricValueTest()
	{
		//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		haxe.root.MetricValueTest.__hx_ctor__MetricValueTest(this);
	}
	
	
	public static void __hx_ctor__MetricValueTest(haxe.root.MetricValueTest __temp_me17)
	{
		//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		hunit.TestCase.__hx_ctor_hunit_TestCase(__temp_me17);
	}
	
	
	public static java.lang.Object __meta__;
	
	public static java.lang.String __rtti;
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		return new haxe.root.MetricValueTest(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		return new haxe.root.MetricValueTest();
	}
	
	
	public void dip()
	{
		//line 17 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		haxe.root.Metric ui = new haxe.root.Metric();
		//line 19 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		this._assert.equal(haxe.lang.Runtime.toString("dip"), ui.get_dips().get_left().units, null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"MetricValueTest", "MetricValueTest.hx", "dip"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (19) )) )}));
	}
	
	
	public void pixel()
	{
		//line 26 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		haxe.root.Metric ui = new haxe.root.Metric();
		//line 28 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		this._assert.equal(haxe.lang.Runtime.toString("px"), ui.get_pixels().get_left().units, null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"MetricValueTest", "MetricValueTest.hx", "pixel"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (28) )) )}));
	}
	
	
	public void pct()
	{
		//line 35 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		haxe.root.Metric ui = new haxe.root.Metric();
		//line 37 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		this._assert.equal(haxe.lang.Runtime.toString("pct"), ui.get_percents().get_left().units, null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"MetricValueTest", "MetricValueTest.hx", "pct"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (37) )) )}));
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			switch (field.hashCode())
			{
				case 110817:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					if (field.equals("pct")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "pct")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					break;
				}
				
				
				case 99467:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					if (field.equals("dip")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "dip")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					break;
				}
				
				
				case 106680966:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					if (field.equals("pixel")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "pixel")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			switch (field.hashCode())
			{
				case 110817:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					if (field.equals("pct")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
						this.pct();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					break;
				}
				
				
				case 99467:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					if (field.equals("dip")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
						this.dip();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					break;
				}
				
				
				case 106680966:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					if (field.equals("pixel")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
						this.pixel();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/MetricValueTest.hx"
		return null;
	}
	
	
}


