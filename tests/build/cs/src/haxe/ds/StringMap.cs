
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.ds {
	public class StringMap<T> : global::haxe.lang.HxObject, global::haxe.ds.StringMap, global::haxe.IMap<object, T> {
		
		public StringMap(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public StringMap() {
			#line 61 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			global::haxe.ds.StringMap<object>.__hx_ctor_haxe_ds_StringMap<T>(this);
		}
		#line default
		
		public static void __hx_ctor_haxe_ds_StringMap<T_c>(global::haxe.ds.StringMap<T_c> __temp_me55) {
			unchecked {
				#line 64 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				__temp_me55.cachedIndex = -1;
			}
			#line default
		}
		
		
		public static object __hx_cast<T_c_c>(global::haxe.ds.StringMap me) {
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			return ( (( me != null )) ? (me.haxe_ds_StringMap_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			return new global::haxe.ds.StringMap<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			return new global::haxe.ds.StringMap<object>();
		}
		#line default
		
		public virtual object haxe_ds_StringMap_cast<T_c>() {
			unchecked {
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
					#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					return this;
				}
				
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				global::haxe.ds.StringMap<T_c> new_me = new global::haxe.ds.StringMap<T_c>(global::haxe.lang.EmptyObject.EMPTY);
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				global::Array<object> fields = global::Reflect.fields(this);
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				int i = 0;
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				while (( i < fields.length )) {
					#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					string field = global::haxe.lang.Runtime.toString(fields[i++]);
					#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					switch (field) {
						case "vals":
						{
							#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							if (( this.vals != null )) {
								#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								T_c[] __temp_new_arr52 = new T_c[this.vals.Length];
								#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								int __temp_i53 = -1;
								#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								while ((  ++ __temp_i53 < this.vals.Length )) {
									#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
									object __temp_obj54 = ((object) (this.vals[__temp_i53]) );
									#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
									if (( __temp_obj54 != null )) {
										#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
										__temp_new_arr52[__temp_i53] = global::haxe.lang.Runtime.genericCast<T_c>(__temp_obj54);
									}
									
								}
								
								#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								new_me.vals = __temp_new_arr52;
							}
							else {
								#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								new_me.vals = null;
							}
							
							#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							break;
						}
						
						
						default:
						{
							#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
							#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							break;
						}
						
					}
					
				}
				
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				return new_me;
			}
			#line default
		}
		
		
		public virtual object haxe_IMap_cast<K_c, V_c>() {
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			return this.haxe_ds_StringMap_cast<V_c>();
		}
		#line default
		
		public int[] hashes;
		
		public string[] _keys;
		
		public T[] vals;
		
		public int nBuckets;
		
		public int size;
		
		public int nOccupied;
		
		public int upperBound;
		
		public string cachedKey;
		
		public int cachedIndex;
		
		public virtual void @set(string key, T @value) {
			unchecked {
				#line 70 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				int x = default(int);
				#line 70 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				int k = default(int);
				if (( this.nOccupied >= this.upperBound )) {
					#line 73 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					if (( this.nBuckets > ( this.size << 1 ) )) {
						#line 74 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.resize(( this.nBuckets - 1 ));
					}
					else {
						#line 76 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.resize(( this.nBuckets + 2 ));
					}
					
				}
				
				#line 79 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				int[] hashes = this.hashes;
				#line 79 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				string[] keys = this._keys;
				#line 79 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				int[] hashes1 = hashes;
				{
					#line 81 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					int mask = default(int);
					#line 81 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					if (( this.nBuckets == 0 )) {
						#line 81 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						mask = 0;
					}
					else {
						#line 81 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						mask = ( this.nBuckets - 1 );
					}
					
					#line 82 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					int site = x = this.nBuckets;
					{
						#line 83 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						int k1 = key.GetHashCode();
						#line 83 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						k1 = ( ( k1 + 2127912214 ) + (( k1 << 12 )) );
						#line 83 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						k1 = ( ( k1 ^ -949894596 ) ^ ( k1 >> 19 ) );
						#line 83 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						k1 = ( ( k1 + 374761393 ) + (( k1 << 5 )) );
						#line 83 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						k1 = ( ( k1 + -744332180 ) ^ ( k1 << 9 ) );
						#line 83 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						k1 = ( ( k1 + -42973499 ) + (( k1 << 3 )) );
						#line 83 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						k1 = ( ( k1 ^ -1252372727 ) ^ ( k1 >> 16 ) );
						#line 83 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						int ret = k1;
						#line 83 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						if (( (( ret & -2 )) == 0 )) {
							#line 83 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							if (( ret == 0 )) {
								#line 83 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								ret = 2;
							}
							else {
								#line 83 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								ret = -1;
							}
							
						}
						
						#line 83 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						k = ret;
					}
					
					#line 84 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					int i = ( k & mask );
					#line 84 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					int nProbes = 0;
					#line 86 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					int delKey = -1;
					#line 88 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					if (( hashes1[i] == 0 )) {
						#line 89 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						x = i;
					}
					else {
						#line 91 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						int last = i;
						#line 91 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						int flag = default(int);
						do {
							#line 92 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							bool __temp_stmt2 = default(bool);
							#line 92 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							{
								#line 92 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								int v = flag = hashes1[i];
								#line 92 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								__temp_stmt2 = ( v == 0 );
							}
							
							#line 92 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							bool __temp_boolv3 = false;
							#line 92 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							if ( ! (__temp_stmt2) ) {
								#line 92 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								__temp_boolv3 = ( ( flag == k ) && string.Equals(this._keys[i], key) );
							}
							
							#line 92 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							bool __temp_stmt1 = ( __temp_stmt2 || __temp_boolv3 );
							if ( ! ((__temp_stmt1)) ) {
								#line 94 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								if (( ( flag == 1 ) && ( delKey == -1 ) )) {
									#line 95 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
									delKey = i;
								}
								
								#line 96 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								i = ( ( i +  ++ nProbes ) & mask );
							}
							else {
								#line 93 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								break;
							}
							
						}
						while (true);
						#line 104 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						if (( ( flag == 0 ) && ( delKey != -1 ) )) {
							#line 105 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							x = delKey;
						}
						else {
							#line 107 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							x = i;
						}
						
					}
					
				}
				
				#line 117 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				int flag1 = hashes1[x];
				if (( flag1 == 0 )) {
					#line 120 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					keys[x] = key;
					this.vals[x] = @value;
					hashes1[x] = k;
					this.size++;
					this.nOccupied++;
				}
				else if (( flag1 == 1 )) {
					#line 126 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					keys[x] = key;
					this.vals[x] = @value;
					hashes1[x] = k;
					this.size++;
				}
				else {
					#line 132 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					this.vals[x] = @value;
				}
				
				#line 136 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				this.cachedIndex = x;
				this.cachedKey = key;
			}
			#line default
		}
		
		
		public int lookup(string key) {
			unchecked {
				#line 143 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				if (( this.nBuckets != 0 )) {
					#line 145 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					int[] hashes = this.hashes;
					#line 145 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					string[] keys = this._keys;
					#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					int mask = ( this.nBuckets - 1 );
					#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					int hash = default(int);
					#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					{
						#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						int k = key.GetHashCode();
						#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						k = ( ( k + 2127912214 ) + (( k << 12 )) );
						#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						k = ( ( k ^ -949894596 ) ^ ( k >> 19 ) );
						#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						k = ( ( k + 374761393 ) + (( k << 5 )) );
						#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						k = ( ( k + -744332180 ) ^ ( k << 9 ) );
						#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						k = ( ( k + -42973499 ) + (( k << 3 )) );
						#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						k = ( ( k ^ -1252372727 ) ^ ( k >> 16 ) );
						#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						int ret = k;
						#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						if (( (( ret & -2 )) == 0 )) {
							#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							if (( ret == 0 )) {
								#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								ret = 2;
							}
							else {
								#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								ret = -1;
							}
							
						}
						
						#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						hash = ret;
					}
					
					#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					int k1 = hash;
					#line 147 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					int nProbes = 0;
					int i = ( k1 & mask );
					int last = i;
					#line 149 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					int flag = default(int);
					#line 151 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					do {
						#line 151 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						bool __temp_stmt4 = default(bool);
						#line 151 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						{
							#line 151 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							int v = flag = hashes[i];
							#line 151 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							__temp_stmt4 = ( v == 0 );
						}
						
						#line 151 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						bool __temp_boolv3 =  ! (__temp_stmt4) ;
						#line 151 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						bool __temp_boolv2 = false;
						#line 151 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						if (__temp_boolv3) {
							#line 151 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							__temp_boolv2 = (( ( ( flag == 1 ) || ( flag != k1 ) ) ||  ! (string.Equals(keys[i], key))  ));
						}
						
						#line 151 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						bool __temp_stmt1 = ( __temp_boolv3 && __temp_boolv2 );
						#line 153 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						if (__temp_stmt1) {
							#line 153 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							i = ( ( i +  ++ nProbes ) & mask );
						}
						else {
							#line 153 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							break;
						}
						
					}
					while (true);
					#line 166 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					if (( (( flag & -2 )) == 0 )) {
						#line 166 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return -1;
					}
					else {
						#line 166 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return i;
					}
					
				}
				
				#line 169 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				return -1;
			}
			#line default
		}
		
		
		public void resize(int newNBuckets) {
			unchecked {
				#line 175 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				int[] newHash = null;
				int j = 1;
				{
					#line 178 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					{
						#line 178 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						int x = newNBuckets;
						#line 178 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						 -- x;
						#line 178 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						x |= ((int) (( ((uint) (x) ) >> 1 )) );
						#line 178 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						x |= ((int) (( ((uint) (x) ) >> 2 )) );
						#line 178 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						x |= ((int) (( ((uint) (x) ) >> 4 )) );
						#line 178 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						x |= ((int) (( ((uint) (x) ) >> 8 )) );
						#line 178 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						x |= ((int) (( ((uint) (x) ) >> 16 )) );
						#line 178 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						newNBuckets =  ++ x;
					}
					
					#line 179 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					if (( newNBuckets < 4 )) {
						#line 179 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						newNBuckets = 4;
					}
					
					#line 180 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					if (( this.size >= ( ( newNBuckets * 0.77 ) + 0.5 ) )) {
						#line 182 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						j = 0;
					}
					else {
						#line 184 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						int nfSize = newNBuckets;
						newHash = new int[nfSize];
						if (( this.nBuckets < newNBuckets )) {
							#line 188 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							string[] k = new string[newNBuckets];
							if (( this._keys != null )) {
								#line 190 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								global::System.Array.Copy(((global::System.Array) (this._keys) ), ((int) (0) ), ((global::System.Array) (k) ), ((int) (0) ), ((int) (this.nBuckets) ));
							}
							
							#line 191 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							this._keys = k;
							#line 193 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							T[] v = new T[newNBuckets];
							if (( this.vals != null )) {
								#line 195 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								global::System.Array.Copy(((global::System.Array) (this.vals) ), ((int) (0) ), ((global::System.Array) (v) ), ((int) (0) ), ((int) (this.nBuckets) ));
							}
							
							#line 196 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							this.vals = v;
						}
						
					}
					
				}
				
				#line 201 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				if (( j != 0 )) {
					#line 205 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					this.cachedKey = null;
					this.cachedIndex = -1;
					#line 209 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					j = -1;
					int nBuckets = this.nBuckets;
					#line 210 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					string[] _keys = this._keys;
					#line 210 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					T[] vals = this.vals;
					#line 210 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					int[] hashes = this.hashes;
					#line 212 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					int newMask = ( newNBuckets - 1 );
					while ((  ++ j < nBuckets )) {
						#line 215 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						int k1 = default(int);
						bool __temp_stmt1 = default(bool);
						#line 216 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						{
							#line 216 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							int v1 = k1 = hashes[j];
							#line 216 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							__temp_stmt1 = ( (( v1 & -2 )) == 0 );
						}
						
						#line 216 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						if ( ! (__temp_stmt1) ) {
							#line 218 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							string key = _keys[j];
							T val = vals[j];
							#line 221 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							hashes[j] = 1;
							while (true) {
								#line 224 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								int nProbes = 0;
								#line 226 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								int i = ( k1 & newMask );
								#line 228 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								while ( ! ((( newHash[i] == 0 ))) ) {
									#line 229 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
									i = ( ( i +  ++ nProbes ) & newMask );
								}
								
								#line 231 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								newHash[i] = k1;
								#line 233 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								bool __temp_boolv4 = ( i < nBuckets );
								#line 233 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								bool __temp_boolv3 = false;
								#line 233 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								if (__temp_boolv4) {
									#line 233 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
									bool __temp_stmt5 = default(bool);
									#line 233 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
									{
										#line 233 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
										int v2 = k1 = hashes[i];
										#line 233 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
										__temp_stmt5 = ( (( v2 & -2 )) == 0 );
									}
									
									#line 233 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
									__temp_boolv3 =  ! (__temp_stmt5) ;
								}
								
								#line 233 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								bool __temp_stmt2 = ( __temp_boolv4 && __temp_boolv3 );
								#line 233 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
								if (__temp_stmt2) {
									#line 235 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
									{
										#line 236 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
										string tmp = _keys[i];
										_keys[i] = key;
										key = tmp;
									}
									
									#line 240 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
									{
										#line 241 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
										T tmp1 = vals[i];
										vals[i] = val;
										val = tmp1;
									}
									
									#line 246 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
									hashes[i] = 1;
								}
								else {
									#line 248 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
									_keys[i] = key;
									vals[i] = val;
									break;
								}
								
							}
							
						}
						
					}
					
					#line 256 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					if (( nBuckets > newNBuckets )) {
						#line 258 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						{
							#line 259 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							string[] k2 = new string[newNBuckets];
							global::System.Array.Copy(((global::System.Array) (_keys) ), ((int) (0) ), ((global::System.Array) (k2) ), ((int) (0) ), ((int) (newNBuckets) ));
							this._keys = k2;
						}
						
						#line 263 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						{
							#line 264 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							T[] v3 = new T[newNBuckets];
							global::System.Array.Copy(((global::System.Array) (vals) ), ((int) (0) ), ((global::System.Array) (v3) ), ((int) (0) ), ((int) (newNBuckets) ));
							this.vals = v3;
						}
						
					}
					
					#line 270 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					this.hashes = newHash;
					this.nBuckets = newNBuckets;
					this.nOccupied = this.size;
					this.upperBound = ((int) (( ( newNBuckets * 0.77 ) + .5 )) );
				}
				
			}
			#line default
		}
		
		
		public virtual global::haxe.lang.Null<T> @get(object k) {
			#line 277 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			return this.@get(global::haxe.lang.Runtime.toString(k));
		}
		#line default
		
		public virtual global::haxe.lang.Null<T> @get(string key) {
			unchecked {
				#line 279 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				int idx = -1;
				#line 281 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				if (( string.Equals(this.cachedKey, key) && ( (idx = this.cachedIndex) != -1 ) )) {
					#line 283 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					return new global::haxe.lang.Null<T>(this.vals[idx], true);
				}
				
				#line 286 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				idx = this.lookup(key);
				if (( idx != -1 )) {
					#line 290 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					this.cachedKey = key;
					this.cachedIndex = idx;
					#line 293 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					return new global::haxe.lang.Null<T>(this.vals[idx], true);
				}
				
				#line 296 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				return default(global::haxe.lang.Null<T>);
			}
			#line default
		}
		
		
		public virtual bool exists(string key) {
			unchecked {
				#line 325 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				int idx = -1;
				#line 327 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				if (( string.Equals(this.cachedKey, key) && ( (idx = this.cachedIndex) != -1 ) )) {
					#line 329 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					return true;
				}
				
				#line 333 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				idx = this.lookup(key);
				if (( idx != -1 )) {
					#line 337 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					this.cachedKey = key;
					this.cachedIndex = idx;
					#line 340 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					return true;
				}
				
				#line 343 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				return false;
			}
			#line default
		}
		
		
		public object keys() {
			#line 379 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			return new global::haxe.ds._StringMap.StringMapKeyIterator<T>(((global::haxe.ds.StringMap<T>) (this) ));
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				switch (hash) {
					case 922671056:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.cachedIndex = ((int) (@value) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					case 2022294396:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.upperBound = ((int) (@value) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					case 480756972:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.nOccupied = ((int) (@value) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					case 1280549057:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.size = ((int) (@value) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					case 1537812987:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.nBuckets = ((int) (@value) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					default:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				switch (hash) {
					case 922671056:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.cachedIndex = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					case 1395555037:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.cachedKey = global::haxe.lang.Runtime.toString(@value);
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					case 2022294396:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.upperBound = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					case 480756972:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.nOccupied = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					case 1280549057:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.size = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					case 1537812987:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.nBuckets = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					case 1313416818:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.vals = ((T[]) (@value) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					case 2048392659:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this._keys = ((string[]) (@value) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					case 995006396:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.hashes = ((int[]) (@value) );
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					default:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				switch (hash) {
					case 1191633396:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "keys", 1191633396)) );
					}
					
					
					case 1071652316:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "exists", 1071652316)) );
					}
					
					
					case 5144726:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get", 5144726)) );
					}
					
					
					case 142301684:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "resize", 142301684)) );
					}
					
					
					case 1639293562:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "lookup", 1639293562)) );
					}
					
					
					case 5741474:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set", 5741474)) );
					}
					
					
					case 922671056:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.cachedIndex;
					}
					
					
					case 1395555037:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.cachedKey;
					}
					
					
					case 2022294396:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.upperBound;
					}
					
					
					case 480756972:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.nOccupied;
					}
					
					
					case 1280549057:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.size;
					}
					
					
					case 1537812987:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.nBuckets;
					}
					
					
					case 1313416818:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.vals;
					}
					
					
					case 2048392659:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this._keys;
					}
					
					
					case 995006396:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.hashes;
					}
					
					
					default:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				switch (hash) {
					case 922671056:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return ((double) (this.cachedIndex) );
					}
					
					
					case 2022294396:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return ((double) (this.upperBound) );
					}
					
					
					case 480756972:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return ((double) (this.nOccupied) );
					}
					
					
					case 1280549057:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return ((double) (this.size) );
					}
					
					
					case 1537812987:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return ((double) (this.nBuckets) );
					}
					
					
					default:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				switch (hash) {
					case 1191633396:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.keys();
					}
					
					
					case 1071652316:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.exists(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					case 5144726:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return (this.@get(global::haxe.lang.Runtime.toString(dynargs[0]))).toDynamic();
					}
					
					
					case 142301684:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.resize(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						break;
					}
					
					
					case 1639293562:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.lookup(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					case 5741474:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.@set(global::haxe.lang.Runtime.toString(dynargs[0]), global::haxe.lang.Runtime.genericCast<T>(dynargs[1]));
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						break;
					}
					
					
					default:
					{
						#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			baseArr.push("cachedIndex");
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			baseArr.push("cachedKey");
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			baseArr.push("upperBound");
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			baseArr.push("nOccupied");
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			baseArr.push("size");
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			baseArr.push("nBuckets");
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			baseArr.push("vals");
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			baseArr.push("_keys");
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			baseArr.push("hashes");
			#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			{
				#line 26 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.ds {
	[global::haxe.lang.GenericInterface(typeof(global::haxe.ds.StringMap<object>))]
	public interface StringMap : global::haxe.lang.IHxObject, global::haxe.lang.IGenericObject {
		
		object haxe_ds_StringMap_cast<T_c>();
		
		object haxe_IMap_cast<K_c, V_c>();
		
		int lookup(string key);
		
		void resize(int newNBuckets);
		
		bool exists(string key);
		
		object keys();
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.ds._StringMap {
	public sealed class StringMapKeyIterator<T> : global::haxe.lang.HxObject, global::haxe.ds._StringMap.StringMapKeyIterator {
		
		public StringMapKeyIterator(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public StringMapKeyIterator(global::haxe.ds.StringMap<T> m) {
			#line 482 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			global::haxe.ds._StringMap.StringMapKeyIterator<object>.__hx_ctor_haxe_ds__StringMap_StringMapKeyIterator<T>(this, m);
		}
		#line default
		
		public static void __hx_ctor_haxe_ds__StringMap_StringMapKeyIterator<T_c>(global::haxe.ds._StringMap.StringMapKeyIterator<T_c> __temp_me56, global::haxe.ds.StringMap<T_c> m) {
			#line 483 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			__temp_me56.m = m;
			__temp_me56.i = 0;
			__temp_me56.len = m.nBuckets;
		}
		#line default
		
		public static object __hx_cast<T_c_c>(global::haxe.ds._StringMap.StringMapKeyIterator me) {
			#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			return ( (( me != null )) ? (me.haxe_ds__StringMap_StringMapKeyIterator_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			return new global::haxe.ds._StringMap.StringMapKeyIterator<object>(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			return new global::haxe.ds._StringMap.StringMapKeyIterator<object>(((global::haxe.ds.StringMap<object>) (global::haxe.ds.StringMap<object>.__hx_cast<object>(((global::haxe.ds.StringMap) (arr[0]) ))) ));
		}
		#line default
		
		public object haxe_ds__StringMap_StringMapKeyIterator_cast<T_c>() {
			#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				return this;
			}
			
			#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			global::haxe.ds._StringMap.StringMapKeyIterator<T_c> new_me = new global::haxe.ds._StringMap.StringMapKeyIterator<T_c>(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
			#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			int i = 0;
			#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			while (( i < fields.length )) {
				#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			return new_me;
		}
		#line default
		
		public global::haxe.ds.StringMap<T> m;
		
		public int i;
		
		public int len;
		
		public bool hasNext() {
			unchecked {
				#line 489 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				{
					#line 489 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					int _g1 = this.i;
					#line 489 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					int _g = this.len;
					#line 489 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
					while (( _g1 < _g )) {
						#line 489 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						int j = _g1++;
						if ( ! ((( (( this.m.hashes[j] & -2 )) == 0 ))) ) {
							#line 491 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
							this.i = j;
							return true;
						}
						
					}
					
				}
				
				#line 495 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				return false;
			}
			#line default
		}
		
		
		public string next() {
			#line 499 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			string ret = this.m._keys[this.i];
			#line 501 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			this.m.cachedIndex = this.i;
			this.m.cachedKey = ret;
			#line 504 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			this.i++;
			return ret;
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				switch (hash) {
					case 5393365:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.len = ((int) (@value) );
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					case 105:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.i = ((int) (@value) );
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					default:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				switch (hash) {
					case 5393365:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.len = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					case 105:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.i = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					case 109:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						this.m = ((global::haxe.ds.StringMap<T>) (global::haxe.ds.StringMap<object>.__hx_cast<T>(((global::haxe.ds.StringMap) (@value) ))) );
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return @value;
					}
					
					
					default:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				switch (hash) {
					case 1224901875:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "next", 1224901875)) );
					}
					
					
					case 407283053:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "hasNext", 407283053)) );
					}
					
					
					case 5393365:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.len;
					}
					
					
					case 105:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.i;
					}
					
					
					case 109:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.m;
					}
					
					
					default:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				switch (hash) {
					case 5393365:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return ((double) (this.len) );
					}
					
					
					case 105:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return ((double) (this.i) );
					}
					
					
					default:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				switch (hash) {
					case 1224901875:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.next();
					}
					
					
					case 407283053:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return this.hasNext();
					}
					
					
					default:
					{
						#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			baseArr.push("len");
			#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			baseArr.push("i");
			#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			baseArr.push("m");
			#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
			{
				#line 477 "/usr/lib/haxe/std/cs/_std/haxe/ds/StringMap.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.ds._StringMap {
	[global::haxe.lang.GenericInterface(typeof(global::haxe.ds._StringMap.StringMapKeyIterator<object>))]
	public interface StringMapKeyIterator : global::haxe.lang.IHxObject, global::haxe.lang.IGenericObject {
		
		object haxe_ds__StringMap_StringMapKeyIterator_cast<T_c>();
		
		bool hasNext();
		
		string next();
		
	}
}


