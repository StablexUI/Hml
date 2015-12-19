
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties._Align {
	public class HorizontalAlign_Impl_ {
		
		static HorizontalAlign_Impl_() {
			#line 14 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			global::sx.properties._Align.HorizontalAlign_Impl_.Left = ((string) ("left") );
			global::sx.properties._Align.HorizontalAlign_Impl_.Center = ((string) ("center") );
			global::sx.properties._Align.HorizontalAlign_Impl_.Right = ((string) ("right") );
			global::sx.properties._Align.HorizontalAlign_Impl_.HNone = ((string) ("none") );
		}
		#line default
		
		public static string Left;
		
		public static string Center;
		
		public static string Right;
		
		public static string HNone;
		
		public static global::sx.properties.Align andVertical(string this1, string b) {
			#line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			global::sx.properties.Align weakAlign = global::sx.properties.abstracts._AAlign.AAlign_Impl_.fromVertical(b);
			weakAlign.set_horizontal(((string) (this1) ));
			#line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			return weakAlign;
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties._Align {
	public class VerticalAlign_Impl_ {
		
		static VerticalAlign_Impl_() {
			#line 39 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			global::sx.properties._Align.VerticalAlign_Impl_.Top = ((string) ("top") );
			global::sx.properties._Align.VerticalAlign_Impl_.Middle = ((string) ("middle") );
			global::sx.properties._Align.VerticalAlign_Impl_.Bottom = ((string) ("bottom") );
			global::sx.properties._Align.VerticalAlign_Impl_.VNone = ((string) ("none") );
		}
		#line default
		
		public static string Top;
		
		public static string Middle;
		
		public static string Bottom;
		
		public static string VNone;
		
		public static global::sx.properties.Align andHorizontal(string this1, string b) {
			#line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			global::sx.properties.Align weakAlign = global::sx.properties.abstracts._AAlign.AAlign_Impl_.fromHorizontal(b);
			weakAlign.set_vertical(((string) (this1) ));
			#line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			return weakAlign;
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties._Align {
	public class NoneAlign_Impl_ {
		
		static NoneAlign_Impl_() {
			#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			global::sx.properties._Align.NoneAlign_Impl_.None = ((string) ("none") );
		}
		#line default
		
		public static string None;
		
		public static string toHorizontal(string this1) {
			#line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			return ((string) ("none") );
		}
		#line default
		
		public static string toVertical(string this1) {
			#line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			return ((string) ("none") );
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties {
	public class Align : global::haxe.lang.HxObject {
		
		public Align(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Align(string horizontal, string vertical) {
			#line 98 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			global::sx.properties.Align.__hx_ctor_sx_properties_Align(this, horizontal, vertical);
		}
		#line default
		
		public static void __hx_ctor_sx_properties_Align(global::sx.properties.Align __temp_me144, string horizontal, string vertical) {
			#line 92 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			__temp_me144.weak = false;
			#line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			__temp_me144.__vertical = ((string) ("none") );
			#line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			__temp_me144.__horizontal = ((string) ("none") );
			#line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			if (string.Equals(vertical, null)) {
				#line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				vertical = "none";
			}
			
			#line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			if (string.Equals(horizontal, null)) {
				#line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				horizontal = "none";
			}
			
			#line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			__temp_me144.__horizontal = horizontal;
			__temp_me144.__vertical = vertical;
			#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			__temp_me144.onChange = new global::sx.signals.Signal<object>();
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			return new global::sx.properties.Align(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				return new global::sx.properties.Align(global::haxe.lang.Runtime.toString(arr[0]), global::haxe.lang.Runtime.toString(arr[1]));
			}
			#line default
		}
		
		
		
		
		public string __horizontal;
		
		
		
		public string __vertical;
		
		public global::sx.signals.Signal<object> onChange;
		
		public bool weak;
		
		public virtual void @set(string horizontal, string vertical) {
			#line 114 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			bool horizontalChanged =  ! (string.Equals(this.__horizontal, horizontal)) ;
			bool verticalChanged =  ! (string.Equals(this.__vertical, vertical)) ;
			#line 117 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			this.__horizontal = horizontal;
			this.__vertical = vertical;
			#line 120 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			if (( horizontalChanged || verticalChanged )) {
				#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) {
					#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (this.onChange.__listenersInUse) {
						#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						{
							#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							int _g = 0;
							#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							global::Array<object> _g1 = this.onChange.__listeners;
							#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							while (( _g < _g1.length )) {
								#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
								global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
								#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
								 ++ _g;
								#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
								listener.__hx_invoke2_o(default(double), horizontalChanged, default(double), verticalChanged);
							}
							
						}
						
						#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						bool __temp_expr1 = false;
					}
					else {
						#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.onChange.__listenersInUse = true;
						#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						{
							#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							int _g2 = 0;
							#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							global::Array<object> _g11 = this.onChange.__listeners;
							#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							while (( _g2 < _g11.length )) {
								#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
								global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
								#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
								 ++ _g2;
								#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
								listener1.__hx_invoke2_o(default(double), horizontalChanged, default(double), verticalChanged);
							}
							
						}
						
						#line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.onChange.__listenersInUse = false;
					}
					
				}
				
			}
			
		}
		#line default
		
		public virtual global::sx.properties.Align copyValueFrom(global::sx.properties.Align align) {
			#line 133 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			this.@set(align.get_horizontal(), align.get_vertical());
			if (align.weak) {
				#line 134 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				align.dispose();
			}
			
			#line 136 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
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
		
		public virtual string set_vertical(string @value) {
			#line 163 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			this.__vertical = @value;
			if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) {
				#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				if (this.onChange.__listenersInUse) {
					#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					{
						#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						int _g = 0;
						#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						global::Array<object> _g1 = this.onChange.__listeners;
						#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						while (( _g < _g1.length )) {
							#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
							#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							 ++ _g;
							#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							listener.__hx_invoke2_o(default(double), false, default(double), true);
						}
						
					}
					
					#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					bool __temp_expr1 = false;
				}
				else {
					#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					this.onChange.__listenersInUse = true;
					#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					{
						#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						int _g2 = 0;
						#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						global::Array<object> _g11 = this.onChange.__listeners;
						#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						while (( _g2 < _g11.length )) {
							#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
							#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							 ++ _g2;
							#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							listener1.__hx_invoke2_o(default(double), false, default(double), true);
						}
						
					}
					
					#line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					this.onChange.__listenersInUse = false;
				}
				
			}
			
			#line 166 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			return @value;
		}
		#line default
		
		public virtual string set_horizontal(string @value) {
			#line 175 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			this.__horizontal = @value;
			if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) {
				#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				if (this.onChange.__listenersInUse) {
					#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					{
						#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						int _g = 0;
						#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						global::Array<object> _g1 = this.onChange.__listeners;
						#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						while (( _g < _g1.length )) {
							#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
							#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							 ++ _g;
							#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							listener.__hx_invoke2_o(default(double), true, default(double), false);
						}
						
					}
					
					#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					bool __temp_expr1 = false;
				}
				else {
					#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					this.onChange.__listenersInUse = true;
					#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					{
						#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						int _g2 = 0;
						#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						global::Array<object> _g11 = this.onChange.__listeners;
						#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						while (( _g2 < _g11.length )) {
							#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
							#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							 ++ _g2;
							#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							listener1.__hx_invoke2_o(default(double), true, default(double), false);
						}
						
					}
					
					#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					this.onChange.__listenersInUse = false;
				}
				
			}
			
			#line 178 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			return @value;
		}
		#line default
		
		public virtual string get_vertical() {
			#line 183 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			return this.__vertical;
		}
		#line default
		
		public virtual string get_horizontal() {
			#line 184 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			return this.__horizontal;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				switch (hash) {
					case 1324702840:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.weak = global::haxe.lang.Runtime.toBool(@value);
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return @value;
					}
					
					
					case 387942383:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.onChange = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return @value;
					}
					
					
					case 223227798:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.__vertical = global::haxe.lang.Runtime.toString(@value);
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return @value;
					}
					
					
					case 1779809398:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.set_vertical(global::haxe.lang.Runtime.toString(@value));
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return @value;
					}
					
					
					case 1314355204:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.__horizontal = global::haxe.lang.Runtime.toString(@value);
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return @value;
					}
					
					
					case 365165796:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.set_horizontal(global::haxe.lang.Runtime.toString(@value));
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return @value;
					}
					
					
					default:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				switch (hash) {
					case 196707629:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_horizontal", 196707629)) );
					}
					
					
					case 523202687:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_vertical", 523202687)) );
					}
					
					
					case 735669665:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_horizontal", 735669665)) );
					}
					
					
					case 875074547:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_vertical", 875074547)) );
					}
					
					
					case 1038712487:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__invokeOnChange", 1038712487)) );
					}
					
					
					case 994869407:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "dispose", 994869407)) );
					}
					
					
					case 1913447174:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "copyValueFrom", 1913447174)) );
					}
					
					
					case 5741474:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set", 5741474)) );
					}
					
					
					case 1324702840:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.weak;
					}
					
					
					case 387942383:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.onChange;
					}
					
					
					case 223227798:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.__vertical;
					}
					
					
					case 1779809398:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.get_vertical();
					}
					
					
					case 1314355204:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.__horizontal;
					}
					
					
					case 365165796:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.get_horizontal();
					}
					
					
					default:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				switch (hash) {
					case 196707629:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.get_horizontal();
					}
					
					
					case 523202687:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.get_vertical();
					}
					
					
					case 735669665:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.set_horizontal(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					case 875074547:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.set_vertical(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					case 1038712487:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.__invokeOnChange(global::haxe.lang.Runtime.toBool(dynargs[0]), global::haxe.lang.Runtime.toBool(dynargs[1]));
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						break;
					}
					
					
					case 994869407:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.dispose();
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						break;
					}
					
					
					case 1913447174:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.copyValueFrom(((global::sx.properties.Align) (dynargs[0]) ));
					}
					
					
					case 5741474:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.@set(global::haxe.lang.Runtime.toString(dynargs[0]), global::haxe.lang.Runtime.toString(dynargs[1]));
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						break;
					}
					
					
					default:
					{
						#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			baseArr.push("weak");
			#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			baseArr.push("onChange");
			#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			baseArr.push("__vertical");
			#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			baseArr.push("vertical");
			#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			baseArr.push("__horizontal");
			#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			baseArr.push("horizontal");
			#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			{
				#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


