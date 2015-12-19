package hunit.match;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class CallbackMatch<T> extends hunit.match.Match<T>
{
	public CallbackMatch(haxe.lang.EmptyObject empty)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public CallbackMatch(haxe.lang.Function verify, hunit.match.Match<T> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
		hunit.match.CallbackMatch.__hx_ctor_hunit_match_CallbackMatch(this, verify, previous, chainLogic);
	}
	
	
	public static <T_c> void __hx_ctor_hunit_match_CallbackMatch(hunit.match.CallbackMatch<T_c> __temp_me73, haxe.lang.Function verify, hunit.match.Match<T_c> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
		hunit.match.Match.__hx_ctor_hunit_match_Match(__temp_me73, previous, chainLogic);
		//line 25 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
		__temp_me73.verify = verify;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
		return new hunit.match.CallbackMatch<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
		return new hunit.match.CallbackMatch<java.lang.Object>(((haxe.lang.Function) (arr.__get(0)) ), ((hunit.match.Match<java.lang.Object>) (arr.__get(1)) ), ((hunit.match.MatchChainLogic) (arr.__get(2)) ));
	}
	
	
	public haxe.lang.Function verify;
	
	@Override public boolean checkMatch(java.lang.Object value)
	{
		//line 34 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
		return haxe.lang.Runtime.toBool(this.verify.__hx_invoke1_o(0.0, value));
	}
	
	
	@Override public java.lang.String shortCode()
	{
		//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
		return "CALLBACK";
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
		{
			//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			switch (field.hashCode())
			{
				case -819951495:
				{
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
					if (field.equals("verify")) 
					{
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						this.verify = ((haxe.lang.Function) (value) );
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
		{
			//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			switch (field.hashCode())
			{
				case -2028533623:
				{
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
					if (field.equals("shortCode")) 
					{
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "shortCode")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
					break;
				}
				
				
				case -819951495:
				{
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
					if (field.equals("verify")) 
					{
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						return this.verify;
					}
					
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
					break;
				}
				
				
				case -535500387:
				{
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
					if (field.equals("checkMatch")) 
					{
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "checkMatch")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
		baseArr.push("verify");
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
		{
			//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


