
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.ds {
	public class ObjectMap<K, V> : global::haxe.lang.HxObject, global::haxe.ds.ObjectMap, global::haxe.IMap<K, V> {
		
		public ObjectMap(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public ObjectMap() {
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			global::haxe.ds.ObjectMap<object, object>.__hx_ctor_haxe_ds_ObjectMap<K, V>(this);
		}
		#line default
		
		public static void __hx_ctor_haxe_ds_ObjectMap<K_c, V_c>(global::haxe.ds.ObjectMap<K_c, V_c> __temp_me49) {
		}
		
		
		public static object __hx_cast<K_c_c, V_c_c>(global::haxe.ds.ObjectMap me) {
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			return ( (( me != null )) ? (me.haxe_ds_ObjectMap_cast<K_c_c, V_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			return new global::haxe.ds.ObjectMap<object, object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			return new global::haxe.ds.ObjectMap<object, object>();
		}
		#line default
		
		public virtual object haxe_ds_ObjectMap_cast<K_c, V_c>() {
			unchecked {
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				if (( global::haxe.lang.Runtime.eq(typeof(K), typeof(K_c)) && global::haxe.lang.Runtime.eq(typeof(V), typeof(V_c)) )) {
					#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					return this;
				}
				
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				global::haxe.ds.ObjectMap<K_c, V_c> new_me = new global::haxe.ds.ObjectMap<K_c, V_c>(global::haxe.lang.EmptyObject.EMPTY);
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				global::Array<object> fields = global::Reflect.fields(this);
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				int i = 0;
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				while (( i < fields.length )) {
					#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					string field = global::haxe.lang.Runtime.toString(fields[i++]);
					#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					switch (field) {
						case "vals":
						{
							#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
							if (( this.vals != null )) {
								#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
								V_c[] __temp_new_arr43 = new V_c[this.vals.Length];
								#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
								int __temp_i44 = -1;
								#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
								while ((  ++ __temp_i44 < this.vals.Length )) {
									#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
									object __temp_obj45 = ((object) (this.vals[__temp_i44]) );
									#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
									if (( __temp_obj45 != null )) {
										#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
										__temp_new_arr43[__temp_i44] = global::haxe.lang.Runtime.genericCast<V_c>(__temp_obj45);
									}
									
								}
								
								#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
								new_me.vals = __temp_new_arr43;
							}
							else {
								#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
								new_me.vals = null;
							}
							
							#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
							break;
						}
						
						
						case "_keys":
						{
							#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
							if (( this._keys != null )) {
								#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
								K_c[] __temp_new_arr46 = new K_c[this._keys.Length];
								#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
								int __temp_i47 = -1;
								#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
								while ((  ++ __temp_i47 < this._keys.Length )) {
									#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
									object __temp_obj48 = ((object) (this._keys[__temp_i47]) );
									#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
									if (( __temp_obj48 != null )) {
										#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
										__temp_new_arr46[__temp_i47] = global::haxe.lang.Runtime.genericCast<K_c>(__temp_obj48);
									}
									
								}
								
								#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
								new_me._keys = __temp_new_arr46;
							}
							else {
								#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
								new_me._keys = null;
							}
							
							#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
							break;
						}
						
						
						default:
						{
							#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
							global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
							#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
							break;
						}
						
					}
					
				}
				
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				return new_me;
			}
			#line default
		}
		
		
		public virtual object haxe_IMap_cast<K_c, V_c>() {
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			return this.haxe_ds_ObjectMap_cast<K_c, V_c>();
		}
		#line default
		
		public int[] hashes;
		
		public K[] _keys;
		
		public V[] vals;
		
		public int nBuckets;
		
		public K cachedKey;
		
		public int cachedIndex;
		
		public int lookup(K key) {
			unchecked {
				#line 144 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				if (( this.nBuckets != 0 )) {
					#line 146 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					int[] hashes = this.hashes;
					#line 146 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					K[] keys = this._keys;
					#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					int mask = ( this.nBuckets - 1 );
					#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					int hash = default(int);
					#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					{
						#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						int k = key.GetHashCode();
						#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						k = ( ( k + 2127912214 ) + (( k << 12 )) );
						#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						k = ( ( k ^ -949894596 ) ^ ( k >> 19 ) );
						#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						k = ( ( k + 374761393 ) + (( k << 5 )) );
						#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						k = ( ( k + -744332180 ) ^ ( k << 9 ) );
						#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						k = ( ( k + -42973499 ) + (( k << 3 )) );
						#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						k = ( ( k ^ -1252372727 ) ^ ( k >> 16 ) );
						#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						int ret = k;
						#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						if (( (( ret & -2 )) == 0 )) {
							#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
							if (( ret == 0 )) {
								#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
								ret = 2;
							}
							else {
								#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
								ret = -1;
							}
							
						}
						
						#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						hash = ret;
					}
					
					#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					int k1 = hash;
					#line 148 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					int nProbes = 0;
					int i = ( k1 & mask );
					int last = i;
					#line 150 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					int flag = default(int);
					#line 152 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					do {
						#line 152 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						bool __temp_stmt4 = default(bool);
						#line 152 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						{
							#line 152 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
							int v = flag = hashes[i];
							#line 152 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
							__temp_stmt4 = ( v == 0 );
						}
						
						#line 152 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						bool __temp_boolv3 =  ! (__temp_stmt4) ;
						#line 152 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						bool __temp_boolv2 = false;
						#line 152 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						if (__temp_boolv3) {
							#line 152 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
							__temp_boolv2 = (( ( ( flag == 1 ) || ( flag != k1 ) ) || ( ! (global::haxe.lang.Runtime.eq(keys[i], key)) ) ));
						}
						
						#line 152 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						bool __temp_stmt1 = ( __temp_boolv3 && __temp_boolv2 );
						#line 154 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						if (__temp_stmt1) {
							#line 154 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
							i = ( ( i +  ++ nProbes ) & mask );
						}
						else {
							#line 154 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
							break;
						}
						
					}
					while (true);
					#line 167 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					if (( (( flag & -2 )) == 0 )) {
						#line 167 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return -1;
					}
					else {
						#line 167 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return i;
					}
					
				}
				
				#line 170 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				return -1;
			}
			#line default
		}
		
		
		public virtual global::haxe.lang.Null<V> @get(K key) {
			unchecked {
				#line 280 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				int idx = -1;
				#line 282 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				if (( global::haxe.lang.Runtime.eq(this.cachedKey, key) && ( (idx = this.cachedIndex) != -1 ) )) {
					#line 284 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					return new global::haxe.lang.Null<V>(this.vals[idx], true);
				}
				
				#line 288 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				idx = this.lookup(key);
				if (( idx != -1 )) {
					#line 292 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					this.cachedKey = key;
					this.cachedIndex = idx;
					#line 296 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					return new global::haxe.lang.Null<V>(this.vals[idx], true);
				}
				
				#line 299 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				return default(global::haxe.lang.Null<V>);
			}
			#line default
		}
		
		
		public virtual object keys() {
			#line 384 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			return new global::haxe.ds._ObjectMap.ObjectMapKeyIterator<K, V>(((global::haxe.ds.ObjectMap<K, V>) (this) ));
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				switch (hash) {
					case 922671056:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.cachedIndex = ((int) (@value) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					case 1395555037:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.cachedKey = global::haxe.lang.Runtime.genericCast<K>(((object) (@value) ));
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(((object) (@value) ))) );
					}
					
					
					case 1537812987:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.nBuckets = ((int) (@value) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					default:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				switch (hash) {
					case 922671056:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.cachedIndex = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					case 1395555037:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.cachedKey = global::haxe.lang.Runtime.genericCast<K>(@value);
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					case 1537812987:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.nBuckets = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					case 1313416818:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.vals = ((V[]) (@value) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					case 2048392659:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this._keys = ((K[]) (@value) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					case 995006396:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.hashes = ((int[]) (@value) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					default:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				switch (hash) {
					case 1191633396:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "keys", 1191633396)) );
					}
					
					
					case 5144726:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get", 5144726)) );
					}
					
					
					case 1639293562:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "lookup", 1639293562)) );
					}
					
					
					case 922671056:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.cachedIndex;
					}
					
					
					case 1395555037:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.cachedKey;
					}
					
					
					case 1537812987:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.nBuckets;
					}
					
					
					case 1313416818:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.vals;
					}
					
					
					case 2048392659:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this._keys;
					}
					
					
					case 995006396:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.hashes;
					}
					
					
					default:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				switch (hash) {
					case 922671056:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return ((double) (this.cachedIndex) );
					}
					
					
					case 1395555037:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(((object) (this.cachedKey) ))) );
					}
					
					
					case 1537812987:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return ((double) (this.nBuckets) );
					}
					
					
					default:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				switch (hash) {
					case 1191633396:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.keys();
					}
					
					
					case 5144726:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return (this.@get(global::haxe.lang.Runtime.genericCast<K>(dynargs[0]))).toDynamic();
					}
					
					
					case 1639293562:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.lookup(global::haxe.lang.Runtime.genericCast<K>(dynargs[0]));
					}
					
					
					default:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			baseArr.push("cachedIndex");
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			baseArr.push("cachedKey");
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			baseArr.push("nBuckets");
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			baseArr.push("vals");
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			baseArr.push("_keys");
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			baseArr.push("hashes");
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			{
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.ds {
	[global::haxe.lang.GenericInterface(typeof(global::haxe.ds.ObjectMap<object, object>))]
	public interface ObjectMap : global::haxe.lang.IHxObject, global::haxe.lang.IGenericObject {
		
		object haxe_ds_ObjectMap_cast<K_c, V_c>();
		
		object haxe_IMap_cast<K_c, V_c>();
		
		object keys();
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.ds._ObjectMap {
	public sealed class ObjectMapKeyIterator<T, V> : global::haxe.lang.HxObject, global::haxe.ds._ObjectMap.ObjectMapKeyIterator {
		
		public ObjectMapKeyIterator(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public ObjectMapKeyIterator(global::haxe.ds.ObjectMap<T, V> m) {
			#line 485 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			global::haxe.ds._ObjectMap.ObjectMapKeyIterator<object, object>.__hx_ctor_haxe_ds__ObjectMap_ObjectMapKeyIterator<T, V>(this, m);
		}
		#line default
		
		public static void __hx_ctor_haxe_ds__ObjectMap_ObjectMapKeyIterator<T_c, V_c>(global::haxe.ds._ObjectMap.ObjectMapKeyIterator<T_c, V_c> __temp_me50, global::haxe.ds.ObjectMap<T_c, V_c> m) {
			#line 486 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			__temp_me50.i = 0;
			__temp_me50.m = m;
			__temp_me50.len = m.nBuckets;
		}
		#line default
		
		public static object __hx_cast<T_c_c, V_c_c>(global::haxe.ds._ObjectMap.ObjectMapKeyIterator me) {
			#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			return ( (( me != null )) ? (me.haxe_ds__ObjectMap_ObjectMapKeyIterator_cast<T_c_c, V_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			return new global::haxe.ds._ObjectMap.ObjectMapKeyIterator<object, object>(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			return new global::haxe.ds._ObjectMap.ObjectMapKeyIterator<object, object>(((global::haxe.ds.ObjectMap<object, object>) (global::haxe.ds.ObjectMap<object, object>.__hx_cast<object, object>(((global::haxe.ds.ObjectMap) (arr[0]) ))) ));
		}
		#line default
		
		public object haxe_ds__ObjectMap_ObjectMapKeyIterator_cast<T_c, V_c>() {
			#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			if (( global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c)) && global::haxe.lang.Runtime.eq(typeof(V), typeof(V_c)) )) {
				#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				return this;
			}
			
			#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			global::haxe.ds._ObjectMap.ObjectMapKeyIterator<T_c, V_c> new_me = new global::haxe.ds._ObjectMap.ObjectMapKeyIterator<T_c, V_c>(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
			#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			int i = 0;
			#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			while (( i < fields.length )) {
				#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			return new_me;
		}
		#line default
		
		public global::haxe.ds.ObjectMap<T, V> m;
		
		public int i;
		
		public int len;
		
		public bool hasNext() {
			unchecked {
				#line 492 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				{
					#line 492 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					int _g1 = this.i;
					#line 492 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					int _g = this.len;
					#line 492 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					while (( _g1 < _g )) {
						#line 492 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						int j = _g1++;
						#line 494 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						if ( ! ((( (( this.m.hashes[j] & -2 )) == 0 ))) ) {
							#line 496 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
							this.i = j;
							return true;
						}
						
					}
					
				}
				
				#line 500 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				return false;
			}
			#line default
		}
		
		
		public T next() {
			unchecked {
				#line 504 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				T ret = this.m._keys[this.i];
				#line 507 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				this.m.cachedIndex = this.i;
				this.m.cachedKey = ret;
				#line 511 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				this.i = ( this.i + 1 );
				return ret;
			}
			#line default
		}
		
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				switch (hash) {
					case 5393365:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.len = ((int) (@value) );
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					case 105:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.i = ((int) (@value) );
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					default:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				switch (hash) {
					case 5393365:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.len = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					case 105:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.i = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					case 109:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.m = ((global::haxe.ds.ObjectMap<T, V>) (global::haxe.ds.ObjectMap<object, object>.__hx_cast<T, V>(((global::haxe.ds.ObjectMap) (@value) ))) );
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					default:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				switch (hash) {
					case 1224901875:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "next", 1224901875)) );
					}
					
					
					case 407283053:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "hasNext", 407283053)) );
					}
					
					
					case 5393365:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.len;
					}
					
					
					case 105:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.i;
					}
					
					
					case 109:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.m;
					}
					
					
					default:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				switch (hash) {
					case 5393365:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return ((double) (this.len) );
					}
					
					
					case 105:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return ((double) (this.i) );
					}
					
					
					default:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				switch (hash) {
					case 1224901875:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.next();
					}
					
					
					case 407283053:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.hasNext();
					}
					
					
					default:
					{
						#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			baseArr.push("len");
			#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			baseArr.push("i");
			#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			baseArr.push("m");
			#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			{
				#line 480 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.ds._ObjectMap {
	[global::haxe.lang.GenericInterface(typeof(global::haxe.ds._ObjectMap.ObjectMapKeyIterator<object, object>))]
	public interface ObjectMapKeyIterator : global::haxe.lang.IHxObject, global::haxe.lang.IGenericObject {
		
		object haxe_ds__ObjectMap_ObjectMapKeyIterator_cast<T_c, V_c>();
		
		bool hasNext();
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.ds._ObjectMap {
	public sealed class ObjectMapValueIterator<K, T> : global::haxe.lang.HxObject, global::haxe.ds._ObjectMap.ObjectMapValueIterator {
		
		public ObjectMapValueIterator(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public ObjectMapValueIterator(global::haxe.ds.ObjectMap<K, T> m) {
			#line 523 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			global::haxe.ds._ObjectMap.ObjectMapValueIterator<object, object>.__hx_ctor_haxe_ds__ObjectMap_ObjectMapValueIterator<K, T>(this, m);
		}
		#line default
		
		public static void __hx_ctor_haxe_ds__ObjectMap_ObjectMapValueIterator<K_c, T_c>(global::haxe.ds._ObjectMap.ObjectMapValueIterator<K_c, T_c> __temp_me51, global::haxe.ds.ObjectMap<K_c, T_c> m) {
			#line 525 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			__temp_me51.i = 0;
			__temp_me51.m = m;
			__temp_me51.len = m.nBuckets;
		}
		#line default
		
		public static object __hx_cast<K_c_c, T_c_c>(global::haxe.ds._ObjectMap.ObjectMapValueIterator me) {
			#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			return ( (( me != null )) ? (me.haxe_ds__ObjectMap_ObjectMapValueIterator_cast<K_c_c, T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			return new global::haxe.ds._ObjectMap.ObjectMapValueIterator<object, object>(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			return new global::haxe.ds._ObjectMap.ObjectMapValueIterator<object, object>(((global::haxe.ds.ObjectMap<object, object>) (global::haxe.ds.ObjectMap<object, object>.__hx_cast<object, object>(((global::haxe.ds.ObjectMap) (arr[0]) ))) ));
		}
		#line default
		
		public object haxe_ds__ObjectMap_ObjectMapValueIterator_cast<K_c, T_c>() {
			#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			if (( global::haxe.lang.Runtime.eq(typeof(K), typeof(K_c)) && global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c)) )) {
				#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				return this;
			}
			
			#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			global::haxe.ds._ObjectMap.ObjectMapValueIterator<K_c, T_c> new_me = new global::haxe.ds._ObjectMap.ObjectMapValueIterator<K_c, T_c>(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
			#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			int i = 0;
			#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			while (( i < fields.length )) {
				#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			return new_me;
		}
		#line default
		
		public global::haxe.ds.ObjectMap<K, T> m;
		
		public int i;
		
		public int len;
		
		public bool hasNext() {
			unchecked {
				#line 531 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				{
					#line 531 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					int _g1 = this.i;
					#line 531 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					int _g = this.len;
					#line 531 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
					while (( _g1 < _g )) {
						#line 531 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						int j = _g1++;
						#line 533 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						if ( ! ((( (( this.m.hashes[j] & -2 )) == 0 ))) ) {
							#line 535 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
							this.i = j;
							return true;
						}
						
					}
					
				}
				
				#line 539 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				return false;
			}
			#line default
		}
		
		
		public T next() {
			unchecked {
				#line 543 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				T ret = this.m.vals[this.i];
				this.i = ( this.i + 1 );
				return ret;
			}
			#line default
		}
		
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				switch (hash) {
					case 5393365:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.len = ((int) (@value) );
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					case 105:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.i = ((int) (@value) );
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					default:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				switch (hash) {
					case 5393365:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.len = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					case 105:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.i = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					case 109:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						this.m = ((global::haxe.ds.ObjectMap<K, T>) (global::haxe.ds.ObjectMap<object, object>.__hx_cast<K, T>(((global::haxe.ds.ObjectMap) (@value) ))) );
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return @value;
					}
					
					
					default:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				switch (hash) {
					case 1224901875:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "next", 1224901875)) );
					}
					
					
					case 407283053:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "hasNext", 407283053)) );
					}
					
					
					case 5393365:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.len;
					}
					
					
					case 105:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.i;
					}
					
					
					case 109:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.m;
					}
					
					
					default:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				switch (hash) {
					case 5393365:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return ((double) (this.len) );
					}
					
					
					case 105:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return ((double) (this.i) );
					}
					
					
					default:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				switch (hash) {
					case 1224901875:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.next();
					}
					
					
					case 407283053:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return this.hasNext();
					}
					
					
					default:
					{
						#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			baseArr.push("len");
			#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			baseArr.push("i");
			#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			baseArr.push("m");
			#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
			{
				#line 518 "/usr/lib/haxe/std/cs/_std/haxe/ds/ObjectMap.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.ds._ObjectMap {
	[global::haxe.lang.GenericInterface(typeof(global::haxe.ds._ObjectMap.ObjectMapValueIterator<object, object>))]
	public interface ObjectMapValueIterator : global::haxe.lang.IHxObject, global::haxe.lang.IGenericObject {
		
		object haxe_ds__ObjectMap_ObjectMapValueIterator_cast<K_c, T_c>();
		
		bool hasNext();
		
	}
}


