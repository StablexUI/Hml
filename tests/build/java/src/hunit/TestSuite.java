package hunit;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TestSuite extends haxe.lang.HxObject
{
	public TestSuite(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public TestSuite(hunit.report.IReportWriter reportWriter, haxe.lang.Function printer)
	{
		//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		hunit.TestSuite.__hx_ctor_hunit_TestSuite(this, reportWriter, printer);
	}
	
	
	public static void __hx_ctor_hunit_TestSuite(hunit.TestSuite __temp_me53, hunit.report.IReportWriter reportWriter, haxe.lang.Function printer)
	{
		//line 39 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		__temp_me53.shutDownStandaloneFlashPlayer = false;
		//line 71 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		__temp_me53.groups = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
		//line 72 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		__temp_me53.excludeGroups = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
		//line 74 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		__temp_me53.exclude = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
		//line 76 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		if (( printer == null )) 
		{
			//line 77 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			printer = ((haxe.lang.Function) (new haxe.lang.Closure(hunit.Utils.class, "print")) );
		}
		
		//line 80 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		__temp_me53.printer = printer;
		//line 82 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		if (( reportWriter == null )) 
		{
			//line 83 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			reportWriter = new hunit.report.DefaultWriter(((haxe.lang.Function) (printer) ));
		}
		
		//line 85 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		__temp_me53.reportWriter = reportWriter;
		//line 87 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		__temp_me53.cases = new haxe.root.Array<hunit.TestCase>(new hunit.TestCase[]{});
		//line 88 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		__temp_me53.report = __temp_me53.createReport();
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		return new hunit.TestSuite(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		return new hunit.TestSuite(((hunit.report.IReportWriter) (arr.__get(0)) ), ((haxe.lang.Function) (arr.__get(1)) ));
	}
	
	
	public boolean shutDownStandaloneFlashPlayer;
	
	public hunit.report.TestReport report;
	
	public haxe.root.Array<java.lang.String> groups;
	
	public haxe.root.Array<java.lang.String> excludeGroups;
	
	public haxe.root.Array<java.lang.String> exclude;
	
	public hunit.TestState state;
	
	public haxe.root.Array<hunit.TestCase> cases;
	
	public haxe.lang.Function originalTrace;
	
	public haxe.lang.Function printer;
	
	public haxe.root.Array<haxe.StackItem> executeTestCallStack;
	
	public hunit.report.IReportWriter reportWriter;
	
	public void add(hunit.TestCase testCase)
	{
		//line 110 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.cases.push(testCase);
	}
	
	
	public void run()
	{
		//line 120 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		if (( this.cases.length == 0 )) 
		{
			//line 121 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			this.printer.__hx_invoke1_o(0.0, "\nNo test cases added to test suite.\n\n");
			//line 122 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			return ;
		}
		
		//line 125 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.redirectTraces();
		//line 126 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.report.startTime = haxe.Timer.stamp();
		//line 128 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.printHeader();
		//line 130 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		int total = 1;
		//line 131 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		{
			//line 131 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			int _g = 0;
			//line 131 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			haxe.root.Array<hunit.TestCase> _g1 = hunit.Utils.filterCases(this.cases, this.exclude);
			//line 131 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			while (( _g < _g1.length ))
			{
				//line 131 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				hunit.TestCase testCase = _g1.__get(_g);
				//line 131 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				 ++ _g;
				//line 132 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				try 
				{
					//line 133 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					hunit.utils.TestCaseData data = new hunit.utils.TestCaseData(((hunit.TestCase) (testCase) ));
					//line 135 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					this.onCaseBegin(testCase, data);
					//line 137 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (( data.get_totalTestCount() == 0 )) 
					{
						//line 138 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						java.lang.String cls = haxe.root.Type.getClassName(((java.lang.Class) (haxe.root.Type.getClass(testCase)) ));
						//line 139 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.report.addWarning(testCase, "<none>", new hunit.warnings.NoTestsWarning(haxe.lang.Runtime.toString(( ( "" + cls ) + " does not contain any tests." ))));
					}
					else
					{
						//line 142 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						haxe.root.Array<java.lang.Object> runQueue = data.getTests(this.groups, this.excludeGroups);
						//line 144 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						while (( runQueue.length > 0 ))
						{
							//line 145 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							java.lang.Object test = runQueue.shift();
							//line 147 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							if (( ( total % 80 ) == 0 )) 
							{
								//line 147 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
								this.another80Tests();
							}
							
							//line 149 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							boolean passed = this.executeTest(testCase, test);
							//line 150 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							if ( ! (passed) ) 
							{
								//line 151 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
								runQueue = this.skipDependent(testCase, test, runQueue);
							}
							
							//line 154 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							total++;
						}
						
					}
					
					//line 158 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					this.onCaseEnd(testCase);
				}
				catch (java.lang.Throwable __temp_catchallException1)
				{
					//line 132 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					haxe.lang.Exceptions.setException(__temp_catchallException1);
					//line 159 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					java.lang.Object __temp_catchall2 = __temp_catchallException1;
					//line 159 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (( __temp_catchall2 instanceof haxe.lang.HaxeException )) 
					{
						//line 159 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_catchall2 = ((haxe.lang.HaxeException) (__temp_catchallException1) ).obj;
					}
					
					//line 159 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					{
						//line 159 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						java.lang.Object e = __temp_catchall2;
						//line 160 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.printer.__hx_invoke1_o(0.0, "E");
						//line 161 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.report.addFail(testCase, "<none>", haxe.root.Exception.wrap(e, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.TestSuite", "TestSuite.hx", "run"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (161) )) )})));
					}
					
				}
				
				
			}
			
		}
		
		//line 164 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.report.set_endTime(haxe.Timer.stamp());
		//line 166 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.printer.__hx_invoke1_o(0.0, "\n\n");
		//line 168 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.report.output();
		//line 169 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.printSummary();
		//line 171 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.restoreOriginalTrace();
	}
	
	
	public hunit.report.TestReport createReport()
	{
		//line 187 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		return new hunit.report.TestReport(((hunit.report.IReportWriter) (this.reportWriter) ));
	}
	
	
	public hunit.TestState createTestState(hunit.TestCase testCase, java.lang.String testName)
	{
		//line 197 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		return new hunit.TestState(testCase, testName, this.report, this.printer);
	}
	
	
	public void redirectTraces()
	{
		//line 207 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.originalTrace = haxe.Log.trace;
		//line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		{
			//line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			haxe.lang.Function a1 = this.printer;
			//line 208 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			haxe.Log.trace = new hunit.TestSuite_redirectTraces_208__Fun(a1);
		}
		
	}
	
	
	public void restoreOriginalTrace()
	{
		//line 218 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		haxe.Log.trace = this.originalTrace;
	}
	
	
	public void onCaseBegin(hunit.TestCase testCase, hunit.utils.TestCaseData data)
	{
		//line 228 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.report.cases.add(testCase);
		//line 229 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		testCase.setupTestCase();
	}
	
	
	public void onCaseEnd(hunit.TestCase testCase)
	{
		//line 239 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		testCase.tearDownTestCase();
	}
	
	
	public boolean executeTest(hunit.TestCase testCase, java.lang.Object test)
	{
		//line 249 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.executeTestCallStack = haxe.CallStack.callStack();
		//line 251 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.beforeTestStart(testCase, haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(test, "name", true)));
		//line 252 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		testCase.setup();
		//line 254 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		boolean passed = false;
		//line 256 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		try 
		{
			//line 258 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			if (haxe.lang.Runtime.toBool(haxe.lang.Runtime.getField(test, "isIncomplete", true))) 
			{
				//line 259 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				this.state.warn(new hunit.warnings.IncompleteTestWarning(haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(test, "incompleteMsg", true))));
			}
			else
			{
				//line 261 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				try 
				{
					//line 262 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					haxe.root.Reflect.callMethod(testCase, haxe.lang.Runtime.getField(test, "callback", true), new haxe.root.Array(new java.lang.Object[]{}));
					//line 263 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					this.validateTest(test, null, null);
				}
				catch (java.lang.Throwable __temp_catchallException3)
				{
					//line 261 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					haxe.lang.Exceptions.setException(__temp_catchallException3);
					//line 267 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					java.lang.Object __temp_catchall4 = __temp_catchallException3;
					//line 267 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (( __temp_catchall4 instanceof haxe.lang.HaxeException )) 
					{
						//line 267 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_catchall4 = ((haxe.lang.HaxeException) (__temp_catchallException3) ).obj;
					}
					
					//line 265 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (( __temp_catchall4 instanceof hunit.exceptions.TestFailException )) 
					{
						//line 265 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						hunit.exceptions.TestFailException e = ((hunit.exceptions.TestFailException) (__temp_catchall4) );
						//line 265 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						{
							//line 265 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
							throw haxe.lang.HaxeException.wrap(e);
						}
						
					}
					else
					{
						//line 267 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						java.lang.Object e1 = __temp_catchall4;
						//line 267 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.validateTest(test, e1, haxe.CallStack.exceptionStack());
					}
					
				}
				
				
			}
			
			//line 271 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			if ( ! (this.state.warned) ) 
			{
				//line 272 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				this.state.success();
				//line 273 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				passed = true;
				//line 274 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				this.printer.__hx_invoke1_o(0.0, ".");
			}
			else
			{
				//line 276 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				this.printer.__hx_invoke1_o(0.0, "W");
			}
			
			//line 278 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			this.state.finalize();
		}
		catch (java.lang.Throwable __temp_catchallException1)
		{
			//line 256 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			haxe.lang.Exceptions.setException(__temp_catchallException1);
			//line 280 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			java.lang.Object __temp_catchall2 = __temp_catchallException1;
			//line 280 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			if (( __temp_catchall2 instanceof haxe.lang.HaxeException )) 
			{
				//line 280 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				__temp_catchall2 = ((haxe.lang.HaxeException) (__temp_catchallException1) ).obj;
			}
			
			//line 280 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			if (( __temp_catchall2 instanceof haxe.root.Exception )) 
			{
				//line 280 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				haxe.root.Exception e2 = ((haxe.root.Exception) (__temp_catchall2) );
				//line 280 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				{
					//line 281 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					this.state.fail(e2);
					//line 282 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					this.printer.__hx_invoke1_o(0.0, ( (( e2 instanceof hunit.exceptions.InvalidTestException )) ? ("E") : ("F") ));
				}
				
			}
			else
			{
				//line 280 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				throw haxe.lang.HaxeException.wrap(__temp_catchallException1);
			}
			
		}
		
		
		//line 285 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		testCase.tearDown();
		//line 286 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.afterTestDone(testCase);
		//line 288 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		return passed;
	}
	
	
	public void beforeTestStart(hunit.TestCase testCase, java.lang.String test)
	{
		//line 298 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.state = this.createTestState(testCase, test);
		//line 299 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		testCase.__hu_state = this.state;
	}
	
	
	public void afterTestDone(hunit.TestCase testCase)
	{
		//line 309 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.state = null;
	}
	
	
	public void validateTest(java.lang.Object test, java.lang.Object exception, haxe.root.Array<haxe.StackItem> exceptionStack)
	{
		//line 324 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		if (( this.state.pendingExceptions.length > 0 )) 
		{
			//line 325 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			throw haxe.lang.HaxeException.wrap(this.state.pendingExceptions.__get(0));
		}
		
		//line 328 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		if (( ! (( exception == null )) )) 
		{
			//line 329 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			this.state.validateException(exception, this.executeTestCallStack, exceptionStack);
		}
		
		//line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		{
			//line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			haxe.root.Array _g_head = this.state.expectedCalls.h;
			//line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			java.lang.Object _g_val = null;
			//line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			while (( _g_head != null ))
			{
				//line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				hunit.call.Expect expect = null;
				//line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				java.lang.Object __temp_stmt1 = null;
				//line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				{
					//line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					_g_val = _g_head.__get(0);
					//line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					_g_head = ((haxe.root.Array) (_g_head.__get(1)) );
					//line 321 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					__temp_stmt1 = _g_val;
				}
				
				//line 332 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				expect = ((hunit.call.Expect) (__temp_stmt1) );
				//line 333 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				expect.validate();
			}
			
		}
		
		//line 336 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		if (( this.state.expectingException() &&  ! (this.state.expectedException.satisfied)  )) 
		{
			//line 337 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			throw haxe.lang.HaxeException.wrap(new hunit.exceptions.NoExpectedException(this.state.expectedException.match, this.state.expectedException.pos));
		}
		
		//line 340 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		if (( ( ! (haxe.lang.Runtime.toBool(haxe.lang.Runtime.getField(test, "isIncomplete", true))) ) &&  ! (this.state.madeAssertions())  )) 
		{
			//line 341 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			this.state.warn(new hunit.warnings.NoAssertionsWarning(haxe.lang.Runtime.toString("This test did not perform any assertions")));
		}
		
	}
	
	
	public haxe.root.Array<java.lang.Object> skipDependent(hunit.TestCase testCase, java.lang.Object failed, haxe.root.Array<java.lang.Object> runQueue)
	{
		//line 352 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		haxe.root.Array<java.lang.Object> dependent = hunit.utils.TestCaseData.getDependent(failed, runQueue, null);
		//line 354 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		{
			//line 354 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			int _g = 0;
			//line 354 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			while (( _g < dependent.length ))
			{
				//line 354 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				java.lang.Object test = dependent.__get(_g);
				//line 354 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				 ++ _g;
				//line 355 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				this.printer.__hx_invoke1_o(0.0, "S");
				//line 356 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				runQueue.remove(test);
				//line 357 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				this.report.addSkip(testCase, haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(test, "name", true)), ((haxe.root.Array<java.lang.String>) (haxe.lang.Runtime.getField(test, "depends", true)) ));
			}
			
		}
		
		//line 360 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		return runQueue;
	}
	
	
	public java.lang.String version()
	{
		//line 370 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		return "0.1.32";
	}
	
	
	public void printHeader()
	{
		//line 380 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.printer.__hx_invoke1_o(0.0, ( ( "HUnit " + this.version() ) + "\n\n" ));
	}
	
	
	public void printSummary()
	{
		//line 390 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.printer.__hx_invoke1_o(0.0, ( this.report.getSummary() + "\n" ));
		//line 391 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.printer.__hx_invoke1_o(0.0, "\n");
	}
	
	
	public void another80Tests()
	{
		//line 402 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		this.printer.__hx_invoke1_o(0.0, "\n");
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		{
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			boolean __temp_executeDef1 = true;
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			switch (field.hashCode())
			{
				case 715796167:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("reportWriter")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.reportWriter = ((hunit.report.IReportWriter) (value) );
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1995884394:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("shutDownStandaloneFlashPlayer")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.shutDownStandaloneFlashPlayer = haxe.lang.Runtime.toBool(value);
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1911242525:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("executeTestCallStack")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.executeTestCallStack = ((haxe.root.Array<haxe.StackItem>) (value) );
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -934521548:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("report")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.report = ((hunit.report.TestReport) (value) );
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -314718182:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("printer")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.printer = ((haxe.lang.Function) (value) );
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1237460524:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("groups")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.groups = ((haxe.root.Array<java.lang.String>) (value) );
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 1853157876:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("originalTrace")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.originalTrace = ((haxe.lang.Function) (value) );
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 236476494:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("excludeGroups")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.excludeGroups = ((haxe.root.Array<java.lang.String>) (value) );
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 94432067:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("cases")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.cases = ((haxe.root.Array<hunit.TestCase>) (value) );
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1321148966:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("exclude")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.exclude = ((haxe.root.Array<java.lang.String>) (value) );
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 109757585:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("state")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.state = ((hunit.TestState) (value) );
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
			}
			
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			if (__temp_executeDef1) 
			{
				//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		{
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			boolean __temp_executeDef1 = true;
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			switch (field.hashCode())
			{
				case -953249370:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("another80Tests")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "another80Tests")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1995884394:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("shutDownStandaloneFlashPlayer")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.shutDownStandaloneFlashPlayer;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1717657543:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("printSummary")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "printSummary")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -934521548:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("report")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.report;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -662565990:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("printHeader")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "printHeader")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1237460524:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("groups")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.groups;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 351608024:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("version")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "version")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 236476494:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("excludeGroups")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.excludeGroups;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -2090892224:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("skipDependent")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "skipDependent")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1321148966:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("exclude")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.exclude;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 1081235144:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("validateTest")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "validateTest")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 109757585:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("state")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.state;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 251269424:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("afterTestDone")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "afterTestDone")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 94432067:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("cases")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.cases;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1073907151:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("beforeTestStart")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "beforeTestStart")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 1853157876:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("originalTrace")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.originalTrace;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -459412057:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("executeTest")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "executeTest")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -314718182:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("printer")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.printer;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 1891141804:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("onCaseEnd")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "onCaseEnd")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1911242525:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("executeTestCallStack")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.executeTestCallStack;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 613075002:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("onCaseBegin")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "onCaseBegin")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 715796167:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("reportWriter")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.reportWriter;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1319868922:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("restoreOriginalTrace")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "restoreOriginalTrace")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 96417:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("add")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "add")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1014118710:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("redirectTraces")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "redirectTraces")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 113291:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("run")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "run")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 1638626691:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("createTestState")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "createTestState")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 1493251408:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("createReport")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "createReport")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
			}
			
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			if (__temp_executeDef1) 
			{
				//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		{
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			boolean __temp_executeDef1 = true;
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			switch (field.hashCode())
			{
				case -953249370:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("another80Tests")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.another80Tests();
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 96417:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("add")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.add(((hunit.TestCase) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1717657543:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("printSummary")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.printSummary();
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 113291:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("run")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.run();
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -662565990:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("printHeader")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.printHeader();
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 1493251408:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("createReport")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.createReport();
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 351608024:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("version")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.version();
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 1638626691:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("createTestState")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.createTestState(((hunit.TestCase) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)));
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -2090892224:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("skipDependent")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.skipDependent(((hunit.TestCase) (dynargs.__get(0)) ), dynargs.__get(1), ((haxe.root.Array<java.lang.Object>) (dynargs.__get(2)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1014118710:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("redirectTraces")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.redirectTraces();
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 1081235144:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("validateTest")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.validateTest(dynargs.__get(0), dynargs.__get(1), ((haxe.root.Array<haxe.StackItem>) (dynargs.__get(2)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1319868922:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("restoreOriginalTrace")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.restoreOriginalTrace();
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 251269424:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("afterTestDone")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.afterTestDone(((hunit.TestCase) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 613075002:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("onCaseBegin")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.onCaseBegin(((hunit.TestCase) (dynargs.__get(0)) ), ((hunit.utils.TestCaseData) (dynargs.__get(1)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -1073907151:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("beforeTestStart")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.beforeTestStart(((hunit.TestCase) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)));
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case 1891141804:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("onCaseEnd")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						this.onCaseEnd(((hunit.TestCase) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
				case -459412057:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					if (field.equals("executeTest")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
						return this.executeTest(((hunit.TestCase) (dynargs.__get(0)) ), dynargs.__get(1));
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
					break;
				}
				
				
			}
			
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			if (__temp_executeDef1) 
			{
				//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		baseArr.push("reportWriter");
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		baseArr.push("executeTestCallStack");
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		baseArr.push("printer");
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		baseArr.push("originalTrace");
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		baseArr.push("cases");
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		baseArr.push("state");
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		baseArr.push("exclude");
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		baseArr.push("excludeGroups");
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		baseArr.push("groups");
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		baseArr.push("report");
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		baseArr.push("shutDownStandaloneFlashPlayer");
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
		{
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


