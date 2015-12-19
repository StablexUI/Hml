
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.ds {
	public class ObjectPool<T> : global::haxe.lang.HxObject, global::sx.ds.ObjectPool {
		
		public ObjectPool(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public ObjectPool() {
			#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			global::sx.ds.ObjectPool<object>.__hx_ctor_sx_ds_ObjectPool<T>(this);
		}
		#line default
		
		public static void __hx_ctor_sx_ds_ObjectPool<T_c>(global::sx.ds.ObjectPool<T_c> __temp_me135) {
			#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			__temp_me135.length = 0;
			#line 22 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			__temp_me135.__pool = new global::Array<T_c>(new T_c[]{});
		}
		#line default
		
		public static object __hx_cast<T_c_c>(global::sx.ds.ObjectPool me) {
			#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			return ( (( me != null )) ? (me.sx_ds_ObjectPool_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			return new global::sx.ds.ObjectPool<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			return new global::sx.ds.ObjectPool<object>();
		}
		#line default
		
		public virtual object sx_ds_ObjectPool_cast<T_c>() {
			#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				return this;
			}
			
			#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			global::sx.ds.ObjectPool<T_c> new_me = new global::sx.ds.ObjectPool<T_c>(global::haxe.lang.EmptyObject.EMPTY);
			#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			int i = 0;
			#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			while (( i < fields.length )) {
				#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			return new_me;
		}
		#line default
		
		public int length;
		
		public global::Array<T> __pool;
		
		public void push(T obj) {
			#line 31 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			this.__pool[this.length] = obj;
			this.length++;
		}
		#line default
		
		public global::haxe.lang.Null<T> pop() {
			#line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			if (( this.length > 0 )) {
				#line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				this.length--;
				return new global::haxe.lang.Null<T>(this.__pool[this.length], true);
			}
			else {
				#line 45 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				return default(global::haxe.lang.Null<T>);
			}
			
		}
		#line default
		
		public void clear() {
			#line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			{
				#line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				int _g1 = 0;
				#line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				int _g = this.length;
				#line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				while (( _g1 < _g )) {
					#line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
					int i = _g1++;
					this.__pool[i] = default(T);
				}
				
			}
			
			#line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			this.length = 0;
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				switch (hash) {
					case 520590566:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						this.length = ((int) (@value) );
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return @value;
					}
					
					
					default:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				switch (hash) {
					case 2035606524:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						this.__pool = ((global::Array<T>) (global::Array<object>.__hx_cast<T>(((global::Array) (@value) ))) );
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return @value;
					}
					
					
					case 520590566:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						this.length = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return @value;
					}
					
					
					default:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				switch (hash) {
					case 1213952397:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "clear", 1213952397)) );
					}
					
					
					case 5594513:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "pop", 5594513)) );
					}
					
					
					case 1247875546:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "push", 1247875546)) );
					}
					
					
					case 2035606524:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return this.__pool;
					}
					
					
					case 520590566:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return this.length;
					}
					
					
					default:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				switch (hash) {
					case 520590566:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return ((double) (this.length) );
					}
					
					
					default:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				switch (hash) {
					case 1213952397:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						this.clear();
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						break;
					}
					
					
					case 5594513:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return (this.pop()).toDynamic();
					}
					
					
					case 1247875546:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						this.push(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]));
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						break;
					}
					
					
					default:
					{
						#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			baseArr.push("__pool");
			#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			baseArr.push("length");
			#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
			{
				#line 9 "/home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.ds {
	[global::haxe.lang.GenericInterface(typeof(global::sx.ds.ObjectPool<object>))]
	public interface ObjectPool : global::haxe.lang.IHxObject, global::haxe.lang.IGenericObject {
		
		object sx_ds_ObjectPool_cast<T_c>();
		
		void clear();
		
	}
}


