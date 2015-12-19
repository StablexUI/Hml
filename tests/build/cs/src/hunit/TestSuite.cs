
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit {
	public class TestSuite : global::haxe.lang.HxObject {
		
		public TestSuite(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public TestSuite(global::hunit.report.IReportWriter reportWriter, global::haxe.lang.Function printer) {
			#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			global::hunit.TestSuite.__hx_ctor_hunit_TestSuite(this, reportWriter, printer);
		}
		#line default
		
		public static void __hx_ctor_hunit_TestSuite(global::hunit.TestSuite __temp_me76, global::hunit.report.IReportWriter reportWriter, global::haxe.lang.Function printer) {
			#line 39 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			__temp_me76.shutDownStandaloneFlashPlayer = false;
			#line 71 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			__temp_me76.groups = new global::Array<object>(new object[]{});
			__temp_me76.excludeGroups = new global::Array<object>(new object[]{});
			#line 74 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			__temp_me76.exclude = new global::Array<object>(new object[]{});
			#line 76 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			if (( printer == null )) {
				#line 77 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				printer = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(typeof(global::hunit.Utils), "print", 1217091629)) );
			}
			
			#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			__temp_me76.printer = printer;
			#line 82 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			if (( reportWriter == null )) {
				#line 83 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				reportWriter = new global::hunit.report.DefaultWriter(((global::haxe.lang.Function) (printer) ));
			}
			
			#line 85 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			__temp_me76.reportWriter = reportWriter;
			#line 87 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			__temp_me76.cases = new global::Array<object>(new object[]{});
			__temp_me76.report = __temp_me76.createReport();
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			return new global::hunit.TestSuite(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				return new global::hunit.TestSuite(((global::hunit.report.IReportWriter) (arr[0]) ), ((global::haxe.lang.Function) (arr[1]) ));
			}
			#line default
		}
		
		
		public bool shutDownStandaloneFlashPlayer;
		
		public global::hunit.report.TestReport report;
		
		public global::Array<object> groups;
		
		public global::Array<object> excludeGroups;
		
		public global::Array<object> exclude;
		
		public global::hunit.TestState state;
		
		public global::Array<object> cases;
		
		public global::haxe.lang.Function originalTrace;
		
		public global::haxe.lang.Function printer;
		
		public global::Array<object> executeTestCallStack;
		
		public global::hunit.report.IReportWriter reportWriter;
		
		public virtual void @add(global::hunit.TestCase testCase) {
			#line 110 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			this.cases.push(testCase);
		}
		#line default
		
		public virtual void run() {
			unchecked {
				#line 120 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				if (( this.cases.length == 0 )) {
					#line 121 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					this.printer.__hx_invoke1_o(default(double), "\nNo test cases added to test suite.\n\n");
					return;
				}
				
				#line 125 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				this.redirectTraces();
				this.report.startTime = global::haxe.Timer.stamp();
				#line 128 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				this.printHeader();
				#line 130 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				int total = 1;
				{
					#line 131 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					int _g = 0;
					#line 131 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					global::Array<object> _g1 = global::hunit.Utils.filterCases(this.cases, this.exclude);
					#line 131 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					while (( _g < _g1.length )) {
						#line 131 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						global::hunit.TestCase testCase = ((global::hunit.TestCase) (_g1[_g]) );
						#line 131 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						 ++ _g;
						try {
							#line 133 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							global::hunit.utils.TestCaseData data = new global::hunit.utils.TestCaseData(((global::hunit.TestCase) (testCase) ));
							#line 135 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							this.onCaseBegin(testCase, data);
							#line 137 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							if (( data.get_totalTestCount() == 0 )) {
								#line 138 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
								string cls = global::Type.getClassName(global::Type.getClass<object>(testCase));
								this.report.addWarning(testCase, "<none>", new global::hunit.warnings.NoTestsWarning(((string) (global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("", cls), " does not contain any tests.")) )));
							}
							else {
								#line 142 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
								global::Array<object> runQueue = data.getTests(this.groups, this.excludeGroups);
								#line 144 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
								while (( runQueue.length > 0 )) {
									#line 145 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
									object test = (runQueue.shift()).toDynamic();
									#line 147 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
									if (( ( total % 80 ) == 0 )) {
										#line 147 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
										this.another80Tests();
									}
									
									#line 149 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
									bool passed = this.executeTest(testCase, test);
									if ( ! (passed) ) {
										#line 151 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
										runQueue = this.skipDependent(testCase, test, runQueue);
									}
									
									#line 154 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
									total++;
								}
								
							}
							
							#line 158 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							this.onCaseEnd(testCase);
						}
						catch (global::System.Exception __temp_catchallException1){
							#line 132 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							global::haxe.lang.Exceptions.exception = __temp_catchallException1;
							#line 159 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							object __temp_catchall2 = __temp_catchallException1;
							#line 159 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							if (( __temp_catchall2 is global::haxe.lang.HaxeException )) {
								#line 159 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
								__temp_catchall2 = ((global::haxe.lang.HaxeException) (__temp_catchallException1) ).obj;
							}
							
							#line 159 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							{
								#line 159 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
								object e = __temp_catchall2;
								this.printer.__hx_invoke1_o(default(double), "E");
								this.report.addFail(testCase, "<none>", global::Exception.wrap(e, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"run", "hunit.TestSuite", "TestSuite.hx"}, new int[]{1981972957}, new double[]{((double) (161) )})));
							}
							
						}
						
						
					}
					
				}
				
				#line 164 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				this.report.set_endTime(global::haxe.Timer.stamp());
				#line 166 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				this.printer.__hx_invoke1_o(default(double), "\n\n");
				#line 168 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				this.report.output();
				this.printSummary();
				#line 171 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				this.restoreOriginalTrace();
			}
			#line default
		}
		
		
		public virtual global::hunit.report.TestReport createReport() {
			#line 187 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			return new global::hunit.report.TestReport(((global::hunit.report.IReportWriter) (this.reportWriter) ));
		}
		#line default
		
		public virtual global::hunit.TestState createTestState(global::hunit.TestCase testCase, string testName) {
			#line 197 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			return new global::hunit.TestState(testCase, testName, this.report, this.printer);
		}
		#line default
		
		public virtual void redirectTraces() {
			#line 207 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			this.originalTrace = global::haxe.Log.trace;
			{
				#line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				global::haxe.lang.Function a1 = this.printer;
				#line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				global::haxe.Log.trace = new global::hunit.TestSuite_redirectTraces_208__Fun(a1);
			}
			
		}
		#line default
		
		public virtual void restoreOriginalTrace() {
			#line 218 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			global::haxe.Log.trace = this.originalTrace;
		}
		#line default
		
		public virtual void onCaseBegin(global::hunit.TestCase testCase, global::hunit.utils.TestCaseData data) {
			#line 228 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			this.report.cases.@add(testCase);
			testCase.setupTestCase();
		}
		#line default
		
		public virtual void onCaseEnd(global::hunit.TestCase testCase) {
			#line 239 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			testCase.tearDownTestCase();
		}
		#line default
		
		public virtual bool executeTest(global::hunit.TestCase testCase, object test) {
			#line 249 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			this.executeTestCallStack = global::haxe.CallStack.callStack();
			#line 251 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			this.beforeTestStart(testCase, global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(test, "name", 1224700491, true)));
			testCase.setup();
			#line 254 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			bool passed = false;
			#line 256 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			try {
				#line 258 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				if (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.getField(test, "isIncomplete", 1412264488, true))) {
					#line 259 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					this.state.warn(new global::hunit.warnings.IncompleteTestWarning(global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(test, "incompleteMsg", 1676664643, true))));
				}
				else {
					#line 261 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					try {
						#line 262 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						global::Reflect.callMethod(testCase, global::haxe.lang.Runtime.getField(test, "callback", 2131139013, true), new global::Array<object>(new object[]{}));
						this.validateTest(test, null, null);
					}
					catch (global::System.Exception __temp_catchallException3){
						#line 261 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						global::haxe.lang.Exceptions.exception = __temp_catchallException3;
						#line 267 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						object __temp_catchall4 = __temp_catchallException3;
						#line 267 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						if (( __temp_catchall4 is global::haxe.lang.HaxeException )) {
							#line 267 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							__temp_catchall4 = ((global::haxe.lang.HaxeException) (__temp_catchallException3) ).obj;
						}
						
						#line 265 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						if (( __temp_catchall4 is global::hunit.exceptions.TestFailException )) {
							#line 265 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							global::hunit.exceptions.TestFailException e = ((global::hunit.exceptions.TestFailException) (__temp_catchall4) );
							#line 265 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							{
								#line 265 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
								throw global::haxe.lang.HaxeException.wrap(e);
							}
							
						}
						else {
							#line 267 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							object e1 = __temp_catchall4;
							#line 267 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							this.validateTest(test, e1, global::haxe.CallStack.exceptionStack());
						}
						
					}
					
					
				}
				
				#line 271 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				if ( ! (this.state.warned) ) {
					#line 272 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					this.state.success();
					passed = true;
					this.printer.__hx_invoke1_o(default(double), ".");
				}
				else {
					#line 276 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					this.printer.__hx_invoke1_o(default(double), "W");
				}
				
				#line 278 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				this.state.finalize();
			}
			catch (global::System.Exception __temp_catchallException1){
				#line 256 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				global::haxe.lang.Exceptions.exception = __temp_catchallException1;
				#line 280 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				object __temp_catchall2 = __temp_catchallException1;
				#line 280 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				if (( __temp_catchall2 is global::haxe.lang.HaxeException )) {
					#line 280 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					__temp_catchall2 = ((global::haxe.lang.HaxeException) (__temp_catchallException1) ).obj;
				}
				
				#line 280 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				if (( __temp_catchall2 is global::Exception )) {
					#line 280 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					global::Exception e2 = ((global::Exception) (__temp_catchall2) );
					#line 280 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					{
						#line 281 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.state.fail(e2);
						this.printer.__hx_invoke1_o(default(double), ( (( e2 is global::hunit.exceptions.InvalidTestException )) ? ("E") : ("F") ));
					}
					
				}
				else {
					#line 280 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					throw;
				}
				
			}
			
			
			#line 285 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			testCase.tearDown();
			this.afterTestDone(testCase);
			#line 288 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			return passed;
		}
		#line default
		
		public virtual void beforeTestStart(global::hunit.TestCase testCase, string test) {
			#line 298 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			this.state = this.createTestState(testCase, test);
			testCase.__hu_state = this.state;
		}
		#line default
		
		public virtual void afterTestDone(global::hunit.TestCase testCase) {
			#line 309 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			this.state = null;
		}
		#line default
		
		public virtual void validateTest(object test, object exception, global::Array<object> exceptionStack) {
			unchecked {
				#line 324 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				if (( this.state.pendingExceptions.length > 0 )) {
					#line 325 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					throw global::haxe.lang.HaxeException.wrap(((global::Exception) (this.state.pendingExceptions[0]) ));
				}
				
				#line 328 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				if (( exception != null )) {
					#line 329 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					this.state.validateException(exception, this.executeTestCallStack, exceptionStack);
				}
				
				#line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				{
					#line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					global::Array _g_head = this.state.expectedCalls.h;
					#line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					object _g_val = null;
					#line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					while (( _g_head != null )) {
						#line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						global::hunit.call.Expect expect = null;
						#line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						object __temp_stmt1 = null;
						#line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						{
							#line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							_g_val = _g_head[0];
							#line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							_g_head = ((global::Array) (_g_head[1]) );
							#line 321 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							__temp_stmt1 = _g_val;
						}
						
						#line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						expect = ((global::hunit.call.Expect) (__temp_stmt1) );
						expect.validate();
					}
					
				}
				
				#line 336 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				if (( this.state.expectingException() &&  ! (this.state.expectedException.satisfied)  )) {
					#line 337 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.NoExpectedException(this.state.expectedException.match, this.state.expectedException.pos));
				}
				
				#line 340 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				if (( ( ! (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.getField(test, "isIncomplete", 1412264488, true))) ) &&  ! (this.state.madeAssertions())  )) {
					#line 341 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					this.state.warn(new global::hunit.warnings.NoAssertionsWarning(((string) ("This test did not perform any assertions") )));
				}
				
			}
			#line default
		}
		
		
		public virtual global::Array<object> skipDependent(global::hunit.TestCase testCase, object failed, global::Array<object> runQueue) {
			#line 352 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			global::Array<object> dependent = global::hunit.utils.TestCaseData.getDependent(failed, runQueue, null);
			#line 354 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			{
				#line 354 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				int _g = 0;
				#line 354 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				while (( _g < dependent.length )) {
					#line 354 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					object test = dependent[_g];
					#line 354 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					 ++ _g;
					this.printer.__hx_invoke1_o(default(double), "S");
					runQueue.@remove(test);
					this.report.addSkip(testCase, global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(test, "name", 1224700491, true)), ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::haxe.lang.Runtime.getField(test, "depends", 1617242503, true)) ))) ));
				}
				
			}
			
			#line 360 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			return runQueue;
		}
		#line default
		
		public virtual string version() {
			#line 370 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			return "0.1.32";
		}
		#line default
		
		public virtual void printHeader() {
			#line 380 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			this.printer.__hx_invoke1_o(default(double), global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("HUnit ", this.version()), "\n\n"));
		}
		#line default
		
		public virtual void printSummary() {
			#line 390 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			this.printer.__hx_invoke1_o(default(double), global::haxe.lang.Runtime.concat(this.report.getSummary(), "\n"));
			this.printer.__hx_invoke1_o(default(double), "\n");
		}
		#line default
		
		public virtual void another80Tests() {
			#line 402 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			this.printer.__hx_invoke1_o(default(double), "\n");
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				switch (hash) {
					case 954926727:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.reportWriter = ((global::hunit.report.IReportWriter) (@value) );
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return @value;
					}
					
					
					case 241993635:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.executeTestCallStack = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return @value;
					}
					
					
					case 70505946:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.printer = ((global::haxe.lang.Function) (@value) );
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return @value;
					}
					
					
					case 1896907892:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.originalTrace = ((global::haxe.lang.Function) (@value) );
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return @value;
					}
					
					
					case 1092664259:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.cases = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return @value;
					}
					
					
					case 67859985:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.state = ((global::hunit.TestState) (@value) );
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return @value;
					}
					
					
					case 724745946:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.exclude = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return @value;
					}
					
					
					case 1155069646:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.excludeGroups = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return @value;
					}
					
					
					case 472392788:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.groups = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return @value;
					}
					
					
					case 109329588:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.report = ((global::hunit.report.TestReport) (@value) );
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return @value;
					}
					
					
					case 1203815126:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.shutDownStandaloneFlashPlayer = global::haxe.lang.Runtime.toBool(@value);
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return @value;
					}
					
					
					default:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				switch (hash) {
					case 1572328294:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "another80Tests", 1572328294)) );
					}
					
					
					case 1646783097:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "printSummary", 1646783097)) );
					}
					
					
					case 611825050:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "printHeader", 611825050)) );
					}
					
					
					case 2096228120:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "version", 2096228120)) );
					}
					
					
					case 289020800:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "skipDependent", 289020800)) );
					}
					
					
					case 553240584:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "validateTest", 553240584)) );
					}
					
					
					case 1899107376:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "afterTestDone", 1899107376)) );
					}
					
					
					case 1387607601:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "beforeTestStart", 1387607601)) );
					}
					
					
					case 342474023:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "executeTest", 342474023)) );
					}
					
					
					case 790733740:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "onCaseEnd", 790733740)) );
					}
					
					
					case 896458810:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "onCaseBegin", 896458810)) );
					}
					
					
					case 1839952966:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "restoreOriginalTrace", 1839952966)) );
					}
					
					
					case 181849738:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "redirectTraces", 181849738)) );
					}
					
					
					case 1845652931:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "createTestState", 1845652931)) );
					}
					
					
					case 685341904:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "createReport", 685341904)) );
					}
					
					
					case 5695307:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "run", 5695307)) );
					}
					
					
					case 4846113:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "add", 4846113)) );
					}
					
					
					case 954926727:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.reportWriter;
					}
					
					
					case 241993635:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.executeTestCallStack;
					}
					
					
					case 70505946:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.printer;
					}
					
					
					case 1896907892:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.originalTrace;
					}
					
					
					case 1092664259:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.cases;
					}
					
					
					case 67859985:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.state;
					}
					
					
					case 724745946:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.exclude;
					}
					
					
					case 1155069646:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.excludeGroups;
					}
					
					
					case 472392788:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.groups;
					}
					
					
					case 109329588:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.report;
					}
					
					
					case 1203815126:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.shutDownStandaloneFlashPlayer;
					}
					
					
					default:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				switch (hash) {
					case 1572328294:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.another80Tests();
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						break;
					}
					
					
					case 1646783097:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.printSummary();
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						break;
					}
					
					
					case 611825050:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.printHeader();
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						break;
					}
					
					
					case 2096228120:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.version();
					}
					
					
					case 289020800:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.skipDependent(((global::hunit.TestCase) (dynargs[0]) ), dynargs[1], ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (dynargs[2]) ))) ));
					}
					
					
					case 553240584:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.validateTest(dynargs[0], dynargs[1], ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (dynargs[2]) ))) ));
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						break;
					}
					
					
					case 1899107376:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.afterTestDone(((global::hunit.TestCase) (dynargs[0]) ));
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						break;
					}
					
					
					case 1387607601:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.beforeTestStart(((global::hunit.TestCase) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]));
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						break;
					}
					
					
					case 342474023:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.executeTest(((global::hunit.TestCase) (dynargs[0]) ), dynargs[1]);
					}
					
					
					case 790733740:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.onCaseEnd(((global::hunit.TestCase) (dynargs[0]) ));
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						break;
					}
					
					
					case 896458810:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.onCaseBegin(((global::hunit.TestCase) (dynargs[0]) ), ((global::hunit.utils.TestCaseData) (dynargs[1]) ));
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						break;
					}
					
					
					case 1839952966:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.restoreOriginalTrace();
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						break;
					}
					
					
					case 181849738:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.redirectTraces();
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						break;
					}
					
					
					case 1845652931:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.createTestState(((global::hunit.TestCase) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]));
					}
					
					
					case 685341904:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.createReport();
					}
					
					
					case 5695307:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.run();
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						break;
					}
					
					
					case 4846113:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.@add(((global::hunit.TestCase) (dynargs[0]) ));
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						break;
					}
					
					
					default:
					{
						#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			baseArr.push("reportWriter");
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			baseArr.push("executeTestCallStack");
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			baseArr.push("printer");
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			baseArr.push("originalTrace");
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			baseArr.push("cases");
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			baseArr.push("state");
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			baseArr.push("exclude");
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			baseArr.push("excludeGroups");
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			baseArr.push("groups");
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			baseArr.push("report");
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			baseArr.push("shutDownStandaloneFlashPlayer");
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			{
				#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit {
	public class TestSuite_redirectTraces_208__Fun : global::haxe.lang.Function {
		
		public TestSuite_redirectTraces_208__Fun(global::haxe.lang.Function a1) : base(2, 0) {
			#line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			this.a1 = a1;
		}
		#line default
		
		public override object __hx_invoke2_o(double __fn_float1, object __fn_dyn1, double __fn_float2, object __fn_dyn2) {
			#line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			object a3 = ( (( __fn_dyn2 == global::haxe.lang.Runtime.undefined )) ? (((object) (__fn_float2) )) : (( (( __fn_dyn2 == null )) ? (null) : (((object) (__fn_dyn2) )) )) );
			#line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			object a2 = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((object) (__fn_float1) )) : (((object) (__fn_dyn1) )) );
			#line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			global::hunit.Utils.printTrace(this.a1, a2, a3);
			#line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			return null;
		}
		#line default
		
		public global::haxe.lang.Function a1;
		
	}
}


