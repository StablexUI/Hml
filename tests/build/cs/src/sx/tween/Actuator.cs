
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.tween {
	public class Actuator : global::haxe.lang.HxObject {
		
		public Actuator(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Actuator(double startTime, double duration, global::haxe.lang.Function setValuesFn, global::haxe.lang.Function setEndValuesFn) {
			#line 33 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			global::sx.tween.Actuator.__hx_ctor_sx_tween_Actuator(this, startTime, duration, setValuesFn, setEndValuesFn);
		}
		#line default
		
		public static void __hx_ctor_sx_tween_Actuator(global::sx.tween.Actuator __temp_me169, double startTime, double duration, global::haxe.lang.Function setValuesFn, global::haxe.lang.Function setEndValuesFn) {
			#line 16 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			__temp_me169.done = false;
			#line 139 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			__temp_me169.__ease = ( (( global::sx.tween.Actuator___hx_ctor_sx_tween_Actuator_139__Fun.__hx_current != null )) ? (global::sx.tween.Actuator___hx_ctor_sx_tween_Actuator_139__Fun.__hx_current) : (global::sx.tween.Actuator___hx_ctor_sx_tween_Actuator_139__Fun.__hx_current = ((global::sx.tween.Actuator___hx_ctor_sx_tween_Actuator_139__Fun) (new global::sx.tween.Actuator___hx_ctor_sx_tween_Actuator_139__Fun()) )) );
			#line 35 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			__temp_me169.__duration = duration;
			#line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			__temp_me169.startTime = startTime;
			__temp_me169.__setValuesFn = setValuesFn;
			__temp_me169.__setEndValuesFn = setEndValuesFn;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			return new global::sx.tween.Actuator(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				return new global::sx.tween.Actuator(((double) (global::haxe.lang.Runtime.toDouble(arr[0])) ), ((double) (global::haxe.lang.Runtime.toDouble(arr[1])) ), ((global::haxe.lang.Function) (arr[2]) ), ((global::haxe.lang.Function) (arr[3]) ));
			}
			#line default
		}
		
		
		public double startTime;
		
		public bool done;
		
		public double __duration;
		
		public global::haxe.lang.Function __setValuesFn;
		
		public global::haxe.lang.Function __setEndValuesFn;
		
		public global::haxe.lang.Function __onUpdate;
		
		public global::haxe.lang.Function __onComplete;
		
		public virtual global::sx.tween.Actuator delay(double offset) {
			#line 48 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			this.startTime += offset;
			#line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			return this;
		}
		#line default
		
		public virtual global::sx.tween.Actuator ease(global::haxe.lang.Function fn) {
			#line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			this.__ease = fn;
			#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			return this;
		}
		#line default
		
		public virtual void stop() {
			#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			this.done = true;
		}
		#line default
		
		public virtual void complete() {
			#line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			this.__setEndValuesFn.__hx_invoke0_o();
			this.done = true;
			if (( this.__onComplete != null )) {
				#line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				this.__onComplete.__hx_invoke0_o();
			}
			
		}
		#line default
		
		public virtual global::sx.tween.Actuator onUpdate(global::haxe.lang.Function fn) {
			#line 95 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			this.__onUpdate = fn;
			#line 97 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			return this;
		}
		#line default
		
		public virtual global::sx.tween.Actuator onComplete(global::haxe.lang.Function fn) {
			#line 106 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			this.__onComplete = fn;
			#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			return this;
		}
		#line default
		
		public virtual void __update(double currentTime) {
			#line 117 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			if (this.done) {
				#line 117 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				return;
			}
			
			#line 119 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			double time = ( currentTime - this.startTime );
			if (( time < 0 )) {
				#line 120 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				return;
			}
			
			#line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			if (( time >= this.__duration )) {
				#line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				time = this.__duration;
				this.done = true;
				this.__setEndValuesFn.__hx_invoke0_o();
			}
			else {
				#line 127 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				double @value = ((double) (this.__ease.__hx_invoke1_f(( time / this.__duration ), global::haxe.lang.Runtime.undefined)) );
				this.__setValuesFn.__hx_invoke1_o(@value, global::haxe.lang.Runtime.undefined);
			}
			
			#line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			if (( this.__onUpdate != null )) {
				#line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				this.__onUpdate.__hx_invoke0_o();
			}
			
			#line 132 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			if (( this.done && ( this.__onComplete != null ) )) {
				#line 132 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				this.__onComplete.__hx_invoke0_o();
			}
			
		}
		#line default
		
		public global::haxe.lang.Function __ease;
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				switch (hash) {
					case 935756404:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__duration = ((double) (@value) );
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return @value;
					}
					
					
					case 99632527:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.startTime = ((double) (@value) );
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return @value;
					}
					
					
					default:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				switch (hash) {
					case 1912925966:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__ease = ((global::haxe.lang.Function) (@value) );
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return @value;
					}
					
					
					case 370298904:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__onComplete = ((global::haxe.lang.Function) (@value) );
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return @value;
					}
					
					
					case 166391720:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__onUpdate = ((global::haxe.lang.Function) (@value) );
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return @value;
					}
					
					
					case 36034403:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__setEndValuesFn = ((global::haxe.lang.Function) (@value) );
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return @value;
					}
					
					
					case 1732413548:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__setValuesFn = ((global::haxe.lang.Function) (@value) );
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return @value;
					}
					
					
					case 935756404:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__duration = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return @value;
					}
					
					
					case 1114501250:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.done = global::haxe.lang.Runtime.toBool(@value);
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return @value;
					}
					
					
					case 99632527:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.startTime = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return @value;
					}
					
					
					default:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				switch (hash) {
					case 1912925966:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.__ease;
					}
					
					
					case 791998761:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__update", 791998761)) );
					}
					
					
					case 1568593144:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "onComplete", 1568593144)) );
					}
					
					
					case 1722973320:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "onUpdate", 1722973320)) );
					}
					
					
					case 2143813817:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "complete", 2143813817)) );
					}
					
					
					case 1281093634:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "stop", 1281093634)) );
					}
					
					
					case 1124895726:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "ease", 1124895726)) );
					}
					
					
					case 1462163331:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "delay", 1462163331)) );
					}
					
					
					case 370298904:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.__onComplete;
					}
					
					
					case 166391720:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.__onUpdate;
					}
					
					
					case 36034403:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.__setEndValuesFn;
					}
					
					
					case 1732413548:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.__setValuesFn;
					}
					
					
					case 935756404:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.__duration;
					}
					
					
					case 1114501250:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.done;
					}
					
					
					case 99632527:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.startTime;
					}
					
					
					default:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				switch (hash) {
					case 935756404:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.__duration;
					}
					
					
					case 99632527:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.startTime;
					}
					
					
					default:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				switch (hash) {
					case 791998761:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__update(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						break;
					}
					
					
					case 1568593144:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.onComplete(((global::haxe.lang.Function) (dynargs[0]) ));
					}
					
					
					case 1722973320:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.onUpdate(((global::haxe.lang.Function) (dynargs[0]) ));
					}
					
					
					case 2143813817:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.complete();
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						break;
					}
					
					
					case 1281093634:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.stop();
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						break;
					}
					
					
					case 1124895726:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.ease(((global::haxe.lang.Function) (dynargs[0]) ));
					}
					
					
					case 1462163331:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.delay(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
					}
					
					
					default:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			baseArr.push("__ease");
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			baseArr.push("__onComplete");
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			baseArr.push("__onUpdate");
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			baseArr.push("__setEndValuesFn");
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			baseArr.push("__setValuesFn");
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			baseArr.push("__duration");
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			baseArr.push("done");
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			baseArr.push("startTime");
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			{
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.tween {
	public class Actuator___hx_ctor_sx_tween_Actuator_139__Fun : global::haxe.lang.Function {
		
		public Actuator___hx_ctor_sx_tween_Actuator_139__Fun() : base(1, 1) {
		}
		
		
		public static global::sx.tween.Actuator___hx_ctor_sx_tween_Actuator_139__Fun __hx_current;
		
		public override double __hx_invoke1_f(double __fn_float1, object __fn_dyn1) {
			#line 139 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			double t = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((double) (__fn_float1) )) : (((double) (global::haxe.lang.Runtime.toDouble(__fn_dyn1)) )) );
			#line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			return t;
		}
		#line default
		
	}
}


