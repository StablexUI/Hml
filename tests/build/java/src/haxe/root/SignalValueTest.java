package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class SignalValueTest extends hunit.TestCase
{
	static
	{
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			java.lang.Object __temp_odecl4 = null;
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			{
				//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
				java.lang.Object __temp_odecl1 = new haxe.lang.DynamicObject(new java.lang.String[]{"test"}, new java.lang.Object[]{null}, new java.lang.String[]{}, new double[]{});
				//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
				java.lang.Object __temp_odecl2 = new haxe.lang.DynamicObject(new java.lang.String[]{"test"}, new java.lang.Object[]{null}, new java.lang.String[]{}, new double[]{});
				//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
				java.lang.Object __temp_odecl3 = new haxe.lang.DynamicObject(new java.lang.String[]{"test"}, new java.lang.Object[]{null}, new java.lang.String[]{}, new double[]{});
				//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
				__temp_odecl4 = new haxe.lang.DynamicObject(new java.lang.String[]{"closureWithBlockBody", "closureWithSingleExprBody", "simple"}, new java.lang.Object[]{__temp_odecl2, __temp_odecl3, __temp_odecl1}, new java.lang.String[]{}, new double[]{});
			}
			
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			haxe.root.SignalValueTest.__meta__ = new haxe.lang.DynamicObject(new java.lang.String[]{"fields"}, new java.lang.Object[]{__temp_odecl4}, new java.lang.String[]{}, new double[]{});
		}
		
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		haxe.root.SignalValueTest.__rtti = "<class path=\"SignalValueTest\" params=\"\">\n\t<extends path=\"hunit.TestCase\"/>\n\t<simple public=\"1\" set=\"method\" line=\"15\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</simple>\n\t<closureWithBlockBody public=\"1\" set=\"method\" line=\"26\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</closureWithBlockBody>\n\t<closureWithSingleExprBody public=\"1\" set=\"method\" line=\"37\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</closureWithSingleExprBody>\n\t<meta>\n\t\t<m n=\":directlyUsed\"/>\n\t\t<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t</meta>\n</class>";
	}
	
	public SignalValueTest(haxe.lang.EmptyObject empty)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public SignalValueTest()
	{
		//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		haxe.root.SignalValueTest.__hx_ctor__SignalValueTest(this);
	}
	
	
	public static void __hx_ctor__SignalValueTest(haxe.root.SignalValueTest __temp_me20)
	{
		//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		hunit.TestCase.__hx_ctor_hunit_TestCase(__temp_me20);
	}
	
	
	public static java.lang.Object __meta__;
	
	public static java.lang.String __rtti;
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		return new haxe.root.SignalValueTest(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		return new haxe.root.SignalValueTest();
	}
	
	
	public void simple()
	{
		//line 17 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		haxe.root.Signal ui = new haxe.root.Signal();
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( ( ui.get_simple().get_onClick() != null ) && ( ui.get_simple().get_onClick().__listeners.length > 0 ) )) 
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (ui.get_simple().get_onClick().__listenersInUse) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g = 0;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = ui.get_simple().get_onClick().__listeners;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g < _g1.length ))
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener.__hx_invoke3_o(0.0, ui.get_simple(), 0.0, ui.get_simple(), ((double) (-1) ), haxe.lang.Runtime.undefined);
					}
					
				}
				
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				ui.get_simple().get_onClick().__listenersInUse = true;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g2 = 0;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = ui.get_simple().get_onClick().__listeners;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g2 < _g11.length ))
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g2;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener1.__hx_invoke3_o(0.0, ui.get_simple(), 0.0, ui.get_simple(), ((double) (-1) ), haxe.lang.Runtime.undefined);
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				ui.get_simple().get_onClick().__listenersInUse = false;
			}
			
		}
		
		//line 21 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		this._assert.isTrue(ui.get_simpleClicked(), null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"SignalValueTest", "SignalValueTest.hx", "simple"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (21) )) )}));
	}
	
	
	public void closureWithBlockBody()
	{
		//line 28 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		haxe.root.Signal ui = new haxe.root.Signal();
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( ( ui.get_closureBlockBody().get_onClick() != null ) && ( ui.get_closureBlockBody().get_onClick().__listeners.length > 0 ) )) 
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (ui.get_closureBlockBody().get_onClick().__listenersInUse) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g = 0;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = ui.get_closureBlockBody().get_onClick().__listeners;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g < _g1.length ))
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener.__hx_invoke3_o(0.0, ui.get_closureBlockBody(), 0.0, ui.get_closureBlockBody(), ((double) (-1) ), haxe.lang.Runtime.undefined);
					}
					
				}
				
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				ui.get_closureBlockBody().get_onClick().__listenersInUse = true;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g2 = 0;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = ui.get_closureBlockBody().get_onClick().__listeners;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g2 < _g11.length ))
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g2;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener1.__hx_invoke3_o(0.0, ui.get_closureBlockBody(), 0.0, ui.get_closureBlockBody(), ((double) (-1) ), haxe.lang.Runtime.undefined);
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				ui.get_closureBlockBody().get_onClick().__listenersInUse = false;
			}
			
		}
		
		//line 32 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		this._assert.isTrue(ui.get_closureBlockClicked(), null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"SignalValueTest", "SignalValueTest.hx", "closureWithBlockBody"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (32) )) )}));
	}
	
	
	public void closureWithSingleExprBody()
	{
		//line 39 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		haxe.root.Signal ui = new haxe.root.Signal();
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( ( ui.get_closureSingleExpr().get_onClick() != null ) && ( ui.get_closureSingleExpr().get_onClick().__listeners.length > 0 ) )) 
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (ui.get_closureSingleExpr().get_onClick().__listenersInUse) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g = 0;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = ui.get_closureSingleExpr().get_onClick().__listeners;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g < _g1.length ))
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener.__hx_invoke3_o(0.0, ui.get_closureSingleExpr(), 0.0, ui.get_closureSingleExpr(), ((double) (-1) ), haxe.lang.Runtime.undefined);
					}
					
				}
				
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				ui.get_closureSingleExpr().get_onClick().__listenersInUse = true;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g2 = 0;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = ui.get_closureSingleExpr().get_onClick().__listeners;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g2 < _g11.length ))
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g2;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener1.__hx_invoke3_o(0.0, ui.get_closureSingleExpr(), 0.0, ui.get_closureSingleExpr(), ((double) (-1) ), haxe.lang.Runtime.undefined);
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				ui.get_closureSingleExpr().get_onClick().__listenersInUse = false;
			}
			
		}
		
		//line 43 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		this._assert.isTrue(ui.get_closureSingleExprClicked(), null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"SignalValueTest", "SignalValueTest.hx", "closureWithSingleExprBody"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (43) )) )}));
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			switch (field.hashCode())
			{
				case 330595744:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					if (field.equals("closureWithSingleExprBody")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "closureWithSingleExprBody")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					break;
				}
				
				
				case -902286926:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					if (field.equals("simple")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "simple")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					break;
				}
				
				
				case -1641238738:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					if (field.equals("closureWithBlockBody")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "closureWithBlockBody")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			switch (field.hashCode())
			{
				case 330595744:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					if (field.equals("closureWithSingleExprBody")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
						this.closureWithSingleExprBody();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					break;
				}
				
				
				case -902286926:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					if (field.equals("simple")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
						this.simple();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					break;
				}
				
				
				case -1641238738:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					if (field.equals("closureWithBlockBody")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
						this.closureWithBlockBody();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		return null;
	}
	
	
}


