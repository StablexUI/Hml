
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.assert {
	public class BaseAssert : global::haxe.lang.HxObject {
		
		public BaseAssert(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public BaseAssert(object pos) {
			#line 24 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			global::hunit.assert.BaseAssert.__hx_ctor_hunit_assert_BaseAssert(this, pos);
		}
		#line default
		
		public static void __hx_ctor_hunit_assert_BaseAssert(global::hunit.assert.BaseAssert __temp_me79, object pos) {
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			__temp_me79.pos = pos;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			return new global::hunit.assert.BaseAssert(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			return new global::hunit.assert.BaseAssert(((object) (arr[0]) ));
		}
		#line default
		
		public object pos;
		
		public virtual void validate() {
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			throw global::haxe.lang.HaxeException.wrap("To be overriden");
		}
		#line default
		
		public virtual void failed(string message) {
			#line 46 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.AssertException(message, this.pos));
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				switch (hash) {
					case 5594516:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						this.pos = ((object) (@value) );
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return @value;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				switch (hash) {
					case 5594516:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						this.pos = ((object) (@value) );
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return @value;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				switch (hash) {
					case 1744750013:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "failed", 1744750013)) );
					}
					
					
					case 82038934:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "validate", 82038934)) );
					}
					
					
					case 5594516:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return this.pos;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				switch (hash) {
					case 5594516:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(this.pos)) );
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				switch (hash) {
					case 1744750013:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						this.failed(global::haxe.lang.Runtime.toString(dynargs[0]));
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						break;
					}
					
					
					case 82038934:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						this.validate();
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						break;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			baseArr.push("pos");
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
			{
				#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


