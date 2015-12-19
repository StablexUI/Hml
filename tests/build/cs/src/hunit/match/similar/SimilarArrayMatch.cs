
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match.similar {
	public class SimilarArrayMatch<T> : global::hunit.match.Match<T>, global::hunit.match.similar.SimilarArrayMatch {
		
		public SimilarArrayMatch(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public SimilarArrayMatch(global::hunit.match.SimilarMatch<T> root, global::hunit.match.ObjectCache processedObjects, global::Array expected, global::hunit.match.Match<T> previous, global::hunit.match.MatchChainLogic chainLogic) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 38 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			global::hunit.match.similar.SimilarArrayMatch<object>.__hx_ctor_hunit_match_similar_SimilarArrayMatch<T>(this, root, processedObjects, expected, previous, chainLogic);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_similar_SimilarArrayMatch<T_c>(global::hunit.match.similar.SimilarArrayMatch<T_c> __temp_me106, global::hunit.match.SimilarMatch<T_c> root, global::hunit.match.ObjectCache processedObjects, global::Array expected, global::hunit.match.Match<T_c> previous, global::hunit.match.MatchChainLogic chainLogic) {
			unchecked {
				#line 34 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				if ( ! (( expected is global::Array )) ) {
					#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.InvalidTestException("`expected` value should be an array.", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"new", "hunit.match.similar.SimilarArrayMatch", "SimilarArrayMatch.hx"}, new int[]{1981972957}, new double[]{((double) (35) )})));
				}
				
				#line 38 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				global::hunit.match.Match<object>.__hx_ctor_hunit_match_Match<T_c>(__temp_me106, previous, chainLogic);
				#line 40 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				__temp_me106.root = root;
				__temp_me106.expected = __temp_me106.getArrayMatchMap(expected, processedObjects);
			}
			#line default
		}
		
		
		public static new object __hx_cast<T_c_c>(global::hunit.match.similar.SimilarArrayMatch me) {
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			return ( (( me != null )) ? (me.hunit_match_similar_SimilarArrayMatch_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			return new global::hunit.match.similar.SimilarArrayMatch<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				return new global::hunit.match.similar.SimilarArrayMatch<object>(((global::hunit.match.SimilarMatch<object>) (global::hunit.match.SimilarMatch<object>.__hx_cast<object>(((global::hunit.match.SimilarMatch) (arr[0]) ))) ), ((global::hunit.match.ObjectCache) (arr[1]) ), ((global::Array) (arr[2]) ), ((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (arr[3]) ))) ), ((global::hunit.match.MatchChainLogic) (arr[4]) ));
			}
			#line default
		}
		
		
		public virtual object hunit_match_similar_SimilarArrayMatch_cast<T_c>() {
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				return this;
			}
			
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			global::hunit.match.similar.SimilarArrayMatch<T_c> new_me = new global::hunit.match.similar.SimilarArrayMatch<T_c>(global::haxe.lang.EmptyObject.EMPTY);
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			int i = 0;
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			while (( i < fields.length )) {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			return new_me;
		}
		#line default
		
		public virtual object hunit_match_Match_cast<T_c>() {
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			return this.hunit_match_similar_SimilarArrayMatch_cast<T_c>();
		}
		#line default
		
		public global::Array<object> expected;
		
		public global::hunit.match.SimilarMatch<T> root;
		
		public override bool checkMatch(object @value) {
			#line 51 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			if ( ! (( @value is global::Array )) ) {
				#line 51 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				return false;
			}
			
			#line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			global::Array value1 = ((global::Array) (@value) );
			if (( this.expected.length != ((int) (global::haxe.lang.Runtime.getField_f(value1, "length", 520590566, true)) ) )) {
				#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				return false;
			}
			
			#line 56 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			object actual = null;
			global::hunit.match.Match match = null;
			{
				#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				int _g1 = 0;
				#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				int _g = this.expected.length;
				#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				while (( _g1 < _g )) {
					#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					int i = _g1++;
					actual = value1[i];
					match = ((global::hunit.match.Match) (this.expected[i]) );
					#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					if (( match is global::hunit.match.SimilarMatch )) {
						#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						if (( ((int) (global::haxe.lang.Runtime.toInt(global::haxe.lang.Runtime.callField(this.root.checkedObjects, "indexOf", 1623148745, new global::Array<object>(new object[]{actual, (default(global::haxe.lang.Null<int>)).toDynamic()})))) ) >= 0 )) {
							#line 65 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
							continue;
						}
						
					}
					
					#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					if ( ! (match.match(actual)) ) {
						#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return false;
					}
					
				}
				
			}
			
			#line 72 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			return true;
		}
		#line default
		
		public override string shortCode() {
			unchecked {
				#line 82 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				global::Array<object> parts = this.expected.map<object>(( (( global::hunit.match.similar.SimilarArrayMatch_shortCode_82__Fun.__hx_current != null )) ? (global::hunit.match.similar.SimilarArrayMatch_shortCode_82__Fun.__hx_current) : (global::hunit.match.similar.SimilarArrayMatch_shortCode_82__Fun.__hx_current = ((global::hunit.match.similar.SimilarArrayMatch_shortCode_82__Fun) (new global::hunit.match.similar.SimilarArrayMatch_shortCode_82__Fun()) )) ));
				string str = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("[", parts.@join(", ")), "]");
				#line 85 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				if (( str.Length == global::hunit.Utils.shortenString(str).Length )) {
					#line 86 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					return str;
				}
				else {
					#line 88 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					str = global::hunit.Utils.shortenString(str);
					return global::haxe.lang.Runtime.concat(global::haxe.lang.StringExt.substr(str, 0, new global::haxe.lang.Null<int>(( str.Length - 6 ), true)), "<...>]");
				}
				
			}
			#line default
		}
		
		
		public virtual global::Array<object> getArrayMatchMap(global::Array expected, global::hunit.match.ObjectCache processedObjects) {
			#line 100 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			global::Array<object> matchers = new global::Array<object>(new object[]{});
			#line 102 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			{
				#line 102 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				int _g1 = 0;
				#line 102 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				int _g = ((int) (global::haxe.lang.Runtime.getField_f(expected, "length", 520590566, true)) );
				#line 102 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				while (( _g1 < _g )) {
					#line 102 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
					int i = _g1++;
					matchers.push(this.root.createMatcherForValue(expected[i], processedObjects));
				}
				
			}
			
			#line 106 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			return matchers;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				switch (hash) {
					case 1269755426:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						this.root = ((global::hunit.match.SimilarMatch<T>) (global::hunit.match.SimilarMatch<object>.__hx_cast<T>(((global::hunit.match.SimilarMatch) (@value) ))) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return @value;
					}
					
					
					case 1076899448:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						this.expected = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return @value;
					}
					
					
					default:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				switch (hash) {
					case 797271706:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getArrayMatchMap", 797271706)) );
					}
					
					
					case 310857673:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "shortCode", 310857673)) );
					}
					
					
					case 320031581:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "checkMatch", 320031581)) );
					}
					
					
					case 1269755426:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return this.root;
					}
					
					
					case 1076899448:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return this.expected;
					}
					
					
					default:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				switch (hash) {
					case 320031581:
					case 310857673:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return global::haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					
					case 797271706:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return this.getArrayMatchMap(((global::Array) (dynargs[0]) ), ((global::hunit.match.ObjectCache) (dynargs[1]) ));
					}
					
					
					default:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			baseArr.push("root");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			baseArr.push("expected");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			{
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match.similar {
	public class SimilarArrayMatch_shortCode_82__Fun : global::haxe.lang.Function {
		
		public SimilarArrayMatch_shortCode_82__Fun() : base(1, 0) {
		}
		
		
		public static global::hunit.match.similar.SimilarArrayMatch_shortCode_82__Fun __hx_current;
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			#line 82 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			global::hunit.match.Match m = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((global::hunit.match.Match) (((object) (__fn_float1) )) )) : (((global::hunit.match.Match) (__fn_dyn1) )) );
			#line 82 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx"
			return m.toString();
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match.similar {
	[global::haxe.lang.GenericInterface(typeof(global::hunit.match.similar.SimilarArrayMatch<object>))]
	public interface SimilarArrayMatch : global::haxe.lang.IHxObject, global::hunit.match.Match, global::haxe.lang.IGenericObject {
		
		object hunit_match_similar_SimilarArrayMatch_cast<T_c>();
		
		object hunit_match_Match_cast<T_c>();
		
		global::Array<object> getArrayMatchMap(global::Array expected, global::hunit.match.ObjectCache processedObjects);
		
	}
}


