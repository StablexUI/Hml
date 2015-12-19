package haxe.rtti;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Rtti extends haxe.lang.HxObject
{
	public Rtti(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Rtti()
	{
		//line 29 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
		haxe.rtti.Rtti.__hx_ctor_haxe_rtti_Rtti(this);
	}
	
	
	public static void __hx_ctor_haxe_rtti_Rtti(haxe.rtti.Rtti __temp_me35)
	{
	}
	
	
	public static <T> java.lang.Object getRtti(java.lang.Class c)
	{
		//line 40 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
		java.lang.String rtti = haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(c, "__rtti", false));
		//line 41 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
		if (( rtti == null )) 
		{
			//line 42 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
			throw haxe.lang.HaxeException.wrap(( ( "Class " + haxe.root.Type.getClassName(c) ) + " has no RTTI information, consider adding @:rtti" ));
		}
		
		//line 44 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
		haxe.root.Xml x = haxe.root.Xml.parse(rtti).firstElement();
		//line 45 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
		haxe.rtti.TypeTree infos = new haxe.rtti.XmlParser().processElement(x);
		//line 46 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
		{
			//line 46 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
			haxe.rtti.TypeTree t = infos;
			//line 46 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
			switch (infos.index)
			{
				case 1:
				{
					//line 46 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
					java.lang.Object c1 = infos.params[0];
					//line 47 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
					return c1;
				}
				
				
				default:
				{
					//line 48 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
					throw haxe.lang.HaxeException.wrap(( "Enum mismatch: expected TClassDecl but found " + haxe.root.Std.string(t) ));
				}
				
			}
			
		}
		
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 29 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
		return new haxe.rtti.Rtti(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 29 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
		return new haxe.rtti.Rtti();
	}
	
	
}


