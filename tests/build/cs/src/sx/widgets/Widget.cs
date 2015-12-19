
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.widgets {
	public class Widget : global::haxe.lang.HxObject {
		
		static Widget() {
			#line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			global::sx.widgets.Widget.MAX_RESIZE_DEPTH = 5;
		}
		#line default
		
		public Widget(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Widget() {
			#line 227 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			global::sx.widgets.Widget.__hx_ctor_sx_widgets_Widget(this);
		}
		#line default
		
		public static void __hx_ctor_sx_widgets_Widget(global::sx.widgets.Widget __temp_me10) {
			#line 221 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.__resizeCounter = 0;
			#line 216 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.__listeningParentResize = false;
			#line 161 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.disposed = false;
			#line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.initialized = false;
			#line 144 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.style = "__DEFAULT__";
			#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.enabled = true;
			#line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.arrangeable = true;
			#line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.overflow = true;
			#line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.visible = true;
			#line 98 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.alpha = ((double) (((int) (1) )) );
			#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.rotation = ((double) (((int) (0) )) );
			#line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.scaleY = ((double) (((int) (1) )) );
			#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.scaleX = ((double) (((int) (1) )) );
			#line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.numChildren = 0;
			#line 229 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.__createBackend();
			#line 231 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.__width = new global::sx.properties.metric.Size(((string) ("horizontal") ));
			__temp_me10.__width.pctSource = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "__parentWidthProvider", 273928877)) );
			__temp_me10.__width.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "__propertyResized", 750735611)) ));
			#line 235 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.__height = new global::sx.properties.metric.Size(((string) ("vertical") ));
			__temp_me10.__height.pctSource = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "__parentHeightProvider", 944743970)) );
			__temp_me10.__height.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "__propertyResized", 750735611)) ));
			#line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.__left = new global::sx.properties.metric.Coordinate(((string) ("horizontal") ));
			__temp_me10.__left.pctSource = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "__parentWidthProvider", 273928877)) );
			__temp_me10.__left.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "__propertyMoved", 1583208574)) ));
			#line 243 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.__right = new global::sx.properties.metric.Coordinate(((string) ("horizontal") ));
			__temp_me10.__right.pctSource = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "__parentWidthProvider", 273928877)) );
			__temp_me10.__right.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "__propertyMoved", 1583208574)) ));
			#line 247 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.__top = new global::sx.properties.metric.Coordinate(((string) ("vertical") ));
			__temp_me10.__top.pctSource = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "__parentHeightProvider", 944743970)) );
			__temp_me10.__top.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "__propertyMoved", 1583208574)) ));
			#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.__bottom = new global::sx.properties.metric.Coordinate(((string) ("vertical") ));
			__temp_me10.__bottom.pctSource = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "__parentHeightProvider", 944743970)) );
			__temp_me10.__bottom.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "__propertyMoved", 1583208574)) ));
			#line 255 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_me10.__left.pair = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "get_right", 755853363)) );
			__temp_me10.__right.pair = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "get_left", 1198179216)) );
			__temp_me10.__top.pair = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "get_bottom", 1442862772)) );
			__temp_me10.__bottom.pair = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "get_top", 650981164)) );
			__temp_me10.__left.ownerSize = __temp_me10.__right.ownerSize = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "get_width", 235672157)) );
			__temp_me10.__top.ownerSize = __temp_me10.__bottom.ownerSize = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me10, "get_height", 1926461360)) );
			#line 262 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			{
				#line 262 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				global::sx.properties.metric.Coordinate _this = __temp_me10.__left;
				#line 262 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if ( ! (_this.selected) ) {
					#line 262 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					_this.selected = true;
					#line 262 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					((global::sx.properties.metric.Coordinate) (_this.pair.__hx_invoke0_o()) ).selected = false;
				}
				
			}
			
			#line 263 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			{
				#line 263 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				global::sx.properties.metric.Coordinate _this1 = __temp_me10.__top;
				#line 263 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if ( ! (_this1.selected) ) {
					#line 263 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					_this1.selected = true;
					#line 263 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					((global::sx.properties.metric.Coordinate) (_this1.pair.__hx_invoke0_o()) ).selected = false;
				}
				
			}
			
		}
		#line default
		
		public static int MAX_RESIZE_DEPTH;
		
		public static new object __hx_createEmpty() {
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return new global::sx.widgets.Widget(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return new global::sx.widgets.Widget();
		}
		#line default
		
		public string name;
		
		
		
		public global::sx.widgets.Widget __parent;
		
		public int numChildren;
		
		
		
		public global::sx.properties.metric.Coordinate __left;
		
		
		
		public global::sx.properties.metric.Coordinate __right;
		
		
		
		public global::sx.properties.metric.Coordinate __top;
		
		
		
		public global::sx.properties.metric.Coordinate __bottom;
		
		
		
		public global::sx.properties.metric.Offset __origin;
		
		
		
		public global::sx.properties.metric.Offset __offset;
		
		
		
		public global::sx.properties.metric.Size __width;
		
		
		
		public global::sx.properties.metric.Size __height;
		
		public double scaleX;
		
		public double scaleY;
		
		public double rotation;
		
		public double alpha;
		
		public bool visible;
		
		public bool overflow;
		
		
		
		public global::sx.skins.@base.SkinBase __skin;
		
		
		
		public global::sx.layout.Layout __layout;
		
		public bool arrangeable;
		
		public bool enabled;
		
		public string style;
		
		public global::sx.backend.dummy.Backend backend;
		
		public bool initialized;
		
		public bool disposed;
		
		
		
		public global::sx.tween.Tweener __tween;
		
		
		
		public global::sx.signals.Signal<object> __onResize;
		
		
		
		public global::sx.signals.Signal<object> __onMove;
		
		
		
		public global::sx.signals.Signal<object> __onChildAdded;
		
		
		
		public global::sx.signals.Signal<object> __onChildRemoved;
		
		
		
		public global::sx.signals.Signal<object> __onParentChanged;
		
		
		
		public global::sx.signals.Signal<object> __onEnable;
		
		
		
		public global::sx.signals.Signal<object> __onDisable;
		
		
		
		public global::sx.signals.Signal<object> __onPointerPress;
		
		
		
		public global::sx.signals.Signal<object> __onPointerRelease;
		
		
		
		public global::sx.signals.Signal<object> __onPointerTap;
		
		
		
		
		
		public global::sx.signals.Signal<object> __onPointerMove;
		
		
		
		public global::sx.signals.Signal<object> __onPointerOver;
		
		
		
		public global::sx.signals.Signal<object> __onPointerOut;
		
		
		
		public global::sx.signals.Signal<object> __onInitialize;
		
		
		
		public global::sx.signals.Signal<object> __onDispose;
		
		public bool __listeningParentResize;
		
		public int __resizeCounter;
		
		public virtual void initialize() {
			#line 272 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.initialized) {
				#line 272 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return;
			}
			
			#line 274 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (string.Equals(this.style, "__DEFAULT__")) {
				#line 275 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if ((  ! (string.Equals(this.style, null))  && ( global::sx.Sx.theme != null ) )) {
					#line 275 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					global::sx.Sx.theme.apply(this);
				}
				
			}
			
			#line 278 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.initialized = true;
			#line 280 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__initializeSelf();
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( this.__onInitialize != null ) && ( this.__onInitialize.__listeners.length > 0 ) )) {
				#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (this.__onInitialize.__listenersInUse) {
					#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g1 = this.__onInitialize.__listeners;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g < _g1.length )) {
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener.__hx_invoke1_o(default(double), this);
						}
						
					}
					
					#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					bool __temp_expr1 = false;
				}
				else {
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__onInitialize.__listenersInUse = true;
					{
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g11 = this.__onInitialize.__listeners;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g2 < _g11.length )) {
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g2;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener1.__hx_invoke1_o(default(double), this);
						}
						
					}
					
					#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__onInitialize.__listenersInUse = false;
				}
				
			}
			
			#line 282 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__initializeChildren();
		}
		#line default
		
		public virtual global::sx.widgets.Widget addChild(global::sx.widgets.Widget child) {
			#line 293 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( child.get_parent() != null )) {
				#line 293 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child.get_parent().removeChild(child);
			}
			
			#line 295 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.addWidget(child);
			this.numChildren++;
			{
				#line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( child.__listeningParentResize && ( child.get_parent() != null ) )) {
					#line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					child.__listeningParentResize = false;
					#line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					child.get_parent().get_onResize().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(child, "__parentResized", 1966739654)) ));
				}
				
				#line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child.__parent = this;
				#line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( child.__parent != null )) {
					#line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					child.__updateParentResizeListener();
					#line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( child.__parent.initialized &&  ! (child.initialized)  )) {
						#line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						child.initialize();
					}
					
				}
				
				#line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				global::sx.widgets.Widget __temp_expr1 = this;
			}
			
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( this.__onChildAdded != null ) && ( this.__onChildAdded.__listeners.length > 0 ) )) {
				#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (this.__onChildAdded.__listenersInUse) {
					#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g1 = this.__onChildAdded.__listeners;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g < _g1.length )) {
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener.__hx_invoke2_o(default(double), this, default(double), child);
						}
						
					}
					
					#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					bool __temp_expr2 = false;
				}
				else {
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__onChildAdded.__listenersInUse = true;
					{
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g11 = this.__onChildAdded.__listeners;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g2 < _g11.length )) {
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g2;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener1.__hx_invoke2_o(default(double), this, default(double), child);
						}
						
					}
					
					#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__onChildAdded.__listenersInUse = false;
				}
				
			}
			
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( child.__onParentChanged != null ) && ( child.__onParentChanged.__listeners.length > 0 ) )) {
				#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (child.__onParentChanged.__listenersInUse) {
					#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g3 = 0;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g12 = child.__onParentChanged.__listeners;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g3 < _g12.length )) {
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener2 = ((global::haxe.lang.Function) (_g12[_g3]) );
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g3;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener2.__hx_invoke2_o(default(double), this, default(double), child);
						}
						
					}
					
					#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					bool __temp_expr3 = false;
				}
				else {
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					child.__onParentChanged.__listenersInUse = true;
					{
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g4 = 0;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g13 = child.__onParentChanged.__listeners;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g4 < _g13.length )) {
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener3 = ((global::haxe.lang.Function) (_g13[_g4]) );
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g4;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener3.__hx_invoke2_o(default(double), this, default(double), child);
						}
						
					}
					
					#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					child.__onParentChanged.__listenersInUse = false;
				}
				
			}
			
			#line 302 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return child;
		}
		#line default
		
		public virtual global::sx.widgets.Widget addChildAt(global::sx.widgets.Widget child, int index) {
			#line 317 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( child.get_parent() != null )) {
				#line 317 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child.get_parent().removeChild(child);
			}
			
			#line 319 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.addWidgetAt(child, index);
			this.numChildren++;
			{
				#line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( child.__listeningParentResize && ( child.get_parent() != null ) )) {
					#line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					child.__listeningParentResize = false;
					#line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					child.get_parent().get_onResize().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(child, "__parentResized", 1966739654)) ));
				}
				
				#line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child.__parent = this;
				#line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( child.__parent != null )) {
					#line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					child.__updateParentResizeListener();
					#line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( child.__parent.initialized &&  ! (child.initialized)  )) {
						#line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						child.initialize();
					}
					
				}
				
				#line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				global::sx.widgets.Widget __temp_expr1 = this;
			}
			
			#line 323 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( ( this.__onChildAdded != null ) || ( child.__onParentChanged != null ) )) {
				#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (( ( this.__onChildAdded != null ) && ( this.__onChildAdded.__listeners.length > 0 ) )) {
					#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (this.__onChildAdded.__listenersInUse) {
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						{
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g = 0;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g1 = this.__onChildAdded.__listeners;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g < _g1.length )) {
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g;
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener.__hx_invoke2_o(default(double), this, default(double), child);
							}
							
						}
						
						#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						bool __temp_expr2 = false;
					}
					else {
						#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__onChildAdded.__listenersInUse = true;
						{
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g2 = 0;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g11 = this.__onChildAdded.__listeners;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g2 < _g11.length )) {
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g2;
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener1.__hx_invoke2_o(default(double), this, default(double), child);
							}
							
						}
						
						#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__onChildAdded.__listenersInUse = false;
					}
					
				}
				
				#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (( ( child.__onParentChanged != null ) && ( child.__onParentChanged.__listeners.length > 0 ) )) {
					#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (child.__onParentChanged.__listenersInUse) {
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						{
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g3 = 0;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g12 = child.__onParentChanged.__listeners;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g3 < _g12.length )) {
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener2 = ((global::haxe.lang.Function) (_g12[_g3]) );
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g3;
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener2.__hx_invoke2_o(default(double), this, default(double), child);
							}
							
						}
						
						#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						bool __temp_expr3 = false;
					}
					else {
						#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						child.__onParentChanged.__listenersInUse = true;
						{
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g4 = 0;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g13 = child.__onParentChanged.__listeners;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g4 < _g13.length )) {
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener3 = ((global::haxe.lang.Function) (_g13[_g4]) );
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g4;
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener3.__hx_invoke2_o(default(double), this, default(double), child);
							}
							
						}
						
						#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						child.__onParentChanged.__listenersInUse = false;
					}
					
				}
				
			}
			
			#line 328 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return child;
		}
		#line default
		
		public virtual global::sx.widgets.Widget removeChild(global::sx.widgets.Widget child) {
			#line 340 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( child.get_parent() == this )) {
				#line 341 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.removeWidget(child);
				this.numChildren--;
				{
					#line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( child.__listeningParentResize && ( child.get_parent() != null ) )) {
						#line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						child.__listeningParentResize = false;
						#line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						child.get_parent().get_onResize().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(child, "__parentResized", 1966739654)) ));
					}
					
					#line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					child.__parent = null;
					#line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( child.__parent != null )) {
						#line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						child.__updateParentResizeListener();
						#line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (( child.__parent.initialized &&  ! (child.initialized)  )) {
							#line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							child.initialize();
						}
						
					}
					
					#line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					global::sx.widgets.Widget __temp_expr1 = null;
				}
				
				#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (( ( this.__onChildRemoved != null ) && ( this.__onChildRemoved.__listeners.length > 0 ) )) {
					#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (this.__onChildRemoved.__listenersInUse) {
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						{
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g = 0;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g1 = this.__onChildRemoved.__listeners;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g < _g1.length )) {
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g;
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener.__hx_invoke2_o(default(double), this, default(double), child);
							}
							
						}
						
						#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						bool __temp_expr2 = false;
					}
					else {
						#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__onChildRemoved.__listenersInUse = true;
						{
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g2 = 0;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g11 = this.__onChildRemoved.__listeners;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g2 < _g11.length )) {
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g2;
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener1.__hx_invoke2_o(default(double), this, default(double), child);
							}
							
						}
						
						#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__onChildRemoved.__listenersInUse = false;
					}
					
				}
				
				#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (( ( child.__onParentChanged != null ) && ( child.__onParentChanged.__listeners.length > 0 ) )) {
					#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (child.__onParentChanged.__listenersInUse) {
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						{
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g3 = 0;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g12 = child.__onParentChanged.__listeners;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g3 < _g12.length )) {
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener2 = ((global::haxe.lang.Function) (_g12[_g3]) );
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g3;
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener2.__hx_invoke2_o(default(double), null, default(double), child);
							}
							
						}
						
						#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						bool __temp_expr3 = false;
					}
					else {
						#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						child.__onParentChanged.__listenersInUse = true;
						{
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g4 = 0;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g13 = child.__onParentChanged.__listeners;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g4 < _g13.length )) {
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener3 = ((global::haxe.lang.Function) (_g13[_g4]) );
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g4;
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener3.__hx_invoke2_o(default(double), null, default(double), child);
							}
							
						}
						
						#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						child.__onParentChanged.__listenersInUse = false;
					}
					
				}
				
				#line 348 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return child;
			}
			else {
				#line 350 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return null;
			}
			
		}
		#line default
		
		public virtual global::sx.widgets.Widget removeChildAt(int index) {
			#line 364 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			global::sx.widgets.Widget removed = this.backend.removeWidgetAt(index);
			if (( removed != null )) {
				#line 366 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.numChildren--;
				{
					#line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( removed.__listeningParentResize && ( removed.get_parent() != null ) )) {
						#line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						removed.__listeningParentResize = false;
						#line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						removed.get_parent().get_onResize().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(removed, "__parentResized", 1966739654)) ));
					}
					
					#line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					removed.__parent = null;
					#line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( removed.__parent != null )) {
						#line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						removed.__updateParentResizeListener();
						#line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (( removed.__parent.initialized &&  ! (removed.initialized)  )) {
							#line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							removed.initialize();
						}
						
					}
					
					#line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					global::sx.widgets.Widget __temp_expr1 = null;
				}
				
				#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (( ( this.__onChildRemoved != null ) && ( this.__onChildRemoved.__listeners.length > 0 ) )) {
					#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (this.__onChildRemoved.__listenersInUse) {
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						{
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g = 0;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g1 = this.__onChildRemoved.__listeners;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g < _g1.length )) {
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g;
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener.__hx_invoke2_o(default(double), this, default(double), removed);
							}
							
						}
						
						#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						bool __temp_expr2 = false;
					}
					else {
						#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__onChildRemoved.__listenersInUse = true;
						{
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g2 = 0;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g11 = this.__onChildRemoved.__listeners;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g2 < _g11.length )) {
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g2;
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener1.__hx_invoke2_o(default(double), this, default(double), removed);
							}
							
						}
						
						#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__onChildRemoved.__listenersInUse = false;
					}
					
				}
				
				#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (( ( removed.__onParentChanged != null ) && ( removed.__onParentChanged.__listeners.length > 0 ) )) {
					#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (removed.__onParentChanged.__listenersInUse) {
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						{
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g3 = 0;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g12 = removed.__onParentChanged.__listeners;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g3 < _g12.length )) {
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener2 = ((global::haxe.lang.Function) (_g12[_g3]) );
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g3;
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener2.__hx_invoke2_o(default(double), null, default(double), removed);
							}
							
						}
						
						#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						bool __temp_expr3 = false;
					}
					else {
						#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						removed.__onParentChanged.__listenersInUse = true;
						{
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g4 = 0;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g13 = removed.__onParentChanged.__listeners;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g4 < _g13.length )) {
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener3 = ((global::haxe.lang.Function) (_g13[_g4]) );
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g4;
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener3.__hx_invoke2_o(default(double), null, default(double), removed);
							}
							
						}
						
						#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						removed.__onParentChanged.__listenersInUse = false;
					}
					
				}
				
			}
			
			#line 373 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return removed;
		}
		#line default
		
		public virtual int removeChildren(global::haxe.lang.Null<int> beginIndex, global::haxe.lang.Null<int> endIndex) {
			unchecked {
				#line 385 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				int __temp_endIndex8 = ( ( ! (endIndex.hasValue) ) ? (-1) : ((endIndex).@value) );
				#line 385 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				int __temp_beginIndex7 = ( ( ! (beginIndex.hasValue) ) ? (0) : ((beginIndex).@value) );
				if (( __temp_beginIndex7 < 0 )) {
					#line 386 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					__temp_beginIndex7 = ( this.numChildren + __temp_beginIndex7 );
				}
				
				#line 387 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( __temp_beginIndex7 < 0 )) {
					#line 387 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					__temp_beginIndex7 = 0;
				}
				
				#line 388 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( __temp_endIndex8 < 0 )) {
					#line 389 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					__temp_endIndex8 = ( this.numChildren + __temp_endIndex8 );
				}
				else if (( __temp_endIndex8 >= this.numChildren )) {
					#line 391 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					__temp_endIndex8 = ( this.numChildren - 1 );
				}
				
				#line 394 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( __temp_beginIndex7 >= this.numChildren ) || ( __temp_endIndex8 < __temp_beginIndex7 ) )) {
					#line 394 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					return 0;
				}
				
				#line 396 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				int removed = ( ( __temp_endIndex8 - __temp_beginIndex7 ) + 1 );
				while (( __temp_beginIndex7 <= __temp_endIndex8 )) {
					#line 398 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.removeChildAt(__temp_beginIndex7);
					__temp_endIndex8--;
				}
				
				#line 402 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return removed;
			}
			#line default
		}
		
		
		public virtual bool contains(global::sx.widgets.Widget child) {
			#line 411 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			while (( child != null )) {
				#line 412 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( child == this )) {
					#line 412 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					return true;
				}
				
				#line 413 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child = child.get_parent();
			}
			
			#line 416 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return false;
		}
		#line default
		
		public virtual int getChildIndex(global::sx.widgets.Widget child) {
			unchecked {
				#line 427 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( child.get_parent() != this )) {
					#line 427 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.NotChildException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"getChildIndex", "sx.widgets.Widget", "Widget.hx"}, new int[]{1981972957}, new double[]{((double) (427) )})));
				}
				
				#line 429 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.backend.getWidgetIndex(child);
			}
			#line default
		}
		
		
		public virtual int setChildIndex(global::sx.widgets.Widget child, int index) {
			unchecked {
				#line 446 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( child.get_parent() != this )) {
					#line 446 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.NotChildException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"setChildIndex", "sx.widgets.Widget", "Widget.hx"}, new int[]{1981972957}, new double[]{((double) (446) )})));
				}
				
				#line 448 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.backend.setWidgetIndex(child, index);
			}
			#line default
		}
		
		
		public virtual global::sx.widgets.Widget getChildAt(int index) {
			#line 461 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.backend.getWidgetAt(index);
		}
		#line default
		
		public virtual void swapChildren(global::sx.widgets.Widget child1, global::sx.widgets.Widget child2) {
			unchecked {
				#line 472 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( child1.get_parent() != this ) || ( child2.get_parent() != this ) )) {
					#line 472 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.NotChildException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"swapChildren", "sx.widgets.Widget", "Widget.hx"}, new int[]{1981972957}, new double[]{((double) (472) )})));
				}
				
				#line 473 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.swapWidgets(child1, child2);
			}
			#line default
		}
		
		
		public virtual void swapChildrenAt(int index1, int index2) {
			unchecked {
				#line 486 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( index1 < 0 )) {
					#line 486 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					index1 += this.numChildren;
				}
				
				#line 487 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( index2 < 0 )) {
					#line 487 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					index2 += this.numChildren;
				}
				
				#line 489 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( ( ( index1 < 0 ) || ( index1 >= this.numChildren ) ) || ( index2 < 0 ) ) || ( index2 > this.numChildren ) )) {
					#line 490 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.OutOfBoundsException("Provided index does not exist in display list of this widget.", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"swapChildrenAt", "sx.widgets.Widget", "Widget.hx"}, new int[]{1981972957}, new double[]{((double) (490) )})));
				}
				
				#line 493 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.swapWidgetsAt(index1, index2);
			}
			#line default
		}
		
		
		public virtual global::sx.widgets.Widget getChild(string name) {
			#line 502 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			global::sx.widgets.Widget child = null;
			{
				#line 503 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				int _g1 = 0;
				#line 503 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				int _g = this.numChildren;
				#line 503 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				while (( _g1 < _g )) {
					#line 503 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					int i = _g1++;
					child = this.getChildAt(i);
					if (string.Equals(child.name, name)) {
						#line 506 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return child;
					}
					
					#line 509 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					child = child.getChild(name);
					if (( child != null )) {
						#line 511 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return child;
					}
					
				}
				
			}
			
			#line 515 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return null;
		}
		#line default
		
		public virtual global::haxe.lang.Null<T> getChildAs<T>(string name, global::System.Type cls) {
			#line 526 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			global::sx.widgets.Widget child = null;
			{
				#line 527 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				int _g1 = 0;
				#line 527 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				int _g = this.numChildren;
				#line 527 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				while (( _g1 < _g )) {
					#line 527 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					int i = _g1++;
					child = this.getChildAt(i);
					if (( string.Equals(child.name, name) && global::Std.@is(child, cls) )) {
						#line 530 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return new global::haxe.lang.Null<T>(global::haxe.lang.Runtime.genericCast<T>(((object) (child) )), true);
					}
					
					#line 533 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					child = ((global::sx.widgets.Widget) (((object) ((child.getChildAs<T>(name, cls)).@value) )) );
					if (( child != null )) {
						#line 535 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return new global::haxe.lang.Null<T>(global::haxe.lang.Runtime.genericCast<T>(((object) (child) )), true);
					}
					
				}
				
			}
			
			#line 539 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return default(global::haxe.lang.Null<T>);
		}
		#line default
		
		public virtual global::sx.widgets.Widget getDirectChild(string name) {
			#line 548 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			global::sx.widgets.Widget child = null;
			{
				#line 549 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				int _g1 = 0;
				#line 549 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				int _g = this.numChildren;
				#line 549 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				while (( _g1 < _g )) {
					#line 549 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					int i = _g1++;
					child = this.getChildAt(i);
					if (string.Equals(child.name, name)) {
						#line 552 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return child;
					}
					
				}
				
			}
			
			#line 556 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return null;
		}
		#line default
		
		public virtual global::sx.widgets.Widget getParent(string name) {
			#line 565 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			global::sx.widgets.Widget parent = this.get_parent();
			while (( ( parent != null ) &&  ! (string.Equals(parent.name, name))  )) {
				#line 567 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				parent = parent.get_parent();
			}
			
			#line 570 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return parent;
		}
		#line default
		
		public virtual T getParentAs<T>(string name, global::System.Type cls) {
			#line 579 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			global::sx.widgets.Widget parent = this.get_parent();
			while (( ( parent != null ) && ((  ! (string.Equals(parent.name, name))  ||  ! (global::Std.@is(parent, cls))  )) )) {
				#line 581 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				parent = parent.get_parent();
			}
			
			#line 584 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( parent == null )) {
				#line 584 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return default(T);
			}
			else {
				#line 584 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return global::haxe.lang.Runtime.genericCast<T>(((object) (parent) ));
			}
			
		}
		#line default
		
		public virtual bool isEnabled() {
			#line 593 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			global::sx.widgets.Widget current = this;
			do {
				#line 595 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if ( ! (current.enabled) ) {
					#line 595 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					return false;
				}
				
				#line 596 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				current = current.get_parent();
			}
			while (( current != null ));
			#line 599 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return true;
		}
		#line default
		
		public virtual global::sx.backend.dummy.Point globalToLocal(global::sx.backend.dummy.Point point) {
			#line 609 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.backend.widgetGlobalToLocal(point);
		}
		#line default
		
		public virtual global::sx.backend.dummy.Point localToGlobal(global::sx.backend.dummy.Point point) {
			#line 619 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.backend.widgetLocalToGlobal(point);
		}
		#line default
		
		public virtual void dispose(global::haxe.lang.Null<bool> disposeChildren) {
			#line 627 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			bool __temp_disposeChildren9 = ( ( ! (disposeChildren.hasValue) ) ? (true) : ((disposeChildren).@value) );
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( this.__onDispose != null ) && ( this.__onDispose.__listeners.length > 0 ) )) {
				#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (this.__onDispose.__listenersInUse) {
					#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g1 = this.__onDispose.__listeners;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g < _g1.length )) {
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener.__hx_invoke1_o(default(double), this);
						}
						
					}
					
					#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					bool __temp_expr1 = false;
				}
				else {
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__onDispose.__listenersInUse = true;
					{
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g11 = this.__onDispose.__listeners;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g2 < _g11.length )) {
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g2;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener1.__hx_invoke1_o(default(double), this);
						}
						
					}
					
					#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__onDispose.__listenersInUse = false;
				}
				
			}
			
			#line 629 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.disposed = true;
			#line 631 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.get_parent() != null )) {
				#line 632 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.get_parent().removeChild(this);
			}
			
			#line 635 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.get_skin() != null )) {
				#line 635 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.set_skin(null);
			}
			
			#line 636 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.get_layout() != null )) {
				#line 636 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.set_layout(null);
			}
			
			#line 638 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (__temp_disposeChildren9) {
				#line 639 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				while (( this.numChildren > 0 )) {
					#line 639 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.getChildAt(0).dispose(new global::haxe.lang.Null<bool>(true, true));
				}
				
			}
			else {
				#line 641 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.removeChildren(default(global::haxe.lang.Null<int>), default(global::haxe.lang.Null<int>));
			}
			
			#line 644 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__tween != null )) {
				#line 644 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__tween.stop();
			}
			
			#line 646 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetDisposed();
		}
		#line default
		
		public void applyStyle() {
			#line 655 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if ((  ! (string.Equals(this.style, null))  && ( global::sx.Sx.theme != null ) )) {
				#line 656 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				global::sx.Sx.theme.apply(this);
			}
			
		}
		#line default
		
		public virtual void __createBackend() {
			#line 666 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend = global::sx.Sx.get_backendManager().widgetBackend(this);
		}
		#line default
		
		public virtual void __propertyResized(global::sx.properties.metric.Size changed, string previousUnits, double previousValue) {
			unchecked {
				#line 675 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( this.get_parent() != null )) {
					#line 675 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (this.__listeningParentResize) {
						#line 675 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (( ( changed != this.__right ) && ( changed != this.__top ) )) {
							#line 675 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							if (( string.Equals(previousUnits, ((string) ("pct") )) &&  ! (string.Equals(previousUnits, changed.units))  )) {
								#line 675 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								this.__updateParentResizeListener();
							}
							
						}
						
					}
					else if (( ( string.Equals(changed.units, ((string) ("pct") )) || ( changed == this.__right ) ) || ( changed == this.__bottom ) )) {
						#line 675 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__listeningParentResize = true;
						#line 675 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.get_parent().get_onResize().@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__parentResized", 1966739654)) ));
					}
					
				}
				
				#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				{
					#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.__resizeCounter++;
					#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( this.__resizeCounter > 5 )) {
						#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.LoopedResizeException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"__resized", "sx.widgets.Widget", "Widget.hx"}, new int[]{1981972957}, new double[]{((double) (686) )})));
					}
					
					#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (this.initialized) {
						#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.backend.widgetResized();
					}
					
					#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( ( this.__onResize != null ) && ( this.__onResize.__listeners.length > 0 ) )) {
						#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (this.__onResize.__listenersInUse) {
							#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							{
								#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								int _g = 0;
								#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								global::Array<object> _g1 = this.__onResize.__listeners;
								#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								while (( _g < _g1.length )) {
									#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
									#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									 ++ _g;
									#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									listener.__hx_invoke4_o(default(double), this, default(double), changed, default(double), previousUnits, previousValue, global::haxe.lang.Runtime.undefined);
								}
								
							}
							
							#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							bool __temp_expr1 = false;
						}
						else {
							#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.__onResize.__listenersInUse = true;
							#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							{
								#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								int _g2 = 0;
								#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								global::Array<object> _g11 = this.__onResize.__listeners;
								#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								while (( _g2 < _g11.length )) {
									#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
									#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									 ++ _g2;
									#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									listener1.__hx_invoke4_o(default(double), this, default(double), changed, default(double), previousUnits, previousValue, global::haxe.lang.Runtime.undefined);
								}
								
							}
							
							#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.__onResize.__listenersInUse = false;
						}
						
					}
					
					#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( string.Equals(changed.orientation, ((string) ("horizontal") )) && this.get_right().selected )) {
						#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (this.initialized) {
							#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.backend.widgetMoved();
						}
						
					}
					
					#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( string.Equals(changed.orientation, ((string) ("vertical") )) && this.get_bottom().selected )) {
						#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (this.initialized) {
							#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.backend.widgetMoved();
						}
						
					}
					
					#line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.__resizeCounter--;
				}
				
			}
			#line default
		}
		
		
		public void __resized(global::sx.properties.metric.Size changed, string previousUnits, double previousValue) {
			unchecked {
				#line 685 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__resizeCounter++;
				if (( this.__resizeCounter > 5 )) {
					#line 686 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.LoopedResizeException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"__resized", "sx.widgets.Widget", "Widget.hx"}, new int[]{1981972957}, new double[]{((double) (686) )})));
				}
				
				#line 688 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (this.initialized) {
					#line 688 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetResized();
				}
				
				#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (( ( this.__onResize != null ) && ( this.__onResize.__listeners.length > 0 ) )) {
					#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (this.__onResize.__listenersInUse) {
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						{
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g = 0;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g1 = this.__onResize.__listeners;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g < _g1.length )) {
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g;
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener.__hx_invoke4_o(default(double), this, default(double), changed, default(double), previousUnits, previousValue, global::haxe.lang.Runtime.undefined);
							}
							
						}
						
						#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						bool __temp_expr1 = false;
					}
					else {
						#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__onResize.__listenersInUse = true;
						{
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g2 = 0;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g11 = this.__onResize.__listeners;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g2 < _g11.length )) {
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g2;
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener1.__hx_invoke4_o(default(double), this, default(double), changed, default(double), previousUnits, previousValue, global::haxe.lang.Runtime.undefined);
							}
							
						}
						
						#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__onResize.__listenersInUse = false;
					}
					
				}
				
				#line 693 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( string.Equals(changed.orientation, ((string) ("horizontal") )) && this.get_right().selected )) {
					#line 693 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (this.initialized) {
						#line 693 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.backend.widgetMoved();
					}
					
				}
				
				#line 694 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( string.Equals(changed.orientation, ((string) ("vertical") )) && this.get_bottom().selected )) {
					#line 694 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (this.initialized) {
						#line 694 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.backend.widgetMoved();
					}
					
				}
				
				#line 696 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__resizeCounter--;
			}
			#line default
		}
		
		
		public virtual void __propertyMoved(global::sx.properties.metric.Size changed, string previousUnits, double previousValue) {
			#line 705 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.get_parent() != null )) {
				#line 705 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (this.__listeningParentResize) {
					#line 705 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( ( changed != this.__right ) && ( changed != this.__top ) )) {
						#line 705 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (( string.Equals(previousUnits, ((string) ("pct") )) &&  ! (string.Equals(previousUnits, changed.units))  )) {
							#line 705 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.__updateParentResizeListener();
						}
						
					}
					
				}
				else if (( ( string.Equals(changed.units, ((string) ("pct") )) || ( changed == this.__right ) ) || ( changed == this.__bottom ) )) {
					#line 705 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.__listeningParentResize = true;
					#line 705 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.get_parent().get_onResize().@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__parentResized", 1966739654)) ));
				}
				
			}
			
			#line 706 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.initialized) {
				#line 706 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetMoved();
			}
			
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( this.__onMove != null ) && ( this.__onMove.__listeners.length > 0 ) )) {
				#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (this.__onMove.__listenersInUse) {
					#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g1 = this.__onMove.__listeners;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g < _g1.length )) {
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener.__hx_invoke4_o(default(double), this, default(double), changed, default(double), previousUnits, previousValue, global::haxe.lang.Runtime.undefined);
						}
						
					}
					
					#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					bool __temp_expr1 = false;
				}
				else {
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__onMove.__listenersInUse = true;
					{
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g11 = this.__onMove.__listeners;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g2 < _g11.length )) {
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g2;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener1.__hx_invoke4_o(default(double), this, default(double), changed, default(double), previousUnits, previousValue, global::haxe.lang.Runtime.undefined);
						}
						
					}
					
					#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__onMove.__listenersInUse = false;
				}
				
			}
			
		}
		#line default
		
		public void __moved() {
			#line 716 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.initialized) {
				#line 716 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetMoved();
			}
			
		}
		#line default
		
		public virtual void __originChanged() {
			#line 725 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.initialized) {
				#line 725 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetOriginChanged();
			}
			
		}
		#line default
		
		public virtual void __offsetChanged() {
			#line 734 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.initialized) {
				#line 734 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetOffsetChanged();
			}
			
		}
		#line default
		
		public virtual global::sx.properties.metric.Size __parentWidthProvider() {
			#line 743 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.get_parent() == null )) {
				#line 743 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return global::sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
			}
			else {
				#line 743 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.get_parent().get_width();
			}
			
		}
		#line default
		
		public virtual global::sx.properties.metric.Size __parentHeightProvider() {
			#line 752 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.get_parent() == null )) {
				#line 752 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return global::sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
			}
			else {
				#line 752 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.get_parent().get_height();
			}
			
		}
		#line default
		
		public virtual void __parentResized(global::sx.widgets.Widget parent, global::sx.properties.metric.Size changed, string previousUnits, double previousValue) {
			unchecked {
				#line 762 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (string.Equals(changed.orientation, ((string) ("horizontal") ))) {
					#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					global::sx.properties.metric.Coordinate position = this.get_left();
					#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					global::sx.properties.metric.Size size = this.get_width();
					#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (string.Equals(size.units, ((string) ("pct") ))) {
						#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						string previousUnits1 = ((string) ("pct") );
						#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						double previousValue1 = size.get_pct();
						#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__resizeCounter++;
						#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (( this.__resizeCounter > 5 )) {
							#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.LoopedResizeException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"__resized", "sx.widgets.Widget", "Widget.hx"}, new int[]{1981972957}, new double[]{((double) (686) )})));
						}
						
						#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (this.initialized) {
							#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.backend.widgetResized();
						}
						
						#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (( ( this.__onResize != null ) && ( this.__onResize.__listeners.length > 0 ) )) {
							#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							if (this.__onResize.__listenersInUse) {
								#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								{
									#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									int _g = 0;
									#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									global::Array<object> _g1 = this.__onResize.__listeners;
									#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									while (( _g < _g1.length )) {
										#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
										global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
										#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
										 ++ _g;
										#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
										listener.__hx_invoke4_o(default(double), this, default(double), size, default(double), previousUnits1, previousValue1, global::haxe.lang.Runtime.undefined);
									}
									
								}
								
								#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								bool __temp_expr2 = false;
							}
							else {
								#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								this.__onResize.__listenersInUse = true;
								#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								{
									#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									int _g2 = 0;
									#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									global::Array<object> _g11 = this.__onResize.__listeners;
									#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									while (( _g2 < _g11.length )) {
										#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
										global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
										#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
										 ++ _g2;
										#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
										listener1.__hx_invoke4_o(default(double), this, default(double), size, default(double), previousUnits1, previousValue1, global::haxe.lang.Runtime.undefined);
									}
									
								}
								
								#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								this.__onResize.__listenersInUse = false;
							}
							
						}
						
						#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (( string.Equals(size.orientation, ((string) ("horizontal") )) && this.get_right().selected )) {
							#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							if (this.initialized) {
								#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								this.backend.widgetMoved();
							}
							
						}
						
						#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (( string.Equals(size.orientation, ((string) ("vertical") )) && this.get_bottom().selected )) {
							#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							if (this.initialized) {
								#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								this.backend.widgetMoved();
							}
							
						}
						
						#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__resizeCounter--;
					}
					
					#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (position.selected) {
						#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (string.Equals(position.units, ((string) ("pct") ))) {
							#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							if (this.initialized) {
								#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								this.backend.widgetMoved();
							}
							
						}
						
					}
					else if (this.initialized) {
						#line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.backend.widgetMoved();
					}
					
				}
				else {
					#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					global::sx.properties.metric.Coordinate position1 = this.get_top();
					#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					global::sx.properties.metric.Size size1 = this.get_height();
					#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (string.Equals(size1.units, ((string) ("pct") ))) {
						#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						string previousUnits2 = ((string) ("pct") );
						#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						double previousValue2 = size1.get_pct();
						#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__resizeCounter++;
						#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (( this.__resizeCounter > 5 )) {
							#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.LoopedResizeException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"__resized", "sx.widgets.Widget", "Widget.hx"}, new int[]{1981972957}, new double[]{((double) (686) )})));
						}
						
						#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (this.initialized) {
							#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.backend.widgetResized();
						}
						
						#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (( ( this.__onResize != null ) && ( this.__onResize.__listeners.length > 0 ) )) {
							#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							if (this.__onResize.__listenersInUse) {
								#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								{
									#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									int _g3 = 0;
									#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									global::Array<object> _g12 = this.__onResize.__listeners;
									#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									while (( _g3 < _g12.length )) {
										#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
										global::haxe.lang.Function listener2 = ((global::haxe.lang.Function) (_g12[_g3]) );
										#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
										 ++ _g3;
										#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
										listener2.__hx_invoke4_o(default(double), this, default(double), size1, default(double), previousUnits2, previousValue2, global::haxe.lang.Runtime.undefined);
									}
									
								}
								
								#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								bool __temp_expr1 = false;
							}
							else {
								#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								this.__onResize.__listenersInUse = true;
								#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								{
									#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									int _g4 = 0;
									#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									global::Array<object> _g13 = this.__onResize.__listeners;
									#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									while (( _g4 < _g13.length )) {
										#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
										global::haxe.lang.Function listener3 = ((global::haxe.lang.Function) (_g13[_g4]) );
										#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
										 ++ _g4;
										#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
										listener3.__hx_invoke4_o(default(double), this, default(double), size1, default(double), previousUnits2, previousValue2, global::haxe.lang.Runtime.undefined);
									}
									
								}
								
								#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								this.__onResize.__listenersInUse = false;
							}
							
						}
						
						#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (( string.Equals(size1.orientation, ((string) ("horizontal") )) && this.get_right().selected )) {
							#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							if (this.initialized) {
								#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								this.backend.widgetMoved();
							}
							
						}
						
						#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (( string.Equals(size1.orientation, ((string) ("vertical") )) && this.get_bottom().selected )) {
							#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							if (this.initialized) {
								#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								this.backend.widgetMoved();
							}
							
						}
						
						#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__resizeCounter--;
					}
					
					#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (position1.selected) {
						#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (string.Equals(position1.units, ((string) ("pct") ))) {
							#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							if (this.initialized) {
								#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								this.backend.widgetMoved();
							}
							
						}
						
					}
					else if (this.initialized) {
						#line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.backend.widgetMoved();
					}
					
				}
				
			}
			#line default
		}
		
		
		public void __reactParentResize(global::sx.properties.metric.Coordinate position, global::sx.properties.metric.Size size) {
			unchecked {
				#line 781 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (string.Equals(size.units, ((string) ("pct") ))) {
					#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					string previousUnits = ((string) ("pct") );
					#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					double previousValue = size.get_pct();
					#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.__resizeCounter++;
					#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( this.__resizeCounter > 5 )) {
						#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.LoopedResizeException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"__resized", "sx.widgets.Widget", "Widget.hx"}, new int[]{1981972957}, new double[]{((double) (686) )})));
					}
					
					#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (this.initialized) {
						#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.backend.widgetResized();
					}
					
					#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( ( this.__onResize != null ) && ( this.__onResize.__listeners.length > 0 ) )) {
						#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (this.__onResize.__listenersInUse) {
							#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							{
								#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								int _g = 0;
								#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								global::Array<object> _g1 = this.__onResize.__listeners;
								#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								while (( _g < _g1.length )) {
									#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
									#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									 ++ _g;
									#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									listener.__hx_invoke4_o(default(double), this, default(double), size, default(double), previousUnits, previousValue, global::haxe.lang.Runtime.undefined);
								}
								
							}
							
							#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							bool __temp_expr1 = false;
						}
						else {
							#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.__onResize.__listenersInUse = true;
							#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							{
								#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								int _g2 = 0;
								#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								global::Array<object> _g11 = this.__onResize.__listeners;
								#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								while (( _g2 < _g11.length )) {
									#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
									#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									 ++ _g2;
									#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
									listener1.__hx_invoke4_o(default(double), this, default(double), size, default(double), previousUnits, previousValue, global::haxe.lang.Runtime.undefined);
								}
								
							}
							
							#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.__onResize.__listenersInUse = false;
						}
						
					}
					
					#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( string.Equals(size.orientation, ((string) ("horizontal") )) && this.get_right().selected )) {
						#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (this.initialized) {
							#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.backend.widgetMoved();
						}
						
					}
					
					#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( string.Equals(size.orientation, ((string) ("vertical") )) && this.get_bottom().selected )) {
						#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (this.initialized) {
							#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.backend.widgetMoved();
						}
						
					}
					
					#line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.__resizeCounter--;
				}
				
				#line 786 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (position.selected) {
					#line 787 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (string.Equals(position.units, ((string) ("pct") ))) {
						#line 787 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (this.initialized) {
							#line 787 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.backend.widgetMoved();
						}
						
					}
					
				}
				else if (this.initialized) {
					#line 790 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetMoved();
				}
				
			}
			#line default
		}
		
		
		public void __affectParentResizeListener(global::sx.properties.metric.Size changed, string previousUnits) {
			#line 800 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.get_parent() != null )) {
				#line 801 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (this.__listeningParentResize) {
					#line 803 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( ( changed != this.__right ) && ( changed != this.__top ) )) {
						#line 805 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (( string.Equals(previousUnits, ((string) ("pct") )) &&  ! (string.Equals(previousUnits, changed.units))  )) {
							#line 806 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.__updateParentResizeListener();
						}
						
					}
					
				}
				else if (( ( string.Equals(changed.units, ((string) ("pct") )) || ( changed == this.__right ) ) || ( changed == this.__bottom ) )) {
					#line 811 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.__listeningParentResize = true;
					this.get_parent().get_onResize().@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__parentResized", 1966739654)) ));
				}
				
			}
			
		}
		#line default
		
		public virtual void __updateParentResizeListener() {
			#line 824 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			bool size = ( string.Equals(this.get_width().units, ((string) ("pct") )) || string.Equals(this.get_height().units, ((string) ("pct") )) );
			bool position = global::sx.tools.WidgetTools.positionDependsOnParent(this);
			#line 827 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( size || position )) {
				#line 828 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__listeningParentResize = true;
				this.get_parent().get_onResize().@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__parentResized", 1966739654)) ));
			}
			else if ((  ! (size)  &&  ! (position)  )) {
				#line 831 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__listeningParentResize = false;
				this.get_parent().get_onResize().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__parentResized", 1966739654)) ));
			}
			
		}
		#line default
		
		public virtual void __initializeSelf() {
			unchecked {
				#line 842 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( this.__offset != null )) {
					#line 842 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetOffsetChanged();
				}
				
				#line 843 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( this.__origin != null )) {
					#line 843 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetOriginChanged();
				}
				
				#line 844 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( this.__width.__value != 0 ) ||  ! ((( this.__height.__value != 0 )))  )) {
					#line 845 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetResized();
				}
				
				#line 847 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( ( ( this.__left.__value != 0 ) || this.__right.selected ) || ( this.__top.__value != 0 ) ) || this.__bottom.selected )) {
					#line 848 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetMoved();
				}
				
				#line 850 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( this.rotation != 0 )) {
					#line 850 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetRotated();
				}
				
				#line 851 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( this.scaleX != 1 )) {
					#line 851 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetScaledX();
				}
				
				#line 852 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( this.scaleY != 1 )) {
					#line 852 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetScaledY();
				}
				
				#line 853 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( this.alpha != 1 )) {
					#line 853 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetAlphaChanged();
				}
				
				#line 854 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if ( ! (this.visible) ) {
					#line 854 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetVisibilityChanged();
				}
				
				#line 855 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if ( ! (this.overflow) ) {
					#line 855 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetOverflowChanged();
				}
				
				#line 856 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( this.__skin != null )) {
					#line 857 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.get_skin().refresh();
					this.backend.widgetSkinChanged();
				}
				
			}
			#line default
		}
		
		
		public virtual void __initializeChildren() {
			#line 869 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			int _g1 = 0;
			#line 869 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			int _g = this.numChildren;
			#line 869 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			while (( _g1 < _g )) {
				#line 869 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				int i = _g1++;
				this.getChildAt(i).initialize();
			}
			
		}
		#line default
		
		public virtual double set_rotation(double rotation) {
			#line 880 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.rotation = rotation;
			if (this.initialized) {
				#line 881 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetRotated();
			}
			
			#line 883 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return rotation;
		}
		#line default
		
		public virtual double set_scaleX(double scaleX) {
			#line 892 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.scaleX = scaleX;
			if (this.initialized) {
				#line 893 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetScaledX();
			}
			
			#line 895 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return scaleX;
		}
		#line default
		
		public virtual double set_scaleY(double scaleY) {
			#line 904 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.scaleY = scaleY;
			if (this.initialized) {
				#line 905 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetScaledY();
			}
			
			#line 907 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return scaleY;
		}
		#line default
		
		public virtual double set_alpha(double alpha) {
			#line 916 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.alpha = alpha;
			if (this.initialized) {
				#line 917 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetAlphaChanged();
			}
			
			#line 919 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return alpha;
		}
		#line default
		
		public virtual bool set_visible(bool @value) {
			#line 928 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.visible != @value )) {
				#line 929 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.visible = @value;
				if (this.initialized) {
					#line 930 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetVisibilityChanged();
				}
				
				#line 932 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( this.get_parent() != null ) && this.get_parent().initialized )) {
					#line 933 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( ( this.get_parent().get_layout() != null ) && this.get_parent().get_layout().autoArrange )) {
						#line 934 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.get_parent().get_layout().arrangeChildren();
					}
					
				}
				
			}
			
			#line 939 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return @value;
		}
		#line default
		
		public virtual global::sx.skins.@base.SkinBase set_skin(global::sx.skins.@base.SkinBase @value) {
			#line 948 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__skin == @value )) {
				#line 948 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return @value;
			}
			
			#line 950 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__skin != null )) {
				#line 951 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__skin.removed();
				if (this.initialized) {
					#line 952 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetSkinChanged();
				}
				
			}
			
			#line 955 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__skin = @value;
			if (( this.__skin != null )) {
				#line 957 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__skin.usedBy(this);
				if (this.initialized) {
					#line 958 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetSkinChanged();
				}
				
			}
			
			#line 961 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return @value;
		}
		#line default
		
		public virtual global::sx.layout.Layout set_layout(global::sx.layout.Layout @value) {
			#line 970 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__layout != null )) {
				#line 970 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__layout.removed();
			}
			
			#line 971 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__layout = @value;
			if (( this.__layout != null )) {
				#line 972 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__layout.usedBy(this);
			}
			
			#line 974 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return @value;
		}
		#line default
		
		public virtual string set_style(string @value) {
			#line 983 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.style = @value;
			if ((  ! (string.Equals(this.style, null))  && ( global::sx.Sx.theme != null ) )) {
				#line 984 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				global::sx.Sx.theme.apply(this);
			}
			
			#line 986 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return @value;
		}
		#line default
		
		public virtual global::sx.properties.metric.Offset get_origin() {
			#line 995 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__origin == null )) {
				#line 996 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__origin = new global::sx.properties.metric.Offset(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_width", 235672157)) ), ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_height", 1926461360)) ));
				this.__origin.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__originChanged", 2036768910)) ));
			}
			
			#line 1000 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__origin;
		}
		#line default
		
		public virtual global::sx.properties.metric.Offset get_offset() {
			#line 1009 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__offset == null )) {
				#line 1010 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__offset = new global::sx.properties.metric.Offset(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_width", 235672157)) ), ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_height", 1926461360)) ));
				this.__offset.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__offsetChanged", 1891164801)) ));
			}
			
			#line 1014 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__offset;
		}
		#line default
		
		public global::sx.widgets.Widget set___parent(global::sx.widgets.Widget @value) {
			#line 1023 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__listeningParentResize && ( this.get_parent() != null ) )) {
				#line 1024 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__listeningParentResize = false;
				this.get_parent().get_onResize().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__parentResized", 1966739654)) ));
			}
			
			#line 1028 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__parent = @value;
			if (( this.__parent != null )) {
				#line 1030 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__updateParentResizeListener();
				if (( this.__parent.initialized &&  ! (this.initialized)  )) {
					#line 1032 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.initialize();
				}
				
			}
			
			#line 1036 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return @value;
		}
		#line default
		
		public virtual bool set_enabled(bool @value) {
			#line 1045 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.enabled != @value )) {
				#line 1046 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.enabled = @value;
				if (this.enabled) {
					#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (( ( this.__onEnable != null ) && ( this.__onEnable.__listeners.length > 0 ) )) {
						#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						if (this.__onEnable.__listenersInUse) {
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							{
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								int _g = 0;
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::Array<object> _g1 = this.__onEnable.__listeners;
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								while (( _g < _g1.length )) {
									#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
									global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
									#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
									 ++ _g;
									#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
									listener.__hx_invoke1_o(default(double), this);
								}
								
							}
							
							#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							bool __temp_expr2 = false;
						}
						else {
							#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							this.__onEnable.__listenersInUse = true;
							{
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								int _g2 = 0;
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::Array<object> _g11 = this.__onEnable.__listeners;
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								while (( _g2 < _g11.length )) {
									#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
									global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
									#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
									 ++ _g2;
									#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
									listener1.__hx_invoke1_o(default(double), this);
								}
								
							}
							
							#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							this.__onEnable.__listenersInUse = false;
						}
						
					}
					
				}
				else if (( ( this.__onDisable != null ) && ( this.__onDisable.__listeners.length > 0 ) )) {
					#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (this.__onDisable.__listenersInUse) {
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						{
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g3 = 0;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g12 = this.__onDisable.__listeners;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g3 < _g12.length )) {
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener2 = ((global::haxe.lang.Function) (_g12[_g3]) );
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g3;
								#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener2.__hx_invoke1_o(default(double), this);
							}
							
						}
						
						#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						bool __temp_expr1 = false;
					}
					else {
						#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__onDisable.__listenersInUse = true;
						{
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g4 = 0;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::Array<object> _g13 = this.__onDisable.__listeners;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g4 < _g13.length )) {
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								global::haxe.lang.Function listener3 = ((global::haxe.lang.Function) (_g13[_g4]) );
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g4;
								#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener3.__hx_invoke1_o(default(double), this);
							}
							
						}
						
						#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__onDisable.__listenersInUse = false;
					}
					
				}
				
			}
			
			#line 1054 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return @value;
		}
		#line default
		
		public virtual global::sx.tween.Tweener get_tween() {
			#line 1063 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__tween == null )) {
				#line 1064 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__tween = new global::sx.tween.Tweener();
			}
			
			#line 1067 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__tween;
		}
		#line default
		
		public virtual bool set_overflow(bool @value) {
			#line 1076 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.overflow != @value )) {
				#line 1077 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.overflow = @value;
				if (this.initialized) {
					#line 1078 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetOverflowChanged();
				}
				
			}
			
			#line 1081 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return @value;
		}
		#line default
		
		public virtual bool set_arrangeable(bool @value) {
			#line 1090 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.arrangeable != @value )) {
				#line 1091 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.arrangeable = @value;
				if (( ( this.get_parent() != null ) && this.get_parent().initialized )) {
					#line 1093 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( ( this.get_parent().get_layout() != null ) && this.get_parent().get_layout().autoArrange )) {
						#line 1094 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.get_parent().get_layout().arrangeChildren();
					}
					
				}
				
			}
			
			#line 1099 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return @value;
		}
		#line default
		
		public virtual global::sx.widgets.Widget get_parent() {
			#line 1104 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__parent;
		}
		#line default
		
		public virtual global::sx.properties.metric.Size get_width() {
			#line 1105 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__width;
		}
		#line default
		
		public virtual global::sx.properties.metric.Size get_height() {
			#line 1106 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__height;
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate get_left() {
			#line 1107 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__left;
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate get_right() {
			#line 1108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__right;
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate get_top() {
			#line 1109 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__top;
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate get_bottom() {
			#line 1110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__bottom;
		}
		#line default
		
		public virtual global::sx.skins.@base.SkinBase get_skin() {
			#line 1111 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__skin;
		}
		#line default
		
		public virtual global::sx.layout.Layout get_layout() {
			#line 1112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__layout;
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate set_left(global::sx.properties.metric.Size v) {
			#line 1115 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__left.copyValueFrom(v);
			#line 1115 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__left;
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate set_right(global::sx.properties.metric.Size v) {
			#line 1116 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__right.copyValueFrom(v);
			#line 1116 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__right;
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate set_top(global::sx.properties.metric.Size v) {
			#line 1117 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__top.copyValueFrom(v);
			#line 1117 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__top;
		}
		#line default
		
		public virtual global::sx.properties.metric.Coordinate set_bottom(global::sx.properties.metric.Size v) {
			#line 1118 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__bottom.copyValueFrom(v);
			#line 1118 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__bottom;
		}
		#line default
		
		public virtual global::sx.properties.metric.Size set_width(global::sx.properties.metric.Size v) {
			#line 1119 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__width.copyValueFrom(v);
		}
		#line default
		
		public virtual global::sx.properties.metric.Size set_height(global::sx.properties.metric.Size v) {
			#line 1120 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__height.copyValueFrom(v);
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onResize() {
			#line 1123 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onResize == null )) {
				#line 1123 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onResize = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1123 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onResize;
			}
			
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onMove() {
			#line 1124 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onMove == null )) {
				#line 1124 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onMove = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1124 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onMove;
			}
			
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onInitialize() {
			#line 1125 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onInitialize == null )) {
				#line 1125 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onInitialize = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1125 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onInitialize;
			}
			
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onDispose() {
			#line 1126 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onDispose == null )) {
				#line 1126 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onDispose = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1126 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onDispose;
			}
			
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onChildAdded() {
			#line 1127 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onChildAdded == null )) {
				#line 1127 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onChildAdded = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1127 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onChildAdded;
			}
			
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onChildRemoved() {
			#line 1128 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onChildRemoved == null )) {
				#line 1128 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onChildRemoved = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1128 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onChildRemoved;
			}
			
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onEnable() {
			#line 1129 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onEnable == null )) {
				#line 1129 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onEnable = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1129 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onEnable;
			}
			
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onDisable() {
			#line 1130 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onDisable == null )) {
				#line 1130 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onDisable = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1130 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onDisable;
			}
			
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onParentChanged() {
			#line 1131 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onParentChanged == null )) {
				#line 1131 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onParentChanged = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1131 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onParentChanged;
			}
			
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onPointerPress() {
			#line 1132 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onPointerPress == null )) {
				#line 1132 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onPointerPress = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1132 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onPointerPress;
			}
			
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onPointerRelease() {
			#line 1133 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onPointerRelease == null )) {
				#line 1133 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onPointerRelease = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1133 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onPointerRelease;
			}
			
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onPointerTap() {
			#line 1134 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onPointerTap == null )) {
				#line 1134 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onPointerTap = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1134 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onPointerTap;
			}
			
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onClick() {
			#line 1135 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onPointerTap == null )) {
				#line 1135 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onPointerTap = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1135 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onPointerTap;
			}
			
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onPointerMove() {
			#line 1136 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onPointerMove == null )) {
				#line 1136 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onPointerMove = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1136 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onPointerMove;
			}
			
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onPointerOver() {
			#line 1137 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onPointerOver == null )) {
				#line 1137 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onPointerOver = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1137 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onPointerOver;
			}
			
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onPointerOut() {
			#line 1138 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__onPointerOut == null )) {
				#line 1138 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onPointerOut = new global::sx.signals.Signal<object>();
			}
			else {
				#line 1138 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return this.__onPointerOut;
			}
			
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				switch (hash) {
					case 1292082248:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__resizeCounter = ((int) (@value) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 563521374:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_alpha(@value);
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.alpha = ((double) (@value) );
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						
					}
					
					
					case 143015230:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_rotation(@value);
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.rotation = ((double) (@value) );
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						
					}
					
					
					case 1009117839:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_scaleY(@value);
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.scaleY = ((double) (@value) );
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						
					}
					
					
					case 1009117838:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_scaleX(@value);
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.scaleX = ((double) (@value) );
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						
					}
					
					
					case 1551919525:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.numChildren = ((int) (@value) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					default:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				switch (hash) {
					case 1292082248:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__resizeCounter = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1872816953:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__listeningParentResize = global::haxe.lang.Runtime.toBool(@value);
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1092846112:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onDispose = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1707038319:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onInitialize = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 950276336:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onPointerOut = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1458271922:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onPointerOver = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1435748463:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onPointerMove = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 950520517:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onPointerTap = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 855232297:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onPointerRelease = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1205739621:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onPointerPress = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 925854569:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onDisable = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 2070747170:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onEnable = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1639957803:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onParentChanged = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 435893315:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onChildRemoved = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 868444835:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onChildAdded = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 320493296:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onMove = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 190890899:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onResize = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 63898443:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__tween = ((global::sx.tween.Tweener) (@value) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 665062117:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.disposed = global::haxe.lang.Runtime.toBool(@value);
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 923792660:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.initialized = global::haxe.lang.Runtime.toBool(@value);
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 2072493076:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.backend = ((global::sx.backend.dummy.Backend) (@value) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 69051697:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_style(global::haxe.lang.Runtime.toString(@value));
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.style = global::haxe.lang.Runtime.toString(@value);
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						
					}
					
					
					case 2117141633:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_enabled(global::haxe.lang.Runtime.toBool(@value));
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.enabled = global::haxe.lang.Runtime.toBool(@value);
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						
					}
					
					
					case 99236550:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_arrangeable(global::haxe.lang.Runtime.toBool(@value));
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.arrangeable = global::haxe.lang.Runtime.toBool(@value);
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						
					}
					
					
					case 15210954:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__layout = ((global::sx.layout.Layout) (@value) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1488498346:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_layout(((global::sx.layout.Layout) (@value) ));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 2068674973:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__skin = ((global::sx.skins.@base.SkinBase) (@value) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1280644733:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_skin(((global::sx.skins.@base.SkinBase) (@value) ));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1094443842:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_overflow(global::haxe.lang.Runtime.toBool(@value));
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.overflow = global::haxe.lang.Runtime.toBool(@value);
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						
					}
					
					
					case 589592690:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_visible(global::haxe.lang.Runtime.toBool(@value));
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.visible = global::haxe.lang.Runtime.toBool(@value);
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						
					}
					
					
					case 563521374:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_alpha(((double) (global::haxe.lang.Runtime.toDouble(@value)) ));
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.alpha = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						
					}
					
					
					case 143015230:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_rotation(((double) (global::haxe.lang.Runtime.toDouble(@value)) ));
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.rotation = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						
					}
					
					
					case 1009117839:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_scaleY(((double) (global::haxe.lang.Runtime.toDouble(@value)) ));
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.scaleY = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						
					}
					
					
					case 1009117838:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_scaleX(((double) (global::haxe.lang.Runtime.toDouble(@value)) ));
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.scaleX = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						
					}
					
					
					case 712733447:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__height = ((global::sx.properties.metric.Size) (@value) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 38537191:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_height(((global::sx.properties.metric.Size) (@value) ));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 885067494:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__width = ((global::sx.properties.metric.Size) (@value) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1247983110:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_width(((global::sx.properties.metric.Size) (@value) ));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 141492915:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__offset = ((global::sx.properties.metric.Offset) (@value) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1932559622:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__origin = ((global::sx.properties.metric.Offset) (@value) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 229134859:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__bottom = ((global::sx.properties.metric.Coordinate) (@value) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1702422251:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_bottom(((global::sx.properties.metric.Size) (@value) ));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1916061557:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__top = ((global::sx.properties.metric.Coordinate) (@value) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 5793429:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_top(((global::sx.properties.metric.Size) (@value) ));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1405248700:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__right = ((global::sx.properties.metric.Coordinate) (@value) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1768164316:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_right(((global::sx.properties.metric.Size) (@value) ));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1990748967:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__left = ((global::sx.properties.metric.Coordinate) (@value) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1202718727:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_left(((global::sx.properties.metric.Size) (@value) ));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 1551919525:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.numChildren = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					case 363688010:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set___parent(((global::sx.widgets.Widget) (@value) ));
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						else {
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.__parent = ((global::sx.widgets.Widget) (@value) );
							#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return @value;
						}
						
					}
					
					
					case 1224700491:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.name = global::haxe.lang.Runtime.toString(@value);
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return @value;
					}
					
					
					default:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				switch (hash) {
					case 478313049:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onPointerOut", 478313049)) );
					}
					
					
					case 1437157673:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onPointerOver", 1437157673)) );
					}
					
					
					case 1414634214:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onPointerMove", 1414634214)) );
					}
					
					
					case 1687583424:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onClick", 1687583424)) );
					}
					
					
					case 478557230:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onPointerTap", 478557230)) );
					}
					
					
					case 1708368146:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onPointerRelease", 1708368146)) );
					}
					
					
					case 792229390:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onPointerPress", 792229390)) );
					}
					
					
					case 1768973154:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onParentChanged", 1768973154)) );
					}
					
					
					case 1248261728:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onDisable", 1248261728)) );
					}
					
					
					case 223238411:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onEnable", 223238411)) );
					}
					
					
					case 22383084:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onChildRemoved", 22383084)) );
					}
					
					
					case 396481548:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onChildAdded", 396481548)) );
					}
					
					
					case 1415253271:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onDispose", 1415253271)) );
					}
					
					
					case 1235075032:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onInitialize", 1235075032)) );
					}
					
					
					case 1534221209:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onMove", 1534221209)) );
					}
					
					
					case 490865788:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onResize", 490865788)) );
					}
					
					
					case 1985025572:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_height", 1985025572)) );
					}
					
					
					case 1901919849:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_width", 1901919849)) );
					}
					
					
					case 1501426984:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_bottom", 1501426984)) );
					}
					
					
					case 432980024:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_top", 432980024)) );
					}
					
					
					case 274617407:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_right", 274617407)) );
					}
					
					
					case 1976048900:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_left", 1976048900)) );
					}
					
					
					case 1228938867:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_layout", 1228938867)) );
					}
					
					
					case 1276105222:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_skin", 1276105222)) );
					}
					
					
					case 1442862772:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_bottom", 1442862772)) );
					}
					
					
					case 650981164:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_top", 650981164)) );
					}
					
					
					case 755853363:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_right", 755853363)) );
					}
					
					
					case 1198179216:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_left", 1198179216)) );
					}
					
					
					case 1926461360:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_height", 1926461360)) );
					}
					
					
					case 235672157:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_width", 235672157)) );
					}
					
					
					case 1577415923:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_parent", 1577415923)) );
					}
					
					
					case 1117220713:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_arrangeable", 1117220713)) );
					}
					
					
					case 189708991:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_overflow", 189708991)) );
					}
					
					
					case 1561986754:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_tween", 1561986754)) );
					}
					
					
					case 244870052:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_enabled", 244870052)) );
					}
					
					
					case 1606436807:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set___parent", 1606436807)) );
					}
					
					
					case 1355220828:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_offset", 1355220828)) );
					}
					
					
					case 998803887:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_origin", 998803887)) );
					}
					
					
					case 722988436:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_style", 722988436)) );
					}
					
					
					case 1287503079:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_layout", 1287503079)) );
					}
					
					
					case 2053974906:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_skin", 2053974906)) );
					}
					
					
					case 864804757:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_visible", 864804757)) );
					}
					
					
					case 1217458113:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_alpha", 1217458113)) );
					}
					
					
					case 808122572:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_scaleY", 808122572)) );
					}
					
					
					case 808122571:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_scaleX", 808122571)) );
					}
					
					
					case 1385764027:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_rotation", 1385764027)) );
					}
					
					
					case 1771336143:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__initializeChildren", 1771336143)) );
					}
					
					
					case 69164060:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__initializeSelf", 69164060)) );
					}
					
					
					case 1631912219:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__updateParentResizeListener", 1631912219)) );
					}
					
					
					case 1981919783:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__affectParentResizeListener", 1981919783)) );
					}
					
					
					case 1410524605:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__reactParentResize", 1410524605)) );
					}
					
					
					case 1966739654:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__parentResized", 1966739654)) );
					}
					
					
					case 944743970:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__parentHeightProvider", 944743970)) );
					}
					
					
					case 273928877:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__parentWidthProvider", 273928877)) );
					}
					
					
					case 1891164801:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__offsetChanged", 1891164801)) );
					}
					
					
					case 2036768910:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__originChanged", 2036768910)) );
					}
					
					
					case 1992566035:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__moved", 1992566035)) );
					}
					
					
					case 1583208574:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__propertyMoved", 1583208574)) );
					}
					
					
					case 1690414288:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__resized", 1690414288)) );
					}
					
					
					case 750735611:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__propertyResized", 750735611)) );
					}
					
					
					case 1803341144:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__createBackend", 1803341144)) );
					}
					
					
					case 795812067:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "applyStyle", 795812067)) );
					}
					
					
					case 994869407:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "dispose", 994869407)) );
					}
					
					
					case 1206600137:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "localToGlobal", 1206600137)) );
					}
					
					
					case 1806585549:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "globalToLocal", 1806585549)) );
					}
					
					
					case 36667831:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "isEnabled", 36667831)) );
					}
					
					
					case 1927094130:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getParentAs", 1927094130)) );
					}
					
					
					case 1775537760:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getParent", 1775537760)) );
					}
					
					
					case 210570429:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getDirectChild", 210570429)) );
					}
					
					
					case 906889144:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getChildAs", 906889144)) );
					}
					
					
					case 630241574:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getChild", 630241574)) );
					}
					
					
					case 334603397:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "swapChildrenAt", 334603397)) );
					}
					
					
					case 1616071410:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "swapChildren", 1616071410)) );
					}
					
					
					case 906889145:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getChildAt", 906889145)) );
					}
					
					
					case 2114472472:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setChildIndex", 2114472472)) );
					}
					
					
					case 956459020:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getChildIndex", 956459020)) );
					}
					
					
					case 746281503:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "contains", 746281503)) );
					}
					
					
					case 985683363:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "removeChildren", 985683363)) );
					}
					
					
					case 1063706059:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "removeChildAt", 1063706059)) );
					}
					
					
					case 1139639992:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "removeChild", 1139639992)) );
					}
					
					
					case 1312206222:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "addChildAt", 1312206222)) );
					}
					
					
					case 1058459579:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "addChild", 1058459579)) );
					}
					
					
					case 1824207184:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "initialize", 1824207184)) );
					}
					
					
					case 1292082248:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__resizeCounter;
					}
					
					
					case 1872816953:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__listeningParentResize;
					}
					
					
					case 1092846112:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onDispose;
					}
					
					
					case 318191936:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onDispose();
					}
					
					
					case 1707038319:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onInitialize;
					}
					
					
					case 1157550927:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onInitialize();
					}
					
					
					case 950276336:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onPointerOut;
					}
					
					
					case 400788944:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerOut();
					}
					
					
					case 1458271922:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onPointerOver;
					}
					
					
					case 1329151442:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerOver();
					}
					
					
					case 1435748463:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onPointerMove;
					}
					
					
					case 1306627983:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerMove();
					}
					
					
					case 1587288745:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onClick();
					}
					
					
					case 950520517:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onPointerTap;
					}
					
					
					case 401033125:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerTap();
					}
					
					
					case 855232297:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onPointerRelease;
					}
					
					
					case 1198078985:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerRelease();
					}
					
					
					case 1205739621:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onPointerPress;
					}
					
					
					case 329160005:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerPress();
					}
					
					
					case 925854569:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onDisable;
					}
					
					
					case 151200393:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onDisable();
					}
					
					
					case 2070747170:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onEnable;
					}
					
					
					case 1479845122:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onEnable();
					}
					
					
					case 1639957803:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onParentChanged;
					}
					
					
					case 1583715403:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onParentChanged();
					}
					
					
					case 435893315:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onChildRemoved;
					}
					
					
					case 1706797347:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onChildRemoved();
					}
					
					
					case 868444835:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onChildAdded;
					}
					
					
					case 318957443:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onChildAdded();
					}
					
					
					case 320493296:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onMove;
					}
					
					
					case 1793780688:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onMove();
					}
					
					
					case 190890899:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onResize;
					}
					
					
					case 1747472499:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onResize();
					}
					
					
					case 63898443:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__tween;
					}
					
					
					case 426814059:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_tween();
					}
					
					
					case 665062117:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.disposed;
					}
					
					
					case 923792660:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.initialized;
					}
					
					
					case 2072493076:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.backend;
					}
					
					
					case 69051697:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.style;
					}
					
					
					case 2117141633:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.enabled;
					}
					
					
					case 99236550:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.arrangeable;
					}
					
					
					case 15210954:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__layout;
					}
					
					
					case 1488498346:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_layout();
					}
					
					
					case 2068674973:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__skin;
					}
					
					
					case 1280644733:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_skin();
					}
					
					
					case 1094443842:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.overflow;
					}
					
					
					case 589592690:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.visible;
					}
					
					
					case 563521374:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.alpha;
					}
					
					
					case 143015230:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.rotation;
					}
					
					
					case 1009117839:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.scaleY;
					}
					
					
					case 1009117838:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.scaleX;
					}
					
					
					case 712733447:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__height;
					}
					
					
					case 38537191:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_height();
					}
					
					
					case 885067494:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__width;
					}
					
					
					case 1247983110:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_width();
					}
					
					
					case 141492915:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__offset;
					}
					
					
					case 1614780307:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_offset();
					}
					
					
					case 1932559622:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__origin;
					}
					
					
					case 1258363366:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_origin();
					}
					
					
					case 229134859:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__bottom;
					}
					
					
					case 1702422251:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_bottom();
					}
					
					
					case 1916061557:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__top;
					}
					
					
					case 5793429:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_top();
					}
					
					
					case 1405248700:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__right;
					}
					
					
					case 1768164316:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_right();
					}
					
					
					case 1990748967:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__left;
					}
					
					
					case 1202718727:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_left();
					}
					
					
					case 1551919525:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.numChildren;
					}
					
					
					case 363688010:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__parent;
					}
					
					
					case 1836975402:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_parent();
					}
					
					
					case 1224700491:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.name;
					}
					
					
					default:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				switch (hash) {
					case 1292082248:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((double) (this.__resizeCounter) );
					}
					
					
					case 563521374:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.alpha;
					}
					
					
					case 143015230:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.rotation;
					}
					
					
					case 1009117839:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.scaleY;
					}
					
					
					case 1009117838:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.scaleX;
					}
					
					
					case 1551919525:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((double) (this.numChildren) );
					}
					
					
					default:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				switch (hash) {
					case 478313049:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerOut();
					}
					
					
					case 1437157673:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerOver();
					}
					
					
					case 1414634214:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerMove();
					}
					
					
					case 1687583424:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onClick();
					}
					
					
					case 478557230:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerTap();
					}
					
					
					case 1708368146:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerRelease();
					}
					
					
					case 792229390:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerPress();
					}
					
					
					case 1768973154:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onParentChanged();
					}
					
					
					case 1248261728:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onDisable();
					}
					
					
					case 223238411:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onEnable();
					}
					
					
					case 22383084:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onChildRemoved();
					}
					
					
					case 396481548:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onChildAdded();
					}
					
					
					case 1415253271:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onDispose();
					}
					
					
					case 1235075032:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onInitialize();
					}
					
					
					case 1534221209:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onMove();
					}
					
					
					case 490865788:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onResize();
					}
					
					
					case 1985025572:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_height(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 1901919849:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_width(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 1501426984:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_bottom(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 432980024:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_top(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 274617407:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_right(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 1976048900:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_left(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 1228938867:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_layout();
					}
					
					
					case 1276105222:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_skin();
					}
					
					
					case 1442862772:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_bottom();
					}
					
					
					case 650981164:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_top();
					}
					
					
					case 755853363:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_right();
					}
					
					
					case 1198179216:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_left();
					}
					
					
					case 1926461360:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_height();
					}
					
					
					case 235672157:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_width();
					}
					
					
					case 1577415923:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_parent();
					}
					
					
					case 1117220713:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_arrangeable(global::haxe.lang.Runtime.toBool(dynargs[0]));
					}
					
					
					case 189708991:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_overflow(global::haxe.lang.Runtime.toBool(dynargs[0]));
					}
					
					
					case 1561986754:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_tween();
					}
					
					
					case 244870052:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_enabled(global::haxe.lang.Runtime.toBool(dynargs[0]));
					}
					
					
					case 1606436807:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set___parent(((global::sx.widgets.Widget) (dynargs[0]) ));
					}
					
					
					case 1355220828:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_offset();
					}
					
					
					case 998803887:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_origin();
					}
					
					
					case 722988436:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_style(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					case 1287503079:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_layout(((global::sx.layout.Layout) (dynargs[0]) ));
					}
					
					
					case 2053974906:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_skin(((global::sx.skins.@base.SkinBase) (dynargs[0]) ));
					}
					
					
					case 864804757:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_visible(global::haxe.lang.Runtime.toBool(dynargs[0]));
					}
					
					
					case 1217458113:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_alpha(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
					}
					
					
					case 808122572:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_scaleY(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
					}
					
					
					case 808122571:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_scaleX(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
					}
					
					
					case 1385764027:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_rotation(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
					}
					
					
					case 1771336143:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__initializeChildren();
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 69164060:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__initializeSelf();
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 1631912219:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__updateParentResizeListener();
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 1981919783:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__affectParentResizeListener(((global::sx.properties.metric.Size) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 1410524605:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__reactParentResize(((global::sx.properties.metric.Coordinate) (dynargs[0]) ), ((global::sx.properties.metric.Size) (dynargs[1]) ));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 1966739654:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__parentResized(((global::sx.widgets.Widget) (dynargs[0]) ), ((global::sx.properties.metric.Size) (dynargs[1]) ), global::haxe.lang.Runtime.toString(dynargs[2]), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[3])) ));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 944743970:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__parentHeightProvider();
					}
					
					
					case 273928877:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__parentWidthProvider();
					}
					
					
					case 1891164801:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__offsetChanged();
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 2036768910:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__originChanged();
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 1992566035:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__moved();
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 1583208574:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__propertyMoved(((global::sx.properties.metric.Size) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[2])) ));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 1690414288:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__resized(((global::sx.properties.metric.Size) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[2])) ));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 750735611:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__propertyResized(((global::sx.properties.metric.Size) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[2])) ));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 1803341144:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__createBackend();
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 795812067:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.applyStyle();
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 994869407:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.dispose(global::haxe.lang.Null<object>.ofDynamic<bool>(dynargs[0]));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 1206600137:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.localToGlobal(((global::sx.backend.dummy.Point) (dynargs[0]) ));
					}
					
					
					case 1806585549:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.globalToLocal(((global::sx.backend.dummy.Point) (dynargs[0]) ));
					}
					
					
					case 36667831:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.isEnabled();
					}
					
					
					case 1927094130:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.getParentAs<object>(global::haxe.lang.Runtime.toString(dynargs[0]), ((global::System.Type) (dynargs[1]) ));
					}
					
					
					case 1775537760:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.getParent(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					case 210570429:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.getDirectChild(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					case 906889144:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return (this.getChildAs<object>(global::haxe.lang.Runtime.toString(dynargs[0]), ((global::System.Type) (dynargs[1]) ))).@value;
					}
					
					
					case 630241574:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.getChild(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					case 334603397:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.swapChildrenAt(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ), ((int) (global::haxe.lang.Runtime.toInt(dynargs[1])) ));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 1616071410:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.swapChildren(((global::sx.widgets.Widget) (dynargs[0]) ), ((global::sx.widgets.Widget) (dynargs[1]) ));
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					case 906889145:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.getChildAt(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
					}
					
					
					case 2114472472:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.setChildIndex(((global::sx.widgets.Widget) (dynargs[0]) ), ((int) (global::haxe.lang.Runtime.toInt(dynargs[1])) ));
					}
					
					
					case 956459020:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.getChildIndex(((global::sx.widgets.Widget) (dynargs[0]) ));
					}
					
					
					case 746281503:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.contains(((global::sx.widgets.Widget) (dynargs[0]) ));
					}
					
					
					case 985683363:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.removeChildren(global::haxe.lang.Null<object>.ofDynamic<int>(dynargs[0]), global::haxe.lang.Null<object>.ofDynamic<int>(dynargs[1]));
					}
					
					
					case 1063706059:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.removeChildAt(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
					}
					
					
					case 1139639992:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.removeChild(((global::sx.widgets.Widget) (dynargs[0]) ));
					}
					
					
					case 1312206222:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.addChildAt(((global::sx.widgets.Widget) (dynargs[0]) ), ((int) (global::haxe.lang.Runtime.toInt(dynargs[1])) ));
					}
					
					
					case 1058459579:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.addChild(((global::sx.widgets.Widget) (dynargs[0]) ));
					}
					
					
					case 1824207184:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.initialize();
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						break;
					}
					
					
					default:
					{
						#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__resizeCounter");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__listeningParentResize");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__onDispose");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onDispose");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__onInitialize");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onInitialize");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__onPointerOut");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onPointerOut");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__onPointerOver");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onPointerOver");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__onPointerMove");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onPointerMove");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onClick");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__onPointerTap");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onPointerTap");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__onPointerRelease");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onPointerRelease");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__onPointerPress");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onPointerPress");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__onDisable");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onDisable");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__onEnable");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onEnable");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__onParentChanged");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onParentChanged");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__onChildRemoved");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onChildRemoved");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__onChildAdded");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onChildAdded");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__onMove");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onMove");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__onResize");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("onResize");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__tween");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("tween");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("disposed");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("initialized");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("backend");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("style");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("enabled");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("arrangeable");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__layout");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("layout");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__skin");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("skin");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("overflow");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("visible");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("alpha");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("rotation");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("scaleY");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("scaleX");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__height");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("height");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__width");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("width");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__offset");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("offset");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__origin");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("origin");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__bottom");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("bottom");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__top");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("top");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__right");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("right");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__left");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("left");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("numChildren");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("__parent");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("parent");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			baseArr.push("name");
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			{
				#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


