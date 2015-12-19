
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.widgets.@base {
	public class RendererHolder : global::sx.widgets.Widget {
		
		public RendererHolder(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public RendererHolder() : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 49 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			global::sx.widgets.@base.RendererHolder.__hx_ctor_sx_widgets_base_RendererHolder(this);
		}
		#line default
		
		public static void __hx_ctor_sx_widgets_base_RendererHolder(global::sx.widgets.@base.RendererHolder __temp_me172) {
			#line 39 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			__temp_me172.__adjustingSize = false;
			#line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			__temp_me172.__rendererOnResizeIsSet = false;
			#line 49 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			global::sx.widgets.Widget.__hx_ctor_sx_widgets_Widget(__temp_me172);
			#line 51 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			__temp_me172.__padding = new global::sx.properties.metric.Padding();
			__temp_me172.__padding.ownerWidth = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me172, "__widthProviderForPadding", 1622228703)) );
			__temp_me172.__padding.ownerHeight = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me172, "__heightProviderForPadding", 260325184)) );
			__temp_me172.__padding.onComponentsChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me172, "__paddingChanged", 1935431235)) ));
			#line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			__temp_me172.set_autoSize(new global::sx.properties.AutoSize(new global::haxe.lang.Null<bool>(true, true)));
			__temp_me172.autoSize.onChange.@add(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me172, "__autoSizeChanged", 1708856292)) ));
			#line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			__temp_me172.__createRenderer();
			#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			{
				#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				__temp_me172.get___renderer().onResize(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me172, "__rendererResized", 749301197)) ));
				#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				__temp_me172.__rendererOnResizeIsSet = true;
			}
			
			#line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			double rendererWidth = __temp_me172.get___renderer().getWidth();
			double rendererHeight = __temp_me172.get___renderer().getHeight();
			if (( ( ( rendererWidth != 0 ) || ( rendererHeight != 0 ) ) ||  ! (global::sx.tools.PaddingTools.isZero(__temp_me172.get_padding()))  )) {
				#line 67 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				{
					#line 67 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					global::sx.properties.metric.Size size = __temp_me172.get_width();
					#line 67 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					__temp_me172.__adjustingSize = true;
					#line 67 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					size.set_px(( rendererWidth + global::sx.tools.PaddingTools.sumPx(__temp_me172.get_padding(), size.orientation) ));
					#line 67 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					__temp_me172.__adjustingSize = false;
				}
				
				#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				{
					#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					global::sx.properties.metric.Size size1 = __temp_me172.get_height();
					#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					__temp_me172.__adjustingSize = true;
					#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					size1.set_px(( rendererHeight + global::sx.tools.PaddingTools.sumPx(__temp_me172.get_padding(), size1.orientation) ));
					#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					__temp_me172.__adjustingSize = false;
				}
				
			}
			
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			return new global::sx.widgets.@base.RendererHolder(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			return new global::sx.widgets.@base.RendererHolder();
		}
		#line default
		
		public global::sx.properties.AutoSize autoSize;
		
		
		
		public global::sx.properties.metric.Padding __padding;
		
		
		
		public bool __rendererOnResizeIsSet;
		
		public bool __adjustingSize;
		
		public global::sx.properties.metric.Size __helperSize;
		
		public override void dispose(global::haxe.lang.Null<bool> disposeChildren) {
			#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			bool __temp_disposeChildren171 = ( ( ! (disposeChildren.hasValue) ) ? (true) : ((disposeChildren).@value) );
			base.dispose(new global::haxe.lang.Null<bool>(__temp_disposeChildren171, true));
			#line 80 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			{
				#line 80 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.get___renderer().onResize(null);
				#line 80 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__rendererOnResizeIsSet = false;
			}
			
			#line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			this.get___renderer().dispose();
		}
		#line default
		
		public virtual void __createRenderer() {
		}
		
		
		public virtual void __autoSizeChanged(bool widthChanged, bool heightChanged) {
			#line 101 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (this.__rendererOnResizeIsSet) {
				#line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				if (this.autoSize.neither()) {
					#line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.get___renderer().onResize(null);
					#line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.__rendererOnResizeIsSet = false;
				}
				
			}
			else if (this.autoSize.either()) {
				#line 104 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.get___renderer().onResize(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__rendererResized", 749301197)) ));
				#line 104 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__rendererOnResizeIsSet = true;
			}
			
			#line 107 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (widthChanged) {
				#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				if (this.autoSize.get_width()) {
					#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					global::sx.properties.metric.Size size = this.get_width();
					#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					double rendererSizePx = this.get___renderer().getWidth();
					#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.__adjustingSize = true;
					#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					size.set_px(( rendererSizePx + global::sx.tools.PaddingTools.sumPx(this.get_padding(), size.orientation) ));
					#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.__adjustingSize = false;
				}
				else {
					#line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.get___renderer().setAvailableAreaWidth(( this.get_width().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("horizontal") )) ));
				}
				
			}
			
			#line 114 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (heightChanged) {
				#line 115 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				if (this.autoSize.get_height()) {
					#line 116 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					global::sx.properties.metric.Size size1 = this.get_height();
					#line 116 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					double rendererSizePx1 = this.get___renderer().getHeight();
					#line 116 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.__adjustingSize = true;
					#line 116 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					size1.set_px(( rendererSizePx1 + global::sx.tools.PaddingTools.sumPx(this.get_padding(), size1.orientation) ));
					#line 116 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.__adjustingSize = false;
				}
				else {
					#line 118 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.get___renderer().setAvailableAreaHeight(( this.get_height().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("vertical") )) ));
				}
				
			}
			
		}
		#line default
		
		public void __disableRendererResizeListener() {
			#line 129 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			this.get___renderer().onResize(null);
			this.__rendererOnResizeIsSet = false;
		}
		#line default
		
		public void __enableRendererResizeListener() {
			#line 139 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			this.get___renderer().onResize(((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__rendererResized", 749301197)) ));
			this.__rendererOnResizeIsSet = true;
		}
		#line default
		
		public virtual void __rendererResized(double widthPx, double heightPx) {
			#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (this.autoSize.get_width()) {
				#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				global::sx.properties.metric.Size size = this.get_width();
				#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__adjustingSize = true;
				#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				size.set_px(( widthPx + global::sx.tools.PaddingTools.sumPx(this.get_padding(), size.orientation) ));
				#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__adjustingSize = false;
			}
			
			#line 150 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (this.autoSize.get_height()) {
				#line 150 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				global::sx.properties.metric.Size size1 = this.get_height();
				#line 150 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__adjustingSize = true;
				#line 150 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				size1.set_px(( heightPx + global::sx.tools.PaddingTools.sumPx(this.get_padding(), size1.orientation) ));
				#line 150 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__adjustingSize = false;
			}
			
		}
		#line default
		
		public override void __propertyResized(global::sx.properties.metric.Size changed, string previousUnits, double previousValue) {
			#line 159 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if ( ! (this.__adjustingSize) ) {
				#line 160 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				if (string.Equals(changed.orientation, ((string) ("horizontal") ))) {
					#line 161 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (this.autoSize.get_width()) {
						#line 163 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.autoSize.set_width(false);
					}
					else {
						#line 165 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.get___renderer().setAvailableAreaWidth(( changed.get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("horizontal") )) ));
					}
					
				}
				else if (this.autoSize.get_height()) {
					#line 170 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.autoSize.set_height(false);
				}
				else {
					#line 172 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.get___renderer().setAvailableAreaHeight(( changed.get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("vertical") )) ));
				}
				
			}
			
			#line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			base.__propertyResized(changed, previousUnits, previousValue);
		}
		#line default
		
		public void __adjustSize(global::sx.properties.metric.Size size, double rendererSizePx) {
			#line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			this.__adjustingSize = true;
			size.set_px(( rendererSizePx + global::sx.tools.PaddingTools.sumPx(this.get_padding(), size.orientation) ));
			this.__adjustingSize = false;
		}
		#line default
		
		public virtual void __paddingChanged(bool horizontal, bool vertical) {
			#line 197 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (horizontal) {
				#line 198 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				if (this.autoSize.get_width()) {
					#line 199 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					global::sx.properties.metric.Size size = this.get_width();
					#line 199 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					double rendererSizePx = this.get___renderer().getWidth();
					#line 199 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.__adjustingSize = true;
					#line 199 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					size.set_px(( rendererSizePx + global::sx.tools.PaddingTools.sumPx(this.get_padding(), size.orientation) ));
					#line 199 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.__adjustingSize = false;
				}
				else {
					#line 201 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.get___renderer().setAvailableAreaWidth(( this.get_width().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("horizontal") )) ));
				}
				
			}
			
			#line 204 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (vertical) {
				#line 205 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				if (this.autoSize.get_height()) {
					#line 206 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					global::sx.properties.metric.Size size1 = this.get_height();
					#line 206 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					double rendererSizePx1 = this.get___renderer().getHeight();
					#line 206 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.__adjustingSize = true;
					#line 206 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					size1.set_px(( rendererSizePx1 + global::sx.tools.PaddingTools.sumPx(this.get_padding(), size1.orientation) ));
					#line 206 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.__adjustingSize = false;
				}
				else {
					#line 208 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.get___renderer().setAvailableAreaHeight(( this.get_height().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("vertical") )) ));
				}
				
			}
			
		}
		#line default
		
		public virtual global::sx.properties.metric.Size __widthProviderForPadding() {
			unchecked {
				#line 219 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				if (this.autoSize.get_width()) {
					#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					global::sx.properties.metric.Size helperSize = null;
					#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					{
						#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						global::sx.properties.metric.Size paddingSide1 = this.get_padding().get_left();
						#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						global::sx.properties.metric.Size paddingSide2 = this.get_padding().get_right();
						#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						double rendererSizePx = this.get___renderer().getWidth();
						#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						double paddingSide1Px = default(double);
						#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						{
							#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							string _g = paddingSide1.units;
							#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							switch (_g) {
								case "pct":
								{
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double rendererSize = default(double);
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									if (string.Equals(paddingSide1.orientation, ((string) ("horizontal") ))) {
										#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize = this.get___renderer().getWidth();
									}
									else {
										#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize = this.get___renderer().getHeight();
									}
									
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double holderSize = default(double);
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									{
										#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										string _g1 = paddingSide2.units;
										#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										switch (_g1) {
											case "pct":
											{
												#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												holderSize = ( rendererSize / (( 0.01 * (( ( 100 - paddingSide1.get_pct() ) - paddingSide2.get_pct() )) )) );
												#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												break;
											}
											
											
											default:
											{
												#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												holderSize = ( (( rendererSize + paddingSide2.get_px() )) / (( 0.01 * (( 100 - paddingSide1.get_pct() )) )) );
												#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												break;
											}
											
										}
										
									}
									
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									paddingSide1Px = ( ( paddingSide1.get_pct() * 0.01 ) * holderSize );
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									break;
								}
								
								
								default:
								{
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									paddingSide1Px = paddingSide1.get_px();
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									break;
								}
								
							}
							
						}
						
						#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						double paddingSide2Px = default(double);
						#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						{
							#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							string _g2 = paddingSide2.units;
							#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							switch (_g2) {
								case "pct":
								{
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double rendererSize1 = default(double);
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									if (string.Equals(paddingSide2.orientation, ((string) ("horizontal") ))) {
										#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize1 = this.get___renderer().getWidth();
									}
									else {
										#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize1 = this.get___renderer().getHeight();
									}
									
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double holderSize1 = default(double);
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									{
										#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										string _g11 = paddingSide1.units;
										#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										switch (_g11) {
											case "pct":
											{
												#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												holderSize1 = ( rendererSize1 / (( 0.01 * (( ( 100 - paddingSide2.get_pct() ) - paddingSide1.get_pct() )) )) );
												#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												break;
											}
											
											
											default:
											{
												#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												holderSize1 = ( (( rendererSize1 + paddingSide1.get_px() )) / (( 0.01 * (( 100 - paddingSide2.get_pct() )) )) );
												#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												break;
											}
											
										}
										
									}
									
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									paddingSide2Px = ( ( paddingSide2.get_pct() * 0.01 ) * holderSize1 );
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									break;
								}
								
								
								default:
								{
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									paddingSide2Px = paddingSide2.get_px();
									#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									break;
								}
								
							}
							
						}
						
						#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						global::sx.properties.metric.Size helperSize1 = null;
						#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						{
							#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							if (( this.__helperSize == null )) {
								#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								this.__helperSize = new global::sx.properties.metric.Size(((string) (null) ));
							}
							
							#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							helperSize1 = this.__helperSize;
						}
						
						#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						helperSize1.set_px(( ( rendererSizePx + paddingSide1Px ) + paddingSide2Px ));
						#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						helperSize = this.__helperSize;
					}
					
					#line 222 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					return helperSize;
				}
				else {
					#line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					return this.get_width();
				}
				
			}
			#line default
		}
		
		
		public virtual global::sx.properties.metric.Size __heightProviderForPadding() {
			unchecked {
				#line 235 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				if (this.autoSize.get_width()) {
					#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					global::sx.properties.metric.Size helperSize = null;
					#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					{
						#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						global::sx.properties.metric.Size paddingSide1 = this.get_padding().get_top();
						#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						global::sx.properties.metric.Size paddingSide2 = this.get_padding().get_bottom();
						#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						double rendererSizePx = this.get___renderer().getHeight();
						#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						double paddingSide1Px = default(double);
						#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						{
							#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							string _g = paddingSide1.units;
							#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							switch (_g) {
								case "pct":
								{
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double rendererSize = default(double);
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									if (string.Equals(paddingSide1.orientation, ((string) ("horizontal") ))) {
										#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize = this.get___renderer().getWidth();
									}
									else {
										#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize = this.get___renderer().getHeight();
									}
									
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double holderSize = default(double);
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									{
										#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										string _g1 = paddingSide2.units;
										#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										switch (_g1) {
											case "pct":
											{
												#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												holderSize = ( rendererSize / (( 0.01 * (( ( 100 - paddingSide1.get_pct() ) - paddingSide2.get_pct() )) )) );
												#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												break;
											}
											
											
											default:
											{
												#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												holderSize = ( (( rendererSize + paddingSide2.get_px() )) / (( 0.01 * (( 100 - paddingSide1.get_pct() )) )) );
												#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												break;
											}
											
										}
										
									}
									
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									paddingSide1Px = ( ( paddingSide1.get_pct() * 0.01 ) * holderSize );
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									break;
								}
								
								
								default:
								{
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									paddingSide1Px = paddingSide1.get_px();
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									break;
								}
								
							}
							
						}
						
						#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						double paddingSide2Px = default(double);
						#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						{
							#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							string _g2 = paddingSide2.units;
							#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							switch (_g2) {
								case "pct":
								{
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double rendererSize1 = default(double);
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									if (string.Equals(paddingSide2.orientation, ((string) ("horizontal") ))) {
										#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize1 = this.get___renderer().getWidth();
									}
									else {
										#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize1 = this.get___renderer().getHeight();
									}
									
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double holderSize1 = default(double);
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									{
										#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										string _g11 = paddingSide1.units;
										#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										switch (_g11) {
											case "pct":
											{
												#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												holderSize1 = ( rendererSize1 / (( 0.01 * (( ( 100 - paddingSide2.get_pct() ) - paddingSide1.get_pct() )) )) );
												#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												break;
											}
											
											
											default:
											{
												#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												holderSize1 = ( (( rendererSize1 + paddingSide1.get_px() )) / (( 0.01 * (( 100 - paddingSide2.get_pct() )) )) );
												#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												break;
											}
											
										}
										
									}
									
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									paddingSide2Px = ( ( paddingSide2.get_pct() * 0.01 ) * holderSize1 );
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									break;
								}
								
								
								default:
								{
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									paddingSide2Px = paddingSide2.get_px();
									#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									break;
								}
								
							}
							
						}
						
						#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						global::sx.properties.metric.Size helperSize1 = null;
						#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						{
							#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							if (( this.__helperSize == null )) {
								#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								this.__helperSize = new global::sx.properties.metric.Size(((string) (null) ));
							}
							
							#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							helperSize1 = this.__helperSize;
						}
						
						#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						helperSize1.set_px(( ( rendererSizePx + paddingSide1Px ) + paddingSide2Px ));
						#line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						helperSize = this.__helperSize;
					}
					
					#line 238 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					return helperSize;
				}
				else {
					#line 241 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					return this.get_width();
				}
				
			}
			#line default
		}
		
		
		public global::sx.properties.metric.Size __getPaddedRendererSize(global::sx.properties.metric.Size paddingSide1, global::sx.properties.metric.Size paddingSide2, double rendererSizePx) {
			unchecked {
				#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				double paddingSide1Px = default(double);
				#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				{
					#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					string _g = paddingSide1.units;
					#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					switch (_g) {
						case "pct":
						{
							#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							double rendererSize = default(double);
							#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							if (string.Equals(paddingSide1.orientation, ((string) ("horizontal") ))) {
								#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								rendererSize = this.get___renderer().getWidth();
							}
							else {
								#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								rendererSize = this.get___renderer().getHeight();
							}
							
							#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							double holderSize = default(double);
							#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							{
								#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								string _g1 = paddingSide2.units;
								#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								switch (_g1) {
									case "pct":
									{
										#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										holderSize = ( rendererSize / (( 0.01 * (( ( 100 - paddingSide1.get_pct() ) - paddingSide2.get_pct() )) )) );
										#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										break;
									}
									
									
									default:
									{
										#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										holderSize = ( (( rendererSize + paddingSide2.get_px() )) / (( 0.01 * (( 100 - paddingSide1.get_pct() )) )) );
										#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										break;
									}
									
								}
								
							}
							
							#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							paddingSide1Px = ( ( paddingSide1.get_pct() * 0.01 ) * holderSize );
							#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							break;
						}
						
						
						default:
						{
							#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							paddingSide1Px = paddingSide1.get_px();
							#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							break;
						}
						
					}
					
				}
				
				#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				double paddingSide2Px = default(double);
				#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				{
					#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					string _g2 = paddingSide2.units;
					#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					switch (_g2) {
						case "pct":
						{
							#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							double rendererSize1 = default(double);
							#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							if (string.Equals(paddingSide2.orientation, ((string) ("horizontal") ))) {
								#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								rendererSize1 = this.get___renderer().getWidth();
							}
							else {
								#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								rendererSize1 = this.get___renderer().getHeight();
							}
							
							#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							double holderSize1 = default(double);
							#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							{
								#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								string _g11 = paddingSide1.units;
								#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								switch (_g11) {
									case "pct":
									{
										#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										holderSize1 = ( rendererSize1 / (( 0.01 * (( ( 100 - paddingSide2.get_pct() ) - paddingSide1.get_pct() )) )) );
										#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										break;
									}
									
									
									default:
									{
										#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										holderSize1 = ( (( rendererSize1 + paddingSide1.get_px() )) / (( 0.01 * (( 100 - paddingSide2.get_pct() )) )) );
										#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										break;
									}
									
								}
								
							}
							
							#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							paddingSide2Px = ( ( paddingSide2.get_pct() * 0.01 ) * holderSize1 );
							#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							break;
						}
						
						
						default:
						{
							#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							paddingSide2Px = paddingSide2.get_px();
							#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							break;
						}
						
					}
					
				}
				
				#line 254 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				global::sx.properties.metric.Size helperSize = null;
				#line 254 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				{
					#line 254 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (( this.__helperSize == null )) {
						#line 254 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__helperSize = new global::sx.properties.metric.Size(((string) (null) ));
					}
					
					#line 254 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					helperSize = this.__helperSize;
				}
				
				#line 255 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				helperSize.set_px(( ( rendererSizePx + paddingSide1Px ) + paddingSide2Px ));
				#line 257 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				return this.__helperSize;
			}
			#line default
		}
		
		
		public double __getPaddingPixels(global::sx.properties.metric.Size paddingSide, global::sx.properties.metric.Size oppositeSide) {
			unchecked {
				#line 266 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				string _g = paddingSide.units;
				#line 266 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				switch (_g) {
					case "pct":
					{
						#line 268 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						double rendererSize = default(double);
						#line 268 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						if (string.Equals(paddingSide.orientation, ((string) ("horizontal") ))) {
							#line 268 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							rendererSize = this.get___renderer().getWidth();
						}
						else {
							#line 268 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							rendererSize = this.get___renderer().getHeight();
						}
						
						#line 269 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						double holderSize = default(double);
						#line 269 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						{
							#line 269 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							string _g1 = oppositeSide.units;
							#line 269 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							switch (_g1) {
								case "pct":
								{
									#line 270 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									holderSize = ( rendererSize / (( 0.01 * (( ( 100 - paddingSide.get_pct() ) - oppositeSide.get_pct() )) )) );
									#line 270 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									break;
								}
								
								
								default:
								{
									#line 271 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									holderSize = ( (( rendererSize + oppositeSide.get_px() )) / (( 0.01 * (( 100 - paddingSide.get_pct() )) )) );
									#line 271 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									break;
								}
								
							}
							
						}
						
						#line 274 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ( ( paddingSide.get_pct() * 0.01 ) * holderSize );
					}
					
					
					default:
					{
						#line 277 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return paddingSide.get_px();
					}
					
				}
				
			}
			#line default
		}
		
		
		public global::sx.properties.metric.Size __getHelperSize() {
			#line 287 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (( this.__helperSize == null )) {
				#line 287 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__helperSize = new global::sx.properties.metric.Size(((string) (null) ));
			}
			
			#line 289 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			return this.__helperSize;
		}
		#line default
		
		public virtual global::sx.backend.interfaces.IRenderer get___renderer() {
			#line 300 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			return null;
		}
		#line default
		
		public virtual global::sx.properties.AutoSize set_autoSize(global::sx.properties.AutoSize @value) {
			#line 309 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (( this.autoSize == null )) {
				#line 310 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.autoSize = @value;
			}
			else {
				#line 312 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				((global::sx.properties.AutoSize) (this.autoSize) ).copyValueFrom(@value);
			}
			
			#line 315 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			return this.autoSize;
		}
		#line default
		
		public virtual global::sx.properties.metric.Padding get_padding() {
			#line 320 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			return this.__padding;
		}
		#line default
		
		public virtual global::sx.properties.metric.Padding set_padding(global::sx.properties.metric.Size v) {
			#line 323 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			{
				#line 323 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__padding.copyValueFrom(v);
				#line 323 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				return this.__padding;
			}
			
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				switch (hash) {
					case 530912367:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__helperSize = ((global::sx.properties.metric.Size) (@value) );
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return @value;
					}
					
					
					case 517578484:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__adjustingSize = global::haxe.lang.Runtime.toBool(@value);
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return @value;
					}
					
					
					case 1273215490:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__rendererOnResizeIsSet = global::haxe.lang.Runtime.toBool(@value);
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return @value;
					}
					
					
					case 1372302001:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__padding = ((global::sx.properties.metric.Padding) (@value) );
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return @value;
					}
					
					
					case 1350392273:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.set_padding(((global::sx.properties.metric.Size) (@value) ));
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return @value;
					}
					
					
					case 796495824:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						if (handleProperties) {
							#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							this.set_autoSize(((global::sx.properties.AutoSize) (@value) ));
							#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							return @value;
						}
						else {
							#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							this.autoSize = ((global::sx.properties.AutoSize) (@value) );
							#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							return @value;
						}
						
					}
					
					
					default:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				switch (hash) {
					case 1625604340:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_padding", 1625604340)) );
					}
					
					
					case 1450686952:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_padding", 1450686952)) );
					}
					
					
					case 2039244621:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_autoSize", 2039244621)) );
					}
					
					
					case 1275707564:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get___renderer", 1275707564)) );
					}
					
					
					case 1261842021:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__getHelperSize", 1261842021)) );
					}
					
					
					case 1283173512:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__getPaddingPixels", 1283173512)) );
					}
					
					
					case 1132678442:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__getPaddedRendererSize", 1132678442)) );
					}
					
					
					case 260325184:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__heightProviderForPadding", 260325184)) );
					}
					
					
					case 1622228703:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__widthProviderForPadding", 1622228703)) );
					}
					
					
					case 1935431235:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__paddingChanged", 1935431235)) );
					}
					
					
					case 670894096:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__adjustSize", 670894096)) );
					}
					
					
					case 750735611:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__propertyResized", 750735611)) );
					}
					
					
					case 749301197:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__rendererResized", 749301197)) );
					}
					
					
					case 1565618990:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__enableRendererResizeListener", 1565618990)) );
					}
					
					
					case 303618067:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__disableRendererResizeListener", 303618067)) );
					}
					
					
					case 1708856292:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__autoSizeChanged", 1708856292)) );
					}
					
					
					case 961924991:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__createRenderer", 961924991)) );
					}
					
					
					case 994869407:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "dispose", 994869407)) );
					}
					
					
					case 530912367:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__helperSize;
					}
					
					
					case 517578484:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__adjustingSize;
					}
					
					
					case 1273215490:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__rendererOnResizeIsSet;
					}
					
					
					case 1444165731:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.get___renderer();
					}
					
					
					case 1372302001:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__padding;
					}
					
					
					case 1350392273:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.get_padding();
					}
					
					
					case 796495824:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.autoSize;
					}
					
					
					default:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				switch (hash) {
					case 994869407:
					case 750735611:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return global::haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					
					case 1625604340:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.set_padding(((global::sx.properties.metric.Size) (dynargs[0]) ));
					}
					
					
					case 1450686952:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.get_padding();
					}
					
					
					case 2039244621:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.set_autoSize(((global::sx.properties.AutoSize) (dynargs[0]) ));
					}
					
					
					case 1275707564:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.get___renderer();
					}
					
					
					case 1261842021:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__getHelperSize();
					}
					
					
					case 1283173512:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__getPaddingPixels(((global::sx.properties.metric.Size) (dynargs[0]) ), ((global::sx.properties.metric.Size) (dynargs[1]) ));
					}
					
					
					case 1132678442:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__getPaddedRendererSize(((global::sx.properties.metric.Size) (dynargs[0]) ), ((global::sx.properties.metric.Size) (dynargs[1]) ), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[2])) ));
					}
					
					
					case 260325184:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__heightProviderForPadding();
					}
					
					
					case 1622228703:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__widthProviderForPadding();
					}
					
					
					case 1935431235:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__paddingChanged(global::haxe.lang.Runtime.toBool(dynargs[0]), global::haxe.lang.Runtime.toBool(dynargs[1]));
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						break;
					}
					
					
					case 670894096:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__adjustSize(((global::sx.properties.metric.Size) (dynargs[0]) ), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[1])) ));
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						break;
					}
					
					
					case 749301197:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__rendererResized(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[1])) ));
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						break;
					}
					
					
					case 1565618990:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__enableRendererResizeListener();
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						break;
					}
					
					
					case 303618067:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__disableRendererResizeListener();
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						break;
					}
					
					
					case 1708856292:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__autoSizeChanged(global::haxe.lang.Runtime.toBool(dynargs[0]), global::haxe.lang.Runtime.toBool(dynargs[1]));
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						break;
					}
					
					
					case 961924991:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__createRenderer();
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						break;
					}
					
					
					default:
					{
						#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			baseArr.push("__helperSize");
			#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			baseArr.push("__adjustingSize");
			#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			baseArr.push("__rendererOnResizeIsSet");
			#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			baseArr.push("__renderer");
			#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			baseArr.push("__padding");
			#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			baseArr.push("padding");
			#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			baseArr.push("autoSize");
			#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			{
				#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


