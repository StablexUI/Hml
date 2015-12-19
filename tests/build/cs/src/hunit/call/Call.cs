
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.call {
	public class Call : global::haxe.lang.HxObject {
		
		public Call(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Call(int id, global::hunit.mock.MockData mockData, string method, global::Array arguments, global::Array<object> stack, object pos, bool isStub, global::hunit.call.Stub stub) {
			#line 45 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			global::hunit.call.Call.__hx_ctor_hunit_call_Call(this, id, mockData, method, arguments, stack, pos, isStub, stub);
		}
		#line default
		
		public static void __hx_ctor_hunit_call_Call(global::hunit.call.Call __temp_me81, int id, global::hunit.mock.MockData mockData, string method, global::Array arguments, global::Array<object> stack, object pos, bool isStub, global::hunit.call.Stub stub) {
			#line 34 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			__temp_me81.isStub = false;
			#line 47 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			__temp_me81.id = id;
			__temp_me81.mockData = mockData;
			__temp_me81.method = method;
			__temp_me81.arguments = arguments;
			__temp_me81.isStub = isStub;
			__temp_me81.stub = stub;
			__temp_me81.pos = pos;
			__temp_me81.stack = stack;
			#line 56 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			__temp_me81.result = global::hunit.utils.Value.Nothing;
			__temp_me81.set_exceptionValue(global::hunit.utils.Value.Nothing);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			return new global::hunit.call.Call(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				return new global::hunit.call.Call(((int) (global::haxe.lang.Runtime.toInt(arr[0])) ), ((global::hunit.mock.MockData) (arr[1]) ), global::haxe.lang.Runtime.toString(arr[2]), ((global::Array) (arr[3]) ), ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (arr[4]) ))) ), arr[5], global::haxe.lang.Runtime.toBool(arr[6]), ((global::hunit.call.Stub) (arr[7]) ));
			}
			#line default
		}
		
		
		public int id;
		
		public global::hunit.mock.MockData mockData;
		
		public string method;
		
		public global::Array arguments;
		
		public global::hunit.utils.Value result;
		
		public global::Array<object> stack;
		
		public global::hunit.utils.Value exceptionValue;
		
		public global::Array<object> exceptionStack;
		
		public bool isStub;
		
		public global::hunit.call.Stub stub;
		
		public object pos;
		
		public virtual string toString() {
			#line 67 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			string str = "";
			if (global::hunit.utils.ValueTools.hasValue<object>(this.result)) {
				#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				object @value = global::hunit.utils.ValueTools.getValue<object>(this.result);
				str = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("returned ", global::hunit.Utils.shortenQuote(@value)), "");
			}
			
			#line 73 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			if (global::hunit.utils.ValueTools.hasValue<object>(this.exceptionValue)) {
				#line 74 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				object e = global::hunit.utils.ValueTools.getValue<object>(this.exceptionValue);
				string exceptionMsg = null;
				#line 75 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				if (( e is global::Exception )) {
					#line 77 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					exceptionMsg = global::hunit.Utils.shortenString((((global::Exception) (e) )).message);
				}
				else {
					#line 78 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
					exceptionMsg = global::hunit.Utils.shortenQuote(e);
				}
				
				#line 81 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				str = global::haxe.lang.Runtime.concat("threw ", exceptionMsg);
			}
			
			#line 84 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			string className = this.mockData.mockClassName();
			string args = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::haxe.lang.Runtime.callField(this.arguments, "map", 5442204, new global::Array<object>(new object[]{( (( global::hunit.call.Call_toString_85__Fun.__hx_current != null )) ? (global::hunit.call.Call_toString_85__Fun.__hx_current) : (global::hunit.call.Call_toString_85__Fun.__hx_current = ((global::hunit.call.Call_toString_85__Fun) (new global::hunit.call.Call_toString_85__Fun()) )) )}))) ))) ).@join(", ");
			string msg = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("", className), "."), this.method), "("), args), ") "), str);
			#line 88 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			return msg;
		}
		#line default
		
		public virtual global::hunit.utils.Value set_exceptionValue(global::hunit.utils.Value @value) {
			#line 98 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			if (global::hunit.utils.ValueTools.hasValue<object>(@value)) {
				#line 99 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				this.exceptionStack = global::haxe.CallStack.exceptionStack().concat(this.stack);
			}
			
			#line 102 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			return this.exceptionValue = @value;
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				switch (hash) {
					case 5594516:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.pos = ((object) (@value) );
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return @value;
					}
					
					
					case 23515:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.id = ((int) (@value) );
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return @value;
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				switch (hash) {
					case 5594516:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.pos = ((object) (@value) );
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return @value;
					}
					
					
					case 1281094958:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.stub = ((global::hunit.call.Stub) (@value) );
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return @value;
					}
					
					
					case 1774369336:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.isStub = global::haxe.lang.Runtime.toBool(@value);
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return @value;
					}
					
					
					case 190204025:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.exceptionStack = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return @value;
					}
					
					
					case 956522658:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						if (handleProperties) {
							#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
							this.set_exceptionValue(((global::hunit.utils.Value) (@value) ));
							#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
							return @value;
						}
						else {
							#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
							this.exceptionValue = ((global::hunit.utils.Value) (@value) );
							#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
							return @value;
						}
						
					}
					
					
					case 67856200:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.stack = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return @value;
					}
					
					
					case 142895325:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.result = ((global::hunit.utils.Value) (@value) );
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return @value;
					}
					
					
					case 1855405910:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.arguments = ((global::Array) (@value) );
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return @value;
					}
					
					
					case 156956385:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.method = global::haxe.lang.Runtime.toString(@value);
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return @value;
					}
					
					
					case 1085956564:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.mockData = ((global::hunit.mock.MockData) (@value) );
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return @value;
					}
					
					
					case 23515:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						this.id = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return @value;
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				switch (hash) {
					case 827093983:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_exceptionValue", 827093983)) );
					}
					
					
					case 946786476:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "toString", 946786476)) );
					}
					
					
					case 5594516:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.pos;
					}
					
					
					case 1281094958:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.stub;
					}
					
					
					case 1774369336:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.isStub;
					}
					
					
					case 190204025:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.exceptionStack;
					}
					
					
					case 956522658:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.exceptionValue;
					}
					
					
					case 67856200:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.stack;
					}
					
					
					case 142895325:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.result;
					}
					
					
					case 1855405910:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.arguments;
					}
					
					
					case 156956385:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.method;
					}
					
					
					case 1085956564:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.mockData;
					}
					
					
					case 23515:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.id;
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				switch (hash) {
					case 5594516:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(this.pos)) );
					}
					
					
					case 23515:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return ((double) (this.id) );
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				switch (hash) {
					case 827093983:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.set_exceptionValue(((global::hunit.utils.Value) (dynargs[0]) ));
					}
					
					
					case 946786476:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return this.toString();
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			baseArr.push("pos");
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			baseArr.push("stub");
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			baseArr.push("isStub");
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			baseArr.push("exceptionStack");
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			baseArr.push("exceptionValue");
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			baseArr.push("stack");
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			baseArr.push("result");
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			baseArr.push("arguments");
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			baseArr.push("method");
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			baseArr.push("mockData");
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			baseArr.push("id");
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			{
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
		public override string ToString(){
			return this.toString();
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.call {
	public class Call_toString_85__Fun : global::haxe.lang.Function {
		
		public Call_toString_85__Fun() : base(1, 0) {
		}
		
		
		public static global::hunit.call.Call_toString_85__Fun __hx_current;
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			#line 85 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			object a = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((object) (__fn_float1) )) : (((object) (__fn_dyn1) )) );
			#line 85 "/home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx"
			return global::hunit.Utils.shortenQuote(a);
		}
		#line default
		
	}
}


