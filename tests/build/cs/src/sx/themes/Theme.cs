
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.themes {
	public class Theme : global::haxe.lang.HxObject {
		
		static Theme() {
			#line 16 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			global::sx.themes.Theme.DEFAULT_STYLE = "__DEFAULT__";
		}
		#line default
		
		public Theme(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Theme() {
			#line 25 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			global::sx.themes.Theme.__hx_ctor_sx_themes_Theme(this);
		}
		#line default
		
		public static void __hx_ctor_sx_themes_Theme(global::sx.themes.Theme __temp_me164) {
			#line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			__temp_me164.__styles = new global::haxe.ds.StringMap<object>();
			#line 29 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			__temp_me164.initialize();
		}
		#line default
		
		public static string DEFAULT_STYLE;
		
		public static new object __hx_createEmpty() {
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			return new global::sx.themes.Theme(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			return new global::sx.themes.Theme();
		}
		#line default
		
		public global::haxe.ds.StringMap<object> __styles;
		
		public virtual void initialize() {
		}
		
		
		public virtual global::haxe.ds.StringMap<object> styles(global::System.Type cls) {
			#line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			string className = global::Type.getClassName(cls);
			global::haxe.ds.StringMap<object> styles = ((global::haxe.ds.StringMap<object>) (global::haxe.ds.StringMap<object>.__hx_cast<object>(((global::haxe.ds.StringMap) ((this.__styles.@get(((string) (className) ))).@value) ))) );
			#line 53 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			if (( styles == null )) {
				#line 54 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
				styles = new global::haxe.ds.StringMap<object>();
				this.__styles.@set(className, styles);
			}
			
			#line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			return styles;
		}
		#line default
		
		public virtual void apply(global::sx.widgets.Widget widget) {
			#line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			if (string.Equals(widget.style, null)) {
				#line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
				return;
			}
			
			#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			global::haxe.lang.Function fn = null;
			#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			{
				#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
				global::haxe.IMap<object, object> this1 = ((global::haxe.IMap<object, object>) (global::haxe.IMap__Statics_.__hx_cast<object, object>(((global::haxe.IMap) (this.styles(global::Type.getClass<object>(widget))) ))) );
				#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
				fn = ((global::haxe.lang.Function) ((((global::haxe.IMap<object, object>) (this1) ).@get(widget.style)).@value) );
			}
			
			#line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			if (( fn == null )) {
				#line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
				return;
			}
			
			#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			fn.__hx_invoke1_o(default(double), widget);
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
				switch (hash) {
					case 1040339266:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						this.__styles = ((global::haxe.ds.StringMap<object>) (global::haxe.ds.StringMap<object>.__hx_cast<object>(((global::haxe.ds.StringMap) (@value) ))) );
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						return @value;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
				switch (hash) {
					case 607880558:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "apply", 607880558)) );
					}
					
					
					case 366143010:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "styles", 366143010)) );
					}
					
					
					case 1824207184:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "initialize", 1824207184)) );
					}
					
					
					case 1040339266:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						return this.__styles;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
				switch (hash) {
					case 607880558:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						this.apply(((global::sx.widgets.Widget) (dynargs[0]) ));
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						break;
					}
					
					
					case 366143010:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						return this.styles(((global::System.Type) (dynargs[0]) ));
					}
					
					
					case 1824207184:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						this.initialize();
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						break;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			baseArr.push("__styles");
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
			{
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


