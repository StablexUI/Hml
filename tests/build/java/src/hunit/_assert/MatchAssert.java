package hunit._assert;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class MatchAssert extends hunit._assert.BaseAssert
{
	public MatchAssert(haxe.lang.EmptyObject empty)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public MatchAssert(hunit.match.Match expected, java.lang.Object actual, java.lang.String message, java.lang.Object pos)
	{
		//line 31 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 31 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		hunit._assert.MatchAssert.__hx_ctor_hunit_assert_MatchAssert(this, expected, actual, message, pos);
	}
	
	
	public static void __hx_ctor_hunit_assert_MatchAssert(hunit._assert.MatchAssert __temp_me57, hunit.match.Match expected, java.lang.Object actual, java.lang.String message, java.lang.Object pos)
	{
		//line 31 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		hunit._assert.BaseAssert.__hx_ctor_hunit_assert_BaseAssert(__temp_me57, pos);
		//line 33 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		__temp_me57.expected = expected;
		//line 34 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		__temp_me57.actual = actual;
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		__temp_me57.message = message;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		return new hunit._assert.MatchAssert(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		return new hunit._assert.MatchAssert(((hunit.match.Match) (arr.__get(0)) ), arr.__get(1), haxe.lang.Runtime.toString(arr.__get(2)), arr.__get(3));
	}
	
	
	public hunit.match.Match expected;
	
	public java.lang.Object actual;
	
	public java.lang.String message;
	
	@Override public void validate()
	{
		//line 45 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		if (this.expected.match(this.actual)) 
		{
			//line 45 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			return ;
		}
		
		//line 47 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		this.failed(( (( this.message == null )) ? (this.buildMessage()) : (this.message) ));
	}
	
	
	public java.lang.String buildMessage()
	{
		//line 57 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		java.lang.String a = hunit.Utils.shortenQuote(this.actual);
		//line 59 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		if (this.expected.isChained()) 
		{
			//line 60 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			return ( ( ( ( "Failed asserting that " + a ) + " matches " ) + haxe.root.Std.string(this.expected) ) + "." );
		}
		else
		{
			//line 62 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			java.lang.Class cls = ((java.lang.Class) (haxe.root.Type.getClass(this.expected)) );
			//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			{
				//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				java.lang.Class __temp_switch1 = (cls);
				//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				if (haxe.lang.Runtime.eq(__temp_switch1, hunit.match.TypeMatch.class)) 
				{
					//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					return ( ( ( "Failed asserting that " + this.actualType() ) + " is " ) + haxe.root.Type.getClassName((((hunit.match.TypeMatch) (this.expected) )).type) );
				}
				else
				{
					//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (haxe.lang.Runtime.eq(__temp_switch1, hunit.match.NotEqualMatch.class)) 
					{
						//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return ( ( ( "Failed asserting that " + a ) + " does not equal " ) + hunit.Utils.shortenQuote((((hunit.match.NotEqualMatch) (this.expected) )).value) );
					}
					else
					{
						//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						if (haxe.lang.Runtime.eq(__temp_switch1, hunit.match.EqualMatch.class)) 
						{
							//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
							return ( ( ( "Failed asserting that " + a ) + " equals " ) + hunit.Utils.shortenQuote((((hunit.match.EqualMatch) (this.expected) )).value) );
						}
						else
						{
							//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
							return ( ( ( ( "Failed asserting that " + a ) + " matches " ) + haxe.root.Std.string(this.expected) ) + "." );
						}
						
					}
					
				}
				
			}
			
		}
		
	}
	
	
	public java.lang.String actualType()
	{
		//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		{
			//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			haxe.root.ValueType _g = haxe.root.Type.typeof(this.actual);
			//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			switch (_g.index)
			{
				case 6:
				{
					//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					java.lang.Class c = ((java.lang.Class) (_g.params[0]) );
					//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					return haxe.root.Type.getClassName(c);
				}
				
				
				case 7:
				{
					//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					java.lang.Class e = ((java.lang.Class) (_g.params[0]) );
					//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					return haxe.root.Type.getEnumName(e);
				}
				
				
				case 0:
				{
					//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					return "Null";
				}
				
				
				case 1:
				{
					//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					return "Int";
				}
				
				
				case 2:
				{
					//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					return "Float";
				}
				
				
				case 3:
				{
					//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					return "Bool";
				}
				
				
				case 4:
				{
					//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					return "Object";
				}
				
				
				case 5:
				{
					//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					return "Function";
				}
				
				
				case 8:
				{
					//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					return "Unknown Type";
				}
				
				
			}
			
		}
		
		//line 78 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		return null;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			switch (field.hashCode())
			{
				case -1422939762:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (field.equals("actual")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						this.actual = ((java.lang.Object) (value) );
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			switch (field.hashCode())
			{
				case 954925063:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (field.equals("message")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						this.message = haxe.lang.Runtime.toString(value);
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					break;
				}
				
				
				case -1935718728:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (field.equals("expected")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						this.expected = ((hunit.match.Match) (value) );
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					break;
				}
				
				
				case -1422939762:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (field.equals("actual")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						this.actual = ((java.lang.Object) (value) );
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			switch (field.hashCode())
			{
				case -785631768:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (field.equals("actualType")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "actualType")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					break;
				}
				
				
				case -1935718728:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (field.equals("expected")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return this.expected;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					break;
				}
				
				
				case -308389447:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (field.equals("buildMessage")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "buildMessage")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					break;
				}
				
				
				case -1422939762:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (field.equals("actual")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return this.actual;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					break;
				}
				
				
				case -1421272810:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (field.equals("validate")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "validate")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					break;
				}
				
				
				case 954925063:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (field.equals("message")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return this.message;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			switch (field.hashCode())
			{
				case -1422939762:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (field.equals("actual")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return ((double) (haxe.lang.Runtime.toDouble(this.actual)) );
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			switch (field.hashCode())
			{
				case -1421272810:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (field.equals("validate")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					break;
				}
				
				
				case -308389447:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (field.equals("buildMessage")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return this.buildMessage();
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					break;
				}
				
				
				case -785631768:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					if (field.equals("actualType")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
						return this.actualType();
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		baseArr.push("message");
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		baseArr.push("actual");
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		baseArr.push("expected");
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


