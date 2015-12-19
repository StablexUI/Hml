package haxe;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Timer extends haxe.lang.HxObject
{
	public Timer(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Timer()
	{
		//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
		haxe.Timer.__hx_ctor_haxe_Timer(this);
	}
	
	
	public static void __hx_ctor_haxe_Timer(haxe.Timer __temp_me32)
	{
		//line 108 "/usr/lib/haxe/std/haxe/Timer.hx"
		__temp_me32.run = ( (( haxe.Timer___hx_ctor_haxe_Timer_108__Fun.__hx_current != null )) ? (haxe.Timer___hx_ctor_haxe_Timer_108__Fun.__hx_current) : (haxe.Timer___hx_ctor_haxe_Timer_108__Fun.__hx_current = ((haxe.Timer___hx_ctor_haxe_Timer_108__Fun) (new haxe.Timer___hx_ctor_haxe_Timer_108__Fun()) )) );
	}
	
	
	public static double stamp()
	{
		//line 166 "/usr/lib/haxe/std/haxe/Timer.hx"
		return haxe.root.Sys.time();
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
		return new haxe.Timer(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
		return new haxe.Timer();
	}
	
	
	public haxe.lang.Function run;
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
		{
			//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
			boolean __temp_executeDef1 = true;
			//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
			switch (field.hashCode())
			{
				case 113291:
				{
					//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
					if (field.equals("run")) 
					{
						//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
						__temp_executeDef1 = false;
						//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
						this.run = ((haxe.lang.Function) (value) );
						//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
						return value;
					}
					
					//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
					break;
				}
				
				
			}
			
			//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
			if (__temp_executeDef1) 
			{
				//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
		{
			//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
			boolean __temp_executeDef1 = true;
			//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
			switch (field.hashCode())
			{
				case 113291:
				{
					//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
					if (field.equals("run")) 
					{
						//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
						__temp_executeDef1 = false;
						//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
						return this.run;
					}
					
					//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
					break;
				}
				
				
			}
			
			//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
			if (__temp_executeDef1) 
			{
				//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
		baseArr.push("run");
		//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
		{
			//line 38 "/usr/lib/haxe/std/haxe/Timer.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


