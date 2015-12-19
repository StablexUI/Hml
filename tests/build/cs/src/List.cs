
#pragma warning disable 109, 114, 219, 429, 168, 162
public class List<T> : global::haxe.lang.HxObject, global::List {
	
	public List(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public List() {
		#line 40 "/usr/lib/haxe/std/List.hx"
		global::List<object>.__hx_ctor__List<T>(this);
	}
	#line default
	
	public static void __hx_ctor__List<T_c>(global::List<T_c> __temp_me19) {
		#line 41 "/usr/lib/haxe/std/List.hx"
		__temp_me19.length = 0;
	}
	#line default
	
	public static object __hx_cast<T_c_c>(global::List me) {
		#line 27 "/usr/lib/haxe/std/List.hx"
		return ( (( me != null )) ? (me.List_cast<T_c_c>()) : (null) );
	}
	#line default
	
	public static new object __hx_createEmpty() {
		#line 27 "/usr/lib/haxe/std/List.hx"
		return new global::List<object>(global::haxe.lang.EmptyObject.EMPTY);
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		#line 27 "/usr/lib/haxe/std/List.hx"
		return new global::List<object>();
	}
	#line default
	
	public virtual object List_cast<T_c>() {
		#line 27 "/usr/lib/haxe/std/List.hx"
		if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
			#line 27 "/usr/lib/haxe/std/List.hx"
			return this;
		}
		
		#line 27 "/usr/lib/haxe/std/List.hx"
		global::List<T_c> new_me = new global::List<T_c>(global::haxe.lang.EmptyObject.EMPTY);
		#line 27 "/usr/lib/haxe/std/List.hx"
		global::Array<object> fields = global::Reflect.fields(this);
		#line 27 "/usr/lib/haxe/std/List.hx"
		int i = 0;
		#line 27 "/usr/lib/haxe/std/List.hx"
		while (( i < fields.length )) {
			#line 27 "/usr/lib/haxe/std/List.hx"
			string field = global::haxe.lang.Runtime.toString(fields[i++]);
			#line 27 "/usr/lib/haxe/std/List.hx"
			global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
		}
		
		#line 27 "/usr/lib/haxe/std/List.hx"
		return new_me;
	}
	#line default
	
	public global::Array h;
	
	public global::Array q;
	
	public int length;
	
	public virtual void @add(T item) {
		unchecked {
			#line 50 "/usr/lib/haxe/std/List.hx"
			global::Array x = new global::Array<object>(new object[]{item});
			if (( this.h == null )) {
				#line 52 "/usr/lib/haxe/std/List.hx"
				this.h = x;
			}
			else {
				#line 54 "/usr/lib/haxe/std/List.hx"
				this.q[1] = x;
			}
			
			#line 55 "/usr/lib/haxe/std/List.hx"
			this.q = x;
			this.length++;
		}
		#line default
	}
	
	
	public virtual global::haxe.lang.Null<T> last() {
		#line 91 "/usr/lib/haxe/std/List.hx"
		if (( this.q == null )) {
			#line 91 "/usr/lib/haxe/std/List.hx"
			return default(global::haxe.lang.Null<T>);
		}
		else {
			#line 91 "/usr/lib/haxe/std/List.hx"
			return global::haxe.lang.Null<object>.ofDynamic<T>(this.q[0]);
		}
		
	}
	#line default
	
	public virtual bool @remove(T v) {
		unchecked {
			#line 139 "/usr/lib/haxe/std/List.hx"
			global::Array prev = null;
			global::Array l = this.h;
			while (( l != null )) {
				#line 142 "/usr/lib/haxe/std/List.hx"
				if (global::haxe.lang.Runtime.eq(l[0], v)) {
					#line 143 "/usr/lib/haxe/std/List.hx"
					if (( prev == null )) {
						#line 144 "/usr/lib/haxe/std/List.hx"
						this.h = ((global::Array) (l[1]) );
					}
					else {
						#line 146 "/usr/lib/haxe/std/List.hx"
						prev[1] = l[1];
					}
					
					#line 147 "/usr/lib/haxe/std/List.hx"
					if (( this.q == l )) {
						#line 148 "/usr/lib/haxe/std/List.hx"
						this.q = prev;
					}
					
					#line 149 "/usr/lib/haxe/std/List.hx"
					this.length--;
					return true;
				}
				
				#line 152 "/usr/lib/haxe/std/List.hx"
				prev = l;
				l = ((global::Array) (l[1]) );
			}
			
			#line 155 "/usr/lib/haxe/std/List.hx"
			return false;
		}
		#line default
	}
	
	
	public global::_List.ListIterator<T> iterator() {
		#line 162 "/usr/lib/haxe/std/List.hx"
		return new global::_List.ListIterator<T>(((global::Array) (this.h) ));
	}
	#line default
	
	public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
		unchecked {
			#line 27 "/usr/lib/haxe/std/List.hx"
			switch (hash) {
				case 520590566:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					this.length = ((int) (@value) );
					#line 27 "/usr/lib/haxe/std/List.hx"
					return @value;
				}
				
				
				default:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return base.__hx_setField_f(field, hash, @value, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
		unchecked {
			#line 27 "/usr/lib/haxe/std/List.hx"
			switch (hash) {
				case 520590566:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					this.length = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
					#line 27 "/usr/lib/haxe/std/List.hx"
					return @value;
				}
				
				
				case 113:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					this.q = ((global::Array) (@value) );
					#line 27 "/usr/lib/haxe/std/List.hx"
					return @value;
				}
				
				
				case 104:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					this.h = ((global::Array) (@value) );
					#line 27 "/usr/lib/haxe/std/List.hx"
					return @value;
				}
				
				
				default:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return base.__hx_setField(field, hash, @value, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
		unchecked {
			#line 27 "/usr/lib/haxe/std/List.hx"
			switch (hash) {
				case 328878574:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "iterator", 328878574)) );
				}
				
				
				case 76061764:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "remove", 76061764)) );
				}
				
				
				case 1202522710:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "last", 1202522710)) );
				}
				
				
				case 4846113:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "add", 4846113)) );
				}
				
				
				case 520590566:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return this.length;
				}
				
				
				case 113:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return this.q;
				}
				
				
				case 104:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return this.h;
				}
				
				
				default:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
		unchecked {
			#line 27 "/usr/lib/haxe/std/List.hx"
			switch (hash) {
				case 520590566:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return ((double) (this.length) );
				}
				
				
				default:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
		unchecked {
			#line 27 "/usr/lib/haxe/std/List.hx"
			switch (hash) {
				case 328878574:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return this.iterator();
				}
				
				
				case 76061764:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return this.@remove(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]));
				}
				
				
				case 1202522710:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return (this.last()).toDynamic();
				}
				
				
				case 4846113:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					this.@add(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]));
					#line 27 "/usr/lib/haxe/std/List.hx"
					break;
				}
				
				
				default:
				{
					#line 27 "/usr/lib/haxe/std/List.hx"
					return base.__hx_invokeField(field, hash, dynargs);
				}
				
			}
			
			#line 27 "/usr/lib/haxe/std/List.hx"
			return null;
		}
		#line default
	}
	
	
	public override void __hx_getFields(global::Array<object> baseArr) {
		#line 27 "/usr/lib/haxe/std/List.hx"
		baseArr.push("length");
		#line 27 "/usr/lib/haxe/std/List.hx"
		baseArr.push("q");
		#line 27 "/usr/lib/haxe/std/List.hx"
		baseArr.push("h");
		#line 27 "/usr/lib/haxe/std/List.hx"
		{
			#line 27 "/usr/lib/haxe/std/List.hx"
			base.__hx_getFields(baseArr);
		}
		
	}
	#line default
	
}



#pragma warning disable 109, 114, 219, 429, 168, 162
[global::haxe.lang.GenericInterface(typeof(global::List<object>))]
public interface List : global::haxe.lang.IHxObject, global::haxe.lang.IGenericObject {
	
	object List_cast<T_c>();
	
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace _List {
	public class ListIterator<T> : global::haxe.lang.HxObject, global::_List.ListIterator {
		
		public ListIterator(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public ListIterator(global::Array head) {
			#line 244 "/usr/lib/haxe/std/List.hx"
			global::_List.ListIterator<object>.__hx_ctor__List_ListIterator<T>(this, head);
		}
		#line default
		
		public static void __hx_ctor__List_ListIterator<T_c>(global::_List.ListIterator<T_c> __temp_me20, global::Array head) {
			#line 245 "/usr/lib/haxe/std/List.hx"
			__temp_me20.head = head;
			__temp_me20.val = null;
		}
		#line default
		
		public static object __hx_cast<T_c_c>(global::_List.ListIterator me) {
			#line 240 "/usr/lib/haxe/std/List.hx"
			return ( (( me != null )) ? (me._List_ListIterator_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 240 "/usr/lib/haxe/std/List.hx"
			return new global::_List.ListIterator<object>(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 240 "/usr/lib/haxe/std/List.hx"
			return new global::_List.ListIterator<object>(((global::Array) (arr[0]) ));
		}
		#line default
		
		public virtual object _List_ListIterator_cast<T_c>() {
			#line 240 "/usr/lib/haxe/std/List.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 240 "/usr/lib/haxe/std/List.hx"
				return this;
			}
			
			#line 240 "/usr/lib/haxe/std/List.hx"
			global::_List.ListIterator<T_c> new_me = new global::_List.ListIterator<T_c>(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
			#line 240 "/usr/lib/haxe/std/List.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 240 "/usr/lib/haxe/std/List.hx"
			int i = 0;
			#line 240 "/usr/lib/haxe/std/List.hx"
			while (( i < fields.length )) {
				#line 240 "/usr/lib/haxe/std/List.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 240 "/usr/lib/haxe/std/List.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 240 "/usr/lib/haxe/std/List.hx"
			return new_me;
		}
		#line default
		
		public global::Array head;
		
		public object val;
		
		public bool hasNext() {
			#line 250 "/usr/lib/haxe/std/List.hx"
			return ( this.head != null );
		}
		#line default
		
		public T next() {
			unchecked {
				#line 254 "/usr/lib/haxe/std/List.hx"
				this.val = this.head[0];
				this.head = ((global::Array) (this.head[1]) );
				return global::haxe.lang.Runtime.genericCast<T>(this.val);
			}
			#line default
		}
		
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 240 "/usr/lib/haxe/std/List.hx"
				switch (hash) {
					case 5889761:
					{
						#line 240 "/usr/lib/haxe/std/List.hx"
						this.val = ((object) (@value) );
						#line 240 "/usr/lib/haxe/std/List.hx"
						return @value;
					}
					
					
					default:
					{
						#line 240 "/usr/lib/haxe/std/List.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 240 "/usr/lib/haxe/std/List.hx"
				switch (hash) {
					case 5889761:
					{
						#line 240 "/usr/lib/haxe/std/List.hx"
						this.val = ((object) (@value) );
						#line 240 "/usr/lib/haxe/std/List.hx"
						return @value;
					}
					
					
					case 1158359328:
					{
						#line 240 "/usr/lib/haxe/std/List.hx"
						this.head = ((global::Array) (@value) );
						#line 240 "/usr/lib/haxe/std/List.hx"
						return @value;
					}
					
					
					default:
					{
						#line 240 "/usr/lib/haxe/std/List.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 240 "/usr/lib/haxe/std/List.hx"
				switch (hash) {
					case 1224901875:
					{
						#line 240 "/usr/lib/haxe/std/List.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "next", 1224901875)) );
					}
					
					
					case 407283053:
					{
						#line 240 "/usr/lib/haxe/std/List.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "hasNext", 407283053)) );
					}
					
					
					case 5889761:
					{
						#line 240 "/usr/lib/haxe/std/List.hx"
						return this.val;
					}
					
					
					case 1158359328:
					{
						#line 240 "/usr/lib/haxe/std/List.hx"
						return this.head;
					}
					
					
					default:
					{
						#line 240 "/usr/lib/haxe/std/List.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 240 "/usr/lib/haxe/std/List.hx"
				switch (hash) {
					case 5889761:
					{
						#line 240 "/usr/lib/haxe/std/List.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(this.val)) );
					}
					
					
					default:
					{
						#line 240 "/usr/lib/haxe/std/List.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 240 "/usr/lib/haxe/std/List.hx"
				switch (hash) {
					case 1224901875:
					{
						#line 240 "/usr/lib/haxe/std/List.hx"
						return this.next();
					}
					
					
					case 407283053:
					{
						#line 240 "/usr/lib/haxe/std/List.hx"
						return this.hasNext();
					}
					
					
					default:
					{
						#line 240 "/usr/lib/haxe/std/List.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 240 "/usr/lib/haxe/std/List.hx"
			baseArr.push("val");
			#line 240 "/usr/lib/haxe/std/List.hx"
			baseArr.push("head");
			#line 240 "/usr/lib/haxe/std/List.hx"
			{
				#line 240 "/usr/lib/haxe/std/List.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace _List {
	[global::haxe.lang.GenericInterface(typeof(global::_List.ListIterator<object>))]
	public interface ListIterator : global::haxe.lang.IHxObject, global::haxe.lang.IGenericObject {
		
		object _List_ListIterator_cast<T_c>();
		
		bool hasNext();
		
	}
}


