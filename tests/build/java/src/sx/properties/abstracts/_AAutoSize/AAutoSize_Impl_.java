package sx.properties.abstracts._AAutoSize;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public final class AAutoSize_Impl_
{
	static
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		sx.properties.abstracts._AAutoSize.AAutoSize_Impl_.__pool = new sx.ds.ObjectPool<sx.properties.abstracts._AAutoSize.WeakAutoSize>();
	}
	
	public static sx.ds.ObjectPool<sx.properties.abstracts._AAutoSize.WeakAutoSize> __pool;
	
	public static sx.properties.AutoSize fromBool(boolean v)
	{
		//line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		sx.properties.abstracts._AAutoSize.WeakAutoSize weakAutoSize = null;
		//line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		{
			//line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			sx.ds.ObjectPool<sx.properties.abstracts._AAutoSize.WeakAutoSize> _this = sx.properties.abstracts._AAutoSize.AAutoSize_Impl_.__pool;
			//line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			if (( _this.length > 0 )) 
			{
				//line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
				_this.length--;
				//line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
				weakAutoSize = _this.__pool.__get(_this.length);
			}
			else
			{
				//line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
				weakAutoSize = null;
			}
			
		}
		
		//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		if (( weakAutoSize == null )) 
		{
			//line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			weakAutoSize = new sx.properties.abstracts._AAutoSize.WeakAutoSize();
		}
		
		//line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		weakAutoSize.weak = true;
		//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		weakAutoSize.set_width(v);
		//line 28 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		weakAutoSize.set_height(v);
		//line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		return weakAutoSize;
	}
	
	
}


