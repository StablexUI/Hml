
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.exceptions {
	public class ExpectedExceptionData : global::haxe.lang.HxObject {
		
		public ExpectedExceptionData(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public ExpectedExceptionData(global::hunit.match.Match match, object pos) {
			#line 28 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			global::hunit.exceptions.ExpectedExceptionData.__hx_ctor_hunit_exceptions_ExpectedExceptionData(this, match, pos);
		}
		#line default
		
		public static void __hx_ctor_hunit_exceptions_ExpectedExceptionData(global::hunit.exceptions.ExpectedExceptionData __temp_me88, global::hunit.match.Match match, object pos) {
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			__temp_me88.satisfied = false;
			#line 30 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			__temp_me88.match = match;
			__temp_me88.pos = pos;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			return new global::hunit.exceptions.ExpectedExceptionData(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				return new global::hunit.exceptions.ExpectedExceptionData(((global::hunit.match.Match) (arr[0]) ), arr[1]);
			}
			#line default
		}
		
		
		public global::hunit.match.Match match;
		
		public bool satisfied;
		
		public object pos;
		
		public virtual void validate(object e, global::Array<object> exceptionStack) {
			unchecked {
				#line 42 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				this.satisfied = this.match.match(e);
				#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				if ( ! (this.satisfied) ) {
					#line 45 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.UnexpectedException(e, exceptionStack, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"validate", "hunit.exceptions.ExpectedExceptionData", "ExpectedExceptionData.hx"}, new int[]{1981972957}, new double[]{((double) (45) )})));
				}
				
			}
			#line default
		}
		
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				switch (hash) {
					case 5594516:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						this.pos = ((object) (@value) );
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return @value;
					}
					
					
					default:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				switch (hash) {
					case 5594516:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						this.pos = ((object) (@value) );
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return @value;
					}
					
					
					case 1016240626:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						this.satisfied = global::haxe.lang.Runtime.toBool(@value);
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return @value;
					}
					
					
					case 52644165:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						this.match = ((global::hunit.match.Match) (@value) );
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return @value;
					}
					
					
					default:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				switch (hash) {
					case 82038934:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "validate", 82038934)) );
					}
					
					
					case 5594516:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return this.pos;
					}
					
					
					case 1016240626:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return this.satisfied;
					}
					
					
					case 52644165:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return this.match;
					}
					
					
					default:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				switch (hash) {
					case 5594516:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(this.pos)) );
					}
					
					
					default:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				switch (hash) {
					case 82038934:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						this.validate(dynargs[0], ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (dynargs[1]) ))) ));
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						break;
					}
					
					
					default:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			baseArr.push("pos");
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			baseArr.push("satisfied");
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			baseArr.push("match");
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
			{
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


