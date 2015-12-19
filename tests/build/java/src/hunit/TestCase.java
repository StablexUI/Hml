package hunit;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TestCase extends haxe.lang.HxObject
{
	static
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		hunit.TestCase.__rtti = "<class path=\"hunit.TestCase\" params=\"\">\n\t<getMockData public=\"1\" set=\"method\" line=\"54\" static=\"1\">\n\t\t<f a=\"mock\">\n\t\t\t<c path=\"hunit.mock.IMock\"/>\n\t\t\t<c path=\"hunit.mock.MockData\"/>\n\t\t</f>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</getMockData>\n\t<match public=\"1\" set=\"accessor\"><c path=\"hunit.match.MatchFactory\"/></match>\n\t<assert public=\"1\" set=\"accessor\"><c path=\"hunit.assert.AssertFactory\"/></assert>\n\t<__hu_state public=\"1\">\n\t\t<t path=\"Null\"><c path=\"hunit.TestState\"/></t>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</__hu_state>\n\t<setupTestCase public=\"1\" set=\"method\" line=\"75\"><f a=\"\"><x path=\"Void\"/></f></setupTestCase>\n\t<setup public=\"1\" set=\"method\" line=\"84\"><f a=\"\"><x path=\"Void\"/></f></setup>\n\t<tearDown public=\"1\" set=\"method\" line=\"94\"><f a=\"\"><x path=\"Void\"/></f></tearDown>\n\t<tearDownTestCase public=\"1\" set=\"method\" line=\"104\"><f a=\"\"><x path=\"Void\"/></f></tearDownTestCase>\n\t<expectException public=\"1\" params=\"T\" set=\"method\" line=\"173\">\n\t\t<f a=\"?match:?pos\" v=\"null:\">\n\t\t\t<x path=\"hunit.Match\"><c path=\"expectException.T\"/></x>\n\t\t\t<t path=\"haxe.PosInfos\"/>\n\t\t\t<x path=\"Void\"/>\n\t\t</f>\n\t\t<meta><m n=\":value\"><e>{match:null}</e></m></meta>\n\t</expectException>\n\t<notice public=\"1\" set=\"method\" line=\"187\"><f a=\"msg:?pos\">\n\t<c path=\"String\"/>\n\t<t path=\"haxe.PosInfos\"/>\n\t<x path=\"Void\"/>\n</f></notice>\n\t<set_match set=\"method\" line=\"198\">\n\t\t<f a=\"match\">\n\t\t\t<c path=\"hunit.match.MatchFactory\"/>\n\t\t\t<c path=\"hunit.match.MatchFactory\"/>\n\t\t</f>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</set_match>\n\t<set_assert set=\"method\" line=\"213\">\n\t\t<f a=\"assert\">\n\t\t\t<c path=\"hunit.assert.AssertFactory\"/>\n\t\t\t<c path=\"hunit.assert.AssertFactory\"/>\n\t\t</f>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</set_assert>\n\t<new public=\"1\" set=\"method\" line=\"64\"><f a=\"\"><x path=\"Void\"/></f></new>\n\t<meta>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t\t<m n=\":access\"><e>hunit.mock.IMock</e></m>\n\t\t<m n=\":rtti\"/>\n\t\t<m n=\":keepSub\"/>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t</meta>\n</class>";
	}
	
	public TestCase(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public TestCase()
	{
		//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		hunit.TestCase.__hx_ctor_hunit_TestCase(this);
	}
	
	
	public static void __hx_ctor_hunit_TestCase(hunit.TestCase __temp_me8)
	{
		//line 66 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		__temp_me8.set_match(new hunit.match.MatchFactory());
		//line 67 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		__temp_me8.set_assert(new hunit._assert.AssertFactory(((hunit.TestCase) (__temp_me8) )));
	}
	
	
	public static java.lang.String __rtti;
	
	public static hunit.mock.MockData getMockData(hunit.mock.IMock mock)
	{
		//line 56 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		return ((hunit.mock.MockData) (haxe.lang.Runtime.getField(mock, "__hu_mock__", true)) );
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		return new hunit.TestCase(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		return new hunit.TestCase();
	}
	
	
	public hunit.match.MatchFactory match;
	
	public hunit._assert.AssertFactory _assert;
	
	public hunit.TestState __hu_state;
	
	public void setupTestCase()
	{
	}
	
	
	public void setup()
	{
	}
	
	
	public void tearDown()
	{
	}
	
	
	public void tearDownTestCase()
	{
	}
	
	
	public <T> void expectException(java.lang.Object match, java.lang.Object pos)
	{
		//line 175 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		if (( match == null )) 
		{
			//line 176 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			match = new hunit.match.AnyMatch<T>(null, null);
		}
		
		//line 179 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		this.__hu_state.set_expectedException(new hunit.exceptions.ExpectedExceptionData(((hunit.match.Match) (match) ), pos));
	}
	
	
	public void notice(java.lang.String msg, java.lang.Object pos)
	{
		//line 189 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		this.__hu_state.notice(msg, pos);
	}
	
	
	public hunit.match.MatchFactory set_match(hunit.match.MatchFactory match)
	{
		//line 200 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		if (( this.match != null )) 
		{
			//line 201 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			throw haxe.lang.HaxeException.wrap(new hunit.exceptions.InvalidTestException("Matcher factory already set", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.TestCase", "TestCase.hx", "set_match"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (201) )) )})));
		}
		
		//line 204 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		return this.match = match;
	}
	
	
	public hunit._assert.AssertFactory set_assert(hunit._assert.AssertFactory _assert)
	{
		//line 215 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		if (( this._assert != null )) 
		{
			//line 216 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			throw haxe.lang.HaxeException.wrap(new hunit.exceptions.InvalidTestException("Assertion factory already set", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.TestCase", "TestCase.hx", "set_assert"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (216) )) )})));
		}
		
		//line 219 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		return this._assert = _assert;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		{
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			boolean __temp_executeDef1 = true;
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			switch (field.hashCode())
			{
				case -1241472321:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("__hu_state")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						this.__hu_state = ((hunit.TestState) (value) );
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case 103668165:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("match")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							this.set_match(((hunit.match.MatchFactory) (value) ));
							//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							this.match = ((hunit.match.MatchFactory) (value) );
							//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case -1408208058:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("assert")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							this.set_assert(((hunit._assert.AssertFactory) (value) ));
							//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							this._assert = ((hunit._assert.AssertFactory) (value) );
							//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
			}
			
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			if (__temp_executeDef1) 
			{
				//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		{
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			boolean __temp_executeDef1 = true;
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			switch (field.hashCode())
			{
				case -1685691965:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("set_assert")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_assert")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case 103668165:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("match")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return this.match;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case 926001064:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("set_match")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_match")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case -1408208058:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("assert")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return this._assert;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case -1039690024:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("notice")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "notice")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case -1241472321:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("__hu_state")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return this.__hu_state;
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case -882190346:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("expectException")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "expectException")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case -393450369:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("setupTestCase")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setupTestCase")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case 308835622:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("tearDownTestCase")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "tearDownTestCase")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case 109329021:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("setup")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setup")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case -1664427484:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("tearDown")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "tearDown")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
			}
			
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			if (__temp_executeDef1) 
			{
				//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		{
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			boolean __temp_executeDef1 = true;
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			switch (field.hashCode())
			{
				case -1685691965:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("set_assert")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return this.set_assert(((hunit._assert.AssertFactory) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case -393450369:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("setupTestCase")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						this.setupTestCase();
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case 926001064:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("set_match")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return this.set_match(((hunit.match.MatchFactory) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case 109329021:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("setup")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						this.setup();
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case -1039690024:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("notice")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						this.notice(haxe.lang.Runtime.toString(dynargs.__get(0)), dynargs.__get(1));
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case -1664427484:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("tearDown")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						this.tearDown();
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case -882190346:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("expectException")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						this.expectException(dynargs.__get(0), dynargs.__get(1));
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						return ((java.lang.Object) (null) );
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
				case 308835622:
				{
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					if (field.equals("tearDownTestCase")) 
					{
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
						this.tearDownTestCase();
					}
					
					//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
					break;
				}
				
				
			}
			
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			if (__temp_executeDef1) 
			{
				//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		baseArr.push("__hu_state");
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		baseArr.push("assert");
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		baseArr.push("match");
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
		{
			//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


