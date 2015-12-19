
#pragma warning disable 109, 114, 219, 429, 168, 162
public class Reflect : global::haxe.lang.HxObject {
	
	public Reflect(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public Reflect() {
		#line 33 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		global::Reflect.__hx_ctor__Reflect(this);
	}
	#line default
	
	public static void __hx_ctor__Reflect(global::Reflect __temp_me23) {
	}
	
	
	public static bool hasField(object o, string field) {
		#line 37 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		global::haxe.lang.IHxObject ihx = ((global::haxe.lang.IHxObject) (( o as global::haxe.lang.IHxObject )) );
		if (( ihx != null )) {
			#line 38 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			return ( ihx.__hx_getField(field, global::haxe.lang.FieldLookup.hash(field), false, true, false) != global::haxe.lang.Runtime.undefined );
		}
		
		#line 40 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		return global::haxe.lang.Runtime.slowHasField(o, field);
	}
	#line default
	
	public static object field(object o, string field) {
		#line 45 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		global::haxe.lang.IHxObject ihx = ((global::haxe.lang.IHxObject) (( o as global::haxe.lang.IHxObject )) );
		if (( ihx != null )) {
			#line 46 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			return ihx.__hx_getField(field, global::haxe.lang.FieldLookup.hash(field), false, false, false);
		}
		
		#line 48 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		return global::haxe.lang.Runtime.slowGetField(o, field, false);
	}
	#line default
	
	public static void setField(object o, string field, object @value) {
		#line 53 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		global::haxe.lang.IHxObject ihx = ((global::haxe.lang.IHxObject) (( o as global::haxe.lang.IHxObject )) );
		if (( ihx != null )) {
			#line 55 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			ihx.__hx_setField(field, global::haxe.lang.FieldLookup.hash(field), @value, false);
		}
		else {
			#line 57 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			global::haxe.lang.Runtime.slowSetField(o, field, @value);
		}
		
	}
	#line default
	
	public static object getProperty(object o, string field) {
		#line 62 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		global::haxe.lang.IHxObject ihx = ((global::haxe.lang.IHxObject) (( o as global::haxe.lang.IHxObject )) );
		if (( ihx != null )) {
			#line 63 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			return ihx.__hx_getField(field, global::haxe.lang.FieldLookup.hash(field), false, false, true);
		}
		
		#line 65 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		if (global::haxe.lang.Runtime.slowHasField(o, global::haxe.lang.Runtime.concat("get_", field))) {
			#line 66 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			return global::haxe.lang.Runtime.slowCallField(o, global::haxe.lang.Runtime.concat("get_", field), null);
		}
		
		#line 68 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		return global::haxe.lang.Runtime.slowGetField(o, field, false);
	}
	#line default
	
	public static void setProperty(object o, string field, object @value) {
		#line 73 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		global::haxe.lang.IHxObject ihx = ((global::haxe.lang.IHxObject) (( o as global::haxe.lang.IHxObject )) );
		if (( ihx != null )) {
			#line 75 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			ihx.__hx_setField(field, global::haxe.lang.FieldLookup.hash(field), @value, true);
		}
		else if (global::haxe.lang.Runtime.slowHasField(o, global::haxe.lang.Runtime.concat("set_", field))) {
			#line 77 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			global::haxe.lang.Runtime.slowCallField(o, global::haxe.lang.Runtime.concat("set_", field), new global::Array<object>(new object[]{@value}));
		}
		else {
			#line 79 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			global::haxe.lang.Runtime.slowSetField(o, field, @value);
		}
		
	}
	#line default
	
	public static object callMethod(object o, object func, global::Array args) {
		#line 84 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		return (((global::haxe.lang.Function) (func) )).__hx_invokeDynamic(args);
	}
	#line default
	
	public static global::Array<object> fields(object o) {
		#line 89 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		global::haxe.lang.IHxObject ihx = ((global::haxe.lang.IHxObject) (( o as global::haxe.lang.IHxObject )) );
		if (( o != null )) {
			#line 92 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			global::Array<object> ret = new global::Array<object>(new object[]{});
			ihx.__hx_getFields(ret);
			return ret;
		}
		else if (( o is global::System.Type )) {
			#line 96 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			return global::Type.getClassFields(((global::System.Type) (o) ));
		}
		else {
			#line 98 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			return global::Reflect.instanceFields(o.GetType());
		}
		
	}
	#line default
	
	public static global::Array<object> instanceFields(global::System.Type c) {
		#line 104 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		global::System.Type c1 = ((global::System.Type) (c) );
		global::Array<object> ret = new global::Array<object>(new object[]{});
		global::System.Reflection.FieldInfo[] mis = c1.GetFields(((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Public) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Instance) ) )) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.FlattenHierarchy) ) )) ));
		{
			#line 107 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			int _g1 = 0;
			#line 107 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			int _g = ( mis as global::System.Array ).Length;
			#line 107 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			while (( _g1 < _g )) {
				#line 107 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
				int i = _g1++;
				#line 109 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
				global::System.Reflection.FieldInfo i1 = mis[i];
				ret.push(( i1 as global::System.Reflection.MemberInfo ).Name);
			}
			
		}
		
		#line 112 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		return ret;
	}
	#line default
	
	public static bool isFunction(object f) {
		#line 117 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		return ( f is global::haxe.lang.Function );
	}
	#line default
	
	public static int compare<T>(T a, T b) {
		#line 122 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		return global::haxe.lang.Runtime.compare(a, b);
	}
	#line default
	
	public static bool compareMethods(object f1, object f2) {
		#line 128 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		if (global::haxe.lang.Runtime.eq(f1, f2)) {
			#line 129 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			return true;
		}
		
		#line 131 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		if (( ( f1 is global::haxe.lang.Closure ) && ( f2 is global::haxe.lang.Closure ) )) {
			#line 133 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			global::haxe.lang.Closure f1c = ((global::haxe.lang.Closure) (f1) );
			global::haxe.lang.Closure f2c = ((global::haxe.lang.Closure) (f2) );
			#line 136 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			return ( global::haxe.lang.Runtime.refEq(f1c.obj, f2c.obj) && string.Equals(f1c.field, f2c.field) );
		}
		
		#line 139 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		return false;
	}
	#line default
	
	public static bool isObject(object v) {
		#line 144 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		return ( ( v != null ) &&  ! ((( ( ( v is global::haxe.lang.Enum ) || ( v is global::haxe.lang.Function ) ) || ( v is global::System.ValueType ) )))  );
	}
	#line default
	
	public static bool isEnumValue(object v) {
		#line 148 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		return ( ( v != null ) && (( ( v is global::haxe.lang.Enum ) || ( v is global::System.Enum ) )) );
	}
	#line default
	
	public static bool deleteField(object o, string field) {
		#line 153 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		global::haxe.lang.DynamicObject ihx = ((global::haxe.lang.DynamicObject) (( o as global::haxe.lang.DynamicObject )) );
		if (( ihx != null )) {
			#line 155 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			return ihx.__hx_deleteField(field, global::haxe.lang.FieldLookup.hash(field));
		}
		
		#line 156 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		return false;
	}
	#line default
	
	public static T copy<T>(T o) {
		#line 161 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		object o2 = new global::haxe.lang.DynamicObject(new int[]{}, new object[]{}, new int[]{}, new double[]{});
		{
			#line 162 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			int _g = 0;
			#line 162 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			global::Array<object> _g1 = global::Reflect.fields(o);
			#line 162 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
			while (( _g < _g1.length )) {
				#line 162 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
				string f = global::haxe.lang.Runtime.toString(_g1[_g]);
				#line 162 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
				 ++ _g;
				global::Reflect.setField(o2, f, global::Reflect.field(o, f));
			}
			
		}
		
		#line 164 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		return global::haxe.lang.Runtime.genericCast<T>(o2);
	}
	#line default
	
	public static object makeVarArgs(global::haxe.lang.Function f) {
		#line 170 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		return new global::haxe.lang.VarArgsFunction(f);
	}
	#line default
	
	public static new object __hx_createEmpty() {
		#line 33 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		return new global::Reflect(global::haxe.lang.EmptyObject.EMPTY);
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		#line 33 "/usr/lib/haxe/std/cs/_std/Reflect.hx"
		return new global::Reflect();
	}
	#line default
	
}


