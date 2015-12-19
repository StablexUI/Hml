
#pragma warning disable 109, 114, 219, 429, 168, 162
public class Signal : global::sx.widgets.Widget {
	
	public Signal(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
	}
	
	
	public Signal() : base(global::haxe.lang.EmptyObject.EMPTY) {
		#line 138 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		global::Signal.__hx_ctor__Signal(this);
	}
	#line default
	
	public static void __hx_ctor__Signal(global::Signal __temp_me24) {
		#line 31 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		__temp_me24.closureSingleExpr_initialized = false;
		#line 27 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		__temp_me24.closureBlockBody_initialized = false;
		#line 23 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		__temp_me24.simple_initialized = false;
		#line 19 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		__temp_me24.closureSingleExprClicked_initialized = false;
		#line 15 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		__temp_me24.closureBlockClicked_initialized = false;
		#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		__temp_me24.simpleClicked_initialized = false;
		#line 138 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		global::sx.widgets.Widget.__hx_ctor_sx_widgets_Widget(__temp_me24);
		__temp_me24.addChild(__temp_me24.get_simple());
		__temp_me24.addChild(__temp_me24.get_closureBlockBody());
		__temp_me24.addChild(__temp_me24.get_closureSingleExpr());
	}
	#line default
	
	public static new object __hx_createEmpty() {
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return new global::Signal(global::haxe.lang.EmptyObject.EMPTY);
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return new global::Signal();
	}
	#line default
	
	public bool simpleClicked_initialized;
	
	public bool simpleClicked;
	
	public bool closureBlockClicked_initialized;
	
	public bool closureBlockClicked;
	
	public bool closureSingleExprClicked_initialized;
	
	public bool closureSingleExprClicked;
	
	public bool simple_initialized;
	
	public global::sx.widgets.Widget simple;
	
	public bool closureBlockBody_initialized;
	
	public global::sx.widgets.Widget closureBlockBody;
	
	public bool closureSingleExpr_initialized;
	
	public global::sx.widgets.Widget closureSingleExpr;
	
	public virtual void destroyHml() {
	}
	
	
	public virtual bool set_simpleClicked(bool @value) {
		#line 41 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.simpleClicked_initialized = true;
		return this.simpleClicked = @value;
	}
	#line default
	
	public virtual bool get_simpleClicked() {
		#line 47 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		if (this.simpleClicked_initialized) {
			#line 47 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			return this.simpleClicked;
		}
		
		#line 48 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.simpleClicked_initialized = true;
		this.set_simpleClicked(false);
		bool res = this.simpleClicked;
		return res;
	}
	#line default
	
	public virtual bool set_closureBlockClicked(bool @value) {
		#line 55 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureBlockClicked_initialized = true;
		return this.closureBlockClicked = @value;
	}
	#line default
	
	public virtual bool get_closureBlockClicked() {
		#line 61 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		if (this.closureBlockClicked_initialized) {
			#line 61 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			return this.closureBlockClicked;
		}
		
		#line 62 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureBlockClicked_initialized = true;
		this.set_closureBlockClicked(false);
		bool res = this.closureBlockClicked;
		return res;
	}
	#line default
	
	public virtual bool set_closureSingleExprClicked(bool @value) {
		#line 69 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureSingleExprClicked_initialized = true;
		return this.closureSingleExprClicked = @value;
	}
	#line default
	
	public virtual bool get_closureSingleExprClicked() {
		#line 75 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		if (this.closureSingleExprClicked_initialized) {
			#line 75 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			return this.closureSingleExprClicked;
		}
		
		#line 76 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureSingleExprClicked_initialized = true;
		this.set_closureSingleExprClicked(false);
		bool res = this.closureSingleExprClicked;
		return res;
	}
	#line default
	
	public virtual global::sx.widgets.Widget set_simple(global::sx.widgets.Widget @value) {
		#line 83 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.simple_initialized = true;
		return this.simple = @value;
	}
	#line default
	
	public virtual global::sx.widgets.Widget get_simple() {
		#line 87 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		global::Signal _g = this;
		#line 89 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		if (this.simple_initialized) {
			#line 89 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			return this.simple;
		}
		
		#line 90 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.simple_initialized = true;
		this.set_simple(new global::sx.widgets.Widget());
		global::sx.widgets.Widget res = this.simple;
		#line 94 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		res.get_onClick().@add(new global::Signal_get_simple_94__Fun(_g));
		#line 97 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return res;
	}
	#line default
	
	public virtual global::sx.widgets.Widget set_closureBlockBody(global::sx.widgets.Widget @value) {
		#line 101 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureBlockBody_initialized = true;
		return this.closureBlockBody = @value;
	}
	#line default
	
	public virtual global::sx.widgets.Widget get_closureBlockBody() {
		#line 105 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		global::Signal _g = this;
		#line 107 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		if (this.closureBlockBody_initialized) {
			#line 107 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			return this.closureBlockBody;
		}
		
		#line 108 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureBlockBody_initialized = true;
		this.set_closureBlockBody(new global::sx.widgets.Widget());
		global::sx.widgets.Widget res = this.closureBlockBody;
		#line 112 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		res.get_onClick().@add(new global::Signal_get_closureBlockBody_113__Fun(_g));
		#line 115 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return res;
	}
	#line default
	
	public virtual global::sx.widgets.Widget set_closureSingleExpr(global::sx.widgets.Widget @value) {
		#line 119 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureSingleExpr_initialized = true;
		return this.closureSingleExpr = @value;
	}
	#line default
	
	public virtual global::sx.widgets.Widget get_closureSingleExpr() {
		#line 123 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		global::Signal _g = this;
		#line 125 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		if (this.closureSingleExpr_initialized) {
			#line 125 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			return this.closureSingleExpr;
		}
		
		#line 126 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureSingleExpr_initialized = true;
		this.set_closureSingleExpr(new global::sx.widgets.Widget());
		global::sx.widgets.Widget res = this.closureSingleExpr;
		#line 130 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		res.get_onClick().@add(new global::Signal_get_closureSingleExpr_131__Fun(_g));
		#line 133 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return res;
	}
	#line default
	
	public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
		unchecked {
			#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			switch (hash) {
				case 1769880888:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.set_closureSingleExpr(((global::sx.widgets.Widget) (@value) ));
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return @value;
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.closureSingleExpr = ((global::sx.widgets.Widget) (@value) );
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return @value;
					}
					
				}
				
				
				case 1805309005:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					this.closureSingleExpr_initialized = global::haxe.lang.Runtime.toBool(@value);
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return @value;
				}
				
				
				case 1439572372:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.set_closureBlockBody(((global::sx.widgets.Widget) (@value) ));
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return @value;
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.closureBlockBody = ((global::sx.widgets.Widget) (@value) );
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return @value;
					}
					
				}
				
				
				case 324915881:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					this.closureBlockBody_initialized = global::haxe.lang.Runtime.toBool(@value);
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return @value;
				}
				
				
				case 947848242:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.set_simple(((global::sx.widgets.Widget) (@value) ));
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return @value;
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.simple = ((global::sx.widgets.Widget) (@value) );
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return @value;
					}
					
				}
				
				
				case 967256647:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					this.simple_initialized = global::haxe.lang.Runtime.toBool(@value);
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return @value;
				}
				
				
				case 838465615:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.set_closureSingleExprClicked(global::haxe.lang.Runtime.toBool(@value));
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return @value;
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.closureSingleExprClicked = global::haxe.lang.Runtime.toBool(@value);
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return @value;
					}
					
				}
				
				
				case 1619940836:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					this.closureSingleExprClicked_initialized = global::haxe.lang.Runtime.toBool(@value);
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return @value;
				}
				
				
				case 974861045:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.set_closureBlockClicked(global::haxe.lang.Runtime.toBool(@value));
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return @value;
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.closureBlockClicked = global::haxe.lang.Runtime.toBool(@value);
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return @value;
					}
					
				}
				
				
				case 1836052874:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					this.closureBlockClicked_initialized = global::haxe.lang.Runtime.toBool(@value);
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return @value;
				}
				
				
				case 578905237:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.set_simpleClicked(global::haxe.lang.Runtime.toBool(@value));
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return @value;
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.simpleClicked = global::haxe.lang.Runtime.toBool(@value);
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return @value;
					}
					
				}
				
				
				case 1193939754:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					this.simpleClicked_initialized = global::haxe.lang.Runtime.toBool(@value);
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return @value;
				}
				
				
				default:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return base.__hx_setField(field, hash, @value, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
		unchecked {
			#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			switch (hash) {
				case 1747730447:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_closureSingleExpr", 1747730447)) );
				}
				
				
				case 1010109979:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_closureSingleExpr", 1010109979)) );
				}
				
				
				case 1949861533:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_closureBlockBody", 1949861533)) );
				}
				
				
				case 1089486353:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_closureBlockBody", 1089486353)) );
				}
				
				
				case 688288763:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_simple", 688288763)) );
				}
				
				
				case 746852975:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_simple", 746852975)) );
				}
				
				
				case 1934495320:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_closureSingleExprClicked", 1934495320)) );
				}
				
				
				case 1987598796:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_closureSingleExprClicked", 1987598796)) );
				}
				
				
				case 1114691980:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_closureBlockClicked", 1114691980)) );
				}
				
				
				case 1154630296:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_closureBlockClicked", 1154630296)) );
				}
				
				
				case 686911468:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_simpleClicked", 686911468)) );
				}
				
				
				case 1281312760:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_simpleClicked", 1281312760)) );
				}
				
				
				case 773041389:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "destroyHml", 773041389)) );
				}
				
				
				case 1769880888:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.get_closureSingleExpr();
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.closureSingleExpr;
					}
					
				}
				
				
				case 1805309005:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.closureSingleExpr_initialized;
				}
				
				
				case 1439572372:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.get_closureBlockBody();
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.closureBlockBody;
					}
					
				}
				
				
				case 324915881:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.closureBlockBody_initialized;
				}
				
				
				case 947848242:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.get_simple();
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.simple;
					}
					
				}
				
				
				case 967256647:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.simple_initialized;
				}
				
				
				case 838465615:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.get_closureSingleExprClicked();
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.closureSingleExprClicked;
					}
					
				}
				
				
				case 1619940836:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.closureSingleExprClicked_initialized;
				}
				
				
				case 974861045:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.get_closureBlockClicked();
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.closureBlockClicked;
					}
					
				}
				
				
				case 1836052874:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.closureBlockClicked_initialized;
				}
				
				
				case 578905237:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.get_simpleClicked();
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.simpleClicked;
					}
					
				}
				
				
				case 1193939754:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.simpleClicked_initialized;
				}
				
				
				default:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
		unchecked {
			#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			switch (hash) {
				case 1747730447:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.get_closureSingleExpr();
				}
				
				
				case 1010109979:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.set_closureSingleExpr(((global::sx.widgets.Widget) (dynargs[0]) ));
				}
				
				
				case 1949861533:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.get_closureBlockBody();
				}
				
				
				case 1089486353:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.set_closureBlockBody(((global::sx.widgets.Widget) (dynargs[0]) ));
				}
				
				
				case 688288763:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.get_simple();
				}
				
				
				case 746852975:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.set_simple(((global::sx.widgets.Widget) (dynargs[0]) ));
				}
				
				
				case 1934495320:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.get_closureSingleExprClicked();
				}
				
				
				case 1987598796:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.set_closureSingleExprClicked(global::haxe.lang.Runtime.toBool(dynargs[0]));
				}
				
				
				case 1114691980:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.get_closureBlockClicked();
				}
				
				
				case 1154630296:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.set_closureBlockClicked(global::haxe.lang.Runtime.toBool(dynargs[0]));
				}
				
				
				case 686911468:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.get_simpleClicked();
				}
				
				
				case 1281312760:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return this.set_simpleClicked(global::haxe.lang.Runtime.toBool(dynargs[0]));
				}
				
				
				case 773041389:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					this.destroyHml();
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				default:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					return base.__hx_invokeField(field, hash, dynargs);
				}
				
			}
			
			#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			return null;
		}
		#line default
	}
	
	
	public override void __hx_getFields(global::Array<object> baseArr) {
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureSingleExpr");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureSingleExpr_initialized");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureBlockBody");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureBlockBody_initialized");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("simple");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("simple_initialized");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureSingleExprClicked");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureSingleExprClicked_initialized");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureBlockClicked");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureBlockClicked_initialized");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("simpleClicked");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("simpleClicked_initialized");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		{
			#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			base.__hx_getFields(baseArr);
		}
		
	}
	#line default
	
}



#pragma warning disable 109, 114, 219, 429, 168, 162
public class Signal_get_simple_94__Fun : global::haxe.lang.Function {
	
	public Signal_get_simple_94__Fun(global::Signal _g) : base(3, 0) {
		#line 95 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this._g = _g;
	}
	#line default
	
	public override object __hx_invoke3_o(double __fn_float1, object __fn_dyn1, double __fn_float2, object __fn_dyn2, double __fn_float3, object __fn_dyn3) {
		#line 94 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		int __2 = ( (( __fn_dyn3 == global::haxe.lang.Runtime.undefined )) ? (((int) (__fn_float3) )) : (((int) (global::haxe.lang.Runtime.toInt(__fn_dyn3)) )) );
		#line 94 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		global::sx.widgets.Widget __1 = ( (( __fn_dyn2 == global::haxe.lang.Runtime.undefined )) ? (((global::sx.widgets.Widget) (((object) (__fn_float2) )) )) : (((global::sx.widgets.Widget) (__fn_dyn2) )) );
		#line 94 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		global::sx.widgets.Widget __0 = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((global::sx.widgets.Widget) (((object) (__fn_float1) )) )) : (((global::sx.widgets.Widget) (__fn_dyn1) )) );
		this._g.set_simpleClicked(true);
		#line 95 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return null;
	}
	#line default
	
	public global::Signal _g;
	
}



#pragma warning disable 109, 114, 219, 429, 168, 162
public class Signal_get_closureBlockBody_113__Fun : global::haxe.lang.Function {
	
	public Signal_get_closureBlockBody_113__Fun(global::Signal _g) : base(3, 0) {
		#line 113 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this._g = _g;
	}
	#line default
	
	public override object __hx_invoke3_o(double __fn_float1, object __fn_dyn1, double __fn_float2, object __fn_dyn2, double __fn_float3, object __fn_dyn3) {
		#line 113 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		int touchId = ( (( __fn_dyn3 == global::haxe.lang.Runtime.undefined )) ? (((int) (__fn_float3) )) : (((int) (global::haxe.lang.Runtime.toInt(__fn_dyn3)) )) );
		#line 113 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		global::sx.widgets.Widget dispatcher = ( (( __fn_dyn2 == global::haxe.lang.Runtime.undefined )) ? (((global::sx.widgets.Widget) (((object) (__fn_float2) )) )) : (((global::sx.widgets.Widget) (__fn_dyn2) )) );
		#line 113 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		global::sx.widgets.Widget processor = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((global::sx.widgets.Widget) (((object) (__fn_float1) )) )) : (((global::sx.widgets.Widget) (__fn_dyn1) )) );
		#line 113 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this._g.set_closureBlockClicked(true);
		#line 113 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return null;
	}
	#line default
	
	public global::Signal _g;
	
}



#pragma warning disable 109, 114, 219, 429, 168, 162
public class Signal_get_closureSingleExpr_131__Fun : global::haxe.lang.Function {
	
	public Signal_get_closureSingleExpr_131__Fun(global::Signal _g) : base(3, 0) {
		#line 131 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this._g = _g;
	}
	#line default
	
	public override object __hx_invoke3_o(double __fn_float1, object __fn_dyn1, double __fn_float2, object __fn_dyn2, double __fn_float3, object __fn_dyn3) {
		#line 131 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		int touchId = ( (( __fn_dyn3 == global::haxe.lang.Runtime.undefined )) ? (((int) (__fn_float3) )) : (((int) (global::haxe.lang.Runtime.toInt(__fn_dyn3)) )) );
		#line 131 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		global::sx.widgets.Widget dispatcher = ( (( __fn_dyn2 == global::haxe.lang.Runtime.undefined )) ? (((global::sx.widgets.Widget) (((object) (__fn_float2) )) )) : (((global::sx.widgets.Widget) (__fn_dyn2) )) );
		#line 131 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		global::sx.widgets.Widget processor = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((global::sx.widgets.Widget) (((object) (__fn_float1) )) )) : (((global::sx.widgets.Widget) (__fn_dyn1) )) );
		#line 131 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this._g.set_closureSingleExprClicked(true);
		#line 131 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return null;
	}
	#line default
	
	public global::Signal _g;
	
}


