package haxe.xml._Fast;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class NodeAccess extends haxe.lang.DynamicObject
{
	public NodeAccess(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public NodeAccess(haxe.root.Xml x)
	{
		//line 28 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		haxe.xml._Fast.NodeAccess.__hx_ctor_haxe_xml__Fast_NodeAccess(this, x);
	}
	
	
	public static void __hx_ctor_haxe_xml__Fast_NodeAccess(haxe.xml._Fast.NodeAccess __temp_me41, haxe.root.Xml x)
	{
		//line 29 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		__temp_me41.__x = x;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return new haxe.xml._Fast.NodeAccess(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return new haxe.xml._Fast.NodeAccess(((haxe.root.Xml) (arr.__get(0)) ));
	}
	
	
	public haxe.root.Xml __x;
	
	public haxe.xml.Fast resolve(java.lang.String name)
	{
		//line 33 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		haxe.root.Xml x = ((haxe.root.Xml) (haxe.lang.Runtime.callField(this.__x.elementsNamed(name), "next", null)) );
		//line 34 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		if (( x == null )) 
		{
			//line 35 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			java.lang.String xname = null;
			//line 35 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (( this.__x.nodeType == haxe.root.Xml.Document )) 
			{
				//line 35 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				xname = "Document";
			}
			else
			{
				//line 35 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				haxe.root.Xml _this = this.__x;
				//line 35 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				if (( _this.nodeType != haxe.root.Xml.Element )) 
				{
					//line 35 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					throw haxe.lang.HaxeException.wrap(( "Bad node type, expected Element but found " + _this.nodeType ));
				}
				
				//line 35 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				xname = _this.nodeName;
			}
			
			//line 36 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			throw haxe.lang.HaxeException.wrap(( ( xname + " is missing element " ) + name ));
		}
		
		//line 38 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return new haxe.xml.Fast(((haxe.root.Xml) (x) ));
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_executeDef1 = true;
			//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			switch (field.hashCode())
			{
				case 94360:
				{
					//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("__x")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.__x = ((haxe.root.Xml) (value) );
						//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return value;
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
			}
			
			//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_executeDef1) 
			{
				//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_executeDef1 = true;
			//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			switch (field.hashCode())
			{
				case 1097368044:
				{
					//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("resolve")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "resolve")) );
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 94360:
				{
					//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("__x")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.__x;
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
			}
			
			//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_executeDef1) 
			{
				//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_executeDef1 = true;
			//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			switch (field.hashCode())
			{
				case 1097368044:
				{
					//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("resolve")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.resolve(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
			}
			
			//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_executeDef1) 
			{
				//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		baseArr.push("__x");
		//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


