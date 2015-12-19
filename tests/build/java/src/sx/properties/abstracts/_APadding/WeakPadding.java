package sx.properties.abstracts._APadding;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class WeakPadding extends sx.properties.metric.Padding
{
	public WeakPadding(haxe.lang.EmptyObject empty)
	{
		//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public WeakPadding()
	{
		//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		sx.properties.abstracts._APadding.WeakPadding.__hx_ctor_sx_properties_abstracts__APadding_WeakPadding(this);
	}
	
	
	public static void __hx_ctor_sx_properties_abstracts__APadding_WeakPadding(sx.properties.abstracts._APadding.WeakPadding __temp_me137)
	{
		//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		sx.properties.metric.Padding.__hx_ctor_sx_properties_metric_Padding(__temp_me137);
		//line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		__temp_me137.onChange = null;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		return new sx.properties.abstracts._APadding.WeakPadding(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		return new sx.properties.abstracts._APadding.WeakPadding();
	}
	
	
	@Override public void dispose()
	{
		//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		{
			//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			sx.ds.ObjectPool<sx.properties.abstracts._APadding.WeakPadding> _this = sx.properties.abstracts._APadding.APadding_Impl_.__pool;
			//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			_this.__pool.__set(_this.length, this);
			//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			_this.length++;
		}
		
		//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		this.weak = false;
	}
	
	
	@Override public void __invokeOnChange(java.lang.String units, double value)
	{
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
		{
			//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			boolean __temp_executeDef1 = true;
			//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			switch (field.hashCode())
			{
				case 607543015:
				{
					//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
					if (field.equals("__invokeOnChange")) 
					{
						//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
						__temp_executeDef1 = false;
						//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__invokeOnChange")) );
					}
					
					//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
					break;
				}
				
				
				case 1671767583:
				{
					//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
					if (field.equals("dispose")) 
					{
						//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
						__temp_executeDef1 = false;
						//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "dispose")) );
					}
					
					//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
					break;
				}
				
				
			}
			
			//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
			if (__temp_executeDef1) 
			{
				//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


