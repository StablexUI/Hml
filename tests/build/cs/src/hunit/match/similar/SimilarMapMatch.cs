
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match.similar {
	public class SimilarMapMatch<T> : global::hunit.match.Match<T>, global::hunit.match.similar.SimilarMapMatch {
		
		public SimilarMapMatch(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public SimilarMapMatch(global::hunit.match.SimilarMatch<T> root, global::hunit.match.ObjectCache processedObjects, object expected, global::hunit.match.Match<T> previous, global::hunit.match.MatchChainLogic chainLogic) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 39 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			global::hunit.match.similar.SimilarMapMatch<object>.__hx_ctor_hunit_match_similar_SimilarMapMatch<T>(this, root, processedObjects, expected, previous, chainLogic);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_similar_SimilarMapMatch<T_c>(global::hunit.match.similar.SimilarMapMatch<T_c> __temp_me107, global::hunit.match.SimilarMatch<T_c> root, global::hunit.match.ObjectCache processedObjects, object expected, global::hunit.match.Match<T_c> previous, global::hunit.match.MatchChainLogic chainLogic) {
			unchecked {
				#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				if ( ! (( expected is global::haxe.IMap )) ) {
					#line 36 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.InvalidTestException("`expected` value should be an `haxe.Constraints.IMap` instance.", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"new", "hunit.match.similar.SimilarMapMatch", "SimilarMapMatch.hx"}, new int[]{1981972957}, new double[]{((double) (36) )})));
				}
				
				#line 39 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				global::hunit.match.Match<object>.__hx_ctor_hunit_match_Match<T_c>(__temp_me107, previous, chainLogic);
				#line 41 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				__temp_me107.root = root;
				__temp_me107.expected = __temp_me107.getMatchMap(((global::haxe.IMap) (expected) ), processedObjects);
			}
			#line default
		}
		
		
		public static new object __hx_cast<T_c_c>(global::hunit.match.similar.SimilarMapMatch me) {
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return ( (( me != null )) ? (me.hunit_match_similar_SimilarMapMatch_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return new global::hunit.match.similar.SimilarMapMatch<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				return new global::hunit.match.similar.SimilarMapMatch<object>(((global::hunit.match.SimilarMatch<object>) (global::hunit.match.SimilarMatch<object>.__hx_cast<object>(((global::hunit.match.SimilarMatch) (arr[0]) ))) ), ((global::hunit.match.ObjectCache) (arr[1]) ), arr[2], ((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (arr[3]) ))) ), ((global::hunit.match.MatchChainLogic) (arr[4]) ));
			}
			#line default
		}
		
		
		public virtual object hunit_match_similar_SimilarMapMatch_cast<T_c>() {
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				return this;
			}
			
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			global::hunit.match.similar.SimilarMapMatch<T_c> new_me = new global::hunit.match.similar.SimilarMapMatch<T_c>(global::haxe.lang.EmptyObject.EMPTY);
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			int i = 0;
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			while (( i < fields.length )) {
				#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return new_me;
		}
		#line default
		
		public virtual object hunit_match_Match_cast<T_c>() {
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return this.hunit_match_similar_SimilarMapMatch_cast<T_c>();
		}
		#line default
		
		public global::hunit.match.similar._SimilarMapMatch.DynamicMatchMap expected;
		
		public global::hunit.match.SimilarMatch<T> root;
		
		public override bool checkMatch(object @value) {
			#line 52 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			if ( ! (( @value is global::haxe.IMap )) ) {
				#line 52 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				return false;
			}
			
			#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			global::haxe.IMap value1 = ((global::haxe.IMap) (@value) );
			#line 56 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			int cnt = 0;
			{
				#line 57 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				object __temp_iterator1 = value1.keys();
				#line 57 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
					#line 57 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					object k = ((object) (global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null)) );
					#line 57 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					cnt++;
				}
				
			}
			
			#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			{
				#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				int _g = 0;
				#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				global::Array _g1 = this.expected.keys();
				#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				while (( global::haxe.lang.Runtime.compare(_g, ((int) (global::haxe.lang.Runtime.getField_f(_g1, "length", 520590566, true)) )) < 0 )) {
					#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					object k1 = _g1[_g];
					#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					 ++ _g;
					#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					cnt--;
				}
				
			}
			
			#line 59 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			if (( cnt != 0 )) {
				#line 59 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				return false;
			}
			
			#line 61 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			object actual = null;
			global::hunit.match.Match match = null;
			{
				#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				int _g2 = 0;
				#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				global::Array _g11 = this.expected.keys();
				#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				while (( global::haxe.lang.Runtime.compare(_g2, ((int) (global::haxe.lang.Runtime.getField_f(_g11, "length", 520590566, true)) )) < 0 )) {
					#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					object key = _g11[_g2];
					#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					 ++ _g2;
					actual = ((object) (global::haxe.lang.Runtime.callField(value1, "get", 5144726, new global::Array<object>(new object[]{key}))) );
					match = this.expected.@get(key);
					#line 68 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if (( match is global::hunit.match.SimilarMatch )) {
						#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						if (( ((int) (global::haxe.lang.Runtime.toInt(global::haxe.lang.Runtime.callField(this.root.checkedObjects, "indexOf", 1623148745, new global::Array<object>(new object[]{actual, (default(global::haxe.lang.Null<int>)).toDynamic()})))) ) >= 0 )) {
							#line 70 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
							continue;
						}
						
					}
					
					#line 74 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					if ( ! (match.match(actual)) ) {
						#line 74 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return false;
					}
					
				}
				
			}
			
			#line 77 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return true;
		}
		#line default
		
		public override string shortCode() {
			unchecked {
				#line 87 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				global::Array<object> parts = new global::Array<object>(new object[]{});
				{
					#line 88 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					int _g = 0;
					#line 88 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					global::Array _g1 = this.expected.keys();
					#line 88 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					while (( global::haxe.lang.Runtime.compare(_g, ((int) (global::haxe.lang.Runtime.getField_f(_g1, "length", 520590566, true)) )) < 0 )) {
						#line 88 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						object key = _g1[_g];
						#line 88 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						 ++ _g;
						parts.push(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::Std.@string(key), "=>"), this.expected.@get(key).toString()));
					}
					
				}
				
				#line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				string str = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("[", parts.@join(", ")), "]");
				#line 93 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				if (( str.Length == global::hunit.Utils.shortenString(str).Length )) {
					#line 94 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					return str;
				}
				else {
					#line 96 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					str = global::hunit.Utils.shortenString(str);
					return global::haxe.lang.Runtime.concat(global::haxe.lang.StringExt.substr(str, 0, new global::haxe.lang.Null<int>(( str.Length - 6 ), true)), "<...>]");
				}
				
			}
			#line default
		}
		
		
		public virtual global::hunit.match.similar._SimilarMapMatch.DynamicMatchMap getMatchMap(global::haxe.IMap expected, global::hunit.match.ObjectCache processedObjects) {
			#line 108 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			global::hunit.match.similar._SimilarMapMatch.DynamicMatchMap map = new global::hunit.match.similar._SimilarMapMatch.DynamicMatchMap();
			#line 110 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			{
				#line 110 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				object __temp_iterator1 = expected.keys();
				#line 110 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
					#line 110 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
					object key = ((object) (global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null)) );
					map.@set(key, this.root.createMatcherForValue(((object) (global::haxe.lang.Runtime.callField(expected, "get", 5144726, new global::Array<object>(new object[]{key}))) ), processedObjects));
				}
				
			}
			
			#line 114 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return map;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				switch (hash) {
					case 1269755426:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						this.root = ((global::hunit.match.SimilarMatch<T>) (global::hunit.match.SimilarMatch<object>.__hx_cast<T>(((global::hunit.match.SimilarMatch) (@value) ))) );
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return @value;
					}
					
					
					case 1076899448:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						this.expected = ((global::hunit.match.similar._SimilarMapMatch.DynamicMatchMap) (@value) );
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return @value;
					}
					
					
					default:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				switch (hash) {
					case 1763349773:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getMatchMap", 1763349773)) );
					}
					
					
					case 310857673:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "shortCode", 310857673)) );
					}
					
					
					case 320031581:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "checkMatch", 320031581)) );
					}
					
					
					case 1269755426:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.root;
					}
					
					
					case 1076899448:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.expected;
					}
					
					
					default:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				switch (hash) {
					case 320031581:
					case 310857673:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return global::haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					
					case 1763349773:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.getMatchMap(((global::haxe.IMap) (dynargs[0]) ), ((global::hunit.match.ObjectCache) (dynargs[1]) ));
					}
					
					
					default:
					{
						#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			baseArr.push("root");
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			baseArr.push("expected");
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			{
				#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match.similar {
	[global::haxe.lang.GenericInterface(typeof(global::hunit.match.similar.SimilarMapMatch<object>))]
	public interface SimilarMapMatch : global::haxe.lang.IHxObject, global::hunit.match.Match, global::haxe.lang.IGenericObject {
		
		object hunit_match_similar_SimilarMapMatch_cast<T_c>();
		
		object hunit_match_Match_cast<T_c>();
		
		global::hunit.match.similar._SimilarMapMatch.DynamicMatchMap getMatchMap(global::haxe.IMap expected, global::hunit.match.ObjectCache processedObjects);
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match.similar._SimilarMapMatch {
	public class DynamicMatchMap : global::haxe.lang.HxObject {
		
		public DynamicMatchMap(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public DynamicMatchMap() {
			#line 131 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			global::hunit.match.similar._SimilarMapMatch.DynamicMatchMap.__hx_ctor_hunit_match_similar__SimilarMapMatch_DynamicMatchMap(this);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_similar__SimilarMapMatch_DynamicMatchMap(global::hunit.match.similar._SimilarMapMatch.DynamicMatchMap __temp_me108) {
			#line 132 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			__temp_me108.keyList = new global::Array<object>(new object[]{});
			__temp_me108.valueList = new global::Array<object>(new object[]{});
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return new global::hunit.match.similar._SimilarMapMatch.DynamicMatchMap(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return new global::hunit.match.similar._SimilarMapMatch.DynamicMatchMap();
		}
		#line default
		
		public global::Array keyList;
		
		public global::Array<object> valueList;
		
		public virtual global::Array keys() {
			#line 136 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return this.keyList;
		}
		#line default
		
		public virtual bool exists(object key) {
			#line 137 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			return ( ((int) (global::haxe.lang.Runtime.toInt(global::haxe.lang.Runtime.callField(this.keyList, "indexOf", 1623148745, new global::Array<object>(new object[]{key, (default(global::haxe.lang.Null<int>)).toDynamic()})))) ) >= 0 );
		}
		#line default
		
		public virtual global::hunit.match.Match @get(object key) {
			#line 138 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			if ( ! (this.exists(key)) ) {
				#line 138 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				return null;
			}
			else {
				#line 138 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				return ((global::hunit.match.Match) (this.valueList[((int) (global::haxe.lang.Runtime.toInt(global::haxe.lang.Runtime.callField(this.keyList, "indexOf", 1623148745, new global::Array<object>(new object[]{key, (default(global::haxe.lang.Null<int>)).toDynamic()})))) )]) );
			}
			
		}
		#line default
		
		public virtual void @set(object key, global::hunit.match.Match @value) {
			#line 141 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			if (( ((int) (global::haxe.lang.Runtime.toInt(global::haxe.lang.Runtime.callField(this.keyList, "indexOf", 1623148745, new global::Array<object>(new object[]{key, (default(global::haxe.lang.Null<int>)).toDynamic()})))) ) >= 0 )) {
				#line 142 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				this.valueList[((int) (global::haxe.lang.Runtime.toInt(global::haxe.lang.Runtime.callField(this.keyList, "indexOf", 1623148745, new global::Array<object>(new object[]{key, (default(global::haxe.lang.Null<int>)).toDynamic()})))) )] = @value;
			}
			else {
				#line 144 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				global::haxe.lang.Runtime.callField(this.keyList, "push", 1247875546, new global::Array<object>(new object[]{key}));
				this.valueList.push(@value);
			}
			
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				switch (hash) {
					case 339203183:
					{
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						this.valueList = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return @value;
					}
					
					
					case 562859421:
					{
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						this.keyList = ((global::Array) (@value) );
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return @value;
					}
					
					
					default:
					{
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				switch (hash) {
					case 5741474:
					{
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set", 5741474)) );
					}
					
					
					case 5144726:
					{
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get", 5144726)) );
					}
					
					
					case 1071652316:
					{
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "exists", 1071652316)) );
					}
					
					
					case 1191633396:
					{
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "keys", 1191633396)) );
					}
					
					
					case 339203183:
					{
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.valueList;
					}
					
					
					case 562859421:
					{
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.keyList;
					}
					
					
					default:
					{
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				switch (hash) {
					case 5741474:
					{
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						this.@set(dynargs[0], ((global::hunit.match.Match) (dynargs[1]) ));
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						break;
					}
					
					
					case 5144726:
					{
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.@get(dynargs[0]);
					}
					
					
					case 1071652316:
					{
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.exists(dynargs[0]);
					}
					
					
					case 1191633396:
					{
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return this.keys();
					}
					
					
					default:
					{
						#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			baseArr.push("valueList");
			#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			baseArr.push("keyList");
			#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
			{
				#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


