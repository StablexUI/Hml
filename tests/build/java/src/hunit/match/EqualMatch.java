package hunit.match;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class EqualMatch<T> extends hunit.match.Match<T>
{
	public EqualMatch(haxe.lang.EmptyObject empty)
	{
		//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public EqualMatch(T value, hunit.match.Match<T> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 30 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 30 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		hunit.match.EqualMatch.__hx_ctor_hunit_match_EqualMatch(this, value, previous, chainLogic);
	}
	
	
	public static <T_c> void __hx_ctor_hunit_match_EqualMatch(hunit.match.EqualMatch<T_c> __temp_me75, T_c value, hunit.match.Match<T_c> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 30 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		hunit.match.Match.__hx_ctor_hunit_match_Match(__temp_me75, previous, chainLogic);
		//line 31 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		__temp_me75.value = value;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		return new hunit.match.EqualMatch<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		return new hunit.match.EqualMatch<java.lang.Object>(arr.__get(0), ((hunit.match.Match<java.lang.Object>) (arr.__get(1)) ), ((hunit.match.MatchChainLogic) (arr.__get(2)) ));
	}
	
	
	public T value;
	
	@Override public boolean checkMatch(java.lang.Object value)
	{
		//line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		try 
		{
			//line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			{
				//line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				haxe.root.ValueType _g = haxe.root.Type.typeof(this.value);
				//line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				switch (_g.index)
				{
					case 5:
					{
						//line 43 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return haxe.root.Reflect.compareMethods(this.value, value);
					}
					
					
					case 7:
					{
						//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return haxe.lang.Runtime.toBool(haxe.root.Type.enumEq(this.value, ((T) (value) )));
					}
					
					
					default:
					{
						//line 45 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return haxe.lang.Runtime.eq(this.value, value);
					}
					
				}
				
			}
			
		}
		catch (java.lang.Throwable __temp_catchallException1)
		{
			//line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			haxe.lang.Exceptions.setException(__temp_catchallException1);
			//line 48 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			java.lang.Object __temp_catchall2 = __temp_catchallException1;
			//line 48 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			if (( __temp_catchall2 instanceof haxe.lang.HaxeException )) 
			{
				//line 48 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				__temp_catchall2 = ((haxe.lang.HaxeException) (__temp_catchallException1) ).obj;
			}
			
			//line 48 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			{
				//line 48 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				java.lang.Object e = __temp_catchall2;
				//line 48 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				return false;
			}
			
		}
		
		
	}
	
	
	@Override public java.lang.String shortCode()
	{
		//line 60 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		java.lang.String code = hunit.Utils.shortenString(hunit.Utils.safeToString(this.value));
		//line 62 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		if (hunit.Utils.hasToString(this.value)) 
		{
			//line 62 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			return ( ( "=\"" + code ) + "\"" );
		}
		else
		{
			//line 62 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			return ( "=" + code );
		}
		
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		{
			//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			switch (field.hashCode())
			{
				case 111972721:
				{
					//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					if (field.equals("value")) 
					{
						//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						this.value = ((T) (((java.lang.Object) (value) )) );
						//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return ((double) (haxe.lang.Runtime.toDouble(((java.lang.Object) (value) ))) );
					}
					
					//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		{
			//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			switch (field.hashCode())
			{
				case 111972721:
				{
					//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					if (field.equals("value")) 
					{
						//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						this.value = ((T) (value) );
						//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		{
			//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			switch (field.hashCode())
			{
				case -2028533623:
				{
					//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					if (field.equals("shortCode")) 
					{
						//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "shortCode")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					break;
				}
				
				
				case 111972721:
				{
					//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					if (field.equals("value")) 
					{
						//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return this.value;
					}
					
					//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					break;
				}
				
				
				case -535500387:
				{
					//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					if (field.equals("checkMatch")) 
					{
						//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "checkMatch")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		{
			//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			switch (field.hashCode())
			{
				case 111972721:
				{
					//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					if (field.equals("value")) 
					{
						//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return ((double) (haxe.lang.Runtime.toDouble(((java.lang.Object) (this.value) ))) );
					}
					
					//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		baseArr.push("value");
		//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
		{
			//line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


