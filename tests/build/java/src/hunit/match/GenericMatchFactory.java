package hunit.match;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class GenericMatchFactory<T> extends haxe.lang.HxObject
{
	public GenericMatchFactory(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public GenericMatchFactory(hunit.match.Match<T> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		hunit.match.GenericMatchFactory.__hx_ctor_hunit_match_GenericMatchFactory(this, previous, chainLogic);
	}
	
	
	public static <T_c> void __hx_ctor_hunit_match_GenericMatchFactory(hunit.match.GenericMatchFactory<T_c> __temp_me76, hunit.match.Match<T_c> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 28 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		__temp_me76.previous = previous;
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		__temp_me76.chainLogic = chainLogic;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		return new hunit.match.GenericMatchFactory<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		return new hunit.match.GenericMatchFactory<java.lang.Object>(((hunit.match.Match<java.lang.Object>) (arr.__get(0)) ), ((hunit.match.MatchChainLogic) (arr.__get(1)) ));
	}
	
	
	public hunit.match.Match<T> previous;
	
	public hunit.match.MatchChainLogic chainLogic;
	
	public hunit.match.AnyMatch<T> any()
	{
		//line 39 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		return new hunit.match.AnyMatch<T>(this.previous, this.chainLogic);
	}
	
	
	public hunit.match.TypeMatch<T> type(java.lang.Class type)
	{
		//line 49 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		return new hunit.match.TypeMatch<T>(type, this.previous, this.chainLogic);
	}
	
	
	public hunit.match.ERegMatch<T> regexp(haxe.root.EReg pattern)
	{
		//line 59 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		return new hunit.match.ERegMatch<T>(pattern, null, null);
	}
	
	
	public hunit.match.SimilarMatch<T> similar(java.lang.Object pattern)
	{
		//line 71 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		return new hunit.match.SimilarMatch<T>(pattern, null, null, null, null);
	}
	
	
	public hunit.match.EqualMatch<T> equal(T value)
	{
		//line 81 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		return new hunit.match.EqualMatch<T>(value, this.previous, this.chainLogic);
	}
	
	
	public hunit.match.Match<T> notEqual(T value)
	{
		//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		return new hunit.match.NotEqualMatch<T>(value, this.previous, this.chainLogic);
	}
	
	
	public hunit.match.CallbackMatch<T> callback(haxe.lang.Function verify)
	{
		//line 101 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		return new hunit.match.CallbackMatch<T>(verify, null, null);
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		{
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			boolean __temp_executeDef1 = true;
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			switch (field.hashCode())
			{
				case -2096350947:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("chainLogic")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						this.chainLogic = ((hunit.match.MatchChainLogic) (value) );
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return value;
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
				case -1273775369:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("previous")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						this.previous = ((hunit.match.Match<T>) (value) );
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return value;
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
			}
			
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			if (__temp_executeDef1) 
			{
				//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		{
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			boolean __temp_executeDef1 = true;
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			switch (field.hashCode())
			{
				case -172220347:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("callback")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "callback")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
				case -1273775369:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("previous")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.previous;
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
				case 1552455713:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("notEqual")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "notEqual")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
				case -2096350947:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("chainLogic")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.chainLogic;
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
				case 96757556:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("equal")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "equal")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
				case 96748:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("any")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "any")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
				case 2093667819:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("similar")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "similar")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
				case 3575610:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("type")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "type")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
				case -934799095:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("regexp")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "regexp")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
			}
			
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			if (__temp_executeDef1) 
			{
				//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		{
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			boolean __temp_executeDef1 = true;
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			switch (field.hashCode())
			{
				case -172220347:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("callback")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.callback(((haxe.lang.Function) (dynargs.__get(0)) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
				case 96748:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("any")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.any();
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
				case 1552455713:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("notEqual")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.notEqual(((T) (dynargs.__get(0)) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
				case 3575610:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("type")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.type(((java.lang.Class) (dynargs.__get(0)) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
				case 96757556:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("equal")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.equal(((T) (dynargs.__get(0)) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
				case -934799095:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("regexp")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.regexp(((haxe.root.EReg) (dynargs.__get(0)) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
				case 2093667819:
				{
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					if (field.equals("similar")) 
					{
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.similar(dynargs.__get(0));
					}
					
					//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
					break;
				}
				
				
			}
			
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			if (__temp_executeDef1) 
			{
				//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		baseArr.push("chainLogic");
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		baseArr.push("previous");
		//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
		{
			//line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


