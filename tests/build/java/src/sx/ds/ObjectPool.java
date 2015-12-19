package sx.ds;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class ObjectPool<T> extends haxe.lang.HxObject
{
	public ObjectPool(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public ObjectPool()
	{
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		sx.ds.ObjectPool.__hx_ctor_sx_ds_ObjectPool(this);
	}
	
	
	public static <T_c> void __hx_ctor_sx_ds_ObjectPool(sx.ds.ObjectPool<T_c> __temp_me118)
	{
		//line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		__temp_me118.length = 0;
		//line 22 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		__temp_me118.__pool = new haxe.root.Array<T_c>(( (T_c[]) (new java.lang.Object[] {}) ));
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		return new sx.ds.ObjectPool<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		return new sx.ds.ObjectPool<java.lang.Object>();
	}
	
	
	public int length;
	
	public haxe.root.Array<T> __pool;
	
	public final void push(T obj)
	{
		//line 31 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		this.__pool.__set(this.length, obj);
		//line 32 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		this.length++;
	}
	
	
	public final java.lang.Object pop()
	{
		//line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		if (( this.length > 0 )) 
		{
			//line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			this.length--;
			//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			return this.__pool.__get(this.length);
		}
		else
		{
			//line 45 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			return null;
		}
		
	}
	
	
	public final void clear()
	{
		//line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		{
			//line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			int _g1 = 0;
			//line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			int _g = this.length;
			//line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			while (( _g1 < _g ))
			{
				//line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				int i = _g1++;
				//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				this.__pool.__set(i, null);
			}
			
		}
		
		//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		this.length = 0;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			switch (field.hashCode())
			{
				case -1106363674:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					if (field.equals("length")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						this.length = ((int) (value) );
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			switch (field.hashCode())
			{
				case -1484016644:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					if (field.equals("__pool")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						this.__pool = ((haxe.root.Array<T>) (value) );
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					break;
				}
				
				
				case -1106363674:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					if (field.equals("length")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						this.length = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			switch (field.hashCode())
			{
				case 94746189:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					if (field.equals("clear")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "clear")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					break;
				}
				
				
				case -1106363674:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					if (field.equals("length")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return this.length;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					break;
				}
				
				
				case 111185:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					if (field.equals("pop")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "pop")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					break;
				}
				
				
				case -1484016644:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					if (field.equals("__pool")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return this.__pool;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					break;
				}
				
				
				case 3452698:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					if (field.equals("push")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "push")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			switch (field.hashCode())
			{
				case -1106363674:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					if (field.equals("length")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return ((double) (this.length) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			switch (field.hashCode())
			{
				case 94746189:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					if (field.equals("clear")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						this.clear();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					break;
				}
				
				
				case 3452698:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					if (field.equals("push")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						this.push(((T) (dynargs.__get(0)) ));
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					break;
				}
				
				
				case 111185:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					if (field.equals("pop")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return this.pop();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		baseArr.push("__pool");
		//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		baseArr.push("length");
		//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


