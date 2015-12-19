
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.widgets {
	public class Bmp : global::sx.widgets.@base.RendererHolder {
		
		public Bmp(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public Bmp() : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			global::sx.widgets.Bmp.__hx_ctor_sx_widgets_Bmp(this);
		}
		#line default
		
		public static void __hx_ctor_sx_widgets_Bmp(global::sx.widgets.Bmp __temp_me173) {
			#line 40 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			__temp_me173.__dontUpdateBitmapScaling = false;
			#line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			__temp_me173.smooth = false;
			#line 35 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			__temp_me173.keepAspect = true;
			#line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			global::sx.widgets.@base.RendererHolder.__hx_ctor_sx_widgets_base_RendererHolder(__temp_me173);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			return new global::sx.widgets.Bmp(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			return new global::sx.widgets.Bmp();
		}
		#line default
		
		public object bitmapData;
		
		public global::sx.backend.dummy.BitmapRenderer renderer;
		
		public bool keepAspect;
		
		public bool smooth;
		
		public bool __dontUpdateBitmapScaling;
		
		public override void __createRenderer() {
			#line 48 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			this.renderer = global::sx.Sx.get_backendManager().bitmapRenderer(this);
		}
		#line default
		
		public override void __propertyResized(global::sx.properties.metric.Size changed, string previousUnits, double previousValue) {
			unchecked {
				#line 57 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (this.__dontUpdateBitmapScaling) {
					#line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					base.__propertyResized(changed, previousUnits, previousValue);
				}
				else {
					#line 60 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.__dontUpdateBitmapScaling = true;
					base.__propertyResized(changed, previousUnits, previousValue);
					if (this.autoSize.both()) {
						#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
					}
					else if (this.autoSize.get_width()) {
						#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapHeight = default(double);
						#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this = this.renderer;
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this.__bitmapData, "height", 38537191, true) == null ) )) {
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight = ((double) (0) );
							}
							else {
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this.__bitmapData, "height", 38537191, true))) );
							}
							
						}
						
						#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( bitmapHeight <= 0 )) {
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else if (this.keepAspect) {
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
						}
						else {
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight = ( this.get_height().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("vertical") )) );
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( renderHeight <= 0 )) {
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else {
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY = ( renderHeight / bitmapHeight );
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (1) ), scaleY);
							}
							
						}
						
					}
					else if (this.autoSize.get_height()) {
						#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth = default(double);
						#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this1 = this.renderer;
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this1.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this1.__bitmapData, "width", 1247983110, true) == null ) )) {
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (0) );
							}
							else {
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this1.__bitmapData, "width", 1247983110, true))) );
							}
							
						}
						
						#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( bitmapWidth <= 0 )) {
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else if (this.keepAspect) {
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
						}
						else {
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderWidth = ( this.get_width().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("horizontal") )) );
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( renderWidth <= 0 )) {
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else {
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleX = ( renderWidth / bitmapWidth );
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(scaleX, ((double) (1) ));
							}
							
						}
						
					}
					else {
						#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth1 = default(double);
						#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this2 = this.renderer;
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this2.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this2.__bitmapData, "width", 1247983110, true) == null ) )) {
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (0) );
							}
							else {
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this2.__bitmapData, "width", 1247983110, true))) );
							}
							
						}
						
						#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapHeight1 = default(double);
						#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this3 = this.renderer;
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this3.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this3.__bitmapData, "height", 38537191, true) == null ) )) {
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (0) );
							}
							else {
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this3.__bitmapData, "height", 38537191, true))) );
							}
							
						}
						
						#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( bitmapWidth1 <= 0 ) || ( bitmapHeight1 <= 0 ) )) {
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else {
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderWidth1 = ( ( this.get_width().get_px() - this.get_padding().get_left().get_px() ) - this.get_padding().get_right().get_px() );
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight1 = ( ( this.get_height().get_px() - this.get_padding().get_top().get_px() ) - this.get_padding().get_bottom().get_px() );
							#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( renderWidth1 <= 0 ) || ( renderHeight1 <= 0 ) )) {
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else {
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleX1 = ( renderWidth1 / bitmapWidth1 );
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY1 = ( renderHeight1 / bitmapHeight1 );
								#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								if (this.keepAspect) {
									#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									if (( scaleX1 < scaleY1 )) {
										#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleX1, scaleX1);
									}
									else {
										#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleY1, scaleY1);
									}
									
								}
								else {
									#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleX1, scaleY1);
								}
								
							}
							
						}
						
					}
					
					#line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.__dontUpdateBitmapScaling = false;
				}
				
			}
			#line default
		}
		
		
		public override void __paddingChanged(bool horizontal, bool vertical) {
			unchecked {
				#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (this.__dontUpdateBitmapScaling) {
					#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					base.__paddingChanged(horizontal, vertical);
				}
				else {
					#line 76 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.__dontUpdateBitmapScaling = true;
					if (this.autoSize.both()) {
						#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
					}
					else if (this.autoSize.get_width()) {
						#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapHeight = default(double);
						#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this = this.renderer;
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this.__bitmapData, "height", 38537191, true) == null ) )) {
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight = ((double) (0) );
							}
							else {
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this.__bitmapData, "height", 38537191, true))) );
							}
							
						}
						
						#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( bitmapHeight <= 0 )) {
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else if (this.keepAspect) {
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
						}
						else {
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight = ( this.get_height().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("vertical") )) );
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( renderHeight <= 0 )) {
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else {
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY = ( renderHeight / bitmapHeight );
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (1) ), scaleY);
							}
							
						}
						
					}
					else if (this.autoSize.get_height()) {
						#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth = default(double);
						#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this1 = this.renderer;
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this1.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this1.__bitmapData, "width", 1247983110, true) == null ) )) {
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (0) );
							}
							else {
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this1.__bitmapData, "width", 1247983110, true))) );
							}
							
						}
						
						#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( bitmapWidth <= 0 )) {
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else if (this.keepAspect) {
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
						}
						else {
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderWidth = ( this.get_width().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("horizontal") )) );
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( renderWidth <= 0 )) {
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else {
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleX = ( renderWidth / bitmapWidth );
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(scaleX, ((double) (1) ));
							}
							
						}
						
					}
					else {
						#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth1 = default(double);
						#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this2 = this.renderer;
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this2.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this2.__bitmapData, "width", 1247983110, true) == null ) )) {
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (0) );
							}
							else {
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this2.__bitmapData, "width", 1247983110, true))) );
							}
							
						}
						
						#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapHeight1 = default(double);
						#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this3 = this.renderer;
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this3.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this3.__bitmapData, "height", 38537191, true) == null ) )) {
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (0) );
							}
							else {
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this3.__bitmapData, "height", 38537191, true))) );
							}
							
						}
						
						#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( bitmapWidth1 <= 0 ) || ( bitmapHeight1 <= 0 ) )) {
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else {
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderWidth1 = ( ( this.get_width().get_px() - this.get_padding().get_left().get_px() ) - this.get_padding().get_right().get_px() );
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight1 = ( ( this.get_height().get_px() - this.get_padding().get_top().get_px() ) - this.get_padding().get_bottom().get_px() );
							#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( renderWidth1 <= 0 ) || ( renderHeight1 <= 0 ) )) {
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else {
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleX1 = ( renderWidth1 / bitmapWidth1 );
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY1 = ( renderHeight1 / bitmapHeight1 );
								#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								if (this.keepAspect) {
									#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									if (( scaleX1 < scaleY1 )) {
										#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleX1, scaleX1);
									}
									else {
										#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleY1, scaleY1);
									}
									
								}
								else {
									#line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleX1, scaleY1);
								}
								
							}
							
						}
						
					}
					
					#line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					base.__paddingChanged(horizontal, vertical);
					this.__dontUpdateBitmapScaling = false;
				}
				
			}
			#line default
		}
		
		
		public override void __autoSizeChanged(bool widthChanged, bool heightChanged) {
			unchecked {
				#line 89 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (this.__dontUpdateBitmapScaling) {
					#line 90 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					base.__paddingChanged(widthChanged, heightChanged);
				}
				else {
					#line 92 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.__dontUpdateBitmapScaling = true;
					if (this.autoSize.both()) {
						#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
					}
					else if (this.autoSize.get_width()) {
						#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapHeight = default(double);
						#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this = this.renderer;
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this.__bitmapData, "height", 38537191, true) == null ) )) {
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight = ((double) (0) );
							}
							else {
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this.__bitmapData, "height", 38537191, true))) );
							}
							
						}
						
						#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( bitmapHeight <= 0 )) {
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else if (this.keepAspect) {
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
						}
						else {
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight = ( this.get_height().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("vertical") )) );
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( renderHeight <= 0 )) {
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else {
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY = ( renderHeight / bitmapHeight );
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (1) ), scaleY);
							}
							
						}
						
					}
					else if (this.autoSize.get_height()) {
						#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth = default(double);
						#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this1 = this.renderer;
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this1.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this1.__bitmapData, "width", 1247983110, true) == null ) )) {
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (0) );
							}
							else {
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this1.__bitmapData, "width", 1247983110, true))) );
							}
							
						}
						
						#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( bitmapWidth <= 0 )) {
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else if (this.keepAspect) {
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
						}
						else {
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderWidth = ( this.get_width().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("horizontal") )) );
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( renderWidth <= 0 )) {
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else {
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleX = ( renderWidth / bitmapWidth );
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(scaleX, ((double) (1) ));
							}
							
						}
						
					}
					else {
						#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth1 = default(double);
						#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this2 = this.renderer;
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this2.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this2.__bitmapData, "width", 1247983110, true) == null ) )) {
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (0) );
							}
							else {
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this2.__bitmapData, "width", 1247983110, true))) );
							}
							
						}
						
						#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapHeight1 = default(double);
						#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this3 = this.renderer;
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this3.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this3.__bitmapData, "height", 38537191, true) == null ) )) {
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (0) );
							}
							else {
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this3.__bitmapData, "height", 38537191, true))) );
							}
							
						}
						
						#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( bitmapWidth1 <= 0 ) || ( bitmapHeight1 <= 0 ) )) {
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else {
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderWidth1 = ( ( this.get_width().get_px() - this.get_padding().get_left().get_px() ) - this.get_padding().get_right().get_px() );
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight1 = ( ( this.get_height().get_px() - this.get_padding().get_top().get_px() ) - this.get_padding().get_bottom().get_px() );
							#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( renderWidth1 <= 0 ) || ( renderHeight1 <= 0 ) )) {
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else {
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleX1 = ( renderWidth1 / bitmapWidth1 );
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY1 = ( renderHeight1 / bitmapHeight1 );
								#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								if (this.keepAspect) {
									#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									if (( scaleX1 < scaleY1 )) {
										#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleX1, scaleX1);
									}
									else {
										#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleY1, scaleY1);
									}
									
								}
								else {
									#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleX1, scaleY1);
								}
								
							}
							
						}
						
					}
					
					#line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					base.__paddingChanged(widthChanged, heightChanged);
					this.__dontUpdateBitmapScaling = false;
				}
				
			}
			#line default
		}
		
		
		public void __updateBitmapScaling() {
			unchecked {
				#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (this.autoSize.both()) {
					#line 106 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
				}
				else if (this.autoSize.get_width()) {
					#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double bitmapHeight = default(double);
					#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					{
						#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						global::sx.backend.dummy.BitmapRenderer _this = this.renderer;
						#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( _this.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this.__bitmapData, "height", 38537191, true) == null ) )) {
							#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapHeight = ((double) (0) );
						}
						else {
							#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapHeight = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this.__bitmapData, "height", 38537191, true))) );
						}
						
					}
					
					#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (( bitmapHeight <= 0 )) {
						#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
					}
					else if (this.keepAspect) {
						#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
					}
					else {
						#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double renderHeight = ( this.get_height().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("vertical") )) );
						#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( renderHeight <= 0 )) {
							#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else {
							#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double scaleY = ( renderHeight / bitmapHeight );
							#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (1) ), scaleY);
						}
						
					}
					
				}
				else if (this.autoSize.get_height()) {
					#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double bitmapWidth = default(double);
					#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					{
						#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						global::sx.backend.dummy.BitmapRenderer _this1 = this.renderer;
						#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( _this1.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this1.__bitmapData, "width", 1247983110, true) == null ) )) {
							#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapWidth = ((double) (0) );
						}
						else {
							#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapWidth = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this1.__bitmapData, "width", 1247983110, true))) );
						}
						
					}
					
					#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (( bitmapWidth <= 0 )) {
						#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
					}
					else if (this.keepAspect) {
						#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
					}
					else {
						#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double renderWidth = ( this.get_width().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("horizontal") )) );
						#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( renderWidth <= 0 )) {
							#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else {
							#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double scaleX = ( renderWidth / bitmapWidth );
							#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(scaleX, ((double) (1) ));
						}
						
					}
					
				}
				else {
					#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double bitmapWidth1 = default(double);
					#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					{
						#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						global::sx.backend.dummy.BitmapRenderer _this2 = this.renderer;
						#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( _this2.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this2.__bitmapData, "width", 1247983110, true) == null ) )) {
							#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapWidth1 = ((double) (0) );
						}
						else {
							#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapWidth1 = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this2.__bitmapData, "width", 1247983110, true))) );
						}
						
					}
					
					#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double bitmapHeight1 = default(double);
					#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					{
						#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						global::sx.backend.dummy.BitmapRenderer _this3 = this.renderer;
						#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( _this3.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this3.__bitmapData, "height", 38537191, true) == null ) )) {
							#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapHeight1 = ((double) (0) );
						}
						else {
							#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapHeight1 = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this3.__bitmapData, "height", 38537191, true))) );
						}
						
					}
					
					#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (( ( bitmapWidth1 <= 0 ) || ( bitmapHeight1 <= 0 ) )) {
						#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
					}
					else {
						#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double renderWidth1 = ( ( this.get_width().get_px() - this.get_padding().get_left().get_px() ) - this.get_padding().get_right().get_px() );
						#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double renderHeight1 = ( ( this.get_height().get_px() - this.get_padding().get_top().get_px() ) - this.get_padding().get_bottom().get_px() );
						#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( renderWidth1 <= 0 ) || ( renderHeight1 <= 0 ) )) {
							#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else {
							#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double scaleX1 = ( renderWidth1 / bitmapWidth1 );
							#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double scaleY1 = ( renderHeight1 / bitmapHeight1 );
							#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (this.keepAspect) {
								#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								if (( scaleX1 < scaleY1 )) {
									#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleX1, scaleX1);
								}
								else {
									#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleY1, scaleY1);
								}
								
							}
							else {
								#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(scaleX1, scaleY1);
							}
							
						}
						
					}
					
				}
				
			}
			#line default
		}
		
		
		public void __scaleBitmapHeight() {
			unchecked {
				#line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				double bitmapHeight = default(double);
				#line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				{
					#line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					global::sx.backend.dummy.BitmapRenderer _this = this.renderer;
					#line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (( ( _this.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this.__bitmapData, "height", 38537191, true) == null ) )) {
						#line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						bitmapHeight = ((double) (0) );
					}
					else {
						#line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						bitmapHeight = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this.__bitmapData, "height", 38537191, true))) );
					}
					
				}
				
				#line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (( bitmapHeight <= 0 )) {
					#line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
				}
				else if (this.keepAspect) {
					#line 129 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
				}
				else {
					#line 132 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double renderHeight = ( this.get_height().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("vertical") )) );
					if (( renderHeight <= 0 )) {
						#line 134 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
					}
					else {
						#line 136 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double scaleY = ( renderHeight / bitmapHeight );
						this.renderer.setBitmapScale(((double) (1) ), scaleY);
					}
					
				}
				
			}
			#line default
		}
		
		
		public void __scaleBitmapWidth() {
			unchecked {
				#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				double bitmapWidth = default(double);
				#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				{
					#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					global::sx.backend.dummy.BitmapRenderer _this = this.renderer;
					#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (( ( _this.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this.__bitmapData, "width", 1247983110, true) == null ) )) {
						#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						bitmapWidth = ((double) (0) );
					}
					else {
						#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						bitmapWidth = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this.__bitmapData, "width", 1247983110, true))) );
					}
					
				}
				
				#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (( bitmapWidth <= 0 )) {
					#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
				}
				else if (this.keepAspect) {
					#line 156 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
				}
				else {
					#line 159 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double renderWidth = ( this.get_width().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("horizontal") )) );
					if (( renderWidth <= 0 )) {
						#line 161 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
					}
					else {
						#line 163 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double scaleX = ( renderWidth / bitmapWidth );
						this.renderer.setBitmapScale(scaleX, ((double) (1) ));
					}
					
				}
				
			}
			#line default
		}
		
		
		public void __scaleBitmapBoth() {
			#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			double bitmapWidth = default(double);
			#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			{
				#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				global::sx.backend.dummy.BitmapRenderer _this = this.renderer;
				#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (( ( _this.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this.__bitmapData, "width", 1247983110, true) == null ) )) {
					#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					bitmapWidth = ((double) (0) );
				}
				else {
					#line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					bitmapWidth = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this.__bitmapData, "width", 1247983110, true))) );
				}
				
			}
			
			#line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			double bitmapHeight = default(double);
			#line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			{
				#line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				global::sx.backend.dummy.BitmapRenderer _this1 = this.renderer;
				#line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (( ( _this1.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this1.__bitmapData, "height", 38537191, true) == null ) )) {
					#line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					bitmapHeight = ((double) (0) );
				}
				else {
					#line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					bitmapHeight = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this1.__bitmapData, "height", 38537191, true))) );
				}
				
			}
			
			#line 179 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (( ( bitmapWidth <= 0 ) || ( bitmapHeight <= 0 ) )) {
				#line 180 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
			}
			else {
				#line 183 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				double renderWidth = ( ( this.get_width().get_px() - this.get_padding().get_left().get_px() ) - this.get_padding().get_right().get_px() );
				double renderHeight = ( ( this.get_height().get_px() - this.get_padding().get_top().get_px() ) - this.get_padding().get_bottom().get_px() );
				#line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (( ( renderWidth <= 0 ) || ( renderHeight <= 0 ) )) {
					#line 187 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
				}
				else {
					#line 190 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double scaleX = ( renderWidth / bitmapWidth );
					double scaleY = ( renderHeight / bitmapHeight );
					#line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (this.keepAspect) {
						#line 194 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( scaleX < scaleY )) {
							#line 195 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(scaleX, scaleX);
						}
						else {
							#line 197 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(scaleY, scaleY);
						}
						
					}
					else {
						#line 200 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(scaleX, scaleY);
					}
					
				}
				
			}
			
		}
		#line default
		
		public virtual object set_bitmapData(object @value) {
			#line 212 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			this.bitmapData = @value;
			this.renderer.setBitmapData(this.bitmapData);
			#line 215 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			return @value;
		}
		#line default
		
		public virtual bool set_keepAspect(bool @value) {
			unchecked {
				#line 224 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (( this.keepAspect != @value )) {
					#line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.keepAspect = @value;
					if (this.autoSize.both()) {
						#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
					}
					else if (this.autoSize.get_width()) {
						#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapHeight = default(double);
						#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this = this.renderer;
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this.__bitmapData, "height", 38537191, true) == null ) )) {
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight = ((double) (0) );
							}
							else {
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this.__bitmapData, "height", 38537191, true))) );
							}
							
						}
						
						#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( bitmapHeight <= 0 )) {
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else if (this.keepAspect) {
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
						}
						else {
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight = ( this.get_height().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("vertical") )) );
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( renderHeight <= 0 )) {
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else {
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY = ( renderHeight / bitmapHeight );
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (1) ), scaleY);
							}
							
						}
						
					}
					else if (this.autoSize.get_height()) {
						#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth = default(double);
						#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this1 = this.renderer;
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this1.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this1.__bitmapData, "width", 1247983110, true) == null ) )) {
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (0) );
							}
							else {
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this1.__bitmapData, "width", 1247983110, true))) );
							}
							
						}
						
						#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( bitmapWidth <= 0 )) {
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else if (this.keepAspect) {
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
						}
						else {
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderWidth = ( this.get_width().get_px() - global::sx.tools.PaddingTools.sumPx(this.get_padding(), ((string) ("horizontal") )) );
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( renderWidth <= 0 )) {
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else {
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleX = ( renderWidth / bitmapWidth );
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(scaleX, ((double) (1) ));
							}
							
						}
						
					}
					else {
						#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth1 = default(double);
						#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this2 = this.renderer;
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this2.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this2.__bitmapData, "width", 1247983110, true) == null ) )) {
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (0) );
							}
							else {
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this2.__bitmapData, "width", 1247983110, true))) );
							}
							
						}
						
						#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapHeight1 = default(double);
						#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							global::sx.backend.dummy.BitmapRenderer _this3 = this.renderer;
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this3.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(_this3.__bitmapData, "height", 38537191, true) == null ) )) {
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (0) );
							}
							else {
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(_this3.__bitmapData, "height", 38537191, true))) );
							}
							
						}
						
						#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( bitmapWidth1 <= 0 ) || ( bitmapHeight1 <= 0 ) )) {
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else {
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderWidth1 = ( ( this.get_width().get_px() - this.get_padding().get_left().get_px() ) - this.get_padding().get_right().get_px() );
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight1 = ( ( this.get_height().get_px() - this.get_padding().get_top().get_px() ) - this.get_padding().get_bottom().get_px() );
							#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( renderWidth1 <= 0 ) || ( renderHeight1 <= 0 ) )) {
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else {
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleX1 = ( renderWidth1 / bitmapWidth1 );
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY1 = ( renderHeight1 / bitmapHeight1 );
								#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								if (this.keepAspect) {
									#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									if (( scaleX1 < scaleY1 )) {
										#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleX1, scaleX1);
									}
									else {
										#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleY1, scaleY1);
									}
									
								}
								else {
									#line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleX1, scaleY1);
								}
								
							}
							
						}
						
					}
					
				}
				
				#line 229 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				return @value;
			}
			#line default
		}
		
		
		public virtual bool set_smooth(bool @value) {
			#line 238 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (( this.smooth != @value )) {
				#line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				this.smooth = @value;
				this.renderer.setBitmapSmoothing(this.smooth);
			}
			
			#line 243 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			return @value;
		}
		#line default
		
		public override global::sx.backend.interfaces.IRenderer get___renderer() {
			#line 248 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			return this.renderer;
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				switch (hash) {
					case 868267449:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (handleProperties) {
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.set_bitmapData(@value);
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return @value;
						}
						else {
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.bitmapData = ((object) (@value) );
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return @value;
						}
						
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				switch (hash) {
					case 986431774:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.__dontUpdateBitmapScaling = global::haxe.lang.Runtime.toBool(@value);
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return @value;
					}
					
					
					case 124454958:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (handleProperties) {
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.set_smooth(global::haxe.lang.Runtime.toBool(@value));
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return @value;
						}
						else {
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.smooth = global::haxe.lang.Runtime.toBool(@value);
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return @value;
						}
						
					}
					
					
					case 1497730109:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (handleProperties) {
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.set_keepAspect(global::haxe.lang.Runtime.toBool(@value));
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return @value;
						}
						else {
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.keepAspect = global::haxe.lang.Runtime.toBool(@value);
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return @value;
						}
						
					}
					
					
					case 853263683:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer = ((global::sx.backend.dummy.BitmapRenderer) (@value) );
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return @value;
					}
					
					
					case 868267449:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (handleProperties) {
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.set_bitmapData(@value);
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return @value;
						}
						else {
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.bitmapData = ((object) (@value) );
							#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return @value;
						}
						
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				switch (hash) {
					case 1275707564:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get___renderer", 1275707564)) );
					}
					
					
					case 2070943339:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_smooth", 2070943339)) );
					}
					
					
					case 1868233978:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_keepAspect", 1868233978)) );
					}
					
					
					case 1238771318:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_bitmapData", 1238771318)) );
					}
					
					
					case 1694907418:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__scaleBitmapBoth", 1694907418)) );
					}
					
					
					case 332736589:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__scaleBitmapWidth", 332736589)) );
					}
					
					
					case 2096993216:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__scaleBitmapHeight", 2096993216)) );
					}
					
					
					case 387124015:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__updateBitmapScaling", 387124015)) );
					}
					
					
					case 1708856292:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__autoSizeChanged", 1708856292)) );
					}
					
					
					case 1935431235:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__paddingChanged", 1935431235)) );
					}
					
					
					case 750735611:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__propertyResized", 750735611)) );
					}
					
					
					case 961924991:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__createRenderer", 961924991)) );
					}
					
					
					case 986431774:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.__dontUpdateBitmapScaling;
					}
					
					
					case 124454958:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.smooth;
					}
					
					
					case 1497730109:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.keepAspect;
					}
					
					
					case 853263683:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.renderer;
					}
					
					
					case 868267449:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.bitmapData;
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				switch (hash) {
					case 868267449:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(this.bitmapData)) );
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				switch (hash) {
					case 961924991:
					case 750735611:
					case 1935431235:
					case 1708856292:
					case 1275707564:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return global::haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					
					case 2070943339:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.set_smooth(global::haxe.lang.Runtime.toBool(dynargs[0]));
					}
					
					
					case 1868233978:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.set_keepAspect(global::haxe.lang.Runtime.toBool(dynargs[0]));
					}
					
					
					case 1238771318:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.set_bitmapData(dynargs[0]);
					}
					
					
					case 1694907418:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.__scaleBitmapBoth();
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						break;
					}
					
					
					case 332736589:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.__scaleBitmapWidth();
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						break;
					}
					
					
					case 2096993216:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.__scaleBitmapHeight();
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						break;
					}
					
					
					case 387124015:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.__updateBitmapScaling();
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						break;
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			baseArr.push("__dontUpdateBitmapScaling");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			baseArr.push("smooth");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			baseArr.push("keepAspect");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			baseArr.push("renderer");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			baseArr.push("bitmapData");
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			{
				#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


