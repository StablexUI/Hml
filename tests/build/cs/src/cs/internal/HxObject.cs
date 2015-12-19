
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.lang {
	public interface IHxObject {
		
		bool __hx_deleteField(string field, int hash);
		
		object __hx_lookupField(string field, int hash, bool throwErrors, bool isCheck);
		
		double __hx_lookupField_f(string field, int hash, bool throwErrors);
		
		object __hx_lookupSetField(string field, int hash, object @value);
		
		double __hx_lookupSetField_f(string field, int hash, double @value);
		
		double __hx_setField_f(string field, int hash, double @value, bool handleProperties);
		
		object __hx_setField(string field, int hash, object @value, bool handleProperties);
		
		object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties);
		
		double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties);
		
		object __hx_invokeField(string field, int hash, global::Array dynargs);
		
		void __hx_getFields(global::Array<object> baseArr);
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.lang {
	public class HxObject : global::haxe.lang.IHxObject {
		
		public HxObject(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public HxObject() {
			#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			global::haxe.lang.HxObject.__hx_ctor_haxe_lang_HxObject(this);
		}
		#line default
		
		public static void __hx_ctor_haxe_lang_HxObject(global::haxe.lang.HxObject __temp_me33) {
		}
		
		
		public static object __hx_createEmpty() {
			#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			return new global::haxe.lang.HxObject(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static object __hx_create(global::Array arr) {
			#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			return new global::haxe.lang.HxObject();
		}
		#line default
		
		public virtual bool __hx_deleteField(string field, int hash) {
			#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			return false;
		}
		#line default
		
		public virtual object __hx_lookupField(string field, int hash, bool throwErrors, bool isCheck) {
			#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			if (isCheck) {
				#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return global::haxe.lang.Runtime.undefined;
			}
			else if (throwErrors) {
				#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				throw global::haxe.lang.HaxeException.wrap("Field not found.");
			}
			else {
				#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return null;
			}
			
		}
		#line default
		
		public virtual double __hx_lookupField_f(string field, int hash, bool throwErrors) {
			#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			if (throwErrors) {
				#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				throw global::haxe.lang.HaxeException.wrap("Field not found or incompatible field type.");
			}
			else {
				#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return default(double);
			}
			
		}
		#line default
		
		public virtual object __hx_lookupSetField(string field, int hash, object @value) {
			#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			throw global::haxe.lang.HaxeException.wrap("Cannot access field for writing.");
		}
		#line default
		
		public virtual double __hx_lookupSetField_f(string field, int hash, double @value) {
			#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			throw global::haxe.lang.HaxeException.wrap("Cannot access field for writing or incompatible type.");
		}
		#line default
		
		public virtual double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			switch (hash) {
				default:
				{
					#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					return this.__hx_lookupSetField_f(field, hash, @value);
				}
				
			}
			
		}
		#line default
		
		public virtual object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			switch (hash) {
				default:
				{
					#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					return this.__hx_lookupSetField(field, hash, @value);
				}
				
			}
			
		}
		#line default
		
		public virtual object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			switch (hash) {
				default:
				{
					#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					return this.__hx_lookupField(field, hash, throwErrors, isCheck);
				}
				
			}
			
		}
		#line default
		
		public virtual double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			switch (hash) {
				default:
				{
					#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					return this.__hx_lookupField_f(field, hash, throwErrors);
				}
				
			}
			
		}
		#line default
		
		public virtual object __hx_invokeField(string field, int hash, global::Array dynargs) {
			#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			switch (hash) {
				default:
				{
					#line 28 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					return ((global::haxe.lang.Function) (this.__hx_getField(field, hash, true, false, false)) ).__hx_invokeDynamic(dynargs);
				}
				
			}
			
		}
		#line default
		
		public virtual void __hx_getFields(global::Array<object> baseArr) {
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.lang {
	public class DynamicObject : global::haxe.lang.HxObject {
		
		public DynamicObject(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public DynamicObject() {
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			global::haxe.lang.DynamicObject.__hx_ctor_haxe_lang_DynamicObject(((global::haxe.lang.DynamicObject) (this) ));
		}
		#line default
		
		public DynamicObject(int[] __hx_hashes, object[] __hx_dynamics, int[] __hx_hashes_f, double[] __hx_dynamics_f) {
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			global::haxe.lang.DynamicObject.__hx_ctor_haxe_lang_DynamicObject(((global::haxe.lang.DynamicObject) (this) ), ((int[]) (__hx_hashes) ), ((object[]) (__hx_dynamics) ), ((int[]) (__hx_hashes_f) ), ((double[]) (__hx_dynamics_f) ));
		}
		#line default
		
		public static void __hx_ctor_haxe_lang_DynamicObject(global::haxe.lang.DynamicObject __temp_me35) {
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			__temp_me35.__hx_hashes = new int[]{};
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			__temp_me35.__hx_dynamics = new object[]{};
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			__temp_me35.__hx_hashes_f = new int[]{};
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			__temp_me35.__hx_dynamics_f = new double[]{};
		}
		#line default
		
		public static void __hx_ctor_haxe_lang_DynamicObject(global::haxe.lang.DynamicObject __temp_me34, int[] __hx_hashes, object[] __hx_dynamics, int[] __hx_hashes_f, double[] __hx_dynamics_f) {
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			__temp_me34.__hx_hashes = __hx_hashes;
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			__temp_me34.__hx_dynamics = __hx_dynamics;
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			__temp_me34.__hx_hashes_f = __hx_hashes_f;
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			__temp_me34.__hx_dynamics_f = __hx_dynamics_f;
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			__temp_me34.__hx_length = __hx_hashes.Length;
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			__temp_me34.__hx_length_f = __hx_hashes_f.Length;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			return new global::haxe.lang.DynamicObject(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return new global::haxe.lang.DynamicObject(((int[]) (arr[0]) ), ((object[]) (arr[1]) ), ((int[]) (arr[2]) ), ((double[]) (arr[3]) ));
			}
			#line default
		}
		
		
		public virtual string toString() {
			#line 45 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			global::haxe.lang.Function ts = ((global::haxe.lang.Function) (global::haxe.lang.Runtime.getField(this, "toString", 946786476, false)) );
			if (( ts != null )) {
				#line 47 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return global::haxe.lang.Runtime.toString(ts.__hx_invoke0_o());
			}
			
			#line 48 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			global::System.Text.StringBuilder ret_b = new global::System.Text.StringBuilder();
			ret_b.Append(((string) ("{") ));
			bool first = true;
			{
				#line 51 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				int _g = 0;
				#line 51 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				global::Array<object> _g1 = global::Reflect.fields(this);
				#line 51 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				while (( _g < _g1.length )) {
					#line 51 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					string f = global::haxe.lang.Runtime.toString(_g1[_g]);
					#line 51 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					 ++ _g;
					#line 53 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					if (first) {
						#line 54 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
						first = false;
					}
					else {
						#line 56 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
						ret_b.Append(((string) (",") ));
					}
					
					#line 57 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					ret_b.Append(((string) (" ") ));
					#line 57 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					ret_b.Append(((string) (global::Std.@string(f)) ));
					ret_b.Append(((string) (" : ") ));
					{
						#line 59 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
						object x = global::Reflect.field(this, f);
						#line 59 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
						ret_b.Append(((string) (global::Std.@string(x)) ));
					}
					
				}
				
			}
			
			#line 61 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			if ( ! (first) ) {
				#line 61 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				ret_b.Append(((string) (" ") ));
			}
			
			#line 62 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			ret_b.Append(((string) ("}") ));
			return ret_b.ToString();
		}
		#line default
		
		public int[] __hx_hashes;
		
		public object[] __hx_dynamics;
		
		public int[] __hx_hashes_f;
		
		public double[] __hx_dynamics_f;
		
		public int __hx_length;
		
		public int __hx_length_f;
		
		public override bool __hx_deleteField(string field, int hash) {
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			int res = global::haxe.lang.FieldLookup.findHash(hash, this.__hx_hashes, this.__hx_length);
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			if (( res >= 0 )) {
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				global::haxe.lang.FieldLookup.@remove<int>(this.__hx_hashes, this.__hx_length, res);
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				global::haxe.lang.FieldLookup.@remove<object>(this.__hx_dynamics, this.__hx_length, res);
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				this.__hx_length--;
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return true;
			}
			else {
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				res = global::haxe.lang.FieldLookup.findHash(hash, this.__hx_hashes_f, this.__hx_length_f);
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				if (( res >= 0 )) {
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					global::haxe.lang.FieldLookup.@remove<int>(this.__hx_hashes_f, this.__hx_length_f, res);
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					global::haxe.lang.FieldLookup.@remove<double>(this.__hx_dynamics_f, this.__hx_length_f, res);
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					this.__hx_length_f--;
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					return true;
				}
				
			}
			
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			return false;
		}
		#line default
		
		public override object __hx_lookupField(string field, int hash, bool throwErrors, bool isCheck) {
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			int res = global::haxe.lang.FieldLookup.findHash(hash, this.__hx_hashes, this.__hx_length);
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			if (( res >= 0 )) {
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return this.__hx_dynamics[res];
			}
			else {
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				res = global::haxe.lang.FieldLookup.findHash(hash, this.__hx_hashes_f, this.__hx_length_f);
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				if (( res >= 0 )) {
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					return this.__hx_dynamics_f[res];
				}
				
			}
			
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			if (isCheck) {
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return global::haxe.lang.Runtime.undefined;
			}
			else {
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return null;
			}
			
		}
		#line default
		
		public override double __hx_lookupField_f(string field, int hash, bool throwErrors) {
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			int res = global::haxe.lang.FieldLookup.findHash(hash, this.__hx_hashes_f, this.__hx_length_f);
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			if (( res >= 0 )) {
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return this.__hx_dynamics_f[res];
			}
			else {
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				res = global::haxe.lang.FieldLookup.findHash(hash, this.__hx_hashes, this.__hx_length);
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				if (( res >= 0 )) {
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					return ((double) (global::haxe.lang.Runtime.toDouble(this.__hx_dynamics[res])) );
				}
				
			}
			
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			return default(double);
		}
		#line default
		
		public override object __hx_lookupSetField(string field, int hash, object @value) {
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			int res = global::haxe.lang.FieldLookup.findHash(hash, this.__hx_hashes, this.__hx_length);
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			if (( res >= 0 )) {
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return this.__hx_dynamics[res] = @value;
			}
			else {
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				int res2 = global::haxe.lang.FieldLookup.findHash(hash, this.__hx_hashes_f, this.__hx_length_f);
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				if (( res2 >= 0 )) {
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					global::haxe.lang.FieldLookup.@remove<int>(this.__hx_hashes_f, this.__hx_length_f, res2);
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					global::haxe.lang.FieldLookup.@remove<double>(this.__hx_dynamics_f, this.__hx_length_f, res2);
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					this.__hx_length_f--;
				}
				
			}
			
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			global::haxe.lang.FieldLookup.insert<int>(ref this.__hx_hashes, this.__hx_length,  ~ (res) , hash);
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			global::haxe.lang.FieldLookup.insert<object>(ref this.__hx_dynamics, this.__hx_length,  ~ (res) , @value);
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			this.__hx_length++;
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			return @value;
		}
		#line default
		
		public override double __hx_lookupSetField_f(string field, int hash, double @value) {
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			int res = global::haxe.lang.FieldLookup.findHash(hash, this.__hx_hashes_f, this.__hx_length_f);
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			if (( res >= 0 )) {
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return this.__hx_dynamics_f[res] = @value;
			}
			else {
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				int res2 = global::haxe.lang.FieldLookup.findHash(hash, this.__hx_hashes, this.__hx_length);
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				if (( res2 >= 0 )) {
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					global::haxe.lang.FieldLookup.@remove<int>(this.__hx_hashes, this.__hx_length, res2);
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					global::haxe.lang.FieldLookup.@remove<object>(this.__hx_dynamics, this.__hx_length, res2);
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					this.__hx_length--;
				}
				
			}
			
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			global::haxe.lang.FieldLookup.insert<int>(ref this.__hx_hashes_f, this.__hx_length_f,  ~ (res) , hash);
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			global::haxe.lang.FieldLookup.insert<double>(ref this.__hx_dynamics_f, this.__hx_length_f,  ~ (res) , @value);
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			this.__hx_length_f++;
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			return @value;
		}
		#line default
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			{
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				int i = default(int);
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				{
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					i = 0;
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					while (( i < this.__hx_length )) {
						#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
						baseArr.push(global::haxe.lang.FieldLookup.lookupHash(this.__hx_hashes[i++]));
					}
					
				}
				
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				{
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					i = 0;
					#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					while (( i < this.__hx_length_f )) {
						#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
						baseArr.push(global::haxe.lang.FieldLookup.lookupHash(this.__hx_hashes_f[i++]));
					}
					
				}
				
				#line 41 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
		public override string ToString(){
			return this.toString();
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.lang {
	public interface IGenericObject : global::haxe.lang.IHxObject {
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.lang {
	public class GenericInterface : global::System.Attribute {
		
		public GenericInterface(global::System.Type generic) : base() {
			#line 79 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			this.generic = generic;
		}
		#line default
		
		public readonly global::System.Type generic;
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.lang {
	public class Enum {
		
		public Enum(int index) {
			#line 94 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			this.index = index;
		}
		#line default
		
		public readonly int index;
		
		public virtual string getTag() {
			#line 99 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			throw global::haxe.lang.HaxeException.wrap("Not Implemented");
		}
		#line default
		
		public virtual global::Array<object> getParams() {
			#line 104 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			return new global::Array<object>(new object[]{});
		}
		#line default
		
		public virtual string toString() {
			#line 109 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			return this.getTag();
		}
		#line default
		
		public override string ToString(){
			return this.toString();
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.lang {
	public class ParamEnum : global::haxe.lang.Enum {
		
		public ParamEnum(int index, object[] @params) : base(index) {
			#line 121 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			this.@params = @params;
		}
		#line default
		
		public readonly object[] @params;
		
		public override global::Array<object> getParams() {
			#line 126 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			if (( this.@params == null )) {
				#line 126 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return new global::Array<object>(new object[]{});
			}
			else {
				#line 126 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return new global::Array<object>(((object[]) (this.@params) ));
			}
			
		}
		#line default
		
		public override string toString() {
			#line 131 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			if (( ( this.@params == null ) || ( ( ((object[]) (this.@params) ) as global::System.Array ).Length == 0 ) )) {
				#line 131 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return this.getTag();
			}
			
			#line 132 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			global::System.Text.StringBuilder ret_b = new global::System.Text.StringBuilder();
			{
				#line 133 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				string x = this.getTag();
				#line 133 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				ret_b.Append(((string) (global::Std.@string(x)) ));
			}
			
			#line 133 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			ret_b.Append(((string) ("(") ));
			bool first = true;
			{
				#line 135 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				int _g = 0;
				#line 135 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				object[] _g1 = this.@params;
				#line 135 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				while (( _g < ( ((object[]) (_g1) ) as global::System.Array ).Length )) {
					#line 135 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					object p = ((object) (((object[]) (_g1) )[_g]) );
					#line 135 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					 ++ _g;
					#line 137 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					if (first) {
						#line 138 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
						first = false;
					}
					else {
						#line 140 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
						ret_b.Append(((string) (",") ));
					}
					
					#line 141 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					{
						#line 141 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
						object x1 = p;
						#line 141 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
						ret_b.Append(((string) (global::Std.@string(x1)) ));
					}
					
				}
				
			}
			
			#line 143 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			ret_b.Append(((string) (")") ));
			return ret_b.ToString();
		}
		#line default
		
		public override bool Equals(object obj) {
			#line 149 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			if (global::haxe.lang.Runtime.eq(obj, this)) {
				#line 150 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return true;
			}
			
			#line 151 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			global::haxe.lang.ParamEnum obj1 = null;
			#line 151 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			{
				#line 151 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				object @value = obj;
				#line 151 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				obj1 = ((global::haxe.lang.ParamEnum) (( @value as global::haxe.lang.ParamEnum )) );
			}
			
			#line 152 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			bool ret = ( ( ( obj1 != null ) && global::Std.@is(obj1, global::Type.getClass<object>(this)) ) && ( obj1.index == this.index ) );
			if ( ! (ret) ) {
				#line 154 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return false;
			}
			
			#line 155 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			if (( obj1.@params == this.@params )) {
				#line 156 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return true;
			}
			
			#line 157 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			int len = 0;
			if (( ( ( obj1.@params == null ) || ( this.@params == null ) ) || ( (len = ( ((object[]) (this.@params) ) as global::System.Array ).Length) != ( ((object[]) (obj1.@params) ) as global::System.Array ).Length ) )) {
				#line 159 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				return false;
			}
			
			#line 160 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			{
				#line 160 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				int _g = 0;
				#line 160 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				while (( _g < len )) {
					#line 160 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					int i = _g++;
					#line 162 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					if ( ! (global::Type.enumEq<object>(((object) (((object[]) (obj1.@params) )[i]) ), ((object) (((object[]) (this.@params) )[i]) ))) ) {
						#line 163 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
						return false;
					}
					
				}
				
			}
			
			#line 165 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
			return true;
		}
		#line default
		
		public override int GetHashCode() {
			unchecked {
				#line 170 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				int h = 19;
				if (( this.@params != null )) {
					#line 171 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					int _g = 0;
					#line 171 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					object[] _g1 = this.@params;
					#line 171 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
					while (( _g < ( ((object[]) (_g1) ) as global::System.Array ).Length )) {
						#line 171 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
						object p = ((object) (((object[]) (_g1) )[_g]) );
						#line 171 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
						 ++ _g;
						#line 173 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
						h = ( h * 31 );
						if (( p != null )) {
							#line 175 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
							h += ((int) (global::haxe.lang.Runtime.toInt(p.GetHashCode())) );
						}
						
					}
					
				}
				
				#line 177 "/usr/lib/haxe/std/cs/internal/HxObject.hx"
				h += this.index;
				return h;
			}
			#line default
		}
		
		
	}
}


