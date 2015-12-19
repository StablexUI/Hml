
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.backend.dummy {
	public class TextRenderer : global::haxe.lang.HxObject, global::sx.backend.interfaces.ITextRenderer {
		
		public TextRenderer(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public TextRenderer(global::sx.widgets.Text textField) {
			#line 28 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			global::sx.backend.dummy.TextRenderer.__hx_ctor_sx_backend_dummy_TextRenderer(this, textField);
		}
		#line default
		
		public static void __hx_ctor_sx_backend_dummy_TextRenderer(global::sx.backend.dummy.TextRenderer __temp_me134, global::sx.widgets.Text textField) {
			#line 18 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			__temp_me134.__text = "";
			#line 30 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			__temp_me134.__textField = textField;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			return new global::sx.backend.dummy.TextRenderer(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			return new global::sx.backend.dummy.TextRenderer(((global::sx.widgets.Text) (arr[0]) ));
		}
		#line default
		
		public global::sx.widgets.Text __textField;
		
		public string __text;
		
		public global::haxe.lang.Function __onResize;
		
		public object __format;
		
		public virtual void setText(string text) {
			#line 39 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			this.__text = text;
			if (( this.__onResize != null )) {
				#line 40 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				this.__onResize.__hx_invoke2_o(this.getWidth(), global::haxe.lang.Runtime.undefined, this.getHeight(), global::haxe.lang.Runtime.undefined);
			}
			
		}
		#line default
		
		public virtual object getFormat() {
			#line 49 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			return this.__format;
		}
		#line default
		
		public virtual void setFormat(object format) {
			#line 58 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			this.__format = format;
		}
		#line default
		
		public virtual void onResize(global::haxe.lang.Function callback) {
			#line 67 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			this.__onResize = callback;
		}
		#line default
		
		public virtual double getWidth() {
			unchecked {
				#line 77 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				int max = 0;
				int nlPos = 0;
				int prevPos = 0;
				do {
					#line 81 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					nlPos = global::haxe.lang.StringExt.indexOf(this.__text, "\n", new global::haxe.lang.Null<int>(prevPos, true));
					if (( ( nlPos > 0 ) && ( ( nlPos - prevPos ) > max ) )) {
						#line 83 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						max = ( nlPos - prevPos );
					}
					
					#line 85 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					prevPos = ( nlPos + 1 );
				}
				while (( nlPos >= 0 ));
				#line 88 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				return ((double) (max) );
			}
			#line default
		}
		
		
		public virtual double getHeight() {
			unchecked {
				#line 97 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				int linesCount = 0;
				int pos = global::haxe.lang.StringExt.indexOf(this.__text, "\n", default(global::haxe.lang.Null<int>));
				while (( pos >= 0 )) {
					#line 100 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
					pos = global::haxe.lang.StringExt.indexOf(this.__text, "\n", new global::haxe.lang.Null<int>(( pos + 1 ), true));
				}
				
				#line 103 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				return ((double) (linesCount) );
			}
			#line default
		}
		
		
		public virtual void setAvailableAreaWidth(double width) {
		}
		
		
		public virtual void setAvailableAreaHeight(double height) {
		}
		
		
		public virtual void dispose() {
			#line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			this.__textField = null;
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				switch (hash) {
					case 633207383:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.__format = ((object) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return @value;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				switch (hash) {
					case 633207383:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.__format = ((object) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return @value;
					}
					
					
					case 190890899:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.__onResize = ((global::haxe.lang.Function) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return @value;
					}
					
					
					case 2079469517:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.__text = global::haxe.lang.Runtime.toString(@value);
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return @value;
					}
					
					
					case 1202548141:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.__textField = ((global::sx.widgets.Text) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return @value;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				switch (hash) {
					case 994869407:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "dispose", 994869407)) );
					}
					
					
					case 1925475323:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setAvailableAreaHeight", 1925475323)) );
					}
					
					
					case 659386482:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setAvailableAreaWidth", 659386482)) );
					}
					
					
					case 2124583197:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getHeight", 2124583197)) );
					}
					
					
					case 708429200:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getWidth", 708429200)) );
					}
					
					
					case 1747472499:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "onResize", 1747472499)) );
					}
					
					
					case 1563821177:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setFormat", 1563821177)) );
					}
					
					
					case 2045057133:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getFormat", 2045057133)) );
					}
					
					
					case 310250863:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setText", 310250863)) );
					}
					
					
					case 633207383:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return this.__format;
					}
					
					
					case 190890899:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return this.__onResize;
					}
					
					
					case 2079469517:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return this.__text;
					}
					
					
					case 1202548141:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return this.__textField;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				switch (hash) {
					case 633207383:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(this.__format)) );
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				switch (hash) {
					case 994869407:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.dispose();
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						break;
					}
					
					
					case 1925475323:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.setAvailableAreaHeight(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						break;
					}
					
					
					case 659386482:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.setAvailableAreaWidth(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						break;
					}
					
					
					case 2124583197:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return this.getHeight();
					}
					
					
					case 708429200:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return this.getWidth();
					}
					
					
					case 1747472499:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.onResize(((global::haxe.lang.Function) (dynargs[0]) ));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						break;
					}
					
					
					case 1563821177:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.setFormat(dynargs[0]);
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						break;
					}
					
					
					case 2045057133:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return this.getFormat();
					}
					
					
					case 310250863:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						this.setText(global::haxe.lang.Runtime.toString(dynargs[0]));
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						break;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			baseArr.push("__format");
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			baseArr.push("__onResize");
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			baseArr.push("__text");
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			baseArr.push("__textField");
			#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
			{
				#line 13 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


