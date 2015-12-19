package haxe.xml;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Fast_get_elements_168__Fun extends haxe.lang.Function
{
	public Fast_get_elements_168__Fun(java.lang.Object it)
	{
		//line 168 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		super(0, 0);
		//line 168 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		this.it = it;
	}
	
	
	@Override public java.lang.Object __hx_invoke0_o()
	{
		//line 169 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		haxe.root.Xml x = ((haxe.root.Xml) (haxe.lang.Runtime.callField(this.it, "next", null)) );
		//line 170 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		if (( x == null )) 
		{
			//line 171 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return null;
		}
		
		//line 172 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return new haxe.xml.Fast(((haxe.root.Xml) (x) ));
	}
	
	
	public java.lang.Object it;
	
}


