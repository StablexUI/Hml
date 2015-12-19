
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	public class Match<T> : global::haxe.lang.HxObject, global::hunit.match.Match {
		
		public Match(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Match(global::hunit.match.Match<T> previous, global::hunit.match.MatchChainLogic chainLogic) {
			#line 45 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			global::hunit.match.Match<object>.__hx_ctor_hunit_match_Match<T>(this, previous, chainLogic);
		}
		#line default
		
		public static void __hx_ctor_hunit_match_Match<T_c>(global::hunit.match.Match<T_c> __temp_me94, global::hunit.match.Match<T_c> previous, global::hunit.match.MatchChainLogic chainLogic) {
			#line 47 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			__temp_me94.previous = previous;
			__temp_me94.chainLogic = chainLogic;
		}
		#line default
		
		public static object __hx_cast<T_c_c>(global::hunit.match.Match me) {
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			return ( (( me != null )) ? (me.hunit_match_Match_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			return new global::hunit.match.Match<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				return new global::hunit.match.Match<object>(((global::hunit.match.Match<object>) (global::hunit.match.Match<object>.__hx_cast<object>(((global::hunit.match.Match) (arr[0]) ))) ), ((global::hunit.match.MatchChainLogic) (arr[1]) ));
			}
			#line default
		}
		
		
		public virtual object hunit_match_Match_cast<T_c>() {
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				return this;
			}
			
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			global::hunit.match.Match<T_c> new_me = new global::hunit.match.Match<T_c>(global::haxe.lang.EmptyObject.EMPTY);
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			int i = 0;
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			while (( i < fields.length )) {
				#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			return new_me;
		}
		#line default
		
		public global::hunit.match.Match<T> previous;
		
		public global::hunit.match.MatchChainLogic chainLogic;
		
		
		
		public global::hunit.match.GenericMatchFactory<T> _and;
		
		
		
		public global::hunit.match.GenericMatchFactory<T> _or;
		
		public bool match(object @value) {
			unchecked {
				#line 59 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				bool result = this.checkMatch(@value);
				#line 61 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				global::hunit.match.Match<T> current = this;
				while (( current.chainLogic != null )) {
					#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					{
						#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						global::hunit.match.MatchChainLogic _g = current.chainLogic;
						#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						if (( _g != null )) {
							#line 63 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
							switch (_g.index) {
								case 0:
								{
									#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
									result = ( result && current.previous.checkMatch(@value) );
									#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
									break;
								}
								
								
								case 1:
								{
									#line 65 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
									result = ( result || current.previous.checkMatch(@value) );
									#line 65 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
									break;
								}
								
								
							}
							
						}
						
					}
					
					#line 68 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					current = current.previous;
				}
				
				#line 71 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				return result;
			}
			#line default
		}
		
		
		[global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
		public virtual bool isChained() {
			#line 92 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			return ( this.previous != null );
		}
		#line default
		
		[global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
		public virtual string toString() {
			unchecked {
				#line 103 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				string code = this.shortCode();
				#line 105 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				if (( this.previous == null )) {
					#line 106 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("[", code), "]");
				}
				else {
					#line 108 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					string result = global::haxe.lang.Runtime.concat("", code);
					global::hunit.match.Match<T> current = this;
					while (( current.chainLogic != null )) {
						#line 111 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						{
							#line 111 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
							global::hunit.match.MatchChainLogic _g = current.chainLogic;
							#line 111 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
							if (( _g != null )) {
								#line 111 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
								switch (_g.index) {
									case 0:
									{
										#line 112 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
										result = global::haxe.lang.Runtime.concat(current.previous.shortCode(), (global::haxe.lang.Runtime.concat(" && ", result)));
										#line 112 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
										break;
									}
									
									
									case 1:
									{
										#line 113 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
										result = global::haxe.lang.Runtime.concat(current.previous.shortCode(), (global::haxe.lang.Runtime.concat(" || ", result)));
										#line 113 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
										break;
									}
									
									
								}
								
							}
							
						}
						
						#line 115 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						current = current.previous;
					}
					
					#line 118 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("[", result), "]");
				}
				
			}
			#line default
		}
		
		
		public virtual string shortCode() {
			#line 129 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			throw global::haxe.lang.HaxeException.wrap("To be overriden");
		}
		#line default
		
		public virtual bool checkMatch(object @value) {
			#line 139 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			throw global::haxe.lang.HaxeException.wrap("To be overriden");
		}
		#line default
		
		public virtual global::hunit.match.GenericMatchFactory<T> get_and() {
			#line 149 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			if (( this._and == null )) {
				#line 150 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				this._and = new global::hunit.match.GenericMatchFactory<T>(this, global::hunit.match.MatchChainLogic.And);
			}
			
			#line 153 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			return this._and;
		}
		#line default
		
		public virtual global::hunit.match.GenericMatchFactory<T> get_or() {
			#line 163 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			if (( this._or == null )) {
				#line 164 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				this._or = new global::hunit.match.GenericMatchFactory<T>(this, global::hunit.match.MatchChainLogic.Or);
			}
			
			#line 167 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			return this._or;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				switch (hash) {
					case 4749122:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						this._or = ((global::hunit.match.GenericMatchFactory<T>) (global::hunit.match.GenericMatchFactory<object>.__hx_cast<T>(((global::hunit.match.GenericMatchFactory) (@value) ))) );
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return @value;
					}
					
					
					case 1058357208:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						this._and = ((global::hunit.match.GenericMatchFactory<T>) (global::hunit.match.GenericMatchFactory<object>.__hx_cast<T>(((global::hunit.match.GenericMatchFactory) (@value) ))) );
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return @value;
					}
					
					
					case 1353511069:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						this.chainLogic = ((global::hunit.match.MatchChainLogic) (@value) );
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return @value;
					}
					
					
					case 598785079:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						this.previous = ((global::hunit.match.Match<T>) (global::hunit.match.Match<object>.__hx_cast<T>(((global::hunit.match.Match) (@value) ))) );
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return @value;
					}
					
					
					default:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				switch (hash) {
					case 590346348:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_or", 590346348)) );
					}
					
					
					case 650036078:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_and", 650036078)) );
					}
					
					
					case 320031581:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "checkMatch", 320031581)) );
					}
					
					
					case 310857673:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "shortCode", 310857673)) );
					}
					
					
					case 946786476:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "toString", 946786476)) );
					}
					
					
					case 1300393174:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "isChained", 1300393174)) );
					}
					
					
					case 52644165:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "match", 52644165)) );
					}
					
					
					case 4749122:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this._or;
					}
					
					
					case 24867:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.get_or();
					}
					
					
					case 1058357208:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this._and;
					}
					
					
					case 4848343:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.get_and();
					}
					
					
					case 1353511069:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.chainLogic;
					}
					
					
					case 598785079:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.previous;
					}
					
					
					default:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				switch (hash) {
					case 590346348:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.get_or();
					}
					
					
					case 650036078:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.get_and();
					}
					
					
					case 320031581:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.checkMatch(dynargs[0]);
					}
					
					
					case 310857673:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.shortCode();
					}
					
					
					case 946786476:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.toString();
					}
					
					
					case 1300393174:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.isChained();
					}
					
					
					case 52644165:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return this.match(dynargs[0]);
					}
					
					
					default:
					{
						#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			baseArr.push("_or");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			baseArr.push("or");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			baseArr.push("_and");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			baseArr.push("and");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			baseArr.push("chainLogic");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			baseArr.push("previous");
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			{
				#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
		public override string ToString(){
			return this.toString();
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	[global::haxe.lang.GenericInterface(typeof(global::hunit.match.Match<object>))]
	public interface Match : global::haxe.lang.IHxObject, global::haxe.lang.IGenericObject {
		
		object hunit_match_Match_cast<T_c>();
		
		bool match(object @value);
		
		bool isChained();
		
		string toString();
		
		string shortCode();
		
		bool checkMatch(object @value);
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.match {
	public class MatchChainLogic : global::haxe.lang.Enum {
		
		public MatchChainLogic(int index) : base(index) {
		}
		
		
		public static readonly string[] __hx_constructs = new string[]{"And", "Or"};
		
		public static readonly global::hunit.match.MatchChainLogic And = new global::hunit.match.MatchChainLogic(0);
		
		public static readonly global::hunit.match.MatchChainLogic Or = new global::hunit.match.MatchChainLogic(1);
		
		public override string getTag() {
			#line 11 "/home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx"
			return global::hunit.match.MatchChainLogic.__hx_constructs[this.index];
		}
		#line default
		
	}
}


