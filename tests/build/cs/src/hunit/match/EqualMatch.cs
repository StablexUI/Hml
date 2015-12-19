
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	public class EqualMatch<T> : global::hunit.match.Match<T>, global::hunit.match.EqualMatch {
		
		public EqualMatch(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public EqualMatch(T @value, global::hunit.match.Match<T> previous, global::hunit.match.MatchChainLogic chainLogic) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 30 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			global::hunit.match.EqualMatch<object>.__hx_ctor_hunit_match_EqualMatch<T>(this, @value, previous, chainLogic);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_EqualMatch<T_c>(global::hunit.match.EqualMatch<T_c> __temp_me98, T_c @value, global::hunit.match.Match<T_c> previous, global::hunit.match.MatchChainLogic chainLogic) {
			#line 30 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			global::hunit.match.Match<object>.__hx_ctor_hunit_match_Match<T_c>(__temp_me98, previous, chainLogic);
			__temp_me98.@value = @value;
		}
		#line default
		
		public static new object __hx_cast<T_c_c>(global::hunit.match.EqualMatch me) {
			#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			return ( (( me != null )) ? (me.hunit_match_EqualMatch_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			return new global::hunit.match.EqualMatch<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				return new global::hunit.match.EqualMatch<object>(arr[0], ((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (arr[1]) ))) ), ((global::hunit.match.MatchChainLogic) (arr[2]) ));
			}
			#line default
		}
		
		
		public virtual object hunit_match_EqualMatch_cast<T_c>() {
			#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				return this;
			}
			
			#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			global::hunit.match.EqualMatch<T_c> new_me = new global::hunit.match.EqualMatch<T_c>(global::haxe.lang.EmptyObject.EMPTY);
			#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			int i = 0;
			#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			while (( i < fields.length )) {
				#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			return new_me;
		}
		#line default
		
		public virtual object hunit_match_Match_cast<T_c>() {
			#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			return this.hunit_match_EqualMatch_cast<T_c>();
		}
		#line default
		
		public T @value;
		
		public override bool checkMatch(object @value) {
			unchecked {
				#line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				try {
					#line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					{
						#line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						global::ValueType _g = global::Type.@typeof(this.@value);
						#line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						switch (_g.index) {
							case 5:
							{
								#line 43 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
								return global::Reflect.compareMethods(this.@value, @value);
							}
							
							
							case 7:
							{
								#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
								return global::Type.enumEq<T>(this.@value, global::haxe.lang.Runtime.genericCast<T>(@value));
							}
							
							
							default:
							{
								#line 45 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
								return global::haxe.lang.Runtime.eq(this.@value, @value);
							}
							
						}
						
					}
					
				}
				catch (global::System.Exception __temp_catchallException1){
					#line 42 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					global::haxe.lang.Exceptions.exception = __temp_catchallException1;
					#line 48 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					object __temp_catchall2 = __temp_catchallException1;
					#line 48 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					if (( __temp_catchall2 is global::haxe.lang.HaxeException )) {
						#line 48 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						__temp_catchall2 = ((global::haxe.lang.HaxeException) (__temp_catchallException1) ).obj;
					}
					
					#line 48 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
					{
						#line 48 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						object e = __temp_catchall2;
						#line 48 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return false;
					}
					
				}
				
				
			}
			#line default
		}
		
		
		public override string shortCode() {
			#line 60 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			string code = global::hunit.Utils.shortenString(global::hunit.Utils.safeToString(this.@value));
			#line 62 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			if (global::hunit.Utils.hasToString(this.@value)) {
				#line 62 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("=\"", code), "\"");
			}
			else {
				#line 62 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				return global::haxe.lang.Runtime.concat("=", code);
			}
			
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				switch (hash) {
					case 834174833:
					{
						#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						this.@value = global::haxe.lang.Runtime.genericCast<T>(((object) (@value) ));
						#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(((object) (@value) ))) );
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				switch (hash) {
					case 834174833:
					{
						#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						this.@value = global::haxe.lang.Runtime.genericCast<T>(@value);
						#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return @value;
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				switch (hash) {
					case 310857673:
					{
						#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "shortCode", 310857673)) );
					}
					
					
					case 320031581:
					{
						#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "checkMatch", 320031581)) );
					}
					
					
					case 834174833:
					{
						#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return this.@value;
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				switch (hash) {
					case 834174833:
					{
						#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(((object) (this.@value) ))) );
					}
					
					
					default:
					{
						#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			baseArr.push("value");
			#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
			{
				#line 18 "/home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	[global::haxe.lang.GenericInterface(typeof(global::hunit.match.EqualMatch<object>))]
	public interface EqualMatch : global::haxe.lang.IHxObject, global::hunit.match.Match, global::haxe.lang.IGenericObject {
		
		object hunit_match_EqualMatch_cast<T_c>();
		
		object hunit_match_Match_cast<T_c>();
		
	}
}


