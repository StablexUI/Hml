
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.metric {
	public class Offset : global::haxe.lang.HxObject {
		
		public Offset(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Offset(global::haxe.lang.Function widthProvider, global::haxe.lang.Function heightProvider) {
			#line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			global::sx.properties.metric.Offset.__hx_ctor_sx_properties_metric_Offset(this, widthProvider, heightProvider);
		}
		#line default
		
		public static void __hx_ctor_sx_properties_metric_Offset(global::sx.properties.metric.Offset __temp_me160, global::haxe.lang.Function widthProvider, global::haxe.lang.Function heightProvider) {
			#line 35 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			__temp_me160.__silentChanges = false;
			#line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			__temp_me160.__left = new global::sx.properties.metric.Coordinate(((string) ("horizontal") ));
			__temp_me160.__left.pctSource = widthProvider;
			__temp_me160.__left.ownerSize = widthProvider;
			__temp_me160.__left.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me160, "__changed", 1310392788)) ));
			#line 48 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			__temp_me160.__right = new global::sx.properties.metric.Coordinate(((string) ("horizontal") ));
			__temp_me160.__right.pctSource = widthProvider;
			__temp_me160.__right.ownerSize = widthProvider;
			__temp_me160.__right.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me160, "__changed", 1310392788)) ));
			#line 53 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			__temp_me160.__top = new global::sx.properties.metric.Coordinate(((string) ("vertical") ));
			__temp_me160.__top.pctSource = heightProvider;
			__temp_me160.__top.ownerSize = heightProvider;
			__temp_me160.__top.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me160, "__changed", 1310392788)) ));
			#line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			__temp_me160.__bottom = new global::sx.properties.metric.Coordinate(((string) ("vertical") ));
			__temp_me160.__bottom.pctSource = heightProvider;
			__temp_me160.__bottom.ownerSize = heightProvider;
			__temp_me160.__bottom.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me160, "__changed", 1310392788)) ));
			#line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			__temp_me160.__left.pair = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me160, "get_right", 755853363)) );
			__temp_me160.__right.pair = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me160, "get_left", 1198179216)) );
			__temp_me160.__top.pair = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me160, "get_bottom", 1442862772)) );
			__temp_me160.__bottom.pair = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me160, "get_top", 650981164)) );
			#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			{
				#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				global::sx.properties.metric.Coordinate _this = __temp_me160.__left;
				#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				if ( ! (_this.selected) ) {
					#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					_this.selected = true;
					#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					((global::sx.properties.metric.Coordinate) (_this.pair.__hx_invoke0_o()) ).selected = false;
				}
				
			}
			
			#line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			{
				#line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				global::sx.properties.metric.Coordinate _this1 = __temp_me160.__top;
				#line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				if ( ! (_this1.selected) ) {
					#line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					_this1.selected = true;
					#line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					((global::sx.properties.metric.Coordinate) (_this1.pair.__hx_invoke0_o()) ).selected = false;
				}
				
			}
			
			#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			__temp_me160.onChange = new global::sx.signals.Signal<object>();
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			return new global::sx.properties.metric.Offset(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				return new global::sx.properties.metric.Offset(((global::haxe.lang.Function) (arr[0]) ), ((global::haxe.lang.Function) (arr[1]) ));
			}
			#line default
		}
		
		
		
		
		public global::sx.properties.metric.Coordinate __left;
		
		
		
		public global::sx.properties.metric.Coordinate __right;
		
		
		
		public global::sx.properties.metric.Coordinate __top;
		
		
		
		public global::sx.properties.metric.Coordinate __bottom;
		
		public global::sx.signals.Signal<object> onChange;
		
		public bool __silentChanges;
		
		public virtual void @set(double x, double y) {
			unchecked {
				#line 89 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				this.__silentChanges = true;
				#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				if (( ( -1 <= x ) && ( x <= 1 ) )) {
					#line 92 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					this.get_left().set_pct(( x * 100 ));
				}
				else {
					#line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					this.get_left().set_dip(x);
				}
				
				#line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				if (( ( -1 <= y ) && ( y <= 1 ) )) {
					#line 97 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					this.get_top().set_pct(( y * 100 ));
				}
				else {
					#line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
					this.get_top().set_dip(y);
				}
				
				#line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				this.__silentChanges = false;
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
								listener.__hx_invoke0_o();
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
								listener1.__hx_invoke0_o();
							}
							
						}
						
						#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.onChange.__listenersInUse = false;
					}
					
				}
				
			}
			#line default
		}
		
		
		public virtual void __changed(global::sx.properties.metric.Size property, string previousUnits, double previousValue) {
			#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			if ( ! (this.__silentChanges) ) {
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
								listener.__hx_invoke0_o();
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
								listener1.__hx_invoke0_o();
							}
							
						}
						
						#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.onChange.__listenersInUse = false;
					}
					
				}
				
			}
			
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate get_left() {
			#line 117 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			return this.__left;
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate get_right() {
			#line 118 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			return this.__right;
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate get_top() {
			#line 119 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			return this.__top;
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate get_bottom() {
			#line 120 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			return this.__bottom;
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate set_left(global::sx.properties.metric.Size v) {
			#line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			this.__left.copyValueFrom(v);
			#line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			return this.__left;
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate set_right(global::sx.properties.metric.Size v) {
			#line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			this.__right.copyValueFrom(v);
			#line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			return this.__right;
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate set_top(global::sx.properties.metric.Size v) {
			#line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			this.__top.copyValueFrom(v);
			#line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			return this.__top;
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate set_bottom(global::sx.properties.metric.Size v) {
			#line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			this.__bottom.copyValueFrom(v);
			#line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			return this.__bottom;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				switch (hash) {
					case 949602254:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.__silentChanges = global::haxe.lang.Runtime.toBool(@value);
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return @value;
					}
					
					
					case 387942383:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.onChange = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return @value;
					}
					
					
					case 229134859:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.__bottom = ((global::sx.properties.metric.Coordinate) (@value) );
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return @value;
					}
					
					
					case 1702422251:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.set_bottom(((global::sx.properties.metric.Size) (@value) ));
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return @value;
					}
					
					
					case 1916061557:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.__top = ((global::sx.properties.metric.Coordinate) (@value) );
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return @value;
					}
					
					
					case 5793429:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.set_top(((global::sx.properties.metric.Size) (@value) ));
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return @value;
					}
					
					
					case 1405248700:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.__right = ((global::sx.properties.metric.Coordinate) (@value) );
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return @value;
					}
					
					
					case 1768164316:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.set_right(((global::sx.properties.metric.Size) (@value) ));
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return @value;
					}
					
					
					case 1990748967:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.__left = ((global::sx.properties.metric.Coordinate) (@value) );
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return @value;
					}
					
					
					case 1202718727:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.set_left(((global::sx.properties.metric.Size) (@value) ));
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return @value;
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				switch (hash) {
					case 1501426984:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_bottom", 1501426984)) );
					}
					
					
					case 432980024:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_top", 432980024)) );
					}
					
					
					case 274617407:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_right", 274617407)) );
					}
					
					
					case 1976048900:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_left", 1976048900)) );
					}
					
					
					case 1442862772:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_bottom", 1442862772)) );
					}
					
					
					case 650981164:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_top", 650981164)) );
					}
					
					
					case 755853363:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_right", 755853363)) );
					}
					
					
					case 1198179216:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_left", 1198179216)) );
					}
					
					
					case 1310392788:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__changed", 1310392788)) );
					}
					
					
					case 5741474:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set", 5741474)) );
					}
					
					
					case 949602254:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.__silentChanges;
					}
					
					
					case 387942383:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.onChange;
					}
					
					
					case 229134859:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.__bottom;
					}
					
					
					case 1702422251:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_bottom();
					}
					
					
					case 1916061557:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.__top;
					}
					
					
					case 5793429:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_top();
					}
					
					
					case 1405248700:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.__right;
					}
					
					
					case 1768164316:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_right();
					}
					
					
					case 1990748967:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.__left;
					}
					
					
					case 1202718727:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_left();
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				switch (hash) {
					case 1501426984:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.set_bottom(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 432980024:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.set_top(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 274617407:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.set_right(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 1976048900:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.set_left(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 1442862772:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_bottom();
					}
					
					
					case 650981164:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_top();
					}
					
					
					case 755853363:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_right();
					}
					
					
					case 1198179216:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return this.get_left();
					}
					
					
					case 1310392788:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.__changed(((global::sx.properties.metric.Size) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[2])) ));
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						break;
					}
					
					
					case 5741474:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						this.@set(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[1])) ));
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						break;
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			baseArr.push("__silentChanges");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			baseArr.push("onChange");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			baseArr.push("__bottom");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			baseArr.push("bottom");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			baseArr.push("__top");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			baseArr.push("top");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			baseArr.push("__right");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			baseArr.push("right");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			baseArr.push("__left");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			baseArr.push("left");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
			{
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


