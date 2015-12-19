package hunit.match.similar;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class SimilarMapMatch<T> extends hunit.match.Match<T>
{
	public SimilarMapMatch(haxe.lang.EmptyObject empty)
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public SimilarMapMatch(hunit.match.SimilarMatch<T> root, hunit.match.ObjectCache processedObjects, java.lang.Object expected, hunit.match.Match<T> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 39 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 39 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		hunit.match.similar.SimilarMapMatch.__hx_ctor_hunit_match_similar_SimilarMapMatch(this, root, processedObjects, expected, previous, chainLogic);
	}
	
	
	public static <T_c> void __hx_ctor_hunit_match_similar_SimilarMapMatch(hunit.match.similar.SimilarMapMatch<T_c> __temp_me84, hunit.match.SimilarMatch<T_c> root, hunit.match.ObjectCache processedObjects, java.lang.Object expected, hunit.match.Match<T_c> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		if ( ! (( expected instanceof haxe.IMap )) ) 
		{
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			throw haxe.lang.HaxeException.wrap(new hunit.exceptions.InvalidTestException("`expected` value should be an `haxe.Constraints.IMap` instance.", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.match.similar.SimilarMapMatch", "SimilarMapMatch.hx", "new"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (36) )) )})));
		}
		
		//line 39 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		hunit.match.Match.__hx_ctor_hunit_match_Match(__temp_me84, previous, chainLogic);
		//line 41 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		__temp_me84.root = root;
		//line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		__temp_me84.expected = __temp_me84.getMatchMap(((haxe.IMap) (expected) ), processedObjects);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		return new hunit.match.similar.SimilarMapMatch<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		return new hunit.match.similar.SimilarMapMatch<java.lang.Object>(((hunit.match.SimilarMatch<java.lang.Object>) (arr.__get(0)) ), ((hunit.match.ObjectCache) (arr.__get(1)) ), arr.__get(2), ((hunit.match.Match<java.lang.Object>) (arr.__get(3)) ), ((hunit.match.MatchChainLogic) (arr.__get(4)) ));
	}
	
	
	public hunit.match.similar._SimilarMapMatch.DynamicMatchMap expected;
	
	public hunit.match.SimilarMatch<T> root;
	
	@Override public boolean checkMatch(java.lang.Object value)
	{
		//line 52 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		if ( ! (( value instanceof haxe.IMap )) ) 
		{
			//line 52 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return false;
		}
		
		//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		haxe.IMap value1 = ((haxe.IMap) (value) );
		//line 56 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		int cnt = 0;
		//line 57 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		{
			//line 57 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			java.lang.Object __temp_iterator1 = value1.keys();
			//line 57 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 57 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				java.lang.Object k = ((java.lang.Object) (haxe.lang.Runtime.callField(__temp_iterator1, "next", null)) );
				//line 57 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				cnt++;
			}
			
		}
		
		//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		{
			//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			int _g = 0;
			//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			haxe.root.Array _g1 = this.expected.keys();
			//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			while (( _g < _g1.length ))
			{
				//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				java.lang.Object k1 = _g1.__get(_g);
				//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				 ++ _g;
				//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				cnt--;
			}
			
		}
		
		//line 59 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		if (( cnt != 0 )) 
		{
			//line 59 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return false;
		}
		
		//line 61 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		java.lang.Object actual = null;
		//line 62 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		hunit.match.Match match = null;
		//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		{
			//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			int _g2 = 0;
			//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			haxe.root.Array _g11 = this.expected.keys();
			//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			while (( _g2 < _g11.length ))
			{
				//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				java.lang.Object key = _g11.__get(_g2);
				//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				 ++ _g2;
				//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				actual = value1.get(key);
				//line 65 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				match = this.expected.get(key);
				//line 68 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				if (( match instanceof hunit.match.SimilarMatch )) 
				{
					//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (( this.root.checkedObjects.indexOf(actual, null) >= 0 )) 
					{
						//line 70 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						continue;
					}
					
				}
				
				//line 74 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				if ( ! (match.match(actual)) ) 
				{
					//line 74 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					return false;
				}
				
			}
			
		}
		
		//line 77 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		return true;
	}
	
	
	@Override public java.lang.String shortCode()
	{
		//line 87 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		haxe.root.Array<java.lang.String> parts = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
		//line 88 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		{
			//line 88 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			int _g = 0;
			//line 88 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			haxe.root.Array _g1 = this.expected.keys();
			//line 88 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			while (( _g < _g1.length ))
			{
				//line 88 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				java.lang.Object key = _g1.__get(_g);
				//line 88 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				 ++ _g;
				//line 89 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				parts.push(( ( haxe.root.Std.string(key) + "=>" ) + this.expected.get(key).toString() ));
			}
			
		}
		
		//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		java.lang.String str = ( ( "[" + parts.join(", ") ) + "]" );
		//line 93 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		if (( str.length() == hunit.Utils.shortenString(str).length() )) 
		{
			//line 94 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return str;
		}
		else
		{
			//line 96 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			str = hunit.Utils.shortenString(str);
			//line 97 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return ( haxe.lang.StringExt.substr(str, 0, ( str.length() - 6 )) + "<...>]" );
		}
		
	}
	
	
	public hunit.match.similar._SimilarMapMatch.DynamicMatchMap getMatchMap(haxe.IMap expected, hunit.match.ObjectCache processedObjects)
	{
		//line 108 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		hunit.match.similar._SimilarMapMatch.DynamicMatchMap map = new hunit.match.similar._SimilarMapMatch.DynamicMatchMap();
		//line 110 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		{
			//line 110 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			java.lang.Object __temp_iterator1 = expected.keys();
			//line 110 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 110 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				java.lang.Object key = ((java.lang.Object) (haxe.lang.Runtime.callField(__temp_iterator1, "next", null)) );
				//line 111 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				map.set(key, this.root.createMatcherForValue(expected.get(key), processedObjects));
			}
			
		}
		
		//line 114 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		return map;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		{
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			switch (field.hashCode())
			{
				case 3506402:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("root")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						this.root = ((hunit.match.SimilarMatch<T>) (value) );
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return value;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
				case -1935718728:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("expected")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						this.expected = ((hunit.match.similar._SimilarMapMatch.DynamicMatchMap) (value) );
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return value;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
			}
			
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		{
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			switch (field.hashCode())
			{
				case -1920172339:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("getMatchMap")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getMatchMap")) );
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
				case -1935718728:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("expected")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.expected;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
				case -2028533623:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("shortCode")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "shortCode")) );
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
				case 3506402:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("root")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.root;
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
				case -535500387:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("checkMatch")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "checkMatch")) );
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
			}
			
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		{
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			int __temp_hash2 = field.hashCode();
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			switch (__temp_hash2)
			{
				case -2028533623:
				case -535500387:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (( (( ( __temp_hash2 == -2028533623 ) && field.equals("shortCode") )) || field.equals("checkMatch") )) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
				case -1920172339:
				{
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("getMatchMap")) 
					{
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.getMatchMap(((haxe.IMap) (dynargs.__get(0)) ), ((hunit.match.ObjectCache) (dynargs.__get(1)) ));
					}
					
					//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
			}
			
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		baseArr.push("root");
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		baseArr.push("expected");
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		{
			//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


