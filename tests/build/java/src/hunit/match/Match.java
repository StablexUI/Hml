package hunit.match;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Match<T> extends haxe.lang.HxObject
{
	public Match(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Match(hunit.match.Match<T> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 45 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		hunit.match.Match.__hx_ctor_hunit_match_Match(this, previous, chainLogic);
	}
	
	
	public static <T_c> void __hx_ctor_hunit_match_Match(hunit.match.Match<T_c> __temp_me71, hunit.match.Match<T_c> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 47 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		__temp_me71.previous = previous;
		//line 48 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		__temp_me71.chainLogic = chainLogic;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		return new hunit.match.Match<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		return new hunit.match.Match<java.lang.Object>(((hunit.match.Match<java.lang.Object>) (arr.__get(0)) ), ((hunit.match.MatchChainLogic) (arr.__get(1)) ));
	}
	
	
	public hunit.match.Match<T> previous;
	
	public hunit.match.MatchChainLogic chainLogic;
	
	
	
	public hunit.match.GenericMatchFactory<T> _and;
	
	
	
	public hunit.match.GenericMatchFactory<T> _or;
	
	public boolean match(java.lang.Object value)
	{
		//line 59 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		boolean result = this.checkMatch(value);
		//line 61 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		hunit.match.Match<T> current = this;
		//line 62 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		while (( current.chainLogic != null ))
		{
			//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			{
				//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				hunit.match.MatchChainLogic _g = current.chainLogic;
				//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				if (( _g != null )) 
				{
					//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					switch (_g)
					{
						case And:
						{
							//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
							result = ( result && current.previous.checkMatch(value) );
							//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
							break;
						}
						
						
						case Or:
						{
							//line 65 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
							result = ( result || current.previous.checkMatch(value) );
							//line 65 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
							break;
						}
						
						
					}
					
				}
				
			}
			
			//line 68 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			current = current.previous;
		}
		
		//line 71 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		return result;
	}
	
	
	public boolean isChained()
	{
		//line 92 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		return ( this.previous != null );
	}
	
	
	@Override public java.lang.String toString()
	{
		//line 103 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		java.lang.String code = this.shortCode();
		//line 105 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		if (( this.previous == null )) 
		{
			//line 106 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			return ( ( "[" + code ) + "]" );
		}
		else
		{
			//line 108 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			java.lang.String result = ( "" + code );
			//line 109 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			hunit.match.Match<T> current = this;
			//line 110 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			while (( current.chainLogic != null ))
			{
				//line 111 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				{
					//line 111 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					hunit.match.MatchChainLogic _g = current.chainLogic;
					//line 111 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (( _g != null )) 
					{
						//line 111 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						switch (_g)
						{
							case And:
							{
								//line 112 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
								result = ( current.previous.shortCode() + (( " && " + result )) );
								//line 112 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
								break;
							}
							
							
							case Or:
							{
								//line 113 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
								result = ( current.previous.shortCode() + (( " || " + result )) );
								//line 113 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
								break;
							}
							
							
						}
						
					}
					
				}
				
				//line 115 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				current = current.previous;
			}
			
			//line 118 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			return ( ( "[" + result ) + "]" );
		}
		
	}
	
	
	public java.lang.String shortCode()
	{
		//line 129 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		throw haxe.lang.HaxeException.wrap("To be overriden");
	}
	
	
	public boolean checkMatch(java.lang.Object value)
	{
		//line 139 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		throw haxe.lang.HaxeException.wrap("To be overriden");
	}
	
	
	public hunit.match.GenericMatchFactory<T> get_and()
	{
		//line 149 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		if (( this._and == null )) 
		{
			//line 150 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			this._and = new hunit.match.GenericMatchFactory<T>(this, hunit.match.MatchChainLogic.And);
		}
		
		//line 153 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		return this._and;
	}
	
	
	public hunit.match.GenericMatchFactory<T> get_or()
	{
		//line 163 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		if (( this._or == null )) 
		{
			//line 164 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			this._or = new hunit.match.GenericMatchFactory<T>(this, hunit.match.MatchChainLogic.Or);
		}
		
		//line 167 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		return this._or;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		{
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			boolean __temp_executeDef1 = true;
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			switch (field.hashCode())
			{
				case 94850:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("_or")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						this._or = ((hunit.match.GenericMatchFactory<T>) (value) );
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case -1273775369:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("previous")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						this.previous = ((hunit.match.Match<T>) (value) );
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case 2926872:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("_and")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						this._and = ((hunit.match.GenericMatchFactory<T>) (value) );
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case -2096350947:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("chainLogic")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						this.chainLogic = ((hunit.match.MatchChainLogic) (value) );
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
			}
			
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			if (__temp_executeDef1) 
			{
				//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		{
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			boolean __temp_executeDef1 = true;
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			switch (field.hashCode())
			{
				case -1249338516:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("get_or")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_or")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case -1273775369:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("previous")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.previous;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case -74801810:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("get_and")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_and")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case -2096350947:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("chainLogic")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.chainLogic;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case -535500387:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("checkMatch")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "checkMatch")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case 96727:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("and")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.get_and();
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case -2028533623:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("shortCode")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "shortCode")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case 2926872:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("_and")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this._and;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case -1776922004:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("toString")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "toString")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case 3555:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("or")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.get_or();
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case 159022742:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("isChained")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "isChained")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case 94850:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("_or")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this._or;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case 103668165:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("match")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "match")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
			}
			
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			if (__temp_executeDef1) 
			{
				//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		{
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			boolean __temp_executeDef1 = true;
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			switch (field.hashCode())
			{
				case -1249338516:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("get_or")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.get_or();
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case 103668165:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("match")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.match(dynargs.__get(0));
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case -74801810:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("get_and")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.get_and();
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case 159022742:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("isChained")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.isChained();
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case -535500387:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("checkMatch")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.checkMatch(dynargs.__get(0));
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case -1776922004:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("toString")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.toString();
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
				case -2028533623:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					if (field.equals("shortCode")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.shortCode();
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					break;
				}
				
				
			}
			
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			if (__temp_executeDef1) 
			{
				//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		baseArr.push("_or");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		baseArr.push("or");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		baseArr.push("_and");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		baseArr.push("and");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		baseArr.push("chainLogic");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		baseArr.push("previous");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
		{
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


