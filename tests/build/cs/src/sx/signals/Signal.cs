
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.signals {
	public class Signal<T> : global::haxe.lang.HxObject, global::sx.signals.Signal {
		
		public Signal(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Signal() {
			#line 35 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			global::sx.signals.Signal<object>.__hx_ctor_sx_signals_Signal<T>(this);
		}
		#line default
		
		public static void __hx_ctor_sx_signals_Signal<T_c>(global::sx.signals.Signal<T_c> __temp_me161) {
			#line 29 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			__temp_me161.__listenersInUse = false;
			#line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			__temp_me161.__listeners = new global::Array<T_c>(new T_c[]{});
		}
		#line default
		
		public static object __hx_cast<T_c_c>(global::sx.signals.Signal me) {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			return ( (( me != null )) ? (me.sx_signals_Signal_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			return new global::sx.signals.Signal<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			return new global::sx.signals.Signal<object>();
		}
		#line default
		
		public virtual object sx_signals_Signal_cast<T_c>() {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				return this;
			}
			
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			global::sx.signals.Signal<T_c> new_me = new global::sx.signals.Signal<T_c>(global::haxe.lang.EmptyObject.EMPTY);
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			int i = 0;
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			while (( i < fields.length )) {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			return new_me;
		}
		#line default
		
		
		
		public global::Array<T> __listeners;
		
		public bool __listenersInUse;
		
		public virtual void @add(T listener) {
			#line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (this.__listenersInUse) {
				#line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__listeners = this.__listeners.copy();
				#line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__listenersInUse = false;
			}
			
			#line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			this.__listeners.push(listener);
		}
		#line default
		
		public virtual bool unique(T listener) {
			#line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( this.__indexOf(listener) >= 0 )) {
				#line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				return false;
			}
			
			#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (this.__listenersInUse) {
				#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__listeners = this.__listeners.copy();
				#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__listenersInUse = false;
			}
			
			#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			this.__listeners.push(listener);
			#line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			return true;
		}
		#line default
		
		public virtual bool @remove(T listener) {
			unchecked {
				#line 76 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				int index = this.__indexOf(listener);
				if (( index < 0 )) {
					#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					return false;
				}
				
				#line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (this.__listenersInUse) {
					#line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__listeners = this.__listeners.copy();
					#line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__listenersInUse = false;
				}
				
				#line 80 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__listeners.splice(index, 1);
				#line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				return true;
			}
			#line default
		}
		
		
		public virtual bool will(T listener) {
			#line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			return ( this.__indexOf(listener) >= 0 );
		}
		#line default
		
		public virtual int __indexOf(T listener) {
			unchecked {
				#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				int index = -1;
				#line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					#line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g1 = 0;
					#line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g = this.__listeners.length;
					#line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g1 < _g )) {
						#line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int i = _g1++;
						if (global::Reflect.compareMethods(this.__listeners[i], listener)) {
							#line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							index = i;
							break;
						}
						
					}
					
				}
				
				#line 118 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				return index;
			}
			#line default
		}
		
		
		public void __cloneListenersInUse() {
			#line 127 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (this.__listenersInUse) {
				#line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__listeners = this.__listeners.copy();
				this.__listenersInUse = false;
			}
			
		}
		#line default
		
		public virtual int get_listenersCount() {
			#line 135 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			return this.__listeners.length;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				switch (hash) {
					case 1106022019:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__listenersInUse = global::haxe.lang.Runtime.toBool(@value);
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return @value;
					}
					
					
					case 565882463:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__listeners = ((global::Array<T>) (global::Array<object>.__hx_cast<T>(((global::Array) (@value) ))) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return @value;
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				switch (hash) {
					case 899736473:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_listenersCount", 899736473)) );
					}
					
					
					case 31331456:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__cloneListenersInUse", 31331456)) );
					}
					
					
					case 1645058473:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__indexOf", 1645058473)) );
					}
					
					
					case 1324904210:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "will", 1324904210)) );
					}
					
					
					case 76061764:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "remove", 76061764)) );
					}
					
					
					case 1670550289:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "unique", 1670550289)) );
					}
					
					
					case 4846113:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "add", 4846113)) );
					}
					
					
					case 1106022019:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.__listenersInUse;
					}
					
					
					case 565882463:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.__listeners;
					}
					
					
					case 436667088:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.get_listenersCount();
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				switch (hash) {
					case 436667088:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((double) (this.get_listenersCount()) );
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				switch (hash) {
					case 899736473:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.get_listenersCount();
					}
					
					
					case 31331456:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__cloneListenersInUse();
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						break;
					}
					
					
					case 1645058473:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.__indexOf(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]));
					}
					
					
					case 1324904210:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.will(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]));
					}
					
					
					case 76061764:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.@remove(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]));
					}
					
					
					case 1670550289:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.unique(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]));
					}
					
					
					case 4846113:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.@add(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						break;
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			baseArr.push("__listenersInUse");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			baseArr.push("__listeners");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			baseArr.push("listenersCount");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			{
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.signals {
	[global::haxe.lang.GenericInterface(typeof(global::sx.signals.Signal<object>))]
	public interface Signal : global::haxe.lang.IHxObject, global::haxe.lang.IGenericObject {
		
		object sx_signals_Signal_cast<T_c>();
		
		void __cloneListenersInUse();
		
		int get_listenersCount();
		
	}
}


