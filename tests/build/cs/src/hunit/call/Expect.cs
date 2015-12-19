
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.call {
	public class Expect : global::haxe.lang.HxObject, global::hunit.call.IExpect {
		
		public Expect(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Expect(global::hunit.mock.MockData mockData, string method, global::Array<object> arguments, global::hunit.utils.Value returns, global::hunit.utils.Value throws, global::hunit.call.CallCount count, object pos) {
			#line 43 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			global::hunit.call.Expect.__hx_ctor_hunit_call_Expect(this, mockData, method, arguments, returns, throws, count, pos);
		}
		#line default
		
		public static void __hx_ctor_hunit_call_Expect(global::hunit.call.Expect __temp_me82, global::hunit.mock.MockData mockData, string method, global::Array<object> arguments, global::hunit.utils.Value returns, global::hunit.utils.Value throws, global::hunit.call.CallCount count, object pos) {
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			__temp_me82.fromCallId = 0;
			#line 34 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			__temp_me82.timesMatched = 0;
			#line 45 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			__temp_me82.mockData = mockData;
			__temp_me82.method = method;
			__temp_me82.arguments = arguments;
			__temp_me82.returns = returns;
			__temp_me82.throws = throws;
			__temp_me82.count = count;
			__temp_me82.pos = pos;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			return new global::hunit.call.Expect(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				return new global::hunit.call.Expect(((global::hunit.mock.MockData) (arr[0]) ), global::haxe.lang.Runtime.toString(arr[1]), ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (arr[2]) ))) ), ((global::hunit.utils.Value) (arr[3]) ), ((global::hunit.utils.Value) (arr[4]) ), ((global::hunit.call.CallCount) (arr[5]) ), arr[6]);
			}
			#line default
		}
		
		
		public global::hunit.mock.MockData mockData;
		
		public string method;
		
		public global::Array<object> arguments;
		
		public global::hunit.utils.Value returns;
		
		public global::hunit.utils.Value throws;
		
		public global::hunit.call.CallCount count;
		
		public object pos;
		
		public int timesMatched;
		
		public int fromCallId;
		
		public virtual bool sameObjectMethod(global::hunit.call.Call call) {
			#line 61 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			return ( ( this.mockData == call.mockData ) && string.Equals(this.method, call.method) );
		}
		#line default
		
		public virtual bool match(global::hunit.call.Call call) {
			#line 71 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			if (( this.mockData != call.mockData )) {
				#line 71 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				return false;
			}
			
			#line 73 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			if ( ! (string.Equals(this.method, call.method)) ) {
				#line 73 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				return false;
			}
			
			#line 75 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			if (( this.arguments.length != ((int) (global::haxe.lang.Runtime.getField_f(call.arguments, "length", 520590566, true)) ) )) {
				#line 76 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				throw global::haxe.lang.HaxeException.wrap("Arguments count does not match");
			}
			
			#line 79 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			{
				#line 79 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				int _g1 = 0;
				#line 79 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				int _g = this.arguments.length;
				#line 79 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				while (( _g1 < _g )) {
					#line 79 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					int i = _g1++;
					if ( ! (((global::hunit.match.Match) (this.arguments[i]) ).match(call.arguments[i])) ) {
						#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return false;
					}
					
				}
				
			}
			
			#line 83 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			if (global::hunit.utils.ValueTools.hasValue<object>(this.returns)) {
				#line 84 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				if ( ! (global::hunit.utils.ValueTools.hasValue<object>(call.result)) ) {
					#line 84 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					return false;
				}
				
				#line 86 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				global::hunit.match.Match expected = ((global::hunit.match.Match) (global::hunit.utils.ValueTools.getValue<object>(this.returns)) );
				object actual = global::hunit.utils.ValueTools.getValue<object>(call.result);
				if ( ! (expected.match(actual)) ) {
					#line 88 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					return false;
				}
				
			}
			
			#line 91 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			if (global::hunit.utils.ValueTools.hasValue<object>(this.throws)) {
				#line 92 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				if ( ! (global::hunit.utils.ValueTools.hasValue<object>(call.exceptionValue)) ) {
					#line 93 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					return false;
				}
				
				#line 96 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				object e = global::hunit.utils.ValueTools.getValue<object>(call.exceptionValue);
				if ( ! (((global::hunit.match.Match) (global::hunit.utils.ValueTools.getValue<object>(this.throws)) ).match(e)) ) {
					#line 98 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					return false;
				}
				
			}
			
			#line 102 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			return true;
		}
		#line default
		
		public virtual void validate() {
			#line 112 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			this.mockData.validateExpectation(this);
		}
		#line default
		
		public virtual bool tooManyCalls() {
			unchecked {
				#line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				{
					#line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					global::hunit.call.CallCount _g = this.count;
					#line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					switch (_g.index) {
						case 0:
						{
							#line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							return ( this.timesMatched > 0 );
						}
						
						
						case 1:
						{
							#line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							return false;
						}
						
						
						case 2:
						{
							#line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							return ( this.timesMatched > 1 );
						}
						
						
						case 3:
						{
							#line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							int amount = ((int) (global::haxe.lang.Runtime.toInt(_g.@params[0])) );
							#line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							return false;
						}
						
						
						case 4:
						{
							#line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							int amount1 = ((int) (global::haxe.lang.Runtime.toInt(_g.@params[0])) );
							#line 122 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							return ( this.timesMatched > amount1 );
						}
						
						
					}
					
				}
				
				#line 120 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				return default(bool);
			}
			#line default
		}
		
		
		public virtual string toString() {
			unchecked {
				#line 138 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				string cls = this.mockData.mockClassName();
				string args = this.arguments.map<object>(( (( global::hunit.call.Expect_toString_139__Fun.__hx_current != null )) ? (global::hunit.call.Expect_toString_139__Fun.__hx_current) : (global::hunit.call.Expect_toString_139__Fun.__hx_current = ((global::hunit.call.Expect_toString_139__Fun) (new global::hunit.call.Expect_toString_139__Fun()) )) )).@join(", ");
				#line 141 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				global::Array<object> results = new global::Array<object>(new object[]{});
				if (global::hunit.utils.ValueTools.hasValue<object>(this.returns)) {
					#line 143 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					results.push(global::haxe.lang.Runtime.concat("to return ", global::Std.@string(((global::hunit.match.Match) (global::hunit.utils.ValueTools.getValue<object>(this.returns)) ))));
				}
				
				#line 145 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				if (global::hunit.utils.ValueTools.hasValue<object>(this.throws)) {
					#line 146 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					results.push(global::haxe.lang.Runtime.concat("to throw ", global::Std.@string(((global::hunit.match.Match) (global::hunit.utils.ValueTools.getValue<object>(this.throws)) ))));
				}
				
				#line 149 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				{
					#line 149 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					global::hunit.call.CallCount _g = this.count;
					#line 149 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					switch (_g.index) {
						case 1:
						{
							#line 150 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							results.push("to be called zero or more times");
							#line 150 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							break;
						}
						
						
						case 0:
						{
							#line 151 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							results.push("to be never called");
							#line 151 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							break;
						}
						
						
						case 2:
						{
							#line 152 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							results.push("to be called once");
							#line 152 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							break;
						}
						
						
						case 3:
						{
							#line 149 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							int amount = ((int) (global::haxe.lang.Runtime.toInt(_g.@params[0])) );
							#line 153 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							results.push(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("to be called at least ", global::haxe.lang.Runtime.toString(amount)), " time"), (( (( amount == 1 )) ? ("") : ("s") ))));
							#line 153 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							break;
						}
						
						
						case 4:
						{
							#line 149 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							int amount1 = ((int) (global::haxe.lang.Runtime.toInt(_g.@params[0])) );
							#line 154 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							results.push(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("to be called exactly ", global::haxe.lang.Runtime.toString(amount1)), " time"), (( (( amount1 == 1 )) ? ("") : ("s") ))));
							#line 154 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
							break;
						}
						
						
					}
					
				}
				
				#line 157 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				string last = global::haxe.lang.Runtime.toString((results.pop()).toDynamic());
				string toDo = null;
				#line 158 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				if (( results.length == 0 )) {
					#line 158 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					toDo = last;
				}
				else {
					#line 158 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
					toDo = global::haxe.lang.Runtime.concat(results.@join(", "), (global::haxe.lang.Runtime.concat(" and ", last)));
				}
				
				#line 159 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				string msg = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("", cls), "."), this.method), "("), args), ") is expected "), toDo);
				#line 161 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				return msg;
			}
			#line default
		}
		
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				switch (hash) {
					case 2049720611:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.fromCallId = ((int) (@value) );
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return @value;
					}
					
					
					case 1197590974:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.timesMatched = ((int) (@value) );
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return @value;
					}
					
					
					case 5594516:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.pos = ((object) (@value) );
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return @value;
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				switch (hash) {
					case 2049720611:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.fromCallId = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return @value;
					}
					
					
					case 1197590974:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.timesMatched = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return @value;
					}
					
					
					case 5594516:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.pos = ((object) (@value) );
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return @value;
					}
					
					
					case 1248019663:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.count = ((global::hunit.call.CallCount) (@value) );
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return @value;
					}
					
					
					case 247538829:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.throws = ((global::hunit.utils.Value) (@value) );
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return @value;
					}
					
					
					case 2126673347:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.returns = ((global::hunit.utils.Value) (@value) );
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return @value;
					}
					
					
					case 1855405910:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.arguments = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return @value;
					}
					
					
					case 156956385:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.method = global::haxe.lang.Runtime.toString(@value);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return @value;
					}
					
					
					case 1085956564:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.mockData = ((global::hunit.mock.MockData) (@value) );
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return @value;
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				switch (hash) {
					case 946786476:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "toString", 946786476)) );
					}
					
					
					case 1038257090:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "tooManyCalls", 1038257090)) );
					}
					
					
					case 82038934:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "validate", 82038934)) );
					}
					
					
					case 52644165:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "match", 52644165)) );
					}
					
					
					case 36656006:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "sameObjectMethod", 36656006)) );
					}
					
					
					case 2049720611:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.fromCallId;
					}
					
					
					case 1197590974:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.timesMatched;
					}
					
					
					case 5594516:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.pos;
					}
					
					
					case 1248019663:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.count;
					}
					
					
					case 247538829:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.throws;
					}
					
					
					case 2126673347:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.returns;
					}
					
					
					case 1855405910:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.arguments;
					}
					
					
					case 156956385:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.method;
					}
					
					
					case 1085956564:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.mockData;
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				switch (hash) {
					case 2049720611:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((double) (this.fromCallId) );
					}
					
					
					case 1197590974:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((double) (this.timesMatched) );
					}
					
					
					case 5594516:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(this.pos)) );
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				switch (hash) {
					case 946786476:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.toString();
					}
					
					
					case 1038257090:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.tooManyCalls();
					}
					
					
					case 82038934:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						this.validate();
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						break;
					}
					
					
					case 52644165:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.match(((global::hunit.call.Call) (dynargs[0]) ));
					}
					
					
					case 36656006:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return this.sameObjectMethod(((global::hunit.call.Call) (dynargs[0]) ));
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			baseArr.push("fromCallId");
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			baseArr.push("timesMatched");
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			baseArr.push("pos");
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			baseArr.push("count");
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			baseArr.push("throws");
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			baseArr.push("returns");
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			baseArr.push("arguments");
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			baseArr.push("method");
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			baseArr.push("mockData");
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			{
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
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
	public class Expect_toString_139__Fun : global::haxe.lang.Function {
		
		public Expect_toString_139__Fun() : base(1, 0) {
		}
		
		
		public static global::hunit.call.Expect_toString_139__Fun __hx_current;
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			#line 139 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			global::hunit.match.Match a = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((global::hunit.match.Match) (((object) (__fn_float1) )) )) : (((global::hunit.match.Match) (__fn_dyn1) )) );
			#line 139 "/home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx"
			return global::haxe.lang.Runtime.concat("", a.toString());
		}
		#line default
		
	}
}


