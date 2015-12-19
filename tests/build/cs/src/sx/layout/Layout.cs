
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.layout {
	public class Layout : global::haxe.lang.HxObject {
		
		public Layout(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Layout() {
			#line 31 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			global::sx.layout.Layout.__hx_ctor_sx_layout_Layout(this);
		}
		#line default
		
		public static void __hx_ctor_sx_layout_Layout(global::sx.layout.Layout __temp_me143) {
			#line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			__temp_me143.autoArrange = true;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			return new global::sx.layout.Layout(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			return new global::sx.layout.Layout();
		}
		#line default
		
		public bool autoArrange;
		
		public global::sx.widgets.Widget __widget;
		
		public virtual void arrangeChildren() {
		}
		
		
		public virtual void usedBy(global::sx.widgets.Widget widget) {
			#line 52 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			if (( this.__widget != null )) {
				#line 52 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				this.__widget.set_layout(null);
			}
			
			#line 53 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			this.__widget = widget;
			#line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			{
				#line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				this.__widget.get_onResize().@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetResized", 1969704300)) ));
				#line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				this.__widget.get_onChildAdded().@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__childAdded", 1934803108)) ));
				#line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				this.__widget.get_onChildRemoved().@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__childRemoved", 1552731268)) ));
			}
			
			#line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			if (widget.initialized) {
				#line 57 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				this.arrangeChildren();
			}
			else {
				#line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				widget.get_onInitialize().@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetInitialized", 905991312)) ));
			}
			
		}
		#line default
		
		public virtual void removed() {
			#line 70 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			if (( this.__widget != null )) {
				#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				{
					#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					global::sx.widgets.Widget widget = this.__widget;
					#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					if ( ! (widget.initialized) ) {
						#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						widget.get_onInitialize().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetInitialized", 905991312)) ));
					}
					
					#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					widget.get_onResize().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetResized", 1969704300)) ));
					#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					widget.get_onChildAdded().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__childAdded", 1934803108)) ));
					#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
					widget.get_onChildRemoved().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__childRemoved", 1552731268)) ));
				}
				
				#line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				this.__widget = null;
			}
			
		}
		#line default
		
		public virtual bool __isChildArrangeable(global::sx.widgets.Widget child) {
			#line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			return ( child.arrangeable && child.visible );
		}
		#line default
		
		public void __hookWidget(global::sx.widgets.Widget widget) {
			#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			this.__widget.get_onResize().@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetResized", 1969704300)) ));
			this.__widget.get_onChildAdded().@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__childAdded", 1934803108)) ));
			this.__widget.get_onChildRemoved().@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__childRemoved", 1552731268)) ));
		}
		#line default
		
		public void __releaseWidget(global::sx.widgets.Widget widget) {
			#line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			if ( ! (widget.initialized) ) {
				#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				widget.get_onInitialize().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetInitialized", 905991312)) ));
			}
			
			#line 106 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			widget.get_onResize().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetResized", 1969704300)) ));
			widget.get_onChildAdded().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__childAdded", 1934803108)) ));
			widget.get_onChildRemoved().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__childRemoved", 1552731268)) ));
		}
		#line default
		
		public virtual void __widgetInitialized(global::sx.widgets.Widget widget) {
			#line 117 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			widget.get_onInitialize().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetInitialized", 905991312)) ));
			if (( this.autoArrange && ( this.__widget == widget ) )) {
				#line 119 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				this.arrangeChildren();
			}
			
		}
		#line default
		
		public virtual void __childAdded(global::sx.widgets.Widget parent, global::sx.widgets.Widget child) {
			#line 129 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			if (( ( this.autoArrange && this.__widget.initialized ) && this.__isChildArrangeable(child) )) {
				#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				this.arrangeChildren();
			}
			
		}
		#line default
		
		public virtual void __childRemoved(global::sx.widgets.Widget parent, global::sx.widgets.Widget child) {
			#line 140 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			if (( ( this.autoArrange && this.__widget.initialized ) && this.__isChildArrangeable(child) )) {
				#line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				this.arrangeChildren();
			}
			
		}
		#line default
		
		public virtual void __widgetResized(global::sx.widgets.Widget widget, global::sx.properties.metric.Size changed, string previousUnits, double previousValue) {
			#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			if (( this.autoArrange && this.__widget.initialized )) {
				#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				this.arrangeChildren();
			}
			
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				switch (hash) {
					case 1948392164:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.__widget = ((global::sx.widgets.Widget) (@value) );
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return @value;
					}
					
					
					case 542403453:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.autoArrange = global::haxe.lang.Runtime.toBool(@value);
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return @value;
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				switch (hash) {
					case 1969704300:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetResized", 1969704300)) );
					}
					
					
					case 1552731268:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__childRemoved", 1552731268)) );
					}
					
					
					case 1934803108:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__childAdded", 1934803108)) );
					}
					
					
					case 905991312:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetInitialized", 905991312)) );
					}
					
					
					case 1254617547:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__releaseWidget", 1254617547)) );
					}
					
					
					case 2086663975:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__hookWidget", 2086663975)) );
					}
					
					
					case 1153129908:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__isChildArrangeable", 1153129908)) );
					}
					
					
					case 1929387936:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "removed", 1929387936)) );
					}
					
					
					case 1105499508:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "usedBy", 1105499508)) );
					}
					
					
					case 1588177035:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "arrangeChildren", 1588177035)) );
					}
					
					
					case 1948392164:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return this.__widget;
					}
					
					
					case 542403453:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return this.autoArrange;
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				switch (hash) {
					case 1969704300:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.__widgetResized(((global::sx.widgets.Widget) (dynargs[0]) ), ((global::sx.properties.metric.Size) (dynargs[1]) ), global::haxe.lang.Runtime.toString(dynargs[2]), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[3])) ));
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						break;
					}
					
					
					case 1552731268:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.__childRemoved(((global::sx.widgets.Widget) (dynargs[0]) ), ((global::sx.widgets.Widget) (dynargs[1]) ));
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						break;
					}
					
					
					case 1934803108:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.__childAdded(((global::sx.widgets.Widget) (dynargs[0]) ), ((global::sx.widgets.Widget) (dynargs[1]) ));
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						break;
					}
					
					
					case 905991312:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.__widgetInitialized(((global::sx.widgets.Widget) (dynargs[0]) ));
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						break;
					}
					
					
					case 1254617547:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.__releaseWidget(((global::sx.widgets.Widget) (dynargs[0]) ));
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						break;
					}
					
					
					case 2086663975:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.__hookWidget(((global::sx.widgets.Widget) (dynargs[0]) ));
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						break;
					}
					
					
					case 1153129908:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return this.__isChildArrangeable(((global::sx.widgets.Widget) (dynargs[0]) ));
					}
					
					
					case 1929387936:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.removed();
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						break;
					}
					
					
					case 1105499508:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.usedBy(((global::sx.widgets.Widget) (dynargs[0]) ));
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						break;
					}
					
					
					case 1588177035:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						this.arrangeChildren();
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						break;
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			baseArr.push("__widget");
			#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			baseArr.push("autoArrange");
			#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
			{
				#line 17 "/home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


