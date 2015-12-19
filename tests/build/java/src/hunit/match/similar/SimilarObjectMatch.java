package hunit.match.similar;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class SimilarObjectMatch<T> extends hunit.match.Match<T>
{
	public SimilarObjectMatch(haxe.lang.EmptyObject empty)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public SimilarObjectMatch(hunit.match.SimilarMatch<T> root, hunit.match.ObjectCache processedObjects, java.lang.Object expected, hunit.match.Match<T> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 38 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 38 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		hunit.match.similar.SimilarObjectMatch.__hx_ctor_hunit_match_similar_SimilarObjectMatch(this, root, processedObjects, expected, previous, chainLogic);
	}
	
	
	public static <T_c> void __hx_ctor_hunit_match_similar_SimilarObjectMatch(hunit.match.similar.SimilarObjectMatch<T_c> __temp_me86, hunit.match.SimilarMatch<T_c> root, hunit.match.ObjectCache processedObjects, java.lang.Object expected, hunit.match.Match<T_c> previous, hunit.match.MatchChainLogic chainLogic)
	{
		//line 34 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		if ( ! (hunit.Utils.isObject(expected)) ) 
		{
			//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			throw haxe.lang.HaxeException.wrap(new hunit.exceptions.InvalidTestException("`expected` value should be an object.", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.match.similar.SimilarObjectMatch", "SimilarObjectMatch.hx", "new"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (35) )) )})));
		}
		
		//line 38 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		hunit.match.Match.__hx_ctor_hunit_match_Match(__temp_me86, previous, chainLogic);
		//line 40 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		__temp_me86.root = root;
		//line 41 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		__temp_me86.expected = __temp_me86.getFieldMatchMap(expected, processedObjects);
	}
	
	
	public static haxe.ds.StringMap getFieldValueMap(java.lang.Object object)
	{
		//line 122 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		haxe.ds.StringMap map = new haxe.ds.StringMap();
		//line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		haxe.root.Array<java.lang.String> fields = null;
		//line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		{
			//line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			haxe.root.ValueType _g = haxe.root.Type.typeof(object);
			//line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			switch (_g.index)
			{
				case 4:
				{
					//line 125 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					fields = haxe.root.Reflect.fields(object);
					//line 125 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					break;
				}
				
				
				case 6:
				{
					//line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					java.lang.Class cls = ((java.lang.Class) (_g.params[0]) );
					//line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					{
						//line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						java.lang.Class __temp_switch1 = (((java.lang.Class) (_g.params[0]) ));
						//line 126 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						if (haxe.lang.Runtime.eq(__temp_switch1, java.lang.String.class)) 
						{
							//line 126 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
							fields = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
						}
						else
						{
							//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
							fields = haxe.root.Type.getInstanceFields(cls);
						}
						
					}
					
					//line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					break;
				}
				
				
				default:
				{
					//line 128 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					fields = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
					//line 128 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					break;
				}
				
			}
			
		}
		
		//line 131 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		java.lang.Object property = null;
		//line 132 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		{
			//line 132 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			int _g1 = 0;
			//line 132 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			while (( _g1 < fields.length ))
			{
				//line 132 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				java.lang.String field = fields.__get(_g1);
				//line 132 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				 ++ _g1;
				//line 137 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				property = haxe.root.Reflect.getProperty(object, field);
				//line 138 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				if ( ! (haxe.root.Reflect.isFunction(property)) ) 
				{
					//line 139 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					map.set(field, property);
				}
				
			}
			
		}
		
		//line 143 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		return map;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		return new hunit.match.similar.SimilarObjectMatch<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		return new hunit.match.similar.SimilarObjectMatch<java.lang.Object>(((hunit.match.SimilarMatch<java.lang.Object>) (arr.__get(0)) ), ((hunit.match.ObjectCache) (arr.__get(1)) ), arr.__get(2), ((hunit.match.Match<java.lang.Object>) (arr.__get(3)) ), ((hunit.match.MatchChainLogic) (arr.__get(4)) ));
	}
	
	
	public haxe.ds.StringMap<hunit.match.Match> expected;
	
	public hunit.match.SimilarMatch<T> root;
	
	@Override public boolean checkMatch(java.lang.Object value)
	{
		//line 51 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		haxe.ds.StringMap valueMap = hunit.match.similar.SimilarObjectMatch.getFieldValueMap(value);
		//line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		java.lang.Object actual = null;
		//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		hunit.match.Match match = null;
		//line 55 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		{
			//line 55 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			java.lang.Object __temp_iterator1 = this.expected.keys();
			//line 55 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 55 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				java.lang.String field = haxe.lang.Runtime.toString(haxe.lang.Runtime.callField(__temp_iterator1, "next", null));
				//line 56 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				if ( ! (valueMap.exists(field)) ) 
				{
					//line 56 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					return false;
				}
				
				//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				actual = ((java.lang.Object) (valueMap.get(field)) );
				//line 59 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				match = ((hunit.match.Match) (this.expected.get(field)) );
				//line 62 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				if (( match instanceof hunit.match.SimilarMatch )) 
				{
					//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					if (( this.root.checkedObjects.indexOf(actual, null) >= 0 )) 
					{
						//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						continue;
					}
					
				}
				
				//line 68 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				if ( ! (match.match(actual)) ) 
				{
					//line 68 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					return false;
				}
				
			}
			
		}
		
		//line 71 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		return true;
	}
	
	
	@Override public java.lang.String shortCode()
	{
		//line 81 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		haxe.root.Array<java.lang.String> parts = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
		//line 82 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		{
			//line 82 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			java.lang.Object __temp_iterator1 = this.expected.keys();
			//line 82 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 82 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				java.lang.String field = haxe.lang.Runtime.toString(haxe.lang.Runtime.callField(__temp_iterator1, "next", null));
				//line 83 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				parts.unshift(( ( field + ":" ) + ((hunit.match.Match) (this.expected.get(field)) ).toString() ));
			}
			
		}
		
		//line 85 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		java.lang.String str = ( ( "{" + parts.join(", ") ) + "}" );
		//line 87 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		if (( str.length() == hunit.Utils.shortenString(str).length() )) 
		{
			//line 88 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			return str;
		}
		else
		{
			//line 90 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			str = hunit.Utils.shortenString(str);
			//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			return ( haxe.lang.StringExt.substr(str, 0, ( str.length() - 6 )) + "<...>}" );
		}
		
	}
	
	
	public haxe.ds.StringMap<hunit.match.Match> getFieldMatchMap(java.lang.Object object, hunit.match.ObjectCache processedObjects)
	{
		//line 102 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		haxe.ds.StringMap fieldValue = hunit.match.similar.SimilarObjectMatch.getFieldValueMap(object);
		//line 103 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		haxe.ds.StringMap<hunit.match.Match> fieldMatch = new haxe.ds.StringMap<hunit.match.Match>();
		//line 105 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		java.lang.Object value = null;
		//line 106 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		{
			//line 106 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			java.lang.Object __temp_iterator1 = fieldValue.keys();
			//line 106 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 106 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				java.lang.String field = haxe.lang.Runtime.toString(haxe.lang.Runtime.callField(__temp_iterator1, "next", null));
				//line 107 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				value = ((java.lang.Object) (fieldValue.get(field)) );
				//line 109 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				{
					//line 109 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					hunit.match.Match value1 = this.root.createMatcherForValue(value, processedObjects);
					//line 109 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					fieldMatch.set(field, value1);
				}
				
			}
			
		}
		
		//line 112 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		return fieldMatch;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		{
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			switch (field.hashCode())
			{
				case 3506402:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					if (field.equals("root")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						this.root = ((hunit.match.SimilarMatch<T>) (value) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					break;
				}
				
				
				case -1935718728:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					if (field.equals("expected")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						this.expected = ((haxe.ds.StringMap<hunit.match.Match>) (value) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					break;
				}
				
				
			}
			
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		{
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			switch (field.hashCode())
			{
				case -1158715205:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					if (field.equals("getFieldMatchMap")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getFieldMatchMap")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					break;
				}
				
				
				case -1935718728:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					if (field.equals("expected")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return this.expected;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					break;
				}
				
				
				case -2028533623:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					if (field.equals("shortCode")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "shortCode")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					break;
				}
				
				
				case 3506402:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					if (field.equals("root")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return this.root;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					break;
				}
				
				
				case -535500387:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					if (field.equals("checkMatch")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "checkMatch")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					break;
				}
				
				
			}
			
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		{
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			int __temp_hash2 = field.hashCode();
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			switch (__temp_hash2)
			{
				case -2028533623:
				case -535500387:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					if (( (( ( __temp_hash2 == -2028533623 ) && field.equals("shortCode") )) || field.equals("checkMatch") )) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					break;
				}
				
				
				case -1158715205:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					if (field.equals("getFieldMatchMap")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return this.getFieldMatchMap(dynargs.__get(0), ((hunit.match.ObjectCache) (dynargs.__get(1)) ));
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					break;
				}
				
				
			}
			
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		baseArr.push("root");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		baseArr.push("expected");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
		{
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


