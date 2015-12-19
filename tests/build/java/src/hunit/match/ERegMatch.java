package hunit.match;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class ERegMatch<T> extends hunit.match.Match<T>
{
	public ERegMatch(haxe.lang.EmptyObject empty)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public ERegMatch(haxe.root.EReg regexp, hunit.match.Match<T> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 27 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 27 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		hunit.match.ERegMatch.__hx_ctor_hunit_match_ERegMatch(this, regexp, previous, chainLogic);
	}
	
	
	public static <T_c> void __hx_ctor_hunit_match_ERegMatch(hunit.match.ERegMatch<T_c> __temp_me74, haxe.root.EReg regexp, hunit.match.Match<T_c> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 27 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		hunit.match.Match.__hx_ctor_hunit_match_Match(__temp_me74, previous, chainLogic);
		//line 28 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		__temp_me74.regexp = regexp;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		return new hunit.match.ERegMatch<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		return new hunit.match.ERegMatch<java.lang.Object>(((haxe.root.EReg) (arr.__get(0)) ), ((hunit.match.Match<java.lang.Object>) (arr.__get(1)) ), ((hunit.match.MatchChainLogic) (arr.__get(2)) ));
	}
	
	
	public haxe.root.EReg regexp;
	
	@Override public boolean checkMatch(java.lang.Object value)
	{
		//line 38 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		return this.regexp.match(haxe.root.Std.string(value));
	}
	
	
	@Override public java.lang.String shortCode()
	{
		//line 48 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		return this.extractPattern();
	}
	
	
	public java.lang.String extractPattern()
	{
		//line 62 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		java.lang.String pattern = ( ( "~/" + haxe.root.Std.string(haxe.root.Reflect.getProperty(this.regexp, "pattern")) ) + "/" );
		//line 68 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		return pattern;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			switch (field.hashCode())
			{
				case -934799095:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
					if (field.equals("regexp")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						this.regexp = ((haxe.root.EReg) (value) );
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			switch (field.hashCode())
			{
				case -525941809:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
					if (field.equals("extractPattern")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "extractPattern")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
					break;
				}
				
				
				case -934799095:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
					if (field.equals("regexp")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return this.regexp;
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
					break;
				}
				
				
				case -2028533623:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
					if (field.equals("shortCode")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "shortCode")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
					break;
				}
				
				
				case -535500387:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
					if (field.equals("checkMatch")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "checkMatch")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			int __temp_hash2 = field.hashCode();
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			switch (__temp_hash2)
			{
				case -2028533623:
				case -535500387:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
					if (( (( ( __temp_hash2 == -2028533623 ) && field.equals("shortCode") )) || field.equals("checkMatch") )) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
					break;
				}
				
				
				case -525941809:
				{
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
					if (field.equals("extractPattern")) 
					{
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return this.extractPattern();
					}
					
					//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		baseArr.push("regexp");
		//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
		{
			//line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


