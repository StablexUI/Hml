package sx.properties.abstracts._ASizeSetterProxy;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public final class ASizeSetterProxy_Impl_
{
	static
	{
		//line 16 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_.__pool = new sx.ds.ObjectPool<sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy>();
	}
	
	public static sx.ds.ObjectPool<sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy> __pool;
	
	public static sx.properties.metric.SizeSetterProxy fromFloat(double v)
	{
		//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy weakSizeSetterProxy = null;
		//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		{
			//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			sx.ds.ObjectPool<sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy> _this = sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_.__pool;
			//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			if (( _this.length > 0 )) 
			{
				//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
				_this.length--;
				//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
				weakSizeSetterProxy = _this.__pool.__get(_this.length);
			}
			else
			{
				//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
				weakSizeSetterProxy = null;
			}
			
		}
		
		//line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		if (( weakSizeSetterProxy == null )) 
		{
			//line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			weakSizeSetterProxy = new sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy();
		}
		
		//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		weakSizeSetterProxy.weak = true;
		//line 28 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		weakSizeSetterProxy.set_dip(v);
		//line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		return weakSizeSetterProxy;
	}
	
	
	
	
	
	
	
	
	public static double set_dip(sx.properties.metric.SizeSetterProxy this1, double v)
	{
		//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		return this1.set_dip(v);
	}
	
	
	public static double set_px(sx.properties.metric.SizeSetterProxy this1, double v)
	{
		//line 44 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		return this1.set_px(v);
	}
	
	
	public static double set_pct(sx.properties.metric.SizeSetterProxy this1, double v)
	{
		//line 45 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		return this1.set_pct(v);
	}
	
	
}


