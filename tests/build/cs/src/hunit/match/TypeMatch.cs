
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	public class TypeMatch<T> : global::hunit.match.Match<T>, global::hunit.match.TypeMatch {
		
		public TypeMatch(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public TypeMatch(global::System.Type type, global::hunit.match.Match<T> previous, global::hunit.match.MatchChainLogic chainLogic) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 24 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			global::hunit.match.TypeMatch<object>.__hx_ctor_hunit_match_TypeMatch<T>(this, type, previous, chainLogic);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_TypeMatch<T_c>(global::hunit.match.TypeMatch<T_c> __temp_me105, global::System.Type type, global::hunit.match.Match<T_c> previous, global::hunit.match.MatchChainLogic chainLogic) {
			#line 24 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			global::hunit.match.Match<object>.__hx_ctor_hunit_match_Match<T_c>(__temp_me105, previous, chainLogic);
			__temp_me105.type = type;
		}
		#line default
		
		public static new object __hx_cast<T_c_c>(global::hunit.match.TypeMatch me) {
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			return ( (( me != null )) ? (me.hunit_match_TypeMatch_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			return new global::hunit.match.TypeMatch<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
				return new global::hunit.match.TypeMatch<object>(((global::System.Type) (arr[0]) ), ((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (arr[1]) ))) ), ((global::hunit.match.MatchChainLogic) (arr[2]) ));
			}
			#line default
		}
		
		
		public virtual object hunit_match_TypeMatch_cast<T_c>() {
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
				return this;
			}
			
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			global::hunit.match.TypeMatch<T_c> new_me = new global::hunit.match.TypeMatch<T_c>(global::haxe.lang.EmptyObject.EMPTY);
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			int i = 0;
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			while (( i < fields.length )) {
				#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			return new_me;
		}
		#line default
		
		public virtual object hunit_match_Match_cast<T_c>() {
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			return this.hunit_match_TypeMatch_cast<T_c>();
		}
		#line default
		
		public global::System.Type type;
		
		public override bool checkMatch(object @value) {
			#line 34 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			return ( ( @value != null ) && global::Std.@is(@value, this.type) );
		}
		#line default
		
		public override string shortCode() {
			#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Class<", global::Type.getClassName(this.type)), ">");
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
				switch (hash) {
					case 1292432058:
					{
						#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						this.type = ((global::System.Type) (@value) );
						#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						return @value;
					}
					
					
					default:
					{
						#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
				switch (hash) {
					case 310857673:
					{
						#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "shortCode", 310857673)) );
					}
					
					
					case 320031581:
					{
						#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "checkMatch", 320031581)) );
					}
					
					
					case 1292432058:
					{
						#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						return this.type;
					}
					
					
					default:
					{
						#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			baseArr.push("type");
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
			{
				#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	[global::haxe.lang.GenericInterface(typeof(global::hunit.match.TypeMatch<object>))]
	public interface TypeMatch : global::haxe.lang.IHxObject, global::hunit.match.Match, global::haxe.lang.IGenericObject {
		
		object hunit_match_TypeMatch_cast<T_c>();
		
		object hunit_match_Match_cast<T_c>();
		
	}
}


