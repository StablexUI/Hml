
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.utils {
	public class CTypeClassFieldsUtils : global::haxe.lang.HxObject {
		
		static CTypeClassFieldsUtils() {
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
			global::hunit.utils.CTypeClassFieldsUtils.TEST_INDICATOR = "test";
		}
		#line default
		
		public CTypeClassFieldsUtils(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public CTypeClassFieldsUtils() {
			#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
			global::hunit.utils.CTypeClassFieldsUtils.__hx_ctor_hunit_utils_CTypeClassFieldsUtils(this);
		}
		#line default
		
		public static void __hx_ctor_hunit_utils_CTypeClassFieldsUtils(global::hunit.utils.CTypeClassFieldsUtils __temp_me117) {
		}
		
		
		public static string TEST_INDICATOR;
		
		public static bool isTest(object field) {
			#line 23 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
			if (string.Equals(global::haxe.lang.StringExt.substr(global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(field, "name", 1224700491, true)), 0, new global::haxe.lang.Null<int>("test".Length, true)), "test")) {
				#line 24 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
				return true;
			}
			else {
				#line 27 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
				int _g = 0;
				#line 27 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
				global::Array<object> _g1 = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::haxe.lang.Runtime.getField(field, "meta", 1213811397, true)) ))) );
				#line 27 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
				while (( _g < _g1.length )) {
					#line 27 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
					object meta = _g1[_g];
					#line 27 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
					 ++ _g;
					#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
					if (string.Equals(global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(meta, "name", 1224700491, true)), "test")) {
						#line 30 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
						return true;
					}
					
				}
				
			}
			
			#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
			return false;
		}
		#line default
		
		public static bool mIsTest(object field) {
			#line 46 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
			if (string.Equals(global::haxe.lang.StringExt.substr(global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(field, "name", 1224700491, true)), 0, new global::haxe.lang.Null<int>("test".Length, true)), "test")) {
				#line 47 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
				return true;
			}
			else {
				#line 50 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
				return global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(global::haxe.lang.Runtime.getField(field, "meta", 1213811397, true), "has", 5193562, new global::Array<object>(new object[]{"test"})));
			}
			
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
			return new global::hunit.utils.CTypeClassFieldsUtils(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 10 "/home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx"
			return new global::hunit.utils.CTypeClassFieldsUtils();
		}
		#line default
		
	}
}


