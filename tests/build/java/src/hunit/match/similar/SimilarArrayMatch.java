package hunit.match.similar;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class SimilarArrayMatch<T> extends hunit.match.Match<T>
{
	public SimilarArrayMatch(haxe.lang.EmptyObject empty)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public SimilarArrayMatch(hunit.match.SimilarMatch<T> root, hunit.match.ObjectCache processedObjects, haxe.root.Array expected, hunit.match.Match<T> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 38 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 38 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		hunit.match.similar.SimilarArrayMatch.__hx_ctor_hunit_match_similar_SimilarArrayMatch(this, root, processedObjects, expected, previous, chainLogic);
	}
	
	
	public static <T_c> void __hx_ctor_hunit_match_similar_SimilarArrayMatch(hunit.match.similar.SimilarArrayMatch<T_c> __temp_me83, hunit.match.SimilarMatch<T_c> root, hunit.match.ObjectCache processedObjects, haxe.root.Array expected, hunit.match.Match<T_c> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 34 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		if ( ! (( expected instanceof haxe.root.Array )) ) 
		{
			//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			throw haxe.lang.HaxeException.wrap(new hunit.exceptions.InvalidTestException("`expected` value should be an array.", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.match.similar.SimilarArrayMatch", "SimilarArrayMatch.hx", "new"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (35) )) )})));
		}
		
		//line 38 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		hunit.match.Match.__hx_ctor_hunit_match_Match(__temp_me83, previous, chainLogic);
		//line 40 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		__temp_me83.root = root;
		//line 41 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		__temp_me83.expected = __temp_me83.getArrayMatchMap(expected, processedObjects);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		return new hunit.match.similar.SimilarArrayMatch<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		return new hunit.match.similar.SimilarArrayMatch<java.lang.Object>(((hunit.match.SimilarMatch<java.lang.Object>) (arr.__get(0)) ), ((hunit.match.ObjectCache) (arr.__get(1)) ), ((haxe.root.Array) (arr.__get(2)) ), ((hunit.match.Match<java.lang.Object>) (arr.__get(3)) ), ((hunit.match.MatchChainLogic) (arr.__get(4)) ));
	}
	
	
	public haxe.root.Array<hunit.match.Match> expected;
	
	public hunit.match.SimilarMatch<T> root;
	
	@Override public boolean checkMatch(java.lang.Object value)
	{
		//line 51 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		if ( ! (( value instanceof haxe.root.Array )) ) 
		{
			//line 51 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			return false;
		}
		
		//line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		haxe.root.Array value1 = ((haxe.root.Array) (value) );
		//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		if (( this.expected.length != value1.length )) 
		{
			//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			return false;
		}
		
		//line 56 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		java.lang.Object actual = null;
		//line 57 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		hunit.match.Match match = null;
		//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		{
			//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			int _g1 = 0;
			//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			int _g = this.expected.length;
			//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			while (( _g1 < _g ))
			{
				//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				int i = _g1++;
				//line 59 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				actual = value1.__get(i);
				//line 60 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				match = this.expected.__get(i);
				//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				if (( match instanceof hunit.match.SimilarMatch )) 
				{
					//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					if (( this.root.checkedObjects.indexOf(actual, null) >= 0 )) 
					{
						//line 65 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						continue;
					}
					
				}
				
				//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				if ( ! (match.match(actual)) ) 
				{
					//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					return false;
				}
				
			}
			
		}
		
		//line 72 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		return true;
	}
	
	
	@Override public java.lang.String shortCode()
	{
		//line 82 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		haxe.root.Array<java.lang.String> parts = ((haxe.root.Array<java.lang.String>) (((haxe.root.Array) (this.expected.map(( (( hunit.match.similar.SimilarArrayMatch_shortCode_82__Fun.__hx_current != null )) ? (hunit.match.similar.SimilarArrayMatch_shortCode_82__Fun.__hx_current) : (hunit.match.similar.SimilarArrayMatch_shortCode_82__Fun.__hx_current = ((hunit.match.similar.SimilarArrayMatch_shortCode_82__Fun) (new hunit.match.similar.SimilarArrayMatch_shortCode_82__Fun()) )) ))) )) );
		//line 83 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		java.lang.String str = ( ( "[" + parts.join(", ") ) + "]" );
		//line 85 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		if (( str.length() == hunit.Utils.shortenString(str).length() )) 
		{
			//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			return str;
		}
		else
		{
			//line 88 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			str = hunit.Utils.shortenString(str);
			//line 89 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			return ( haxe.lang.StringExt.substr(str, 0, ( str.length() - 6 )) + "<...>]" );
		}
		
	}
	
	
	public haxe.root.Array<hunit.match.Match> getArrayMatchMap(haxe.root.Array expected, hunit.match.ObjectCache processedObjects)
	{
		//line 100 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		haxe.root.Array<hunit.match.Match> matchers = new haxe.root.Array<hunit.match.Match>(new hunit.match.Match[]{});
		//line 102 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		{
			//line 102 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			int _g1 = 0;
			//line 102 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			int _g = expected.length;
			//line 102 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			while (( _g1 < _g ))
			{
				//line 102 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				int i = _g1++;
				//line 103 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				matchers.push(this.root.createMatcherForValue(expected.__get(i), processedObjects));
			}
			
		}
		
		//line 106 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		return matchers;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		{
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			switch (field.hashCode())
			{
				case 3506402:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					if (field.equals("root")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						this.root = ((hunit.match.SimilarMatch<T>) (value) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					break;
				}
				
				
				case -1935718728:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					if (field.equals("expected")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						this.expected = ((haxe.root.Array<hunit.match.Match>) (value) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					break;
				}
				
				
			}
			
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		{
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			switch (field.hashCode())
			{
				case -1850643686:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					if (field.equals("getArrayMatchMap")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getArrayMatchMap")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					break;
				}
				
				
				case -1935718728:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					if (field.equals("expected")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return this.expected;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					break;
				}
				
				
				case -2028533623:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					if (field.equals("shortCode")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "shortCode")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					break;
				}
				
				
				case 3506402:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					if (field.equals("root")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return this.root;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					break;
				}
				
				
				case -535500387:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					if (field.equals("checkMatch")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "checkMatch")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					break;
				}
				
				
			}
			
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		{
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			int __temp_hash2 = field.hashCode();
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			switch (__temp_hash2)
			{
				case -2028533623:
				case -535500387:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					if (( (( ( __temp_hash2 == -2028533623 ) && field.equals("shortCode") )) || field.equals("checkMatch") )) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					break;
				}
				
				
				case -1850643686:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					if (field.equals("getArrayMatchMap")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return this.getArrayMatchMap(((haxe.root.Array) (dynargs.__get(0)) ), ((hunit.match.ObjectCache) (dynargs.__get(1)) ));
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					break;
				}
				
				
			}
			
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		baseArr.push("root");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		baseArr.push("expected");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
		{
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


