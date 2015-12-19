package haxe.xml._Fast;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class AttribAccess extends haxe.lang.DynamicObject
{
	public AttribAccess(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public AttribAccess(haxe.root.Xml x)
	{
		//line 47 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		haxe.xml._Fast.AttribAccess.__hx_ctor_haxe_xml__Fast_AttribAccess(this, x);
	}
	
	
	public static void __hx_ctor_haxe_xml__Fast_AttribAccess(haxe.xml._Fast.AttribAccess __temp_me42, haxe.root.Xml x)
	{
		//line 48 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		__temp_me42.__x = x;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return new haxe.xml._Fast.AttribAccess(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return new haxe.xml._Fast.AttribAccess(((haxe.root.Xml) (arr.__get(0)) ));
	}
	
	
	public haxe.root.Xml __x;
	
	public java.lang.String resolve(java.lang.String name)
	{
		//line 52 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		if (( this.__x.nodeType == haxe.root.Xml.Document )) 
		{
			//line 53 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			throw haxe.lang.HaxeException.wrap(( "Cannot access document attribute " + name ));
		}
		
		//line 54 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		java.lang.String v = this.__x.get(name);
		//line 55 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		if (( v == null )) 
		{
			//line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			java.lang.String __temp_stmt1 = null;
			//line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			{
				//line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				haxe.root.Xml _this = this.__x;
				//line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				if (( _this.nodeType != haxe.root.Xml.Element )) 
				{
					//line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					throw haxe.lang.HaxeException.wrap(( "Bad node type, expected Element but found " + _this.nodeType ));
				}
				
				//line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				__temp_stmt1 = _this.nodeName;
			}
			
			//line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			throw haxe.lang.HaxeException.wrap(( ( __temp_stmt1 + " is missing attribute " ) + name ));
		}
		
		//line 57 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return v;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_executeDef1 = true;
			//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			switch (field.hashCode())
			{
				case 94360:
				{
					//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("__x")) 
					{
						//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.__x = ((haxe.root.Xml) (value) );
						//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return value;
					}
					
					//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
			}
			
			//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_executeDef1) 
			{
				//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_executeDef1 = true;
			//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			switch (field.hashCode())
			{
				case 1097368044:
				{
					//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("resolve")) 
					{
						//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "resolve")) );
					}
					
					//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 94360:
				{
					//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("__x")) 
					{
						//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.__x;
					}
					
					//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
			}
			
			//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_executeDef1) 
			{
				//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_executeDef1 = true;
			//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			switch (field.hashCode())
			{
				case 1097368044:
				{
					//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("resolve")) 
					{
						//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.resolve(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
			}
			
			//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_executeDef1) 
			{
				//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		baseArr.push("__x");
		//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


