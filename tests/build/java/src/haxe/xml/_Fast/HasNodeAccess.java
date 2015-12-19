package haxe.xml._Fast;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class HasNodeAccess extends haxe.lang.DynamicObject
{
	public HasNodeAccess(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public HasNodeAccess(haxe.root.Xml x)
	{
		//line 82 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		haxe.xml._Fast.HasNodeAccess.__hx_ctor_haxe_xml__Fast_HasNodeAccess(this, x);
	}
	
	
	public static void __hx_ctor_haxe_xml__Fast_HasNodeAccess(haxe.xml._Fast.HasNodeAccess __temp_me44, haxe.root.Xml x)
	{
		//line 83 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		__temp_me44.__x = x;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return new haxe.xml._Fast.HasNodeAccess(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return new haxe.xml._Fast.HasNodeAccess(((haxe.root.Xml) (arr.__get(0)) ));
	}
	
	
	public haxe.root.Xml __x;
	
	public boolean resolve(java.lang.String name)
	{
		//line 87 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(this.__x.elementsNamed(name), "hasNext", null));
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_executeDef1 = true;
			//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			switch (field.hashCode())
			{
				case 94360:
				{
					//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("__x")) 
					{
						//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.__x = ((haxe.root.Xml) (value) );
						//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return value;
					}
					
					//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
			}
			
			//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_executeDef1) 
			{
				//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_executeDef1 = true;
			//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			switch (field.hashCode())
			{
				case 1097368044:
				{
					//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("resolve")) 
					{
						//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "resolve")) );
					}
					
					//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 94360:
				{
					//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("__x")) 
					{
						//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.__x;
					}
					
					//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
			}
			
			//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_executeDef1) 
			{
				//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_executeDef1 = true;
			//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			switch (field.hashCode())
			{
				case 1097368044:
				{
					//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("resolve")) 
					{
						//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.resolve(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
			}
			
			//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_executeDef1) 
			{
				//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		baseArr.push("__x");
		//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


