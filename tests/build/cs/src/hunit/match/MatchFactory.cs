
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	public class MatchFactory : global::haxe.lang.HxObject {
		
		public MatchFactory(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public MatchFactory() {
			#line 23 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			global::hunit.match.MatchFactory.__hx_ctor_hunit_match_MatchFactory(this);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_MatchFactory(global::hunit.match.MatchFactory __temp_me100) {
		}
		
		
		public static new object __hx_createEmpty() {
			#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			return new global::hunit.match.MatchFactory(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			return new global::hunit.match.MatchFactory();
		}
		#line default
		
		public virtual global::hunit.match.AnyMatch<T> any<T>() {
			#line 34 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			return new global::hunit.match.AnyMatch<T>(null, null);
		}
		#line default
		
		public virtual global::hunit.match.TypeMatch<T> type<T>(global::System.Type type) {
			#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			return new global::hunit.match.TypeMatch<T>(type, null, null);
		}
		#line default
		
		public virtual global::hunit.match.ERegMatch<object> regexp(global::EReg pattern) {
			#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			return new global::hunit.match.ERegMatch<object>(pattern, null, null);
		}
		#line default
		
		public virtual global::hunit.match.SimilarMatch similar(object pattern) {
			#line 66 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			return new global::hunit.match.SimilarMatch<object>(pattern, ((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (null) ))) ), null, ((global::hunit.match.SimilarMatch<object>) (global::hunit.match.SimilarMatch<object>.__hx_cast<object>(((global::hunit.match.SimilarMatch) (null) ))) ), null);
		}
		#line default
		
		public virtual global::hunit.match.EqualMatch<T> equal<T>(T @value) {
			#line 76 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			return new global::hunit.match.EqualMatch<T>(@value, null, null);
		}
		#line default
		
		public virtual global::hunit.match.NotEqualMatch<T> notEqual<T>(T @value) {
			#line 86 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			return new global::hunit.match.NotEqualMatch<T>(@value, null, null);
		}
		#line default
		
		public virtual global::hunit.match.CallbackMatch<T> callback<T>(global::haxe.lang.Function verify) {
			#line 96 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
			return new global::hunit.match.CallbackMatch<T>(verify, null, null);
		}
		#line default
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
				switch (hash) {
					case 2131139013:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "callback", 2131139013)) );
					}
					
					
					case 43098529:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "notEqual", 43098529)) );
					}
					
					
					case 1921175476:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "equal", 1921175476)) );
					}
					
					
					case 839132715:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "similar", 839132715)) );
					}
					
					
					case 9027529:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "regexp", 9027529)) );
					}
					
					
					case 1292432058:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "type", 1292432058)) );
					}
					
					
					case 4848364:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "any", 4848364)) );
					}
					
					
					default:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
				switch (hash) {
					case 2131139013:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return this.callback<object>(((global::haxe.lang.Function) (dynargs[0]) ));
					}
					
					
					case 43098529:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return this.notEqual<object>(dynargs[0]);
					}
					
					
					case 1921175476:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return this.equal<object>(dynargs[0]);
					}
					
					
					case 839132715:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return this.similar(dynargs[0]);
					}
					
					
					case 9027529:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return this.regexp(((global::EReg) (dynargs[0]) ));
					}
					
					
					case 1292432058:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return this.type<object>(((global::System.Type) (dynargs[0]) ));
					}
					
					
					case 4848364:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return this.any<object>();
					}
					
					
					default:
					{
						#line 16 "/home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
	}
}


