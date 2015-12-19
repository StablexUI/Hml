
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties {
	public class AutoSize : global::haxe.lang.HxObject {
		
		public AutoSize(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public AutoSize(global::haxe.lang.Null<bool> byDefault) {
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			global::sx.properties.AutoSize.__hx_ctor_sx_properties_AutoSize(this, byDefault);
		}
		#line default
		
		public static void __hx_ctor_sx_properties_AutoSize(global::sx.properties.AutoSize __temp_me146, global::haxe.lang.Null<bool> byDefault) {
			#line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			__temp_me146.weak = false;
			#line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			__temp_me146.__height = false;
			#line 16 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			__temp_me146.__width = false;
			#line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			bool __temp_byDefault145 = ( ( ! (byDefault.hasValue) ) ? (false) : ((byDefault).@value) );
			__temp_me146.__width = __temp_byDefault145;
			__temp_me146.__height = __temp_byDefault145;
			#line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			__temp_me146.onChange = new global::sx.signals.Signal<object>();
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			return new global::sx.properties.AutoSize(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			return new global::sx.properties.AutoSize(global::haxe.lang.Null<object>.ofDynamic<bool>(arr[0]));
		}
		#line default
		
		
		
		public bool __width;
		
		
		
		public bool __height;
		
		public global::sx.signals.Signal<object> onChange;
		
		public bool weak;
		
		public virtual bool either() {
			#line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			return ( this.get_width() || this.get_height() );
		}
		#line default
		
		public virtual bool neither() {
			#line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			return (  ! (this.get_width())  &&  ! (this.get_height())  );
		}
		#line default
		
		public virtual bool both() {
			#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			return ( this.get_width() && this.get_height() );
		}
		#line default
		
		public virtual void @set(bool width, bool height) {
			#line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			bool widthChanged = ( this.__width != width );
			bool heightChanged = ( this.__height != height );
			#line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			this.__width = width;
			this.__height = height;
			#line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			if (( widthChanged || heightChanged )) {
				#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) {
					#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (this.onChange.__listenersInUse) {
						#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						{
							#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							int _g = 0;
							#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							global::Array<object> _g1 = this.onChange.__listeners;
							#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							while (( _g < _g1.length )) {
								#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
								#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								 ++ _g;
								#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								listener.__hx_invoke2_o(default(double), widthChanged, default(double), heightChanged);
							}
							
						}
						
						#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						bool __temp_expr1 = false;
					}
					else {
						#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.onChange.__listenersInUse = true;
						#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						{
							#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							int _g2 = 0;
							#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							global::Array<object> _g11 = this.onChange.__listeners;
							#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							while (( _g2 < _g11.length )) {
								#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
								#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								 ++ _g2;
								#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								listener1.__hx_invoke2_o(default(double), widthChanged, default(double), heightChanged);
							}
							
						}
						
						#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.onChange.__listenersInUse = false;
					}
					
				}
				
			}
			
		}
		#line default
		
		public virtual global::sx.properties.AutoSize copyValueFrom(global::sx.properties.AutoSize autoSize) {
			#line 98 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			this.@set(autoSize.get_width(), autoSize.get_height());
			if (autoSize.weak) {
				#line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				autoSize.dispose();
			}
			
			#line 101 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			return this;
		}
		#line default
		
		public virtual void dispose() {
		}
		
		
		public void __invokeOnChange(bool horizontalChanged, bool verticalChanged) {
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) {
				#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (this.onChange.__listenersInUse) {
					#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g1 = this.onChange.__listeners;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g < _g1.length )) {
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener.__hx_invoke2_o(default(double), horizontalChanged, default(double), verticalChanged);
						}
						
					}
					
					#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					bool __temp_expr1 = false;
				}
				else {
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.onChange.__listenersInUse = true;
					{
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g11 = this.onChange.__listeners;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g2 < _g11.length )) {
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g2;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener1.__hx_invoke2_o(default(double), horizontalChanged, default(double), verticalChanged);
						}
						
					}
					
					#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.onChange.__listenersInUse = false;
				}
				
			}
			
		}
		#line default
		
		public virtual bool set_width(bool @value) {
			#line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			if (( this.__width != @value )) {
				#line 129 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				this.__width = @value;
				if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) {
					#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (this.onChange.__listenersInUse) {
						#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						{
							#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							int _g = 0;
							#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							global::Array<object> _g1 = this.onChange.__listeners;
							#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							while (( _g < _g1.length )) {
								#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
								#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								 ++ _g;
								#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								listener.__hx_invoke2_o(default(double), true, default(double), false);
							}
							
						}
						
						#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						bool __temp_expr1 = false;
					}
					else {
						#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.onChange.__listenersInUse = true;
						#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						{
							#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							int _g2 = 0;
							#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							global::Array<object> _g11 = this.onChange.__listeners;
							#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							while (( _g2 < _g11.length )) {
								#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
								#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								 ++ _g2;
								#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								listener1.__hx_invoke2_o(default(double), true, default(double), false);
							}
							
						}
						
						#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.onChange.__listenersInUse = false;
					}
					
				}
				
			}
			else {
				#line 132 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				this.__width = @value;
			}
			
			#line 136 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			return @value;
		}
		#line default
		
		public virtual bool set_height(bool @value) {
			#line 145 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			if (( this.__height != @value )) {
				#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				this.__height = @value;
				if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) {
					#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (this.onChange.__listenersInUse) {
						#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						{
							#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							int _g = 0;
							#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							global::Array<object> _g1 = this.onChange.__listeners;
							#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							while (( _g < _g1.length )) {
								#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
								#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								 ++ _g;
								#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								listener.__hx_invoke2_o(default(double), false, default(double), true);
							}
							
						}
						
						#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						bool __temp_expr1 = false;
					}
					else {
						#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.onChange.__listenersInUse = true;
						#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						{
							#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							int _g2 = 0;
							#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							global::Array<object> _g11 = this.onChange.__listeners;
							#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							while (( _g2 < _g11.length )) {
								#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
								#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								 ++ _g2;
								#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
								listener1.__hx_invoke2_o(default(double), false, default(double), true);
							}
							
						}
						
						#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.onChange.__listenersInUse = false;
					}
					
				}
				
			}
			else {
				#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				this.__height = @value;
			}
			
			#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			return @value;
		}
		#line default
		
		public virtual bool get_width() {
			#line 157 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			return this.__width;
		}
		#line default
		
		public virtual bool get_height() {
			#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			return this.__height;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				switch (hash) {
					case 1324702840:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.weak = global::haxe.lang.Runtime.toBool(@value);
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return @value;
					}
					
					
					case 387942383:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.onChange = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return @value;
					}
					
					
					case 712733447:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.__height = global::haxe.lang.Runtime.toBool(@value);
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return @value;
					}
					
					
					case 38537191:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.set_height(global::haxe.lang.Runtime.toBool(@value));
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return @value;
					}
					
					
					case 885067494:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.__width = global::haxe.lang.Runtime.toBool(@value);
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return @value;
					}
					
					
					case 1247983110:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.set_width(global::haxe.lang.Runtime.toBool(@value));
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return @value;
					}
					
					
					default:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				switch (hash) {
					case 1926461360:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_height", 1926461360)) );
					}
					
					
					case 235672157:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_width", 235672157)) );
					}
					
					
					case 1985025572:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_height", 1985025572)) );
					}
					
					
					case 1901919849:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_width", 1901919849)) );
					}
					
					
					case 1038712487:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__invokeOnChange", 1038712487)) );
					}
					
					
					case 994869407:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "dispose", 994869407)) );
					}
					
					
					case 1913447174:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "copyValueFrom", 1913447174)) );
					}
					
					
					case 5741474:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set", 5741474)) );
					}
					
					
					case 1092323457:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "both", 1092323457)) );
					}
					
					
					case 39019571:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "neither", 39019571)) );
					}
					
					
					case 605707589:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "either", 605707589)) );
					}
					
					
					case 1324702840:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.weak;
					}
					
					
					case 387942383:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.onChange;
					}
					
					
					case 712733447:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.__height;
					}
					
					
					case 38537191:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.get_height();
					}
					
					
					case 885067494:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.__width;
					}
					
					
					case 1247983110:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.get_width();
					}
					
					
					default:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				switch (hash) {
					case 1926461360:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.get_height();
					}
					
					
					case 235672157:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.get_width();
					}
					
					
					case 1985025572:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.set_height(global::haxe.lang.Runtime.toBool(dynargs[0]));
					}
					
					
					case 1901919849:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.set_width(global::haxe.lang.Runtime.toBool(dynargs[0]));
					}
					
					
					case 1038712487:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.__invokeOnChange(global::haxe.lang.Runtime.toBool(dynargs[0]), global::haxe.lang.Runtime.toBool(dynargs[1]));
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						break;
					}
					
					
					case 994869407:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.dispose();
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						break;
					}
					
					
					case 1913447174:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.copyValueFrom(((global::sx.properties.AutoSize) (dynargs[0]) ));
					}
					
					
					case 5741474:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.@set(global::haxe.lang.Runtime.toBool(dynargs[0]), global::haxe.lang.Runtime.toBool(dynargs[1]));
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						break;
					}
					
					
					case 1092323457:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.both();
					}
					
					
					case 39019571:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.neither();
					}
					
					
					case 605707589:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.either();
					}
					
					
					default:
					{
						#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			baseArr.push("weak");
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			baseArr.push("onChange");
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			baseArr.push("__height");
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			baseArr.push("height");
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			baseArr.push("__width");
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			baseArr.push("width");
			#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			{
				#line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


