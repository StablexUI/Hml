package hunit.match;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class MatchFactory extends haxe.lang.HxObject
{
	public MatchFactory(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public MatchFactory()
	{
		//line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
		hunit.match.MatchFactory.__hx_ctor_hunit_match_MatchFactory(this);
	}
	
	
	public static void __hx_ctor_hunit_match_MatchFactory(hunit.match.MatchFactory __temp_me77)
	{
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
		return new hunit.match.MatchFactory(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
		return new hunit.match.MatchFactory();
	}
	
	
	public <T> hunit.match.AnyMatch<T> any()
	{
		//line 34 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
		return new hunit.match.AnyMatch<T>(null, null);
	}
	
	
	public <T> hunit.match.TypeMatch<T> type(java.lang.Class type)
	{
		//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
		return new hunit.match.TypeMatch<T>(type, null, null);
	}
	
	
	public hunit.match.ERegMatch<java.lang.String> regexp(haxe.root.EReg pattern)
	{
		//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
		return new hunit.match.ERegMatch<java.lang.String>(pattern, null, null);
	}
	
	
	public hunit.match.SimilarMatch similar(java.lang.Object pattern)
	{
		//line 66 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
		return new hunit.match.SimilarMatch(pattern, null, null, null, null);
	}
	
	
	public <T> hunit.match.EqualMatch<T> equal(T value)
	{
		//line 76 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
		return new hunit.match.EqualMatch<T>(value, null, null);
	}
	
	
	public <T> hunit.match.NotEqualMatch<T> notEqual(T value)
	{
		//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
		return new hunit.match.NotEqualMatch<T>(value, null, null);
	}
	
	
	public <T> hunit.match.CallbackMatch<T> callback(haxe.lang.Function verify)
	{
		//line 96 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
		return new hunit.match.CallbackMatch<T>(verify, null, null);
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
		{
			//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			boolean __temp_executeDef1 = true;
			//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			switch (field.hashCode())
			{
				case -172220347:
				{
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					if (field.equals("callback")) 
					{
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						__temp_executeDef1 = false;
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "callback")) );
					}
					
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					break;
				}
				
				
				case 96748:
				{
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					if (field.equals("any")) 
					{
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						__temp_executeDef1 = false;
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "any")) );
					}
					
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					break;
				}
				
				
				case 1552455713:
				{
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					if (field.equals("notEqual")) 
					{
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						__temp_executeDef1 = false;
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "notEqual")) );
					}
					
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					break;
				}
				
				
				case 3575610:
				{
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					if (field.equals("type")) 
					{
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						__temp_executeDef1 = false;
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "type")) );
					}
					
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					break;
				}
				
				
				case 96757556:
				{
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					if (field.equals("equal")) 
					{
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						__temp_executeDef1 = false;
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "equal")) );
					}
					
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					break;
				}
				
				
				case -934799095:
				{
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					if (field.equals("regexp")) 
					{
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						__temp_executeDef1 = false;
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "regexp")) );
					}
					
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					break;
				}
				
				
				case 2093667819:
				{
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					if (field.equals("similar")) 
					{
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						__temp_executeDef1 = false;
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "similar")) );
					}
					
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					break;
				}
				
				
			}
			
			//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			if (__temp_executeDef1) 
			{
				//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
		{
			//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			boolean __temp_executeDef1 = true;
			//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			switch (field.hashCode())
			{
				case -172220347:
				{
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					if (field.equals("callback")) 
					{
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						__temp_executeDef1 = false;
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((hunit.match.CallbackMatch<java.lang.Object>) (this.callback(((haxe.lang.Function) (dynargs.__get(0)) ))) );
					}
					
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					break;
				}
				
				
				case 96748:
				{
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					if (field.equals("any")) 
					{
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						__temp_executeDef1 = false;
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((hunit.match.AnyMatch<java.lang.Object>) (this.any()) );
					}
					
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					break;
				}
				
				
				case 1552455713:
				{
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					if (field.equals("notEqual")) 
					{
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						__temp_executeDef1 = false;
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((hunit.match.NotEqualMatch<java.lang.Object>) (this.notEqual(dynargs.__get(0))) );
					}
					
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					break;
				}
				
				
				case 3575610:
				{
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					if (field.equals("type")) 
					{
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						__temp_executeDef1 = false;
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((hunit.match.TypeMatch<java.lang.Object>) (this.type(((java.lang.Class) (dynargs.__get(0)) ))) );
					}
					
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					break;
				}
				
				
				case 96757556:
				{
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					if (field.equals("equal")) 
					{
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						__temp_executeDef1 = false;
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((hunit.match.EqualMatch<java.lang.Object>) (this.equal(dynargs.__get(0))) );
					}
					
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					break;
				}
				
				
				case -934799095:
				{
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					if (field.equals("regexp")) 
					{
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						__temp_executeDef1 = false;
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return this.regexp(((haxe.root.EReg) (dynargs.__get(0)) ));
					}
					
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					break;
				}
				
				
				case 2093667819:
				{
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					if (field.equals("similar")) 
					{
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						__temp_executeDef1 = false;
						//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return this.similar(dynargs.__get(0));
					}
					
					//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
					break;
				}
				
				
			}
			
			//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			if (__temp_executeDef1) 
			{
				//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


