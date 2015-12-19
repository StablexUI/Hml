package haxe.xml._Fast;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class NodeListAccess extends haxe.lang.DynamicObject
{
	public NodeListAccess(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public NodeListAccess(haxe.root.Xml x)
	{
		//line 96 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		haxe.xml._Fast.NodeListAccess.__hx_ctor_haxe_xml__Fast_NodeListAccess(this, x);
	}
	
	
	public static void __hx_ctor_haxe_xml__Fast_NodeListAccess(haxe.xml._Fast.NodeListAccess __temp_me45, haxe.root.Xml x)
	{
		//line 97 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		__temp_me45.__x = x;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return new haxe.xml._Fast.NodeListAccess(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return new haxe.xml._Fast.NodeListAccess(((haxe.root.Xml) (arr.__get(0)) ));
	}
	
	
	public haxe.root.Xml __x;
	
	public haxe.root.List<haxe.xml.Fast> resolve(java.lang.String name)
	{
		//line 101 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		haxe.root.List<haxe.xml.Fast> l = new haxe.root.List<haxe.xml.Fast>();
		//line 102 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 102 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			java.lang.Object __temp_iterator1 = this.__x.elementsNamed(name);
			//line 102 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 102 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				haxe.root.Xml x = ((haxe.root.Xml) (haxe.lang.Runtime.callField(__temp_iterator1, "next", null)) );
				//line 103 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				l.add(new haxe.xml.Fast(((haxe.root.Xml) (x) )));
			}
			
		}
		
		//line 104 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return l;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_executeDef1 = true;
			//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			switch (field.hashCode())
			{
				case 94360:
				{
					//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("__x")) 
					{
						//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.__x = ((haxe.root.Xml) (value) );
						//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return value;
					}
					
					//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
			}
			
			//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_executeDef1) 
			{
				//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_executeDef1 = true;
			//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			switch (field.hashCode())
			{
				case 1097368044:
				{
					//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("resolve")) 
					{
						//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "resolve")) );
					}
					
					//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 94360:
				{
					//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("__x")) 
					{
						//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.__x;
					}
					
					//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
			}
			
			//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_executeDef1) 
			{
				//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_executeDef1 = true;
			//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			switch (field.hashCode())
			{
				case 1097368044:
				{
					//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("resolve")) 
					{
						//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.resolve(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
			}
			
			//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_executeDef1) 
			{
				//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		baseArr.push("__x");
		//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


