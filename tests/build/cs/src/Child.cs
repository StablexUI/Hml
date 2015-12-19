
#pragma warning disable 109, 114, 219, 429, 168, 162
public class Child : global::sx.widgets.Widget {
	
	public Child(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
	}
	
	
	public Child() : base(global::haxe.lang.EmptyObject.EMPTY) {
		#line 55 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		global::Child.__hx_ctor__Child(this);
	}
	#line default
	
	public static void __hx_ctor__Child(global::Child __temp_me11) {
		#line 15 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		__temp_me11.level2_initialized = false;
		#line 11 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		__temp_me11.level1_initialized = false;
		#line 55 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		global::sx.widgets.Widget.__hx_ctor_sx_widgets_Widget(__temp_me11);
		__temp_me11.addChild(__temp_me11.get_level1());
	}
	#line default
	
	public static new object __hx_createEmpty() {
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		return new global::Child(global::haxe.lang.EmptyObject.EMPTY);
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		return new global::Child();
	}
	#line default
	
	public bool level1_initialized;
	
	public global::sx.widgets.Widget level1;
	
	public bool level2_initialized;
	
	public global::sx.widgets.Widget level2;
	
	public virtual void destroyHml() {
	}
	
	
	public virtual global::sx.widgets.Widget set_level1(global::sx.widgets.Widget @value) {
		#line 25 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		this.level1_initialized = true;
		return this.level1 = @value;
	}
	#line default
	
	public virtual global::sx.widgets.Widget set_level2(global::sx.widgets.Widget @value) {
		#line 30 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		this.level2_initialized = true;
		return this.level2 = @value;
	}
	#line default
	
	public virtual global::sx.widgets.Widget get_level2() {
		#line 36 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		if (this.level2_initialized) {
			#line 36 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			return this.level2;
		}
		
		#line 37 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		this.level2_initialized = true;
		this.set_level2(new global::sx.widgets.Widget());
		global::sx.widgets.Widget res = this.level2;
		return res;
	}
	#line default
	
	public virtual global::sx.widgets.Widget get_level1() {
		#line 45 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		if (this.level1_initialized) {
			#line 45 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			return this.level1;
		}
		
		#line 46 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		this.level1_initialized = true;
		this.set_level1(new global::sx.widgets.Widget());
		global::sx.widgets.Widget res = this.level1;
		res.addChild(this.get_level2());
		return res;
	}
	#line default
	
	public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
		unchecked {
			#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			switch (hash) {
				case 609205806:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						this.set_level2(((global::sx.widgets.Widget) (@value) ));
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return @value;
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						this.level2 = ((global::sx.widgets.Widget) (@value) );
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return @value;
					}
					
				}
				
				
				case 1638198851:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					this.level2_initialized = global::haxe.lang.Runtime.toBool(@value);
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return @value;
				}
				
				
				case 609205805:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						this.set_level1(((global::sx.widgets.Widget) (@value) ));
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return @value;
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						this.level1 = ((global::sx.widgets.Widget) (@value) );
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return @value;
					}
					
				}
				
				
				case 467955906:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					this.level1_initialized = global::haxe.lang.Runtime.toBool(@value);
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return @value;
				}
				
				
				default:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return base.__hx_setField(field, hash, @value, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
		unchecked {
			#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			switch (hash) {
				case 349646326:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_level1", 349646326)) );
				}
				
				
				case 349646327:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_level2", 349646327)) );
				}
				
				
				case 408210539:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_level2", 408210539)) );
				}
				
				
				case 408210538:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_level1", 408210538)) );
				}
				
				
				case 773041389:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "destroyHml", 773041389)) );
				}
				
				
				case 609205806:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return this.get_level2();
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return this.level2;
					}
					
				}
				
				
				case 1638198851:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return this.level2_initialized;
				}
				
				
				case 609205805:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (handleProperties) {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return this.get_level1();
					}
					else {
						#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return this.level1;
					}
					
				}
				
				
				case 467955906:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return this.level1_initialized;
				}
				
				
				default:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
		unchecked {
			#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			switch (hash) {
				case 349646326:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return this.get_level1();
				}
				
				
				case 349646327:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return this.get_level2();
				}
				
				
				case 408210539:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return this.set_level2(((global::sx.widgets.Widget) (dynargs[0]) ));
				}
				
				
				case 408210538:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return this.set_level1(((global::sx.widgets.Widget) (dynargs[0]) ));
				}
				
				
				case 773041389:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					this.destroyHml();
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				default:
				{
					#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					return base.__hx_invokeField(field, hash, dynargs);
				}
				
			}
			
			#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			return null;
		}
		#line default
	}
	
	
	public override void __hx_getFields(global::Array<object> baseArr) {
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		baseArr.push("level2");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		baseArr.push("level2_initialized");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		baseArr.push("level1");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		baseArr.push("level1_initialized");
		#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		{
			#line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			base.__hx_getFields(baseArr);
		}
		
	}
	#line default
	
}


