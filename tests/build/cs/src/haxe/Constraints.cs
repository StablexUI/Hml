
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe {
	public interface IMap<K, V> : global::haxe.lang.IHxObject, global::haxe.IMap {
		
		global::haxe.lang.Null<V> @get(K k);
		
	}
	public class IMap__Statics_{
		public static object __hx_cast<K_c_c, V_c_c>(global::haxe.IMap me) {
			#line 43 "/usr/lib/haxe/std/haxe/Constraints.hx"
			return ( (( me != null )) ? (me.haxe_IMap_cast<K_c_c, V_c_c>()) : (null) );
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe {
	[global::haxe.lang.GenericInterface(typeof(global::haxe.IMap<object, object>))]
	public interface IMap : global::haxe.lang.IHxObject, global::haxe.lang.IGenericObject {
		
		object haxe_IMap_cast<K_c, V_c>();
		
		object keys();
		
	}
}

