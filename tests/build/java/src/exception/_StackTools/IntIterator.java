package exception._StackTools;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class IntIterator extends haxe.lang.HxObject
{
	public IntIterator(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public IntIterator(int from, int till)
	{
		//line 236 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		exception._StackTools.IntIterator.__hx_ctor_exception__StackTools_IntIterator(this, from, till);
	}
	
	
	public static void __hx_ctor_exception__StackTools_IntIterator(exception._StackTools.IntIterator __temp_me29, int from, int till)
	{
		//line 234 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		__temp_me29.till = 0;
		//line 233 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		__temp_me29.current = 0;
		//line 238 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		__temp_me29.current = from;
		//line 239 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		__temp_me29.till = till;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		return new exception._StackTools.IntIterator(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		return new exception._StackTools.IntIterator(((int) (haxe.lang.Runtime.toInt(arr.__get(0))) ), ((int) (haxe.lang.Runtime.toInt(arr.__get(1))) ));
	}
	
	
	public int current;
	
	public int till;
	
	public final boolean hasNext()
	{
		//line 244 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		return ( this.current != this.till );
	}
	
	
	public final int next()
	{
		//line 249 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		if (( this.current < this.till )) 
		{
			//line 249 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			return this.current++;
		}
		else
		{
			//line 249 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			return this.current--;
		}
		
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		{
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			boolean __temp_executeDef1 = true;
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			switch (field.hashCode())
			{
				case 3560117:
				{
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					if (field.equals("till")) 
					{
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						__temp_executeDef1 = false;
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						this.till = ((int) (value) );
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return value;
					}
					
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					break;
				}
				
				
				case 1126940025:
				{
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					if (field.equals("current")) 
					{
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						__temp_executeDef1 = false;
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						this.current = ((int) (value) );
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return value;
					}
					
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					break;
				}
				
				
			}
			
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			if (__temp_executeDef1) 
			{
				//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		{
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			boolean __temp_executeDef1 = true;
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			switch (field.hashCode())
			{
				case 3560117:
				{
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					if (field.equals("till")) 
					{
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						__temp_executeDef1 = false;
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						this.till = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return value;
					}
					
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					break;
				}
				
				
				case 1126940025:
				{
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					if (field.equals("current")) 
					{
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						__temp_executeDef1 = false;
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						this.current = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return value;
					}
					
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					break;
				}
				
				
			}
			
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			if (__temp_executeDef1) 
			{
				//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		{
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			boolean __temp_executeDef1 = true;
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			switch (field.hashCode())
			{
				case 3377907:
				{
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					if (field.equals("next")) 
					{
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						__temp_executeDef1 = false;
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "next")) );
					}
					
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					break;
				}
				
				
				case 1126940025:
				{
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					if (field.equals("current")) 
					{
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						__temp_executeDef1 = false;
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return this.current;
					}
					
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					break;
				}
				
				
				case 696759469:
				{
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					if (field.equals("hasNext")) 
					{
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						__temp_executeDef1 = false;
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "hasNext")) );
					}
					
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					break;
				}
				
				
				case 3560117:
				{
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					if (field.equals("till")) 
					{
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						__temp_executeDef1 = false;
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return this.till;
					}
					
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					break;
				}
				
				
			}
			
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			if (__temp_executeDef1) 
			{
				//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		{
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			boolean __temp_executeDef1 = true;
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			switch (field.hashCode())
			{
				case 3560117:
				{
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					if (field.equals("till")) 
					{
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						__temp_executeDef1 = false;
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return ((double) (this.till) );
					}
					
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					break;
				}
				
				
				case 1126940025:
				{
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					if (field.equals("current")) 
					{
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						__temp_executeDef1 = false;
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return ((double) (this.current) );
					}
					
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					break;
				}
				
				
			}
			
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			if (__temp_executeDef1) 
			{
				//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		{
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			boolean __temp_executeDef1 = true;
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			switch (field.hashCode())
			{
				case 3377907:
				{
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					if (field.equals("next")) 
					{
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						__temp_executeDef1 = false;
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return this.next();
					}
					
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					break;
				}
				
				
				case 696759469:
				{
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					if (field.equals("hasNext")) 
					{
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						__temp_executeDef1 = false;
						//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return this.hasNext();
					}
					
					//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					break;
				}
				
				
			}
			
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			if (__temp_executeDef1) 
			{
				//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		baseArr.push("till");
		//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		baseArr.push("current");
		//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		{
			//line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


