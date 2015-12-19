
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.call {
	public class Stub : global::haxe.lang.HxObject {
		
		public Stub(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Stub(global::hunit.mock.MockData mockData, string method, global::Array<object> arguments, global::hunit.utils.Value returns, global::hunit.utils.Value throws, object pos) {
			#line 42 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			global::hunit.call.Stub.__hx_ctor_hunit_call_Stub(this, mockData, method, arguments, returns, throws, pos);
		}
		#line default
		
		public static void __hx_ctor_hunit_call_Stub(global::hunit.call.Stub __temp_me83, global::hunit.mock.MockData mockData, string method, global::Array<object> arguments, global::hunit.utils.Value returns, global::hunit.utils.Value throws, object pos) {
			#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			__temp_me83.mockData = mockData;
			__temp_me83.method = method;
			__temp_me83.arguments = arguments;
			__temp_me83.returns = returns;
			__temp_me83.throws = throws;
			__temp_me83.pos = pos;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			return new global::hunit.call.Stub(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				return new global::hunit.call.Stub(((global::hunit.mock.MockData) (arr[0]) ), global::haxe.lang.Runtime.toString(arr[1]), ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (arr[2]) ))) ), ((global::hunit.utils.Value) (arr[3]) ), ((global::hunit.utils.Value) (arr[4]) ), arr[5]);
			}
			#line default
		}
		
		
		public global::hunit.mock.MockData mockData;
		
		public string method;
		
		public global::Array<object> arguments;
		
		public global::hunit.utils.Value returns;
		
		public global::hunit.utils.Value throws;
		
		public global::hunit.utils.Value implementation;
		
		public object pos;
		
		public virtual global::hunit.call.Expect expect(global::hunit.call.CallCount count) {
			#line 59 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			global::hunit.call.Expect expect = new global::hunit.call.Expect(this.mockData, this.method, this.arguments, global::hunit.utils.Value.Nothing, global::hunit.utils.Value.Nothing, count, this.pos);
			#line 68 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			this.mockData.expect(expect);
			#line 70 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			return expect;
		}
		#line default
		
		public virtual bool match(string method, global::Array arguments) {
			#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			if ( ! (string.Equals(this.method, method)) ) {
				#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				return false;
			}
			
			#line 82 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			if (( ((int) (global::haxe.lang.Runtime.getField_f(arguments, "length", 520590566, true)) ) != this.arguments.length )) {
				#line 83 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				throw global::haxe.lang.HaxeException.wrap("Arguments count does not match");
			}
			
			#line 86 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			{
				#line 86 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				int _g1 = 0;
				#line 86 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				int _g = this.arguments.length;
				#line 86 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				while (( _g1 < _g )) {
					#line 86 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
					int i = _g1++;
					if ( ! (((global::hunit.match.Match) (this.arguments[i]) ).match(arguments[i])) ) {
						#line 87 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return false;
					}
					
				}
				
			}
			
			#line 90 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			return true;
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				switch (hash) {
					case 5594516:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this.pos = ((object) (@value) );
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return @value;
					}
					
					
					default:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				switch (hash) {
					case 5594516:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this.pos = ((object) (@value) );
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return @value;
					}
					
					
					case 1395511858:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this.implementation = ((global::hunit.utils.Value) (@value) );
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return @value;
					}
					
					
					case 247538829:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this.throws = ((global::hunit.utils.Value) (@value) );
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return @value;
					}
					
					
					case 2126673347:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this.returns = ((global::hunit.utils.Value) (@value) );
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return @value;
					}
					
					
					case 1855405910:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this.arguments = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return @value;
					}
					
					
					case 156956385:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this.method = global::haxe.lang.Runtime.toString(@value);
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return @value;
					}
					
					
					case 1085956564:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						this.mockData = ((global::hunit.mock.MockData) (@value) );
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return @value;
					}
					
					
					default:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				switch (hash) {
					case 52644165:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "match", 52644165)) );
					}
					
					
					case 1148579289:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "expect", 1148579289)) );
					}
					
					
					case 5594516:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.pos;
					}
					
					
					case 1395511858:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.implementation;
					}
					
					
					case 247538829:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.throws;
					}
					
					
					case 2126673347:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.returns;
					}
					
					
					case 1855405910:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.arguments;
					}
					
					
					case 156956385:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.method;
					}
					
					
					case 1085956564:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.mockData;
					}
					
					
					default:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				switch (hash) {
					case 5594516:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(this.pos)) );
					}
					
					
					default:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				switch (hash) {
					case 52644165:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.match(global::haxe.lang.Runtime.toString(dynargs[0]), ((global::Array) (dynargs[1]) ));
					}
					
					
					case 1148579289:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return this.expect(((global::hunit.call.CallCount) (dynargs[0]) ));
					}
					
					
					default:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			baseArr.push("pos");
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			baseArr.push("implementation");
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			baseArr.push("throws");
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			baseArr.push("returns");
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			baseArr.push("arguments");
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			baseArr.push("method");
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			baseArr.push("mockData");
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
			{
				#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


