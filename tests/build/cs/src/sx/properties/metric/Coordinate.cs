
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.metric {
	public class Coordinate : global::sx.properties.metric.Size {
		
		public Coordinate(global::haxe.lang.EmptyObject empty) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
		}
		
		
		public Coordinate(string orientation) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
			#line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			global::sx.properties.metric.Coordinate.__hx_ctor_sx_properties_metric_Coordinate(this, orientation);
		}
		#line default
		
		public static void __hx_ctor_sx_properties_metric_Coordinate(global::sx.properties.metric.Coordinate __temp_me150, string orientation) {
			#line 22 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			__temp_me150.selected = false;
			#line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx"
			global::sx.properties.metric.Size.__hx_ctor_sx_properties_metric_Size(__temp_me150, orientation);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			return new global::sx.properties.metric.Coordinate(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			return new global::sx.properties.metric.Coordinate(global::haxe.lang.Runtime.toString(arr[0]));
		}
		#line default
		
		public global::haxe.lang.Function ownerSize;
		
		public global::haxe.lang.Function pair;
		
		public bool selected;
		
		public void @select() {
			#line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			if ( ! (this.selected) ) {
				#line 31 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				this.selected = true;
				((global::sx.properties.metric.Coordinate) (this.pair.__hx_invoke0_o()) ).selected = false;
			}
			
		}
		#line default
		
		public virtual global::sx.properties.metric.Size __ownerSize() {
			#line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			if (( this.ownerSize == null )) {
				#line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				return global::sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
			}
			else {
				#line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				return ((global::sx.properties.metric.Size) (this.ownerSize.__hx_invoke0_o()) );
			}
			
		}
		#line default
		
		public override double get_px() {
			#line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			if (this.selected) {
				#line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				return base.get_px();
			}
			
			#line 51 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			return ( ( this.__pctSource().get_px() - ((global::sx.properties.metric.Coordinate) (this.pair.__hx_invoke0_o()) ).get_px() ) - this.__ownerSize().get_px() );
		}
		#line default
		
		public override double get_pct() {
			#line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			if (this.selected) {
				#line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				return base.get_pct();
			}
			
			#line 60 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			return ( ( this.__pctSource().get_pct() - ((global::sx.properties.metric.Coordinate) (this.pair.__hx_invoke0_o()) ).get_pct() ) - this.__ownerSize().get_pct() );
		}
		#line default
		
		public override double get_dip() {
			#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			if (this.selected) {
				#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				return base.get_dip();
			}
			
			#line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			return ( ( this.__pctSource().get_dip() - ((global::sx.properties.metric.Coordinate) (this.pair.__hx_invoke0_o()) ).get_dip() ) - this.__ownerSize().get_dip() );
		}
		#line default
		
		public override void __invokeOnChange(string previousUnits, double previousValue) {
			#line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			if ( ! (this.selected) ) {
				#line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				this.selected = true;
				#line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				((global::sx.properties.metric.Coordinate) (this.pair.__hx_invoke0_o()) ).selected = false;
			}
			
			#line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			base.__invokeOnChange(previousUnits, previousValue);
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				switch (hash) {
					case 829237851:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						this.selected = global::haxe.lang.Runtime.toBool(@value);
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return @value;
					}
					
					
					case 1246878746:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						this.pair = ((global::haxe.lang.Function) (@value) );
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return @value;
					}
					
					
					case 675216020:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						this.ownerSize = ((global::haxe.lang.Function) (@value) );
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return @value;
					}
					
					
					default:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				switch (hash) {
					case 1038712487:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__invokeOnChange", 1038712487)) );
					}
					
					
					case 650184162:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_dip", 650184162)) );
					}
					
					
					case 650779576:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_pct", 650779576)) );
					}
					
					
					case 590346577:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_px", 590346577)) );
					}
					
					
					case 1449870196:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__ownerSize", 1449870196)) );
					}
					
					
					case 1781734140:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "select", 1781734140)) );
					}
					
					
					case 829237851:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return this.selected;
					}
					
					
					case 1246878746:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return this.pair;
					}
					
					
					case 675216020:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return this.ownerSize;
					}
					
					
					default:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				switch (hash) {
					case 590346577:
					case 650779576:
					case 650184162:
					case 1038712487:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return global::haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					
					case 1449870196:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return this.__ownerSize();
					}
					
					
					case 1781734140:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						this.@select();
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						break;
					}
					
					
					default:
					{
						#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			baseArr.push("selected");
			#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			baseArr.push("pair");
			#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			baseArr.push("ownerSize");
			#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
			{
				#line 12 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


