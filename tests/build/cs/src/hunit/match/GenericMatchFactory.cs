
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	public class GenericMatchFactory<T> : global::haxe.lang.HxObject, global::hunit.match.GenericMatchFactory {
		
		public GenericMatchFactory(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public GenericMatchFactory(global::hunit.match.Match<T> previous, global::hunit.match.MatchChainLogic chainLogic) {
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			global::hunit.match.GenericMatchFactory<object>.__hx_ctor_hunit_match_GenericMatchFactory<T>(this, previous, chainLogic);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_GenericMatchFactory<T_c>(global::hunit.match.GenericMatchFactory<T_c> __temp_me99, global::hunit.match.Match<T_c> previous, global::hunit.match.MatchChainLogic chainLogic) {
			#line 28 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			__temp_me99.previous = previous;
			__temp_me99.chainLogic = chainLogic;
		}
		#line default
		
		public static object __hx_cast<T_c_c>(global::hunit.match.GenericMatchFactory me) {
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			return ( (( me != null )) ? (me.hunit_match_GenericMatchFactory_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			return new global::hunit.match.GenericMatchFactory<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
				return new global::hunit.match.GenericMatchFactory<object>(((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (arr[0]) ))) ), ((global::hunit.match.MatchChainLogic) (arr[1]) ));
			}
			#line default
		}
		
		
		public virtual object hunit_match_GenericMatchFactory_cast<T_c>() {
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
				return this;
			}
			
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			global::hunit.match.GenericMatchFactory<T_c> new_me = new global::hunit.match.GenericMatchFactory<T_c>(global::haxe.lang.EmptyObject.EMPTY);
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			int i = 0;
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			while (( i < fields.length )) {
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			return new_me;
		}
		#line default
		
		public global::hunit.match.Match<T> previous;
		
		public global::hunit.match.MatchChainLogic chainLogic;
		
		public virtual global::hunit.match.AnyMatch<T> any() {
			#line 39 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			return new global::hunit.match.AnyMatch<T>(this.previous, this.chainLogic);
		}
		#line default
		
		public virtual global::hunit.match.TypeMatch<T> type(global::System.Type type) {
			#line 49 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			return new global::hunit.match.TypeMatch<T>(type, this.previous, this.chainLogic);
		}
		#line default
		
		public virtual global::hunit.match.ERegMatch<T> regexp(global::EReg pattern) {
			#line 59 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			return new global::hunit.match.ERegMatch<T>(pattern, null, null);
		}
		#line default
		
		public virtual global::hunit.match.SimilarMatch<T> similar(object pattern) {
			#line 71 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			return new global::hunit.match.SimilarMatch<T>(pattern, null, null, null, null);
		}
		#line default
		
		public virtual global::hunit.match.EqualMatch<T> equal(T @value) {
			#line 81 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			return new global::hunit.match.EqualMatch<T>(@value, this.previous, this.chainLogic);
		}
		#line default
		
		public virtual global::hunit.match.Match<T> notEqual(T @value) {
			#line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			return new global::hunit.match.NotEqualMatch<T>(@value, this.previous, this.chainLogic);
		}
		#line default
		
		public virtual global::hunit.match.CallbackMatch<T> callback(global::haxe.lang.Function verify) {
			#line 101 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			return new global::hunit.match.CallbackMatch<T>(verify, null, null);
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
				switch (hash) {
					case 1353511069:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						this.chainLogic = ((global::hunit.match.MatchChainLogic) (@value) );
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return @value;
					}
					
					
					case 598785079:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						this.previous = ((global::hunit.match.Match<T>) (global::hunit.match.Match<object>.__hx_cast<T>(((global::hunit.match.Match) (@value) ))) );
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return @value;
					}
					
					
					default:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
				switch (hash) {
					case 2131139013:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "callback", 2131139013)) );
					}
					
					
					case 43098529:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "notEqual", 43098529)) );
					}
					
					
					case 1921175476:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "equal", 1921175476)) );
					}
					
					
					case 839132715:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "similar", 839132715)) );
					}
					
					
					case 9027529:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "regexp", 9027529)) );
					}
					
					
					case 1292432058:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "type", 1292432058)) );
					}
					
					
					case 4848364:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "any", 4848364)) );
					}
					
					
					case 1353511069:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.chainLogic;
					}
					
					
					case 598785079:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.previous;
					}
					
					
					default:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
				switch (hash) {
					case 2131139013:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.callback(((global::haxe.lang.Function) (dynargs[0]) ));
					}
					
					
					case 43098529:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.notEqual(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]));
					}
					
					
					case 1921175476:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.equal(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]));
					}
					
					
					case 839132715:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.similar(dynargs[0]);
					}
					
					
					case 9027529:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.regexp(((global::EReg) (dynargs[0]) ));
					}
					
					
					case 1292432058:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.type(((global::System.Type) (dynargs[0]) ));
					}
					
					
					case 4848364:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return this.any();
					}
					
					
					default:
					{
						#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			baseArr.push("chainLogic");
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			baseArr.push("previous");
			#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
			{
				#line 14 "/home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	[global::haxe.lang.GenericInterface(typeof(global::hunit.match.GenericMatchFactory<object>))]
	public interface GenericMatchFactory : global::haxe.lang.IHxObject, global::haxe.lang.IGenericObject {
		
		object hunit_match_GenericMatchFactory_cast<T_c>();
		
	}
}


