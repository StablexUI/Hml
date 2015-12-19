package hunit.match;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TypeMatch<T> extends hunit.match.Match<T>
{
	public TypeMatch(haxe.lang.EmptyObject empty)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public TypeMatch(java.lang.Class type, hunit.match.Match<T> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 24 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 24 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
		hunit.match.TypeMatch.__hx_ctor_hunit_match_TypeMatch(this, type, previous, chainLogic);
	}
	
	
	public static <T_c> void __hx_ctor_hunit_match_TypeMatch(hunit.match.TypeMatch<T_c> __temp_me82, java.lang.Class type, hunit.match.Match<T_c> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 24 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
		hunit.match.Match.__hx_ctor_hunit_match_Match(__temp_me82, previous, chainLogic);
		//line 25 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
		__temp_me82.type = type;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
		return new hunit.match.TypeMatch<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
		return new hunit.match.TypeMatch<java.lang.Object>(((java.lang.Class) (arr.__get(0)) ), ((hunit.match.Match<java.lang.Object>) (arr.__get(1)) ), ((hunit.match.MatchChainLogic) (arr.__get(2)) ));
	}
	
	
	public java.lang.Class type;
	
	@Override public boolean checkMatch(java.lang.Object value)
	{
		//line 34 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
		return ( ( ! (( value == null )) ) && haxe.root.Std.is(value, this.type) );
	}
	
	
	@Override public java.lang.String shortCode()
	{
		//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
		return ( ( "Class<" + haxe.root.Type.getClassName(this.type) ) + ">" );
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
		{
			//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			switch (field.hashCode())
			{
				case 3575610:
				{
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
					if (field.equals("type")) 
					{
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						this.type = ((java.lang.Class) (value) );
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
		{
			//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			switch (field.hashCode())
			{
				case -2028533623:
				{
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
					if (field.equals("shortCode")) 
					{
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "shortCode")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
					break;
				}
				
				
				case 3575610:
				{
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
					if (field.equals("type")) 
					{
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						return this.type;
					}
					
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
					break;
				}
				
				
				case -535500387:
				{
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
					if (field.equals("checkMatch")) 
					{
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "checkMatch")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
		baseArr.push("type");
		//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
		{
			//line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


