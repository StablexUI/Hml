package hunit.call;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Call extends haxe.lang.HxObject
{
	public Call(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Call(int id, hunit.mock.MockData mockData, java.lang.String method, haxe.root.Array arguments, haxe.root.Array<haxe.StackItem> stack, java.lang.Object pos, boolean isStub, hunit.call.Stub stub)
	{
		//line 45 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		hunit.call.Call.__hx_ctor_hunit_call_Call(this, id, mockData, method, arguments, stack, pos, isStub, stub);
	}
	
	
	public static void __hx_ctor_hunit_call_Call(hunit.call.Call __temp_me58, int id, hunit.mock.MockData mockData, java.lang.String method, haxe.root.Array arguments, haxe.root.Array<haxe.StackItem> stack, java.lang.Object pos, boolean isStub, hunit.call.Stub stub)
	{
		//line 34 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		__temp_me58.isStub = false;
		//line 47 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		__temp_me58.id = id;
		//line 48 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		__temp_me58.mockData = mockData;
		//line 49 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		__temp_me58.method = method;
		//line 50 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		__temp_me58.arguments = arguments;
		//line 51 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		__temp_me58.isStub = isStub;
		//line 52 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		__temp_me58.stub = stub;
		//line 53 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		__temp_me58.pos = pos;
		//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		__temp_me58.stack = stack;
		//line 56 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		__temp_me58.result = hunit.utils.Value.Nothing;
		//line 57 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		__temp_me58.set_exceptionValue(hunit.utils.Value.Nothing);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		return new hunit.call.Call(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		return new hunit.call.Call(((int) (haxe.lang.Runtime.toInt(arr.__get(0))) ), ((hunit.mock.MockData) (arr.__get(1)) ), haxe.lang.Runtime.toString(arr.__get(2)), ((haxe.root.Array) (arr.__get(3)) ), ((haxe.root.Array<haxe.StackItem>) (arr.__get(4)) ), arr.__get(5), haxe.lang.Runtime.toBool(arr.__get(6)), ((hunit.call.Stub) (arr.__get(7)) ));
	}
	
	
	public int id;
	
	public hunit.mock.MockData mockData;
	
	public java.lang.String method;
	
	public haxe.root.Array arguments;
	
	public hunit.utils.Value result;
	
	public haxe.root.Array<haxe.StackItem> stack;
	
	public hunit.utils.Value exceptionValue;
	
	public haxe.root.Array<haxe.StackItem> exceptionStack;
	
	public boolean isStub;
	
	public hunit.call.Stub stub;
	
	public java.lang.Object pos;
	
	@Override public java.lang.String toString()
	{
		//line 67 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		java.lang.String str = "";
		//line 68 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		if (haxe.lang.Runtime.toBool(hunit.utils.ValueTools.hasValue(this.result))) 
		{
			//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			java.lang.Object value = ((java.lang.Object) (hunit.utils.ValueTools.getValue(this.result)) );
			//line 70 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			str = ( ( "returned " + hunit.Utils.shortenQuote(value) ) + "" );
		}
		
		//line 73 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		if (haxe.lang.Runtime.toBool(hunit.utils.ValueTools.hasValue(this.exceptionValue))) 
		{
			//line 74 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			java.lang.Object e = ((java.lang.Object) (hunit.utils.ValueTools.getValue(this.exceptionValue)) );
			//line 75 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			java.lang.String exceptionMsg = null;
			//line 75 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			if (( e instanceof haxe.root.Exception )) 
			{
				//line 77 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				exceptionMsg = hunit.Utils.shortenString((((haxe.root.Exception) (e) )).message);
			}
			else
			{
				//line 78 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				exceptionMsg = hunit.Utils.shortenQuote(e);
			}
			
			//line 81 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			str = ( "threw " + exceptionMsg );
		}
		
		//line 84 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		java.lang.String className = this.mockData.mockClassName();
		//line 85 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		java.lang.String args = ((haxe.root.Array<java.lang.String>) (((haxe.root.Array) (this.arguments.map(( (( hunit.call.Call_toString_85__Fun.__hx_current != null )) ? (hunit.call.Call_toString_85__Fun.__hx_current) : (hunit.call.Call_toString_85__Fun.__hx_current = ((hunit.call.Call_toString_85__Fun) (new hunit.call.Call_toString_85__Fun()) )) ))) )) ).join(", ");
		//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		java.lang.String msg = ( ( ( ( ( ( ( "" + className ) + "." ) + this.method ) + "(" ) + args ) + ") " ) + str );
		//line 88 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		return msg;
	}
	
	
	public hunit.utils.Value set_exceptionValue(hunit.utils.Value value)
	{
		//line 98 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		if (haxe.lang.Runtime.toBool(hunit.utils.ValueTools.hasValue(value))) 
		{
			//line 99 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			this.exceptionStack = haxe.CallStack.exceptionStack().concat(this.stack);
		}
		
		//line 102 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		return this.exceptionValue = value;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			switch (field.hashCode())
			{
				case 111188:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("pos")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.pos = ((java.lang.Object) (value) );
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case 3355:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("id")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.id = ((int) (value) );
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			switch (field.hashCode())
			{
				case 111188:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("pos")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.pos = ((java.lang.Object) (value) );
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case 3355:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("id")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.id = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case 3541166:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("stub")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.stub = ((hunit.call.Stub) (value) );
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -643315628:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("mockData")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.mockData = ((hunit.mock.MockData) (value) );
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -1180113672:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("isStub")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.isStub = haxe.lang.Runtime.toBool(value);
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -1077554975:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("method")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.method = haxe.lang.Runtime.toString(value);
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -56042631:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("exceptionStack")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.exceptionStack = ((haxe.root.Array<haxe.StackItem>) (value) );
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -2035517098:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("arguments")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.arguments = ((haxe.root.Array) (value) );
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -53826974:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("exceptionValue")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						if (handleProperties) 
						{
							//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
							this.set_exceptionValue(((hunit.utils.Value) (value) ));
							//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
							return value;
						}
						else
						{
							//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
							this.exceptionValue = ((hunit.utils.Value) (value) );
							//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
							return value;
						}
						
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -934426595:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("result")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.result = ((hunit.utils.Value) (value) );
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case 109757064:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("stack")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.stack = ((haxe.root.Array<haxe.StackItem>) (value) );
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			switch (field.hashCode())
			{
				case -1411593249:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("set_exceptionValue")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_exceptionValue")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case 3355:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("id")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.id;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -1776922004:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("toString")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "toString")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -643315628:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("mockData")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.mockData;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case 111188:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("pos")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.pos;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -1077554975:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("method")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.method;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case 3541166:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("stub")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.stub;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -2035517098:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("arguments")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.arguments;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -1180113672:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("isStub")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.isStub;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -934426595:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("result")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.result;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -56042631:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("exceptionStack")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.exceptionStack;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case 109757064:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("stack")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.stack;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -53826974:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("exceptionValue")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.exceptionValue;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			switch (field.hashCode())
			{
				case 111188:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("pos")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return ((double) (haxe.lang.Runtime.toDouble(this.pos)) );
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case 3355:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("id")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return ((double) (this.id) );
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			switch (field.hashCode())
			{
				case -1411593249:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("set_exceptionValue")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.set_exceptionValue(((hunit.utils.Value) (dynargs.__get(0)) ));
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
				case -1776922004:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					if (field.equals("toString")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.toString();
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		baseArr.push("pos");
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		baseArr.push("stub");
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		baseArr.push("isStub");
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		baseArr.push("exceptionStack");
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		baseArr.push("exceptionValue");
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		baseArr.push("stack");
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		baseArr.push("result");
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		baseArr.push("arguments");
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		baseArr.push("method");
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		baseArr.push("mockData");
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		baseArr.push("id");
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


