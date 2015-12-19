package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class List<T> extends haxe.lang.HxObject
{
	public List(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public List()
	{
		//line 40 "/usr/lib/haxe/std/List.hx"
		haxe.root.List.__hx_ctor__List(this);
	}
	
	
	public static <T_c> void __hx_ctor__List(haxe.root.List<T_c> __temp_me14)
	{
		//line 41 "/usr/lib/haxe/std/List.hx"
		__temp_me14.length = 0;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 27 "/usr/lib/haxe/std/List.hx"
		return new haxe.root.List<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 27 "/usr/lib/haxe/std/List.hx"
		return new haxe.root.List<java.lang.Object>();
	}
	
	
	public haxe.root.Array h;
	
	public haxe.root.Array q;
	
	public int length;
	
	public void add(T item)
	{
		//line 50 "/usr/lib/haxe/std/List.hx"
		haxe.root.Array x = new haxe.root.Array(new java.lang.Object[]{item});
		//line 51 "/usr/lib/haxe/std/List.hx"
		if (( this.h == null )) 
		{
			//line 52 "/usr/lib/haxe/std/List.hx"
			this.h = x;
		}
		else
		{
			//line 54 "/usr/lib/haxe/std/List.hx"
			this.q.__set(1, x);
		}
		
		//line 55 "/usr/lib/haxe/std/List.hx"
		this.q = x;
		//line 56 "/usr/lib/haxe/std/List.hx"
		this.length++;
	}
	
	
	public java.lang.Object last()
	{
		//line 91 "/usr/lib/haxe/std/List.hx"
		if (( this.q == null )) 
		{
			//line 91 "/usr/lib/haxe/std/List.hx"
			return null;
		}
		else
		{
			//line 91 "/usr/lib/haxe/std/List.hx"
			return this.q.__get(0);
		}
		
	}
	
	
	public boolean remove(T v)
	{
		//line 139 "/usr/lib/haxe/std/List.hx"
		haxe.root.Array prev = null;
		//line 140 "/usr/lib/haxe/std/List.hx"
		haxe.root.Array l = this.h;
		//line 141 "/usr/lib/haxe/std/List.hx"
		while (( l != null ))
		{
			//line 142 "/usr/lib/haxe/std/List.hx"
			if (haxe.lang.Runtime.eq(l.__get(0), v)) 
			{
				//line 143 "/usr/lib/haxe/std/List.hx"
				if (( prev == null )) 
				{
					//line 144 "/usr/lib/haxe/std/List.hx"
					this.h = ((haxe.root.Array) (l.__get(1)) );
				}
				else
				{
					//line 146 "/usr/lib/haxe/std/List.hx"
					prev.__set(1, l.__get(1));
				}
				
				//line 147 "/usr/lib/haxe/std/List.hx"
				if (( this.q == l )) 
				{
					//line 148 "/usr/lib/haxe/std/List.hx"
					this.q = prev;
				}
				
				//line 149 "/usr/lib/haxe/std/List.hx"
				this.length--;
				//line 150 "/usr/lib/haxe/std/List.hx"
				return true;
			}
			
			//line 152 "/usr/lib/haxe/std/List.hx"
			prev = l;
			//line 153 "/usr/lib/haxe/std/List.hx"
			l = ((haxe.root.Array) (l.__get(1)) );
		}
		
		//line 155 "/usr/lib/haxe/std/List.hx"
		return false;
	}
	
	
	public final _List.ListIterator<T> iterator()
	{
		//line 162 "/usr/lib/haxe/std/List.hx"
		return new _List.ListIterator<T>(((haxe.root.Array) (this.h) ));
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 27 "/usr/lib/haxe/std/List.hx"
		{
			//line 27 "/usr/lib/haxe/std/List.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/lib/haxe/std/List.hx"
			switch (field.hashCode())
			{
				case -1106363674:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("length")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						this.length = ((int) (value) );
						//line 27 "/usr/lib/haxe/std/List.hx"
						return value;
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/lib/haxe/std/List.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/lib/haxe/std/List.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 27 "/usr/lib/haxe/std/List.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 27 "/usr/lib/haxe/std/List.hx"
		{
			//line 27 "/usr/lib/haxe/std/List.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/lib/haxe/std/List.hx"
			switch (field.hashCode())
			{
				case -1106363674:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("length")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						this.length = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 27 "/usr/lib/haxe/std/List.hx"
						return value;
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
				case 104:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("h")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						this.h = ((haxe.root.Array) (value) );
						//line 27 "/usr/lib/haxe/std/List.hx"
						return value;
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
				case 113:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("q")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						this.q = ((haxe.root.Array) (value) );
						//line 27 "/usr/lib/haxe/std/List.hx"
						return value;
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/lib/haxe/std/List.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/lib/haxe/std/List.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 27 "/usr/lib/haxe/std/List.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 27 "/usr/lib/haxe/std/List.hx"
		{
			//line 27 "/usr/lib/haxe/std/List.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/lib/haxe/std/List.hx"
			switch (field.hashCode())
			{
				case 1182533742:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("iterator")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "iterator")) );
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
				case 104:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("h")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						return this.h;
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
				case -934610812:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("remove")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "remove")) );
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
				case 113:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("q")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						return this.q;
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
				case 3314326:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("last")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "last")) );
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
				case -1106363674:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("length")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						return this.length;
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
				case 96417:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("add")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "add")) );
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/lib/haxe/std/List.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/lib/haxe/std/List.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 27 "/usr/lib/haxe/std/List.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 27 "/usr/lib/haxe/std/List.hx"
		{
			//line 27 "/usr/lib/haxe/std/List.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/lib/haxe/std/List.hx"
			switch (field.hashCode())
			{
				case -1106363674:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("length")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						return ((double) (this.length) );
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/lib/haxe/std/List.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/lib/haxe/std/List.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 27 "/usr/lib/haxe/std/List.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 27 "/usr/lib/haxe/std/List.hx"
		{
			//line 27 "/usr/lib/haxe/std/List.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/lib/haxe/std/List.hx"
			switch (field.hashCode())
			{
				case 1182533742:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("iterator")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						return this.iterator();
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
				case 96417:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("add")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						this.add(((T) (dynargs.__get(0)) ));
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
				case -934610812:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("remove")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						return this.remove(((T) (dynargs.__get(0)) ));
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
				case 3314326:
				{
					//line 27 "/usr/lib/haxe/std/List.hx"
					if (field.equals("last")) 
					{
						//line 27 "/usr/lib/haxe/std/List.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/List.hx"
						return this.last();
					}
					
					//line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/lib/haxe/std/List.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/lib/haxe/std/List.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 27 "/usr/lib/haxe/std/List.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 27 "/usr/lib/haxe/std/List.hx"
		baseArr.push("length");
		//line 27 "/usr/lib/haxe/std/List.hx"
		baseArr.push("q");
		//line 27 "/usr/lib/haxe/std/List.hx"
		baseArr.push("h");
		//line 27 "/usr/lib/haxe/std/List.hx"
		{
			//line 27 "/usr/lib/haxe/std/List.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


