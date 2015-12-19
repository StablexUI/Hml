
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	public class NotEqualMatch<T> : global::hunit.match.EqualMatch<T>, global::hunit.match.NotEqualMatch {
		
		public NotEqualMatch(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public NotEqualMatch(T @value, global::hunit.match.Match<T> previous, global::hunit.match.MatchChainLogic chainLogic) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 28 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			global::hunit.match.NotEqualMatch<object>.__hx_ctor_hunit_match_NotEqualMatch<T>(this, @value, previous, chainLogic);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_NotEqualMatch<T_c>(global::hunit.match.NotEqualMatch<T_c> __temp_me102, T_c @value, global::hunit.match.Match<T_c> previous, global::hunit.match.MatchChainLogic chainLogic) {
			#line 28 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			global::hunit.match.EqualMatch<object>.__hx_ctor_hunit_match_EqualMatch<T_c>(__temp_me102, @value, previous, chainLogic);
		}
		#line default
		
		public static new object __hx_cast<T_c_c>(global::hunit.match.NotEqualMatch me) {
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			return ( (( me != null )) ? (me.hunit_match_NotEqualMatch_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			return new global::hunit.match.NotEqualMatch<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
				return new global::hunit.match.NotEqualMatch<object>(arr[0], ((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (arr[1]) ))) ), ((global::hunit.match.MatchChainLogic) (arr[2]) ));
			}
			#line default
		}
		
		
		public virtual object hunit_match_NotEqualMatch_cast<T_c>() {
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
				return this;
			}
			
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			global::hunit.match.NotEqualMatch<T_c> new_me = new global::hunit.match.NotEqualMatch<T_c>(global::haxe.lang.EmptyObject.EMPTY);
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			int i = 0;
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			while (( i < fields.length )) {
				#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			return new_me;
		}
		#line default
		
		public override object hunit_match_Match_cast<T_c>() {
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			return this.hunit_match_NotEqualMatch_cast<T_c>();
		}
		#line default
		
		public virtual object hunit_match_EqualMatch_cast<T_c>() {
			#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			return this.hunit_match_NotEqualMatch_cast<T_c>();
		}
		#line default
		
		public override bool checkMatch(object @value) {
			unchecked {
				#line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
				try {
					#line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
					{
						#line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
						global::ValueType _g = global::Type.@typeof(this.@value);
						#line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
						switch (_g.index) {
							case 5:
							{
								#line 24 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
								return  ! (global::Reflect.compareMethods(this.@value, @value)) ;
							}
							
							
							case 7:
							{
								#line 25 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
								return  ! (global::Type.enumEq<T>(this.@value, global::haxe.lang.Runtime.genericCast<T>(@value))) ;
							}
							
							
							default:
							{
								#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
								return ( ! (global::haxe.lang.Runtime.eq(this.@value, @value)) );
							}
							
						}
						
					}
					
				}
				catch (global::System.Exception __temp_catchallException1){
					#line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
					global::haxe.lang.Exceptions.exception = __temp_catchallException1;
					#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
					object __temp_catchall2 = __temp_catchallException1;
					#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
					if (( __temp_catchall2 is global::haxe.lang.HaxeException )) {
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
						__temp_catchall2 = ((global::haxe.lang.HaxeException) (__temp_catchallException1) ).obj;
					}
					
					#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
					{
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
						object e = __temp_catchall2;
						#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
						return false;
					}
					
				}
				
				
			}
			#line default
		}
		
		
		public override string shortCode() {
			#line 40 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			string code = global::hunit.Utils.shortenString(global::Std.@string(this.@value));
			#line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
			if (global::hunit.Utils.hasToString(this.@value)) {
				#line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
				return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("!=\"", code), "\"");
			}
			else {
				#line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
				return global::haxe.lang.Runtime.concat("!=", code);
			}
			
		}
		#line default
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
				switch (hash) {
					case 310857673:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "shortCode", 310857673)) );
					}
					
					
					case 320031581:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "checkMatch", 320031581)) );
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx"
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
	[global::haxe.lang.GenericInterface(typeof(global::hunit.match.NotEqualMatch<object>))]
	public interface NotEqualMatch : global::haxe.lang.IHxObject, global::hunit.match.EqualMatch, global::haxe.lang.IGenericObject {
		
		object hunit_match_NotEqualMatch_cast<T_c>();
		
		object hunit_match_EqualMatch_cast<T_c>();
		
	}
}


