
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.widgets {
	public class Text : global::sx.widgets.@base.RendererHolder {
		
		public Text(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public Text() : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			global::sx.widgets.Text.__hx_ctor_sx_widgets_Text(this);
		}
		#line default
		
		public static void __hx_ctor_sx_widgets_Text(global::sx.widgets.Text __temp_me174) {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			__temp_me174.__text = "";
			#line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			global::sx.widgets.@base.RendererHolder.__hx_ctor_sx_widgets_base_RendererHolder(__temp_me174);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			return new global::sx.widgets.Text(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			return new global::sx.widgets.Text();
		}
		#line default
		
		
		
		public string __text;
		
		public global::sx.backend.dummy.TextRenderer renderer;
		
		public virtual object getTextFormat() {
			#line 28 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			return this.renderer.getFormat();
		}
		#line default
		
		public virtual void setTextFormat(object format) {
			#line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			this.renderer.setFormat(format);
			#line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			return;
		}
		#line default
		
		public override void __createRenderer() {
			#line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			this.renderer = global::sx.Sx.get_backendManager().textRenderer(this);
		}
		#line default
		
		public virtual string set_text(string @value) {
			#line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			this.__text = @value;
			this.renderer.setText(this.__text);
			#line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			return @value;
		}
		#line default
		
		public virtual string get_text() {
			#line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			return this.__text;
		}
		#line default
		
		public override global::sx.backend.interfaces.IRenderer get___renderer() {
			#line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			return this.renderer;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
				switch (hash) {
					case 853263683:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						this.renderer = ((global::sx.backend.dummy.TextRenderer) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return @value;
					}
					
					
					case 2079469517:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						this.__text = global::haxe.lang.Runtime.toString(@value);
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return @value;
					}
					
					
					case 1291439277:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						this.set_text(global::haxe.lang.Runtime.toString(@value));
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return @value;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
				switch (hash) {
					case 1275707564:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get___renderer", 1275707564)) );
					}
					
					
					case 1286899766:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_text", 1286899766)) );
					}
					
					
					case 2064769450:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_text", 2064769450)) );
					}
					
					
					case 961924991:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__createRenderer", 961924991)) );
					}
					
					
					case 1442270726:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setTextFormat", 1442270726)) );
					}
					
					
					case 284257274:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getTextFormat", 284257274)) );
					}
					
					
					case 853263683:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return this.renderer;
					}
					
					
					case 2079469517:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return this.__text;
					}
					
					
					case 1291439277:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return this.get_text();
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
				switch (hash) {
					case 961924991:
					case 1275707564:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return global::haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					
					case 1286899766:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return this.get_text();
					}
					
					
					case 2064769450:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return this.set_text(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					case 1442270726:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						this.setTextFormat(dynargs[0]);
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						break;
					}
					
					
					case 284257274:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return this.getTextFormat();
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			baseArr.push("renderer");
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			baseArr.push("__text");
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			baseArr.push("text");
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
			{
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


