
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	public class MatchFailDescription : global::haxe.lang.HxObject {
		
		public MatchFailDescription(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public MatchFailDescription(string expected, string actual) {
			#line 21 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
			global::hunit.match.MatchFailDescription.__hx_ctor_hunit_match_MatchFailDescription(this, expected, actual);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_MatchFailDescription(global::hunit.match.MatchFailDescription __temp_me101, string expected, string actual) {
			#line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
			__temp_me101.expected = expected;
			__temp_me101.actual = actual;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
			return new global::hunit.match.MatchFailDescription(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
				return new global::hunit.match.MatchFailDescription(global::haxe.lang.Runtime.toString(arr[0]), global::haxe.lang.Runtime.toString(arr[1]));
			}
			#line default
		}
		
		
		public string expected;
		
		public string actual;
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
				switch (hash) {
					case 374295182:
					{
						#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						this.actual = global::haxe.lang.Runtime.toString(@value);
						#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						return @value;
					}
					
					
					case 1076899448:
					{
						#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						this.expected = global::haxe.lang.Runtime.toString(@value);
						#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						return @value;
					}
					
					
					default:
					{
						#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
				switch (hash) {
					case 374295182:
					{
						#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						return this.actual;
					}
					
					
					case 1076899448:
					{
						#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						return this.expected;
					}
					
					
					default:
					{
						#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
			baseArr.push("actual");
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
			baseArr.push("expected");
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
			{
				#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


