
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.backend.dummy {
	public class BitmapRenderer : global::haxe.lang.HxObject, global::sx.backend.interfaces.IBitmapRenderer {
		
		public BitmapRenderer(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public BitmapRenderer(global::sx.widgets.Bmp bmp) {
			#line 26 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			global::sx.backend.dummy.BitmapRenderer.__hx_ctor_sx_backend_dummy_BitmapRenderer(this, bmp);
		}
		#line default
		
		public static void __hx_ctor_sx_backend_dummy_BitmapRenderer(global::sx.backend.dummy.BitmapRenderer __temp_me129, global::sx.widgets.Bmp bmp) {
			#line 28 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			__temp_me129.__bmp = bmp;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			return new global::sx.backend.dummy.BitmapRenderer(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			return new global::sx.backend.dummy.BitmapRenderer(((global::sx.widgets.Bmp) (arr[0]) ));
		}
		#line default
		
		public global::sx.widgets.Bmp __bmp;
		
		public object __bitmapData;
		
		public global::haxe.lang.Function __onResize;
		
		public virtual void setBitmapData(object bitmapData) {
			#line 37 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			this.__bitmapData = bitmapData;
		}
		#line default
		
		public double getBitmapDataWidth() {
			#line 46 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			if (( ( this.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(this.__bitmapData, "width", 1247983110, true) == null ) )) {
				#line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				return ((double) (0) );
			}
			else {
				#line 49 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				return ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(this.__bitmapData, "width", 1247983110, true))) );
			}
			
		}
		#line default
		
		public double getBitmapDataHeight() {
			#line 59 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			if (( ( this.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(this.__bitmapData, "height", 38537191, true) == null ) )) {
				#line 60 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				return ((double) (0) );
			}
			else {
				#line 62 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				return ((double) (global::haxe.lang.Runtime.toDouble(global::haxe.lang.Runtime.getField(this.__bitmapData, "height", 38537191, true))) );
			}
			
		}
		#line default
		
		public virtual void setBitmapScale(double scaleX, double scaleY) {
		}
		
		
		public virtual void setBitmapSmoothing(bool smooth) {
		}
		
		
		public virtual double getWidth() {
			#line 90 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			return ((double) (( (( ( this.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(this.__bitmapData, "width", 1247983110, true) == null ) )) ? (0) : (((int) (global::haxe.lang.Runtime.toInt(global::haxe.lang.Runtime.getField(this.__bitmapData, "width", 1247983110, true))) )) )) );
		}
		#line default
		
		public virtual double getHeight() {
			#line 99 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			return ((double) (( (( ( this.__bitmapData == null ) || ( global::haxe.lang.Runtime.getField(this.__bitmapData, "height", 38537191, true) == null ) )) ? (0) : (((int) (global::haxe.lang.Runtime.toInt(global::haxe.lang.Runtime.getField(this.__bitmapData, "height", 38537191, true))) )) )) );
		}
		#line default
		
		public virtual void onResize(global::haxe.lang.Function callback) {
			#line 110 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			this.__onResize = callback;
		}
		#line default
		
		public virtual void setAvailableAreaWidth(double width) {
			#line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			if (( this.__bitmapData != null )) {
				#line 120 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				global::haxe.lang.Runtime.setField(this.__bitmapData, "width", 1247983110, width);
			}
			
		}
		#line default
		
		public virtual void setAvailableAreaHeight(double height) {
			#line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			if (( this.__bitmapData != null )) {
				#line 131 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				global::haxe.lang.Runtime.setField(this.__bitmapData, "height", 38537191, height);
			}
			
		}
		#line default
		
		public virtual void dispose() {
			#line 141 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			this.__bmp = null;
			this.__onResize = null;
			this.__bitmapData = null;
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				switch (hash) {
					case 1817456857:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.__bitmapData = ((object) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return @value;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				switch (hash) {
					case 190890899:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.__onResize = ((global::haxe.lang.Function) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return @value;
					}
					
					
					case 1817456857:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.__bitmapData = ((object) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return @value;
					}
					
					
					case 1915165989:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.__bmp = ((global::sx.widgets.Bmp) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return @value;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				switch (hash) {
					case 994869407:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "dispose", 994869407)) );
					}
					
					
					case 1925475323:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setAvailableAreaHeight", 1925475323)) );
					}
					
					
					case 659386482:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setAvailableAreaWidth", 659386482)) );
					}
					
					
					case 1747472499:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "onResize", 1747472499)) );
					}
					
					
					case 2124583197:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getHeight", 2124583197)) );
					}
					
					
					case 708429200:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getWidth", 708429200)) );
					}
					
					
					case 925467139:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setBitmapSmoothing", 925467139)) );
					}
					
					
					case 1625507737:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setBitmapScale", 1625507737)) );
					}
					
					
					case 784345910:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getBitmapDataHeight", 784345910)) );
					}
					
					
					case 1424667031:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getBitmapDataWidth", 1424667031)) );
					}
					
					
					case 1429795835:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setBitmapData", 1429795835)) );
					}
					
					
					case 190890899:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return this.__onResize;
					}
					
					
					case 1817456857:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return this.__bitmapData;
					}
					
					
					case 1915165989:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return this.__bmp;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				switch (hash) {
					case 1817456857:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(this.__bitmapData)) );
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				switch (hash) {
					case 994869407:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.dispose();
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						break;
					}
					
					
					case 1925475323:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.setAvailableAreaHeight(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						break;
					}
					
					
					case 659386482:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.setAvailableAreaWidth(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						break;
					}
					
					
					case 1747472499:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.onResize(((global::haxe.lang.Function) (dynargs[0]) ));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						break;
					}
					
					
					case 2124583197:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return this.getHeight();
					}
					
					
					case 708429200:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return this.getWidth();
					}
					
					
					case 925467139:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.setBitmapSmoothing(global::haxe.lang.Runtime.toBool(dynargs[0]));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						break;
					}
					
					
					case 1625507737:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.setBitmapScale(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ), ((double) (global::haxe.lang.Runtime.toDouble(dynargs[1])) ));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						break;
					}
					
					
					case 784345910:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return this.getBitmapDataHeight();
					}
					
					
					case 1424667031:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return this.getBitmapDataWidth();
					}
					
					
					case 1429795835:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						this.setBitmapData(dynargs[0]);
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						break;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			baseArr.push("__onResize");
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			baseArr.push("__bitmapData");
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			baseArr.push("__bmp");
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
			{
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


