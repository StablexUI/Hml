
#pragma warning disable 109, 114, 219, 429, 168, 162
public class SignalValueTest : global::hunit.TestCase {
	
	static SignalValueTest() {
		#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		{
			#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			object __temp_odecl4 = null;
			#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			{
				#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
				object __temp_odecl1 = new global::haxe.lang.DynamicObject(new int[]{1291438162}, new object[]{null}, new int[]{}, new double[]{});
				#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
				object __temp_odecl2 = new global::haxe.lang.DynamicObject(new int[]{1291438162}, new object[]{null}, new int[]{}, new double[]{});
				#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
				object __temp_odecl3 = new global::haxe.lang.DynamicObject(new int[]{1291438162}, new object[]{null}, new int[]{}, new double[]{});
				#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
				__temp_odecl4 = new global::haxe.lang.DynamicObject(new int[]{567161376, 947848242, 1311965486}, new object[]{__temp_odecl3, __temp_odecl1, __temp_odecl2}, new int[]{}, new double[]{});
			}
			
			#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			global::SignalValueTest.__meta__ = new global::haxe.lang.DynamicObject(new int[]{9342585}, new object[]{__temp_odecl4}, new int[]{}, new double[]{});
		}
		
		#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		global::SignalValueTest.__rtti = "<class path=\"SignalValueTest\" params=\"\">\n\t<extends path=\"hunit.TestCase\"/>\n\t<simple public=\"1\" set=\"method\" line=\"15\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</simple>\n\t<closureWithBlockBody public=\"1\" set=\"method\" line=\"26\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</closureWithBlockBody>\n\t<closureWithSingleExprBody public=\"1\" set=\"method\" line=\"37\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</closureWithSingleExprBody>\n\t<meta>\n\t\t<m n=\":directlyUsed\"/>\n\t\t<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t</meta>\n</class>";
	}
	#line default
	
	public SignalValueTest(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
	}
	
	
	public SignalValueTest() : base(global::haxe.lang.EmptyObject.EMPTY) {
		#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		global::SignalValueTest.__hx_ctor__SignalValueTest(this);
	}
	#line default
	
	public static void __hx_ctor__SignalValueTest(global::SignalValueTest __temp_me25) {
		#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		global::hunit.TestCase.__hx_ctor_hunit_TestCase(__temp_me25);
	}
	#line default
	
	public static object __meta__;
	
	public static new string __rtti;
	
	public static new object __hx_createEmpty() {
		#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		return new global::SignalValueTest(global::haxe.lang.EmptyObject.EMPTY);
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
		return new global::SignalValueTest();
	}
	#line default
	
	public virtual void simple() {
		unchecked {
			#line 17 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			global::Signal ui = new global::Signal();
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( ui.get_simple().get_onClick() != null ) && ( ui.get_simple().get_onClick().__listeners.length > 0 ) )) {
				#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (ui.get_simple().get_onClick().__listenersInUse) {
					#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g1 = ui.get_simple().get_onClick().__listeners;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g < _g1.length )) {
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener.__hx_invoke3_o(default(double), ui.get_simple(), default(double), ui.get_simple(), ((double) (-1) ), global::haxe.lang.Runtime.undefined);
						}
						
					}
					
					#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					bool __temp_expr1 = false;
				}
				else {
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					ui.get_simple().get_onClick().__listenersInUse = true;
					{
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g11 = ui.get_simple().get_onClick().__listeners;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g2 < _g11.length )) {
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g2;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener1.__hx_invoke3_o(default(double), ui.get_simple(), default(double), ui.get_simple(), ((double) (-1) ), global::haxe.lang.Runtime.undefined);
						}
						
					}
					
					#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					ui.get_simple().get_onClick().__listenersInUse = false;
				}
				
			}
			
			#line 21 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			this.assert.isTrue(ui.get_simpleClicked(), null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"simple", "SignalValueTest", "SignalValueTest.hx"}, new int[]{1981972957}, new double[]{((double) (21) )}));
		}
		#line default
	}
	
	
	public virtual void closureWithBlockBody() {
		unchecked {
			#line 28 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			global::Signal ui = new global::Signal();
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( ui.get_closureBlockBody().get_onClick() != null ) && ( ui.get_closureBlockBody().get_onClick().__listeners.length > 0 ) )) {
				#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (ui.get_closureBlockBody().get_onClick().__listenersInUse) {
					#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g1 = ui.get_closureBlockBody().get_onClick().__listeners;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g < _g1.length )) {
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener.__hx_invoke3_o(default(double), ui.get_closureBlockBody(), default(double), ui.get_closureBlockBody(), ((double) (-1) ), global::haxe.lang.Runtime.undefined);
						}
						
					}
					
					#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					bool __temp_expr1 = false;
				}
				else {
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					ui.get_closureBlockBody().get_onClick().__listenersInUse = true;
					{
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g11 = ui.get_closureBlockBody().get_onClick().__listeners;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g2 < _g11.length )) {
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g2;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener1.__hx_invoke3_o(default(double), ui.get_closureBlockBody(), default(double), ui.get_closureBlockBody(), ((double) (-1) ), global::haxe.lang.Runtime.undefined);
						}
						
					}
					
					#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					ui.get_closureBlockBody().get_onClick().__listenersInUse = false;
				}
				
			}
			
			#line 32 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			this.assert.isTrue(ui.get_closureBlockClicked(), null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"closureWithBlockBody", "SignalValueTest", "SignalValueTest.hx"}, new int[]{1981972957}, new double[]{((double) (32) )}));
		}
		#line default
	}
	
	
	public virtual void closureWithSingleExprBody() {
		unchecked {
			#line 39 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			global::Signal ui = new global::Signal();
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( ui.get_closureSingleExpr().get_onClick() != null ) && ( ui.get_closureSingleExpr().get_onClick().__listeners.length > 0 ) )) {
				#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (ui.get_closureSingleExpr().get_onClick().__listenersInUse) {
					#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g1 = ui.get_closureSingleExpr().get_onClick().__listeners;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g < _g1.length )) {
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener.__hx_invoke3_o(default(double), ui.get_closureSingleExpr(), default(double), ui.get_closureSingleExpr(), ((double) (-1) ), global::haxe.lang.Runtime.undefined);
						}
						
					}
					
					#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					bool __temp_expr1 = false;
				}
				else {
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					ui.get_closureSingleExpr().get_onClick().__listenersInUse = true;
					{
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g11 = ui.get_closureSingleExpr().get_onClick().__listeners;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g2 < _g11.length )) {
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g2;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener1.__hx_invoke3_o(default(double), ui.get_closureSingleExpr(), default(double), ui.get_closureSingleExpr(), ((double) (-1) ), global::haxe.lang.Runtime.undefined);
						}
						
					}
					
					#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					ui.get_closureSingleExpr().get_onClick().__listenersInUse = false;
				}
				
			}
			
			#line 43 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			this.assert.isTrue(ui.get_closureSingleExprClicked(), null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"closureWithSingleExprBody", "SignalValueTest", "SignalValueTest.hx"}, new int[]{1981972957}, new double[]{((double) (43) )}));
		}
		#line default
	}
	
	
	public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
		unchecked {
			#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			switch (hash) {
				case 567161376:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "closureWithSingleExprBody", 567161376)) );
				}
				
				
				case 1311965486:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "closureWithBlockBody", 1311965486)) );
				}
				
				
				case 947848242:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "simple", 947848242)) );
				}
				
				
				default:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
		unchecked {
			#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			switch (hash) {
				case 567161376:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					this.closureWithSingleExprBody();
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					break;
				}
				
				
				case 1311965486:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					this.closureWithBlockBody();
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					break;
				}
				
				
				case 947848242:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					this.simple();
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					break;
				}
				
				
				default:
				{
					#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
					return base.__hx_invokeField(field, hash, dynargs);
				}
				
			}
			
			#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/src/SignalValueTest.hx"
			return null;
		}
		#line default
	}
	
	
}


