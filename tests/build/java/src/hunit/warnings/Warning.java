package hunit.warnings;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Warning extends haxe.lang.HxObject
{
	public Warning(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Warning(java.lang.String message)
	{
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		hunit.warnings.Warning.__hx_ctor_hunit_warnings_Warning(this, message);
	}
	
	
	public static void __hx_ctor_hunit_warnings_Warning(hunit.warnings.Warning __temp_me97, java.lang.String message)
	{
		//line 23 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		if (( ( message == null ) || ( message.trim().length() == 0 ) )) 
		{
			//line 24 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			message = __temp_me97.defaultMessage();
		}
		
		//line 27 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		__temp_me97.message = message;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		return new hunit.warnings.Warning(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		return new hunit.warnings.Warning(haxe.lang.Runtime.toString(arr.__get(0)));
	}
	
	
	public java.lang.String message;
	
	public java.lang.String defaultMessage()
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		java.lang.String className = haxe.lang.Runtime.toString(haxe.lang.StringExt.split(haxe.root.Type.getClassName(((java.lang.Class) (haxe.root.Type.getClass(this)) )), ".").pop());
		//line 38 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		haxe.root.Array<java.lang.String> words = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
		//line 39 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		int wordStart = -1;
		//line 40 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		{
			//line 40 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			int _g1 = 0;
			//line 40 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			int _g = className.length();
			//line 40 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			while (( _g1 < _g ))
			{
				//line 40 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				int i = _g1++;
				//line 41 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				java.lang.String _char = haxe.lang.StringExt.charAt(className, i);
				//line 43 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				if (haxe.lang.Runtime.valEq(_char.toUpperCase(), _char)) 
				{
					//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
					if (( wordStart >= 0 )) 
					{
						//line 45 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						java.lang.String word = haxe.lang.StringExt.substring(className, wordStart, i);
						//line 46 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						if (( wordStart > 0 )) 
						{
							//line 47 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
							word = word.toLowerCase();
						}
						
						//line 50 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						words.push(word);
					}
					
					//line 52 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
					wordStart = i;
				}
				
			}
			
		}
		
		//line 55 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		if (( wordStart >= 0 )) 
		{
			//line 56 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			words.push(haxe.lang.StringExt.substr(className, wordStart, null).toLowerCase());
		}
		
		//line 59 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		return words.join(" ");
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		{
			//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			boolean __temp_executeDef1 = true;
			//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			switch (field.hashCode())
			{
				case 954925063:
				{
					//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
					if (field.equals("message")) 
					{
						//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						__temp_executeDef1 = false;
						//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						this.message = haxe.lang.Runtime.toString(value);
						//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						return value;
					}
					
					//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
					break;
				}
				
				
			}
			
			//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			if (__temp_executeDef1) 
			{
				//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		{
			//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			boolean __temp_executeDef1 = true;
			//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			switch (field.hashCode())
			{
				case -1335925114:
				{
					//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
					if (field.equals("defaultMessage")) 
					{
						//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						__temp_executeDef1 = false;
						//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "defaultMessage")) );
					}
					
					//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
					break;
				}
				
				
				case 954925063:
				{
					//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
					if (field.equals("message")) 
					{
						//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						__temp_executeDef1 = false;
						//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						return this.message;
					}
					
					//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
					break;
				}
				
				
			}
			
			//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			if (__temp_executeDef1) 
			{
				//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		{
			//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			boolean __temp_executeDef1 = true;
			//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			switch (field.hashCode())
			{
				case -1335925114:
				{
					//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
					if (field.equals("defaultMessage")) 
					{
						//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						__temp_executeDef1 = false;
						//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
						return this.defaultMessage();
					}
					
					//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
					break;
				}
				
				
			}
			
			//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			if (__temp_executeDef1) 
			{
				//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		baseArr.push("message");
		//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		{
			//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


