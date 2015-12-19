
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.metric {
	public class Padding : global::sx.properties.metric.SizeSetterProxy {
		
		public Padding(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public Padding() : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
			#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			global::sx.properties.metric.Padding.__hx_ctor_sx_properties_metric_Padding(this);
		}
		#line default
		
		public static void __hx_ctor_sx_properties_metric_Padding(global::sx.properties.metric.Padding __temp_me153) {
			#line 54 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			__temp_me153.__batchChanges = false;
			#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			global::sx.properties.metric.SizeSetterProxy.__hx_ctor_sx_properties_metric_SizeSetterProxy(__temp_me153, null);
			#line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			__temp_me153.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me153, "__setAll", 395375039)) ));
			#line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			__temp_me153.__left = new global::sx.properties.metric.Size(((string) ("horizontal") ));
			__temp_me153.__right = new global::sx.properties.metric.Size(((string) ("horizontal") ));
			__temp_me153.__top = new global::sx.properties.metric.Size(((string) ("vertical") ));
			__temp_me153.__bottom = new global::sx.properties.metric.Size(((string) ("vertical") ));
			#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			__temp_me153.__left.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me153, "__sideChanged", 473922813)) ));
			__temp_me153.__right.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me153, "__sideChanged", 473922813)) ));
			__temp_me153.__top.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me153, "__sideChanged", 473922813)) ));
			__temp_me153.__bottom.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me153, "__sideChanged", 473922813)) ));
			#line 76 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			__temp_me153.__left.pctSource = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me153, "__ownerWidthProvider", 445827140)) );
			__temp_me153.__right.pctSource = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me153, "__ownerWidthProvider", 445827140)) );
			__temp_me153.__top.pctSource = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me153, "__ownerHeightProvider", 623350955)) );
			__temp_me153.__bottom.pctSource = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me153, "__ownerHeightProvider", 623350955)) );
			#line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			__temp_me153.onComponentsChange = new global::sx.signals.Signal<object>();
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return new global::sx.properties.metric.Padding(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return new global::sx.properties.metric.Padding();
		}
		#line default
		
		
		
		public global::sx.properties.metric.Size __left;
		
		
		
		public global::sx.properties.metric.Size __right;
		
		
		
		public global::sx.properties.metric.Size __top;
		
		
		
		public global::sx.properties.metric.Size __bottom;
		
		
		
		public global::sx.properties.metric.SizeSetterProxy __horizontal;
		
		
		
		public global::sx.properties.metric.SizeSetterProxy __vertical;
		
		public global::haxe.lang.Function ownerWidth;
		
		public global::haxe.lang.Function ownerHeight;
		
		public global::sx.signals.Signal<object> onComponentsChange;
		
		public bool __batchChanges;
		
		public virtual void __sideChanged(global::sx.properties.metric.Size changed, string previousUnits, double previousValue) {
			#line 90 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (this.__batchChanges) {
				#line 90 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				return;
			}
			
			#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			{
				#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				bool horizontal = string.Equals(changed.orientation, ((string) ("horizontal") ));
				#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				bool vertical = string.Equals(changed.orientation, ((string) ("vertical") ));
				#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				if (( ( this.onComponentsChange != null ) && ( this.onComponentsChange.__listeners.length > 0 ) )) {
					#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (this.onComponentsChange.__listenersInUse) {
						#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						{
							#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							int _g = 0;
							#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							global::Array<object> _g1 = this.onComponentsChange.__listeners;
							#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							while (( _g < _g1.length )) {
								#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
								global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
								#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
								 ++ _g;
								#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
								listener.__hx_invoke2_o(default(double), horizontal, default(double), vertical);
							}
							
						}
						
						#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						bool __temp_expr1 = false;
					}
					else {
						#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.onComponentsChange.__listenersInUse = true;
						#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						{
							#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							int _g2 = 0;
							#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							global::Array<object> _g11 = this.onComponentsChange.__listeners;
							#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							while (( _g2 < _g11.length )) {
								#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
								global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
								#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
								 ++ _g2;
								#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
								listener1.__hx_invoke2_o(default(double), horizontal, default(double), vertical);
							}
							
						}
						
						#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.onComponentsChange.__listenersInUse = false;
					}
					
				}
				
			}
			
		}
		#line default
		
		public virtual void __dimensionChanged(global::sx.properties.metric.Size changed, string units, double @value) {
			#line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.__batchChanges = true;
			#line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (string.Equals(changed.orientation, ((string) ("horizontal") ))) {
				#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				global::sx.properties.metric.Size first = this.get_left();
				#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				global::sx.properties.metric.Size second = this.get_right();
				#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				switch (units) {
					case "dip":
					{
						#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						first.set_dip(@value);
						#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						second.set_dip(@value);
						#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
					case "px":
					{
						#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						first.set_px(@value);
						#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						second.set_px(@value);
						#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
					case "pct":
					{
						#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						first.set_pct(@value);
						#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						second.set_pct(@value);
						#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
				}
				
			}
			else {
				#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				global::sx.properties.metric.Size first1 = this.get_top();
				#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				global::sx.properties.metric.Size second1 = this.get_bottom();
				#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				switch (units) {
					case "dip":
					{
						#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						first1.set_dip(@value);
						#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						second1.set_dip(@value);
						#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
					case "px":
					{
						#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						first1.set_px(@value);
						#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						second1.set_px(@value);
						#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
					case "pct":
					{
						#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						first1.set_pct(@value);
						#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						second1.set_pct(@value);
						#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
				}
				
			}
			
			#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.__batchChanges = false;
			{
				#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				bool horizontal = string.Equals(changed.orientation, ((string) ("horizontal") ));
				#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				bool vertical = string.Equals(changed.orientation, ((string) ("vertical") ));
				#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				if (( ( this.onComponentsChange != null ) && ( this.onComponentsChange.__listeners.length > 0 ) )) {
					#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					if (this.onComponentsChange.__listenersInUse) {
						#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						{
							#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							int _g = 0;
							#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							global::Array<object> _g1 = this.onComponentsChange.__listeners;
							#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							while (( _g < _g1.length )) {
								#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
								global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
								#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
								 ++ _g;
								#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
								listener.__hx_invoke2_o(default(double), horizontal, default(double), vertical);
							}
							
						}
						
						#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						bool __temp_expr1 = false;
					}
					else {
						#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.onComponentsChange.__listenersInUse = true;
						#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						{
							#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							int _g2 = 0;
							#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							global::Array<object> _g11 = this.onComponentsChange.__listeners;
							#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							while (( _g2 < _g11.length )) {
								#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
								global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
								#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
								 ++ _g2;
								#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
								listener1.__hx_invoke2_o(default(double), horizontal, default(double), vertical);
							}
							
						}
						
						#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.onComponentsChange.__listenersInUse = false;
					}
					
				}
				
			}
			
		}
		#line default
		
		public void __setDimension(global::sx.properties.metric.Size first, global::sx.properties.metric.Size second, string units, double @value) {
			#line 118 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			switch (units) {
				case "dip":
				{
					#line 120 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					first.set_dip(@value);
					second.set_dip(@value);
					#line 119 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case "px":
				{
					#line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					first.set_px(@value);
					second.set_px(@value);
					#line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case "pct":
				{
					#line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					first.set_pct(@value);
					second.set_pct(@value);
					#line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
			}
			
		}
		#line default
		
		public void __setAll(global::sx.properties.metric.Size changed, string units, double @value) {
			#line 137 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.__batchChanges = true;
			#line 139 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			switch (units) {
				case "dip":
				{
					#line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.get_left().set_dip(@value);
					this.get_right().set_dip(@value);
					this.get_top().set_dip(@value);
					this.get_bottom().set_dip(@value);
					#line 140 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case "px":
				{
					#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.get_left().set_px(@value);
					this.get_right().set_px(@value);
					this.get_top().set_px(@value);
					this.get_bottom().set_px(@value);
					#line 145 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
				case "pct":
				{
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.get_left().set_pct(@value);
					this.get_right().set_pct(@value);
					this.get_top().set_pct(@value);
					this.get_bottom().set_pct(@value);
					#line 150 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					break;
				}
				
				
			}
			
			#line 157 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			this.__batchChanges = false;
			if (( ( this.onComponentsChange != null ) && ( this.onComponentsChange.__listeners.length > 0 ) )) {
				#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				if (this.onComponentsChange.__listenersInUse) {
					#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					{
						#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						int _g = 0;
						#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						global::Array<object> _g1 = this.onComponentsChange.__listeners;
						#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						while (( _g < _g1.length )) {
							#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
							#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							 ++ _g;
							#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							listener.__hx_invoke2_o(default(double), true, default(double), true);
						}
						
					}
					
					#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					bool __temp_expr1 = false;
				}
				else {
					#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.onComponentsChange.__listenersInUse = true;
					#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					{
						#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						int _g2 = 0;
						#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						global::Array<object> _g11 = this.onComponentsChange.__listeners;
						#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						while (( _g2 < _g11.length )) {
							#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
							#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							 ++ _g2;
							#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
							listener1.__hx_invoke2_o(default(double), true, default(double), true);
						}
						
					}
					
					#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.onComponentsChange.__listenersInUse = false;
				}
				
			}
			
		}
		#line default
		
		public void __invokeOnComponentsChange(bool horizontal, bool vertical) {
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( this.onComponentsChange != null ) && ( this.onComponentsChange.__listeners.length > 0 ) )) {
				#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (this.onComponentsChange.__listenersInUse) {
					#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g1 = this.onComponentsChange.__listeners;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g < _g1.length )) {
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener.__hx_invoke2_o(default(double), horizontal, default(double), vertical);
						}
						
					}
					
					#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					bool __temp_expr1 = false;
				}
				else {
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.onComponentsChange.__listenersInUse = true;
					{
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g11 = this.onComponentsChange.__listeners;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g2 < _g11.length )) {
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g2;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener1.__hx_invoke2_o(default(double), horizontal, default(double), vertical);
						}
						
					}
					
					#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.onComponentsChange.__listenersInUse = false;
				}
				
			}
			
		}
		#line default
		
		public virtual global::sx.properties.metric.Size __ownerWidthProvider() {
			#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (( this.ownerWidth == null )) {
				#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				return global::sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
			}
			else {
				#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				return ((global::sx.properties.metric.Size) (this.ownerWidth.__hx_invoke0_o()) );
			}
			
		}
		#line default
		
		public virtual global::sx.properties.metric.Size __ownerHeightProvider() {
			#line 185 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (( this.ownerHeight == null )) {
				#line 185 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				return global::sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
			}
			else {
				#line 185 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				return ((global::sx.properties.metric.Size) (this.ownerHeight.__hx_invoke0_o()) );
			}
			
		}
		#line default
		
		public override void __constraintChanged(global::sx.properties.metric.Size constraint, string previousUnits, double previousValue) {
			#line 194 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			base.__constraintChanged(constraint, previousUnits, previousValue);
			#line 196 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (( constraint == this.__min )) {
				#line 197 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				if (( this.__horizontal != null )) {
					#line 198 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.__horizontal.set_min(constraint);
				}
				else {
					#line 200 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.get_left().set_min(constraint);
					this.get_right().set_min(constraint);
				}
				
				#line 204 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				if (( this.__vertical != null )) {
					#line 205 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.__vertical.set_min(constraint);
				}
				else {
					#line 207 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.get_top().set_min(constraint);
					this.get_bottom().set_min(constraint);
				}
				
			}
			else if (( constraint == this.__max )) {
				#line 212 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				if (( this.__horizontal != null )) {
					#line 213 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.__horizontal.set_max(constraint);
				}
				else {
					#line 215 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.get_left().set_max(constraint);
					this.get_right().set_max(constraint);
				}
				
				#line 219 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				if (( this.__vertical != null )) {
					#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.__vertical.set_max(constraint);
				}
				else {
					#line 222 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.get_top().set_max(constraint);
					this.get_bottom().set_max(constraint);
				}
				
			}
			
		}
		#line default
		
		public virtual void __verticalConstraintChanged(global::sx.properties.metric.Size constraint, string previousUnits, double previousValue) {
			#line 234 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			bool __temp_stmt1 = default(bool);
			#line 234 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			{
				#line 234 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				global::sx.properties.metric.Size b = this.__vertical.get_max();
				#line 234 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				__temp_stmt1 = ( constraint.get_dip() == b.get_dip() );
			}
			
			#line 234 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (__temp_stmt1) {
				#line 235 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.get_top().set_max(constraint);
				this.get_bottom().set_max(constraint);
			}
			else {
				#line 237 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				bool __temp_stmt2 = default(bool);
				#line 237 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				{
					#line 237 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					global::sx.properties.metric.Size b1 = this.__vertical.get_min();
					#line 237 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					__temp_stmt2 = ( constraint.get_dip() == b1.get_dip() );
				}
				
				#line 237 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				if (__temp_stmt2) {
					#line 238 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.get_top().set_min(constraint);
					this.get_bottom().set_min(constraint);
				}
				
			}
			
		}
		#line default
		
		public virtual void __horizontalConstraintChanged(global::sx.properties.metric.Size constraint, string previousUnits, double previousValue) {
			#line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			bool __temp_stmt1 = default(bool);
			#line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			{
				#line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				global::sx.properties.metric.Size b = this.__horizontal.get_max();
				#line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				__temp_stmt1 = ( constraint.get_dip() == b.get_dip() );
			}
			
			#line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (__temp_stmt1) {
				#line 250 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.get_left().set_max(constraint);
				this.get_right().set_max(constraint);
			}
			else {
				#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				bool __temp_stmt2 = default(bool);
				#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				{
					#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					global::sx.properties.metric.Size b1 = this.__horizontal.get_min();
					#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					__temp_stmt2 = ( constraint.get_dip() == b1.get_dip() );
				}
				
				#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				if (__temp_stmt2) {
					#line 253 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
					this.get_left().set_min(constraint);
					this.get_right().set_min(constraint);
				}
				
			}
			
		}
		#line default
		
		public virtual global::sx.properties.metric.SizeSetterProxy get_horizontal() {
			#line 264 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (( this.__horizontal == null )) {
				#line 265 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.__horizontal = new global::sx.properties.metric.SizeSetterProxy(((string) ("horizontal") ));
				this.__horizontal.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__dimensionChanged", 1702955342)) ));
				this.__horizontal.get_min().onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__horizontalConstraintChanged", 452743539)) ));
				this.__horizontal.get_max().onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__horizontalConstraintChanged", 452743539)) ));
			}
			
			#line 271 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return this.__horizontal;
		}
		#line default
		
		public virtual global::sx.properties.metric.SizeSetterProxy get_vertical() {
			#line 280 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			if (( this.__vertical == null )) {
				#line 281 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				this.__vertical = new global::sx.properties.metric.SizeSetterProxy(((string) ("vertical") ));
				this.__vertical.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__dimensionChanged", 1702955342)) ));
				this.__vertical.get_min().onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__verticalConstraintChanged", 335934881)) ));
				this.__vertical.get_max().onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__verticalConstraintChanged", 335934881)) ));
			}
			
			#line 287 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return this.__vertical;
		}
		#line default
		
		public virtual global::sx.properties.metric.SizeSetterProxy set_horizontal(global::sx.properties.metric.SizeSetterProxy @value) {
			#line 296 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			global::sx.properties.metric.SizeSetterProxy proxy = this.get_horizontal();
			proxy.copyValueFrom(@value);
			#line 299 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return proxy;
		}
		#line default
		
		public virtual global::sx.properties.metric.SizeSetterProxy set_vertical(global::sx.properties.metric.SizeSetterProxy @value) {
			#line 308 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			global::sx.properties.metric.SizeSetterProxy proxy = this.get_vertical();
			proxy.copyValueFrom(@value);
			#line 311 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return proxy;
		}
		#line default
		
		public override string toString() {
			#line 320 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("{ left : ", global::Std.@string(this.get_left())), ", top : "), global::Std.@string(this.get_top())), ", right : "), global::Std.@string(this.get_right())), ", bottom : "), global::Std.@string(this.get_bottom())), " }");
		}
		#line default
		
		public virtual global::sx.properties.metric.Size get_left() {
			#line 325 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return this.__left;
		}
		#line default
		
		public virtual global::sx.properties.metric.Size get_right() {
			#line 326 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return this.__right;
		}
		#line default
		
		public virtual global::sx.properties.metric.Size get_top() {
			#line 327 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return this.__top;
		}
		#line default
		
		public virtual global::sx.properties.metric.Size get_bottom() {
			#line 328 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return this.__bottom;
		}
		#line default
		
		public virtual global::sx.properties.metric.Size set_left(global::sx.properties.metric.Size v) {
			#line 331 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return this.__left.copyValueFrom(v);
		}
		#line default
		
		public virtual global::sx.properties.metric.Size set_right(global::sx.properties.metric.Size v) {
			#line 332 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return this.__right.copyValueFrom(v);
		}
		#line default
		
		public virtual global::sx.properties.metric.Size set_top(global::sx.properties.metric.Size v) {
			#line 333 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return this.__top.copyValueFrom(v);
		}
		#line default
		
		public virtual global::sx.properties.metric.Size set_bottom(global::sx.properties.metric.Size v) {
			#line 334 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			return this.__bottom.copyValueFrom(v);
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				switch (hash) {
					case 738541449:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__batchChanges = global::haxe.lang.Runtime.toBool(@value);
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					case 1216830053:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.onComponentsChange = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					case 857717882:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.ownerHeight = ((global::haxe.lang.Function) (@value) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					case 1550185683:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.ownerWidth = ((global::haxe.lang.Function) (@value) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					case 223227798:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__vertical = ((global::sx.properties.metric.SizeSetterProxy) (@value) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					case 1779809398:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.set_vertical(((global::sx.properties.metric.SizeSetterProxy) (@value) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					case 1314355204:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__horizontal = ((global::sx.properties.metric.SizeSetterProxy) (@value) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					case 365165796:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.set_horizontal(((global::sx.properties.metric.SizeSetterProxy) (@value) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					case 229134859:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__bottom = ((global::sx.properties.metric.Size) (@value) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					case 1702422251:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.set_bottom(((global::sx.properties.metric.Size) (@value) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					case 1916061557:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__top = ((global::sx.properties.metric.Size) (@value) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					case 5793429:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.set_top(((global::sx.properties.metric.Size) (@value) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					case 1405248700:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__right = ((global::sx.properties.metric.Size) (@value) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					case 1768164316:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.set_right(((global::sx.properties.metric.Size) (@value) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					case 1990748967:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__left = ((global::sx.properties.metric.Size) (@value) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					case 1202718727:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.set_left(((global::sx.properties.metric.Size) (@value) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return @value;
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				switch (hash) {
					case 1501426984:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_bottom", 1501426984)) );
					}
					
					
					case 432980024:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_top", 432980024)) );
					}
					
					
					case 274617407:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_right", 274617407)) );
					}
					
					
					case 1976048900:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_left", 1976048900)) );
					}
					
					
					case 1442862772:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_bottom", 1442862772)) );
					}
					
					
					case 650981164:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_top", 650981164)) );
					}
					
					
					case 755853363:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_right", 755853363)) );
					}
					
					
					case 1198179216:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_left", 1198179216)) );
					}
					
					
					case 946786476:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "toString", 946786476)) );
					}
					
					
					case 875074547:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_vertical", 875074547)) );
					}
					
					
					case 735669665:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_horizontal", 735669665)) );
					}
					
					
					case 523202687:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_vertical", 523202687)) );
					}
					
					
					case 196707629:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_horizontal", 196707629)) );
					}
					
					
					case 452743539:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__horizontalConstraintChanged", 452743539)) );
					}
					
					
					case 335934881:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__verticalConstraintChanged", 335934881)) );
					}
					
					
					case 1796568823:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__constraintChanged", 1796568823)) );
					}
					
					
					case 623350955:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__ownerHeightProvider", 623350955)) );
					}
					
					
					case 445827140:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__ownerWidthProvider", 445827140)) );
					}
					
					
					case 2138957597:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__invokeOnComponentsChange", 2138957597)) );
					}
					
					
					case 395375039:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__setAll", 395375039)) );
					}
					
					
					case 1512341124:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__setDimension", 1512341124)) );
					}
					
					
					case 1702955342:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__dimensionChanged", 1702955342)) );
					}
					
					
					case 473922813:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__sideChanged", 473922813)) );
					}
					
					
					case 738541449:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__batchChanges;
					}
					
					
					case 1216830053:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.onComponentsChange;
					}
					
					
					case 857717882:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.ownerHeight;
					}
					
					
					case 1550185683:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.ownerWidth;
					}
					
					
					case 223227798:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__vertical;
					}
					
					
					case 1779809398:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_vertical();
					}
					
					
					case 1314355204:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__horizontal;
					}
					
					
					case 365165796:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_horizontal();
					}
					
					
					case 229134859:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__bottom;
					}
					
					
					case 1702422251:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_bottom();
					}
					
					
					case 1916061557:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__top;
					}
					
					
					case 5793429:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_top();
					}
					
					
					case 1405248700:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__right;
					}
					
					
					case 1768164316:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_right();
					}
					
					
					case 1990748967:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__left;
					}
					
					
					case 1202718727:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_left();
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				switch (hash) {
					case 1796568823:
					case 946786476:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return global::haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					
					case 1501426984:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.set_bottom(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 432980024:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.set_top(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 274617407:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.set_right(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 1976048900:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.set_left(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 1442862772:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_bottom();
					}
					
					
					case 650981164:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_top();
					}
					
					
					case 755853363:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_right();
					}
					
					
					case 1198179216:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_left();
					}
					
					
					case 875074547:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.set_vertical(((global::sx.properties.metric.SizeSetterProxy) (dynargs[0]) ));
					}
					
					
					case 735669665:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.set_horizontal(((global::sx.properties.metric.SizeSetterProxy) (dynargs[0]) ));
					}
					
					
					case 523202687:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_vertical();
					}
					
					
					case 196707629:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.get_horizontal();
					}
					
					
					case 452743539:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__horizontalConstraintChanged(((global::sx.properties.metric.Size) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[2])) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
					case 335934881:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__verticalConstraintChanged(((global::sx.properties.metric.Size) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[2])) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
					case 623350955:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__ownerHeightProvider();
					}
					
					
					case 445827140:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return this.__ownerWidthProvider();
					}
					
					
					case 2138957597:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__invokeOnComponentsChange(global::haxe.lang.Runtime.toBool(dynargs[0]), global::haxe.lang.Runtime.toBool(dynargs[1]));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
					case 395375039:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__setAll(((global::sx.properties.metric.Size) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[2])) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
					case 1512341124:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__setDimension(((global::sx.properties.metric.Size) (dynargs[0]) ), ((global::sx.properties.metric.Size) (dynargs[1]) ), global::haxe.lang.Runtime.toString(dynargs[2]), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[3])) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
					case 1702955342:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__dimensionChanged(((global::sx.properties.metric.Size) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[2])) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
					case 473922813:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						this.__sideChanged(((global::sx.properties.metric.Size) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[2])) ));
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						break;
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("__batchChanges");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("onComponentsChange");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("ownerHeight");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("ownerWidth");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("__vertical");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("vertical");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("__horizontal");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("horizontal");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("__bottom");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("bottom");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("__top");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("top");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("__right");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("right");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("__left");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			baseArr.push("left");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
			{
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


