
#pragma warning disable 109, 114, 219, 429, 168, 162
public class Metric : global::sx.widgets.Widget {
	
	public Metric(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
	}
	
	
	public Metric() : base(global::haxe.lang.EmptyObject.EMPTY) {
		#line 78 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		global::Metric.__hx_ctor__Metric(this);
	}
	#line default
	
	public static void __hx_ctor__Metric(global::Metric __temp_me21) {
		#line 19 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		__temp_me21.percents_initialized = false;
		#line 15 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		__temp_me21.pixels_initialized = false;
		#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		__temp_me21.dips_initialized = false;
		#line 78 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		global::sx.widgets.Widget.__hx_ctor_sx_widgets_Widget(__temp_me21);
		__temp_me21.addChild(__temp_me21.get_dips());
		__temp_me21.addChild(__temp_me21.get_pixels());
		__temp_me21.addChild(__temp_me21.get_percents());
	}
	#line default
	
	public static new object __hx_createEmpty() {
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		return new global::Metric(global::haxe.lang.EmptyObject.EMPTY);
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		return new global::Metric();
	}
	#line default
	
	public bool dips_initialized;
	
	public global::sx.widgets.Widget dips;
	
	public bool pixels_initialized;
	
	public global::sx.widgets.Widget pixels;
	
	public bool percents_initialized;
	
	public global::sx.widgets.Widget percents;
	
	public virtual void destroyHml() {
	}
	
	
	public virtual global::sx.widgets.Widget set_dips(global::sx.widgets.Widget @value) {
		#line 29 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		this.dips_initialized = true;
		return this.dips = @value;
	}
	#line default
	
	public virtual global::sx.widgets.Widget get_dips() {
		unchecked {
			#line 35 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			if (this.dips_initialized) {
				#line 35 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
				return this.dips;
			}
			
			#line 36 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			this.dips_initialized = true;
			this.set_dips(new global::sx.widgets.Widget());
			global::sx.widgets.Widget res = this.dips;
			#line 40 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			res.get_left().set_dip(((double) (10) ));
			return res;
		}
		#line default
	}
	
	
	public virtual global::sx.widgets.Widget set_pixels(global::sx.widgets.Widget @value) {
		#line 45 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		this.pixels_initialized = true;
		return this.pixels = @value;
	}
	#line default
	
	public virtual global::sx.widgets.Widget get_pixels() {
		unchecked {
			#line 51 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			if (this.pixels_initialized) {
				#line 51 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
				return this.pixels;
			}
			
			#line 52 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			this.pixels_initialized = true;
			this.set_pixels(new global::sx.widgets.Widget());
			global::sx.widgets.Widget res = this.pixels;
			#line 56 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			res.get_left().set_px(((double) (10) ));
			return res;
		}
		#line default
	}
	
	
	public virtual global::sx.widgets.Widget set_percents(global::sx.widgets.Widget @value) {
		#line 61 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		this.percents_initialized = true;
		return this.percents = @value;
	}
	#line default
	
	public virtual global::sx.widgets.Widget get_percents() {
		unchecked {
			#line 67 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			if (this.percents_initialized) {
				#line 67 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
				return this.percents;
			}
			
			#line 68 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			this.percents_initialized = true;
			this.set_percents(new global::sx.widgets.Widget());
			global::sx.widgets.Widget res = this.percents;
			#line 72 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			res.get_left().set_pct(((double) (10) ));
			return res;
		}
		#line default
	}
	
	
	public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
		unchecked {
			#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			switch (hash) {
				case 1182450190:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						this.set_percents(((global::sx.widgets.Widget) (@value) ));
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return @value;
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						this.percents = ((global::sx.widgets.Widget) (@value) );
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return @value;
					}
					
				}
				
				
				case 1647723043:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					this.percents_initialized = global::haxe.lang.Runtime.toBool(@value);
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return @value;
				}
				
				
				case 212463405:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						this.set_pixels(((global::sx.widgets.Widget) (@value) ));
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return @value;
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						this.pixels = ((global::sx.widgets.Widget) (@value) );
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return @value;
					}
					
				}
				
				
				case 2068062658:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					this.pixels_initialized = global::haxe.lang.Runtime.toBool(@value);
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return @value;
				}
				
				
				case 1114203336:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						this.set_dips(((global::sx.widgets.Widget) (@value) ));
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return @value;
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						this.dips = ((global::sx.widgets.Widget) (@value) );
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return @value;
					}
					
				}
				
				
				case 141235165:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					this.dips_initialized = global::haxe.lang.Runtime.toBool(@value);
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return @value;
				}
				
				
				default:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return base.__hx_setField(field, hash, @value, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
		unchecked {
			#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			switch (hash) {
				case 2073327127:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_percents", 2073327127)) );
				}
				
				
				case 277715339:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_percents", 277715339)) );
				}
				
				
				case 2100387574:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_pixels", 2100387574)) );
				}
				
				
				case 11468138:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_pixels", 11468138)) );
				}
				
				
				case 1109663825:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_dips", 1109663825)) );
				}
				
				
				case 1887533509:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_dips", 1887533509)) );
				}
				
				
				case 773041389:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "destroyHml", 773041389)) );
				}
				
				
				case 1182450190:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return this.get_percents();
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return this.percents;
					}
					
				}
				
				
				case 1647723043:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return this.percents_initialized;
				}
				
				
				case 212463405:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return this.get_pixels();
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return this.pixels;
					}
					
				}
				
				
				case 2068062658:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return this.pixels_initialized;
				}
				
				
				case 1114203336:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return this.get_dips();
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return this.dips;
					}
					
				}
				
				
				case 141235165:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return this.dips_initialized;
				}
				
				
				default:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
		unchecked {
			#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			switch (hash) {
				case 2073327127:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return this.get_percents();
				}
				
				
				case 277715339:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return this.set_percents(((global::sx.widgets.Widget) (dynargs[0]) ));
				}
				
				
				case 2100387574:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return this.get_pixels();
				}
				
				
				case 11468138:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return this.set_pixels(((global::sx.widgets.Widget) (dynargs[0]) ));
				}
				
				
				case 1109663825:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return this.get_dips();
				}
				
				
				case 1887533509:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return this.set_dips(((global::sx.widgets.Widget) (dynargs[0]) ));
				}
				
				
				case 773041389:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					this.destroyHml();
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				default:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					return base.__hx_invokeField(field, hash, dynargs);
				}
				
			}
			
			#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			return null;
		}
		#line default
	}
	
	
	public override void __hx_getFields(global::Array<object> baseArr) {
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		baseArr.push("percents");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		baseArr.push("percents_initialized");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		baseArr.push("pixels");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		baseArr.push("pixels_initialized");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		baseArr.push("dips");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		baseArr.push("dips_initialized");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		{
			#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			base.__hx_getFields(baseArr);
		}
		
	}
	#line default
	
}


