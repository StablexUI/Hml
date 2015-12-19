package hunit.match;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class ObjectCache extends haxe.lang.HxObject
{
	public ObjectCache(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public ObjectCache()
	{
		//line 184 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		hunit.match.ObjectCache.__hx_ctor_hunit_match_ObjectCache(this);
	}
	
	
	public static void __hx_ctor_hunit_match_ObjectCache(hunit.match.ObjectCache __temp_me81)
	{
		//line 185 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		__temp_me81.keys = new haxe.root.Array(new java.lang.Object[]{});
		//line 186 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		__temp_me81.values = new haxe.root.Array<hunit.match.SimilarMatch>(new hunit.match.SimilarMatch[]{});
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		return new hunit.match.ObjectCache(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		return new hunit.match.ObjectCache();
	}
	
	
	public haxe.root.Array keys;
	
	public haxe.root.Array<hunit.match.SimilarMatch> values;
	
	public hunit.match.SimilarMatch get(java.lang.Object key)
	{
		//line 190 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		if (( this.keys.indexOf(key, null) < 0 )) 
		{
			//line 191 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			return null;
		}
		else
		{
			//line 193 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			return this.values.__get(this.keys.indexOf(key, null));
		}
		
	}
	
	
	public void set(java.lang.Object key, hunit.match.SimilarMatch value)
	{
		//line 198 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		if (( this.keys.indexOf(key, null) >= 0 )) 
		{
			//line 199 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			this.values.__set(this.keys.indexOf(key, null), value);
		}
		else
		{
			//line 201 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			this.keys.push(key);
			//line 202 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			this.values.push(value);
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		{
			//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			switch (field.hashCode())
			{
				case -823812830:
				{
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("values")) 
					{
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.values = ((haxe.root.Array<hunit.match.SimilarMatch>) (value) );
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return value;
					}
					
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case 3288564:
				{
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("keys")) 
					{
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.keys = ((haxe.root.Array) (value) );
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return value;
					}
					
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
			}
			
			//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		{
			//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			switch (field.hashCode())
			{
				case 113762:
				{
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("set")) 
					{
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set")) );
					}
					
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case 3288564:
				{
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("keys")) 
					{
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.keys;
					}
					
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case 102230:
				{
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("get")) 
					{
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get")) );
					}
					
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case -823812830:
				{
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("values")) 
					{
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.values;
					}
					
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
			}
			
			//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		{
			//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			boolean __temp_executeDef1 = true;
			//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			switch (field.hashCode())
			{
				case 113762:
				{
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("set")) 
					{
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.set(dynargs.__get(0), ((hunit.match.SimilarMatch) (dynargs.__get(1)) ));
					}
					
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
				case 102230:
				{
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					if (field.equals("get")) 
					{
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						__temp_executeDef1 = false;
						//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.get(dynargs.__get(0));
					}
					
					//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					break;
				}
				
				
			}
			
			//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (__temp_executeDef1) 
			{
				//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		baseArr.push("values");
		//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		baseArr.push("keys");
		//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
		{
			//line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


