package hunit.match;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class SimilarMatch<T> extends hunit.match.Match<T>
{
	public SimilarMatch(haxe.lang.EmptyObject empty)
	{
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public SimilarMatch(java.lang.Object expected, hunit.match.Match<T> previous, hunit.match.MatchChainLogic chainLogic, hunit.match.SimilarMatch<T> root, hunit.match.ObjectCache processedObjects)
	{
		//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		hunit.match.SimilarMatch.__hx_ctor_hunit_match_SimilarMatch(this, expected, previous, chainLogic, root, processedObjects);
	}
	
	
	public static <T_c> void __hx_ctor_hunit_match_SimilarMatch(hunit.match.SimilarMatch<T_c> __temp_me80, java.lang.Object expected, hunit.match.Match<T_c> previous, hunit.match.MatchChainLogic chainLogic, hunit.match.SimilarMatch<T_c> root, hunit.match.ObjectCache processedObjects)
	{
		//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		hunit.match.Match.__hx_ctor_hunit_match_Match(__temp_me80, previous, chainLogic);
		//line 70 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		__temp_me80.root = root;
		//line 72 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		if (( processedObjects == null )) 
		{
			//line 73 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			processedObjects = new hunit.match.ObjectCache();
		}
		
		//line 75 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		processedObjects.set(expected, ((hunit.match.SimilarMatch) (__temp_me80) ));
		//line 77 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		if (__temp_me80.isRoot()) 
		{
			//line 78 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			__temp_me80.buildMatcher(__temp_me80, expected, processedObjects);
		}
		else
		{
			//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			__temp_me80.buildMatcher(root, expected, processedObjects);
		}
		
	}
	
	
	public static java.lang.String getAType(java.lang.Object value)
	{
		//line 51 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		if (( value instanceof haxe.IMap )) 
		{
			//line 51 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			return haxe.lang.Runtime.toString("map");
		}
		
		//line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		{
			//line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			haxe.root.ValueType _g = haxe.root.Type.typeof(value);
			//line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			switch (_g.index)
			{
				case 6:
				{
					//line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					{
						//line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						java.lang.Class __temp_switch1 = (((java.lang.Class) (_g.params[0]) ));
						//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						if (haxe.lang.Runtime.eq(__temp_switch1, java.lang.String.class)) 
						{
							//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
							throw haxe.lang.HaxeException.wrap(new hunit.exceptions.InvalidTestException("Invalid `expected` value similar matcher", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.match.SimilarMatch", "SimilarMatch.hx", "getAType"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (54) )) )})));
						}
						else
						{
							//line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
							if (haxe.lang.Runtime.eq(__temp_switch1, haxe.root.Array.class)) 
							{
								//line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
								return haxe.lang.Runtime.toString("array");
							}
							else
							{
								//line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
								return haxe.lang.Runtime.toString("object");
							}
							
						}
						
					}
					
				}
				
				
				case 4:
				{
					//line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					return haxe.lang.Runtime.toString("object");
				}
				
				
				default:
				{
					//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					throw haxe.lang.HaxeException.wrap(new hunit.exceptions.InvalidTestException("Invalid `expected` value similar matcher", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.match.SimilarMatch", "SimilarMatch.hx", "getAType"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (58) )) )})));
				}
				
			}
			
		}
		
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		return new hunit.match.SimilarMatch<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		return new hunit.match.SimilarMatch<java.lang.Object>(arr.__get(0), ((hunit.match.Match<java.lang.Object>) (arr.__get(1)) ), ((hunit.match.MatchChainLogic) (arr.__get(2)) ), ((hunit.match.SimilarMatch<java.lang.Object>) (arr.__get(3)) ), ((hunit.match.ObjectCache) (arr.__get(4)) ));
	}
	
	
	public hunit.match.SimilarMatch<T> root;
	
	public hunit.match.Match<T> matcher;
	
	public haxe.root.Array checkedObjects;
	
	public void buildMatcher(hunit.match.SimilarMatch<T> root, java.lang.Object expected, hunit.match.ObjectCache processedObjects)
	{
		//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		java.lang.String _g = hunit.match.SimilarMatch.getAType(expected);
		//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		{
			//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			java.lang.String __temp_svar1 = (_g);
			//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			boolean __temp_executeDef2 = true;
			//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			switch (__temp_svar1.hashCode())
			{
				case -1023368385:
				{
					//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (__temp_svar1.equals("object")) 
					{
						//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef2 = false;
						//line 92 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.matcher = new hunit.match.similar.SimilarObjectMatch<T>(root, processedObjects, expected, null, null);
					}
					
					//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case 107868:
				{
					//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (__temp_svar1.equals("map")) 
					{
						//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef2 = false;
						//line 94 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.matcher = new hunit.match.similar.SimilarMapMatch<T>(root, processedObjects, expected, null, null);
					}
					
					//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case 93090393:
				{
					//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (__temp_svar1.equals("array")) 
					{
						//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef2 = false;
						//line 93 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.matcher = new hunit.match.similar.SimilarArrayMatch<T>(root, processedObjects, ((haxe.root.Array) (expected) ), null, null);
					}
					
					//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
			}
			
			//line 95 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (__temp_executeDef2) 
			{
				//line 95 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				throw haxe.lang.HaxeException.wrap(new hunit.exceptions.InvalidTestException("Provided value can not be used with `similar` matcher", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.match.SimilarMatch", "SimilarMatch.hx", "buildMatcher"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (95) )) )})));
			}
			
		}
		
	}
	
	
	public boolean isRoot()
	{
		//line 106 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		return ( this.root == null );
	}
	
	
	@Override public boolean checkMatch(java.lang.Object value)
	{
		//line 116 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		if (this.isRoot()) 
		{
			//line 117 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			this.checkedObjects = new haxe.root.Array(new java.lang.Object[]{});
			//line 118 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			this.checkedObjects.push(value);
		}
		else
		{
			//line 120 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			this.root.checkedObjects.push(value);
		}
		
		//line 123 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		boolean result = this.matcher.checkMatch(value);
		//line 125 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		if (this.isRoot()) 
		{
			//line 126 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			this.checkedObjects = null;
		}
		
		//line 129 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		return result;
	}
	
	
	@Override public java.lang.String shortCode()
	{
		//line 139 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		return this.matcher.shortCode();
	}
	
	
	public hunit.match.Match createMatcherForValue(java.lang.Object value, hunit.match.ObjectCache processedObjects)
	{
		//line 149 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		hunit.match.Match match = null;
		//line 151 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		if (( value instanceof hunit.match.Match )) 
		{
			//line 152 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			match = ((hunit.match.Match) (value) );
		}
		else
		{
			//line 156 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (hunit.Utils.isObject(value)) 
			{
				//line 157 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				match = processedObjects.get(value);
				//line 158 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				if (( match == null )) 
				{
					//line 159 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					match = ((hunit.match.Match) (new hunit.match.SimilarMatch<T>(value, null, null, this, processedObjects)) );
				}
				
			}
			else
			{
				//line 164 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				match = new hunit.match.EqualMatch(value, null, null);
			}
			
		}
		
		//line 168 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		return match;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		{
			//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			switch (field.hashCode())
			{
				case 159052653:
				{
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("checkedObjects")) 
					{
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.checkedObjects = ((haxe.root.Array) (value) );
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return value;
					}
					
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case 3506402:
				{
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("root")) 
					{
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.root = ((hunit.match.SimilarMatch<T>) (value) );
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return value;
					}
					
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case 840862002:
				{
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("matcher")) 
					{
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.matcher = ((hunit.match.Match<T>) (value) );
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return value;
					}
					
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
			}
			
			//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		{
			//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			switch (field.hashCode())
			{
				case -594885410:
				{
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("createMatcherForValue")) 
					{
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "createMatcherForValue")) );
					}
					
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case 3506402:
				{
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("root")) 
					{
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.root;
					}
					
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case -2028533623:
				{
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("shortCode")) 
					{
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "shortCode")) );
					}
					
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case 840862002:
				{
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("matcher")) 
					{
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.matcher;
					}
					
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case -535500387:
				{
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("checkMatch")) 
					{
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "checkMatch")) );
					}
					
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case 159052653:
				{
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("checkedObjects")) 
					{
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.checkedObjects;
					}
					
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case -1180148436:
				{
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("isRoot")) 
					{
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "isRoot")) );
					}
					
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case -422452508:
				{
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("buildMatcher")) 
					{
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "buildMatcher")) );
					}
					
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
			}
			
			//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		{
			//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			int __temp_hash2 = field.hashCode();
			//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			switch (__temp_hash2)
			{
				case -2028533623:
				case -535500387:
				{
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (( (( ( __temp_hash2 == -2028533623 ) && field.equals("shortCode") )) || field.equals("checkMatch") )) 
					{
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case -422452508:
				{
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("buildMatcher")) 
					{
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.buildMatcher(((hunit.match.SimilarMatch<T>) (dynargs.__get(0)) ), dynargs.__get(1), ((hunit.match.ObjectCache) (dynargs.__get(2)) ));
					}
					
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case -594885410:
				{
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("createMatcherForValue")) 
					{
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.createMatcherForValue(dynargs.__get(0), ((hunit.match.ObjectCache) (dynargs.__get(1)) ));
					}
					
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case -1180148436:
				{
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("isRoot")) 
					{
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.isRoot();
					}
					
					//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
			}
			
			//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		baseArr.push("checkedObjects");
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		baseArr.push("matcher");
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		baseArr.push("root");
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		{
			//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


