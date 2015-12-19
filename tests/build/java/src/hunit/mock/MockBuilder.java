package hunit.mock;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class MockBuilder<T> extends haxe.lang.HxObject
{
	public MockBuilder(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public MockBuilder(hunit.TestCase test, java.lang.Class mockClass, java.lang.Class targetClass)
	{
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		hunit.mock.MockBuilder.__hx_ctor_hunit_mock_MockBuilder(this, test, mockClass, targetClass);
	}
	
	
	public static <T_c> void __hx_ctor_hunit_mock_MockBuilder(hunit.mock.MockBuilder<T_c> __temp_me87, hunit.TestCase test, java.lang.Class mockClass, java.lang.Class targetClass)
	{
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		__temp_me87.strictMode = false;
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		__temp_me87.fullStub = false;
		//line 31 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		__temp_me87.test = test;
		//line 32 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		__temp_me87.mockClass = mockClass;
		//line 33 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		__temp_me87.targetClass = targetClass;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		return new hunit.mock.MockBuilder<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		return new hunit.mock.MockBuilder<java.lang.Object>(((hunit.TestCase) (arr.__get(0)) ), ((java.lang.Class) (arr.__get(1)) ), ((java.lang.Class) (arr.__get(2)) ));
	}
	
	
	public hunit.TestCase test;
	
	public java.lang.Class mockClass;
	
	public java.lang.Class targetClass;
	
	public boolean fullStub;
	
	public boolean strictMode;
	
	public T get()
	{
		//line 43 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		T instance = ((T) (haxe.root.Type.createEmptyInstance(this.mockClass)) );
		//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		this.assignMockData(instance);
		//line 46 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		return instance;
	}
	
	
	public void assignMockData(T instance)
	{
		//line 56 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		hunit.mock.MockData mockData = this.createMockData();
		//line 57 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		haxe.root.Reflect.setProperty(instance, "__hu_mock__", mockData);
	}
	
	
	public hunit.mock.MockData createMockData()
	{
		//line 67 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		return new hunit.mock.MockData(this.test, this.targetClass, this.fullStub, this.strictMode);
	}
	
	
	public boolean set_strictMode(boolean value)
	{
		//line 76 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		if (this.fullStub) 
		{
			//line 77 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			throw haxe.lang.HaxeException.wrap(new hunit.exceptions.InvalidTestException("Cannot use `stubAll()` and `strict()` together.", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.mock.MockBuilder", "MockBuilder.hx", "set_strictMode"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (77) )) )})));
		}
		
		//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		return this.strictMode = value;
	}
	
	
	public boolean set_fullStub(boolean value)
	{
		//line 90 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		if (this.strictMode) 
		{
			//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			throw haxe.lang.HaxeException.wrap(new hunit.exceptions.InvalidTestException("Cannot use `stubAll()` and `strict()` together.", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.mock.MockBuilder", "MockBuilder.hx", "set_fullStub"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (91) )) )})));
		}
		
		//line 94 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		return this.fullStub = value;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		{
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			switch (field.hashCode())
			{
				case -1876197364:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("strictMode")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						if (handleProperties) 
						{
							//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							this.set_strictMode(haxe.lang.Runtime.toBool(value));
							//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							return value;
						}
						else
						{
							//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							this.strictMode = haxe.lang.Runtime.toBool(value);
							//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							return value;
						}
						
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case 3556498:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("test")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						this.test = ((hunit.TestCase) (value) );
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return value;
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case 1331019741:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("fullStub")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						if (handleProperties) 
						{
							//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							this.set_fullStub(haxe.lang.Runtime.toBool(value));
							//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							return value;
						}
						else
						{
							//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							this.fullStub = haxe.lang.Runtime.toBool(value);
							//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							return value;
						}
						
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case 1531438606:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("mockClass")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						this.mockClass = ((java.lang.Class) (value) );
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return value;
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case -2110678425:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("targetClass")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						this.targetClass = ((java.lang.Class) (value) );
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return value;
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
			}
			
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		{
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			switch (field.hashCode())
			{
				case 956957466:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("set_fullStub")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_fullStub")) );
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case 3556498:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("test")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.test;
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case -572790775:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("set_strictMode")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_strictMode")) );
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case 1531438606:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("mockClass")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.mockClass;
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case 279253360:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("createMockData")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "createMockData")) );
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case -2110678425:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("targetClass")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.targetClass;
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case 485903971:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("assignMockData")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "assignMockData")) );
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case 1331019741:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("fullStub")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.fullStub;
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case 102230:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("get")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get")) );
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case -1876197364:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("strictMode")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.strictMode;
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
			}
			
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		{
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			switch (field.hashCode())
			{
				case 956957466:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("set_fullStub")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.set_fullStub(haxe.lang.Runtime.toBool(dynargs.__get(0)));
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case 102230:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("get")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.get();
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case -572790775:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("set_strictMode")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.set_strictMode(haxe.lang.Runtime.toBool(dynargs.__get(0)));
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case 485903971:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("assignMockData")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						this.assignMockData(((T) (dynargs.__get(0)) ));
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
				case 279253360:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					if (field.equals("createMockData")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.createMockData();
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					break;
				}
				
				
			}
			
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		baseArr.push("strictMode");
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		baseArr.push("fullStub");
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		baseArr.push("targetClass");
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		baseArr.push("mockClass");
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		baseArr.push("test");
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
		{
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


