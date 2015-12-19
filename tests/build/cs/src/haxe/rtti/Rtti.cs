
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.rtti {
	public class Rtti : global::haxe.lang.HxObject {
		
		public Rtti(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Rtti() {
			#line 29 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
			global::haxe.rtti.Rtti.__hx_ctor_haxe_rtti_Rtti(this);
		}
		#line default
		
		public static void __hx_ctor_haxe_rtti_Rtti(global::haxe.rtti.Rtti __temp_me58) {
		}
		
		
		public static object getRtti<T>(global::System.Type c) {
			unchecked {
				#line 40 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
				string rtti = global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(c, "__rtti", 2058035415, false));
				if (string.Equals(rtti, null)) {
					#line 42 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
					throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Class ", global::Type.getClassName(c)), " has no RTTI information, consider adding @:rtti"));
				}
				
				#line 44 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
				global::Xml x = global::Xml.parse(rtti).firstElement();
				global::haxe.rtti.TypeTree infos = new global::haxe.rtti.XmlParser().processElement(x);
				{
					#line 46 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
					global::haxe.rtti.TypeTree t = infos;
					#line 46 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
					switch (infos.index) {
						case 1:
						{
							#line 46 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
							object c1 = infos.@params[0];
							return c1;
						}
						
						
						default:
						{
							#line 48 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
							throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Enum mismatch: expected TClassDecl but found ", global::Std.@string(t)));
						}
						
					}
					
				}
				
			}
			#line default
		}
		
		
		public static new object __hx_createEmpty() {
			#line 29 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
			return new global::haxe.rtti.Rtti(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 29 "/usr/lib/haxe/std/haxe/rtti/Rtti.hx"
			return new global::haxe.rtti.Rtti();
		}
		#line default
		
	}
}


