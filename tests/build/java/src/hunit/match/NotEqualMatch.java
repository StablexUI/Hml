package hunit.match;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class NotEqualMatch<T> extends hunit.match.EqualMatch<T>
{
	public NotEqualMatch(haxe.lang.EmptyObject empty)
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public NotEqualMatch(T value, hunit.match.Match<T> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 28 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 28 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		hunit.match.NotEqualMatch.__hx_ctor_hunit_match_NotEqualMatch(this, value, previous, chainLogic);
	}
	
	
	public static <T_c> void __hx_ctor_hunit_match_NotEqualMatch(hunit.match.NotEqualMatch<T_c> __temp_me79, T_c value, hunit.match.Match<T_c> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 28 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		hunit.match.EqualMatch.__hx_ctor_hunit_match_EqualMatch(__temp_me79, value, previous, chainLogic);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
		return new hunit.match.NotEqualMatch<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
		return new hunit.match.NotEqualMatch<java.lang.Object>(arr.__get(0), ((hunit.match.Match<java.lang.Object>) (arr.__get(1)) ), ((hunit.match.MatchChainLogic) (arr.__get(2)) ));
	}
	
	
	@Override public boolean checkMatch(java.lang.Object value)
	{
		//line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
		try 
		{
			//line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			{
				//line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
				haxe.root.ValueType _g = haxe.root.Type.typeof(this.value);
				//line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
				switch (_g.index)
				{
					case 5:
					{
						//line 24 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
						return  ! (haxe.root.Reflect.compareMethods(this.value, value)) ;
					}
					
					
					case 7:
					{
						//line 25 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
						return  ! (haxe.lang.Runtime.toBool(haxe.root.Type.enumEq(this.value, ((T) (value) )))) ;
					}
					
					
					default:
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
						return ( ! (haxe.lang.Runtime.eq(this.value, value)) );
					}
					
				}
				
			}
			
		}
		catch (java.lang.Throwable __temp_catchallException1)
		{
			//line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			haxe.lang.Exceptions.setException(__temp_catchallException1);
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			java.lang.Object __temp_catchall2 = __temp_catchallException1;
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			if (( __temp_catchall2 instanceof haxe.lang.HaxeException )) 
			{
				//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
				__temp_catchall2 = ((haxe.lang.HaxeException) (__temp_catchallException1) ).obj;
			}
			
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			{
				//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
				java.lang.Object e = __temp_catchall2;
				//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
				return false;
			}
			
		}
		
		
	}
	
	
	@Override public java.lang.String shortCode()
	{
		//line 40 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
		java.lang.String code = hunit.Utils.shortenString(haxe.root.Std.string(this.value));
		//line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
		if (hunit.Utils.hasToString(this.value)) 
		{
			//line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			return ( ( "!=\"" + code ) + "\"" );
		}
		else
		{
			//line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			return ( "!=" + code );
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
		{
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			switch (field.hashCode())
			{
				case -2028533623:
				{
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
					if (field.equals("shortCode")) 
					{
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "shortCode")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
					break;
				}
				
				
				case -535500387:
				{
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
					if (field.equals("checkMatch")) 
					{
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "checkMatch")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


