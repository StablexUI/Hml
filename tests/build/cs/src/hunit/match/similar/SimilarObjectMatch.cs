
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match.similar {
	public class SimilarObjectMatch<T> : global::hunit.match.Match<T>, global::hunit.match.similar.SimilarObjectMatch {
		
		public SimilarObjectMatch(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public SimilarObjectMatch(global::hunit.match.SimilarMatch<T> root, global::hunit.match.ObjectCache processedObjects, object expected, global::hunit.match.Match<T> previous, global::hunit.match.MatchChainLogic chainLogic) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 38 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			global::hunit.match.similar.SimilarObjectMatch<object>.__hx_ctor_hunit_match_similar_SimilarObjectMatch<T>(this, root, processedObjects, expected, previous, chainLogic);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_similar_SimilarObjectMatch<T_c>(global::hunit.match.similar.SimilarObjectMatch<T_c> __temp_me109, global::hunit.match.SimilarMatch<T_c> root, global::hunit.match.ObjectCache processedObjects, object expected, global::hunit.match.Match<T_c> previous, global::hunit.match.MatchChainLogic chainLogic) {
			unchecked {
				#line 34 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				if ( ! (global::hunit.Utils.isObject(expected)) ) {
					#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.InvalidTestException("`expected` value should be an object.", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"new", "hunit.match.similar.SimilarObjectMatch", "SimilarObjectMatch.hx"}, new int[]{1981972957}, new double[]{((double) (35) )})));
				}
				
				#line 38 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				global::hunit.match.Match<object>.__hx_ctor_hunit_match_Match<T_c>(__temp_me109, previous, chainLogic);
				#line 40 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				__temp_me109.root = root;
				__temp_me109.expected = __temp_me109.getFieldMatchMap(expected, processedObjects);
			}
			#line default
		}
		
		
		public static new object __hx_cast<T_c_c>(global::hunit.match.similar.SimilarObjectMatch me) {
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			return ( (( me != null )) ? (me.hunit_match_similar_SimilarObjectMatch_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static global::haxe.ds.StringMap getFieldValueMap(object @object) {
			unchecked {
				#line 122 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				global::haxe.ds.StringMap map = new global::haxe.ds.StringMap<object>();
				#line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				global::Array<object> fields = null;
				#line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				{
					#line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					global::ValueType _g = global::Type.@typeof(@object);
					#line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					switch (_g.index) {
						case 4:
						{
							#line 125 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
							fields = global::Reflect.fields(@object);
							#line 125 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
							break;
						}
						
						
						case 6:
						{
							#line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
							global::System.Type cls = ((global::System.Type) (_g.@params[0]) );
							#line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
							{
								#line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
								global::System.Type __temp_switch1 = (((global::System.Type) (_g.@params[0]) ));
								#line 126 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
								if (global::haxe.lang.Runtime.eq(__temp_switch1, typeof(string))) {
									#line 126 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
									fields = new global::Array<object>(new object[]{});
								}
								else {
									#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
									fields = global::Type.getInstanceFields(cls);
								}
								
							}
							
							#line 124 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
							break;
						}
						
						
						default:
						{
							#line 128 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
							fields = new global::Array<object>(new object[]{});
							#line 128 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
							break;
						}
						
					}
					
				}
				
				#line 131 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				object property = null;
				{
					#line 132 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					int _g1 = 0;
					#line 132 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					while (( _g1 < fields.length )) {
						#line 132 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						string field = global::haxe.lang.Runtime.toString(fields[_g1]);
						#line 132 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						 ++ _g1;
						#line 137 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						property = global::Reflect.getProperty(@object, field);
						if ( ! (( property is global::haxe.lang.Function )) ) {
							#line 139 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
							global::haxe.lang.Runtime.callField(map, "set", 5741474, new global::Array<object>(new object[]{field, property}));
						}
						
					}
					
				}
				
				#line 143 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				return map;
			}
			#line default
		}
		
		
		public static new object __hx_createEmpty() {
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			return new global::hunit.match.similar.SimilarObjectMatch<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				return new global::hunit.match.similar.SimilarObjectMatch<object>(((global::hunit.match.SimilarMatch<object>) (global::hunit.match.SimilarMatch<object>.__hx_cast<object>(((global::hunit.match.SimilarMatch) (arr[0]) ))) ), ((global::hunit.match.ObjectCache) (arr[1]) ), arr[2], ((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (arr[3]) ))) ), ((global::hunit.match.MatchChainLogic) (arr[4]) ));
			}
			#line default
		}
		
		
		public virtual object hunit_match_similar_SimilarObjectMatch_cast<T_c>() {
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				return this;
			}
			
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			global::hunit.match.similar.SimilarObjectMatch<T_c> new_me = new global::hunit.match.similar.SimilarObjectMatch<T_c>(global::haxe.lang.EmptyObject.EMPTY);
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			int i = 0;
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			while (( i < fields.length )) {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			return new_me;
		}
		#line default
		
		public virtual object hunit_match_Match_cast<T_c>() {
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			return this.hunit_match_similar_SimilarObjectMatch_cast<T_c>();
		}
		#line default
		
		public global::haxe.ds.StringMap<object> expected;
		
		public global::hunit.match.SimilarMatch<T> root;
		
		public override bool checkMatch(object @value) {
			#line 51 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			global::haxe.ds.StringMap valueMap = global::hunit.match.similar.SimilarObjectMatch<object>.getFieldValueMap(@value);
			#line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			object actual = null;
			global::hunit.match.Match match = null;
			{
				#line 55 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				object __temp_iterator1 = ((object) (new global::haxe.ds._StringMap.StringMapKeyIterator<object>(((global::haxe.ds.StringMap<object>) (this.expected) ))) );
				#line 55 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
					#line 55 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					string field = global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null));
					if ( ! (valueMap.exists(field)) ) {
						#line 56 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return false;
					}
					
					#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					actual = ((object) (global::haxe.lang.Runtime.callField(valueMap, "get", 5144726, new global::Array<object>(new object[]{field}))) );
					match = ((global::hunit.match.Match) ((this.expected.@get(((string) (field) ))).@value) );
					#line 62 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					if (( match is global::hunit.match.SimilarMatch )) {
						#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						if (( ((int) (global::haxe.lang.Runtime.toInt(global::haxe.lang.Runtime.callField(this.root.checkedObjects, "indexOf", 1623148745, new global::Array<object>(new object[]{actual, (default(global::haxe.lang.Null<int>)).toDynamic()})))) ) >= 0 )) {
							#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
							continue;
						}
						
					}
					
					#line 68 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					if ( ! (match.match(actual)) ) {
						#line 68 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return false;
					}
					
				}
				
			}
			
			#line 71 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			return true;
		}
		#line default
		
		public override string shortCode() {
			unchecked {
				#line 81 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				global::Array<object> parts = new global::Array<object>(new object[]{});
				{
					#line 82 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					object __temp_iterator1 = ((object) (new global::haxe.ds._StringMap.StringMapKeyIterator<object>(((global::haxe.ds.StringMap<object>) (this.expected) ))) );
					#line 82 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
						#line 82 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						string field = global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null));
						parts.unshift(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(field, ":"), ((global::hunit.match.Match) ((this.expected.@get(((string) (field) ))).@value) ).toString()));
					}
					
				}
				
				#line 85 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				string str = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("{", parts.@join(", ")), "}");
				#line 87 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				if (( str.Length == global::hunit.Utils.shortenString(str).Length )) {
					#line 88 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					return str;
				}
				else {
					#line 90 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					str = global::hunit.Utils.shortenString(str);
					return global::haxe.lang.Runtime.concat(global::haxe.lang.StringExt.substr(str, 0, new global::haxe.lang.Null<int>(( str.Length - 6 ), true)), "<...>}");
				}
				
			}
			#line default
		}
		
		
		public virtual global::haxe.ds.StringMap<object> getFieldMatchMap(object @object, global::hunit.match.ObjectCache processedObjects) {
			#line 102 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			global::haxe.ds.StringMap fieldValue = global::hunit.match.similar.SimilarObjectMatch<object>.getFieldValueMap(@object);
			global::haxe.ds.StringMap<object> fieldMatch = new global::haxe.ds.StringMap<object>();
			#line 105 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			object @value = null;
			{
				#line 106 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				object __temp_iterator1 = ((object) (new global::haxe.ds._StringMap.StringMapKeyIterator<object>(((global::haxe.ds.StringMap<object>) (global::haxe.ds.StringMap<object>.__hx_cast<object>(((global::haxe.ds.StringMap) (fieldValue) ))) ))) );
				#line 106 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
					#line 106 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					string field = global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null));
					@value = ((object) (global::haxe.lang.Runtime.callField(fieldValue, "get", 5144726, new global::Array<object>(new object[]{field}))) );
					#line 109 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
					{
						#line 109 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						global::hunit.match.Match value1 = this.root.createMatcherForValue(@value, processedObjects);
						#line 109 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						fieldMatch.@set(field, value1);
					}
					
				}
				
			}
			
			#line 112 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			return fieldMatch;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				switch (hash) {
					case 1269755426:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						this.root = ((global::hunit.match.SimilarMatch<T>) (global::hunit.match.SimilarMatch<object>.__hx_cast<T>(((global::hunit.match.SimilarMatch) (@value) ))) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return @value;
					}
					
					
					case 1076899448:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						this.expected = ((global::haxe.ds.StringMap<object>) (global::haxe.ds.StringMap<object>.__hx_cast<object>(((global::haxe.ds.StringMap) (@value) ))) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return @value;
					}
					
					
					default:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				switch (hash) {
					case 648484539:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getFieldMatchMap", 648484539)) );
					}
					
					
					case 310857673:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "shortCode", 310857673)) );
					}
					
					
					case 320031581:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "checkMatch", 320031581)) );
					}
					
					
					case 1269755426:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return this.root;
					}
					
					
					case 1076899448:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return this.expected;
					}
					
					
					default:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				switch (hash) {
					case 320031581:
					case 310857673:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return global::haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					
					case 648484539:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return this.getFieldMatchMap(dynargs[0], ((global::hunit.match.ObjectCache) (dynargs[1]) ));
					}
					
					
					default:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			baseArr.push("root");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			baseArr.push("expected");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
			{
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match.similar {
	[global::haxe.lang.GenericInterface(typeof(global::hunit.match.similar.SimilarObjectMatch<object>))]
	public interface SimilarObjectMatch : global::haxe.lang.IHxObject, global::hunit.match.Match, global::haxe.lang.IGenericObject {
		
		object hunit_match_similar_SimilarObjectMatch_cast<T_c>();
		
		object hunit_match_Match_cast<T_c>();
		
		global::haxe.ds.StringMap<object> getFieldMatchMap(object @object, global::hunit.match.ObjectCache processedObjects);
		
	}
}


