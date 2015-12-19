
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.widgets {
	public class TextInput : global::sx.widgets.@base.RendererHolder {
		
		public TextInput(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public TextInput() : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 40 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			global::sx.widgets.TextInput.__hx_ctor_sx_widgets_TextInput(this);
		}
		#line default
		
		public static void __hx_ctor_sx_widgets_TextInput(global::sx.widgets.TextInput __temp_me175) {
			unchecked {
				#line 32 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				__temp_me175.__hasCursor = false;
				#line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				__temp_me175.__invitation = "";
				#line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				__temp_me175.__text = "";
				#line 40 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				global::sx.widgets.@base.RendererHolder.__hx_ctor_sx_widgets_base_RendererHolder(__temp_me175);
				__temp_me175.get_width().set_dip(((double) (100) ));
				__temp_me175.renderer.onTextChange(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me175, "__rendererTextChanged", 1408069668)) ));
				__temp_me175.renderer.onReceiveCursor(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me175, "__rendererReceiveCursor", 1509738166)) ));
				__temp_me175.renderer.onLoseCursor(((global::haxe.lang.Function) (new global::haxe.lang.Closure(__temp_me175, "__rendererLoseCursor", 1316221134)) ));
			}
			#line default
		}
		
		
		public static new object __hx_createEmpty() {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			return new global::sx.widgets.TextInput(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			return new global::sx.widgets.TextInput();
		}
		#line default
		
		
		
		public string __text;
		
		
		
		public string __invitation;
		
		public global::sx.backend.dummy.TextInputRenderer renderer;
		
		
		
		public global::sx.signals.Signal<object> __onChange;
		
		public bool __hasCursor;
		
		public virtual object getTextFormat() {
			#line 53 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			return this.renderer.getFormat();
		}
		#line default
		
		public virtual void setTextFormat(object format) {
			#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.renderer.setFormat(format);
			#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			return;
		}
		#line default
		
		public override void __createRenderer() {
			#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.renderer = global::sx.Sx.get_backendManager().textInputRenderer(this);
		}
		#line default
		
		public virtual string set_text(string @value) {
			#line 80 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.__text = @value;
			if (( this.__hasCursor || ( this.get_text().Length > 0 ) )) {
				#line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				this.renderer.setText(this.get_text());
			}
			else {
				#line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				this.renderer.setText(this.get_invitation());
			}
			
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( this.__onChange != null ) && ( this.__onChange.__listeners.length > 0 ) )) {
				#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (this.__onChange.__listenersInUse) {
					#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g1 = this.__onChange.__listeners;
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
					this.__onChange.__listenersInUse = true;
					{
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g11 = this.__onChange.__listeners;
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
					this.__onChange.__listenersInUse = false;
				}
				
			}
			
			#line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			return @value;
		}
		#line default
		
		public virtual void __rendererTextChanged(string newText) {
			#line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.__text = newText;
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( this.__onChange != null ) && ( this.__onChange.__listeners.length > 0 ) )) {
				#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (this.__onChange.__listenersInUse) {
					#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g1 = this.__onChange.__listeners;
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
					this.__onChange.__listenersInUse = true;
					{
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g11 = this.__onChange.__listeners;
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
					this.__onChange.__listenersInUse = false;
				}
				
			}
			
		}
		#line default
		
		public virtual void __rendererReceiveCursor() {
			#line 104 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.__hasCursor = true;
			if (( this.__hasCursor || ( this.get_text().Length > 0 ) )) {
				#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				this.renderer.setText(this.get_text());
			}
			else {
				#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				this.renderer.setText(this.get_invitation());
			}
			
		}
		#line default
		
		public virtual void __rendererLoseCursor() {
			#line 114 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.__hasCursor = false;
			if (( this.__hasCursor || ( this.get_text().Length > 0 ) )) {
				#line 115 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				this.renderer.setText(this.get_text());
			}
			else {
				#line 115 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				this.renderer.setText(this.get_invitation());
			}
			
		}
		#line default
		
		public void __updateRendererContent() {
			#line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			if (( this.__hasCursor || ( this.get_text().Length > 0 ) )) {
				#line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				this.renderer.setText(this.get_text());
			}
			else {
				#line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				this.renderer.setText(this.get_invitation());
			}
			
		}
		#line default
		
		public virtual string set_invitation(string @value) {
			#line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.__invitation = @value;
			if (( this.__hasCursor || ( this.get_text().Length > 0 ) )) {
				#line 139 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				this.renderer.setText(this.get_text());
			}
			else {
				#line 139 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				this.renderer.setText(this.get_invitation());
			}
			
			#line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			return @value;
		}
		#line default
		
		public virtual string get_invitation() {
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			return this.__invitation;
		}
		#line default
		
		public virtual string get_text() {
			#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			return this.__text;
		}
		#line default
		
		public override global::sx.backend.interfaces.IRenderer get___renderer() {
			#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			return this.renderer;
		}
		#line default
		
		public virtual global::sx.signals.Signal<object> get_onChange() {
			#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			if (( this.__onChange == null )) {
				#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				return this.__onChange = new global::sx.signals.Signal<object>();
			}
			else {
				#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				return this.__onChange;
			}
			
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				switch (hash) {
					case 771590832:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__hasCursor = global::haxe.lang.Runtime.toBool(@value);
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return @value;
					}
					
					
					case 978844431:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__onChange = ((global::sx.signals.Signal<object>) (global::sx.signals.Signal<object>.__hx_cast<object>(((global::sx.signals.Signal) (@value) ))) );
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return @value;
					}
					
					
					case 853263683:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.renderer = ((global::sx.backend.dummy.TextInputRenderer) (@value) );
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return @value;
					}
					
					
					case 782827833:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__invitation = global::haxe.lang.Runtime.toString(@value);
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return @value;
					}
					
					
					case 1981122073:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.set_invitation(global::haxe.lang.Runtime.toString(@value));
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return @value;
					}
					
					
					case 2079469517:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__text = global::haxe.lang.Runtime.toString(@value);
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return @value;
					}
					
					
					case 1291439277:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.set_text(global::haxe.lang.Runtime.toString(@value));
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return @value;
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				switch (hash) {
					case 1278819320:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_onChange", 1278819320)) );
					}
					
					
					case 1275707564:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get___renderer", 1275707564)) );
					}
					
					
					case 1286899766:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_text", 1286899766)) );
					}
					
					
					case 1812663906:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_invitation", 1812663906)) );
					}
					
					
					case 204142294:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_invitation", 204142294)) );
					}
					
					
					case 144194317:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__updateRendererContent", 144194317)) );
					}
					
					
					case 1316221134:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__rendererLoseCursor", 1316221134)) );
					}
					
					
					case 1509738166:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__rendererReceiveCursor", 1509738166)) );
					}
					
					
					case 1408069668:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__rendererTextChanged", 1408069668)) );
					}
					
					
					case 2064769450:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_text", 2064769450)) );
					}
					
					
					case 961924991:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__createRenderer", 961924991)) );
					}
					
					
					case 1442270726:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setTextFormat", 1442270726)) );
					}
					
					
					case 284257274:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getTextFormat", 284257274)) );
					}
					
					
					case 771590832:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.__hasCursor;
					}
					
					
					case 978844431:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.__onChange;
					}
					
					
					case 387942383:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.get_onChange();
					}
					
					
					case 853263683:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.renderer;
					}
					
					
					case 782827833:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.__invitation;
					}
					
					
					case 1981122073:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.get_invitation();
					}
					
					
					case 2079469517:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.__text;
					}
					
					
					case 1291439277:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.get_text();
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				switch (hash) {
					case 961924991:
					case 1275707564:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return global::haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					
					case 1278819320:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.get_onChange();
					}
					
					
					case 1286899766:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.get_text();
					}
					
					
					case 1812663906:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.get_invitation();
					}
					
					
					case 204142294:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.set_invitation(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					case 144194317:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__updateRendererContent();
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						break;
					}
					
					
					case 1316221134:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__rendererLoseCursor();
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						break;
					}
					
					
					case 1509738166:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__rendererReceiveCursor();
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						break;
					}
					
					
					case 1408069668:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__rendererTextChanged(global::haxe.lang.Runtime.toString(dynargs[0]));
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						break;
					}
					
					
					case 2064769450:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.set_text(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					case 1442270726:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.setTextFormat(dynargs[0]);
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						break;
					}
					
					
					case 284257274:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.getTextFormat();
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			baseArr.push("__hasCursor");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			baseArr.push("__onChange");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			baseArr.push("onChange");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			baseArr.push("renderer");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			baseArr.push("__invitation");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			baseArr.push("invitation");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			baseArr.push("__text");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			baseArr.push("text");
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			{
				#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


