package hunit.match;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class AnyMatch<T> extends hunit.match.Match<T>
{
	public AnyMatch(haxe.lang.EmptyObject empty)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public AnyMatch(hunit.match.Match<T> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 45 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 45 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		hunit.match.AnyMatch.__hx_ctor_hunit_match_AnyMatch(this, previous, chainLogic);
	}
	
	
	public static <T_c> void __hx_ctor_hunit_match_AnyMatch(hunit.match.AnyMatch<T_c> __temp_me72, hunit.match.Match<T_c> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 45 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		hunit.match.Match.__hx_ctor_hunit_match_Match(__temp_me72, previous, chainLogic);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
		return new hunit.match.AnyMatch<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
		return new hunit.match.AnyMatch<java.lang.Object>(((hunit.match.Match<java.lang.Object>) (arr.__get(0)) ), ((hunit.match.MatchChainLogic) (arr.__get(1)) ));
	}
	
	
	@Override public boolean checkMatch(java.lang.Object value)
	{
		//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
		return true;
	}
	
	
	@Override public java.lang.String shortCode()
	{
		//line 28 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
		return "ANY";
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
		{
			//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
			switch (field.hashCode())
			{
				case -2028533623:
				{
					//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
					if (field.equals("shortCode")) 
					{
						//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "shortCode")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
					break;
				}
				
				
				case -535500387:
				{
					//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
					if (field.equals("checkMatch")) 
					{
						//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "checkMatch")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


