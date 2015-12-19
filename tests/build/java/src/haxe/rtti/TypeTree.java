package haxe.rtti;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TypeTree extends haxe.lang.ParamEnum
{
	public TypeTree(int index, java.lang.Object[] params)
	{
		//line 100 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		super(index, params);
	}
	
	
	public static final java.lang.String[] __hx_constructs = new java.lang.String[]{"TPackage", "TClassdecl", "TEnumdecl", "TTypedecl", "TAbstractdecl"};
	
	public static haxe.rtti.TypeTree TPackage(java.lang.String name, java.lang.String full, haxe.root.Array<haxe.rtti.TypeTree> subs)
	{
		//line 122 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
		return new haxe.rtti.TypeTree(0, new java.lang.Object[]{name, full, subs});
	}
	
	
	public static haxe.rtti.TypeTree TClassdecl(java.lang.Object c)
	{
		//line 123 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
		return new haxe.rtti.TypeTree(1, new java.lang.Object[]{c});
	}
	
	
	public static haxe.rtti.TypeTree TEnumdecl(java.lang.Object e)
	{
		//line 124 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
		return new haxe.rtti.TypeTree(2, new java.lang.Object[]{e});
	}
	
	
	public static haxe.rtti.TypeTree TTypedecl(java.lang.Object t)
	{
		//line 125 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
		return new haxe.rtti.TypeTree(3, new java.lang.Object[]{t});
	}
	
	
	public static haxe.rtti.TypeTree TAbstractdecl(java.lang.Object a)
	{
		//line 126 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
		return new haxe.rtti.TypeTree(4, new java.lang.Object[]{a});
	}
	
	
	@Override public java.lang.String getTag()
	{
		//line 121 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
		return haxe.rtti.TypeTree.__hx_constructs[this.index];
	}
	
	
}


