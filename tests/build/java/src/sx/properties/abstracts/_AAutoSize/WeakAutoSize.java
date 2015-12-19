package sx.properties.abstracts._AAutoSize;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class WeakAutoSize extends sx.properties.AutoSize
{
	public WeakAutoSize(haxe.lang.EmptyObject empty)
	{
		//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public WeakAutoSize()
	{
		//line 51 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 51 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		sx.properties.abstracts._AAutoSize.WeakAutoSize.__hx_ctor_sx_properties_abstracts__AAutoSize_WeakAutoSize(this);
	}
	
	
	public static void __hx_ctor_sx_properties_abstracts__AAutoSize_WeakAutoSize(sx.properties.abstracts._AAutoSize.WeakAutoSize __temp_me131)
	{
		//line 51 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		sx.properties.AutoSize.__hx_ctor_sx_properties_AutoSize(__temp_me131, null);
		//line 52 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		__temp_me131.onChange = null;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		return new sx.properties.abstracts._AAutoSize.WeakAutoSize(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		return new sx.properties.abstracts._AAutoSize.WeakAutoSize();
	}
	
	
	@Override public void dispose()
	{
		//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		{
			//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			sx.ds.ObjectPool<sx.properties.abstracts._AAutoSize.WeakAutoSize> _this = sx.properties.abstracts._AAutoSize.AAutoSize_Impl_.__pool;
			//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			_this.__pool.__set(_this.length, this);
			//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			_this.length++;
		}
		
		//line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		this.weak = false;
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
		{
			//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			boolean __temp_executeDef1 = true;
			//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			switch (field.hashCode())
			{
				case 1671767583:
				{
					//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
					if (field.equals("dispose")) 
					{
						//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
						__temp_executeDef1 = false;
						//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "dispose")) );
					}
					
					//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
					break;
				}
				
				
			}
			
			//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
			if (__temp_executeDef1) 
			{
				//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


