
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	public class ERegMatch<T> : global::hunit.match.Match<T>, global::hunit.match.ERegMatch {
		
		public ERegMatch(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public ERegMatch(global::EReg regexp, global::hunit.match.Match<T> previous, global::hunit.match.MatchChainLogic chainLogic) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 27 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			global::hunit.match.ERegMatch<object>.__hx_ctor_hunit_match_ERegMatch<T>(this, regexp, previous, chainLogic);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_ERegMatch<T_c>(global::hunit.match.ERegMatch<T_c> __temp_me97, global::EReg regexp, global::hunit.match.Match<T_c> previous, global::hunit.match.MatchChainLogic chainLogic) {
			#line 27 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			global::hunit.match.Match<object>.__hx_ctor_hunit_match_Match<T_c>(__temp_me97, previous, chainLogic);
			__temp_me97.regexp = regexp;
		}
		#line default
		
		public static new object __hx_cast<T_c_c>(global::hunit.match.ERegMatch me) {
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			return ( (( me != null )) ? (me.hunit_match_ERegMatch_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			return new global::hunit.match.ERegMatch<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
				return new global::hunit.match.ERegMatch<object>(((global::EReg) (arr[0]) ), ((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (arr[1]) ))) ), ((global::hunit.match.MatchChainLogic) (arr[2]) ));
			}
			#line default
		}
		
		
		public virtual object hunit_match_ERegMatch_cast<T_c>() {
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
				return this;
			}
			
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			global::hunit.match.ERegMatch<T_c> new_me = new global::hunit.match.ERegMatch<T_c>(global::haxe.lang.EmptyObject.EMPTY);
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			int i = 0;
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			while (( i < fields.length )) {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			return new_me;
		}
		#line default
		
		public virtual object hunit_match_Match_cast<T_c>() {
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			return this.hunit_match_ERegMatch_cast<T_c>();
		}
		#line default
		
		public global::EReg regexp;
		
		public override bool checkMatch(object @value) {
			#line 38 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			return this.regexp.match(global::Std.@string(@value));
		}
		#line default
		
		public override string shortCode() {
			#line 48 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			return this.extractPattern();
		}
		#line default
		
		public virtual string extractPattern() {
			#line 61 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			string pattern = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("~/", global::Std.@string(global::Reflect.getProperty(this.regexp, "regex"))), "/");
			#line 68 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			return pattern;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
				switch (hash) {
					case 9027529:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						this.regexp = ((global::EReg) (@value) );
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return @value;
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
				switch (hash) {
					case 1738347279:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "extractPattern", 1738347279)) );
					}
					
					
					case 310857673:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "shortCode", 310857673)) );
					}
					
					
					case 320031581:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "checkMatch", 320031581)) );
					}
					
					
					case 9027529:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return this.regexp;
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
				switch (hash) {
					case 320031581:
					case 310857673:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return global::haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					
					case 1738347279:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return this.extractPattern();
					}
					
					
					default:
					{
						#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			baseArr.push("regexp");
			#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
			{
				#line 15 "/home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	[global::haxe.lang.GenericInterface(typeof(global::hunit.match.ERegMatch<object>))]
	public interface ERegMatch : global::haxe.lang.IHxObject, global::hunit.match.Match, global::haxe.lang.IGenericObject {
		
		object hunit_match_ERegMatch_cast<T_c>();
		
		object hunit_match_Match_cast<T_c>();
		
		string extractPattern();
		
	}
}


