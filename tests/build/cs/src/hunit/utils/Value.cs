
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.utils {
	public class Value : global::haxe.lang.ParamEnum {
		
		public Value(int index, object[] @params) : base(index, @params) {
		}
		
		
		public static readonly string[] __hx_constructs = new string[]{"Nothing", "Thing"};
		
		public static readonly global::hunit.utils.Value Nothing = new global::hunit.utils.Value(0, null);
		
		public static global::hunit.utils.Value Thing(object v) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
				return new global::hunit.utils.Value(1, new object[]{v});
			}
			#line default
		}
		
		
		public override string getTag() {
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
			return global::hunit.utils.Value.__hx_constructs[this.index];
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.utils {
	public class ValueTools : global::haxe.lang.HxObject {
		
		public ValueTools(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public ValueTools() {
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
			global::hunit.utils.ValueTools.__hx_ctor_hunit_utils_ValueTools(this);
		}
		#line default
		
		public static void __hx_ctor_hunit_utils_ValueTools(global::hunit.utils.ValueTools __temp_me119) {
		}
		
		
		public static bool hasValue<T>(global::hunit.utils.Value holder) {
			unchecked {
				#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
				if (( holder == null )) {
					#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
					return false;
				}
				
				#line 30 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
				if (( holder != null )) {
					#line 30 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
					switch (holder.index) {
						case 0:
						{
							#line 31 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
							return false;
						}
						
						
						case 1:
						{
							#line 32 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
							return true;
						}
						
						
					}
					
				}
				
				#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
				return false;
			}
			#line default
		}
		
		
		public static T getValue<T>(global::hunit.utils.Value holder) {
			unchecked {
				#line 45 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
				if (( holder == null )) {
					#line 46 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::Exception("No value here", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"getValue", "hunit.utils.ValueTools", "Value.hx"}, new int[]{1981972957}, new double[]{((double) (46) )})));
				}
				
				#line 49 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
				if (( holder != null )) {
					#line 49 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
					switch (holder.index) {
						case 0:
						{
							#line 50 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
							throw global::haxe.lang.HaxeException.wrap(new global::Exception("No value here", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"getValue", "hunit.utils.ValueTools", "Value.hx"}, new int[]{1981972957}, new double[]{((double) (50) )})));
						}
						
						
						case 1:
						{
							#line 49 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
							T v = global::haxe.lang.Runtime.genericCast<T>(holder.@params[0]);
							#line 51 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
							return v;
						}
						
						
					}
					
				}
				
				#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
				throw global::haxe.lang.HaxeException.wrap(new global::Exception("No value here", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"getValue", "hunit.utils.ValueTools", "Value.hx"}, new int[]{1981972957}, new double[]{((double) (54) )})));
			}
			#line default
		}
		
		
		public static new object __hx_createEmpty() {
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
			return new global::hunit.utils.ValueTools(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx"
			return new global::hunit.utils.ValueTools();
		}
		#line default
		
	}
}


