package hunit.exceptions;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class UnexpectedException extends haxe.root.Exception
{
	public UnexpectedException(haxe.lang.EmptyObject empty)
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public UnexpectedException(java.lang.Object e, haxe.root.Array<haxe.StackItem> exceptionStack, java.lang.Object pos)
	{
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		hunit.exceptions.UnexpectedException.__hx_ctor_hunit_exceptions_UnexpectedException(this, e, exceptionStack, pos);
	}
	
	
	public static void __hx_ctor_hunit_exceptions_UnexpectedException(hunit.exceptions.UnexpectedException __temp_me68, java.lang.Object e, haxe.root.Array<haxe.StackItem> exceptionStack, java.lang.Object pos)
	{
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		__temp_me68.originalExceptionStack = exceptionStack;
		//line 27 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		__temp_me68.original = e;
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		haxe.root.Exception.__hx_ctor__Exception(__temp_me68, haxe.root.Std.string(e), pos);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		return new hunit.exceptions.UnexpectedException(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		return new hunit.exceptions.UnexpectedException(arr.__get(0), ((haxe.root.Array<haxe.StackItem>) (arr.__get(1)) ), arr.__get(2));
	}
	
	
	public java.lang.Object original;
	
	public haxe.root.Array<haxe.StackItem> originalExceptionStack;
	
	@Override public java.lang.String toString()
	{
		//line 39 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		if (( this.original instanceof haxe.root.Exception )) 
		{
			//line 40 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			java.lang.String className = haxe.root.Type.getClassName(((java.lang.Class) (haxe.root.Type.getClass(this)) ));
			//line 41 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			return ( ( ( "" + className ) + ": " ) + (((haxe.root.Exception) (this.original) )).toString() );
		}
		else
		{
			//line 43 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			return super.toString();
		}
		
	}
	
	
	@Override public haxe.root.Array<haxe.StackItem> buildStack(haxe.root.Array<haxe.StackItem> stack)
	{
		//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		haxe.root.Array<haxe.StackItem> exceptionStack = this.originalExceptionStack;
		//line 57 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		if (( this.original instanceof haxe.root.Exception )) 
		{
			//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			this.pos = (((haxe.root.Exception) (this.original) )).pos;
			//line 59 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			exceptionStack = (((haxe.root.Exception) (this.original) )).stack.copy();
		}
		else
		{
			//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			if (( exceptionStack.length == 0 )) 
			{
				//line 65 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				exceptionStack = stack;
			}
			else
			{
				//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				haxe.StackItem _g = exceptionStack.__get(0);
				//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				switch (_g.index)
				{
					case 2:
					{
						//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						if (( ((haxe.StackItem) (_g.params[0]) ) == null )) 
						{
							//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
							int line = ((int) (haxe.lang.Runtime.toInt(_g.params[2])) );
							//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
							java.lang.String file = haxe.lang.Runtime.toString(_g.params[1]);
							//line 70 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
							{
								//line 71 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
								haxe.lang.Runtime.setField(this.pos, "fileName", file);
								//line 72 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
								haxe.lang.Runtime.setField_f(this.pos, "lineNumber", ((double) (line) ));
							}
							
						}
						else
						{
							//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
							switch (((haxe.StackItem) (_g.params[0]) ).index)
							{
								case 3:
								{
									//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
									int line1 = ((int) (haxe.lang.Runtime.toInt(_g.params[2])) );
									//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
									java.lang.String file1 = haxe.lang.Runtime.toString(_g.params[1]);
									//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
									java.lang.String methodName = haxe.lang.Runtime.toString(((haxe.StackItem) (_g.params[0]) ).params[1]);
									//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
									java.lang.String className = haxe.lang.Runtime.toString(((haxe.StackItem) (_g.params[0]) ).params[0]);
									//line 73 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
									{
										//line 74 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
										haxe.lang.Runtime.setField(this.pos, "className", className);
										//line 75 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
										haxe.lang.Runtime.setField(this.pos, "methodName", methodName);
										//line 76 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
										haxe.lang.Runtime.setField(this.pos, "fileName", file1);
										//line 77 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
										haxe.lang.Runtime.setField_f(this.pos, "lineNumber", ((double) (line1) ));
									}
									
									//line 73 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
									break;
								}
								
								
								default:
								{
									//line 81 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
									break;
								}
								
							}
							
						}
						
						//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						break;
					}
					
					
					case 3:
					{
						//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						java.lang.String methodName1 = haxe.lang.Runtime.toString(_g.params[1]);
						//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						java.lang.String className1 = haxe.lang.Runtime.toString(_g.params[0]);
						//line 78 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						{
							//line 79 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
							haxe.lang.Runtime.setField(this.pos, "methodName", methodName1);
							//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
							haxe.lang.Runtime.setField(this.pos, "className", className1);
						}
						
						//line 78 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						break;
					}
					
					
					default:
					{
						//line 81 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						break;
					}
					
				}
				
			}
			
		}
		
		//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		return super.buildStack(exceptionStack);
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		{
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			switch (field.hashCode())
			{
				case 1379043793:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					if (field.equals("original")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						this.original = ((java.lang.Object) (value) );
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return value;
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					break;
				}
				
				
			}
			
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		{
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			switch (field.hashCode())
			{
				case 463482794:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					if (field.equals("originalExceptionStack")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						this.originalExceptionStack = ((haxe.root.Array<haxe.StackItem>) (value) );
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return value;
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					break;
				}
				
				
				case 1379043793:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					if (field.equals("original")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						this.original = ((java.lang.Object) (value) );
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return value;
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					break;
				}
				
				
			}
			
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		{
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			switch (field.hashCode())
			{
				case -481500998:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					if (field.equals("buildStack")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "buildStack")) );
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					break;
				}
				
				
				case 1379043793:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					if (field.equals("original")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return this.original;
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					break;
				}
				
				
				case -1776922004:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					if (field.equals("toString")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "toString")) );
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					break;
				}
				
				
				case 463482794:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					if (field.equals("originalExceptionStack")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return this.originalExceptionStack;
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					break;
				}
				
				
			}
			
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		{
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			switch (field.hashCode())
			{
				case 1379043793:
				{
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					if (field.equals("original")) 
					{
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						__temp_executeDef1 = false;
						//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return ((double) (haxe.lang.Runtime.toDouble(this.original)) );
					}
					
					//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					break;
				}
				
				
			}
			
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		baseArr.push("originalExceptionStack");
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		baseArr.push("original");
		//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
		{
			//line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


