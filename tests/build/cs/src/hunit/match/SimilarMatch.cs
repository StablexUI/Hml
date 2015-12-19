
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	public class SimilarMatch<T> : global::hunit.match.Match<T>, global::hunit.match.SimilarMatch {
		
		public SimilarMatch(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public SimilarMatch(object expected, global::hunit.match.Match<T> previous, global::hunit.match.MatchChainLogic chainLogic, global::hunit.match.SimilarMatch<T> root, global::hunit.match.ObjectCache processedObjects) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			global::hunit.match.SimilarMatch<object>.__hx_ctor_hunit_match_SimilarMatch<T>(this, expected, previous, chainLogic, root, processedObjects);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_SimilarMatch<T_c>(global::hunit.match.SimilarMatch<T_c> __temp_me103, object expected, global::hunit.match.Match<T_c> previous, global::hunit.match.MatchChainLogic chainLogic, global::hunit.match.SimilarMatch<T_c> root, global::hunit.match.ObjectCache processedObjects) {
			#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			global::hunit.match.Match<object>.__hx_ctor_hunit_match_Match<T_c>(__temp_me103, previous, chainLogic);
			__temp_me103.root = root;
			#line 72 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (( processedObjects == null )) {
				#line 73 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				processedObjects = new global::hunit.match.ObjectCache();
			}
			
			#line 75 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			processedObjects.@set(expected, __temp_me103);
			#line 77 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (__temp_me103.isRoot()) {
				#line 78 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				__temp_me103.buildMatcher(__temp_me103, expected, processedObjects);
			}
			else {
				#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				__temp_me103.buildMatcher(root, expected, processedObjects);
			}
			
		}
		#line default
		
		public static new object __hx_cast<T_c_c>(global::hunit.match.SimilarMatch me) {
			#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			return ( (( me != null )) ? (me.hunit_match_SimilarMatch_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static string getAType(object @value) {
			unchecked {
				#line 51 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				if (( @value is global::haxe.IMap )) {
					#line 51 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					return ((string) ("map") );
				}
				
				#line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				{
					#line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					global::ValueType _g = global::Type.@typeof(@value);
					#line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					switch (_g.index) {
						case 6:
						{
							#line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
							{
								#line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
								global::System.Type __temp_switch1 = (((global::System.Type) (_g.@params[0]) ));
								if (global::haxe.lang.Runtime.eq(__temp_switch1, typeof(string))) {
									#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
									throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.InvalidTestException("Invalid `expected` value similar matcher", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"getAType", "hunit.match.SimilarMatch", "SimilarMatch.hx"}, new int[]{1981972957}, new double[]{((double) (54) )})));
								}
								else if (global::haxe.lang.Runtime.eq(__temp_switch1, typeof(global::Array<object>))) {
									#line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
									return ((string) ("array") );
								}
								else {
									#line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
									return ((string) ("object") );
								}
								
							}
							
						}
						
						
						case 4:
						{
							#line 53 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
							return ((string) ("object") );
						}
						
						
						default:
						{
							#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
							throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.InvalidTestException("Invalid `expected` value similar matcher", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"getAType", "hunit.match.SimilarMatch", "SimilarMatch.hx"}, new int[]{1981972957}, new double[]{((double) (58) )})));
						}
						
					}
					
				}
				
			}
			#line default
		}
		
		
		public static new object __hx_createEmpty() {
			#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			return new global::hunit.match.SimilarMatch<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				return new global::hunit.match.SimilarMatch<object>(arr[0], ((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (arr[1]) ))) ), ((global::hunit.match.MatchChainLogic) (arr[2]) ), ((global::hunit.match.SimilarMatch<object>) (global::hunit.match.SimilarMatch<object>.__hx_cast<object>(((global::hunit.match.SimilarMatch) (arr[3]) ))) ), ((global::hunit.match.ObjectCache) (arr[4]) ));
			}
			#line default
		}
		
		
		public virtual object hunit_match_SimilarMatch_cast<T_c>() {
			#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				return this;
			}
			
			#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			global::hunit.match.SimilarMatch<T_c> new_me = new global::hunit.match.SimilarMatch<T_c>(global::haxe.lang.EmptyObject.EMPTY);
			#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			int i = 0;
			#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			while (( i < fields.length )) {
				#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			return new_me;
		}
		#line default
		
		public virtual object hunit_match_Match_cast<T_c>() {
			#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			return this.hunit_match_SimilarMatch_cast<T_c>();
		}
		#line default
		
		public global::hunit.match.SimilarMatch<T> root;
		
		public global::hunit.match.Match<T> matcher;
		
		public global::Array checkedObjects;
		
		public virtual void buildMatcher(global::hunit.match.SimilarMatch<T> root, object expected, global::hunit.match.ObjectCache processedObjects) {
			unchecked {
				#line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				string _g = global::hunit.match.SimilarMatch<object>.getAType(expected);
				#line 91 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				switch (_g) {
					case "object":
					{
						#line 92 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.matcher = new global::hunit.match.similar.SimilarObjectMatch<T>(root, processedObjects, expected, null, null);
						#line 92 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						break;
					}
					
					
					case "array":
					{
						#line 93 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.matcher = new global::hunit.match.similar.SimilarArrayMatch<T>(root, processedObjects, ((global::Array) (expected) ), null, null);
						#line 93 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						break;
					}
					
					
					case "map":
					{
						#line 94 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.matcher = new global::hunit.match.similar.SimilarMapMatch<T>(root, processedObjects, expected, null, null);
						#line 94 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						break;
					}
					
					
					default:
					{
						#line 95 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.InvalidTestException("Provided value can not be used with `similar` matcher", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"buildMatcher", "hunit.match.SimilarMatch", "SimilarMatch.hx"}, new int[]{1981972957}, new double[]{((double) (95) )})));
					}
					
				}
				
			}
			#line default
		}
		
		
		public virtual bool isRoot() {
			#line 106 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			return ( this.root == null );
		}
		#line default
		
		public override bool checkMatch(object @value) {
			#line 116 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (this.isRoot()) {
				#line 117 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				this.checkedObjects = new global::Array<object>(new object[]{});
				global::haxe.lang.Runtime.callField(this.checkedObjects, "push", 1247875546, new global::Array<object>(new object[]{@value}));
			}
			else {
				#line 120 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				global::haxe.lang.Runtime.callField(this.root.checkedObjects, "push", 1247875546, new global::Array<object>(new object[]{@value}));
			}
			
			#line 123 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			bool result = this.matcher.checkMatch(@value);
			#line 125 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (this.isRoot()) {
				#line 126 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				this.checkedObjects = null;
			}
			
			#line 129 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			return result;
		}
		#line default
		
		public override string shortCode() {
			#line 139 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			return this.matcher.shortCode();
		}
		#line default
		
		public virtual global::hunit.match.Match createMatcherForValue(object @value, global::hunit.match.ObjectCache processedObjects) {
			#line 149 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			global::hunit.match.Match match = null;
			#line 151 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (( @value is global::hunit.match.Match )) {
				#line 152 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				match = ((global::hunit.match.Match) (@value) );
			}
			else if (global::hunit.Utils.isObject(@value)) {
				#line 157 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				match = processedObjects.@get(@value);
				if (( match == null )) {
					#line 159 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
					match = new global::hunit.match.SimilarMatch<T>(@value, null, null, this, processedObjects);
				}
				
			}
			else {
				#line 164 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				match = new global::hunit.match.EqualMatch<object>(@value, ((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (null) ))) ), null);
			}
			
			#line 168 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			return match;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				switch (hash) {
					case 628596845:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.checkedObjects = ((global::Array) (@value) );
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return @value;
					}
					
					
					case 159137010:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.matcher = ((global::hunit.match.Match<T>) (global::hunit.match.Match<object>.__hx_cast<T>(((global::hunit.match.Match) (@value) ))) );
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return @value;
					}
					
					
					case 1269755426:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.root = ((global::hunit.match.SimilarMatch<T>) (global::hunit.match.SimilarMatch<object>.__hx_cast<T>(((global::hunit.match.SimilarMatch) (@value) ))) );
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return @value;
					}
					
					
					default:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				switch (hash) {
					case 2024021790:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "createMatcherForValue", 2024021790)) );
					}
					
					
					case 310857673:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "shortCode", 310857673)) );
					}
					
					
					case 320031581:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "checkMatch", 320031581)) );
					}
					
					
					case 1763029804:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "isRoot", 1763029804)) );
					}
					
					
					case 466905956:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "buildMatcher", 466905956)) );
					}
					
					
					case 628596845:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.checkedObjects;
					}
					
					
					case 159137010:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.matcher;
					}
					
					
					case 1269755426:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.root;
					}
					
					
					default:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				switch (hash) {
					case 320031581:
					case 310857673:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return global::haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					
					case 2024021790:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.createMatcherForValue(dynargs[0], ((global::hunit.match.ObjectCache) (dynargs[1]) ));
					}
					
					
					case 1763029804:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.isRoot();
					}
					
					
					case 466905956:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.buildMatcher(((global::hunit.match.SimilarMatch<T>) (global::hunit.match.SimilarMatch<object>.__hx_cast<T>(((global::hunit.match.SimilarMatch) (dynargs[0]) ))) ), dynargs[1], ((global::hunit.match.ObjectCache) (dynargs[2]) ));
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						break;
					}
					
					
					default:
					{
						#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			baseArr.push("checkedObjects");
			#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			baseArr.push("matcher");
			#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			baseArr.push("root");
			#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			{
				#line 35 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	[global::haxe.lang.GenericInterface(typeof(global::hunit.match.SimilarMatch<object>))]
	public interface SimilarMatch : global::haxe.lang.IHxObject, global::hunit.match.Match, global::haxe.lang.IGenericObject {
		
		object hunit_match_SimilarMatch_cast<T_c>();
		
		object hunit_match_Match_cast<T_c>();
		
		bool isRoot();
		
		global::hunit.match.Match createMatcherForValue(object @value, global::hunit.match.ObjectCache processedObjects);
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	public class ObjectCache : global::haxe.lang.HxObject {
		
		public ObjectCache(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public ObjectCache() {
			#line 184 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			global::hunit.match.ObjectCache.__hx_ctor_hunit_match_ObjectCache(this);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_ObjectCache(global::hunit.match.ObjectCache __temp_me104) {
			#line 185 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			__temp_me104.keys = new global::Array<object>(new object[]{});
			__temp_me104.values = new global::Array<object>(new object[]{});
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			return new global::hunit.match.ObjectCache(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			return new global::hunit.match.ObjectCache();
		}
		#line default
		
		public global::Array keys;
		
		public global::Array<object> values;
		
		public virtual global::hunit.match.SimilarMatch @get(object key) {
			#line 190 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (( ((int) (global::haxe.lang.Runtime.toInt(global::haxe.lang.Runtime.callField(this.keys, "indexOf", 1623148745, new global::Array<object>(new object[]{key, (default(global::haxe.lang.Null<int>)).toDynamic()})))) ) < 0 )) {
				#line 191 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				return null;
			}
			else {
				#line 193 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				return ((global::hunit.match.SimilarMatch) (this.values[((int) (global::haxe.lang.Runtime.toInt(global::haxe.lang.Runtime.callField(this.keys, "indexOf", 1623148745, new global::Array<object>(new object[]{key, (default(global::haxe.lang.Null<int>)).toDynamic()})))) )]) );
			}
			
		}
		#line default
		
		public virtual void @set(object key, global::hunit.match.SimilarMatch @value) {
			#line 198 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			if (( ((int) (global::haxe.lang.Runtime.toInt(global::haxe.lang.Runtime.callField(this.keys, "indexOf", 1623148745, new global::Array<object>(new object[]{key, (default(global::haxe.lang.Null<int>)).toDynamic()})))) ) >= 0 )) {
				#line 199 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				this.values[((int) (global::haxe.lang.Runtime.toInt(global::haxe.lang.Runtime.callField(this.keys, "indexOf", 1623148745, new global::Array<object>(new object[]{key, (default(global::haxe.lang.Null<int>)).toDynamic()})))) )] = @value;
			}
			else {
				#line 201 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				global::haxe.lang.Runtime.callField(this.keys, "push", 1247875546, new global::Array<object>(new object[]{key}));
				this.values.push(@value);
			}
			
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				switch (hash) {
					case 1337394146:
					{
						#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.values = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return @value;
					}
					
					
					case 1191633396:
					{
						#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.keys = ((global::Array) (@value) );
						#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return @value;
					}
					
					
					default:
					{
						#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				switch (hash) {
					case 5741474:
					{
						#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set", 5741474)) );
					}
					
					
					case 5144726:
					{
						#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get", 5144726)) );
					}
					
					
					case 1337394146:
					{
						#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.values;
					}
					
					
					case 1191633396:
					{
						#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.keys;
					}
					
					
					default:
					{
						#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				switch (hash) {
					case 5741474:
					{
						#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						this.@set(dynargs[0], ((global::hunit.match.SimilarMatch) (dynargs[1]) ));
						#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						break;
					}
					
					
					case 5144726:
					{
						#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return this.@get(dynargs[0]);
					}
					
					
					default:
					{
						#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			baseArr.push("values");
			#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			baseArr.push("keys");
			#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
			{
				#line 180 "/home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


