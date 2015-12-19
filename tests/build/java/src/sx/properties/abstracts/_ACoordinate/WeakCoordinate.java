package sx.properties.abstracts._ACoordinate;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class WeakCoordinate extends sx.properties.metric.Coordinate
{
	public WeakCoordinate(haxe.lang.EmptyObject empty)
	{
		//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public WeakCoordinate()
	{
		//line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		sx.properties.abstracts._ACoordinate.WeakCoordinate.__hx_ctor_sx_properties_abstracts__ACoordinate_WeakCoordinate(this);
	}
	
	
	public static void __hx_ctor_sx_properties_abstracts__ACoordinate_WeakCoordinate(sx.properties.abstracts._ACoordinate.WeakCoordinate __temp_me134)
	{
		//line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		sx.properties.metric.Coordinate.__hx_ctor_sx_properties_metric_Coordinate(__temp_me134, null);
		//line 114 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		__temp_me134.selected = true;
		//line 115 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		__temp_me134.onChange = null;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return new sx.properties.abstracts._ACoordinate.WeakCoordinate(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return new sx.properties.abstracts._ACoordinate.WeakCoordinate();
	}
	
	
	@Override public void dispose()
	{
		//line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		{
			//line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			sx.ds.ObjectPool<sx.properties.abstracts._ACoordinate.WeakCoordinate> _this = sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.__pool;
			//line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			_this.__pool.__set(_this.length, this);
			//line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			_this.length++;
		}
		
		//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		this.weak = false;
	}
	
	
	@Override public void __invokeOnChange(java.lang.String previousUnits, double previousValue)
	{
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		{
			//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			boolean __temp_executeDef1 = true;
			//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			switch (field.hashCode())
			{
				case 607543015:
				{
					//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
					if (field.equals("__invokeOnChange")) 
					{
						//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
						__temp_executeDef1 = false;
						//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__invokeOnChange")) );
					}
					
					//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
					break;
				}
				
				
				case 1671767583:
				{
					//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
					if (field.equals("dispose")) 
					{
						//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
						__temp_executeDef1 = false;
						//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "dispose")) );
					}
					
					//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
					break;
				}
				
				
			}
			
			//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			if (__temp_executeDef1) 
			{
				//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


