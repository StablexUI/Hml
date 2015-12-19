package sx.properties.abstracts._AAlign;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public final class AAlign_Impl_
{
	static
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		sx.properties.abstracts._AAlign.AAlign_Impl_.__pool = new sx.ds.ObjectPool<sx.properties.abstracts._AAlign.WeakAlign>();
	}
	
	public static sx.ds.ObjectPool<sx.properties.abstracts._AAlign.WeakAlign> __pool;
	
	public static sx.properties.Align fromHorizontal(java.lang.String v)
	{
		//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		sx.properties.abstracts._AAlign.WeakAlign weakAlign = null;
		//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		{
			//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			sx.ds.ObjectPool<sx.properties.abstracts._AAlign.WeakAlign> _this = sx.properties.abstracts._AAlign.AAlign_Impl_.__pool;
			//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			if (( _this.length > 0 )) 
			{
				//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				_this.length--;
				//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				weakAlign = _this.__pool.__get(_this.length);
			}
			else
			{
				//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				weakAlign = null;
			}
			
		}
		
		//line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		if (( weakAlign == null )) 
		{
			//line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			weakAlign = new sx.properties.abstracts._AAlign.WeakAlign();
		}
		
		//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		weakAlign.weak = true;
		//line 28 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		weakAlign.set(v, haxe.lang.Runtime.toString("none"));
		//line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		return weakAlign;
	}
	
	
	public static sx.properties.Align fromVertical(java.lang.String v)
	{
		//line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		sx.properties.abstracts._AAlign.WeakAlign weakAlign = null;
		//line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		{
			//line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			sx.ds.ObjectPool<sx.properties.abstracts._AAlign.WeakAlign> _this = sx.properties.abstracts._AAlign.AAlign_Impl_.__pool;
			//line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			if (( _this.length > 0 )) 
			{
				//line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				_this.length--;
				//line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				weakAlign = _this.__pool.__get(_this.length);
			}
			else
			{
				//line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				weakAlign = null;
			}
			
		}
		
		//line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		if (( weakAlign == null )) 
		{
			//line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			weakAlign = new sx.properties.abstracts._AAlign.WeakAlign();
		}
		
		//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		weakAlign.weak = true;
		//line 44 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		weakAlign.set(haxe.lang.Runtime.toString("none"), v);
		//line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		return weakAlign;
	}
	
	
	public static sx.properties.Align fromNone(java.lang.String v)
	{
		//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		return sx.properties.abstracts._AAlign.AAlign_Impl_.fromHorizontal(haxe.lang.Runtime.toString("none"));
	}
	
	
}


