
#pragma warning disable 109, 114, 219, 429, 168, 162
public sealed class Array<T> : global::haxe.lang.HxObject, global::Array {
	
	public Array(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public Array(T[] native) {
		#line 63 "/usr/lib/haxe/std/cs/_std/Array.hx"
		global::Array<object>.__hx_ctor__Array<T>(((global::Array<T>) (this) ), ((T[]) (native) ));
	}
	#line default
	
	public Array() {
		#line 50 "/usr/lib/haxe/std/cs/_std/Array.hx"
		global::Array<object>.__hx_ctor__Array<T>(((global::Array<T>) (this) ));
	}
	#line default
	
	public static void __hx_ctor__Array<T_c>(global::Array<T_c> __temp_me5, T_c[] native) {
		#line 65 "/usr/lib/haxe/std/cs/_std/Array.hx"
		__temp_me5.length = ( native as global::System.Array ).Length;
		__temp_me5.__a = native;
	}
	#line default
	
	public static void __hx_ctor__Array<T_c>(global::Array<T_c> __temp_me4) {
		#line 52 "/usr/lib/haxe/std/cs/_std/Array.hx"
		__temp_me4.length = 0;
		__temp_me4.__a = new T_c[0];
	}
	#line default
	
	public static object __hx_cast<T_c_c>(global::Array me) {
		#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
		return ( (( me != null )) ? (me.Array_cast<T_c_c>()) : (null) );
	}
	#line default
	
	public static global::Array<X> ofNative<X>(X[] native) {
		#line 41 "/usr/lib/haxe/std/cs/_std/Array.hx"
		return new global::Array<X>(((X[]) (native) ));
	}
	#line default
	
	public static global::Array<Y> alloc<Y>(int size) {
		#line 47 "/usr/lib/haxe/std/cs/_std/Array.hx"
		return new global::Array<Y>(((Y[]) (new Y[size]) ));
	}
	#line default
	
	public static new object __hx_createEmpty() {
		#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
		return new global::Array<object>(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
		return new global::Array<object>();
	}
	#line default
	
	public object Array_cast<T_c>() {
		unchecked {
			#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
				return this;
			}
			
			#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
			global::Array<T_c> new_me = new global::Array<T_c>(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
			#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
			int i = 0;
			#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
			while (( i < fields.length )) {
				#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
				switch (field) {
					case "__a":
					{
						#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
						if (( this.__a != null )) {
							#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
							T_c[] __temp_new_arr1 = new T_c[this.__a.Length];
							#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
							int __temp_i2 = -1;
							#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
							while ((  ++ __temp_i2 < this.__a.Length )) {
								#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
								object __temp_obj3 = ((object) (this.__a[__temp_i2]) );
								#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
								if (( __temp_obj3 != null )) {
									#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
									__temp_new_arr1[__temp_i2] = global::haxe.lang.Runtime.genericCast<T_c>(__temp_obj3);
								}
								
							}
							
							#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
							new_me.__a = __temp_new_arr1;
						}
						else {
							#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
							new_me.__a = null;
						}
						
						#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
						break;
					}
					
					
					default:
					{
						#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
						global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
						#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
						break;
					}
					
				}
				
			}
			
			#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return new_me;
		}
		#line default
	}
	
	
	public int length;
	
	public T[] __a;
	
	public global::Array<T> concat(global::Array<T> a) {
		#line 72 "/usr/lib/haxe/std/cs/_std/Array.hx"
		int len = ( this.length + a.length );
		T[] retarr = new T[len];
		global::System.Array.Copy(((global::System.Array) (this.__a) ), ((int) (0) ), ((global::System.Array) (retarr) ), ((int) (0) ), ((int) (this.length) ));
		global::System.Array.Copy(((global::System.Array) (a.__a) ), ((int) (0) ), ((global::System.Array) (retarr) ), ((int) (this.length) ), ((int) (a.length) ));
		#line 77 "/usr/lib/haxe/std/cs/_std/Array.hx"
		return new global::Array<T>(((T[]) (retarr) ));
	}
	#line default
	
	public void concatNative(T[] a) {
		#line 82 "/usr/lib/haxe/std/cs/_std/Array.hx"
		T[] __a = this.__a;
		int len = ( this.length + ( a as global::System.Array ).Length );
		if (( ( __a as global::System.Array ).Length >= len )) {
			#line 86 "/usr/lib/haxe/std/cs/_std/Array.hx"
			global::System.Array.Copy(((global::System.Array) (a) ), ((int) (0) ), ((global::System.Array) (__a) ), ((int) (this.length) ), ((int) (this.length) ));
		}
		else {
			#line 88 "/usr/lib/haxe/std/cs/_std/Array.hx"
			T[] newarr = new T[len];
			global::System.Array.Copy(((global::System.Array) (__a) ), ((int) (0) ), ((global::System.Array) (newarr) ), ((int) (0) ), ((int) (this.length) ));
			global::System.Array.Copy(((global::System.Array) (a) ), ((int) (0) ), ((global::System.Array) (newarr) ), ((int) (this.length) ), ((int) (( a as global::System.Array ).Length) ));
			#line 92 "/usr/lib/haxe/std/cs/_std/Array.hx"
			this.__a = newarr;
		}
		
		#line 95 "/usr/lib/haxe/std/cs/_std/Array.hx"
		this.length = len;
	}
	#line default
	
	public int indexOf(T x, global::haxe.lang.Null<int> fromIndex) {
		unchecked {
			#line 100 "/usr/lib/haxe/std/cs/_std/Array.hx"
			int len = this.length;
			#line 100 "/usr/lib/haxe/std/cs/_std/Array.hx"
			int i = default(int);
			#line 100 "/usr/lib/haxe/std/cs/_std/Array.hx"
			if ( ! (fromIndex.hasValue) ) {
				#line 100 "/usr/lib/haxe/std/cs/_std/Array.hx"
				i = 0;
			}
			else {
				#line 100 "/usr/lib/haxe/std/cs/_std/Array.hx"
				i = (fromIndex).@value;
			}
			
			#line 101 "/usr/lib/haxe/std/cs/_std/Array.hx"
			if (( i < 0 )) {
				#line 103 "/usr/lib/haxe/std/cs/_std/Array.hx"
				i += len;
				if (( i < 0 )) {
					#line 104 "/usr/lib/haxe/std/cs/_std/Array.hx"
					i = 0;
				}
				
			}
			else if (( i >= len )) {
				#line 108 "/usr/lib/haxe/std/cs/_std/Array.hx"
				return -1;
			}
			
			#line 110 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return global::System.Array.IndexOf<T>(((T[]) (this.__a) ), global::haxe.lang.Runtime.genericCast<T>(x), ((int) (i) ), ((int) (( len - i )) ));
		}
		#line default
	}
	
	
	public int lastIndexOf(T x, global::haxe.lang.Null<int> fromIndex) {
		unchecked {
			#line 115 "/usr/lib/haxe/std/cs/_std/Array.hx"
			int len = this.length;
			#line 115 "/usr/lib/haxe/std/cs/_std/Array.hx"
			int i = default(int);
			#line 115 "/usr/lib/haxe/std/cs/_std/Array.hx"
			if ( ! (fromIndex.hasValue) ) {
				#line 115 "/usr/lib/haxe/std/cs/_std/Array.hx"
				i = ( len - 1 );
			}
			else {
				#line 115 "/usr/lib/haxe/std/cs/_std/Array.hx"
				i = (fromIndex).@value;
			}
			
			#line 116 "/usr/lib/haxe/std/cs/_std/Array.hx"
			if (( i >= len )) {
				#line 118 "/usr/lib/haxe/std/cs/_std/Array.hx"
				i = ( len - 1 );
			}
			else if (( i < 0 )) {
				#line 122 "/usr/lib/haxe/std/cs/_std/Array.hx"
				i += len;
				if (( i < 0 )) {
					#line 123 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return -1;
				}
				
			}
			
			#line 125 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return global::System.Array.LastIndexOf<T>(((T[]) (this.__a) ), global::haxe.lang.Runtime.genericCast<T>(x), ((int) (i) ), ((int) (( i + 1 )) ));
		}
		#line default
	}
	
	
	public string @join(string sep) {
		unchecked {
			#line 130 "/usr/lib/haxe/std/cs/_std/Array.hx"
			global::System.Text.StringBuilder buf_b = new global::System.Text.StringBuilder();
			int i = -1;
			#line 133 "/usr/lib/haxe/std/cs/_std/Array.hx"
			bool first = true;
			int length = this.length;
			while ((  ++ i < length )) {
				#line 137 "/usr/lib/haxe/std/cs/_std/Array.hx"
				if (first) {
					#line 138 "/usr/lib/haxe/std/cs/_std/Array.hx"
					first = false;
				}
				else {
					#line 140 "/usr/lib/haxe/std/cs/_std/Array.hx"
					buf_b.Append(((string) (global::Std.@string(sep)) ));
				}
				
				#line 141 "/usr/lib/haxe/std/cs/_std/Array.hx"
				buf_b.Append(((string) (global::Std.@string(this.__a[i])) ));
			}
			
			#line 144 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return buf_b.ToString();
		}
		#line default
	}
	
	
	public global::haxe.lang.Null<T> pop() {
		#line 149 "/usr/lib/haxe/std/cs/_std/Array.hx"
		T[] __a = this.__a;
		int length = this.length;
		if (( length > 0 )) {
			#line 153 "/usr/lib/haxe/std/cs/_std/Array.hx"
			T val = __a[ -- length];
			__a[length] = default(T);
			this.length = length;
			#line 157 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return new global::haxe.lang.Null<T>(val, true);
		}
		else {
			#line 159 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return default(global::haxe.lang.Null<T>);
		}
		
	}
	#line default
	
	public int push(T x) {
		unchecked {
			#line 165 "/usr/lib/haxe/std/cs/_std/Array.hx"
			if (( this.length >= ( this.__a as global::System.Array ).Length )) {
				#line 167 "/usr/lib/haxe/std/cs/_std/Array.hx"
				int newLen = ( (( this.length << 1 )) + 1 );
				T[] newarr = new T[newLen];
				( this.__a as global::System.Array ).CopyTo(((global::System.Array) (newarr) ), ((int) (0) ));
				#line 171 "/usr/lib/haxe/std/cs/_std/Array.hx"
				this.__a = newarr;
			}
			
			#line 174 "/usr/lib/haxe/std/cs/_std/Array.hx"
			this.__a[this.length] = x;
			return  ++ this.length;
		}
		#line default
	}
	
	
	public void reverse() {
		unchecked {
			#line 180 "/usr/lib/haxe/std/cs/_std/Array.hx"
			int i = 0;
			int l = this.length;
			T[] a = this.__a;
			int half = ( l >> 1 );
			l -= 1;
			while (( i < half )) {
				#line 187 "/usr/lib/haxe/std/cs/_std/Array.hx"
				T tmp = a[i];
				a[i] = a[( l - i )];
				a[( l - i )] = tmp;
				i += 1;
			}
			
		}
		#line default
	}
	
	
	public global::haxe.lang.Null<T> shift() {
		unchecked {
			#line 196 "/usr/lib/haxe/std/cs/_std/Array.hx"
			int l = this.length;
			if (( l == 0 )) {
				#line 198 "/usr/lib/haxe/std/cs/_std/Array.hx"
				return default(global::haxe.lang.Null<T>);
			}
			
			#line 200 "/usr/lib/haxe/std/cs/_std/Array.hx"
			T[] a = this.__a;
			T x = a[0];
			l -= 1;
			global::System.Array.Copy(((global::System.Array) (a) ), ((int) (1) ), ((global::System.Array) (a) ), ((int) (0) ), ((int) (( this.length - 1 )) ));
			a[l] = default(T);
			this.length = l;
			#line 207 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return new global::haxe.lang.Null<T>(x, true);
		}
		#line default
	}
	
	
	public global::Array<T> slice(int pos, global::haxe.lang.Null<int> end) {
		#line 212 "/usr/lib/haxe/std/cs/_std/Array.hx"
		if (( pos < 0 )) {
			#line 213 "/usr/lib/haxe/std/cs/_std/Array.hx"
			pos = ( this.length + pos );
			if (( pos < 0 )) {
				#line 215 "/usr/lib/haxe/std/cs/_std/Array.hx"
				pos = 0;
			}
			
		}
		
		#line 217 "/usr/lib/haxe/std/cs/_std/Array.hx"
		if ( ! (end.hasValue) ) {
			#line 218 "/usr/lib/haxe/std/cs/_std/Array.hx"
			end = new global::haxe.lang.Null<int>(this.length, true);
		}
		else if (( (end).@value < 0 )) {
			#line 220 "/usr/lib/haxe/std/cs/_std/Array.hx"
			end = new global::haxe.lang.Null<int>(( this.length + (end).@value ), true);
		}
		
		#line 221 "/usr/lib/haxe/std/cs/_std/Array.hx"
		if (( (end).@value > this.length )) {
			#line 222 "/usr/lib/haxe/std/cs/_std/Array.hx"
			end = new global::haxe.lang.Null<int>(this.length, true);
		}
		
		#line 223 "/usr/lib/haxe/std/cs/_std/Array.hx"
		int len = ( (end).@value - pos );
		if (( len < 0 )) {
			#line 224 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return new global::Array<T>();
		}
		
		#line 226 "/usr/lib/haxe/std/cs/_std/Array.hx"
		T[] newarr = new T[len];
		global::System.Array.Copy(((global::System.Array) (this.__a) ), ((int) (pos) ), ((global::System.Array) (newarr) ), ((int) (0) ), ((int) (len) ));
		#line 229 "/usr/lib/haxe/std/cs/_std/Array.hx"
		return new global::Array<T>(((T[]) (newarr) ));
	}
	#line default
	
	public void sort(global::haxe.lang.Function f) {
		unchecked {
			#line 234 "/usr/lib/haxe/std/cs/_std/Array.hx"
			if (( this.length == 0 )) {
				#line 235 "/usr/lib/haxe/std/cs/_std/Array.hx"
				return;
			}
			
			#line 236 "/usr/lib/haxe/std/cs/_std/Array.hx"
			this.quicksort(0, ( this.length - 1 ), f);
		}
		#line default
	}
	
	
	public void quicksort(int lo, int hi, global::haxe.lang.Function f) {
		unchecked {
			#line 241 "/usr/lib/haxe/std/cs/_std/Array.hx"
			T[] buf = this.__a;
			int i = lo;
			#line 242 "/usr/lib/haxe/std/cs/_std/Array.hx"
			int j = hi;
			T p = buf[( ( i + j ) >> 1 )];
			while (( i <= j )) {
				#line 246 "/usr/lib/haxe/std/cs/_std/Array.hx"
				while (( ( i < hi ) && ( ((int) (f.__hx_invoke2_f(default(double), buf[i], default(double), p)) ) < 0 ) )) {
					#line 246 "/usr/lib/haxe/std/cs/_std/Array.hx"
					i++;
				}
				
				#line 247 "/usr/lib/haxe/std/cs/_std/Array.hx"
				while (( ( j > lo ) && ( ((int) (f.__hx_invoke2_f(default(double), buf[j], default(double), p)) ) > 0 ) )) {
					#line 247 "/usr/lib/haxe/std/cs/_std/Array.hx"
					j--;
				}
				
				#line 248 "/usr/lib/haxe/std/cs/_std/Array.hx"
				if (( i <= j )) {
					#line 250 "/usr/lib/haxe/std/cs/_std/Array.hx"
					T t = buf[i];
					buf[i++] = buf[j];
					buf[j--] = t;
				}
				
			}
			
			#line 256 "/usr/lib/haxe/std/cs/_std/Array.hx"
			if (( lo < j )) {
				#line 256 "/usr/lib/haxe/std/cs/_std/Array.hx"
				this.quicksort(lo, j, f);
			}
			
			#line 257 "/usr/lib/haxe/std/cs/_std/Array.hx"
			if (( i < hi )) {
				#line 257 "/usr/lib/haxe/std/cs/_std/Array.hx"
				this.quicksort(i, hi, f);
			}
			
		}
		#line default
	}
	
	
	public global::Array<T> splice(int pos, int len) {
		#line 262 "/usr/lib/haxe/std/cs/_std/Array.hx"
		if (( len < 0 )) {
			#line 262 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return new global::Array<T>();
		}
		
		#line 263 "/usr/lib/haxe/std/cs/_std/Array.hx"
		if (( pos < 0 )) {
			#line 264 "/usr/lib/haxe/std/cs/_std/Array.hx"
			pos = ( this.length + pos );
			if (( pos < 0 )) {
				#line 265 "/usr/lib/haxe/std/cs/_std/Array.hx"
				pos = 0;
			}
			
		}
		
		#line 267 "/usr/lib/haxe/std/cs/_std/Array.hx"
		if (( pos > this.length )) {
			#line 268 "/usr/lib/haxe/std/cs/_std/Array.hx"
			pos = 0;
			len = 0;
		}
		else if (( ( pos + len ) > this.length )) {
			#line 271 "/usr/lib/haxe/std/cs/_std/Array.hx"
			len = ( this.length - pos );
			if (( len < 0 )) {
				#line 272 "/usr/lib/haxe/std/cs/_std/Array.hx"
				len = 0;
			}
			
		}
		
		#line 274 "/usr/lib/haxe/std/cs/_std/Array.hx"
		T[] a = this.__a;
		#line 276 "/usr/lib/haxe/std/cs/_std/Array.hx"
		T[] ret = new T[len];
		global::System.Array.Copy(((global::System.Array) (a) ), ((int) (pos) ), ((global::System.Array) (ret) ), ((int) (0) ), ((int) (len) ));
		global::Array<T> ret1 = new global::Array<T>(((T[]) (ret) ));
		#line 280 "/usr/lib/haxe/std/cs/_std/Array.hx"
		int end = ( pos + len );
		global::System.Array.Copy(((global::System.Array) (a) ), ((int) (end) ), ((global::System.Array) (a) ), ((int) (pos) ), ((int) (( this.length - end )) ));
		this.length -= len;
		while ((  -- len >= 0 )) {
			#line 284 "/usr/lib/haxe/std/cs/_std/Array.hx"
			a[( this.length + len )] = default(T);
		}
		
		#line 285 "/usr/lib/haxe/std/cs/_std/Array.hx"
		return ret1;
	}
	#line default
	
	public void spliceVoid(int pos, int len) {
		#line 290 "/usr/lib/haxe/std/cs/_std/Array.hx"
		if (( len < 0 )) {
			#line 290 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return;
		}
		
		#line 291 "/usr/lib/haxe/std/cs/_std/Array.hx"
		if (( pos < 0 )) {
			#line 292 "/usr/lib/haxe/std/cs/_std/Array.hx"
			pos = ( this.length + pos );
			if (( pos < 0 )) {
				#line 293 "/usr/lib/haxe/std/cs/_std/Array.hx"
				pos = 0;
			}
			
		}
		
		#line 295 "/usr/lib/haxe/std/cs/_std/Array.hx"
		if (( pos > this.length )) {
			#line 296 "/usr/lib/haxe/std/cs/_std/Array.hx"
			pos = 0;
			len = 0;
		}
		else if (( ( pos + len ) > this.length )) {
			#line 299 "/usr/lib/haxe/std/cs/_std/Array.hx"
			len = ( this.length - pos );
			if (( len < 0 )) {
				#line 300 "/usr/lib/haxe/std/cs/_std/Array.hx"
				len = 0;
			}
			
		}
		
		#line 302 "/usr/lib/haxe/std/cs/_std/Array.hx"
		T[] a = this.__a;
		#line 304 "/usr/lib/haxe/std/cs/_std/Array.hx"
		int end = ( pos + len );
		global::System.Array.Copy(((global::System.Array) (a) ), ((int) (end) ), ((global::System.Array) (a) ), ((int) (pos) ), ((int) (( this.length - end )) ));
		this.length -= len;
		while ((  -- len >= 0 )) {
			#line 308 "/usr/lib/haxe/std/cs/_std/Array.hx"
			a[( this.length + len )] = default(T);
		}
		
	}
	#line default
	
	public string toString() {
		#line 313 "/usr/lib/haxe/std/cs/_std/Array.hx"
		global::System.Text.StringBuilder ret_b = new global::System.Text.StringBuilder();
		T[] a = this.__a;
		ret_b.Append(((string) ("[") ));
		bool first = true;
		{
			#line 317 "/usr/lib/haxe/std/cs/_std/Array.hx"
			int _g1 = 0;
			#line 317 "/usr/lib/haxe/std/cs/_std/Array.hx"
			int _g = this.length;
			#line 317 "/usr/lib/haxe/std/cs/_std/Array.hx"
			while (( _g1 < _g )) {
				#line 317 "/usr/lib/haxe/std/cs/_std/Array.hx"
				int i = _g1++;
				#line 319 "/usr/lib/haxe/std/cs/_std/Array.hx"
				if (first) {
					#line 320 "/usr/lib/haxe/std/cs/_std/Array.hx"
					first = false;
				}
				else {
					#line 322 "/usr/lib/haxe/std/cs/_std/Array.hx"
					ret_b.Append(((string) (",") ));
				}
				
				#line 323 "/usr/lib/haxe/std/cs/_std/Array.hx"
				ret_b.Append(((string) (global::Std.@string(a[i])) ));
			}
			
		}
		
		#line 326 "/usr/lib/haxe/std/cs/_std/Array.hx"
		ret_b.Append(((string) ("]") ));
		return ret_b.ToString();
	}
	#line default
	
	public void unshift(T x) {
		unchecked {
			#line 332 "/usr/lib/haxe/std/cs/_std/Array.hx"
			T[] __a = this.__a;
			int length = this.length;
			if (( length >= ( __a as global::System.Array ).Length )) {
				#line 336 "/usr/lib/haxe/std/cs/_std/Array.hx"
				int newLen = ( (( length << 1 )) + 1 );
				T[] newarr = new T[newLen];
				global::System.Array.Copy(((global::System.Array) (__a) ), ((int) (0) ), ((global::System.Array) (newarr) ), ((int) (1) ), ((int) (length) ));
				#line 340 "/usr/lib/haxe/std/cs/_std/Array.hx"
				this.__a = newarr;
			}
			else {
				#line 342 "/usr/lib/haxe/std/cs/_std/Array.hx"
				global::System.Array.Copy(((global::System.Array) (__a) ), ((int) (0) ), ((global::System.Array) (__a) ), ((int) (1) ), ((int) (length) ));
			}
			
			#line 345 "/usr/lib/haxe/std/cs/_std/Array.hx"
			this.__a[0] = x;
			 ++ this.length;
		}
		#line default
	}
	
	
	public void insert(int pos, T x) {
		unchecked {
			#line 351 "/usr/lib/haxe/std/cs/_std/Array.hx"
			int l = this.length;
			if (( pos < 0 )) {
				#line 353 "/usr/lib/haxe/std/cs/_std/Array.hx"
				pos = ( l + pos );
				if (( pos < 0 )) {
					#line 354 "/usr/lib/haxe/std/cs/_std/Array.hx"
					pos = 0;
				}
				
			}
			
			#line 356 "/usr/lib/haxe/std/cs/_std/Array.hx"
			if (( pos >= l )) {
				#line 357 "/usr/lib/haxe/std/cs/_std/Array.hx"
				this.push(x);
				return;
			}
			else if (( pos == 0 )) {
				#line 360 "/usr/lib/haxe/std/cs/_std/Array.hx"
				this.unshift(x);
				return;
			}
			
			#line 364 "/usr/lib/haxe/std/cs/_std/Array.hx"
			if (( l >= ( this.__a as global::System.Array ).Length )) {
				#line 366 "/usr/lib/haxe/std/cs/_std/Array.hx"
				int newLen = ( (( this.length << 1 )) + 1 );
				T[] newarr = new T[newLen];
				global::System.Array.Copy(((global::System.Array) (this.__a) ), ((int) (0) ), ((global::System.Array) (newarr) ), ((int) (0) ), ((int) (pos) ));
				newarr[pos] = x;
				global::System.Array.Copy(((global::System.Array) (this.__a) ), ((int) (pos) ), ((global::System.Array) (newarr) ), ((int) (( pos + 1 )) ), ((int) (( l - pos )) ));
				#line 372 "/usr/lib/haxe/std/cs/_std/Array.hx"
				this.__a = newarr;
				 ++ this.length;
			}
			else {
				#line 375 "/usr/lib/haxe/std/cs/_std/Array.hx"
				T[] __a = this.__a;
				global::System.Array.Copy(((global::System.Array) (__a) ), ((int) (pos) ), ((global::System.Array) (__a) ), ((int) (( pos + 1 )) ), ((int) (( l - pos )) ));
				global::System.Array.Copy(((global::System.Array) (__a) ), ((int) (0) ), ((global::System.Array) (__a) ), ((int) (0) ), ((int) (pos) ));
				__a[pos] = x;
				 ++ this.length;
			}
			
		}
		#line default
	}
	
	
	public bool @remove(T x) {
		unchecked {
			#line 385 "/usr/lib/haxe/std/cs/_std/Array.hx"
			T[] __a = this.__a;
			int i = -1;
			int length = this.length;
			while ((  ++ i < length )) {
				#line 390 "/usr/lib/haxe/std/cs/_std/Array.hx"
				if (global::haxe.lang.Runtime.eq(__a[i], x)) {
					#line 392 "/usr/lib/haxe/std/cs/_std/Array.hx"
					global::System.Array.Copy(((global::System.Array) (__a) ), ((int) (( i + 1 )) ), ((global::System.Array) (__a) ), ((int) (i) ), ((int) (( ( length - i ) - 1 )) ));
					__a[ -- this.length] = default(T);
					#line 395 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return true;
				}
				
			}
			
			#line 399 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return false;
		}
		#line default
	}
	
	
	public global::Array<S> map<S>(global::haxe.lang.Function f) {
		#line 403 "/usr/lib/haxe/std/cs/_std/Array.hx"
		global::Array<S> ret = new global::Array<S>(new S[]{});
		{
			#line 404 "/usr/lib/haxe/std/cs/_std/Array.hx"
			int _g = 0;
			#line 404 "/usr/lib/haxe/std/cs/_std/Array.hx"
			global::Array<T> _g1 = this;
			#line 404 "/usr/lib/haxe/std/cs/_std/Array.hx"
			while (( _g < _g1.length )) {
				#line 404 "/usr/lib/haxe/std/cs/_std/Array.hx"
				T elt = _g1[_g];
				#line 404 "/usr/lib/haxe/std/cs/_std/Array.hx"
				 ++ _g;
				ret.push(global::haxe.lang.Runtime.genericCast<S>(f.__hx_invoke1_o(default(double), elt)));
			}
			
		}
		
		#line 406 "/usr/lib/haxe/std/cs/_std/Array.hx"
		return ret;
	}
	#line default
	
	public global::Array<T> filter(global::haxe.lang.Function f) {
		#line 410 "/usr/lib/haxe/std/cs/_std/Array.hx"
		global::Array<T> ret = new global::Array<T>(new T[]{});
		{
			#line 411 "/usr/lib/haxe/std/cs/_std/Array.hx"
			int _g = 0;
			#line 411 "/usr/lib/haxe/std/cs/_std/Array.hx"
			global::Array<T> _g1 = this;
			#line 411 "/usr/lib/haxe/std/cs/_std/Array.hx"
			while (( _g < _g1.length )) {
				#line 411 "/usr/lib/haxe/std/cs/_std/Array.hx"
				T elt = _g1[_g];
				#line 411 "/usr/lib/haxe/std/cs/_std/Array.hx"
				 ++ _g;
				if (global::haxe.lang.Runtime.toBool(f.__hx_invoke1_o(default(double), elt))) {
					#line 413 "/usr/lib/haxe/std/cs/_std/Array.hx"
					ret.push(elt);
				}
				
			}
			
		}
		
		#line 414 "/usr/lib/haxe/std/cs/_std/Array.hx"
		return ret;
	}
	#line default
	
	public global::Array<T> copy() {
		#line 419 "/usr/lib/haxe/std/cs/_std/Array.hx"
		int len = this.length;
		T[] __a = this.__a;
		T[] newarr = new T[len];
		global::System.Array.Copy(((global::System.Array) (__a) ), ((int) (0) ), ((global::System.Array) (newarr) ), ((int) (0) ), ((int) (len) ));
		return new global::Array<T>(((T[]) (newarr) ));
	}
	#line default
	
	public object iterator() {
		#line 428 "/usr/lib/haxe/std/cs/_std/Array.hx"
		return new global::_Array.ArrayIterator<T>(((global::Array<T>) (this) ));
	}
	#line default
	
	public T __get(int idx) {
		#line 433 "/usr/lib/haxe/std/cs/_std/Array.hx"
		if (((bool) (( ((uint) (idx) ) >= this.length )) )) {
			#line 433 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return default(T);
		}
		else {
			#line 433 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return this.__a[idx];
		}
		
	}
	#line default
	
	public T __set(int idx, T v) {
		unchecked {
			#line 438 "/usr/lib/haxe/std/cs/_std/Array.hx"
			uint idx1 = ((uint) (idx) );
			T[] __a = this.__a;
			if (((bool) (( idx1 >= ( __a as global::System.Array ).Length )) )) {
				#line 442 "/usr/lib/haxe/std/cs/_std/Array.hx"
				uint len = ((uint) (( idx1 + 1 )) );
				if (((bool) (( idx1 == ( __a as global::System.Array ).Length )) )) {
					#line 444 "/usr/lib/haxe/std/cs/_std/Array.hx"
					len = ((uint) (( (((uint) (( idx1 << 1 )) )) + 1 )) );
				}
				
				#line 445 "/usr/lib/haxe/std/cs/_std/Array.hx"
				T[] newArr = new T[((int) (len) )];
				( __a as global::System.Array ).CopyTo(((global::System.Array) (newArr) ), ((int) (0) ));
				this.__a = __a = newArr;
			}
			
			#line 450 "/usr/lib/haxe/std/cs/_std/Array.hx"
			if (((bool) (( idx1 >= this.length )) )) {
				#line 451 "/usr/lib/haxe/std/cs/_std/Array.hx"
				this.length = ((int) (((uint) (( idx1 + 1 )) )) );
			}
			
			#line 453 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return __a[((int) (idx1) )] = v;
		}
		#line default
	}
	
	
	public T __unsafe_get(int idx) {
		#line 458 "/usr/lib/haxe/std/cs/_std/Array.hx"
		return this.__a[idx];
	}
	#line default
	
	public T __unsafe_set(int idx, T val) {
		#line 463 "/usr/lib/haxe/std/cs/_std/Array.hx"
		return this.__a[idx] = val;
	}
	#line default
	
	public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
		unchecked {
			#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
			switch (hash) {
				case 520590566:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					this.length = ((int) (@value) );
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return @value;
				}
				
				
				default:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return base.__hx_setField_f(field, hash, @value, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
		unchecked {
			#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
			switch (hash) {
				case 4745537:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					this.__a = ((T[]) (@value) );
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return @value;
				}
				
				
				case 520590566:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					this.length = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return @value;
				}
				
				
				default:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return base.__hx_setField(field, hash, @value, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
		unchecked {
			#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
			switch (hash) {
				case 1621420777:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__unsafe_set", 1621420777)) );
				}
				
				
				case 1620824029:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__unsafe_get", 1620824029)) );
				}
				
				
				case 1916009602:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__set", 1916009602)) );
				}
				
				
				case 1915412854:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__get", 1915412854)) );
				}
				
				
				case 328878574:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "iterator", 328878574)) );
				}
				
				
				case 1103412149:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "copy", 1103412149)) );
				}
				
				
				case 87367608:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "filter", 87367608)) );
				}
				
				
				case 5442204:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "map", 5442204)) );
				}
				
				
				case 76061764:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "remove", 76061764)) );
				}
				
				
				case 501039929:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "insert", 501039929)) );
				}
				
				
				case 2025055113:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "unshift", 2025055113)) );
				}
				
				
				case 946786476:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "toString", 946786476)) );
				}
				
				
				case 1352786672:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "spliceVoid", 1352786672)) );
				}
				
				
				case 1067353468:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "splice", 1067353468)) );
				}
				
				
				case 1282943179:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "quicksort", 1282943179)) );
				}
				
				
				case 1280845662:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "sort", 1280845662)) );
				}
				
				
				case 2127021138:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "slice", 2127021138)) );
				}
				
				
				case 2082663554:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "shift", 2082663554)) );
				}
				
				
				case 452737314:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "reverse", 452737314)) );
				}
				
				
				case 1247875546:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "push", 1247875546)) );
				}
				
				
				case 5594513:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "pop", 5594513)) );
				}
				
				
				case 1181037546:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "join", 1181037546)) );
				}
				
				
				case 359333139:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "lastIndexOf", 359333139)) );
				}
				
				
				case 1623148745:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "indexOf", 1623148745)) );
				}
				
				
				case 1532710347:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "concatNative", 1532710347)) );
				}
				
				
				case 1204816148:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "concat", 1204816148)) );
				}
				
				
				case 4745537:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.__a;
				}
				
				
				case 520590566:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.length;
				}
				
				
				default:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
		unchecked {
			#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
			switch (hash) {
				case 520590566:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return ((double) (this.length) );
				}
				
				
				default:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
		unchecked {
			#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
			switch (hash) {
				case 1621420777:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.__unsafe_set(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ), global::haxe.lang.Runtime.genericCast<T>(dynargs[1]));
				}
				
				
				case 1620824029:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.__unsafe_get(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
				}
				
				
				case 1916009602:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.__set(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ), global::haxe.lang.Runtime.genericCast<T>(dynargs[1]));
				}
				
				
				case 1915412854:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.__get(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
				}
				
				
				case 328878574:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.iterator();
				}
				
				
				case 1103412149:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.copy();
				}
				
				
				case 87367608:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.filter(((global::haxe.lang.Function) (dynargs[0]) ));
				}
				
				
				case 5442204:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.map<object>(((global::haxe.lang.Function) (dynargs[0]) ));
				}
				
				
				case 76061764:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.@remove(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]));
				}
				
				
				case 501039929:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					this.insert(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ), global::haxe.lang.Runtime.genericCast<T>(dynargs[1]));
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					break;
				}
				
				
				case 2025055113:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					this.unshift(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]));
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					break;
				}
				
				
				case 946786476:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.toString();
				}
				
				
				case 1352786672:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					this.spliceVoid(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ), ((int) (global::haxe.lang.Runtime.toInt(dynargs[1])) ));
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					break;
				}
				
				
				case 1067353468:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.splice(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ), ((int) (global::haxe.lang.Runtime.toInt(dynargs[1])) ));
				}
				
				
				case 1282943179:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					this.quicksort(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ), ((int) (global::haxe.lang.Runtime.toInt(dynargs[1])) ), ((global::haxe.lang.Function) (dynargs[2]) ));
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					break;
				}
				
				
				case 1280845662:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					this.sort(((global::haxe.lang.Function) (dynargs[0]) ));
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					break;
				}
				
				
				case 2127021138:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.slice(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ), global::haxe.lang.Null<object>.ofDynamic<int>(dynargs[1]));
				}
				
				
				case 2082663554:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return (this.shift()).toDynamic();
				}
				
				
				case 452737314:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					this.reverse();
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					break;
				}
				
				
				case 1247875546:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.push(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]));
				}
				
				
				case 5594513:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return (this.pop()).toDynamic();
				}
				
				
				case 1181037546:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.@join(global::haxe.lang.Runtime.toString(dynargs[0]));
				}
				
				
				case 359333139:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.lastIndexOf(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]), global::haxe.lang.Null<object>.ofDynamic<int>(dynargs[1]));
				}
				
				
				case 1623148745:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.indexOf(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]), global::haxe.lang.Null<object>.ofDynamic<int>(dynargs[1]));
				}
				
				
				case 1532710347:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					this.concatNative(((T[]) (dynargs[0]) ));
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					break;
				}
				
				
				case 1204816148:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return this.concat(((global::Array<T>) (global::Array<object>.__hx_cast<T>(((global::Array) (dynargs[0]) ))) ));
				}
				
				
				default:
				{
					#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
					return base.__hx_invokeField(field, hash, dynargs);
				}
				
			}
			
			#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return null;
		}
		#line default
	}
	
	
	public override void __hx_getFields(global::Array<object> baseArr) {
		#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
		baseArr.push("__a");
		#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
		baseArr.push("length");
		#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
		{
			#line 27 "/usr/lib/haxe/std/cs/_std/Array.hx"
			base.__hx_getFields(baseArr);
		}
		
	}
	#line default
	
	public T this[int index]{
		get{
			return this.__get(index);
		}
		set{
			this.__set(index,value);
		}
	}
	object global::Array.this[int key]{
		get{
			return ((object) this.__get(key));
		}
		set{
			this.__set(key, (T) value);
		}
	}
	
	
	public override string ToString(){
		return this.toString();
	}
	
	
}



#pragma warning disable 109, 114, 219, 429, 168, 162
[global::haxe.lang.GenericInterface(typeof(global::Array<object>))]
public interface Array : global::haxe.lang.IHxObject, global::haxe.lang.IGenericObject {
	
	object Array_cast<T_c>();
	
	string @join(string sep);
	
	void reverse();
	
	void spliceVoid(int pos, int len);
	
	string toString();
	
	object iterator();
	
	object this[int key]{
		get;
		set;
	}
	
	
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace _Array {
	public sealed class ArrayIterator<T> : global::haxe.lang.HxObject, global::_Array.ArrayIterator {
		
		public ArrayIterator(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public ArrayIterator(global::Array<T> a) {
			#line 474 "/usr/lib/haxe/std/cs/_std/Array.hx"
			global::_Array.ArrayIterator<object>.__hx_ctor__Array_ArrayIterator<T>(this, a);
		}
		#line default
		
		public static void __hx_ctor__Array_ArrayIterator<T_c>(global::_Array.ArrayIterator<T_c> __temp_me6, global::Array<T_c> a) {
			#line 476 "/usr/lib/haxe/std/cs/_std/Array.hx"
			__temp_me6.arr = a;
			__temp_me6.len = a.length;
			__temp_me6.i = 0;
		}
		#line default
		
		public static object __hx_cast<T_c_c>(global::_Array.ArrayIterator me) {
			#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return ( (( me != null )) ? (me._Array_ArrayIterator_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return new global::_Array.ArrayIterator<object>(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return new global::_Array.ArrayIterator<object>(((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (arr[0]) ))) ));
		}
		#line default
		
		public object _Array_ArrayIterator_cast<T_c>() {
			#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
				return this;
			}
			
			#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
			global::_Array.ArrayIterator<T_c> new_me = new global::_Array.ArrayIterator<T_c>(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
			#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
			int i = 0;
			#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
			while (( i < fields.length )) {
				#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return new_me;
		}
		#line default
		
		public global::Array<T> arr;
		
		public int len;
		
		public int i;
		
		public bool hasNext() {
			#line 481 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return ( this.i < this.len );
		}
		#line default
		
		public T next() {
			#line 482 "/usr/lib/haxe/std/cs/_std/Array.hx"
			return this.arr[this.i++];
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
				switch (hash) {
					case 105:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						this.i = ((int) (@value) );
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return @value;
					}
					
					
					case 5393365:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						this.len = ((int) (@value) );
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return @value;
					}
					
					
					default:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
				switch (hash) {
					case 105:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						this.i = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return @value;
					}
					
					
					case 5393365:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						this.len = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return @value;
					}
					
					
					case 4849249:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						this.arr = ((global::Array<T>) (global::Array<object>.__hx_cast<T>(((global::Array) (@value) ))) );
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return @value;
					}
					
					
					default:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
				switch (hash) {
					case 1224901875:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "next", 1224901875)) );
					}
					
					
					case 407283053:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "hasNext", 407283053)) );
					}
					
					
					case 105:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return this.i;
					}
					
					
					case 5393365:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return this.len;
					}
					
					
					case 4849249:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return this.arr;
					}
					
					
					default:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
				switch (hash) {
					case 105:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return ((double) (this.i) );
					}
					
					
					case 5393365:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return ((double) (this.len) );
					}
					
					
					default:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
				switch (hash) {
					case 1224901875:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return this.next();
					}
					
					
					case 407283053:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return this.hasNext();
					}
					
					
					default:
					{
						#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
			baseArr.push("i");
			#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
			baseArr.push("len");
			#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
			baseArr.push("arr");
			#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
			{
				#line 468 "/usr/lib/haxe/std/cs/_std/Array.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace _Array {
	[global::haxe.lang.GenericInterface(typeof(global::_Array.ArrayIterator<object>))]
	public interface ArrayIterator : global::haxe.lang.IHxObject, global::haxe.lang.IGenericObject {
		
		object _Array_ArrayIterator_cast<T_c>();
		
		bool hasNext();
		
	}
}


