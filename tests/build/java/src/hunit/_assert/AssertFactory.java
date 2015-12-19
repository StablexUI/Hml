package hunit._assert;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class AssertFactory extends haxe.lang.HxObject
{
	public AssertFactory(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public AssertFactory(hunit.TestCase testCase)
	{
		//line 27 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		hunit._assert.AssertFactory.__hx_ctor_hunit_assert_AssertFactory(this, testCase);
	}
	
	
	public static void __hx_ctor_hunit_assert_AssertFactory(hunit._assert.AssertFactory __temp_me55, hunit.TestCase testCase)
	{
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		__temp_me55.testCase = testCase;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		return new hunit._assert.AssertFactory(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		return new hunit._assert.AssertFactory(((hunit.TestCase) (arr.__get(0)) ));
	}
	
	
	public hunit.TestCase testCase;
	
	public <T> void match(hunit.match.Match<T> match, T value, java.lang.String message, java.lang.Object pos)
	{
		//line 39 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		hunit._assert.MatchAssert _assert = new hunit._assert.MatchAssert(((hunit.match.Match) (match) ), value, message, pos);
		//line 40 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		this.testCase.__hu_state.asserted.add(_assert);
		//line 42 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		_assert.validate();
	}
	
	
	public <T> void equal(T expected, T actual, java.lang.String message, java.lang.Object pos)
	{
		//line 52 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		hunit._assert.MatchAssert _assert = new hunit._assert.MatchAssert(((hunit.match.Match) (((hunit.match.EqualMatch<T>) (this.testCase.match.equal(expected)) )) ), actual, message, pos);
		//line 53 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		this.testCase.__hu_state.asserted.add(_assert);
		//line 55 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		_assert.validate();
	}
	
	
	public <T> void notEqual(T expected, T actual, java.lang.String message, java.lang.Object pos)
	{
		//line 65 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		hunit._assert.MatchAssert _assert = new hunit._assert.MatchAssert(((hunit.match.Match) (((hunit.match.NotEqualMatch<T>) (this.testCase.match.notEqual(expected)) )) ), actual, message, pos);
		//line 66 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		this.testCase.__hu_state.asserted.add(_assert);
		//line 68 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		_assert.validate();
	}
	
	
	public void type(java.lang.Class expectedType, java.lang.Object value, java.lang.String message, java.lang.Object pos)
	{
		//line 78 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		hunit._assert.MatchAssert _assert = new hunit._assert.MatchAssert(((hunit.match.TypeMatch) (this.testCase.match.type(expectedType)) ), value, message, pos);
		//line 79 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		this.testCase.__hu_state.asserted.add(_assert);
		//line 81 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		_assert.validate();
	}
	
	
	public void isNull(java.lang.Object value, java.lang.String message, java.lang.Object pos)
	{
		//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		hunit._assert.MatchAssert _assert = new hunit._assert.MatchAssert(((hunit.match.EqualMatch) (this.testCase.match.equal(null)) ), value, message, pos);
		//line 92 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		this.testCase.__hu_state.asserted.add(_assert);
		//line 94 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		_assert.validate();
	}
	
	
	public void notNull(java.lang.Object value, java.lang.String message, java.lang.Object pos)
	{
		//line 104 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		hunit._assert.MatchAssert _assert = new hunit._assert.MatchAssert(((hunit.match.NotEqualMatch) (this.testCase.match.notEqual(null)) ), value, message, pos);
		//line 105 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		this.testCase.__hu_state.asserted.add(_assert);
		//line 107 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		_assert.validate();
	}
	
	
	public void isTrue(boolean value, java.lang.String message, java.lang.Object pos)
	{
		//line 117 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		hunit._assert.MatchAssert _assert = new hunit._assert.MatchAssert(((hunit.match.Match) (((hunit.match.EqualMatch<java.lang.Object>) (((hunit.match.EqualMatch) (this.testCase.match.equal(true)) )) )) ), value, message, pos);
		//line 118 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		this.testCase.__hu_state.asserted.add(_assert);
		//line 120 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		_assert.validate();
	}
	
	
	public void isFalse(boolean value, java.lang.String message, java.lang.Object pos)
	{
		//line 130 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		hunit._assert.MatchAssert _assert = new hunit._assert.MatchAssert(((hunit.match.Match) (((hunit.match.EqualMatch<java.lang.Object>) (((hunit.match.EqualMatch) (this.testCase.match.equal(false)) )) )) ), value, message, pos);
		//line 131 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		this.testCase.__hu_state.asserted.add(_assert);
		//line 133 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		_assert.validate();
	}
	
	
	public void regexp(haxe.root.EReg pattern, java.lang.String value, java.lang.String message, java.lang.Object pos)
	{
		//line 143 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		hunit._assert.MatchAssert _assert = new hunit._assert.MatchAssert(((hunit.match.Match) (this.testCase.match.regexp(pattern)) ), value, message, pos);
		//line 144 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		this.testCase.__hu_state.asserted.add(_assert);
		//line 146 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		_assert.validate();
	}
	
	
	public void similar(java.lang.Object expected, java.lang.Object actual, java.lang.String message, java.lang.Object pos)
	{
		//line 169 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		hunit._assert.MatchAssert _assert = new hunit._assert.MatchAssert(this.testCase.match.similar(expected), actual, message, pos);
		//line 170 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		this.testCase.__hu_state.asserted.add(_assert);
		//line 172 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		_assert.validate();
	}
	
	
	public void fail(java.lang.String message, java.lang.Object pos)
	{
		//line 182 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		throw haxe.lang.HaxeException.wrap(new hunit.exceptions.AssertException(( (( message == null )) ? ("Forced test failure.") : (message) ), pos));
	}
	
	
	public void warn(java.lang.String message, java.lang.Object pos)
	{
		//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		this.testCase.__hu_state.warn(new hunit.warnings.ForcedWarning(haxe.lang.Runtime.toString(( (( message == null )) ? ("Forced warning") : (message) ))));
		//line 193 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		this.testCase.__hu_state.asserted.add(new hunit._assert.BaseAssert(((java.lang.Object) (pos) )));
	}
	
	
	public void success(java.lang.Object pos)
	{
		//line 203 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		this.testCase.__hu_state.asserted.add(new hunit._assert.BaseAssert(((java.lang.Object) (pos) )));
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			switch (field.hashCode())
			{
				case -1147299102:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("testCase")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.testCase = ((hunit.TestCase) (value) );
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			switch (field.hashCode())
			{
				case -1867169789:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("success")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "success")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case -1147299102:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("testCase")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return this.testCase;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 3641990:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("warn")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "warn")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 103668165:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("match")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "match")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 3135262:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("fail")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "fail")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 96757556:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("equal")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "equal")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 2093667819:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("similar")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "similar")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 1552455713:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("notEqual")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "notEqual")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case -934799095:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("regexp")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "regexp")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 3575610:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("type")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "type")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 2058602009:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("isFalse")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "isFalse")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case -1180261935:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("isNull")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "isNull")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case -1180085800:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("isTrue")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "isTrue")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 2128560890:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("notNull")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "notNull")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			switch (field.hashCode())
			{
				case -1867169789:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("success")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.success(dynargs.__get(0));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 103668165:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("match")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.match(((hunit.match.Match<java.lang.Object>) (dynargs.__get(0)) ), dynargs.__get(1), haxe.lang.Runtime.toString(dynargs.__get(2)), dynargs.__get(3));
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((java.lang.Object) (null) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 3641990:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("warn")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.warn(haxe.lang.Runtime.toString(dynargs.__get(0)), dynargs.__get(1));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 96757556:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("equal")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.equal(dynargs.__get(0), dynargs.__get(1), haxe.lang.Runtime.toString(dynargs.__get(2)), dynargs.__get(3));
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((java.lang.Object) (null) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 3135262:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("fail")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.fail(haxe.lang.Runtime.toString(dynargs.__get(0)), dynargs.__get(1));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 1552455713:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("notEqual")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.notEqual(dynargs.__get(0), dynargs.__get(1), haxe.lang.Runtime.toString(dynargs.__get(2)), dynargs.__get(3));
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						return ((java.lang.Object) (null) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 2093667819:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("similar")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.similar(dynargs.__get(0), dynargs.__get(1), haxe.lang.Runtime.toString(dynargs.__get(2)), dynargs.__get(3));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 3575610:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("type")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.type(((java.lang.Class) (dynargs.__get(0)) ), dynargs.__get(1), haxe.lang.Runtime.toString(dynargs.__get(2)), dynargs.__get(3));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case -934799095:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("regexp")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.regexp(((haxe.root.EReg) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), haxe.lang.Runtime.toString(dynargs.__get(2)), dynargs.__get(3));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case -1180261935:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("isNull")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.isNull(dynargs.__get(0), haxe.lang.Runtime.toString(dynargs.__get(1)), dynargs.__get(2));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 2058602009:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("isFalse")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.isFalse(haxe.lang.Runtime.toBool(dynargs.__get(0)), haxe.lang.Runtime.toString(dynargs.__get(1)), dynargs.__get(2));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case 2128560890:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("notNull")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.notNull(dynargs.__get(0), haxe.lang.Runtime.toString(dynargs.__get(1)), dynargs.__get(2));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
				case -1180085800:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					if (field.equals("isTrue")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
						this.isTrue(haxe.lang.Runtime.toBool(dynargs.__get(0)), haxe.lang.Runtime.toString(dynargs.__get(1)), dynargs.__get(2));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		baseArr.push("testCase");
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


