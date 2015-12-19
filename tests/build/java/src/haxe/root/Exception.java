package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Exception extends haxe.lang.HxObject
{
	static
	{
		//line 58 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		haxe.root.Exception.processCallStackOnCreation = ( (( haxe.root.Exception_Anon_58__Fun.__hx_current != null )) ? (haxe.root.Exception_Anon_58__Fun.__hx_current) : (haxe.root.Exception_Anon_58__Fun.__hx_current = ((haxe.root.Exception_Anon_58__Fun) (new haxe.root.Exception_Anon_58__Fun()) )) );
	}
	
	public Exception(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Exception(java.lang.String message, java.lang.Object pos)
	{
		//line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		haxe.root.Exception.__hx_ctor__Exception(this, message, pos);
	}
	
	
	public static void __hx_ctor__Exception(haxe.root.Exception __temp_me12, java.lang.String message, java.lang.Object pos)
	{
		//line 73 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		__temp_me12.message = message;
		//line 74 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		__temp_me12.pos = pos;
		//line 77 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		__temp_me12.stack = __temp_me12.buildStack(haxe.CallStack.callStack());
	}
	
	
	public static haxe.root.Exception wrap(java.lang.Object e, java.lang.Object pos)
	{
		//line 40 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		if (( e instanceof haxe.root.Exception )) 
		{
			//line 40 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			return ((haxe.root.Exception) (e) );
		}
		
		//line 42 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		haxe.root.Array<haxe.StackItem> exceptionStack = haxe.CallStack.exceptionStack();
		//line 43 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		haxe.root.Exception exception = new haxe.root.Exception(haxe.root.Std.string(e), pos);
		//line 46 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		if (( exceptionStack.length > 0 )) 
		{
			//line 47 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			exception.stack = exceptionStack;
		}
		
		//line 50 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		return exception;
	}
	
	
	public static haxe.lang.Function processCallStackOnCreation;
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		return new haxe.root.Exception(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		return new haxe.root.Exception(haxe.lang.Runtime.toString(arr.__get(0)), arr.__get(1));
	}
	
	
	public java.lang.String message;
	
	public java.lang.Object pos;
	
	public haxe.root.Array<haxe.StackItem> stack;
	
	public void truncateStack(java.lang.Object pos, java.lang.Object count)
	{
		//line 89 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		int __temp_count11 = ( (haxe.lang.Runtime.eq(count, null)) ? (0) : (((int) (haxe.lang.Runtime.toInt(count)) )) );
		//line 94 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		if (( ! (( pos == null )) )) 
		{
			//line 95 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			boolean fromTop = false;
			//line 95 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			this.stack = exception.StackTools.javaTruncate(this.stack, pos, fromTop);
		}
		
		//line 98 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		if (( __temp_count11 > 0 )) 
		{
			//line 99 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			this.stack = this.stack.slice(__temp_count11, null);
		}
		
	}
	
	
	public java.lang.String stringStack()
	{
		//line 111 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		return haxe.CallStack.toString(this.stack);
	}
	
	
	@Override public java.lang.String toString()
	{
		//line 121 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		java.lang.String className = haxe.root.Type.getClassName(((java.lang.Class) (haxe.root.Type.getClass(this)) ));
		//line 122 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		java.lang.String position = null;
		//line 122 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		if (( this.pos == null )) 
		{
			//line 122 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			position = "unknown position";
		}
		else
		{
			//line 122 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			position = ( ( haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(this.pos, "fileName", true)) + ":" ) + ((int) (haxe.lang.Runtime.getField_f(this.pos, "lineNumber", true)) ) );
		}
		
		//line 124 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		java.lang.String msg = ( ( ( ( ( "" + className ) + ": " ) + this.message ) + "\n\tCreated at " ) + position );
		//line 125 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		msg += haxe.root.StringTools.replace(haxe.CallStack.toString(this.stack), "\n", "\n\t");
		//line 127 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		return msg;
	}
	
	
	public haxe.root.Array<haxe.StackItem> buildStack(haxe.root.Array<haxe.StackItem> stack)
	{
		//line 137 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		haxe.root.Array<haxe.StackItem> stack1 = null;
		//line 137 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		{
			//line 137 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			boolean fromTop = false;
			//line 137 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			stack1 = exception.StackTools.javaTruncate(stack, this.pos, fromTop);
		}
		
		//line 139 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		return ((haxe.root.Array<haxe.StackItem>) (haxe.root.Exception.processCallStackOnCreation.__hx_invoke1_o(0.0, stack1)) );
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		{
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			boolean __temp_executeDef1 = true;
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			switch (field.hashCode())
			{
				case 111188:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("pos")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						this.pos = ((java.lang.Object) (value) );
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
			}
			
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			if (__temp_executeDef1) 
			{
				//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		{
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			boolean __temp_executeDef1 = true;
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			switch (field.hashCode())
			{
				case 109757064:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("stack")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						this.stack = ((haxe.root.Array<haxe.StackItem>) (value) );
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
				case 954925063:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("message")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						this.message = haxe.lang.Runtime.toString(value);
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
				case 111188:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("pos")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						this.pos = ((java.lang.Object) (value) );
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
			}
			
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			if (__temp_executeDef1) 
			{
				//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		{
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			boolean __temp_executeDef1 = true;
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			switch (field.hashCode())
			{
				case -481500998:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("buildStack")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "buildStack")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
				case 954925063:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("message")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						return this.message;
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
				case -1776922004:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("toString")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "toString")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
				case 111188:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("pos")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						return this.pos;
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
				case -1521429257:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("stringStack")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "stringStack")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
				case 109757064:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("stack")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						return this.stack;
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
				case -523504446:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("truncateStack")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "truncateStack")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
			}
			
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			if (__temp_executeDef1) 
			{
				//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		{
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			boolean __temp_executeDef1 = true;
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			switch (field.hashCode())
			{
				case 111188:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("pos")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						return ((double) (haxe.lang.Runtime.toDouble(this.pos)) );
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
			}
			
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			if (__temp_executeDef1) 
			{
				//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		{
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			boolean __temp_executeDef1 = true;
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			switch (field.hashCode())
			{
				case -481500998:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("buildStack")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						return this.buildStack(((haxe.root.Array<haxe.StackItem>) (dynargs.__get(0)) ));
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
				case -523504446:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("truncateStack")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						this.truncateStack(dynargs.__get(0), dynargs.__get(1));
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
				case -1776922004:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("toString")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						return this.toString();
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
				case -1521429257:
				{
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					if (field.equals("stringStack")) 
					{
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
						return this.stringStack();
					}
					
					//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
			}
			
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			if (__temp_executeDef1) 
			{
				//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		baseArr.push("stack");
		//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		baseArr.push("pos");
		//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		baseArr.push("message");
		//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		{
			//line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


