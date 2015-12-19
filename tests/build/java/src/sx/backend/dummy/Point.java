package sx.backend.dummy;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Point extends haxe.lang.HxObject
{
	public Point(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Point(java.lang.Object x, java.lang.Object y)
	{
		//line 19 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
		sx.backend.dummy.Point.__hx_ctor_sx_backend_dummy_Point(this, x, y);
	}
	
	
	public static void __hx_ctor_sx_backend_dummy_Point(sx.backend.dummy.Point __temp_me115, java.lang.Object x, java.lang.Object y)
	{
		//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
		double __temp_y114 = ( (haxe.lang.Runtime.eq(y, null)) ? (((double) (0) )) : (((double) (haxe.lang.Runtime.toDouble(y)) )) );
		//line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
		double __temp_x113 = ( (haxe.lang.Runtime.eq(x, null)) ? (((double) (0) )) : (((double) (haxe.lang.Runtime.toDouble(x)) )) );
		//line 21 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
		__temp_me115.x = __temp_x113;
		//line 22 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
		__temp_me115.y = __temp_y114;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
		return new sx.backend.dummy.Point(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
		return new sx.backend.dummy.Point(arr.__get(0), arr.__get(1));
	}
	
	
	public double x;
	
	public double y;
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
		{
			//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			boolean __temp_executeDef1 = true;
			//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			switch (field.hashCode())
			{
				case 121:
				{
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					if (field.equals("y")) 
					{
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						__temp_executeDef1 = false;
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						this.y = ((double) (value) );
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return value;
					}
					
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					break;
				}
				
				
				case 120:
				{
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					if (field.equals("x")) 
					{
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						__temp_executeDef1 = false;
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						this.x = ((double) (value) );
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return value;
					}
					
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					break;
				}
				
				
			}
			
			//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			if (__temp_executeDef1) 
			{
				//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
		{
			//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			boolean __temp_executeDef1 = true;
			//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			switch (field.hashCode())
			{
				case 121:
				{
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					if (field.equals("y")) 
					{
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						__temp_executeDef1 = false;
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						this.y = ((double) (haxe.lang.Runtime.toDouble(value)) );
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return value;
					}
					
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					break;
				}
				
				
				case 120:
				{
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					if (field.equals("x")) 
					{
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						__temp_executeDef1 = false;
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						this.x = ((double) (haxe.lang.Runtime.toDouble(value)) );
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return value;
					}
					
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					break;
				}
				
				
			}
			
			//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			if (__temp_executeDef1) 
			{
				//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
		{
			//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			boolean __temp_executeDef1 = true;
			//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			switch (field.hashCode())
			{
				case 121:
				{
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					if (field.equals("y")) 
					{
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						__temp_executeDef1 = false;
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return this.y;
					}
					
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					break;
				}
				
				
				case 120:
				{
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					if (field.equals("x")) 
					{
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						__temp_executeDef1 = false;
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return this.x;
					}
					
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					break;
				}
				
				
			}
			
			//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			if (__temp_executeDef1) 
			{
				//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
		{
			//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			boolean __temp_executeDef1 = true;
			//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			switch (field.hashCode())
			{
				case 121:
				{
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					if (field.equals("y")) 
					{
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						__temp_executeDef1 = false;
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return this.y;
					}
					
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					break;
				}
				
				
				case 120:
				{
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					if (field.equals("x")) 
					{
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						__temp_executeDef1 = false;
						//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return this.x;
					}
					
					//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
					break;
				}
				
				
			}
			
			//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			if (__temp_executeDef1) 
			{
				//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
		baseArr.push("y");
		//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
		baseArr.push("x");
		//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
		{
			//line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


