
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	public class AnyMatch<T> : global::hunit.match.Match<T>, global::hunit.match.AnyMatch {
		
		public AnyMatch(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public AnyMatch(global::hunit.match.Match<T> previous, global::hunit.match.MatchChainLogic chainLogic) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 45 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			global::hunit.match.AnyMatch<object>.__hx_ctor_hunit_match_AnyMatch<T>(this, previous, chainLogic);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_AnyMatch<T_c>(global::hunit.match.AnyMatch<T_c> __temp_me95, global::hunit.match.Match<T_c> previous, global::hunit.match.MatchChainLogic chainLogic) {
			#line 45 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			global::hunit.match.Match<object>.__hx_ctor_hunit_match_Match<T_c>(__temp_me95, previous, chainLogic);
		}
		#line default
		
		public static new object __hx_cast<T_c_c>(global::hunit.match.AnyMatch me) {
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
			return ( (( me != null )) ? (me.hunit_match_AnyMatch_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
			return new global::hunit.match.AnyMatch<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
				return new global::hunit.match.AnyMatch<object>(((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (arr[0]) ))) ), ((global::hunit.match.MatchChainLogic) (arr[1]) ));
			}
			#line default
		}
		
		
		public virtual object hunit_match_AnyMatch_cast<T_c>() {
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
				return this;
			}
			
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
			global::hunit.match.AnyMatch<T_c> new_me = new global::hunit.match.AnyMatch<T_c>(global::haxe.lang.EmptyObject.EMPTY);
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
			int i = 0;
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
			while (( i < fields.length )) {
				#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
			return new_me;
		}
		#line default
		
		public virtual object hunit_match_Match_cast<T_c>() {
			#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
			return this.hunit_match_AnyMatch_cast<T_c>();
		}
		#line default
		
		public override bool checkMatch(object @value) {
			#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
			return true;
		}
		#line default
		
		public override string shortCode() {
			#line 28 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
			return "ANY";
		}
		#line default
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
				switch (hash) {
					case 310857673:
					{
						#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "shortCode", 310857673)) );
					}
					
					
					case 320031581:
					{
						#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "checkMatch", 320031581)) );
					}
					
					
					default:
					{
						#line 9 "/home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	[global::haxe.lang.GenericInterface(typeof(global::hunit.match.AnyMatch<object>))]
	public interface AnyMatch : global::haxe.lang.IHxObject, global::hunit.match.Match, global::haxe.lang.IGenericObject {
		
		object hunit_match_AnyMatch_cast<T_c>();
		
		object hunit_match_Match_cast<T_c>();
		
	}
}


