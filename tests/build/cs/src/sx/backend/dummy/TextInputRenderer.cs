
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.backend.dummy {
	public class TextInputRenderer : global::haxe.lang.HxObject, global::sx.backend.interfaces.ITextInputRenderer {
		
		public TextInputRenderer(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public TextInputRenderer(global::sx.widgets.TextInput textInput) {
			#line 33 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			global::sx.backend.dummy.TextInputRenderer.__hx_ctor_sx_backend_dummy_TextInputRenderer(this, textInput);
		}
		#line default
		
		public static void __hx_ctor_sx_backend_dummy_TextInputRenderer(global::sx.backend.dummy.TextInputRenderer __temp_me133, global::sx.widgets.TextInput textInput) {
			#line 27 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			__temp_me133.__height = ((double) (((int) (0) )) );
			#line 25 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			__temp_me133.__width = ((double) (((int) (0) )) );
			#line 19 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			__temp_me133.__text = "";
			#line 35 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			__temp_me133.__textInput = textInput;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			return new global::sx.backend.dummy.TextInputRenderer(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			return new global::sx.backend.dummy.TextInputRenderer(((global::sx.widgets.TextInput) (arr[0]) ));
		}
		#line default
		
		public global::sx.widgets.TextInput __textInput;
		
		
		
		public string __text;
		
		public global::haxe.lang.Function __onTextChange;
		
		public object __format;
		
		public double __width;
		
		public double __height;
		
		public virtual void onTextChange(global::haxe.lang.Function onTextChange) {
			#line 44 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			this.__onTextChange = onTextChange;
		}
		#line default
		
		public virtual void onReceiveCursor(global::haxe.lang.Function callback) {
		}
		
		
		public virtual void onLoseCursor(global::haxe.lang.Function callback) {
		}
		
		
		public virtual string getText() {
			#line 71 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			return this.__text;
		}
		#line default
		
		public virtual void setText(string text) {
			#line 81 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			this.__text = text;
		}
		#line default
		
		public virtual object getFormat() {
			#line 90 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			return this.__format;
		}
		#line default
		
		public virtual void setFormat(object format) {
			#line 99 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			this.__format = format;
		}
		#line default
		
		public virtual void onResize(global::haxe.lang.Function callback) {
		}
		
		
		public virtual double getWidth() {
			#line 117 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			return this.__width;
		}
		#line default
		
		public virtual double getHeight() {
			#line 126 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			return this.__height;
		}
		#line default
		
		public virtual void setAvailableAreaWidth(double width) {
			#line 135 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			this.__width = width;
		}
		#line default
		
		public virtual void setAvailableAreaHeight(double height) {
			#line 144 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			this.__height = height;
		}
		#line default
		
		public virtual void dispose() {
			#line 153 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			this.__textInput = null;
		}
		#line default
		
		public virtual string set_text(string @value) {
			#line 162 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			this.__text = @value;
			if (( this.__onTextChange != null )) {
				#line 163 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				this.__onTextChange.__hx_invoke1_o(default(double), @value);
			}
			
			#line 165 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			return @value;
		}
		#line default
		
		public virtual string get_text() {
			#line 170 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			return this.__text;
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				switch (hash) {
					case 712733447:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__height = ((double) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return @value;
					}
					
					
					case 885067494:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__width = ((double) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return @value;
					}
					
					
					case 633207383:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__format = ((object) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return @value;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				switch (hash) {
					case 712733447:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__height = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return @value;
					}
					
					
					case 885067494:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__width = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return @value;
					}
					
					
					case 633207383:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__format = ((object) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return @value;
					}
					
					
					case 1734817564:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__onTextChange = ((global::haxe.lang.Function) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return @value;
					}
					
					
					case 2079469517:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__text = global::haxe.lang.Runtime.toString(@value);
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return @value;
					}
					
					
					case 1291439277:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.set_text(global::haxe.lang.Runtime.toString(@value));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return @value;
					}
					
					
					case 87530749:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.__textInput = ((global::sx.widgets.TextInput) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return @value;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				switch (hash) {
					case 1286899766:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_text", 1286899766)) );
					}
					
					
					case 2064769450:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_text", 2064769450)) );
					}
					
					
					case 994869407:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "dispose", 994869407)) );
					}
					
					
					case 1925475323:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setAvailableAreaHeight", 1925475323)) );
					}
					
					
					case 659386482:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setAvailableAreaWidth", 659386482)) );
					}
					
					
					case 2124583197:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getHeight", 2124583197)) );
					}
					
					
					case 708429200:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getWidth", 708429200)) );
					}
					
					
					case 1747472499:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "onResize", 1747472499)) );
					}
					
					
					case 1563821177:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setFormat", 1563821177)) );
					}
					
					
					case 2045057133:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getFormat", 2045057133)) );
					}
					
					
					case 310250863:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setText", 310250863)) );
					}
					
					
					case 528252003:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getText", 528252003)) );
					}
					
					
					case 2071518346:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "onLoseCursor", 2071518346)) );
					}
					
					
					case 2028001402:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "onReceiveCursor", 2028001402)) );
					}
					
					
					case 1185330172:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "onTextChange", 1185330172)) );
					}
					
					
					case 712733447:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__height;
					}
					
					
					case 885067494:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__width;
					}
					
					
					case 633207383:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__format;
					}
					
					
					case 1734817564:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__onTextChange;
					}
					
					
					case 2079469517:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__text;
					}
					
					
					case 1291439277:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.get_text();
					}
					
					
					case 87530749:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__textInput;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				switch (hash) {
					case 712733447:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__height;
					}
					
					
					case 885067494:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.__width;
					}
					
					
					case 633207383:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(this.__format)) );
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				switch (hash) {
					case 1286899766:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.get_text();
					}
					
					
					case 2064769450:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.set_text(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					case 994869407:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.dispose();
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						break;
					}
					
					
					case 1925475323:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.setAvailableAreaHeight(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						break;
					}
					
					
					case 659386482:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.setAvailableAreaWidth(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						break;
					}
					
					
					case 2124583197:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.getHeight();
					}
					
					
					case 708429200:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.getWidth();
					}
					
					
					case 1747472499:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.onResize(((global::haxe.lang.Function) (dynargs[0]) ));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						break;
					}
					
					
					case 1563821177:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.setFormat(dynargs[0]);
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						break;
					}
					
					
					case 2045057133:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.getFormat();
					}
					
					
					case 310250863:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.setText(global::haxe.lang.Runtime.toString(dynargs[0]));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						break;
					}
					
					
					case 528252003:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return this.getText();
					}
					
					
					case 2071518346:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.onLoseCursor(((global::haxe.lang.Function) (dynargs[0]) ));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						break;
					}
					
					
					case 2028001402:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.onReceiveCursor(((global::haxe.lang.Function) (dynargs[0]) ));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						break;
					}
					
					
					case 1185330172:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						this.onTextChange(((global::haxe.lang.Function) (dynargs[0]) ));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						break;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			baseArr.push("__height");
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			baseArr.push("__width");
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			baseArr.push("__format");
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			baseArr.push("__onTextChange");
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			baseArr.push("__text");
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			baseArr.push("text");
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			baseArr.push("__textInput");
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
			{
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


