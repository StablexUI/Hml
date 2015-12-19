package hunit;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TestState extends haxe.lang.HxObject
{
	public TestState(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public TestState(hunit.TestCase testCase, java.lang.String testName, hunit.report.TestReport report, haxe.lang.Function print)
	{
		//line 51 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		hunit.TestState.__hx_ctor_hunit_TestState(this, testCase, testName, report, print);
	}
	
	
	public static void __hx_ctor_hunit_TestState(hunit.TestState __temp_me52, hunit.TestCase testCase, java.lang.String testName, hunit.report.TestReport report, haxe.lang.Function print)
	{
		//line 35 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		__temp_me52.warned = false;
		//line 53 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		__temp_me52.testCase = testCase;
		//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		__temp_me52.testName = testName;
		//line 55 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		__temp_me52.report = report;
		//line 56 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		__temp_me52.print = print;
		//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		__temp_me52.pendingExceptions = new haxe.root.Array<haxe.root.Exception>(new haxe.root.Exception[]{});
		//line 59 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		__temp_me52.callExceptions = new haxe.root.Array<hunit.call.Call>(new hunit.call.Call[]{});
		//line 60 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		__temp_me52.expectedCalls = new haxe.root.List<hunit.call.Expect>();
		//line 61 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		__temp_me52.asserted = new haxe.root.List<hunit._assert.BaseAssert>();
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		return new hunit.TestState(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		return new hunit.TestState(((hunit.TestCase) (arr.__get(0)) ), haxe.lang.Runtime.toString(arr.__get(1)), ((hunit.report.TestReport) (arr.__get(2)) ), ((haxe.lang.Function) (arr.__get(3)) ));
	}
	
	
	public hunit.TestCase testCase;
	
	public java.lang.String testName;
	
	public hunit.report.TestReport report;
	
	public hunit.exceptions.ExpectedExceptionData expectedException;
	
	public haxe.lang.Function print;
	
	public boolean warned;
	
	public haxe.root.List<hunit.call.Expect> expectedCalls;
	
	public haxe.root.List<hunit._assert.BaseAssert> asserted;
	
	public haxe.root.Array<haxe.root.Exception> pendingExceptions;
	
	public haxe.root.Array<hunit.call.Call> callExceptions;
	
	public boolean expectingException()
	{
		//line 71 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		return ( this.expectedException != null );
	}
	
	
	public void validateException(java.lang.Object e, haxe.root.Array<haxe.StackItem> catchExceptionStack, haxe.root.Array<haxe.StackItem> exceptionStack)
	{
		//line 82 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		if (( ! (( e == null )) )) 
		{
			//line 83 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			if (( this.expectedException != null )) 
			{
				//line 84 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				this.expectedException.validate(e, this.getOriginalExceptionStack(e, catchExceptionStack, exceptionStack));
			}
			else
			{
				//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				throw haxe.lang.HaxeException.wrap(new hunit.exceptions.UnexpectedException(e, this.getOriginalExceptionStack(e, catchExceptionStack, exceptionStack), new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.TestState", "TestState.hx", "validateException"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (86) )) )})));
			}
			
		}
		
	}
	
	
	public void success()
	{
		//line 98 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		this.report.addSuccess(this.testCase, this.testName);
	}
	
	
	public void warn(hunit.warnings.Warning warning)
	{
		//line 108 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		this.warned = true;
		//line 109 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		this.report.addWarning(this.testCase, this.testName, warning);
	}
	
	
	public void fail(haxe.root.Exception exception)
	{
		//line 120 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		this.pendingExceptions.remove(exception);
		//line 122 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		this.report.addFail(this.testCase, this.testName, exception);
	}
	
	
	public void notice(java.lang.String msg, java.lang.Object pos)
	{
		//line 132 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		this.report.addNotice(this.testCase, this.testName, msg, pos);
	}
	
	
	public void pendingFail(haxe.root.Exception exception)
	{
		//line 142 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		this.pendingExceptions.push(exception);
	}
	
	
	public void cacheCallException(hunit.call.Call call)
	{
		//line 152 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		this.callExceptions.push(call);
	}
	
	
	public haxe.root.Array<haxe.StackItem> getOriginalExceptionStack(java.lang.Object e, haxe.root.Array<haxe.StackItem> catchExceptionStack, haxe.root.Array<haxe.StackItem> exceptionStack)
	{
		//line 162 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		{
			//line 162 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			int _g = 0;
			//line 162 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			haxe.root.Array<hunit.call.Call> _g1 = this.callExceptions;
			//line 162 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			while (( _g < _g1.length ))
			{
				//line 162 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				hunit.call.Call call = _g1.__get(_g);
				//line 162 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				 ++ _g;
				//line 163 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				if (haxe.lang.Runtime.eq(((java.lang.Object) (hunit.utils.ValueTools.getValue(call.exceptionValue)) ), e)) 
				{
					//line 164 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					return call.exceptionStack;
				}
				
			}
			
		}
		
		//line 168 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		return exceptionStack.concat(catchExceptionStack);
	}
	
	
	public boolean madeAssertions()
	{
		//line 178 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		return ( ( ( this.expectedCalls.length > 0 ) || ( this.asserted.length > 0 ) ) || this.expectingException() );
	}
	
	
	public void finalize()
	{
		//line 188 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		this.report.assertionCount += this.asserted.length;
		//line 189 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		this.report.assertionCount += this.expectedCalls.length;
		//line 190 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		if (this.expectingException()) 
		{
			//line 191 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			this.report.assertionCount++;
		}
		
	}
	
	
	public hunit.exceptions.ExpectedExceptionData set_expectedException(hunit.exceptions.ExpectedExceptionData expectedException)
	{
		//line 202 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		if (( this.expectedException != null )) 
		{
			//line 203 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			throw haxe.lang.HaxeException.wrap(new hunit.exceptions.InvalidTestException("Expected exception is already set", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.TestState", "TestState.hx", "set_expectedException"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (203) )) )})));
		}
		
		//line 206 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		return this.expectedException = expectedException;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		{
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			boolean __temp_executeDef1 = true;
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			switch (field.hashCode())
			{
				case -262950142:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("callExceptions")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.callExceptions = ((haxe.root.Array<hunit.call.Call>) (value) );
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -1147299102:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("testCase")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.testCase = ((hunit.TestCase) (value) );
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 1381682939:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("pendingExceptions")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.pendingExceptions = ((haxe.root.Array<haxe.root.Exception>) (value) );
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -1146971587:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("testName")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.testName = haxe.lang.Runtime.toString(value);
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -373242267:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("asserted")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.asserted = ((haxe.root.List<hunit._assert.BaseAssert>) (value) );
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -934521548:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("report")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.report = ((hunit.report.TestReport) (value) );
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 802557437:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("expectedCalls")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.expectedCalls = ((haxe.root.List<hunit.call.Expect>) (value) );
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -1346717577:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("expectedException")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						if (handleProperties) 
						{
							//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
							this.set_expectedException(((hunit.exceptions.ExpectedExceptionData) (value) ));
							//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
							return value;
						}
						else
						{
							//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
							this.expectedException = ((hunit.exceptions.ExpectedExceptionData) (value) );
							//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
							return value;
						}
						
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -795011675:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("warned")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.warned = haxe.lang.Runtime.toBool(value);
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 106934957:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("print")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.print = ((haxe.lang.Function) (value) );
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return value;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
			}
			
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			if (__temp_executeDef1) 
			{
				//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		{
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			boolean __temp_executeDef1 = true;
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			switch (field.hashCode())
			{
				case -559822374:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("set_expectedException")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_expectedException")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -1147299102:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("testCase")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.testCase;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -681255906:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("finalize")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "finalize")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -1146971587:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("testName")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.testName;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 1043338406:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("madeAssertions")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "madeAssertions")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -934521548:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("report")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.report;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -2056345952:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("getOriginalExceptionStack")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getOriginalExceptionStack")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -1346717577:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("expectedException")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.expectedException;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 1940357935:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("cacheCallException")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "cacheCallException")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 106934957:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("print")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.print;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 1112879445:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("pendingFail")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "pendingFail")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -795011675:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("warned")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.warned;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -1039690024:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("notice")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "notice")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 802557437:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("expectedCalls")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.expectedCalls;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 3135262:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("fail")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "fail")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -373242267:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("asserted")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.asserted;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 3641990:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("warn")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "warn")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 1381682939:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("pendingExceptions")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.pendingExceptions;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -1867169789:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("success")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "success")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -262950142:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("callExceptions")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.callExceptions;
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -252399655:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("validateException")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "validateException")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 673465702:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("expectingException")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "expectingException")) );
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
			}
			
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			if (__temp_executeDef1) 
			{
				//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		{
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			boolean __temp_executeDef1 = true;
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			switch (field.hashCode())
			{
				case -559822374:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("set_expectedException")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.set_expectedException(((hunit.exceptions.ExpectedExceptionData) (dynargs.__get(0)) ));
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 673465702:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("expectingException")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.expectingException();
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -681255906:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("finalize")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.finalize();
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -252399655:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("validateException")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.validateException(dynargs.__get(0), ((haxe.root.Array<haxe.StackItem>) (dynargs.__get(1)) ), ((haxe.root.Array<haxe.StackItem>) (dynargs.__get(2)) ));
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 1043338406:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("madeAssertions")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.madeAssertions();
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -1867169789:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("success")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.success();
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -2056345952:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("getOriginalExceptionStack")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						return this.getOriginalExceptionStack(dynargs.__get(0), ((haxe.root.Array<haxe.StackItem>) (dynargs.__get(1)) ), ((haxe.root.Array<haxe.StackItem>) (dynargs.__get(2)) ));
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 3641990:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("warn")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.warn(((hunit.warnings.Warning) (dynargs.__get(0)) ));
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 1940357935:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("cacheCallException")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.cacheCallException(((hunit.call.Call) (dynargs.__get(0)) ));
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 3135262:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("fail")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.fail(((haxe.root.Exception) (dynargs.__get(0)) ));
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case 1112879445:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("pendingFail")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.pendingFail(((haxe.root.Exception) (dynargs.__get(0)) ));
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
				case -1039690024:
				{
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					if (field.equals("notice")) 
					{
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						__temp_executeDef1 = false;
						//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
						this.notice(haxe.lang.Runtime.toString(dynargs.__get(0)), dynargs.__get(1));
					}
					
					//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
					break;
				}
				
				
			}
			
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			if (__temp_executeDef1) 
			{
				//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		baseArr.push("callExceptions");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		baseArr.push("pendingExceptions");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		baseArr.push("asserted");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		baseArr.push("expectedCalls");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		baseArr.push("warned");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		baseArr.push("print");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		baseArr.push("expectedException");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		baseArr.push("report");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		baseArr.push("testName");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		baseArr.push("testCase");
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
		{
			//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/TestState.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


