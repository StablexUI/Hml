
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	public class CallbackMatch<T> : global::hunit.match.Match<T>, global::hunit.match.CallbackMatch {
		
		public CallbackMatch(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public CallbackMatch(global::haxe.lang.Function verify, global::hunit.match.Match<T> previous, global::hunit.match.MatchChainLogic chainLogic) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			global::hunit.match.CallbackMatch<object>.__hx_ctor_hunit_match_CallbackMatch<T>(this, verify, previous, chainLogic);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_CallbackMatch<T_c>(global::hunit.match.CallbackMatch<T_c> __temp_me96, global::haxe.lang.Function verify, global::hunit.match.Match<T_c> previous, global::hunit.match.MatchChainLogic chainLogic) {
			#line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			global::hunit.match.Match<object>.__hx_ctor_hunit_match_Match<T_c>(__temp_me96, previous, chainLogic);
			#line 25 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			__temp_me96.verify = verify;
		}
		#line default
		
		public static new object __hx_cast<T_c_c>(global::hunit.match.CallbackMatch me) {
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			return ( (( me != null )) ? (me.hunit_match_CallbackMatch_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			return new global::hunit.match.CallbackMatch<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
				return new global::hunit.match.CallbackMatch<object>(((global::haxe.lang.Function) (arr[0]) ), ((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (arr[1]) ))) ), ((global::hunit.match.MatchChainLogic) (arr[2]) ));
			}
			#line default
		}
		
		
		public virtual object hunit_match_CallbackMatch_cast<T_c>() {
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
				return this;
			}
			
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			global::hunit.match.CallbackMatch<T_c> new_me = new global::hunit.match.CallbackMatch<T_c>(global::haxe.lang.EmptyObject.EMPTY);
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			int i = 0;
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			while (( i < fields.length )) {
				#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			return new_me;
		}
		#line default
		
		public virtual object hunit_match_Match_cast<T_c>() {
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			return this.hunit_match_CallbackMatch_cast<T_c>();
		}
		#line default
		
		public global::haxe.lang.Function verify;
		
		public override bool checkMatch(object @value) {
			#line 34 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			return global::haxe.lang.Runtime.toBool(this.verify.__hx_invoke1_o(default(double), @value));
		}
		#line default
		
		public override string shortCode() {
			#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			return "CALLBACK";
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
				switch (hash) {
					case 557810553:
					{
						#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						this.verify = ((global::haxe.lang.Function) (@value) );
						#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						return @value;
					}
					
					
					default:
					{
						#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
				switch (hash) {
					case 310857673:
					{
						#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "shortCode", 310857673)) );
					}
					
					
					case 320031581:
					{
						#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "checkMatch", 320031581)) );
					}
					
					
					case 557810553:
					{
						#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						return this.verify;
					}
					
					
					default:
					{
						#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			baseArr.push("verify");
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
			{
				#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	[global::haxe.lang.GenericInterface(typeof(global::hunit.match.CallbackMatch<object>))]
	public interface CallbackMatch : global::haxe.lang.IHxObject, global::hunit.match.Match, global::haxe.lang.IGenericObject {
		
		object hunit_match_CallbackMatch_cast<T_c>();
		
		object hunit_match_Match_cast<T_c>();
		
	}
}


