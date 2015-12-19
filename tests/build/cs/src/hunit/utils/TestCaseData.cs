
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.utils {
	public class TestCaseData : global::haxe.lang.HxObject {
		
		public TestCaseData(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public TestCaseData(global::hunit.TestCase testCase) {
			#line 114 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			global::hunit.utils.TestCaseData.__hx_ctor_hunit_utils_TestCaseData(this, testCase);
		}
		#line default
		
		public static void __hx_ctor_hunit_utils_TestCaseData(global::hunit.utils.TestCaseData __temp_me118, global::hunit.TestCase testCase) {
			#line 116 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			__temp_me118.tests = new global::Array<object>(new object[]{});
			__temp_me118.defaultGroups = new global::Array<object>(new object[]{});
			__temp_me118.set_testCase(testCase);
			#line 120 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			__temp_me118.processTestCaseRttiMeta();
			#line 122 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			__temp_me118.gatherTestData();
		}
		#line default
		
		public static global::Array<object> getDependent(object test, global::Array<object> list, global::Array<object> dependencyStack) {
			unchecked {
				#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				global::Array<object> dependent = new global::Array<object>(new object[]{});
				#line 56 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				if (( dependencyStack != null )) {
					#line 57 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if (( dependencyStack.indexOf(test, default(global::haxe.lang.Null<int>)) >= 0 )) {
						#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.CircularTestDependencyException("Tests with circular dependancies detected. Check @depends() metas.", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"getDependent", "hunit.utils.TestCaseData", "TestCaseData.hx"}, new int[]{1981972957}, new double[]{((double) (58) )})));
					}
					
					#line 60 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					dependencyStack.push(test);
				}
				
				#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				{
					#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					int _g = 0;
					#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					while (( _g < list.length )) {
						#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						object t = list[_g];
						#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						 ++ _g;
						if (global::haxe.lang.Runtime.refEq(t, test)) {
							#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							continue;
						}
						
						#line 66 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						if (( ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::haxe.lang.Runtime.getField(t, "depends", 1617242503, true)) ))) ).indexOf(global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(test, "name", 1224700491, true)), default(global::haxe.lang.Null<int>)) >= 0 )) {
							#line 67 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							dependent.push(t);
							global::Array<object> subStack = null;
							#line 68 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							if (( dependencyStack == null )) {
								#line 68 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								subStack = null;
							}
							else {
								#line 68 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								subStack = dependencyStack.copy();
							}
							
							#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							dependent = dependent.concat(global::hunit.utils.TestCaseData.getDependent(t, list, subStack));
						}
						
					}
					
				}
				
				#line 73 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				return dependent;
			}
			#line default
		}
		
		
		public static global::Array<object> sortByDependencies(global::Array<object> list) {
			unchecked {
				#line 83 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				if (( list.length == 0 )) {
					#line 83 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					return new global::Array<object>(new object[]{});
				}
				
				#line 85 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				global::Array<object> result = list.copy();
				result.sort(( (( global::hunit.utils.TestCaseData_sortByDependencies_86__Fun.__hx_current != null )) ? (global::hunit.utils.TestCaseData_sortByDependencies_86__Fun.__hx_current) : (global::hunit.utils.TestCaseData_sortByDependencies_86__Fun.__hx_current = ((global::hunit.utils.TestCaseData_sortByDependencies_86__Fun) (new global::hunit.utils.TestCaseData_sortByDependencies_86__Fun()) )) ));
				if (( ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::haxe.lang.Runtime.getField(result[0], "depends", 1617242503, true)) ))) ).length > 0 )) {
					#line 88 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.CircularTestDependencyException("Can\'t find tests without dependencies.", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"sortByDependencies", "hunit.utils.TestCaseData", "TestCaseData.hx"}, new int[]{1981972957}, new double[]{((double) (88) )})));
				}
				
				#line 91 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				int idx = 0;
				#line 93 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				global::Array<object> dependent = null;
				while (( idx < list.length )) {
					#line 95 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					dependent = global::hunit.utils.TestCaseData.getDependent(result[idx], result, new global::Array<object>(new object[]{}));
					#line 98 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					{
						#line 98 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						int _g = 0;
						#line 98 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						while (( _g < dependent.length )) {
							#line 98 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							object test = dependent[_g];
							#line 98 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							 ++ _g;
							result.@remove(test);
							result.push(test);
						}
						
					}
					
					#line 103 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					idx++;
				}
				
				#line 106 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				return result;
			}
			#line default
		}
		
		
		public static new object __hx_createEmpty() {
			#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return new global::hunit.utils.TestCaseData(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return new global::hunit.utils.TestCaseData(((global::hunit.TestCase) (arr[0]) ));
		}
		#line default
		
		
		
		
		
		
		
		public global::hunit.TestCase testCase;
		
		public object rtti;
		
		public global::Array<object> tests;
		
		public global::Array<object> defaultGroups;
		
		public virtual global::Array<object> getTests(global::Array<object> groups, global::Array<object> excludeGroups) {
			#line 131 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			global::hunit.utils.TestCaseData _g = this;
			#line 133 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			global::Array<object> result = null;
			#line 133 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			if (( ( groups == null ) || ( groups.length == 0 ) )) {
				#line 135 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				result = this.tests.copy();
			}
			else {
				#line 136 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				result = this.tests.filter(new global::hunit.utils.TestCaseData_getTests_136__Fun(groups, _g));
			}
			
			#line 138 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			if (( excludeGroups != null )) {
				#line 139 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				result = result.filter(new global::hunit.utils.TestCaseData_getTests_139__Fun(excludeGroups, _g));
			}
			
			#line 142 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return global::hunit.utils.TestCaseData.sortByDependencies(result);
		}
		#line default
		
		public virtual void processTestCaseRttiMeta() {
			#line 151 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			int _g = 0;
			#line 151 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			global::Array<object> _g1 = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::haxe.lang.Runtime.getField(this.rtti, "meta", 1213811397, true)) ))) );
			#line 151 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			while (( _g < _g1.length )) {
				#line 151 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				object meta = _g1[_g];
				#line 151 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				 ++ _g;
				{
					#line 152 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					string _g2 = global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(meta, "name", 1224700491, true));
					#line 152 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					switch (_g2) {
						case "group":
						{
							#line 154 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							global::Array<object> mGroups = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::haxe.lang.Runtime.getField(meta, "params", 1836776262, true)) ))) ).map<object>(( (( global::hunit.utils.TestCaseData_processTestCaseRttiMeta_154__Fun.__hx_current != null )) ? (global::hunit.utils.TestCaseData_processTestCaseRttiMeta_154__Fun.__hx_current) : (global::hunit.utils.TestCaseData_processTestCaseRttiMeta_154__Fun.__hx_current = ((global::hunit.utils.TestCaseData_processTestCaseRttiMeta_154__Fun) (new global::hunit.utils.TestCaseData_processTestCaseRttiMeta_154__Fun()) )) ));
							this.defaultGroups = this.defaultGroups.concat(mGroups);
							#line 153 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							break;
						}
						
						
						default:
						{
							#line 156 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							break;
						}
						
					}
					
				}
				
			}
			
		}
		#line default
		
		public virtual void gatherTestData() {
			unchecked {
				#line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				global::Array _g_head = ((global::List<object>) (global::List<object>.__hx_cast<object>(((global::List) (global::haxe.lang.Runtime.getField(this.rtti, "fields", 9342585, true)) ))) ).h;
				#line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				object _g_val = null;
				#line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				while (( _g_head != null )) {
					#line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					object field = null;
					#line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					object __temp_stmt1 = null;
					#line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					{
						#line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						_g_val = _g_head[0];
						#line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						_g_head = ((global::Array) (_g_head[1]) );
						#line 166 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_stmt1 = _g_val;
					}
					
					#line 168 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					field = ((object) (__temp_stmt1) );
					if ( ! (global::hunit.utils.CTypeClassFieldsUtils.isTest(field)) ) {
						#line 169 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						continue;
					}
					
					#line 172 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					bool __temp_stmt2 = default(bool);
					#line 172 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					{
						#line 172 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						object f = global::Reflect.field(this.testCase, global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(field, "name", 1224700491, true)));
						#line 172 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						__temp_stmt2 = ( f is global::haxe.lang.Function );
					}
					
					#line 172 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					if ( ! (__temp_stmt2) ) {
						#line 172 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						continue;
					}
					
					#line 174 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					this.tests.push(this.getTestData(field));
				}
				
			}
			#line default
		}
		
		
		public virtual object getTestData(object field) {
			#line 185 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			object callback = global::Reflect.field(this.testCase, global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(field, "name", 1224700491, true)));
			bool isIncomplete = false;
			global::Array<object> groups = this.defaultGroups.copy();
			string incompleteMsg = null;
			global::Array<object> depends = new global::Array<object>(new object[]{});
			#line 191 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			{
				#line 191 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				int _g = 0;
				#line 191 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				global::Array<object> _g1 = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::haxe.lang.Runtime.getField(field, "meta", 1213811397, true)) ))) );
				#line 191 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				while (( _g < _g1.length )) {
					#line 191 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					object meta = _g1[_g];
					#line 191 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					 ++ _g;
					{
						#line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						string _g2 = global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(meta, "name", 1224700491, true));
						#line 192 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						switch (_g2) {
							case "group":
							{
								#line 194 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								global::Array<object> mGroups = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::haxe.lang.Runtime.getField(meta, "params", 1836776262, true)) ))) ).map<object>(( (( global::hunit.utils.TestCaseData_getTestData_194__Fun.__hx_current != null )) ? (global::hunit.utils.TestCaseData_getTestData_194__Fun.__hx_current) : (global::hunit.utils.TestCaseData_getTestData_194__Fun.__hx_current = ((global::hunit.utils.TestCaseData_getTestData_194__Fun) (new global::hunit.utils.TestCaseData_getTestData_194__Fun()) )) ));
								groups = groups.concat(mGroups);
								#line 193 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								break;
							}
							
							
							case "incomplete":
							{
								#line 197 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								isIncomplete = true;
								incompleteMsg = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::haxe.lang.Runtime.getField(meta, "params", 1836776262, true)) ))) ).map<object>(( (( global::hunit.utils.TestCaseData_getTestData_198__Fun.__hx_current != null )) ? (global::hunit.utils.TestCaseData_getTestData_198__Fun.__hx_current) : (global::hunit.utils.TestCaseData_getTestData_198__Fun.__hx_current = ((global::hunit.utils.TestCaseData_getTestData_198__Fun) (new global::hunit.utils.TestCaseData_getTestData_198__Fun()) )) )).@join("; ");
								#line 196 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								break;
							}
							
							
							case "depends":
							{
								#line 200 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								depends = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::haxe.lang.Runtime.getField(meta, "params", 1836776262, true)) ))) ).map<object>(( (( global::hunit.utils.TestCaseData_getTestData_200__Fun.__hx_current != null )) ? (global::hunit.utils.TestCaseData_getTestData_200__Fun.__hx_current) : (global::hunit.utils.TestCaseData_getTestData_200__Fun.__hx_current = ((global::hunit.utils.TestCaseData_getTestData_200__Fun) (new global::hunit.utils.TestCaseData_getTestData_200__Fun()) )) ));
								#line 200 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								break;
							}
							
							
							default:
							{
								#line 201 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
								break;
							}
							
						}
						
					}
					
				}
				
			}
			
			#line 205 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			{
				#line 206 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				string __temp_odecl1 = global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(field, "name", 1224700491, true));
				#line 205 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				return new global::haxe.lang.DynamicObject(new int[]{472392788, 1224700491, 1412264488, 1617242503, 1676664643, 2131139013}, new object[]{groups, __temp_odecl1, isIncomplete, depends, incompleteMsg, callback}, new int[]{}, new double[]{});
			}
			
		}
		#line default
		
		public virtual bool testIsInGroups(object test, global::Array<object> groups) {
			#line 222 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			{
				#line 222 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				int _g = 0;
				#line 222 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				while (( _g < groups.length )) {
					#line 222 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					string @group = global::haxe.lang.Runtime.toString(groups[_g]);
					#line 222 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
					 ++ _g;
					if (( ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::haxe.lang.Runtime.getField(test, "groups", 472392788, true)) ))) ).indexOf(@group, default(global::haxe.lang.Null<int>)) >= 0 )) {
						#line 224 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return true;
					}
					
				}
				
			}
			
			#line 228 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return false;
		}
		#line default
		
		public virtual string get_className() {
			#line 236 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return global::Type.getClassName(global::Type.getClass<object>(this.testCase));
		}
		#line default
		
		public virtual string get_file() {
			#line 237 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(this.rtti, "file", 1136381564, true));
		}
		#line default
		
		public virtual int get_totalTestCount() {
			#line 238 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return this.tests.length;
		}
		#line default
		
		public virtual global::hunit.TestCase set_testCase(global::hunit.TestCase @value) {
			#line 247 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			this.rtti = global::haxe.rtti.Rtti.getRtti<object>(global::Type.getClass<object>(@value));
			#line 249 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return this.testCase = @value;
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				switch (hash) {
					case 1270005175:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						this.rtti = ((object) (@value) );
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return @value;
					}
					
					
					default:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				switch (hash) {
					case 379647989:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						this.defaultGroups = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return @value;
					}
					
					
					case 227901409:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						this.tests = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return @value;
					}
					
					
					case 1270005175:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						this.rtti = ((object) (@value) );
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return @value;
					}
					
					
					case 1156359202:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						if (handleProperties) {
							#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							this.set_testCase(((global::hunit.TestCase) (@value) ));
							#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							return @value;
						}
						else {
							#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							this.testCase = ((global::hunit.TestCase) (@value) );
							#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
							return @value;
						}
						
					}
					
					
					default:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				switch (hash) {
					case 251624351:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_testCase", 251624351)) );
					}
					
					
					case 71391106:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_totalTestCount", 71391106)) );
					}
					
					
					case 1131842053:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_file", 1131842053)) );
					}
					
					
					case 497116794:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_className", 497116794)) );
					}
					
					
					case 1061725973:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "testIsInGroups", 1061725973)) );
					}
					
					
					case 1804181074:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getTestData", 1804181074)) );
					}
					
					
					case 1391393975:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "gatherTestData", 1391393975)) );
					}
					
					
					case 1102035693:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "processTestCaseRttiMeta", 1102035693)) );
					}
					
					
					case 1835831147:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getTests", 1835831147)) );
					}
					
					
					case 379647989:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.defaultGroups;
					}
					
					
					case 227901409:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.tests;
					}
					
					
					case 1270005175:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.rtti;
					}
					
					
					case 1156359202:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.testCase;
					}
					
					
					case 1755805369:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.get_totalTestCount();
					}
					
					
					case 1136381564:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.get_file();
					}
					
					
					case 1547539107:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.get_className();
					}
					
					
					default:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				switch (hash) {
					case 1270005175:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(this.rtti)) );
					}
					
					
					case 1755805369:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return ((double) (this.get_totalTestCount()) );
					}
					
					
					default:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				switch (hash) {
					case 251624351:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.set_testCase(((global::hunit.TestCase) (dynargs[0]) ));
					}
					
					
					case 71391106:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.get_totalTestCount();
					}
					
					
					case 1131842053:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.get_file();
					}
					
					
					case 497116794:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.get_className();
					}
					
					
					case 1061725973:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.testIsInGroups(dynargs[0], ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (dynargs[1]) ))) ));
					}
					
					
					case 1804181074:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.getTestData(dynargs[0]);
					}
					
					
					case 1391393975:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						this.gatherTestData();
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						break;
					}
					
					
					case 1102035693:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						this.processTestCaseRttiMeta();
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						break;
					}
					
					
					case 1835831147:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return this.getTests(((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (dynargs[0]) ))) ), ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (dynargs[1]) ))) ));
					}
					
					
					default:
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			baseArr.push("defaultGroups");
			#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			baseArr.push("tests");
			#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			baseArr.push("rtti");
			#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			baseArr.push("testCase");
			#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			baseArr.push("totalTestCount");
			#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			baseArr.push("file");
			#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			baseArr.push("className");
			#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			{
				#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.utils {
	public class TestCaseData_getTests_136__Fun : global::haxe.lang.Function {
		
		public TestCaseData_getTests_136__Fun(global::Array<object> groups, global::hunit.utils.TestCaseData _g) : base(1, 0) {
			#line 136 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			this.groups = groups;
			#line 136 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			this._g = _g;
		}
		#line default
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			#line 136 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			object t = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((object) (__fn_float1) )) : (((object) (__fn_dyn1) )) );
			#line 136 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return this._g.testIsInGroups(t, this.groups);
		}
		#line default
		
		public global::Array<object> groups;
		
		public global::hunit.utils.TestCaseData _g;
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.utils {
	public class TestCaseData_getTests_139__Fun : global::haxe.lang.Function {
		
		public TestCaseData_getTests_139__Fun(global::Array<object> excludeGroups, global::hunit.utils.TestCaseData _g) : base(1, 0) {
			#line 139 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			this.excludeGroups = excludeGroups;
			#line 139 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			this._g = _g;
		}
		#line default
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			#line 139 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			object t1 = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((object) (__fn_float1) )) : (((object) (__fn_dyn1) )) );
			#line 139 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return  ! (this._g.testIsInGroups(t1, this.excludeGroups)) ;
		}
		#line default
		
		public global::Array<object> excludeGroups;
		
		public global::hunit.utils.TestCaseData _g;
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.utils {
	public class TestCaseData_processTestCaseRttiMeta_154__Fun : global::haxe.lang.Function {
		
		public TestCaseData_processTestCaseRttiMeta_154__Fun() : base(1, 0) {
		}
		
		
		public static global::hunit.utils.TestCaseData_processTestCaseRttiMeta_154__Fun __hx_current;
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			#line 154 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			string s = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (global::haxe.lang.Runtime.toString(__fn_float1)) : (global::haxe.lang.Runtime.toString(__fn_dyn1)) );
			#line 154 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return global::StringTools.replace(s, "\"", "");
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.utils {
	public class TestCaseData_getTestData_194__Fun : global::haxe.lang.Function {
		
		public TestCaseData_getTestData_194__Fun() : base(1, 0) {
		}
		
		
		public static global::hunit.utils.TestCaseData_getTestData_194__Fun __hx_current;
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			#line 194 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			string s = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (global::haxe.lang.Runtime.toString(__fn_float1)) : (global::haxe.lang.Runtime.toString(__fn_dyn1)) );
			#line 194 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return global::StringTools.replace(s, "\"", "");
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.utils {
	public class TestCaseData_getTestData_198__Fun : global::haxe.lang.Function {
		
		public TestCaseData_getTestData_198__Fun() : base(1, 0) {
		}
		
		
		public static global::hunit.utils.TestCaseData_getTestData_198__Fun __hx_current;
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			#line 198 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			string s1 = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (global::haxe.lang.Runtime.toString(__fn_float1)) : (global::haxe.lang.Runtime.toString(__fn_dyn1)) );
			#line 198 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return global::StringTools.replace(s1, "\"", "");
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.utils {
	public class TestCaseData_getTestData_200__Fun : global::haxe.lang.Function {
		
		public TestCaseData_getTestData_200__Fun() : base(1, 0) {
		}
		
		
		public static global::hunit.utils.TestCaseData_getTestData_200__Fun __hx_current;
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			#line 200 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			string s2 = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (global::haxe.lang.Runtime.toString(__fn_float1)) : (global::haxe.lang.Runtime.toString(__fn_dyn1)) );
			#line 200 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return global::StringTools.replace(s2, "\"", "");
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.utils {
	public class TestCaseData_sortByDependencies_86__Fun : global::haxe.lang.Function {
		
		public TestCaseData_sortByDependencies_86__Fun() : base(2, 1) {
		}
		
		
		public static global::hunit.utils.TestCaseData_sortByDependencies_86__Fun __hx_current;
		
		public override double __hx_invoke2_f(double __fn_float1, object __fn_dyn1, double __fn_float2, object __fn_dyn2) {
			#line 86 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			object b = ( (( __fn_dyn2 == global::haxe.lang.Runtime.undefined )) ? (((object) (__fn_float2) )) : (((object) (__fn_dyn2) )) );
			#line 86 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			object a = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((object) (__fn_float1) )) : (((object) (__fn_dyn1) )) );
			#line 86 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx"
			return ((double) (( ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::haxe.lang.Runtime.getField(a, "depends", 1617242503, true)) ))) ).length - ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::haxe.lang.Runtime.getField(b, "depends", 1617242503, true)) ))) ).length )) );
		}
		#line default
		
	}
}


