
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.rtti {
	public class CType : global::haxe.lang.ParamEnum {
		
		public CType(int index, object[] @params) : base(index, @params) {
		}
		
		
		public static readonly string[] __hx_constructs = new string[]{"CUnknown", "CEnum", "CClass", "CTypedef", "CFunction", "CAnonymous", "CDynamic", "CAbstract"};
		
		public static readonly global::haxe.rtti.CType CUnknown = new global::haxe.rtti.CType(0, null);
		
		public static global::haxe.rtti.CType CEnum(string name, global::List<object> @params) {
			unchecked {
				#line 32 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
				return new global::haxe.rtti.CType(1, new object[]{name, @params});
			}
			#line default
		}
		
		
		public static global::haxe.rtti.CType CClass(string name, global::List<object> @params) {
			unchecked {
				#line 33 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
				return new global::haxe.rtti.CType(2, new object[]{name, @params});
			}
			#line default
		}
		
		
		public static global::haxe.rtti.CType CTypedef(string name, global::List<object> @params) {
			unchecked {
				#line 34 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
				return new global::haxe.rtti.CType(3, new object[]{name, @params});
			}
			#line default
		}
		
		
		public static global::haxe.rtti.CType CFunction(global::List<object> args, global::haxe.rtti.CType ret) {
			unchecked {
				#line 35 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
				return new global::haxe.rtti.CType(4, new object[]{args, ret});
			}
			#line default
		}
		
		
		public static global::haxe.rtti.CType CAnonymous(global::List<object> fields) {
			unchecked {
				#line 36 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
				return new global::haxe.rtti.CType(5, new object[]{fields});
			}
			#line default
		}
		
		
		public static global::haxe.rtti.CType CDynamic(global::haxe.rtti.CType t) {
			unchecked {
				#line 37 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
				return new global::haxe.rtti.CType(6, new object[]{t});
			}
			#line default
		}
		
		
		public static global::haxe.rtti.CType CAbstract(string name, global::List<object> @params) {
			unchecked {
				#line 38 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
				return new global::haxe.rtti.CType(7, new object[]{name, @params});
			}
			#line default
		}
		
		
		public override string getTag() {
			#line 30 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
			return global::haxe.rtti.CType.__hx_constructs[this.index];
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.rtti {
	public class Rights : global::haxe.lang.ParamEnum {
		
		public Rights(int index, object[] @params) : base(index, @params) {
		}
		
		
		public static readonly string[] __hx_constructs = new string[]{"RNormal", "RNo", "RCall", "RMethod", "RDynamic", "RInline"};
		
		public static readonly global::haxe.rtti.Rights RNormal = new global::haxe.rtti.Rights(0, null);
		
		public static readonly global::haxe.rtti.Rights RNo = new global::haxe.rtti.Rights(1, null);
		
		public static global::haxe.rtti.Rights RCall(string m) {
			unchecked {
				#line 51 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
				return new global::haxe.rtti.Rights(2, new object[]{m});
			}
			#line default
		}
		
		
		public static readonly global::haxe.rtti.Rights RMethod = new global::haxe.rtti.Rights(3, null);
		
		public static readonly global::haxe.rtti.Rights RDynamic = new global::haxe.rtti.Rights(4, null);
		
		public static readonly global::haxe.rtti.Rights RInline = new global::haxe.rtti.Rights(5, null);
		
		public override string getTag() {
			#line 48 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
			return global::haxe.rtti.Rights.__hx_constructs[this.index];
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.rtti {
	public class TypeTree : global::haxe.lang.ParamEnum {
		
		public TypeTree(int index, object[] @params) : base(index, @params) {
		}
		
		
		public static readonly string[] __hx_constructs = new string[]{"TPackage", "TClassdecl", "TEnumdecl", "TTypedecl", "TAbstractdecl"};
		
		public static global::haxe.rtti.TypeTree TPackage(string name, string full, global::Array<object> subs) {
			#line 122 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
			return new global::haxe.rtti.TypeTree(0, new object[]{name, full, subs});
		}
		#line default
		
		public static global::haxe.rtti.TypeTree TClassdecl(object c) {
			unchecked {
				#line 123 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
				return new global::haxe.rtti.TypeTree(1, new object[]{c});
			}
			#line default
		}
		
		
		public static global::haxe.rtti.TypeTree TEnumdecl(object e) {
			unchecked {
				#line 124 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
				return new global::haxe.rtti.TypeTree(2, new object[]{e});
			}
			#line default
		}
		
		
		public static global::haxe.rtti.TypeTree TTypedecl(object t) {
			unchecked {
				#line 125 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
				return new global::haxe.rtti.TypeTree(3, new object[]{t});
			}
			#line default
		}
		
		
		public static global::haxe.rtti.TypeTree TAbstractdecl(object a) {
			unchecked {
				#line 126 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
				return new global::haxe.rtti.TypeTree(4, new object[]{a});
			}
			#line default
		}
		
		
		public override string getTag() {
			#line 121 "/usr/lib/haxe/std/haxe/rtti/CType.hx"
			return global::haxe.rtti.TypeTree.__hx_constructs[this.index];
		}
		#line default
		
	}
}


