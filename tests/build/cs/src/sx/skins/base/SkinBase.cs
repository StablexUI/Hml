
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.skins.@base {
	public class SkinBase : global::haxe.lang.HxObject {
		
		public SkinBase(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public SkinBase() {
			#line 28 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			global::sx.skins.@base.SkinBase.__hx_ctor_sx_skins_base_SkinBase(this);
		}
		#line default
		
		public static void __hx_ctor_sx_skins_base_SkinBase(global::sx.skins.@base.SkinBase __temp_me163) {
		}
		
		
		public static new object __hx_createEmpty() {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			return new global::sx.skins.@base.SkinBase(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			return new global::sx.skins.@base.SkinBase();
		}
		#line default
		
		
		
		public global::sx.properties.metric.Padding __padding;
		
		public global::sx.widgets.Widget __widget;
		
		public virtual void refresh() {
		}
		
		
		public virtual bool hasPadding() {
			#line 48 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			return ( this.__padding != null );
		}
		#line default
		
		public virtual void usedBy(global::sx.widgets.Widget widget) {
			#line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			if (( this.__widget != null )) {
				#line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				this.__widget.set_skin(null);
			}
			
			#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			this.__widget = widget;
			this.__widget.get_onResize().@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetResized", 1969704300)) ));
			if (this.__widget.initialized) {
				#line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				this.refresh();
			}
			
		}
		#line default
		
		public virtual void removed() {
			#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			if (( this.__widget != null )) {
				#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				this.__widget.get_onResize().@remove(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetResized", 1969704300)) ));
				this.__widget = null;
			}
			
		}
		#line default
		
		public virtual void __widgetResized(global::sx.widgets.Widget widget, global::sx.properties.metric.Size changed, string previousUnits, double previousValue) {
			#line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			if (this.__widget.initialized) {
				#line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				this.refresh();
			}
			
		}
		#line default
		
		public virtual global::sx.properties.metric.Size __widgetWidthProvider() {
			#line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			if (( this.__widget == null )) {
				#line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				return global::sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
			}
			else {
				#line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				return this.__widget.get_width();
			}
			
		}
		#line default
		
		public virtual global::sx.properties.metric.Size __widgetHeightProvider() {
			#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			if (( this.__widget == null )) {
				#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				return global::sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
			}
			else {
				#line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				return this.__widget.get_width();
			}
			
		}
		#line default
		
		public virtual global::sx.properties.metric.Padding get_padding() {
			#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			if (( this.__padding == null )) {
				#line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				this.__padding = new global::sx.properties.metric.Padding();
				this.__padding.ownerWidth = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetWidthProvider", 1862340563)) );
				this.__padding.ownerWidth = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetHeightProvider", 825748028)) );
			}
			
			#line 118 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			return this.__padding;
		}
		#line default
		
		public virtual global::sx.properties.metric.Padding set_padding(global::sx.properties.metric.Size v) {
			#line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			{
				#line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				((global::sx.properties.metric.Padding) (this.get_padding()) ).copyValueFrom(v);
				#line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				return this.get_padding();
			}
			
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				switch (hash) {
					case 1948392164:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						this.__widget = ((global::sx.widgets.Widget) (@value) );
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return @value;
					}
					
					
					case 1372302001:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						this.__padding = ((global::sx.properties.metric.Padding) (@value) );
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return @value;
					}
					
					
					case 1350392273:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						this.set_padding(((global::sx.properties.metric.Size) (@value) ));
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return @value;
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				switch (hash) {
					case 1625604340:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_padding", 1625604340)) );
					}
					
					
					case 1450686952:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_padding", 1450686952)) );
					}
					
					
					case 825748028:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetHeightProvider", 825748028)) );
					}
					
					
					case 1862340563:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetWidthProvider", 1862340563)) );
					}
					
					
					case 1969704300:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widgetResized", 1969704300)) );
					}
					
					
					case 1929387936:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "removed", 1929387936)) );
					}
					
					
					case 1105499508:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "usedBy", 1105499508)) );
					}
					
					
					case 1529954711:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "hasPadding", 1529954711)) );
					}
					
					
					case 1830869467:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "refresh", 1830869467)) );
					}
					
					
					case 1948392164:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.__widget;
					}
					
					
					case 1372302001:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.__padding;
					}
					
					
					case 1350392273:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.get_padding();
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				switch (hash) {
					case 1625604340:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.set_padding(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 1450686952:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.get_padding();
					}
					
					
					case 825748028:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.__widgetHeightProvider();
					}
					
					
					case 1862340563:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.__widgetWidthProvider();
					}
					
					
					case 1969704300:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						this.__widgetResized(((global::sx.widgets.Widget) (dynargs[0]) ), ((global::sx.properties.metric.Size) (dynargs[1]) ), global::haxe.lang.Runtime.toString(dynargs[2]), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[3])) ));
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						break;
					}
					
					
					case 1929387936:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						this.removed();
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						break;
					}
					
					
					case 1105499508:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						this.usedBy(((global::sx.widgets.Widget) (dynargs[0]) ));
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						break;
					}
					
					
					case 1529954711:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return this.hasPadding();
					}
					
					
					case 1830869467:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						this.refresh();
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						break;
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			baseArr.push("__widget");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			baseArr.push("__padding");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			baseArr.push("padding");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
			{
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


