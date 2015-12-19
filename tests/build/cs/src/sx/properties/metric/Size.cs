
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.metric {
	public class Size : global::haxe.lang.HxObject {
		
		public Size(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Size(string orientation) {
			#line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			global::sx.properties.metric.Size.__hx_ctor_sx_properties_metric_Size(this, orientation);
		}
		#line default
		
		public static void __hx_ctor_sx_properties_metric_Size(global::sx.properties.metric.Size __temp_me149, string orientation) {
			#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			__temp_me149.__value = ((double) (((int) (0) )) );
			#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			__temp_me149.weak = false;
			#line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			__temp_me149.units = ((string) ("dip") );
			#line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (string.Equals(orientation, null)) {
				#line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				orientation = "horizontal";
			}
			
			#line 80 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			__temp_me149.orientation = orientation;
			__temp_me149.onChange = new global::sx.signals.Signal<object>();
		}
		#line default
		
		
		
		public static global::sx.properties.metric.Size get_zeroProperty() {
			#line 399 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return global::sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return new global::sx.properties.metric.Size(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return new global::sx.properties.metric.Size(global::haxe.lang.Runtime.toString(arr[0]));
		}
		#line default
		
		
		
		
		
		
		
		
		
		public global::sx.properties.metric.Size __min;
		
		
		
		public global::sx.properties.metric.Size __max;
		
		public string units;
		
		public string orientation;
		
		public global::haxe.lang.Function pctSource;
		
		public global::sx.signals.Signal<object> onChange;
		
		public bool weak;
		
		public double __value;
		
		public bool isVertical() {
			#line 90 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return string.Equals(this.orientation, ((string) ("vertical") ));
		}
		#line default
		
		public bool isHorizontal() {
			#line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return string.Equals(this.orientation, ((string) ("horizontal") ));
		}
		#line default
		
		public virtual string toString() {
			#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			double @value = default(double);
			#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			{
				#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				string _g = this.units;
				#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				switch (_g) {
					case "dip":
					{
						#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						@value = this.get_dip();
						#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
					case "px":
					{
						#line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						@value = this.get_px();
						#line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
					case "pct":
					{
						#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						@value = this.get_pct();
						#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
				}
				
			}
			
			#line 115 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("", global::haxe.lang.Runtime.toString(@value)), this.units);
		}
		#line default
		
		public virtual global::sx.properties.metric.Size copyValueFrom(global::sx.properties.metric.Size size) {
			#line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			string previousUnits = this.units;
			double previousValue = this.__value;
			#line 129 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.units = size.units;
			this.__value = size.__value;
			#line 132 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (size.weak) {
				#line 132 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				size.dispose();
			}
			
			#line 134 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.__invokeOnChange(previousUnits, previousValue);
			#line 136 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return this;
		}
		#line default
		
		public virtual bool hasMin() {
			#line 145 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return ( this.__min != null );
		}
		#line default
		
		public virtual void dispose() {
		}
		
		
		public virtual global::sx.properties.metric.Size __pctSource() {
			#line 163 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (( this.pctSource == null )) {
				#line 163 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				return global::sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
			}
			else {
				#line 163 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				return ((global::sx.properties.metric.Size) (this.pctSource.__hx_invoke0_o()) );
			}
			
		}
		#line default
		
		public virtual void __invokeOnChange(string previousUnits, double previousValue) {
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
							listener.__hx_invoke3_o(default(double), this, default(double), previousUnits, previousValue, global::haxe.lang.Runtime.undefined);
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
							listener1.__hx_invoke3_o(default(double), this, default(double), previousUnits, previousValue, global::haxe.lang.Runtime.undefined);
						}
						
					}
					
					#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.onChange.__listenersInUse = false;
				}
				
			}
			
		}
		#line default
		
		public virtual void __constraintChanged(global::sx.properties.metric.Size constraint, string previousUnits, double previousValue) {
			#line 181 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (( constraint == this.__min )) {
				#line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				double minValue = default(double);
				#line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				{
					#line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					global::sx.properties.metric.Size size = this.__min;
					#line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					switch (this.units) {
						case "dip":
						{
							#line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							minValue = size.get_dip();
							#line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case "px":
						{
							#line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							minValue = size.get_px();
							#line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case "pct":
						{
							#line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							minValue = size.get_pct();
							#line 182 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
					}
					
				}
				
				#line 183 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				if (( this.__value < minValue )) {
					#line 184 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					double previous = this.__value;
					this.__value = minValue;
					this.__invokeOnChange(this.units, previous);
				}
				
				#line 189 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				return;
			}
			
			#line 192 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (( constraint == this.__max )) {
				#line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				double maxValue = default(double);
				#line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				{
					#line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					global::sx.properties.metric.Size size1 = this.__max;
					#line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					switch (this.units) {
						case "dip":
						{
							#line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							maxValue = size1.get_dip();
							#line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case "px":
						{
							#line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							maxValue = size1.get_px();
							#line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case "pct":
						{
							#line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							maxValue = size1.get_pct();
							#line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
					}
					
				}
				
				#line 194 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				if (( this.__value > maxValue )) {
					#line 195 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					double previous1 = this.__value;
					this.__value = maxValue;
					this.__invokeOnChange(this.units, previous1);
				}
				
				#line 200 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				return;
			}
			
		}
		#line default
		
		public virtual double get_dip() {
			#line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			{
				#line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				string _g = this.units;
				#line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				switch (_g) {
					case "dip":
					{
						#line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.__value;
					}
					
					
					case "px":
					{
						#line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ( this.__value / global::sx.Sx.dipFactor );
					}
					
					
					case "pct":
					{
						#line 211 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ( ( this.__pctSource().get_dip() * this.__value ) * 0.01 );
					}
					
					
				}
				
			}
			
			#line 209 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return default(double);
		}
		#line default
		
		public virtual double get_px() {
			#line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			{
				#line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				string _g = this.units;
				#line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				switch (_g) {
					case "dip":
					{
						#line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ( this.__value * global::sx.Sx.dipFactor );
					}
					
					
					case "px":
					{
						#line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.__value;
					}
					
					
					case "pct":
					{
						#line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ( ( this.__pctSource().get_px() * this.__value ) * 0.01 );
					}
					
					
				}
				
			}
			
			#line 223 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return default(double);
		}
		#line default
		
		public virtual double get_pct() {
			unchecked {
				#line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				{
					#line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					string _g = this.units;
					#line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					switch (_g) {
						case "dip":
						{
							#line 241 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							double dip = this.__pctSource().get_dip();
							if (( dip == 0 )) {
								#line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								return ((double) (100) );
							}
							else {
								#line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								return ( ( this.__value / dip ) * 100 );
							}
							
						}
						
						
						case "px":
						{
							#line 244 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							double px = this.__pctSource().get_px();
							if (( px == 0 )) {
								#line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								return ((double) (100) );
							}
							else {
								#line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
								return ( ( this.__value / px ) * 100 );
							}
							
						}
						
						
						case "pct":
						{
							#line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							return this.__value;
						}
						
						
					}
					
				}
				
				#line 237 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				return default(double);
			}
			#line default
		}
		
		
		public virtual double set_dip(double @value) {
			#line 258 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			string previousUnits = this.units;
			double previousValue = this.__value;
			#line 261 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.units = ((string) ("dip") );
			if (( ( this.__min != null ) && ( this.__min.get_dip() > @value ) )) {
				#line 263 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = this.__min.get_dip();
			}
			else if (( ( this.__max != null ) && ( this.__max.get_dip() < @value ) )) {
				#line 265 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = this.__max.get_dip();
			}
			else {
				#line 267 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = @value;
			}
			
			#line 270 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.__invokeOnChange(previousUnits, previousValue);
			#line 272 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return @value;
		}
		#line default
		
		public virtual double set_px(double @value) {
			#line 282 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			string previousUnits = this.units;
			double previousValue = this.__value;
			#line 285 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.units = ((string) ("px") );
			if (( ( this.__min != null ) && ( this.__min.get_px() > @value ) )) {
				#line 287 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = this.__min.get_px();
			}
			else if (( ( this.__max != null ) && ( this.__max.get_px() < @value ) )) {
				#line 289 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = this.__max.get_px();
			}
			else {
				#line 291 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = @value;
			}
			
			#line 294 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.__invokeOnChange(previousUnits, previousValue);
			#line 296 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return @value;
		}
		#line default
		
		public virtual double set_pct(double @value) {
			#line 306 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			string previousUnits = this.units;
			double previousValue = this.__value;
			#line 309 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.units = ((string) ("pct") );
			if (( ( this.__min != null ) && ( this.__min.get_pct() > @value ) )) {
				#line 311 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = this.__min.get_pct();
			}
			else if (( ( this.__max != null ) && ( this.__max.get_pct() < @value ) )) {
				#line 313 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = this.__max.get_pct();
			}
			else {
				#line 315 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__value = @value;
			}
			
			#line 318 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			this.__invokeOnChange(previousUnits, previousValue);
			#line 320 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return @value;
		}
		#line default
		
		public virtual global::sx.properties.metric.Size get_min() {
			#line 329 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (( this.__min == null )) {
				#line 330 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__min = new global::sx.properties.metric.Size(((string) (this.orientation) ));
				this.__min.pctSource = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__pctSource", 1422675900)) );
				this.__min.__value = global::Math.NEGATIVE_INFINITY;
				this.__min.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__constraintChanged", 1796568823)) ));
			}
			
			#line 336 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return this.__min;
		}
		#line default
		
		public virtual global::sx.properties.metric.Size set_min(global::sx.properties.metric.Size @value) {
			#line 345 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (( @value == null )) {
				#line 346 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				if (( this.__min != null )) {
					#line 347 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					string _g = this.__min.units;
					#line 347 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					switch (_g) {
						case "dip":
						{
							#line 348 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							this.__min.set_dip(global::Math.NEGATIVE_INFINITY);
							#line 348 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case "px":
						{
							#line 349 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							this.__min.set_px(global::Math.NEGATIVE_INFINITY);
							#line 349 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case "pct":
						{
							#line 350 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							this.__min.set_pct(global::Math.NEGATIVE_INFINITY);
							#line 350 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
					}
					
				}
				
			}
			else {
				#line 354 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				((global::sx.properties.metric.Size) (this.get_min()) ).copyValueFrom(@value);
			}
			
			#line 357 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return @value;
		}
		#line default
		
		public virtual global::sx.properties.metric.Size get_max() {
			#line 366 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (( this.__max == null )) {
				#line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				this.__max = new global::sx.properties.metric.Size(((string) (this.orientation) ));
				this.__max.pctSource = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__pctSource", 1422675900)) );
				this.__max.__value = global::Math.POSITIVE_INFINITY;
				this.__max.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__constraintChanged", 1796568823)) ));
			}
			
			#line 373 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return this.__max;
		}
		#line default
		
		public virtual global::sx.properties.metric.Size set_max(global::sx.properties.metric.Size @value) {
			#line 382 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			if (( @value == null )) {
				#line 383 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				if (( this.__max != null )) {
					#line 384 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					string _g = this.__max.units;
					#line 384 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
					switch (_g) {
						case "dip":
						{
							#line 385 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							this.__max.set_dip(global::Math.NEGATIVE_INFINITY);
							#line 385 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case "px":
						{
							#line 386 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							this.__max.set_px(global::Math.NEGATIVE_INFINITY);
							#line 386 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
						case "pct":
						{
							#line 387 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							this.__max.set_pct(global::Math.NEGATIVE_INFINITY);
							#line 387 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
							break;
						}
						
						
					}
					
				}
				
			}
			else {
				#line 391 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				((global::sx.properties.metric.Size) (this.get_max()) ).copyValueFrom(@value);
			}
			
			#line 394 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return @value;
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				switch (hash) {
					case 471259217:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.__value = ((double) (@value) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					case 5591841:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_pct(@value);
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					case 25096:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_px(@value);
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					case 4996427:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_dip(@value);
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				switch (hash) {
					case 471259217:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.__value = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					case 1324702840:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.weak = global::haxe.lang.Runtime.toBool(@value);
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					case 387942383:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.onChange = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					case 648021724:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.pctSource = ((global::haxe.lang.Function) (@value) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					case 2113859280:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.orientation = global::haxe.lang.Runtime.toString(@value);
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					case 652700015:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.units = global::haxe.lang.Runtime.toString(@value);
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					case 1915710340:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.__max = ((global::sx.properties.metric.Size) (@value) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					case 5442212:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_max(((global::sx.properties.metric.Size) (@value) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					case 1915712114:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.__min = ((global::sx.properties.metric.Size) (@value) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					case 5443986:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_min(((global::sx.properties.metric.Size) (@value) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					case 5591841:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_pct(((double) (global::haxe.lang.Runtime.toDouble(@value)) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					case 25096:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_px(((double) (global::haxe.lang.Runtime.toDouble(@value)) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					case 4996427:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.set_dip(((double) (global::haxe.lang.Runtime.toDouble(@value)) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return @value;
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				switch (hash) {
					case 432628807:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_max", 432628807)) );
					}
					
					
					case 650629947:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_max", 650629947)) );
					}
					
					
					case 432630581:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_min", 432630581)) );
					}
					
					
					case 650631721:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_min", 650631721)) );
					}
					
					
					case 432778436:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_pct", 432778436)) );
					}
					
					
					case 1870155205:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_px", 1870155205)) );
					}
					
					
					case 432183022:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_dip", 432183022)) );
					}
					
					
					case 650779576:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_pct", 650779576)) );
					}
					
					
					case 590346577:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_px", 590346577)) );
					}
					
					
					case 650184162:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_dip", 650184162)) );
					}
					
					
					case 1796568823:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__constraintChanged", 1796568823)) );
					}
					
					
					case 1038712487:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__invokeOnChange", 1038712487)) );
					}
					
					
					case 1422675900:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__pctSource", 1422675900)) );
					}
					
					
					case 994869407:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "dispose", 994869407)) );
					}
					
					
					case 993664600:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "hasMin", 993664600)) );
					}
					
					
					case 1913447174:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "copyValueFrom", 1913447174)) );
					}
					
					
					case 946786476:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "toString", 946786476)) );
					}
					
					
					case 1742939502:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "isHorizontal", 1742939502)) );
					}
					
					
					case 1690619520:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "isVertical", 1690619520)) );
					}
					
					
					case 471259217:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.__value;
					}
					
					
					case 1324702840:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.weak;
					}
					
					
					case 387942383:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.onChange;
					}
					
					
					case 648021724:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.pctSource;
					}
					
					
					case 2113859280:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.orientation;
					}
					
					
					case 652700015:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.units;
					}
					
					
					case 1915710340:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.__max;
					}
					
					
					case 5442212:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_max();
					}
					
					
					case 1915712114:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.__min;
					}
					
					
					case 5443986:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_min();
					}
					
					
					case 5591841:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_pct();
					}
					
					
					case 25096:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_px();
					}
					
					
					case 4996427:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_dip();
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				switch (hash) {
					case 471259217:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.__value;
					}
					
					
					case 5591841:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_pct();
					}
					
					
					case 25096:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_px();
					}
					
					
					case 4996427:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_dip();
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				switch (hash) {
					case 432628807:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.set_max(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 650629947:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_max();
					}
					
					
					case 432630581:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.set_min(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 650631721:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_min();
					}
					
					
					case 432778436:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.set_pct(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
					}
					
					
					case 1870155205:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.set_px(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
					}
					
					
					case 432183022:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.set_dip(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
					}
					
					
					case 650779576:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_pct();
					}
					
					
					case 590346577:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_px();
					}
					
					
					case 650184162:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.get_dip();
					}
					
					
					case 1796568823:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.__constraintChanged(((global::sx.properties.metric.Size) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[2])) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
					case 1038712487:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.__invokeOnChange(global::haxe.lang.Runtime.toString(dynargs[0]), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[1])) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
					case 1422675900:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.__pctSource();
					}
					
					
					case 994869407:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						this.dispose();
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						break;
					}
					
					
					case 993664600:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.hasMin();
					}
					
					
					case 1913447174:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.copyValueFrom(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 946786476:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.toString();
					}
					
					
					case 1742939502:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.isHorizontal();
					}
					
					
					case 1690619520:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return this.isVertical();
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			baseArr.push("__value");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			baseArr.push("weak");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			baseArr.push("onChange");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			baseArr.push("pctSource");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			baseArr.push("orientation");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			baseArr.push("units");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			baseArr.push("__max");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			baseArr.push("max");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			baseArr.push("__min");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			baseArr.push("min");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			baseArr.push("pct");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			baseArr.push("px");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			baseArr.push("dip");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			{
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
		public override string ToString(){
			return this.toString();
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.metric._Size {
	public class Size_Internal_ZeroSize : global::sx.properties.metric.Size {
		
		static Size_Internal_ZeroSize() {
			#line 411 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			global::sx.properties.metric._Size.Size_Internal_ZeroSize.instance = ((global::sx.properties.metric.Size) (new global::sx.properties.metric._Size.Size_Internal_ZeroSize(((string) (null) ))) );
		}
		#line default
		
		public Size_Internal_ZeroSize(global::haxe.lang.EmptyObject empty) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
		}
		
		
		public Size_Internal_ZeroSize(string orientation) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
			#line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			global::sx.properties.metric._Size.Size_Internal_ZeroSize.__hx_ctor_sx_properties_metric__Size_Size_Internal_ZeroSize(this, orientation);
		}
		#line default
		
		public static void __hx_ctor_sx_properties_metric__Size_Size_Internal_ZeroSize(global::sx.properties.metric._Size.Size_Internal_ZeroSize __temp_me162, string orientation) {
			#line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			global::sx.properties.metric.Size.__hx_ctor_sx_properties_metric_Size(__temp_me162, orientation);
		}
		#line default
		
		public static global::sx.properties.metric.Size instance;
		
		public static new object __hx_createEmpty() {
			#line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return new global::sx.properties.metric._Size.Size_Internal_ZeroSize(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return new global::sx.properties.metric._Size.Size_Internal_ZeroSize(global::haxe.lang.Runtime.toString(arr[0]));
		}
		#line default
		
		public override double get_px() {
			#line 417 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return 0;
		}
		#line default
		
		public override double get_pct() {
			#line 418 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return 0;
		}
		#line default
		
		public override double get_dip() {
			#line 419 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return 0;
		}
		#line default
		
		public override double set_px(double v) {
			#line 420 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return v;
		}
		#line default
		
		public override double set_pct(double v) {
			#line 421 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return v;
		}
		#line default
		
		public override double set_dip(double v) {
			#line 422 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			return v;
		}
		#line default
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
				switch (hash) {
					case 432183022:
					{
						#line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_dip", 432183022)) );
					}
					
					
					case 432778436:
					{
						#line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_pct", 432778436)) );
					}
					
					
					case 1870155205:
					{
						#line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_px", 1870155205)) );
					}
					
					
					case 650184162:
					{
						#line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_dip", 650184162)) );
					}
					
					
					case 650779576:
					{
						#line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_pct", 650779576)) );
					}
					
					
					case 590346577:
					{
						#line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_px", 590346577)) );
					}
					
					
					default:
					{
						#line 409 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
	}
}


