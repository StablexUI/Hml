package haxe.unit;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TestCase extends haxe.lang.HxObject
{
	public TestCase(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public TestCase()
	{
		//line 30 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		haxe.unit.TestCase.__hx_ctor_haxe_unit_TestCase(this);
	}
	
	
	public static void __hx_ctor_haxe_unit_TestCase(haxe.unit.TestCase __temp_me38)
	{
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		return new haxe.unit.TestCase(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		return new haxe.unit.TestCase();
	}
	
	
	public haxe.unit.TestStatus currentTest;
	
	public void setup()
	{
	}
	
	
	public void tearDown()
	{
	}
	
	
	public void print(java.lang.Object v)
	{
		//line 40 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		haxe.unit.TestRunner.print.__hx_invoke1_o(0.0, v);
	}
	
	
	public void assertTrue(boolean b, java.lang.Object c)
	{
		//line 44 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		this.currentTest.done = true;
		//line 45 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		if (( b != true )) 
		{
			//line 46 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			this.currentTest.success = false;
			//line 47 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			this.currentTest.error = "expected true but was false";
			//line 48 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			this.currentTest.posInfos = c;
			//line 49 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			throw haxe.lang.HaxeException.wrap(this.currentTest);
		}
		
	}
	
	
	public void assertFalse(boolean b, java.lang.Object c)
	{
		//line 54 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		this.currentTest.done = true;
		//line 55 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		if (( b == true )) 
		{
			//line 56 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			this.currentTest.success = false;
			//line 57 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			this.currentTest.error = "expected false but was true";
			//line 58 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			this.currentTest.posInfos = c;
			//line 59 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			throw haxe.lang.HaxeException.wrap(this.currentTest);
		}
		
	}
	
	
	public <T> void assertEquals(T expected, T actual, java.lang.Object c)
	{
		//line 64 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		this.currentTest.done = true;
		//line 65 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		if (( ! (haxe.lang.Runtime.eq(actual, expected)) )) 
		{
			//line 66 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			this.currentTest.success = false;
			//line 67 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			this.currentTest.error = ( ( ( ( "expected \'" + haxe.root.Std.string(expected) ) + "\' but was \'" ) + haxe.root.Std.string(actual) ) + "\'" );
			//line 68 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			this.currentTest.posInfos = c;
			//line 69 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			throw haxe.lang.HaxeException.wrap(this.currentTest);
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		{
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			switch (field.hashCode())
			{
				case 601231787:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					if (field.equals("currentTest")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						this.currentTest = ((haxe.unit.TestStatus) (value) );
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return value;
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		{
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			switch (field.hashCode())
			{
				case -1076899163:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					if (field.equals("assertEquals")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "assertEquals")) );
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					break;
				}
				
				
				case 601231787:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					if (field.equals("currentTest")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return this.currentTest;
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					break;
				}
				
				
				case 381342077:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					if (field.equals("assertFalse")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "assertFalse")) );
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					break;
				}
				
				
				case 109329021:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					if (field.equals("setup")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setup")) );
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					break;
				}
				
				
				case 2090945012:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					if (field.equals("assertTrue")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "assertTrue")) );
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					break;
				}
				
				
				case -1664427484:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					if (field.equals("tearDown")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "tearDown")) );
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					break;
				}
				
				
				case 106934957:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					if (field.equals("print")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "print")) );
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		{
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			switch (field.hashCode())
			{
				case -1076899163:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					if (field.equals("assertEquals")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						this.assertEquals(dynargs.__get(0), dynargs.__get(1), dynargs.__get(2));
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						return ((java.lang.Object) (null) );
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					break;
				}
				
				
				case 109329021:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					if (field.equals("setup")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						this.setup();
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					break;
				}
				
				
				case 381342077:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					if (field.equals("assertFalse")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						this.assertFalse(haxe.lang.Runtime.toBool(dynargs.__get(0)), dynargs.__get(1));
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					break;
				}
				
				
				case -1664427484:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					if (field.equals("tearDown")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						this.tearDown();
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					break;
				}
				
				
				case 2090945012:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					if (field.equals("assertTrue")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						this.assertTrue(haxe.lang.Runtime.toBool(dynargs.__get(0)), dynargs.__get(1));
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					break;
				}
				
				
				case 106934957:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					if (field.equals("print")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
						this.print(dynargs.__get(0));
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		baseArr.push("currentTest");
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
		{
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestCase.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


