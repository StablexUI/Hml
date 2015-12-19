package sx.properties.abstracts._ASizeSetterProxy;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class WeakSizeSetterProxy extends sx.properties.metric.SizeSetterProxy
{
	public WeakSizeSetterProxy(haxe.lang.EmptyObject empty)
	{
		//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public WeakSizeSetterProxy()
	{
		//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy.__hx_ctor_sx_properties_abstracts__ASizeSetterProxy_WeakSizeSetterProxy(this);
	}
	
	
	public static void __hx_ctor_sx_properties_abstracts__ASizeSetterProxy_WeakSizeSetterProxy(sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy __temp_me139)
	{
		//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		sx.properties.metric.SizeSetterProxy.__hx_ctor_sx_properties_metric_SizeSetterProxy(__temp_me139, null);
		//line 65 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		__temp_me139.onChange = null;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		return new sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		return new sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy();
	}
	
	
	@Override public void dispose()
	{
		//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		{
			//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			sx.ds.ObjectPool<sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy> _this = sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_.__pool;
			//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			_this.__pool.__set(_this.length, this);
			//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			_this.length++;
		}
		
		//line 76 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		this.weak = false;
	}
	
	
	@Override public void __invokeOnChange(java.lang.String units, double value)
	{
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
		{
			//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			boolean __temp_executeDef1 = true;
			//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			switch (field.hashCode())
			{
				case 607543015:
				{
					//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
					if (field.equals("__invokeOnChange")) 
					{
						//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
						__temp_executeDef1 = false;
						//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__invokeOnChange")) );
					}
					
					//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
					break;
				}
				
				
				case 1671767583:
				{
					//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
					if (field.equals("dispose")) 
					{
						//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
						__temp_executeDef1 = false;
						//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "dispose")) );
					}
					
					//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
					break;
				}
				
				
			}
			
			//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
			if (__temp_executeDef1) 
			{
				//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


