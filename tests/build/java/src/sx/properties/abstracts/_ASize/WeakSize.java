package sx.properties.abstracts._ASize;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class WeakSize extends sx.properties.metric.Size
{
	public WeakSize(haxe.lang.EmptyObject empty)
	{
		//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public WeakSize()
	{
		//line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		sx.properties.abstracts._ASize.WeakSize.__hx_ctor_sx_properties_abstracts__ASize_WeakSize(this);
	}
	
	
	public static void __hx_ctor_sx_properties_abstracts__ASize_WeakSize(sx.properties.abstracts._ASize.WeakSize __temp_me138)
	{
		//line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		sx.properties.metric.Size.__hx_ctor_sx_properties_metric_Size(__temp_me138, null);
		//line 114 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		__temp_me138.onChange = null;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return new sx.properties.abstracts._ASize.WeakSize(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return new sx.properties.abstracts._ASize.WeakSize();
	}
	
	
	@Override public void dispose()
	{
		//line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		{
			//line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			sx.ds.ObjectPool<sx.properties.abstracts._ASize.WeakSize> _this = sx.properties.abstracts._ASize.ASize_Impl_.__pool;
			//line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			_this.__pool.__set(_this.length, this);
			//line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			_this.length++;
		}
		
		//line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		this.weak = false;
	}
	
	
	@Override public void __invokeOnChange(java.lang.String previousUnits, double previousValue)
	{
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		{
			//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			boolean __temp_executeDef1 = true;
			//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			switch (field.hashCode())
			{
				case 607543015:
				{
					//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
					if (field.equals("__invokeOnChange")) 
					{
						//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
						__temp_executeDef1 = false;
						//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__invokeOnChange")) );
					}
					
					//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
					break;
				}
				
				
				case 1671767583:
				{
					//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
					if (field.equals("dispose")) 
					{
						//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
						__temp_executeDef1 = false;
						//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "dispose")) );
					}
					
					//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
					break;
				}
				
				
			}
			
			//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			if (__temp_executeDef1) 
			{
				//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


