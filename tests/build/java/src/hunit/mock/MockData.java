package hunit.mock;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class MockData extends haxe.lang.HxObject
{
	public MockData(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public MockData(hunit.TestCase testCase, java.lang.Class mockClass, java.lang.Object fullStub, java.lang.Object strictMode)
	{
		//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		hunit.mock.MockData.__hx_ctor_hunit_mock_MockData(this, testCase, mockClass, fullStub, strictMode);
	}
	
	
	public static void __hx_ctor_hunit_mock_MockData(hunit.mock.MockData __temp_me90, hunit.TestCase testCase, java.lang.Class mockClass, java.lang.Object fullStub, java.lang.Object strictMode)
	{
		//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		__temp_me90.strictMode = false;
		//line 42 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		__temp_me90.fullStub = false;
		//line 34 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		__temp_me90.callCounter = 0;
		//line 55 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		boolean __temp_strictMode89 = ( (haxe.lang.Runtime.eq(strictMode, null)) ? (false) : (haxe.lang.Runtime.toBool(strictMode)) );
		//line 55 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		boolean __temp_fullStub88 = ( (haxe.lang.Runtime.eq(fullStub, null)) ? (false) : (haxe.lang.Runtime.toBool(fullStub)) );
		//line 56 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		__temp_me90.mockClass = mockClass;
		//line 57 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		__temp_me90.testCase = testCase;
		//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		__temp_me90.fullStub = __temp_fullStub88;
		//line 59 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		__temp_me90.strictMode = __temp_strictMode89;
		//line 61 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		__temp_me90.unstubbedMethods = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
		//line 62 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		__temp_me90.unstubPositions = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
		//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		__temp_me90.callLog = new haxe.root.Array<hunit.call.Call>(new hunit.call.Call[]{});
		//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		__temp_me90.stubs = new haxe.root.Array<hunit.call.Stub>(new hunit.call.Stub[]{});
		//line 65 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		__temp_me90.expectations = new haxe.root.Array<hunit.call.Expect>(new hunit.call.Expect[]{});
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		return new hunit.mock.MockData(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		return new hunit.mock.MockData(((hunit.TestCase) (arr.__get(0)) ), ((java.lang.Class) (arr.__get(1)) ), arr.__get(2), arr.__get(3));
	}
	
	
	public java.lang.Class mockClass;
	
	public hunit.TestCase testCase;
	
	public int callCounter;
	
	public haxe.root.Array<hunit.call.Call> callLog;
	
	public haxe.root.Array<hunit.call.Stub> stubs;
	
	public haxe.root.Array<hunit.call.Expect> expectations;
	
	public boolean fullStub;
	
	public boolean strictMode;
	
	public haxe.root.Array<java.lang.String> unstubbedMethods;
	
	public haxe.root.Array<java.lang.Object> unstubPositions;
	
	public java.lang.String mockClassName()
	{
		//line 75 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		return haxe.root.Type.getClassName(this.mockClass);
	}
	
	
	public void stub(hunit.call.Stub stub)
	{
		//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		if (( this.unstubbedMethods.indexOf(stub.method, null) >= 0 )) 
		{
			//line 87 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			java.lang.Object pos = this.unstubPositions.__get(this.unstubbedMethods.indexOf(stub.method, null));
			//line 88 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			java.lang.String unstubPos = ( ( haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(pos, "fileName", true)) + ":" ) + ((int) (haxe.lang.Runtime.getField_f(pos, "lineNumber", true)) ) );
			//line 90 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			throw haxe.lang.HaxeException.wrap(new hunit.exceptions.InvalidTestException(( "Cannot stub method which was unstubbed at " + unstubPos ), stub.pos));
		}
		
		//line 93 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		this.stubs.push(stub);
	}
	
	
	public void unstub(java.lang.String method, java.lang.Object pos)
	{
		//line 104 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		{
			//line 104 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			int _g = 0;
			//line 104 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			haxe.root.Array<hunit.call.Stub> _g1 = this.stubs;
			//line 104 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			while (( _g < _g1.length ))
			{
				//line 104 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				hunit.call.Stub stub = _g1.__get(_g);
				//line 104 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				 ++ _g;
				//line 106 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				if (haxe.lang.Runtime.valEq(stub.method, method)) 
				{
					//line 107 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					java.lang.String stubPos = ( ( haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(stub.pos, "fileName", true)) + ":" ) + ((int) (haxe.lang.Runtime.getField_f(stub.pos, "lineNumber", true)) ) );
					//line 109 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					throw haxe.lang.HaxeException.wrap(new hunit.exceptions.InvalidTestException(( "Cannot unstub method which was stubbed directly at " + stubPos ), pos));
				}
				
			}
			
		}
		
		//line 114 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		if (( this.unstubbedMethods.indexOf(method, null) < 0 )) 
		{
			//line 115 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			this.unstubbedMethods.push(method);
			//line 116 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			this.unstubPositions.push(pos);
		}
		
	}
	
	
	public void expect(hunit.call.Expect expect)
	{
		//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		expect.fromCallId = this.callCounter;
		//line 128 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		this.expectations.push(expect);
		//line 129 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		this.testCase.__hu_state.expectedCalls.add(expect);
	}
	
	
	public void removeExpect(hunit.call.Expect expect)
	{
		//line 139 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		this.expectations.remove(expect);
		//line 140 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		this.testCase.__hu_state.expectedCalls.remove(expect);
	}
	
	
	public int methodInvoked(java.lang.String name, haxe.root.Array args, java.lang.Object pos)
	{
		//line 151 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		boolean isStub = ( this.fullStub && ( this.unstubbedMethods.indexOf(name, null) < 0 ) );
		//line 152 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		hunit.call.Stub stub = null;
		//line 153 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		{
			//line 153 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			int _g1 = 0;
			//line 153 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			int _g = this.stubs.length;
			//line 153 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			while (( _g1 < _g ))
			{
				//line 153 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				int i = _g1++;
				//line 154 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				stub = this.stubs.__get(i);
				//line 156 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				if (haxe.lang.Runtime.valEq(stub.method, name)) 
				{
					//line 157 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					isStub = true;
					//line 159 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (stub.match(name, args)) 
					{
						//line 160 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						break;
					}
					
				}
				
				//line 163 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				stub = null;
			}
			
		}
		
		//line 166 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		haxe.root.Array<haxe.StackItem> stack = haxe.CallStack.callStack();
		//line 168 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		stack.shift();
		//line 170 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		hunit.call.Call call = new hunit.call.Call(this.callCounter++, this, name, args, stack, pos, isStub, stub);
		//line 171 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		this.callLog.push(call);
		//line 173 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		return call.id;
	}
	
	
	public boolean isMethodMocked(int callId)
	{
		//line 183 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		hunit.call.Call call = this.callLog.__get(callId);
		//line 185 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		return call.isStub;
	}
	
	
	public java.lang.Object getMockedCallResult(int callId)
	{
		//line 195 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		hunit.call.Call call = this.callLog.__get(callId);
		//line 197 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		if ( ! (call.isStub) ) 
		{
			//line 198 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			java.lang.String cls = haxe.root.Type.getClassName(this.mockClass);
			//line 199 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			throw haxe.lang.HaxeException.wrap(new haxe.root.Exception(( ( ( ( "Trying to get mocked result while `" + cls ) + "." ) + call.method ) + "()` is not stubbed" ), new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.mock.MockData", "MockData.hx", "getMockedCallResult"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (199) )) )})));
		}
		
		//line 202 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		if (( call.stub == null )) 
		{
			//line 203 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			return null;
		}
		
		//line 206 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		if (haxe.lang.Runtime.toBool(hunit.utils.ValueTools.hasValue(call.stub.implementation))) 
		{
			//line 207 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			return haxe.root.Reflect.callMethod(null, ((java.lang.Object) (hunit.utils.ValueTools.getValue(call.stub.implementation)) ), call.arguments);
		}
		
		//line 210 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		if (haxe.lang.Runtime.toBool(hunit.utils.ValueTools.hasValue(call.stub._throws))) 
		{
			//line 211 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			throw haxe.lang.HaxeException.wrap(((java.lang.Object) (hunit.utils.ValueTools.getValue(call.stub._throws)) ));
		}
		
		//line 214 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		if (haxe.lang.Runtime.toBool(hunit.utils.ValueTools.hasValue(call.stub.returns))) 
		{
			//line 214 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			return ((java.lang.Object) (hunit.utils.ValueTools.getValue(call.stub.returns)) );
		}
		else
		{
			//line 214 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			return null;
		}
		
	}
	
	
	public void addCallResult(int callId, java.lang.Object result)
	{
		//line 224 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		this.callLog.__get(callId).result = hunit.utils.Value.Thing(result);
	}
	
	
	public void addCallException(int callId, java.lang.Object exception)
	{
		//line 234 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		this.callLog.__get(callId).set_exceptionValue(hunit.utils.Value.Thing(exception));
		//line 235 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		this.testCase.__hu_state.cacheCallException(this.callLog.__get(callId));
	}
	
	
	public void validateExpectation(hunit.call.Expect expect)
	{
		//line 245 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		boolean failed = false;
		//line 246 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		java.lang.String reason = "";
		//line 248 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		hunit.call.Call call = null;
		//line 249 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		int count = 0;
		//line 250 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		{
			//line 250 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			int _g1 = 0;
			//line 250 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			int _g = this.callLog.length;
			//line 250 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			while (( _g1 < _g ))
			{
				//line 250 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				int i = _g1++;
				//line 251 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				call = this.callLog.__get(i);
				//line 252 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				if (( call.id < expect.fromCallId )) 
				{
					//line 252 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					continue;
				}
				
				//line 254 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				if (expect.match(call)) 
				{
					//line 255 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					count++;
				}
				
			}
			
		}
		
		//line 258 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		java.lang.String s = null;
		//line 258 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		if (( count == 1 )) 
		{
			//line 258 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			s = "";
		}
		else
		{
			//line 258 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			s = "s";
		}
		
		//line 260 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		{
			//line 260 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			hunit.call.CallCount _g2 = expect.count;
			//line 260 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			switch (_g2.index)
			{
				case 0:
				{
					//line 262 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (( count > 0 )) 
					{
						//line 263 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						failed = true;
						//line 265 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						reason = ( ( ( ( ", actually called " + count ) + " time" ) + s ) + "." );
					}
					
					//line 262 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 1:
				{
					//line 267 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 2:
				{
					//line 269 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (( count != 1 )) 
					{
						//line 270 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						failed = true;
						//line 272 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						reason = ( ( ( ( ", actually called " + count ) + " time" ) + s ) + "." );
					}
					
					//line 269 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 3:
				{
					//line 260 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					int amount = ((int) (haxe.lang.Runtime.toInt(_g2.params[0])) );
					//line 275 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (( count < amount )) 
					{
						//line 276 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						failed = true;
						//line 278 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						reason = ( ( ( ( ", actually called " + count ) + " time" ) + s ) + "." );
					}
					
					//line 274 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 4:
				{
					//line 260 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					int amount1 = ((int) (haxe.lang.Runtime.toInt(_g2.params[0])) );
					//line 281 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (( count != amount1 )) 
					{
						//line 282 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						failed = true;
						//line 284 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						reason = ( ( ( ( ", actually called " + count ) + " time" ) + s ) + "." );
					}
					
					//line 280 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
			}
			
		}
		
		//line 288 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		if (failed) 
		{
			//line 289 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			throw haxe.lang.HaxeException.wrap(new hunit.exceptions.UnmetExpectationException(expect, reason, expect.pos));
		}
		
	}
	
	
	public void validateStrictMode(int callId)
	{
		//line 300 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		if ( ! (this.strictMode) ) 
		{
			//line 300 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			return ;
		}
		
		//line 302 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		hunit.call.Call call = this.callLog.__get(callId);
		//line 304 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		if (( call.stub != null )) 
		{
			//line 304 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			return ;
		}
		
		//line 306 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		{
			//line 306 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			int _g1 = 0;
			//line 306 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			int _g = this.expectations.length;
			//line 306 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			while (( _g1 < _g ))
			{
				//line 306 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				int i = _g1++;
				//line 307 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				if (this.expectations.__get(i).sameObjectMethod(call)) 
				{
					//line 308 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					return ;
				}
				
			}
			
		}
		
		//line 312 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		java.lang.String msg = ( ( "" + haxe.root.Std.string(call) ) + " is not expected nor stubbed." );
		//line 313 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		this.throwUnexpectedCallException(call, msg, null);
	}
	
	
	public void validateCall(int callId)
	{
		//line 323 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		boolean isExpected = false;
		//line 324 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		boolean satisfies = false;
		//line 326 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		hunit.call.Call call = this.callLog.__get(callId);
		//line 328 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		hunit.call.Expect expect = null;
		//line 329 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		{
			//line 329 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			int _g1 = 0;
			//line 329 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			int _g = this.expectations.length;
			//line 329 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			while (( _g1 < _g ))
			{
				//line 329 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				int i = _g1++;
				//line 330 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				expect = this.expectations.__get(i);
				//line 332 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				if (expect.sameObjectMethod(call)) 
				{
					//line 333 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					isExpected = true;
					//line 335 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (expect.match(call)) 
					{
						//line 336 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						expect.timesMatched++;
						//line 337 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						satisfies = true;
						//line 338 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						if (expect.tooManyCalls()) 
						{
							//line 339 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
							this.throwUnexpectedCallException(call, null, expect);
						}
						
					}
					
				}
				
			}
			
		}
		
		//line 345 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		if (( isExpected &&  ! (satisfies)  )) 
		{
			//line 346 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			this.throwUnexpectedCallException(call, null, null);
		}
		
	}
	
	
	public void throwUnexpectedCallException(hunit.call.Call call, java.lang.String msg, hunit.call.Expect expect)
	{
		//line 357 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		hunit.exceptions.UnexpectedCallException e = new hunit.exceptions.UnexpectedCallException(call, expect, msg, call.pos);
		//line 358 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		this.testCase.__hu_state.pendingFail(e);
		//line 360 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		e.truncateStack(new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.mock.MockData", "MockData.hx", "throwUnexpectedCallException"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (360) )) )}), 1);
		//line 361 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		throw haxe.lang.HaxeException.wrap(e);
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		{
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			boolean __temp_executeDef1 = true;
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			switch (field.hashCode())
			{
				case 544386494:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("callCounter")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.callCounter = ((int) (value) );
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return value;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
			}
			
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			if (__temp_executeDef1) 
			{
				//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		{
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			boolean __temp_executeDef1 = true;
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			switch (field.hashCode())
			{
				case 767867235:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("unstubPositions")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.unstubPositions = ((haxe.root.Array<java.lang.Object>) (value) );
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return value;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 1531438606:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("mockClass")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.mockClass = ((java.lang.Class) (value) );
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return value;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -185656840:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("unstubbedMethods")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.unstubbedMethods = ((haxe.root.Array<java.lang.String>) (value) );
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return value;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -1147299102:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("testCase")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.testCase = ((hunit.TestCase) (value) );
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return value;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -1876197364:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("strictMode")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.strictMode = haxe.lang.Runtime.toBool(value);
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return value;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 544386494:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("callCounter")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.callCounter = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return value;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 1331019741:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("fullStub")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.fullStub = haxe.lang.Runtime.toBool(value);
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return value;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 548613126:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("callLog")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.callLog = ((haxe.root.Array<hunit.call.Call>) (value) );
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return value;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 65841591:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("expectations")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.expectations = ((haxe.root.Array<hunit.call.Expect>) (value) );
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return value;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 109776261:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("stubs")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.stubs = ((haxe.root.Array<hunit.call.Stub>) (value) );
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return value;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
			}
			
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			if (__temp_executeDef1) 
			{
				//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		{
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			boolean __temp_executeDef1 = true;
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			switch (field.hashCode())
			{
				case 1344593146:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("throwUnexpectedCallException")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "throwUnexpectedCallException")) );
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 1531438606:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("mockClass")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.mockClass;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 1080724628:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("validateCall")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "validateCall")) );
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -1147299102:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("testCase")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.testCase;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 203592130:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("validateStrictMode")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "validateStrictMode")) );
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 544386494:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("callCounter")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.callCounter;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 1575109446:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("validateExpectation")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "validateExpectation")) );
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 548613126:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("callLog")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.callLog;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -764361616:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("addCallException")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addCallException")) );
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 109776261:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("stubs")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.stubs;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 1566125980:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("addCallResult")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addCallResult")) );
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 65841591:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("expectations")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.expectations;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -1207631846:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("getMockedCallResult")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getMockedCallResult")) );
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 1331019741:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("fullStub")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.fullStub;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 47369780:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("isMethodMocked")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "isMethodMocked")) );
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -1876197364:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("strictMode")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.strictMode;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 34046667:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("methodInvoked")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "methodInvoked")) );
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -185656840:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("unstubbedMethods")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.unstubbedMethods;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -1250599427:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("removeExpect")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "removeExpect")) );
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 767867235:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("unstubPositions")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.unstubPositions;
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -1289163687:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("expect")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "expect")) );
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 164568505:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("mockClassName")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "mockClassName")) );
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -840228153:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("unstub")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "unstub")) );
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 3541166:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("stub")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "stub")) );
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
			}
			
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			if (__temp_executeDef1) 
			{
				//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		{
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			boolean __temp_executeDef1 = true;
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			switch (field.hashCode())
			{
				case 544386494:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("callCounter")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return ((double) (this.callCounter) );
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
			}
			
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			if (__temp_executeDef1) 
			{
				//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		{
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			boolean __temp_executeDef1 = true;
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			switch (field.hashCode())
			{
				case 1344593146:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("throwUnexpectedCallException")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.throwUnexpectedCallException(((hunit.call.Call) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), ((hunit.call.Expect) (dynargs.__get(2)) ));
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 164568505:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("mockClassName")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.mockClassName();
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 1080724628:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("validateCall")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.validateCall(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ));
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 3541166:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("stub")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.stub(((hunit.call.Stub) (dynargs.__get(0)) ));
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 203592130:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("validateStrictMode")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.validateStrictMode(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ));
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -840228153:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("unstub")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.unstub(haxe.lang.Runtime.toString(dynargs.__get(0)), dynargs.__get(1));
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 1575109446:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("validateExpectation")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.validateExpectation(((hunit.call.Expect) (dynargs.__get(0)) ));
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -1289163687:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("expect")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.expect(((hunit.call.Expect) (dynargs.__get(0)) ));
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -764361616:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("addCallException")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.addCallException(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ), dynargs.__get(1));
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -1250599427:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("removeExpect")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.removeExpect(((hunit.call.Expect) (dynargs.__get(0)) ));
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 1566125980:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("addCallResult")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						this.addCallResult(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ), dynargs.__get(1));
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 34046667:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("methodInvoked")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.methodInvoked(haxe.lang.Runtime.toString(dynargs.__get(0)), ((haxe.root.Array) (dynargs.__get(1)) ), dynargs.__get(2));
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case -1207631846:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("getMockedCallResult")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.getMockedCallResult(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ));
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
				case 47369780:
				{
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					if (field.equals("isMethodMocked")) 
					{
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						__temp_executeDef1 = false;
						//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
						return this.isMethodMocked(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ));
					}
					
					//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
					break;
				}
				
				
			}
			
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			if (__temp_executeDef1) 
			{
				//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		baseArr.push("unstubPositions");
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		baseArr.push("unstubbedMethods");
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		baseArr.push("strictMode");
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		baseArr.push("fullStub");
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		baseArr.push("expectations");
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		baseArr.push("stubs");
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		baseArr.push("callLog");
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		baseArr.push("callCounter");
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		baseArr.push("testCase");
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		baseArr.push("mockClass");
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
		{
			//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


