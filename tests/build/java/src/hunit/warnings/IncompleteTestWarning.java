package hunit.warnings;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class IncompleteTestWarning extends hunit.warnings.Warning
{
	public IncompleteTestWarning(haxe.lang.EmptyObject empty)
	{
		//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public IncompleteTestWarning(java.lang.String message)
	{
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		hunit.warnings.IncompleteTestWarning.__hx_ctor_hunit_warnings_IncompleteTestWarning(this, message);
	}
	
	
	public static void __hx_ctor_hunit_warnings_IncompleteTestWarning(hunit.warnings.IncompleteTestWarning __temp_me99, java.lang.String message)
	{
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx"
		hunit.warnings.Warning.__hx_ctor_hunit_warnings_Warning(__temp_me99, message);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
		return new hunit.warnings.IncompleteTestWarning(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
		return new hunit.warnings.IncompleteTestWarning(haxe.lang.Runtime.toString(arr.__get(0)));
	}
	
	
	@Override public java.lang.String defaultMessage()
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
		return "Incomplete test.";
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
		{
			//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
			boolean __temp_executeDef1 = true;
			//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
			switch (field.hashCode())
			{
				case -1335925114:
				{
					//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
					if (field.equals("defaultMessage")) 
					{
						//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
						__temp_executeDef1 = false;
						//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "defaultMessage")) );
					}
					
					//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
					break;
				}
				
				
			}
			
			//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
			if (__temp_executeDef1) 
			{
				//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 10 "/home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


