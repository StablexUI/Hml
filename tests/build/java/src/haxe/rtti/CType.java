package haxe.rtti;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class CType extends haxe.lang.ParamEnum
{
	public CType(int index, java.lang.Object[] params)
	{
		//line 100 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		super(index, params);
	}
	
	
	public static final java.lang.String[] __hx_constructs = new java.lang.String[]{"CUnknown", "CEnum", "CClass", "CTypedef", "CFunction", "CAnonymous", "CDynamic", "CAbstract"};
	
	public static final haxe.rtti.CType CUnknown = new haxe.rtti.CType(0, null);
	
	public static haxe.rtti.CType CEnum(java.lang.String name, haxe.root.List<haxe.rtti.CType> params)
	{
		//line 32 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
		return new haxe.rtti.CType(1, new java.lang.Object[]{name, params});
	}
	
	
	public static haxe.rtti.CType CClass(java.lang.String name, haxe.root.List<haxe.rtti.CType> params)
	{
		//line 33 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
		return new haxe.rtti.CType(2, new java.lang.Object[]{name, params});
	}
	
	
	public static haxe.rtti.CType CTypedef(java.lang.String name, haxe.root.List<haxe.rtti.CType> params)
	{
		//line 34 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
		return new haxe.rtti.CType(3, new java.lang.Object[]{name, params});
	}
	
	
	public static haxe.rtti.CType CFunction(haxe.root.List<java.lang.Object> args, haxe.rtti.CType ret)
	{
		//line 35 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
		return new haxe.rtti.CType(4, new java.lang.Object[]{args, ret});
	}
	
	
	public static haxe.rtti.CType CAnonymous(haxe.root.List<java.lang.Object> fields)
	{
		//line 36 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
		return new haxe.rtti.CType(5, new java.lang.Object[]{fields});
	}
	
	
	public static haxe.rtti.CType CDynamic(haxe.rtti.CType t)
	{
		//line 37 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
		return new haxe.rtti.CType(6, new java.lang.Object[]{t});
	}
	
	
	public static haxe.rtti.CType CAbstract(java.lang.String name, haxe.root.List<haxe.rtti.CType> params)
	{
		//line 38 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
		return new haxe.rtti.CType(7, new java.lang.Object[]{name, params});
	}
	
	
	@Override public java.lang.String getTag()
	{
		//line 30 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
		return haxe.rtti.CType.__hx_constructs[this.index];
	}
	
	
}


