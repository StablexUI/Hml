package haxe.unit;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TestStatus extends haxe.lang.HxObject
{
	public TestStatus(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public TestStatus()
	{
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
		haxe.unit.TestStatus.__hx_ctor_haxe_unit_TestStatus(this);
	}
	
	
	public static void __hx_ctor_haxe_unit_TestStatus(haxe.unit.TestStatus __temp_me40)
	{
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
		return new haxe.unit.TestStatus(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
		return new haxe.unit.TestStatus();
	}
	
	
	public boolean done;
	
	public boolean success;
	
	public java.lang.String error;
	
	public java.lang.Object posInfos;
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
		{
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
			switch (field.hashCode())
			{
				case 718070673:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					if (field.equals("posInfos")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						this.posInfos = ((java.lang.Object) (value) );
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						return value;
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
		{
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
			switch (field.hashCode())
			{
				case 718070673:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					if (field.equals("posInfos")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						this.posInfos = ((java.lang.Object) (value) );
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						return value;
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					break;
				}
				
				
				case 3089282:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					if (field.equals("done")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						this.done = haxe.lang.Runtime.toBool(value);
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						return value;
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					break;
				}
				
				
				case 96784904:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					if (field.equals("error")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						this.error = haxe.lang.Runtime.toString(value);
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						return value;
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					break;
				}
				
				
				case -1867169789:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					if (field.equals("success")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						this.success = haxe.lang.Runtime.toBool(value);
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						return value;
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
		{
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
			switch (field.hashCode())
			{
				case 718070673:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					if (field.equals("posInfos")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						return this.posInfos;
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					break;
				}
				
				
				case 3089282:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					if (field.equals("done")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						return this.done;
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					break;
				}
				
				
				case 96784904:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					if (field.equals("error")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						return this.error;
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					break;
				}
				
				
				case -1867169789:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					if (field.equals("success")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						return this.success;
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
		{
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
			switch (field.hashCode())
			{
				case 718070673:
				{
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					if (field.equals("posInfos")) 
					{
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
						return ((double) (haxe.lang.Runtime.toDouble(this.posInfos)) );
					}
					
					//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
		baseArr.push("posInfos");
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
		baseArr.push("error");
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
		baseArr.push("success");
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
		baseArr.push("done");
		//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
		{
			//line 27 "/usr/lib/haxe/std/haxe/unit/TestStatus.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


