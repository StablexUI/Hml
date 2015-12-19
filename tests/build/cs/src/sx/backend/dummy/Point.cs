
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.backend.dummy {
	public class Point : global::haxe.lang.HxObject {
		
		public Point(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Point(global::haxe.lang.Null<double> x, global::haxe.lang.Null<double> y) {
			#line 19 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			global::sx.backend.dummy.Point.__hx_ctor_sx_backend_dummy_Point(this, x, y);
		}
		#line default
		
		public static void __hx_ctor_sx_backend_dummy_Point(global::sx.backend.dummy.Point __temp_me132, global::haxe.lang.Null<double> x, global::haxe.lang.Null<double> y) {
			#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			double __temp_y131 = ( ( ! (y.hasValue) ) ? (((double) (0) )) : ((y).@value) );
			#line 20 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			double __temp_x130 = ( ( ! (x.hasValue) ) ? (((double) (0) )) : ((x).@value) );
			__temp_me132.x = __temp_x130;
			__temp_me132.y = __temp_y131;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			return new global::sx.backend.dummy.Point(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
				return new global::sx.backend.dummy.Point(global::haxe.lang.Null<object>.ofDynamic<double>(arr[0]), global::haxe.lang.Null<object>.ofDynamic<double>(arr[1]));
			}
			#line default
		}
		
		
		public double x;
		
		public double y;
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
				switch (hash) {
					case 121:
					{
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						this.y = ((double) (@value) );
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return @value;
					}
					
					
					case 120:
					{
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						this.x = ((double) (@value) );
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return @value;
					}
					
					
					default:
					{
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
				switch (hash) {
					case 121:
					{
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						this.y = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return @value;
					}
					
					
					case 120:
					{
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						this.x = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return @value;
					}
					
					
					default:
					{
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
				switch (hash) {
					case 121:
					{
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return this.y;
					}
					
					
					case 120:
					{
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return this.x;
					}
					
					
					default:
					{
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
				switch (hash) {
					case 121:
					{
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return this.y;
					}
					
					
					case 120:
					{
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return this.x;
					}
					
					
					default:
					{
						#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			baseArr.push("y");
			#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			baseArr.push("x");
			#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
			{
				#line 8 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


