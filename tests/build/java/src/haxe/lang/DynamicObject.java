package haxe.lang;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class DynamicObject extends haxe.lang.HxObject
{
	public DynamicObject(haxe.lang.EmptyObject empty)
	{
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public DynamicObject()
	{
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		haxe.lang.DynamicObject.__hx_ctor_haxe_lang_DynamicObject(((haxe.lang.DynamicObject) (this) ));
	}
	
	
	public DynamicObject(java.lang.String[] __hx_hashes, java.lang.Object[] __hx_dynamics, java.lang.String[] __hx_hashes_f, double[] __hx_dynamics_f)
	{
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		haxe.lang.DynamicObject.__hx_ctor_haxe_lang_DynamicObject(((haxe.lang.DynamicObject) (this) ), ((java.lang.String[]) (__hx_hashes) ), ((java.lang.Object[]) (__hx_dynamics) ), ((java.lang.String[]) (__hx_hashes_f) ), ((double[]) (__hx_dynamics_f) ));
	}
	
	
	public static void __hx_ctor_haxe_lang_DynamicObject(haxe.lang.DynamicObject __temp_me107)
	{
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		__temp_me107.__hx_hashes = new java.lang.String[]{};
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		__temp_me107.__hx_dynamics = new java.lang.Object[]{};
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		__temp_me107.__hx_hashes_f = new java.lang.String[]{};
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		__temp_me107.__hx_dynamics_f = new double[]{};
	}
	
	
	public static void __hx_ctor_haxe_lang_DynamicObject(haxe.lang.DynamicObject __temp_me106, java.lang.String[] __hx_hashes, java.lang.Object[] __hx_dynamics, java.lang.String[] __hx_hashes_f, double[] __hx_dynamics_f)
	{
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		__temp_me106.__hx_hashes = __hx_hashes;
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		__temp_me106.__hx_dynamics = __hx_dynamics;
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		__temp_me106.__hx_hashes_f = __hx_hashes_f;
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		__temp_me106.__hx_dynamics_f = __hx_dynamics_f;
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		__temp_me106.__hx_length = __hx_hashes.length;
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		__temp_me106.__hx_length_f = __hx_hashes_f.length;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		return new haxe.lang.DynamicObject(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		return new haxe.lang.DynamicObject(((java.lang.String[]) (arr.__get(0)) ), ((java.lang.Object[]) (arr.__get(1)) ), ((java.lang.String[]) (arr.__get(2)) ), ((double[]) (arr.__get(3)) ));
	}
	
	
	@Override public java.lang.String toString()
	{
		//line 47 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		haxe.lang.Function ts = ((haxe.lang.Function) (haxe.lang.Runtime.getField(this, "toString", false)) );
		//line 48 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		if (( ts != null )) 
		{
			//line 49 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			return haxe.lang.Runtime.toString(ts.__hx_invoke0_o());
		}
		
		//line 50 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		haxe.root.StringBuf ret = new haxe.root.StringBuf();
		//line 51 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		ret.add("{");
		//line 52 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		boolean first = true;
		//line 53 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		{
			//line 53 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			int _g = 0;
			//line 53 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			haxe.root.Array<java.lang.String> _g1 = haxe.root.Reflect.fields(this);
			//line 53 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			while (( _g < _g1.length ))
			{
				//line 53 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				java.lang.String f = _g1.__get(_g);
				//line 53 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				 ++ _g;
				//line 55 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				if (first) 
				{
					//line 56 "/usr/lib/haxe/std/java/internal/HxObject.hx"
					first = false;
				}
				else
				{
					//line 58 "/usr/lib/haxe/std/java/internal/HxObject.hx"
					ret.add(",");
				}
				
				//line 59 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				ret.add(" ");
				//line 59 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				ret.add(f);
				//line 60 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				ret.add(" : ");
				//line 61 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				ret.add(haxe.root.Reflect.field(this, f));
			}
			
		}
		
		//line 63 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		if ( ! (first) ) 
		{
			//line 63 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			ret.add(" ");
		}
		
		//line 64 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		ret.add("}");
		//line 65 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		return ret.toString();
	}
	
	
	public java.lang.String[] __hx_hashes;
	
	public java.lang.Object[] __hx_dynamics;
	
	public java.lang.String[] __hx_hashes_f;
	
	public double[] __hx_dynamics_f;
	
	public int __hx_length;
	
	public int __hx_length_f;
	
	@Override public boolean __hx_deleteField(java.lang.String field)
	{
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		int res = haxe.lang.FieldLookup.findHash(field, this.__hx_hashes, this.__hx_length);
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		if (( res >= 0 )) 
		{
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			haxe.lang.FieldLookup.removeString(this.__hx_hashes, this.__hx_length, res);
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			haxe.lang.FieldLookup.removeDynamic(this.__hx_dynamics, this.__hx_length, res);
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			this.__hx_length--;
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			return true;
		}
		else
		{
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			res = haxe.lang.FieldLookup.findHash(field, this.__hx_hashes_f, this.__hx_length_f);
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			if (( res >= 0 )) 
			{
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				haxe.lang.FieldLookup.removeString(this.__hx_hashes_f, this.__hx_length_f, res);
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				haxe.lang.FieldLookup.removeFloat(this.__hx_dynamics_f, this.__hx_length_f, res);
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				this.__hx_length_f--;
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				return true;
			}
			
		}
		
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		return false;
	}
	
	
	@Override public java.lang.Object __hx_lookupField(java.lang.String field, boolean throwErrors, boolean isCheck)
	{
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		int res = haxe.lang.FieldLookup.findHash(field, this.__hx_hashes, this.__hx_length);
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		if (( res >= 0 )) 
		{
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			return this.__hx_dynamics[res];
		}
		else
		{
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			res = haxe.lang.FieldLookup.findHash(field, this.__hx_hashes_f, this.__hx_length_f);
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			if (( res >= 0 )) 
			{
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				return this.__hx_dynamics_f[res];
			}
			
		}
		
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		if (isCheck) 
		{
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			return haxe.lang.Runtime.undefined;
		}
		else
		{
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			return null;
		}
		
	}
	
	
	@Override public double __hx_lookupField_f(java.lang.String field, boolean throwErrors)
	{
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		int res = haxe.lang.FieldLookup.findHash(field, this.__hx_hashes_f, this.__hx_length_f);
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		if (( res >= 0 )) 
		{
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			return this.__hx_dynamics_f[res];
		}
		else
		{
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			res = haxe.lang.FieldLookup.findHash(field, this.__hx_hashes, this.__hx_length);
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			if (( res >= 0 )) 
			{
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				return ((double) (haxe.lang.Runtime.toDouble(this.__hx_dynamics[res])) );
			}
			
		}
		
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		return 0.0;
	}
	
	
	@Override public java.lang.Object __hx_lookupSetField(java.lang.String field, java.lang.Object value)
	{
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		int res = haxe.lang.FieldLookup.findHash(field, this.__hx_hashes, this.__hx_length);
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		if (( res >= 0 )) 
		{
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			return this.__hx_dynamics[res] = value;
		}
		else
		{
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			int res2 = haxe.lang.FieldLookup.findHash(field, this.__hx_hashes_f, this.__hx_length_f);
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			if (( res2 >= 0 )) 
			{
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				haxe.lang.FieldLookup.removeString(this.__hx_hashes_f, this.__hx_length_f, res2);
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				haxe.lang.FieldLookup.removeFloat(this.__hx_dynamics_f, this.__hx_length_f, res2);
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				this.__hx_length_f--;
			}
			
		}
		
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		this.__hx_hashes = haxe.lang.FieldLookup.insertString(this.__hx_hashes, this.__hx_length,  ~ (res) , field);
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		this.__hx_dynamics = haxe.lang.FieldLookup.insertDynamic(this.__hx_dynamics, this.__hx_length,  ~ (res) , value);
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		this.__hx_length++;
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		return value;
	}
	
	
	@Override public double __hx_lookupSetField_f(java.lang.String field, double value)
	{
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		int res = haxe.lang.FieldLookup.findHash(field, this.__hx_hashes_f, this.__hx_length_f);
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		if (( res >= 0 )) 
		{
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			return this.__hx_dynamics_f[res] = value;
		}
		else
		{
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			int res2 = haxe.lang.FieldLookup.findHash(field, this.__hx_hashes, this.__hx_length);
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			if (( res2 >= 0 )) 
			{
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				haxe.lang.FieldLookup.removeString(this.__hx_hashes, this.__hx_length, res2);
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				haxe.lang.FieldLookup.removeDynamic(this.__hx_dynamics, this.__hx_length, res2);
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				this.__hx_length--;
			}
			
		}
		
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		this.__hx_hashes_f = haxe.lang.FieldLookup.insertString(this.__hx_hashes_f, this.__hx_length_f,  ~ (res) , field);
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		this.__hx_dynamics_f = haxe.lang.FieldLookup.insertFloat(this.__hx_dynamics_f, this.__hx_length_f,  ~ (res) , value);
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		this.__hx_length_f++;
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		return value;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
		{
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			int i = 0;
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			{
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				i = 0;
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				while (( i < this.__hx_length ))
				{
					//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
					baseArr.push(this.__hx_hashes[i++]);
				}
				
			}
			
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			{
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				i = 0;
				//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
				while (( i < this.__hx_length_f ))
				{
					//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
					baseArr.push(this.__hx_hashes_f[i++]);
				}
				
			}
			
			//line 43 "/usr/lib/haxe/std/java/internal/HxObject.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


