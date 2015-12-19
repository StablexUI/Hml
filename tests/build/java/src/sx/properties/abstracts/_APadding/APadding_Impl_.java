package sx.properties.abstracts._APadding;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public final class APadding_Impl_
{
	static
	{
		//line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		sx.properties.abstracts._APadding.APadding_Impl_.__pool = new sx.ds.ObjectPool<sx.properties.abstracts._APadding.WeakPadding>();
	}
	
	public static sx.ds.ObjectPool<sx.properties.abstracts._APadding.WeakPadding> __pool;
	
	public static sx.properties.metric.Padding fromFloat(double v)
	{
		//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		sx.properties.abstracts._APadding.WeakPadding weakPadding = null;
		//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		{
			//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			sx.ds.ObjectPool<sx.properties.abstracts._APadding.WeakPadding> _this = sx.properties.abstracts._APadding.APadding_Impl_.__pool;
			//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			if (( _this.length > 0 )) 
			{
				//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
				_this.length--;
				//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
				weakPadding = _this.__pool.__get(_this.length);
			}
			else
			{
				//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
				weakPadding = null;
			}
			
		}
		
		//line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		if (( weakPadding == null )) 
		{
			//line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			weakPadding = new sx.properties.abstracts._APadding.WeakPadding();
		}
		
		//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		weakPadding.weak = true;
		//line 28 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		weakPadding.set_dip(v);
		//line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		return weakPadding;
	}
	
	
	
	
	
	
	
	
	
	
	public static sx.signals.Signal<haxe.lang.Function> get_onChange(sx.properties.metric.Padding this1)
	{
		//line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		return this1.onComponentsChange;
	}
	
	
	public static double set_dip(sx.properties.metric.Padding this1, double v)
	{
		//line 53 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		return this1.set_dip(v);
	}
	
	
	public static double set_px(sx.properties.metric.Padding this1, double v)
	{
		//line 54 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		return this1.set_px(v);
	}
	
	
	public static double set_pct(sx.properties.metric.Padding this1, double v)
	{
		//line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		return this1.set_pct(v);
	}
	
	
}


