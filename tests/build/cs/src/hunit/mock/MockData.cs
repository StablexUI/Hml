
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.mock {
	public class MockData : global::haxe.lang.HxObject {
		
		public MockData(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public MockData(global::hunit.TestCase testCase, global::System.Type mockClass, global::haxe.lang.Null<bool> fullStub, global::haxe.lang.Null<bool> strictMode) {
			#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			global::hunit.mock.MockData.__hx_ctor_hunit_mock_MockData(this, testCase, mockClass, fullStub, strictMode);
		}
		#line default
		
		public static void __hx_ctor_hunit_mock_MockData(global::hunit.mock.MockData __temp_me113, global::hunit.TestCase testCase, global::System.Type mockClass, global::haxe.lang.Null<bool> fullStub, global::haxe.lang.Null<bool> strictMode) {
			#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			__temp_me113.strictMode = false;
			#line 42 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			__temp_me113.fullStub = false;
			#line 34 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			__temp_me113.callCounter = 0;
			#line 55 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			bool __temp_strictMode112 = ( ( ! (strictMode.hasValue) ) ? (false) : ((strictMode).@value) );
			#line 55 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			bool __temp_fullStub111 = ( ( ! (fullStub.hasValue) ) ? (false) : ((fullStub).@value) );
			__temp_me113.mockClass = mockClass;
			__temp_me113.testCase = testCase;
			__temp_me113.fullStub = __temp_fullStub111;
			__temp_me113.strictMode = __temp_strictMode112;
			#line 61 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			__temp_me113.unstubbedMethods = new global::Array<object>(new object[]{});
			__temp_me113.unstubPositions = new global::Array<object>(new object[]{});
			__temp_me113.callLog = new global::Array<object>(new object[]{});
			__temp_me113.stubs = new global::Array<object>(new object[]{});
			__temp_me113.expectations = new global::Array<object>(new object[]{});
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			return new global::hunit.mock.MockData(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				return new global::hunit.mock.MockData(((global::hunit.TestCase) (arr[0]) ), ((global::System.Type) (arr[1]) ), global::haxe.lang.Null<object>.ofDynamic<bool>(arr[2]), global::haxe.lang.Null<object>.ofDynamic<bool>(arr[3]));
			}
			#line default
		}
		
		
		public global::System.Type mockClass;
		
		public global::hunit.TestCase testCase;
		
		public int callCounter;
		
		public global::Array<object> callLog;
		
		public global::Array<object> stubs;
		
		public global::Array<object> expectations;
		
		public bool fullStub;
		
		public bool strictMode;
		
		public global::Array<object> unstubbedMethods;
		
		public global::Array<object> unstubPositions;
		
		public virtual string mockClassName() {
			#line 75 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			return global::Type.getClassName(this.mockClass);
		}
		#line default
		
		public virtual void stub(global::hunit.call.Stub stub) {
			#line 86 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			if (( this.unstubbedMethods.indexOf(stub.method, default(global::haxe.lang.Null<int>)) >= 0 )) {
				#line 87 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				object pos = this.unstubPositions[this.unstubbedMethods.indexOf(stub.method, default(global::haxe.lang.Null<int>))];
				string unstubPos = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(pos, "fileName", 1648581351, true)), ":"), global::haxe.lang.Runtime.toString(((int) (global::haxe.lang.Runtime.getField_f(pos, "lineNumber", 1981972957, true)) )));
				#line 90 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.InvalidTestException(global::haxe.lang.Runtime.concat("Cannot stub method which was unstubbed at ", unstubPos), stub.pos));
			}
			
			#line 93 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			this.stubs.push(stub);
		}
		#line default
		
		public virtual void unstub(string method, object pos) {
			#line 104 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			{
				#line 104 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				int _g = 0;
				#line 104 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				global::Array<object> _g1 = this.stubs;
				#line 104 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				while (( _g < _g1.length )) {
					#line 104 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					global::hunit.call.Stub stub = ((global::hunit.call.Stub) (_g1[_g]) );
					#line 104 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					 ++ _g;
					#line 106 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (string.Equals(stub.method, method)) {
						#line 107 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						string stubPos = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(stub.pos, "fileName", 1648581351, true)), ":"), global::haxe.lang.Runtime.toString(((int) (global::haxe.lang.Runtime.getField_f(stub.pos, "lineNumber", 1981972957, true)) )));
						#line 109 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.InvalidTestException(global::haxe.lang.Runtime.concat("Cannot unstub method which was stubbed directly at ", stubPos), pos));
					}
					
				}
				
			}
			
			#line 114 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			if (( this.unstubbedMethods.indexOf(method, default(global::haxe.lang.Null<int>)) < 0 )) {
				#line 115 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				this.unstubbedMethods.push(method);
				this.unstubPositions.push(pos);
			}
			
		}
		#line default
		
		public virtual void expect(global::hunit.call.Expect expect) {
			#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			expect.fromCallId = this.callCounter;
			this.expectations.push(expect);
			this.testCase.__hu_state.expectedCalls.@add(expect);
		}
		#line default
		
		public virtual void removeExpect(global::hunit.call.Expect expect) {
			#line 139 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			this.expectations.@remove(expect);
			this.testCase.__hu_state.expectedCalls.@remove(expect);
		}
		#line default
		
		public virtual int methodInvoked(string name, global::Array args, object pos) {
			#line 151 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			bool isStub = ( this.fullStub && ( this.unstubbedMethods.indexOf(name, default(global::haxe.lang.Null<int>)) < 0 ) );
			global::hunit.call.Stub stub = null;
			{
				#line 153 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				int _g1 = 0;
				#line 153 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				int _g = this.stubs.length;
				#line 153 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				while (( _g1 < _g )) {
					#line 153 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					int i = _g1++;
					stub = ((global::hunit.call.Stub) (this.stubs[i]) );
					#line 156 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (string.Equals(stub.method, name)) {
						#line 157 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						isStub = true;
						#line 159 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						if (stub.match(name, args)) {
							#line 160 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							break;
						}
						
					}
					
					#line 163 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					stub = null;
				}
				
			}
			
			#line 166 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			global::Array<object> stack = global::haxe.CallStack.callStack();
			#line 168 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			stack.shift();
			#line 170 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			global::hunit.call.Call call = new global::hunit.call.Call(this.callCounter++, this, name, args, stack, pos, isStub, stub);
			this.callLog.push(call);
			#line 173 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			return call.id;
		}
		#line default
		
		public virtual bool isMethodMocked(int callId) {
			#line 183 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			global::hunit.call.Call call = ((global::hunit.call.Call) (this.callLog[callId]) );
			#line 185 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			return call.isStub;
		}
		#line default
		
		public virtual object getMockedCallResult(int callId) {
			unchecked {
				#line 195 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				global::hunit.call.Call call = ((global::hunit.call.Call) (this.callLog[callId]) );
				#line 197 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				if ( ! (call.isStub) ) {
					#line 198 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					string cls = global::Type.getClassName(this.mockClass);
					throw global::haxe.lang.HaxeException.wrap(new global::Exception(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Trying to get mocked result while `", cls), "."), call.method), "()` is not stubbed"), new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"getMockedCallResult", "hunit.mock.MockData", "MockData.hx"}, new int[]{1981972957}, new double[]{((double) (199) )})));
				}
				
				#line 202 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				if (( call.stub == null )) {
					#line 203 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					return null;
				}
				
				#line 206 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				if (global::hunit.utils.ValueTools.hasValue<object>(call.stub.implementation)) {
					#line 207 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					return global::Reflect.callMethod(null, global::hunit.utils.ValueTools.getValue<object>(call.stub.implementation), call.arguments);
				}
				
				#line 210 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				if (global::hunit.utils.ValueTools.hasValue<object>(call.stub.throws)) {
					#line 211 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					throw global::haxe.lang.HaxeException.wrap(global::hunit.utils.ValueTools.getValue<object>(call.stub.throws));
				}
				
				#line 214 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				if (global::hunit.utils.ValueTools.hasValue<object>(call.stub.returns)) {
					#line 214 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					return global::hunit.utils.ValueTools.getValue<object>(call.stub.returns);
				}
				else {
					#line 214 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					return null;
				}
				
			}
			#line default
		}
		
		
		public virtual void addCallResult(int callId, object result) {
			#line 224 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			((global::hunit.call.Call) (this.callLog[callId]) ).result = global::hunit.utils.Value.Thing(result);
		}
		#line default
		
		public virtual void addCallException(int callId, object exception) {
			#line 234 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			((global::hunit.call.Call) (this.callLog[callId]) ).set_exceptionValue(global::hunit.utils.Value.Thing(exception));
			this.testCase.__hu_state.cacheCallException(((global::hunit.call.Call) (this.callLog[callId]) ));
		}
		#line default
		
		public virtual void validateExpectation(global::hunit.call.Expect expect) {
			unchecked {
				#line 245 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				bool failed = false;
				string reason = "";
				#line 248 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				global::hunit.call.Call call = null;
				int count = 0;
				{
					#line 250 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					int _g1 = 0;
					#line 250 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					int _g = this.callLog.length;
					#line 250 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					while (( _g1 < _g )) {
						#line 250 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						int i = _g1++;
						call = ((global::hunit.call.Call) (this.callLog[i]) );
						if (( call.id < expect.fromCallId )) {
							#line 252 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							continue;
						}
						
						#line 254 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						if (expect.match(call)) {
							#line 255 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							count++;
						}
						
					}
					
				}
				
				#line 258 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				string s = null;
				#line 258 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				if (( count == 1 )) {
					#line 258 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					s = "";
				}
				else {
					#line 258 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					s = "s";
				}
				
				#line 260 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				{
					#line 260 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					global::hunit.call.CallCount _g2 = expect.count;
					#line 260 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					switch (_g2.index) {
						case 0:
						{
							#line 262 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							if (( count > 0 )) {
								#line 263 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
								failed = true;
								#line 265 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
								reason = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(", actually called ", global::haxe.lang.Runtime.toString(count)), " time"), s), ".");
							}
							
							#line 262 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							break;
						}
						
						
						case 1:
						{
							#line 267 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							break;
						}
						
						
						case 2:
						{
							#line 269 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							if (( count != 1 )) {
								#line 270 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
								failed = true;
								#line 272 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
								reason = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(", actually called ", global::haxe.lang.Runtime.toString(count)), " time"), s), ".");
							}
							
							#line 269 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							break;
						}
						
						
						case 3:
						{
							#line 260 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							int amount = ((int) (global::haxe.lang.Runtime.toInt(_g2.@params[0])) );
							#line 275 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							if (( count < amount )) {
								#line 276 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
								failed = true;
								#line 278 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
								reason = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(", actually called ", global::haxe.lang.Runtime.toString(count)), " time"), s), ".");
							}
							
							#line 274 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							break;
						}
						
						
						case 4:
						{
							#line 260 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							int amount1 = ((int) (global::haxe.lang.Runtime.toInt(_g2.@params[0])) );
							#line 281 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							if (( count != amount1 )) {
								#line 282 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
								failed = true;
								#line 284 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
								reason = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(", actually called ", global::haxe.lang.Runtime.toString(count)), " time"), s), ".");
							}
							
							#line 280 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							break;
						}
						
						
					}
					
				}
				
				#line 288 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				if (failed) {
					#line 289 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.UnmetExpectationException(expect, reason, expect.pos));
				}
				
			}
			#line default
		}
		
		
		public virtual void validateStrictMode(int callId) {
			#line 300 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			if ( ! (this.strictMode) ) {
				#line 300 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				return;
			}
			
			#line 302 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			global::hunit.call.Call call = ((global::hunit.call.Call) (this.callLog[callId]) );
			#line 304 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			if (( call.stub != null )) {
				#line 304 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				return;
			}
			
			#line 306 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			{
				#line 306 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				int _g1 = 0;
				#line 306 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				int _g = this.expectations.length;
				#line 306 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				while (( _g1 < _g )) {
					#line 306 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					int i = _g1++;
					if (((global::hunit.call.Expect) (this.expectations[i]) ).sameObjectMethod(call)) {
						#line 308 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return;
					}
					
				}
				
			}
			
			#line 312 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			string msg = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("", global::Std.@string(call)), " is not expected nor stubbed.");
			this.throwUnexpectedCallException(call, msg, null);
		}
		#line default
		
		public virtual void validateCall(int callId) {
			#line 323 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			bool isExpected = false;
			bool satisfies = false;
			#line 326 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			global::hunit.call.Call call = ((global::hunit.call.Call) (this.callLog[callId]) );
			#line 328 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			global::hunit.call.Expect expect = null;
			{
				#line 329 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				int _g1 = 0;
				#line 329 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				int _g = this.expectations.length;
				#line 329 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				while (( _g1 < _g )) {
					#line 329 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					int i = _g1++;
					expect = ((global::hunit.call.Expect) (this.expectations[i]) );
					#line 332 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (expect.sameObjectMethod(call)) {
						#line 333 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						isExpected = true;
						#line 335 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						if (expect.match(call)) {
							#line 336 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							expect.timesMatched++;
							satisfies = true;
							if (expect.tooManyCalls()) {
								#line 339 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
								this.throwUnexpectedCallException(call, null, expect);
							}
							
						}
						
					}
					
				}
				
			}
			
			#line 345 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			if (( isExpected &&  ! (satisfies)  )) {
				#line 346 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				this.throwUnexpectedCallException(call, null, null);
			}
			
		}
		#line default
		
		public virtual void throwUnexpectedCallException(global::hunit.call.Call call, string msg, global::hunit.call.Expect expect) {
			unchecked {
				#line 357 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				global::hunit.exceptions.UnexpectedCallException e = new global::hunit.exceptions.UnexpectedCallException(call, expect, msg, call.pos);
				this.testCase.__hu_state.pendingFail(e);
				#line 360 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				e.truncateStack(new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"throwUnexpectedCallException", "hunit.mock.MockData", "MockData.hx"}, new int[]{1981972957}, new double[]{((double) (360) )}), new global::haxe.lang.Null<int>(1, true));
				throw global::haxe.lang.HaxeException.wrap(e);
			}
			#line default
		}
		
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				switch (hash) {
					case 1007037950:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.callCounter = ((int) (@value) );
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return @value;
					}
					
					
					default:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				switch (hash) {
					case 1375575715:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.unstubPositions = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return @value;
					}
					
					
					case 517735928:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.unstubbedMethods = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return @value;
					}
					
					
					case 279312204:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.strictMode = global::haxe.lang.Runtime.toBool(@value);
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return @value;
					}
					
					
					case 1617919581:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.fullStub = global::haxe.lang.Runtime.toBool(@value);
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return @value;
					}
					
					
					case 28091063:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.expectations = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return @value;
					}
					
					
					case 68850565:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.stubs = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return @value;
					}
					
					
					case 1414441606:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.callLog = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return @value;
					}
					
					
					case 1007037950:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.callCounter = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return @value;
					}
					
					
					case 1156359202:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.testCase = ((global::hunit.TestCase) (@value) );
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return @value;
					}
					
					
					case 1445699918:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.mockClass = ((global::System.Type) (@value) );
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return @value;
					}
					
					
					default:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				switch (hash) {
					case 1459973818:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "throwUnexpectedCallException", 1459973818)) );
					}
					
					
					case 364517460:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "validateCall", 364517460)) );
					}
					
					
					case 1601282946:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "validateStrictMode", 1601282946)) );
					}
					
					
					case 363222342:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "validateExpectation", 363222342)) );
					}
					
					
					case 1255452912:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "addCallException", 1255452912)) );
					}
					
					
					case 503155100:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "addCallResult", 503155100)) );
					}
					
					
					case 84626330:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getMockedCallResult", 84626330)) );
					}
					
					
					case 548244020:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "isMethodMocked", 548244020)) );
					}
					
					
					case 113201419:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "methodInvoked", 113201419)) );
					}
					
					
					case 866355517:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "removeExpect", 866355517)) );
					}
					
					
					case 1148579289:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "expect", 1148579289)) );
					}
					
					
					case 1781595143:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "unstub", 1781595143)) );
					}
					
					
					case 1281094958:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "stub", 1281094958)) );
					}
					
					
					case 1747582649:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "mockClassName", 1747582649)) );
					}
					
					
					case 1375575715:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.unstubPositions;
					}
					
					
					case 517735928:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.unstubbedMethods;
					}
					
					
					case 279312204:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.strictMode;
					}
					
					
					case 1617919581:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.fullStub;
					}
					
					
					case 28091063:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.expectations;
					}
					
					
					case 68850565:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.stubs;
					}
					
					
					case 1414441606:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.callLog;
					}
					
					
					case 1007037950:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.callCounter;
					}
					
					
					case 1156359202:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.testCase;
					}
					
					
					case 1445699918:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.mockClass;
					}
					
					
					default:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				switch (hash) {
					case 1007037950:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((double) (this.callCounter) );
					}
					
					
					default:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				switch (hash) {
					case 1459973818:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.throwUnexpectedCallException(((global::hunit.call.Call) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), ((global::hunit.call.Expect) (dynargs[2]) ));
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						break;
					}
					
					
					case 364517460:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.validateCall(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						break;
					}
					
					
					case 1601282946:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.validateStrictMode(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						break;
					}
					
					
					case 363222342:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.validateExpectation(((global::hunit.call.Expect) (dynargs[0]) ));
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						break;
					}
					
					
					case 1255452912:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.addCallException(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ), dynargs[1]);
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						break;
					}
					
					
					case 503155100:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.addCallResult(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ), dynargs[1]);
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						break;
					}
					
					
					case 84626330:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.getMockedCallResult(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
					}
					
					
					case 548244020:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.isMethodMocked(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
					}
					
					
					case 113201419:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.methodInvoked(global::haxe.lang.Runtime.toString(dynargs[0]), ((global::Array) (dynargs[1]) ), dynargs[2]);
					}
					
					
					case 866355517:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.removeExpect(((global::hunit.call.Expect) (dynargs[0]) ));
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						break;
					}
					
					
					case 1148579289:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.expect(((global::hunit.call.Expect) (dynargs[0]) ));
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						break;
					}
					
					
					case 1781595143:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.unstub(global::haxe.lang.Runtime.toString(dynargs[0]), dynargs[1]);
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						break;
					}
					
					
					case 1281094958:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.stub(((global::hunit.call.Stub) (dynargs[0]) ));
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						break;
					}
					
					
					case 1747582649:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.mockClassName();
					}
					
					
					default:
					{
						#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			baseArr.push("unstubPositions");
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			baseArr.push("unstubbedMethods");
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			baseArr.push("strictMode");
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			baseArr.push("fullStub");
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			baseArr.push("expectations");
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			baseArr.push("stubs");
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			baseArr.push("callLog");
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			baseArr.push("callCounter");
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			baseArr.push("testCase");
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			baseArr.push("mockClass");
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			{
				#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


