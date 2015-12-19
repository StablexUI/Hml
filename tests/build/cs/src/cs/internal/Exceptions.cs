
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.lang {
	public class Exceptions {
		
		public Exceptions() {
		}
		
		
		[System.ThreadStaticAttribute]
		public static global::System.Exception exception;
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.lang {
	public class HaxeException : global::System.Exception {
		
		override public string Message { get { return this.toString(); } }

		public HaxeException(object obj) : base() {
			#line 42 "/usr/lib/haxe/std/cs/internal/Exceptions.hx"
			if (( obj is global::haxe.lang.HaxeException )) {
				#line 44 "/usr/lib/haxe/std/cs/internal/Exceptions.hx"
				global::haxe.lang.HaxeException _obj = ((global::haxe.lang.HaxeException) (obj) );
				obj = _obj.getObject();
			}
			
			#line 47 "/usr/lib/haxe/std/cs/internal/Exceptions.hx"
			this.obj = obj;
		}
		#line default
		
		public static global::System.Exception wrap(object obj) {
			#line 62 "/usr/lib/haxe/std/cs/internal/Exceptions.hx"
			if (( obj is global::System.Exception )) {
				#line 62 "/usr/lib/haxe/std/cs/internal/Exceptions.hx"
				return ((global::System.Exception) (obj) );
			}
			
			#line 64 "/usr/lib/haxe/std/cs/internal/Exceptions.hx"
			return new global::haxe.lang.HaxeException(obj);
		}
		#line default
		
		public object obj;
		
		public virtual object getObject() {
			#line 52 "/usr/lib/haxe/std/cs/internal/Exceptions.hx"
			return this.obj;
		}
		#line default
		
		public virtual string toString() {
			#line 57 "/usr/lib/haxe/std/cs/internal/Exceptions.hx"
			return global::Std.@string(this.obj);
		}
		#line default
		
		public override string ToString(){
			return this.toString();
		}
		
		
	}
}


