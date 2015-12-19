
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.tween {
	public class Tweener : global::haxe.lang.HxObject {
		
		static Tweener() {
			#line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::sx.tween.Tweener.__time = ((double) (((int) (0) )) );
			#line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::sx.tween.Tweener.__tweeners = new global::Array<object>(new object[]{});
			#line 29 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::sx.tween.Tweener.__pausedAll = false;
			#line 31 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::sx.tween.Tweener.__pausedAllTime = ((double) (((int) (0) )) );
			#line 33 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::sx.tween.Tweener.__totalPausedTime = ((double) (((int) (0) )) );
			#line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::sx.tween.Tweener.getTime = ( (( global::sx.tween.Tweener_Anon_47__Fun.__hx_current != null )) ? (global::sx.tween.Tweener_Anon_47__Fun.__hx_current) : (global::sx.tween.Tweener_Anon_47__Fun.__hx_current = ((global::sx.tween.Tweener_Anon_47__Fun) (new global::sx.tween.Tweener_Anon_47__Fun()) )) );
		}
		#line default
		
		public Tweener(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Tweener() {
			#line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::sx.tween.Tweener.__hx_ctor_sx_tween_Tweener(this);
		}
		#line default
		
		public static void __hx_ctor_sx_tween_Tweener(global::sx.tween.Tweener __temp_me170) {
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			__temp_me170.active = false;
			#line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			__temp_me170.__actuators = new global::Array<object>(new object[]{});
		}
		#line default
		
		public static double __time;
		
		public static global::Array<object> __tweeners;
		
		
		
		public static bool __pausedAll;
		
		public static double __pausedAllTime;
		
		public static double __totalPausedTime;
		
		public static global::haxe.lang.Function getTime;
		
		public static void pauseAll() {
			#line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			if (global::sx.tween.Tweener.__pausedAll) {
				#line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				return;
			}
			
			#line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::sx.tween.Tweener.__pausedAll = true;
			#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::sx.tween.Tweener.__time = ( ((double) (global::sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - global::sx.tween.Tweener.__totalPausedTime );
			global::sx.tween.Tweener.__pausedAllTime = global::sx.tween.Tweener.__time;
		}
		#line default
		
		public static void resumeAll() {
			#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			if ( ! (global::sx.tween.Tweener.__pausedAll) ) {
				#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				return;
			}
			
			#line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::sx.tween.Tweener.__pausedAll = false;
			#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::sx.tween.Tweener.__time = ( ((double) (global::sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - global::sx.tween.Tweener.__totalPausedTime );
			#line 76 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::sx.tween.Tweener.__totalPausedTime += ( global::sx.tween.Tweener.__time - global::sx.tween.Tweener.__pausedAllTime );
			global::sx.tween.Tweener.__time = ( ((double) (global::sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - global::sx.tween.Tweener.__totalPausedTime );
		}
		#line default
		
		public static void stopAll() {
			#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			int _g = 0;
			#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::Array<object> _g1 = global::sx.tween.Tweener.__tweeners;
			#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			while (( _g < _g1.length )) {
				#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				global::sx.tween.Tweener tweener = ((global::sx.tween.Tweener) (_g1[_g]) );
				#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				 ++ _g;
				tweener.stop();
			}
			
		}
		#line default
		
		public static void update() {
			unchecked {
				#line 97 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				if (global::sx.tween.Tweener.__pausedAll) {
					#line 97 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					return;
				}
				
				#line 98 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				global::sx.tween.Tweener.__time = ( ((double) (global::sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - global::sx.tween.Tweener.__totalPausedTime );
				if (( global::sx.tween.Tweener.__tweeners.length == 0 )) {
					#line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					return;
				}
				
				#line 101 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				bool needRemoval = false;
				{
					#line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					int _g = 0;
					#line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					global::Array<object> _g1 = global::sx.tween.Tweener.__tweeners;
					#line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					while (( _g < _g1.length )) {
						#line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						global::sx.tween.Tweener tweener = ((global::sx.tween.Tweener) (_g1[_g]) );
						#line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						 ++ _g;
						{
							#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
							double currentTime = global::sx.tween.Tweener.__time;
							#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
							bool needRemoval1 = false;
							#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
							{
								#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
								int _g2 = 0;
								#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
								global::Array<object> _g11 = tweener.__actuators;
								#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
								while (( _g2 < _g11.length )) {
									#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
									global::sx.tween.Actuator actuator = ((global::sx.tween.Actuator) (_g11[_g2]) );
									#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
									 ++ _g2;
									#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
									if (( actuator.startTime < currentTime )) {
										#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
										actuator.__update(currentTime);
										#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
										if (actuator.done) {
											#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
											needRemoval1 = true;
										}
										
									}
									
								}
								
							}
							
							#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
							if (needRemoval1) {
								#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
								int i = 0;
								#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
								while (( i < tweener.__actuators.length )) {
									#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
									if (((global::sx.tween.Actuator) (tweener.__actuators[i]) ).done) {
										#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
										tweener.__actuators.splice(i, 1);
									}
									else {
										#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
										i++;
									}
									
								}
								
								#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
								tweener.active = ( tweener.__actuators.length > 0 );
							}
							
						}
						
						#line 104 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						if ( ! (tweener.active) ) {
							#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
							needRemoval = true;
						}
						
					}
					
				}
				
				#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				if (needRemoval) {
					#line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					int i1 = 0;
					while (( i1 < global::sx.tween.Tweener.__tweeners.length )) {
						#line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						if ( ! (((global::sx.tween.Tweener) (global::sx.tween.Tweener.__tweeners[i1]) ).active) ) {
							#line 114 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
							global::sx.tween.Tweener.__tweeners.splice(i1, 1);
						}
						else {
							#line 116 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
							i1++;
						}
						
					}
					
				}
				
			}
			#line default
		}
		
		
		public static void initialize() {
			#line 199 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::sx.tween.Tweener.__time = ( ((double) (global::sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - global::sx.tween.Tweener.__totalPausedTime );
		}
		#line default
		
		public static void __updateTime() {
			#line 208 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::sx.tween.Tweener.__time = ( ((double) (global::sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - global::sx.tween.Tweener.__totalPausedTime );
		}
		#line default
		
		public static bool get_pausedAll() {
			#line 213 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			return global::sx.tween.Tweener.__pausedAll;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			return new global::sx.tween.Tweener(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			return new global::sx.tween.Tweener();
		}
		#line default
		
		public bool active;
		
		public global::Array<object> __actuators;
		
		public virtual void stop() {
			#line 137 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			this.active = false;
			{
				#line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				int _g = 0;
				#line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				global::Array<object> _g1 = this.__actuators;
				#line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				while (( _g < _g1.length )) {
					#line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					global::sx.tween.Actuator actuator = ((global::sx.tween.Actuator) (_g1[_g]) );
					#line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					 ++ _g;
					actuator.stop();
				}
				
			}
			
		}
		#line default
		
		public void __update(double currentTime) {
			unchecked {
				#line 150 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				bool needRemoval = false;
				{
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					int _g = 0;
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					global::Array<object> _g1 = this.__actuators;
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					while (( _g < _g1.length )) {
						#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						global::sx.tween.Actuator actuator = ((global::sx.tween.Actuator) (_g1[_g]) );
						#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						 ++ _g;
						if (( actuator.startTime < currentTime )) {
							#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
							actuator.__update(currentTime);
							if (actuator.done) {
								#line 155 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
								needRemoval = true;
							}
							
						}
						
					}
					
				}
				
				#line 161 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				if (needRemoval) {
					#line 162 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					int i = 0;
					while (( i < this.__actuators.length )) {
						#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						if (((global::sx.tween.Actuator) (this.__actuators[i]) ).done) {
							#line 165 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
							this.__actuators.splice(i, 1);
						}
						else {
							#line 167 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
							i++;
						}
						
					}
					
					#line 171 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					this.active = ( this.__actuators.length > 0 );
				}
				
			}
			#line default
		}
		
		
		public virtual global::sx.tween.Actuator __createActuator(double duration, global::haxe.lang.Function setValuesFn, global::haxe.lang.Function setEndValuesFn) {
			#line 181 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			global::sx.tween.Actuator actuator = new global::sx.tween.Actuator(global::sx.tween.Tweener.__time, duration, setValuesFn, setEndValuesFn);
			#line 183 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			this.__actuators.push(actuator);
			#line 185 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			if ( ! (this.active) ) {
				#line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				this.active = true;
				global::sx.tween.Tweener.__tweeners.push(this);
			}
			
			#line 190 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			return actuator;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				switch (hash) {
					case 8510970:
					{
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						this.__actuators = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return @value;
					}
					
					
					case 373703110:
					{
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						this.active = global::haxe.lang.Runtime.toBool(@value);
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return @value;
					}
					
					
					default:
					{
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				switch (hash) {
					case 1193412469:
					{
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__createActuator", 1193412469)) );
					}
					
					
					case 791998761:
					{
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__update", 791998761)) );
					}
					
					
					case 1281093634:
					{
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "stop", 1281093634)) );
					}
					
					
					case 8510970:
					{
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return this.__actuators;
					}
					
					
					case 373703110:
					{
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return this.active;
					}
					
					
					default:
					{
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				switch (hash) {
					case 1193412469:
					{
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return this.__createActuator(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ), ((global::haxe.lang.Function) (dynargs[1]) ), ((global::haxe.lang.Function) (dynargs[2]) ));
					}
					
					
					case 791998761:
					{
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						this.__update(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						break;
					}
					
					
					case 1281093634:
					{
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						this.stop();
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						break;
					}
					
					
					default:
					{
						#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			baseArr.push("__actuators");
			#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			baseArr.push("active");
			#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			{
				#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.tween {
	public class Tweener_Anon_47__Fun : global::haxe.lang.Function {
		
		public Tweener_Anon_47__Fun() : base(0, 1) {
		}
		
		
		public static global::sx.tween.Tweener_Anon_47__Fun __hx_current;
		
		public override double __hx_invoke0_f() {
			#line 49 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			return global::haxe.Timer.stamp();
		}
		#line default
		
	}
}


