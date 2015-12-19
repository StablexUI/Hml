package hunit.match.similar._SimilarMapMatch;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class DynamicMatchMap extends haxe.lang.HxObject
{
	public DynamicMatchMap(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public DynamicMatchMap()
	{
		//line 131 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		hunit.match.similar._SimilarMapMatch.DynamicMatchMap.__hx_ctor_hunit_match_similar__SimilarMapMatch_DynamicMatchMap(this);
	}
	
	
	public static void __hx_ctor_hunit_match_similar__SimilarMapMatch_DynamicMatchMap(hunit.match.similar._SimilarMapMatch.DynamicMatchMap __temp_me85)
	{
		//line 132 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		__temp_me85.keyList = new haxe.root.Array(new java.lang.Object[]{});
		//line 133 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		__temp_me85.valueList = new haxe.root.Array<hunit.match.Match>(new hunit.match.Match[]{});
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		return new hunit.match.similar._SimilarMapMatch.DynamicMatchMap(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		return new hunit.match.similar._SimilarMapMatch.DynamicMatchMap();
	}
	
	
	public haxe.root.Array keyList;
	
	public haxe.root.Array<hunit.match.Match> valueList;
	
	public haxe.root.Array keys()
	{
		//line 136 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		return this.keyList;
	}
	
	
	public boolean exists(java.lang.Object key)
	{
		//line 137 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		return ( this.keyList.indexOf(key, null) >= 0 );
	}
	
	
	public hunit.match.Match get(java.lang.Object key)
	{
		//line 138 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		if ( ! (this.exists(key)) ) 
		{
			//line 138 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return null;
		}
		else
		{
			//line 138 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return this.valueList.__get(this.keyList.indexOf(key, null));
		}
		
	}
	
	
	public void set(java.lang.Object key, hunit.match.Match value)
	{
		//line 141 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		if (( this.keyList.indexOf(key, null) >= 0 )) 
		{
			//line 142 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			this.valueList.__set(this.keyList.indexOf(key, null), value);
		}
		else
		{
			//line 144 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			this.keyList.push(key);
			//line 145 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			this.valueList.push(value);
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		{
			//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			switch (field.hashCode())
			{
				case -765946449:
				{
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("valueList")) 
					{
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						this.valueList = ((haxe.root.Array<hunit.match.Match>) (value) );
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return value;
					}
					
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
				case -815694947:
				{
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("keyList")) 
					{
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						this.keyList = ((haxe.root.Array) (value) );
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return value;
					}
					
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
			}
			
			//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		{
			//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			switch (field.hashCode())
			{
				case 113762:
				{
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("set")) 
					{
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set")) );
					}
					
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
				case -815694947:
				{
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("keyList")) 
					{
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.keyList;
					}
					
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
				case 102230:
				{
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("get")) 
					{
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get")) );
					}
					
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
				case -765946449:
				{
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("valueList")) 
					{
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.valueList;
					}
					
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
				case -1289358244:
				{
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("exists")) 
					{
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "exists")) );
					}
					
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
				case 3288564:
				{
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("keys")) 
					{
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "keys")) );
					}
					
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
			}
			
			//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		{
			//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			switch (field.hashCode())
			{
				case 113762:
				{
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("set")) 
					{
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						this.set(dynargs.__get(0), ((hunit.match.Match) (dynargs.__get(1)) ));
					}
					
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
				case 3288564:
				{
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("keys")) 
					{
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.keys();
					}
					
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
				case 102230:
				{
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("get")) 
					{
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.get(dynargs.__get(0));
					}
					
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
				case -1289358244:
				{
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (field.equals("exists")) 
					{
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						__temp_executeDef1 = false;
						//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.exists(dynargs.__get(0));
					}
					
					//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					break;
				}
				
				
			}
			
			//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		baseArr.push("valueList");
		//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		baseArr.push("keyList");
		//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
		{
			//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


