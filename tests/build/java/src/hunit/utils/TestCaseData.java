package hunit.utils;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TestCaseData extends haxe.lang.HxObject
{
	public TestCaseData(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public TestCaseData(hunit.TestCase testCase)
	{
		//line 114 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		hunit.utils.TestCaseData.__hx_ctor_hunit_utils_TestCaseData(this, testCase);
	}
	
	
	public static void __hx_ctor_hunit_utils_TestCaseData(hunit.utils.TestCaseData __temp_me95, hunit.TestCase testCase)
	{
		//line 116 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		__temp_me95.tests = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
		//line 117 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		__temp_me95.defaultGroups = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
		//line 118 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		__temp_me95.set_testCase(testCase);
		//line 120 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		__temp_me95.processTestCaseRttiMeta();
		//line 122 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		__temp_me95.gatherTestData();
	}
	
	
	public static haxe.root.Array<java.lang.Object> getDependent(java.lang.Object test, haxe.root.Array<java.lang.Object> list, haxe.root.Array<java.lang.Object> dependencyStack)
	{
		//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		haxe.root.Array<java.lang.Object> dependent = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
		//line 56 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		if (( dependencyStack != null )) 
		{
			//line 57 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			if (( dependencyStack.indexOf(test, null) >= 0 )) 
			{
				//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				throw haxe.lang.HaxeException.wrap(new hunit.exceptions.CircularTestDependencyException("Tests with circular dependancies detected. Check @depends() metas.", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.utils.TestCaseData", "TestCaseData.hx", "getDependent"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (58) )) )})));
			}
			
			//line 60 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			dependencyStack.push(test);
		}
		
		//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		{
			//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			int _g = 0;
			//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			while (( _g < list.length ))
			{
				//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				java.lang.Object t = list.__get(_g);
				//line 63 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				 ++ _g;
				//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				if (haxe.lang.Runtime.refEq(t, test)) 
				{
					//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					continue;
				}
				
				//line 66 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				if (( ((haxe.root.Array<java.lang.String>) (haxe.lang.Runtime.getField(t, "depends", true)) ).indexOf(haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(test, "name", true)), null) >= 0 )) 
				{
					//line 67 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					dependent.push(t);
					//line 68 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					haxe.root.Array<java.lang.Object> subStack = null;
					//line 68 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (( dependencyStack == null )) 
					{
						//line 68 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						subStack = null;
					}
					else
					{
						//line 68 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						subStack = dependencyStack.copy();
					}
					
					//line 69 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					dependent = dependent.concat(hunit.utils.TestCaseData.getDependent(t, list, subStack));
				}
				
			}
			
		}
		
		//line 73 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		return dependent;
	}
	
	
	public static haxe.root.Array<java.lang.Object> sortByDependencies(haxe.root.Array<java.lang.Object> list)
	{
		//line 83 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		if (( list.length == 0 )) 
		{
			//line 83 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
		}
		
		//line 85 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		haxe.root.Array<java.lang.Object> result = list.copy();
		//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		result.sort(( (( hunit.utils.TestCaseData_sortByDependencies_86__Fun.__hx_current != null )) ? (hunit.utils.TestCaseData_sortByDependencies_86__Fun.__hx_current) : (hunit.utils.TestCaseData_sortByDependencies_86__Fun.__hx_current = ((hunit.utils.TestCaseData_sortByDependencies_86__Fun) (new hunit.utils.TestCaseData_sortByDependencies_86__Fun()) )) ));
		//line 87 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		if (( ((haxe.root.Array<java.lang.String>) (haxe.lang.Runtime.getField(result.__get(0), "depends", true)) ).length > 0 )) 
		{
			//line 88 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			throw haxe.lang.HaxeException.wrap(new hunit.exceptions.CircularTestDependencyException("Can\'t find tests without dependencies.", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"hunit.utils.TestCaseData", "TestCaseData.hx", "sortByDependencies"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (88) )) )})));
		}
		
		//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		int idx = 0;
		//line 93 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		haxe.root.Array<java.lang.Object> dependent = null;
		//line 94 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		while (( idx < list.length ))
		{
			//line 95 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			dependent = hunit.utils.TestCaseData.getDependent(result.__get(idx), result, new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{}));
			//line 98 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			{
				//line 98 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				int _g = 0;
				//line 98 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				while (( _g < dependent.length ))
				{
					//line 98 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					java.lang.Object test = dependent.__get(_g);
					//line 98 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					 ++ _g;
					//line 99 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					result.remove(test);
					//line 100 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					result.push(test);
				}
				
			}
			
			//line 103 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			idx++;
		}
		
		//line 106 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		return result;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		return new hunit.utils.TestCaseData(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		return new hunit.utils.TestCaseData(((hunit.TestCase) (arr.__get(0)) ));
	}
	
	
	
	
	
	
	
	
	public hunit.TestCase testCase;
	
	public java.lang.Object rtti;
	
	public haxe.root.Array<java.lang.Object> tests;
	
	public haxe.root.Array<java.lang.String> defaultGroups;
	
	public haxe.root.Array<java.lang.Object> getTests(haxe.root.Array<java.lang.String> groups, haxe.root.Array<java.lang.String> excludeGroups)
	{
		//line 131 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		hunit.utils.TestCaseData _g = this;
		//line 133 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		haxe.root.Array<java.lang.Object> result = null;
		//line 133 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		if (( ( groups == null ) || ( groups.length == 0 ) )) 
		{
			//line 135 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			result = this.tests.copy();
		}
		else
		{
			//line 136 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			result = this.tests.filter(new hunit.utils.TestCaseData_getTests_136__Fun(groups, _g));
		}
		
		//line 138 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		if (( excludeGroups != null )) 
		{
			//line 139 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			result = result.filter(new hunit.utils.TestCaseData_getTests_139__Fun(excludeGroups, _g));
		}
		
		//line 142 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		return hunit.utils.TestCaseData.sortByDependencies(result);
	}
	
	
	public void processTestCaseRttiMeta()
	{
		//line 151 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		int _g = 0;
		//line 151 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		haxe.root.Array<java.lang.Object> _g1 = ((haxe.root.Array<java.lang.Object>) (haxe.lang.Runtime.getField(this.rtti, "meta", true)) );
		//line 151 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		while (( _g < _g1.length ))
		{
			//line 151 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			java.lang.Object meta = _g1.__get(_g);
			//line 151 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			 ++ _g;
			//line 152 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			{
				//line 152 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				java.lang.String _g2 = haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(meta, "name", true));
				//line 152 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				{
					//line 152 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					java.lang.String __temp_svar1 = (_g2);
					//line 152 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					boolean __temp_executeDef2 = true;
					//line 152 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					switch (__temp_svar1.hashCode())
					{
						case 98629247:
						{
							//line 152 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							if (__temp_svar1.equals("group")) 
							{
								//line 152 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								__temp_executeDef2 = false;
								//line 154 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								haxe.root.Array<java.lang.String> mGroups = ((haxe.root.Array<java.lang.String>) (((haxe.root.Array) (((haxe.root.Array<java.lang.String>) (haxe.lang.Runtime.getField(meta, "params", true)) ).map(( (( hunit.utils.TestCaseData_processTestCaseRttiMeta_154__Fun.__hx_current != null )) ? (hunit.utils.TestCaseData_processTestCaseRttiMeta_154__Fun.__hx_current) : (hunit.utils.TestCaseData_processTestCaseRttiMeta_154__Fun.__hx_current = ((hunit.utils.TestCaseData_processTestCaseRttiMeta_154__Fun) (new hunit.utils.TestCaseData_processTestCaseRttiMeta_154__Fun()) )) ))) )) );
								//line 155 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								this.defaultGroups = this.defaultGroups.concat(mGroups);
							}
							
							//line 152 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							break;
						}
						
						
					}
					
					//line 156 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (__temp_executeDef2) 
					{
					}
					
				}
				
			}
			
		}
		
	}
	
	
	public void gatherTestData()
	{
		//line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		haxe.root.Array _g_head = ((haxe.root.List<java.lang.Object>) (haxe.lang.Runtime.getField(this.rtti, "fields", true)) ).h;
		//line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		java.lang.Object _g_val = null;
		//line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		while (( _g_head != null ))
		{
			//line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			java.lang.Object field = null;
			//line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			java.lang.Object __temp_stmt1 = null;
			//line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			{
				//line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				_g_val = _g_head.__get(0);
				//line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				_g_head = ((haxe.root.Array) (_g_head.__get(1)) );
				//line 166 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				__temp_stmt1 = _g_val;
			}
			
			//line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			field = ((java.lang.Object) (__temp_stmt1) );
			//line 169 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			if ( ! (hunit.utils.CTypeClassFieldsUtils.isTest(field)) ) 
			{
				//line 169 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				continue;
			}
			
			//line 172 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			if ( ! (haxe.root.Reflect.isFunction(haxe.root.Reflect.field(this.testCase, haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(field, "name", true))))) ) 
			{
				//line 172 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				continue;
			}
			
			//line 174 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			this.tests.push(this.getTestData(field));
		}
		
	}
	
	
	public java.lang.Object getTestData(java.lang.Object field)
	{
		//line 185 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		java.lang.Object callback = haxe.root.Reflect.field(this.testCase, haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(field, "name", true)));
		//line 186 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		boolean isIncomplete = false;
		//line 187 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		haxe.root.Array<java.lang.String> groups = this.defaultGroups.copy();
		//line 188 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		java.lang.String incompleteMsg = null;
		//line 189 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		haxe.root.Array<java.lang.String> depends = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
		//line 191 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		{
			//line 191 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			int _g = 0;
			//line 191 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			haxe.root.Array<java.lang.Object> _g1 = ((haxe.root.Array<java.lang.Object>) (haxe.lang.Runtime.getField(field, "meta", true)) );
			//line 191 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			while (( _g < _g1.length ))
			{
				//line 191 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				java.lang.Object meta = _g1.__get(_g);
				//line 191 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				 ++ _g;
				//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				{
					//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					java.lang.String _g2 = haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(meta, "name", true));
					//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					{
						//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						java.lang.String __temp_svar2 = (_g2);
						//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						boolean __temp_executeDef3 = true;
						//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						switch (__temp_svar2.hashCode())
						{
							case 98629247:
							{
								//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								if (__temp_svar2.equals("group")) 
								{
									//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
									__temp_executeDef3 = false;
									//line 194 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
									haxe.root.Array<java.lang.String> mGroups = ((haxe.root.Array<java.lang.String>) (((haxe.root.Array) (((haxe.root.Array<java.lang.String>) (haxe.lang.Runtime.getField(meta, "params", true)) ).map(( (( hunit.utils.TestCaseData_getTestData_194__Fun.__hx_current != null )) ? (hunit.utils.TestCaseData_getTestData_194__Fun.__hx_current) : (hunit.utils.TestCaseData_getTestData_194__Fun.__hx_current = ((hunit.utils.TestCaseData_getTestData_194__Fun) (new hunit.utils.TestCaseData_getTestData_194__Fun()) )) ))) )) );
									//line 195 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
									groups = groups.concat(mGroups);
								}
								
								//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								break;
							}
							
							
							case 1554151303:
							{
								//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								if (__temp_svar2.equals("depends")) 
								{
									//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
									__temp_executeDef3 = false;
									//line 200 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
									depends = ((haxe.root.Array<java.lang.String>) (((haxe.root.Array) (((haxe.root.Array<java.lang.String>) (haxe.lang.Runtime.getField(meta, "params", true)) ).map(( (( hunit.utils.TestCaseData_getTestData_200__Fun.__hx_current != null )) ? (hunit.utils.TestCaseData_getTestData_200__Fun.__hx_current) : (hunit.utils.TestCaseData_getTestData_200__Fun.__hx_current = ((hunit.utils.TestCaseData_getTestData_200__Fun) (new hunit.utils.TestCaseData_getTestData_200__Fun()) )) ))) )) );
								}
								
								//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								break;
							}
							
							
							case -1010022050:
							{
								//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								if (__temp_svar2.equals("incomplete")) 
								{
									//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
									__temp_executeDef3 = false;
									//line 197 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
									isIncomplete = true;
									//line 198 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
									incompleteMsg = ((haxe.root.Array<java.lang.String>) (((haxe.root.Array) (((haxe.root.Array<java.lang.String>) (haxe.lang.Runtime.getField(meta, "params", true)) ).map(( (( hunit.utils.TestCaseData_getTestData_198__Fun.__hx_current != null )) ? (hunit.utils.TestCaseData_getTestData_198__Fun.__hx_current) : (hunit.utils.TestCaseData_getTestData_198__Fun.__hx_current = ((hunit.utils.TestCaseData_getTestData_198__Fun) (new hunit.utils.TestCaseData_getTestData_198__Fun()) )) ))) )) ).join("; ");
								}
								
								//line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								break;
							}
							
							
						}
						
						//line 201 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						if (__temp_executeDef3) 
						{
						}
						
					}
					
				}
				
			}
			
		}
		
		//line 205 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		{
			//line 206 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			java.lang.String __temp_odecl1 = haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(field, "name", true));
			//line 205 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return new haxe.lang.DynamicObject(new java.lang.String[]{"callback", "depends", "groups", "incompleteMsg", "isIncomplete", "name"}, new java.lang.Object[]{callback, depends, groups, incompleteMsg, isIncomplete, __temp_odecl1}, new java.lang.String[]{}, new double[]{});
		}
		
	}
	
	
	public boolean testIsInGroups(java.lang.Object test, haxe.root.Array<java.lang.String> groups)
	{
		//line 222 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		{
			//line 222 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			int _g = 0;
			//line 222 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			while (( _g < groups.length ))
			{
				//line 222 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				java.lang.String group = groups.__get(_g);
				//line 222 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				 ++ _g;
				//line 223 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				if (( ((haxe.root.Array<java.lang.String>) (haxe.lang.Runtime.getField(test, "groups", true)) ).indexOf(group, null) >= 0 )) 
				{
					//line 224 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					return true;
				}
				
			}
			
		}
		
		//line 228 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		return false;
	}
	
	
	public java.lang.String get_className()
	{
		//line 236 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		return haxe.root.Type.getClassName(((java.lang.Class) (haxe.root.Type.getClass(this.testCase)) ));
	}
	
	
	public java.lang.String get_file()
	{
		//line 237 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		return haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(this.rtti, "file", true));
	}
	
	
	public int get_totalTestCount()
	{
		//line 238 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		return this.tests.length;
	}
	
	
	public hunit.TestCase set_testCase(hunit.TestCase value)
	{
		//line 247 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		this.rtti = ((java.lang.Object) (haxe.rtti.Rtti.getRtti(((java.lang.Class) (haxe.root.Type.getClass(value)) ))) );
		//line 249 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		return this.testCase = value;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		{
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			boolean __temp_executeDef1 = true;
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			switch (field.hashCode())
			{
				case 3511351:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("rtti")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						this.rtti = ((java.lang.Object) (value) );
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return value;
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
			}
			
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			if (__temp_executeDef1) 
			{
				//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		{
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			boolean __temp_executeDef1 = true;
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			switch (field.hashCode())
			{
				case 628303733:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("defaultGroups")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						this.defaultGroups = ((haxe.root.Array<java.lang.String>) (value) );
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return value;
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case -1147299102:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("testCase")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						if (handleProperties) 
						{
							//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							this.set_testCase(((hunit.TestCase) (value) ));
							//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							return value;
						}
						else
						{
							//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							this.testCase = ((hunit.TestCase) (value) );
							//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							return value;
						}
						
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 110251553:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("tests")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						this.tests = ((haxe.root.Array<java.lang.Object>) (value) );
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return value;
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 3511351:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("rtti")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						this.rtti = ((java.lang.Object) (value) );
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return value;
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
			}
			
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			if (__temp_executeDef1) 
			{
				//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		{
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			boolean __temp_executeDef1 = true;
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			switch (field.hashCode())
			{
				case -1521361377:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("set_testCase")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_testCase")) );
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case -9888733:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("className")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.get_className();
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 1631281346:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("get_totalTestCount")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_totalTestCount")) );
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 3143036:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("file")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.get_file();
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 1976255685:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("get_file")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_file")) );
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case -385886023:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("totalTestCount")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.get_totalTestCount();
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 504951418:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("get_className")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_className")) );
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case -1147299102:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("testCase")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.testCase;
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 2081709269:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("testIsInGroups")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "testIsInGroups")) );
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 3511351:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("rtti")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.rtti;
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 930630866:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("getTestData")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getTestData")) );
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 110251553:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("tests")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.tests;
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 1614063223:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("gatherTestData")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "gatherTestData")) );
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 628303733:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("defaultGroups")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.defaultGroups;
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case -887370643:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("processTestCaseRttiMeta")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "processTestCaseRttiMeta")) );
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 1966077035:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("getTests")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getTests")) );
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
			}
			
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			if (__temp_executeDef1) 
			{
				//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		{
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			boolean __temp_executeDef1 = true;
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			switch (field.hashCode())
			{
				case 3511351:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("rtti")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((double) (haxe.lang.Runtime.toDouble(this.rtti)) );
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case -385886023:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("totalTestCount")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((double) (this.get_totalTestCount()) );
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
			}
			
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			if (__temp_executeDef1) 
			{
				//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		{
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			boolean __temp_executeDef1 = true;
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			switch (field.hashCode())
			{
				case -1521361377:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("set_testCase")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.set_testCase(((hunit.TestCase) (dynargs.__get(0)) ));
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 1966077035:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("getTests")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.getTests(((haxe.root.Array<java.lang.String>) (dynargs.__get(0)) ), ((haxe.root.Array<java.lang.String>) (dynargs.__get(1)) ));
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 1631281346:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("get_totalTestCount")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.get_totalTestCount();
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case -887370643:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("processTestCaseRttiMeta")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						this.processTestCaseRttiMeta();
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 1976255685:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("get_file")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.get_file();
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 1614063223:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("gatherTestData")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						this.gatherTestData();
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 504951418:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("get_className")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.get_className();
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 930630866:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("getTestData")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.getTestData(dynargs.__get(0));
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
				case 2081709269:
				{
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (field.equals("testIsInGroups")) 
					{
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_executeDef1 = false;
						//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.testIsInGroups(dynargs.__get(0), ((haxe.root.Array<java.lang.String>) (dynargs.__get(1)) ));
					}
					
					//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					break;
				}
				
				
			}
			
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			if (__temp_executeDef1) 
			{
				//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		baseArr.push("defaultGroups");
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		baseArr.push("tests");
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		baseArr.push("rtti");
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		baseArr.push("testCase");
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		baseArr.push("totalTestCount");
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		baseArr.push("file");
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		baseArr.push("className");
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
		{
			//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


