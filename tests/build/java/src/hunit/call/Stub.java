package hunit.call;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Stub extends haxe.lang.HxObject
{
	public Stub(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Stub(hunit.mock.MockData mockData, java.lang.String method, haxe.root.Array<hunit.match.Match> arguments, hunit.utils.Value returns, hunit.utils.Value _throws, java.lang.Object pos)
	{
		//line 42 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		hunit.call.Stub.__hx_ctor_hunit_call_Stub(this, mockData, method, arguments, returns, _throws, pos);
	}
	
	
	public static void __hx_ctor_hunit_call_Stub(hunit.call.Stub __temp_me60, hunit.mock.MockData mockData, java.lang.String method, haxe.root.Array<hunit.match.Match> arguments, hunit.utils.Value returns, hunit.utils.Value _throws, java.lang.Object pos)
	{
		//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		__temp_me60.mockData = mockData;
		//line 45 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		__temp_me60.method = method;
		//line 46 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		__temp_me60.arguments = arguments;
		//line 47 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		__temp_me60.returns = returns;
		//line 48 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		__temp_me60._throws = _throws;
		//line 49 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		__temp_me60.pos = pos;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		return new hunit.call.Stub(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		return new hunit.call.Stub(((hunit.mock.MockData) (arr.__get(0)) ), haxe.lang.Runtime.toString(arr.__get(1)), ((haxe.root.Array<hunit.match.Match>) (arr.__get(2)) ), ((hunit.utils.Value) (arr.__get(3)) ), ((hunit.utils.Value) (arr.__get(4)) ), arr.__get(5));
	}
	
	
	public hunit.mock.MockData mockData;
	
	public java.lang.String method;
	
	public haxe.root.Array<hunit.match.Match> arguments;
	
	public hunit.utils.Value returns;
	
	public hunit.utils.Value _throws;
	
	public hunit.utils.Value implementation;
	
	public java.lang.Object pos;
	
	public hunit.call.Expect expect(hunit.call.CallCount count)
	{
		//line 59 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		hunit.call.Expect expect = new hunit.call.Expect(this.mockData, this.method, this.arguments, hunit.utils.Value.Nothing, hunit.utils.Value.Nothing, count, this.pos);
		//line 68 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		this.mockData.expect(expect);
		//line 70 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		return expect;
	}
	
	
	public boolean match(java.lang.String method, haxe.root.Array arguments)
	{
		//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		if ( ! (haxe.lang.Runtime.valEq(this.method, method)) ) 
		{
			//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			return false;
		}
		
		//line 82 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		if (( arguments.length != this.arguments.length )) 
		{
			//line 83 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			throw haxe.lang.HaxeException.wrap("Arguments count does not match");
		}
		
		//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		{
			//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			int _g1 = 0;
			//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			int _g = this.arguments.length;
			//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			while (( _g1 < _g ))
			{
				//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				int i = _g1++;
				//line 87 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				if ( ! (this.arguments.__get(i).match(arguments.__get(i))) ) 
				{
					//line 87 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					return false;
				}
				
			}
			
		}
		
		//line 90 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		return true;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		{
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			boolean __temp_executeDef1 = true;
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			switch (field.hashCode())
			{
				case 111188:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("pos")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this.pos = ((java.lang.Object) (value) );
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return value;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
			}
			
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			if (__temp_executeDef1) 
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		{
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			boolean __temp_executeDef1 = true;
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			switch (field.hashCode())
			{
				case 111188:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("pos")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this.pos = ((java.lang.Object) (value) );
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return value;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
				case -643315628:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("mockData")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this.mockData = ((hunit.mock.MockData) (value) );
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return value;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
				case 1683336114:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("implementation")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this.implementation = ((hunit.utils.Value) (value) );
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return value;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
				case -1077554975:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("method")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this.method = haxe.lang.Runtime.toString(value);
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return value;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
				case -874432947:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("throws")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this._throws = ((hunit.utils.Value) (value) );
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return value;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
				case -2035517098:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("arguments")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this.arguments = ((haxe.root.Array<hunit.match.Match>) (value) );
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return value;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
				case 1098475843:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("returns")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this.returns = ((hunit.utils.Value) (value) );
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return value;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
			}
			
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			if (__temp_executeDef1) 
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		{
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			boolean __temp_executeDef1 = true;
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			switch (field.hashCode())
			{
				case 103668165:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("match")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "match")) );
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
				case -643315628:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("mockData")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.mockData;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
				case -1289163687:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("expect")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "expect")) );
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
				case -1077554975:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("method")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.method;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
				case 111188:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("pos")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.pos;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
				case -2035517098:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("arguments")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.arguments;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
				case 1683336114:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("implementation")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.implementation;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
				case 1098475843:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("returns")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.returns;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
				case -874432947:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("throws")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this._throws;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
			}
			
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			if (__temp_executeDef1) 
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		{
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			boolean __temp_executeDef1 = true;
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			switch (field.hashCode())
			{
				case 111188:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("pos")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return ((double) (haxe.lang.Runtime.toDouble(this.pos)) );
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
			}
			
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			if (__temp_executeDef1) 
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		{
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			boolean __temp_executeDef1 = true;
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			switch (field.hashCode())
			{
				case 103668165:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("match")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.match(haxe.lang.Runtime.toString(dynargs.__get(0)), ((haxe.root.Array) (dynargs.__get(1)) ));
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
				case -1289163687:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					if (field.equals("expect")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.expect(((hunit.call.CallCount) (dynargs.__get(0)) ));
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					break;
				}
				
				
			}
			
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			if (__temp_executeDef1) 
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		baseArr.push("pos");
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		baseArr.push("implementation");
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		baseArr.push("throws");
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		baseArr.push("returns");
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		baseArr.push("arguments");
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		baseArr.push("method");
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		baseArr.push("mockData");
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
		{
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


