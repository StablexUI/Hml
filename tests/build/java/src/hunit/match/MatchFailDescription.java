package hunit.match;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class MatchFailDescription extends haxe.lang.HxObject
{
	public MatchFailDescription(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public MatchFailDescription(java.lang.String expected, java.lang.String actual)
	{
		//line 21 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
		hunit.match.MatchFailDescription.__hx_ctor_hunit_match_MatchFailDescription(this, expected, actual);
	}
	
	
	public static void __hx_ctor_hunit_match_MatchFailDescription(hunit.match.MatchFailDescription __temp_me78, java.lang.String expected, java.lang.String actual)
	{
		//line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
		__temp_me78.expected = expected;
		//line 24 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
		__temp_me78.actual = actual;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
		return new hunit.match.MatchFailDescription(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
		return new hunit.match.MatchFailDescription(haxe.lang.Runtime.toString(arr.__get(0)), haxe.lang.Runtime.toString(arr.__get(1)));
	}
	
	
	public java.lang.String expected;
	
	public java.lang.String actual;
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
		{
			//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
			switch (field.hashCode())
			{
				case -1422939762:
				{
					//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
					if (field.equals("actual")) 
					{
						//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						this.actual = haxe.lang.Runtime.toString(value);
						//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
					break;
				}
				
				
				case -1935718728:
				{
					//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
					if (field.equals("expected")) 
					{
						//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						this.expected = haxe.lang.Runtime.toString(value);
						//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
		{
			//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
			switch (field.hashCode())
			{
				case -1422939762:
				{
					//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
					if (field.equals("actual")) 
					{
						//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						return this.actual;
					}
					
					//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
					break;
				}
				
				
				case -1935718728:
				{
					//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
					if (field.equals("expected")) 
					{
						//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						return this.expected;
					}
					
					//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
		baseArr.push("actual");
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
		baseArr.push("expected");
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
		{
			//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


