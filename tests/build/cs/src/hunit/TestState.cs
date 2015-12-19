
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit {
	public class TestState : global::haxe.lang.HxObject {
		
		public TestState(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public TestState(global::hunit.TestCase testCase, string testName, global::hunit.report.TestReport report, global::haxe.lang.Function print) {
			#line 51 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			global::hunit.TestState.__hx_ctor_hunit_TestState(this, testCase, testName, report, print);
		}
		#line default
		
		public static void __hx_ctor_hunit_TestState(global::hunit.TestState __temp_me75, global::hunit.TestCase testCase, string testName, global::hunit.report.TestReport report, global::haxe.lang.Function print) {
			#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			__temp_me75.warned = false;
			#line 53 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			__temp_me75.testCase = testCase;
			__temp_me75.testName = testName;
			__temp_me75.report = report;
			__temp_me75.print = print;
			#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			__temp_me75.pendingExceptions = new global::Array<object>(new object[]{});
			__temp_me75.callExceptions = new global::Array<object>(new object[]{});
			__temp_me75.expectedCalls = new global::List<object>();
			__temp_me75.asserted = new global::List<object>();
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			return new global::hunit.TestState(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				return new global::hunit.TestState(((global::hunit.TestCase) (arr[0]) ), global::haxe.lang.Runtime.toString(arr[1]), ((global::hunit.report.TestReport) (arr[2]) ), ((global::haxe.lang.Function) (arr[3]) ));
			}
			#line default
		}
		
		
		public global::hunit.TestCase testCase;
		
		public string testName;
		
		public global::hunit.report.TestReport report;
		
		public global::hunit.exceptions.ExpectedExceptionData expectedException;
		
		public global::haxe.lang.Function print;
		
		public bool warned;
		
		public global::List<object> expectedCalls;
		
		public global::List<object> asserted;
		
		public global::Array<object> pendingExceptions;
		
		public global::Array<object> callExceptions;
		
		public virtual bool expectingException() {
			#line 71 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			return ( this.expectedException != null );
		}
		#line default
		
		public virtual void validateException(object e, global::Array<object> catchExceptionStack, global::Array<object> exceptionStack) {
			unchecked {
				#line 82 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				if (( e != null )) {
					#line 83 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (( this.expectedException != null )) {
						#line 84 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.expectedException.validate(e, this.getOriginalExceptionStack(e, catchExceptionStack, exceptionStack));
					}
					else {
						#line 86 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.UnexpectedException(e, this.getOriginalExceptionStack(e, catchExceptionStack, exceptionStack), new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"validateException", "hunit.TestState", "TestState.hx"}, new int[]{1981972957}, new double[]{((double) (86) )})));
					}
					
				}
				
			}
			#line default
		}
		
		
		public virtual void success() {
			#line 98 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			this.report.addSuccess(this.testCase, this.testName);
		}
		#line default
		
		public virtual void warn(global::hunit.warnings.Warning warning) {
			#line 108 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			this.warned = true;
			this.report.addWarning(this.testCase, this.testName, warning);
		}
		#line default
		
		public virtual void fail(global::Exception exception) {
			#line 120 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			this.pendingExceptions.@remove(exception);
			#line 122 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			this.report.addFail(this.testCase, this.testName, exception);
		}
		#line default
		
		public virtual void notice(string msg, object pos) {
			#line 132 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			this.report.addNotice(this.testCase, this.testName, msg, pos);
		}
		#line default
		
		public virtual void pendingFail(global::Exception exception) {
			#line 142 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			this.pendingExceptions.push(exception);
		}
		#line default
		
		public virtual void cacheCallException(global::hunit.call.Call call) {
			#line 152 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			this.callExceptions.push(call);
		}
		#line default
		
		public virtual global::Array<object> getOriginalExceptionStack(object e, global::Array<object> catchExceptionStack, global::Array<object> exceptionStack) {
			#line 162 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			{
				#line 162 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				int _g = 0;
				#line 162 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				global::Array<object> _g1 = this.callExceptions;
				#line 162 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				while (( _g < _g1.length )) {
					#line 162 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					global::hunit.call.Call call = ((global::hunit.call.Call) (_g1[_g]) );
					#line 162 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					 ++ _g;
					if (global::haxe.lang.Runtime.eq(global::hunit.utils.ValueTools.getValue<object>(call.exceptionValue), e)) {
						#line 164 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return call.exceptionStack;
					}
					
				}
				
			}
			
			#line 168 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			return exceptionStack.concat(catchExceptionStack);
		}
		#line default
		
		public virtual bool madeAssertions() {
			#line 178 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			return ( ( ( this.expectedCalls.length > 0 ) || ( this.asserted.length > 0 ) ) || this.expectingException() );
		}
		#line default
		
		public virtual void finalize() {
			#line 188 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			this.report.assertionCount += this.asserted.length;
			this.report.assertionCount += this.expectedCalls.length;
			if (this.expectingException()) {
				#line 191 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				this.report.assertionCount++;
			}
			
		}
		#line default
		
		public virtual global::hunit.exceptions.ExpectedExceptionData set_expectedException(global::hunit.exceptions.ExpectedExceptionData expectedException) {
			unchecked {
				#line 202 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				if (( this.expectedException != null )) {
					#line 203 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.InvalidTestException("Expected exception is already set", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"set_expectedException", "hunit.TestState", "TestState.hx"}, new int[]{1981972957}, new double[]{((double) (203) )})));
				}
				
				#line 206 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				return this.expectedException = expectedException;
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				switch (hash) {
					case 1702069122:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.callExceptions = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return @value;
					}
					
					
					case 974537851:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.pendingExceptions = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return @value;
					}
					
					
					case 1215782053:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.asserted = ((global::List<object>) (global::List<object>.__hx_cast<object>(((global::List) (@value) ))) );
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return @value;
					}
					
					
					case 1267023997:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.expectedCalls = ((global::List<object>) (global::List<object>.__hx_cast<object>(((global::List) (@value) ))) );
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return @value;
					}
					
					
					case 973363237:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.warned = global::haxe.lang.Runtime.toBool(@value);
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return @value;
					}
					
					
					case 1217091629:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.print = ((global::haxe.lang.Function) (@value) );
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return @value;
					}
					
					
					case 699347639:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						if (handleProperties) {
							#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
							this.set_expectedException(((global::hunit.exceptions.ExpectedExceptionData) (@value) ));
							#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
							return @value;
						}
						else {
							#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
							this.expectedException = ((global::hunit.exceptions.ExpectedExceptionData) (@value) );
							#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
							return @value;
						}
						
					}
					
					
					case 109329588:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.report = ((global::hunit.report.TestReport) (@value) );
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return @value;
					}
					
					
					case 1278343101:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.testName = global::haxe.lang.Runtime.toString(@value);
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return @value;
					}
					
					
					case 1156359202:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.testCase = ((global::hunit.TestCase) (@value) );
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return @value;
					}
					
					
					default:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				switch (hash) {
					case 2087060378:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_expectedException", 2087060378)) );
					}
					
					
					case 1966753182:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "finalize", 1966753182)) );
					}
					
					
					case 740644774:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "madeAssertions", 740644774)) );
					}
					
					
					case 1070297568:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getOriginalExceptionStack", 1070297568)) );
					}
					
					
					case 718850095:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "cacheCallException", 718850095)) );
					}
					
					
					case 1082389973:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "pendingFail", 1082389973)) );
					}
					
					
					case 834197528:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "notice", 834197528)) );
					}
					
					
					case 1135983070:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "fail", 1135983070)) );
					}
					
					
					case 1324507718:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "warn", 1324507718)) );
					}
					
					
					case 944645571:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "success", 944645571)) );
					}
					
					
					case 1597070553:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "validateException", 1597070553)) );
					}
					
					
					case 348718694:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "expectingException", 348718694)) );
					}
					
					
					case 1702069122:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.callExceptions;
					}
					
					
					case 974537851:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.pendingExceptions;
					}
					
					
					case 1215782053:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.asserted;
					}
					
					
					case 1267023997:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.expectedCalls;
					}
					
					
					case 973363237:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.warned;
					}
					
					
					case 1217091629:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.print;
					}
					
					
					case 699347639:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.expectedException;
					}
					
					
					case 109329588:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.report;
					}
					
					
					case 1278343101:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.testName;
					}
					
					
					case 1156359202:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.testCase;
					}
					
					
					default:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				switch (hash) {
					case 2087060378:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.set_expectedException(((global::hunit.exceptions.ExpectedExceptionData) (dynargs[0]) ));
					}
					
					
					case 1966753182:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.finalize();
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						break;
					}
					
					
					case 740644774:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.madeAssertions();
					}
					
					
					case 1070297568:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.getOriginalExceptionStack(dynargs[0], ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (dynargs[1]) ))) ), ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (dynargs[2]) ))) ));
					}
					
					
					case 718850095:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.cacheCallException(((global::hunit.call.Call) (dynargs[0]) ));
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						break;
					}
					
					
					case 1082389973:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.pendingFail(((global::Exception) (dynargs[0]) ));
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						break;
					}
					
					
					case 834197528:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.notice(global::haxe.lang.Runtime.toString(dynargs[0]), dynargs[1]);
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						break;
					}
					
					
					case 1135983070:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.fail(((global::Exception) (dynargs[0]) ));
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						break;
					}
					
					
					case 1324507718:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.warn(((global::hunit.warnings.Warning) (dynargs[0]) ));
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						break;
					}
					
					
					case 944645571:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.success();
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						break;
					}
					
					
					case 1597070553:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.validateException(dynargs[0], ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (dynargs[1]) ))) ), ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (dynargs[2]) ))) ));
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						break;
					}
					
					
					case 348718694:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.expectingException();
					}
					
					
					default:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			baseArr.push("callExceptions");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			baseArr.push("pendingExceptions");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			baseArr.push("asserted");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			baseArr.push("expectedCalls");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			baseArr.push("warned");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			baseArr.push("print");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			baseArr.push("expectedException");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			baseArr.push("report");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			baseArr.push("testName");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			baseArr.push("testCase");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			{
				#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
		~TestState(){
			this.finalize();
		}
		
		
	}
}


