
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit._Match {
	public sealed class Match_Impl_ {
		
		public static object fromValue<T>(global::haxe.lang.Null<T> @value) {
			#line 24 "/home/alex/Work/HaXe/hunit/src/hunit/Match.hx"
			if ( ! (@value.hasValue) ) {
				#line 25 "/home/alex/Work/HaXe/hunit/src/hunit/Match.hx"
				return global::hunit._Match.Match_Impl_._new<object>(new global::hunit.match.AnyMatch<T>(null, null));
			}
			else {
				#line 27 "/home/alex/Work/HaXe/hunit/src/hunit/Match.hx"
				return global::hunit._Match.Match_Impl_._new<object>((@value).toDynamic());
			}
			
		}
		#line default
		
		public static object _new<T>(object @value) {
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/Match.hx"
			object this1 = null;
			if (( @value is global::hunit.match.Match )) {
				#line 38 "/home/alex/Work/HaXe/hunit/src/hunit/Match.hx"
				this1 = @value;
			}
			else {
				#line 40 "/home/alex/Work/HaXe/hunit/src/hunit/Match.hx"
				this1 = new global::hunit.match.EqualMatch<object>(@value, ((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (null) ))) ), null);
			}
			
			#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/Match.hx"
			return ((object) (this1) );
		}
		#line default
		
	}
}


