package haxe.ds;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class StringMap_keys_374__Fun<T> extends haxe.lang.Function
{
	public StringMap_keys_374__Fun(int[] i, haxe.ds.StringMap<T> _g1)
	{
		//line 374 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
		super(0, 0);
		//line 374 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
		this.i = i;
		//line 374 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
		this._g1 = _g1;
	}
	
	
	@Override public java.lang.Object __hx_invoke0_o()
	{
		//line 375 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
		java.lang.String ret = this._g1._keys[this.i[0]];
		//line 376 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
		this._g1.cachedIndex = this.i[0];
		//line 377 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
		this._g1.cachedKey = ret;
		//line 379 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
		this.i[0] = ( this.i[0] + 1 );
		//line 380 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
		return ret;
	}
	
	
	public int[] i;
	
	public haxe.ds.StringMap<T> _g1;
	
}


