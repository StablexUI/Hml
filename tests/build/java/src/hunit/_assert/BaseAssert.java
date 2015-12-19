package hunit._assert;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class BaseAssert extends haxe.lang.HxObject
{
	public BaseAssert(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public BaseAssert(java.lang.Object pos)
	{
		//line 24 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
		hunit._assert.BaseAssert.__hx_ctor_hunit_assert_BaseAssert(this, pos);
	}
	
	
	public static void __hx_ctor_hunit_assert_BaseAssert(hunit._assert.BaseAssert __temp_me56, java.lang.Object pos)
	{
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
		__temp_me56.pos = pos;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
		return new hunit._assert.BaseAssert(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
		return new hunit._assert.BaseAssert(((java.lang.Object) (arr.__get(0)) ));
	}
	
	
	public java.lang.Object pos;
	
	public void validate()
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
		throw haxe.lang.HaxeException.wrap("To be overriden");
	}
	
	
	public void failed(java.lang.String message)
	{
		//line 46 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
		throw haxe.lang.HaxeException.wrap(new hunit.exceptions.AssertException(message, this.pos));
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
		{
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			switch (field.hashCode())
			{
				case 111188:
				{
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					if (field.equals("pos")) 
					{
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						this.pos = ((java.lang.Object) (value) );
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
		{
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			switch (field.hashCode())
			{
				case 111188:
				{
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					if (field.equals("pos")) 
					{
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						this.pos = ((java.lang.Object) (value) );
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
		{
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			switch (field.hashCode())
			{
				case -1281977283:
				{
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					if (field.equals("failed")) 
					{
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "failed")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					break;
				}
				
				
				case 111188:
				{
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					if (field.equals("pos")) 
					{
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return this.pos;
					}
					
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					break;
				}
				
				
				case -1421272810:
				{
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					if (field.equals("validate")) 
					{
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "validate")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
		{
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			switch (field.hashCode())
			{
				case 111188:
				{
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					if (field.equals("pos")) 
					{
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return ((double) (haxe.lang.Runtime.toDouble(this.pos)) );
					}
					
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
		{
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			switch (field.hashCode())
			{
				case -1281977283:
				{
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					if (field.equals("failed")) 
					{
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						this.failed(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					break;
				}
				
				
				case -1421272810:
				{
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					if (field.equals("validate")) 
					{
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						this.validate();
					}
					
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
		baseArr.push("pos");
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
		{
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


