
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.backend.dummy {
	public class BackendManager : global::haxe.lang.HxObject, global::sx.backend.interfaces.IBackendManager {
		
		public BackendManager(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public BackendManager() {
			#line 29 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			global::sx.backend.dummy.BackendManager.__hx_ctor_sx_backend_dummy_BackendManager(this);
		}
		#line default
		
		public static void __hx_ctor_sx_backend_dummy_BackendManager(global::sx.backend.dummy.BackendManager __temp_me128) {
		}
		
		
		public static new object __hx_createEmpty() {
			#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			return new global::sx.backend.dummy.BackendManager(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			return new global::sx.backend.dummy.BackendManager();
		}
		#line default
		
		public global::sx.widgets.Widget __root;
		
		public virtual void setupPointerDevices() {
		}
		
		
		public virtual void setupFrames() {
		}
		
		
		public virtual global::sx.backend.dummy.Point getPointerPosition(global::haxe.lang.Null<int> touchId) {
			#line 60 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			int __temp_touchId127 = ( ( ! (touchId.hasValue) ) ? (0) : ((touchId).@value) );
			#line 60 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			return new global::sx.backend.dummy.Point(default(global::haxe.lang.Null<double>), default(global::haxe.lang.Null<double>));
		}
		#line default
		
		public virtual global::sx.widgets.Widget getRoot() {
			#line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			if (( this.__root == null )) {
				#line 70 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
				this.__root = new global::sx.widgets.Widget();
			}
			
			#line 73 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			return this.__root;
		}
		#line default
		
		public virtual global::sx.backend.dummy.Backend widgetBackend(global::sx.widgets.Widget widget) {
			#line 82 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			return new global::sx.backend.dummy.Backend(((global::sx.widgets.Widget) (widget) ));
		}
		#line default
		
		public virtual global::sx.backend.dummy.TextRenderer textRenderer(global::sx.widgets.Text textField) {
			#line 91 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			return new global::sx.backend.dummy.TextRenderer(((global::sx.widgets.Text) (textField) ));
		}
		#line default
		
		public virtual global::sx.backend.dummy.TextInputRenderer textInputRenderer(global::sx.widgets.TextInput textInput) {
			#line 100 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			return new global::sx.backend.dummy.TextInputRenderer(((global::sx.widgets.TextInput) (textInput) ));
		}
		#line default
		
		public virtual global::sx.backend.dummy.BitmapRenderer bitmapRenderer(global::sx.widgets.Bmp bmp) {
			#line 109 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			return new global::sx.backend.dummy.BitmapRenderer(((global::sx.widgets.Bmp) (bmp) ));
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
				switch (hash) {
					case 2057785666:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						this.__root = ((global::sx.widgets.Widget) (@value) );
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return @value;
					}
					
					
					default:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
				switch (hash) {
					case 2116130898:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "bitmapRenderer", 2116130898)) );
					}
					
					
					case 40221312:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "textInputRenderer", 40221312)) );
					}
					
					
					case 1733772048:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "textRenderer", 1733772048)) );
					}
					
					
					case 97088688:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "widgetBackend", 97088688)) );
					}
					
					
					case 506568152:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getRoot", 506568152)) );
					}
					
					
					case 2089697936:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getPointerPosition", 2089697936)) );
					}
					
					
					case 221990403:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setupFrames", 221990403)) );
					}
					
					
					case 2009436989:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setupPointerDevices", 2009436989)) );
					}
					
					
					case 2057785666:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return this.__root;
					}
					
					
					default:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
				switch (hash) {
					case 2116130898:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return this.bitmapRenderer(((global::sx.widgets.Bmp) (dynargs[0]) ));
					}
					
					
					case 40221312:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return this.textInputRenderer(((global::sx.widgets.TextInput) (dynargs[0]) ));
					}
					
					
					case 1733772048:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return this.textRenderer(((global::sx.widgets.Text) (dynargs[0]) ));
					}
					
					
					case 97088688:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return this.widgetBackend(((global::sx.widgets.Widget) (dynargs[0]) ));
					}
					
					
					case 506568152:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return this.getRoot();
					}
					
					
					case 2089697936:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return this.getPointerPosition(global::haxe.lang.Null<object>.ofDynamic<int>(dynargs[0]));
					}
					
					
					case 221990403:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						this.setupFrames();
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						break;
					}
					
					
					case 2009436989:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						this.setupPointerDevices();
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						break;
					}
					
					
					default:
					{
						#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			baseArr.push("__root");
			#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
			{
				#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


