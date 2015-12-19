package hunit.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class ExpectedExceptionData extends haxe.lang.HxObject
{
	public ExpectedExceptionData(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public ExpectedExceptionData(hunit.match.Match match, java.lang.Object pos)
	{
		//line 28 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		hunit.exceptions.ExpectedExceptionData.__hx_ctor_hunit_exceptions_ExpectedExceptionData(this, match, pos);
	}
	
	
	public static void __hx_ctor_hunit_exceptions_ExpectedExceptionData(hunit.exceptions.ExpectedExceptionData __temp_me65, hunit.match.Match match, java.lang.Object pos)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		__temp_me65.satisfied = false;
		//line 30 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		__temp_me65.match = match;
		//line 31 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		__temp_me65.pos = pos;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		return new hunit.exceptions.ExpectedExceptionData(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		return new hunit.exceptions.ExpectedExceptionData(((hunit.match.Match) (arr.__get(0)) ), arr.__get(1));
	}
	
	
	public hunit.match.Match match;
	
	public boolean satisfied;
	
	public java.lang.Object pos;
	
	public void validate(java.lang.Object e, haxe.root.Array<haxe.StackItem> exceptionStack)
	{
		//line 42 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		this.satisfied = this.match.match(e);
		//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		if ( ! (this.satisfied) ) 
		{
			//line 45 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			throw haxe.lang.HaxeException.wrap(new hunit.exceptions.UnexpectedException(e, exceptionStack, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.exceptions.ExpectedExceptionData", "ExpectedExceptionData.hx", "validate"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (45) )) )})));
		}
		
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		{
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			boolean __temp_executeDef1 = true;
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			switch (field.hashCode())
			{
				case 111188:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					if (field.equals("pos")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						this.pos = ((java.lang.Object) (value) );
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return value;
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					break;
				}
				
				
			}
			
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			if (__temp_executeDef1) 
			{
				//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		{
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			boolean __temp_executeDef1 = true;
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			switch (field.hashCode())
			{
				case 111188:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					if (field.equals("pos")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						this.pos = ((java.lang.Object) (value) );
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return value;
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					break;
				}
				
				
				case 103668165:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					if (field.equals("match")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						this.match = ((hunit.match.Match) (value) );
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return value;
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					break;
				}
				
				
				case -1458301902:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					if (field.equals("satisfied")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						this.satisfied = haxe.lang.Runtime.toBool(value);
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return value;
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					break;
				}
				
				
			}
			
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			if (__temp_executeDef1) 
			{
				//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		{
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			boolean __temp_executeDef1 = true;
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			switch (field.hashCode())
			{
				case -1421272810:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					if (field.equals("validate")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "validate")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					break;
				}
				
				
				case 103668165:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					if (field.equals("match")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return this.match;
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					break;
				}
				
				
				case 111188:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					if (field.equals("pos")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return this.pos;
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					break;
				}
				
				
				case -1458301902:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					if (field.equals("satisfied")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return this.satisfied;
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					break;
				}
				
				
			}
			
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			if (__temp_executeDef1) 
			{
				//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		{
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			boolean __temp_executeDef1 = true;
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			switch (field.hashCode())
			{
				case 111188:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					if (field.equals("pos")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return ((double) (haxe.lang.Runtime.toDouble(this.pos)) );
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					break;
				}
				
				
			}
			
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			if (__temp_executeDef1) 
			{
				//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		{
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			boolean __temp_executeDef1 = true;
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			switch (field.hashCode())
			{
				case -1421272810:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					if (field.equals("validate")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						this.validate(dynargs.__get(0), ((haxe.root.Array<haxe.StackItem>) (dynargs.__get(1)) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					break;
				}
				
				
			}
			
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			if (__temp_executeDef1) 
			{
				//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		baseArr.push("pos");
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		baseArr.push("satisfied");
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		baseArr.push("match");
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
		{
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


