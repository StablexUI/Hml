package sx.properties.abstracts._AAlign;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class WeakAlign extends sx.properties.Align
{
	public WeakAlign(haxe.lang.EmptyObject empty)
	{
		//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public WeakAlign()
	{
		//line 76 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 76 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		sx.properties.abstracts._AAlign.WeakAlign.__hx_ctor_sx_properties_abstracts__AAlign_WeakAlign(this);
	}
	
	
	public static void __hx_ctor_sx_properties_abstracts__AAlign_WeakAlign(sx.properties.abstracts._AAlign.WeakAlign __temp_me130)
	{
		//line 76 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		sx.properties.Align.__hx_ctor_sx_properties_Align(__temp_me130, null, null);
		//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		__temp_me130.onChange = null;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		return new sx.properties.abstracts._AAlign.WeakAlign(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		return new sx.properties.abstracts._AAlign.WeakAlign();
	}
	
	
	@Override public void dispose()
	{
		//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		{
			//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			sx.ds.ObjectPool<sx.properties.abstracts._AAlign.WeakAlign> _this = sx.properties.abstracts._AAlign.AAlign_Impl_.__pool;
			//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			_this.__pool.__set(_this.length, this);
			//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			_this.length++;
		}
		
		//line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		this.weak = false;
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
		{
			//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			boolean __temp_executeDef1 = true;
			//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			switch (field.hashCode())
			{
				case 1671767583:
				{
					//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
					if (field.equals("dispose")) 
					{
						//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
						__temp_executeDef1 = false;
						//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "dispose")) );
					}
					
					//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
					break;
				}
				
				
			}
			
			//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
			if (__temp_executeDef1) 
			{
				//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


