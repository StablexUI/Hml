package hunit.call;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Expect extends haxe.lang.HxObject implements hunit.call.IExpect
{
	public Expect(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Expect(hunit.mock.MockData mockData, java.lang.String method, haxe.root.Array<hunit.match.Match> arguments, hunit.utils.Value returns, hunit.utils.Value _throws, hunit.call.CallCount count, java.lang.Object pos)
	{
		//line 43 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		hunit.call.Expect.__hx_ctor_hunit_call_Expect(this, mockData, method, arguments, returns, _throws, count, pos);
	}
	
	
	public static void __hx_ctor_hunit_call_Expect(hunit.call.Expect __temp_me59, hunit.mock.MockData mockData, java.lang.String method, haxe.root.Array<hunit.match.Match> arguments, hunit.utils.Value returns, hunit.utils.Value _throws, hunit.call.CallCount count, java.lang.Object pos)
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		__temp_me59.fromCallId = 0;
		//line 34 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		__temp_me59.timesMatched = 0;
		//line 45 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		__temp_me59.mockData = mockData;
		//line 46 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		__temp_me59.method = method;
		//line 47 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		__temp_me59.arguments = arguments;
		//line 48 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		__temp_me59.returns = returns;
		//line 49 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		__temp_me59._throws = _throws;
		//line 50 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		__temp_me59.count = count;
		//line 51 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		__temp_me59.pos = pos;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		return new hunit.call.Expect(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		return new hunit.call.Expect(((hunit.mock.MockData) (arr.__get(0)) ), haxe.lang.Runtime.toString(arr.__get(1)), ((haxe.root.Array<hunit.match.Match>) (arr.__get(2)) ), ((hunit.utils.Value) (arr.__get(3)) ), ((hunit.utils.Value) (arr.__get(4)) ), ((hunit.call.CallCount) (arr.__get(5)) ), arr.__get(6));
	}
	
	
	public hunit.mock.MockData mockData;
	
	public java.lang.String method;
	
	public haxe.root.Array<hunit.match.Match> arguments;
	
	public hunit.utils.Value returns;
	
	public hunit.utils.Value _throws;
	
	public hunit.call.CallCount count;
	
	public java.lang.Object pos;
	
	public int timesMatched;
	
	public int fromCallId;
	
	public boolean sameObjectMethod(hunit.call.Call call)
	{
		//line 61 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		return ( ( this.mockData == call.mockData ) && haxe.lang.Runtime.valEq(this.method, call.method) );
	}
	
	
	public boolean match(hunit.call.Call call)
	{
		//line 71 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		if (( this.mockData != call.mockData )) 
		{
			//line 71 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			return false;
		}
		
		//line 73 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		if ( ! (haxe.lang.Runtime.valEq(this.method, call.method)) ) 
		{
			//line 73 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			return false;
		}
		
		//line 75 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		if (( this.arguments.length != call.arguments.length )) 
		{
			//line 76 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			throw haxe.lang.HaxeException.wrap("Arguments count does not match");
		}
		
		//line 79 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		{
			//line 79 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			int _g1 = 0;
			//line 79 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			int _g = this.arguments.length;
			//line 79 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			while (( _g1 < _g ))
			{
				//line 79 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				int i = _g1++;
				//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				if ( ! (this.arguments.__get(i).match(call.arguments.__get(i))) ) 
				{
					//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					return false;
				}
				
			}
			
		}
		
		//line 83 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		if (haxe.lang.Runtime.toBool(hunit.utils.ValueTools.hasValue(this.returns))) 
		{
			//line 84 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			if ( ! (haxe.lang.Runtime.toBool(hunit.utils.ValueTools.hasValue(call.result))) ) 
			{
				//line 84 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				return false;
			}
			
			//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			hunit.match.Match expected = ((hunit.match.Match) (hunit.utils.ValueTools.getValue(this.returns)) );
			//line 87 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			java.lang.Object actual = ((java.lang.Object) (hunit.utils.ValueTools.getValue(call.result)) );
			//line 88 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			if ( ! (expected.match(actual)) ) 
			{
				//line 88 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				return false;
			}
			
		}
		
		//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		if (haxe.lang.Runtime.toBool(hunit.utils.ValueTools.hasValue(this._throws))) 
		{
			//line 92 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			if ( ! (haxe.lang.Runtime.toBool(hunit.utils.ValueTools.hasValue(call.exceptionValue))) ) 
			{
				//line 93 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				return false;
			}
			
			//line 96 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			java.lang.Object e = ((java.lang.Object) (hunit.utils.ValueTools.getValue(call.exceptionValue)) );
			//line 97 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			if ( ! (((hunit.match.Match) (hunit.utils.ValueTools.getValue(this._throws)) ).match(e)) ) 
			{
				//line 98 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				return false;
			}
			
		}
		
		//line 102 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		return true;
	}
	
	
	public void validate()
	{
		//line 112 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		this.mockData.validateExpectation(this);
	}
	
	
	public boolean tooManyCalls()
	{
		//line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		{
			//line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			hunit.call.CallCount _g = this.count;
			//line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			switch (_g.index)
			{
				case 0:
				{
					//line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					return ( this.timesMatched > 0 );
				}
				
				
				case 1:
				{
					//line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					return false;
				}
				
				
				case 2:
				{
					//line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					return ( this.timesMatched > 1 );
				}
				
				
				case 3:
				{
					//line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					int amount = ((int) (haxe.lang.Runtime.toInt(_g.params[0])) );
					//line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					return false;
				}
				
				
				case 4:
				{
					//line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					int amount1 = ((int) (haxe.lang.Runtime.toInt(_g.params[0])) );
					//line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					return ( this.timesMatched > amount1 );
				}
				
				
			}
			
		}
		
		//line 120 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		return false;
	}
	
	
	@Override public java.lang.String toString()
	{
		//line 138 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		java.lang.String cls = this.mockData.mockClassName();
		//line 139 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		java.lang.String args = ((haxe.root.Array<java.lang.String>) (((haxe.root.Array) (this.arguments.map(( (( hunit.call.Expect_toString_139__Fun.__hx_current != null )) ? (hunit.call.Expect_toString_139__Fun.__hx_current) : (hunit.call.Expect_toString_139__Fun.__hx_current = ((hunit.call.Expect_toString_139__Fun) (new hunit.call.Expect_toString_139__Fun()) )) ))) )) ).join(", ");
		//line 141 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		haxe.root.Array<java.lang.String> results = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
		//line 142 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		if (haxe.lang.Runtime.toBool(hunit.utils.ValueTools.hasValue(this.returns))) 
		{
			//line 143 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			results.push(( "to return " + haxe.root.Std.string(((hunit.match.Match) (hunit.utils.ValueTools.getValue(this.returns)) )) ));
		}
		
		//line 145 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		if (haxe.lang.Runtime.toBool(hunit.utils.ValueTools.hasValue(this._throws))) 
		{
			//line 146 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			results.push(( "to throw " + haxe.root.Std.string(((hunit.match.Match) (hunit.utils.ValueTools.getValue(this._throws)) )) ));
		}
		
		//line 149 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		{
			//line 149 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			hunit.call.CallCount _g = this.count;
			//line 149 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			switch (_g.index)
			{
				case 1:
				{
					//line 150 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					results.push("to be called zero or more times");
					//line 150 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 0:
				{
					//line 151 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					results.push("to be never called");
					//line 151 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 2:
				{
					//line 152 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					results.push("to be called once");
					//line 152 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 3:
				{
					//line 149 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					int amount = ((int) (haxe.lang.Runtime.toInt(_g.params[0])) );
					//line 153 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					results.push(( ( ( "to be called at least " + amount ) + " time" ) + (( (( amount == 1 )) ? ("") : ("s") )) ));
					//line 153 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 4:
				{
					//line 149 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					int amount1 = ((int) (haxe.lang.Runtime.toInt(_g.params[0])) );
					//line 154 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					results.push(( ( ( "to be called exactly " + amount1 ) + " time" ) + (( (( amount1 == 1 )) ? ("") : ("s") )) ));
					//line 154 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
			}
			
		}
		
		//line 157 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		java.lang.String last = haxe.lang.Runtime.toString(results.pop());
		//line 158 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		java.lang.String toDo = null;
		//line 158 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		if (( results.length == 0 )) 
		{
			//line 158 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			toDo = last;
		}
		else
		{
			//line 158 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			toDo = ( results.join(", ") + (( " and " + last )) );
		}
		
		//line 159 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		java.lang.String msg = ( ( ( ( ( ( ( "" + cls ) + "." ) + this.method ) + "(" ) + args ) + ") is expected " ) + toDo );
		//line 161 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		return msg;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			switch (field.hashCode())
			{
				case 1682210915:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("fromCallId")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.fromCallId = ((int) (value) );
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 111188:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("pos")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.pos = ((java.lang.Object) (value) );
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 1343192830:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("timesMatched")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.timesMatched = ((int) (value) );
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			switch (field.hashCode())
			{
				case 1682210915:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("fromCallId")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.fromCallId = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case -643315628:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("mockData")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.mockData = ((hunit.mock.MockData) (value) );
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 1343192830:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("timesMatched")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.timesMatched = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case -1077554975:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("method")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.method = haxe.lang.Runtime.toString(value);
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 111188:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("pos")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.pos = ((java.lang.Object) (value) );
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case -2035517098:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("arguments")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.arguments = ((haxe.root.Array<hunit.match.Match>) (value) );
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 94851343:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("count")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.count = ((hunit.call.CallCount) (value) );
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 1098475843:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("returns")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.returns = ((hunit.utils.Value) (value) );
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case -874432947:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("throws")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this._throws = ((hunit.utils.Value) (value) );
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			switch (field.hashCode())
			{
				case -1776922004:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("toString")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "toString")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case -643315628:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("mockData")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.mockData;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 2041420738:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("tooManyCalls")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "tooManyCalls")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case -1077554975:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("method")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.method;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case -1421272810:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("validate")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "validate")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case -2035517098:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("arguments")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.arguments;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 103668165:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("match")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "match")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 1098475843:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("returns")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.returns;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 1478713478:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("sameObjectMethod")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "sameObjectMethod")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case -874432947:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("throws")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this._throws;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 1682210915:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("fromCallId")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.fromCallId;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 94851343:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("count")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.count;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 1343192830:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("timesMatched")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.timesMatched;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 111188:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("pos")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.pos;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			switch (field.hashCode())
			{
				case 1682210915:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("fromCallId")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((double) (this.fromCallId) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 111188:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("pos")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((double) (haxe.lang.Runtime.toDouble(this.pos)) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 1343192830:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("timesMatched")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((double) (this.timesMatched) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			switch (field.hashCode())
			{
				case -1776922004:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("toString")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.toString();
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 1478713478:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("sameObjectMethod")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.sameObjectMethod(((hunit.call.Call) (dynargs.__get(0)) ));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 2041420738:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("tooManyCalls")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.tooManyCalls();
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case 103668165:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("match")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.match(((hunit.call.Call) (dynargs.__get(0)) ));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
				case -1421272810:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					if (field.equals("validate")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.validate();
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		baseArr.push("fromCallId");
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		baseArr.push("timesMatched");
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		baseArr.push("pos");
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		baseArr.push("count");
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		baseArr.push("throws");
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		baseArr.push("returns");
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		baseArr.push("arguments");
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		baseArr.push("method");
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		baseArr.push("mockData");
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


