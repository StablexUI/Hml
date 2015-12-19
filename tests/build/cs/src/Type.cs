
#pragma warning disable 109, 114, 219, 429, 168, 162
public class ValueType : global::haxe.lang.ParamEnum {
	
	public ValueType(int index, object[] @params) : base(index, @params) {
	}
	
	
	public static readonly string[] __hx_constructs = new string[]{"TNull", "TInt", "TFloat", "TBool", "TObject", "TFunction", "TClass", "TEnum", "TUnknown"};
	
	public static readonly global::ValueType TNull = new global::ValueType(0, null);
	
	public static readonly global::ValueType TInt = new global::ValueType(1, null);
	
	public static readonly global::ValueType TFloat = new global::ValueType(2, null);
	
	public static readonly global::ValueType TBool = new global::ValueType(3, null);
	
	public static readonly global::ValueType TObject = new global::ValueType(4, null);
	
	public static readonly global::ValueType TFunction = new global::ValueType(5, null);
	
	public static global::ValueType TClass(global::System.Type c) {
		unchecked {
			#line 38 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return new global::ValueType(6, new object[]{c});
		}
		#line default
	}
	
	
	public static global::ValueType TEnum(global::System.Type e) {
		unchecked {
			#line 39 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return new global::ValueType(7, new object[]{e});
		}
		#line default
	}
	
	
	public static readonly global::ValueType TUnknown = new global::ValueType(8, null);
	
	public override string getTag() {
		#line 31 "/usr/lib/haxe/std/cs/_std/Type.hx"
		return global::ValueType.__hx_constructs[this.index];
	}
	#line default
	
}



#pragma warning disable 109, 114, 219, 429, 168, 162
public class Type : global::haxe.lang.HxObject {
	
	public Type(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public Type() {
		#line 43 "/usr/lib/haxe/std/cs/_std/Type.hx"
		global::Type.__hx_ctor__Type(this);
	}
	#line default
	
	public static void __hx_ctor__Type(global::Type __temp_me29) {
	}
	
	
	public static global::System.Type getClass<T>(T o) {
		#line 47 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (( ( global::System.Object.ReferenceEquals(((object) (o) ), ((object) (null) )) || ( o is global::haxe.lang.DynamicObject ) ) || ( o is global::System.Type ) )) {
			#line 48 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return null;
		}
		
		#line 50 "/usr/lib/haxe/std/cs/_std/Type.hx"
		return o.GetType();
	}
	#line default
	
	public static global::System.Type getEnum(object o) {
		#line 55 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (( ( o is global::System.Enum ) || ( o is global::haxe.lang.Enum ) )) {
			#line 56 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return o.GetType();
		}
		
		#line 57 "/usr/lib/haxe/std/cs/_std/Type.hx"
		return null;
	}
	#line default
	
	public static global::System.Type getSuperClass(global::System.Type c) {
		#line 62 "/usr/lib/haxe/std/cs/_std/Type.hx"
		global::System.Type t = ((global::System.Type) (c) );
		global::System.Type @base = t.BaseType;
		if (( ( global::haxe.lang.Runtime.typeEq(@base, null) || string.Equals(( @base as global::System.Reflection.MemberInfo ).ToString(), "haxe.lang.HxObject") ) || string.Equals(( @base as global::System.Reflection.MemberInfo ).ToString(), "System.Object") )) {
			#line 65 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return null;
		}
		
		#line 66 "/usr/lib/haxe/std/cs/_std/Type.hx"
		return ((global::System.Type) (@base) );
	}
	#line default
	
	public static string getClassName(global::System.Type c) {
		#line 70 "/usr/lib/haxe/std/cs/_std/Type.hx"
		string ret = global::haxe.lang.Runtime.toString(((global::System.Type) (c) ));
		#line 76 "/usr/lib/haxe/std/cs/_std/Type.hx"
		switch (ret) {
			case "System.Int32":
			{
				#line 76 "/usr/lib/haxe/std/cs/_std/Type.hx"
				return "Int";
			}
			
			
			case "System.Double":
			{
				#line 76 "/usr/lib/haxe/std/cs/_std/Type.hx"
				return "Float";
			}
			
			
			case "System.String":
			{
				#line 76 "/usr/lib/haxe/std/cs/_std/Type.hx"
				return "String";
			}
			
			
			case "System.Object":
			{
				#line 76 "/usr/lib/haxe/std/cs/_std/Type.hx"
				return "Dynamic";
			}
			
			
			case "System.Type":
			{
				#line 76 "/usr/lib/haxe/std/cs/_std/Type.hx"
				return "Class";
			}
			
			
			default:
			{
				#line 76 "/usr/lib/haxe/std/cs/_std/Type.hx"
				return global::haxe.lang.Runtime.toString(global::haxe.lang.StringExt.split(ret, "`")[0]);
			}
			
		}
		
	}
	#line default
	
	public static string getEnumName(global::System.Type e) {
		unchecked {
			#line 89 "/usr/lib/haxe/std/cs/_std/Type.hx"
			string ret = global::haxe.lang.Runtime.toString(((global::System.Type) (e) ));
			#line 94 "/usr/lib/haxe/std/cs/_std/Type.hx"
			if (( ( ret.Length == 14 ) && string.Equals(ret, "System.Boolean") )) {
				#line 95 "/usr/lib/haxe/std/cs/_std/Type.hx"
				return "Bool";
			}
			
			#line 96 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return ret;
		}
		#line default
	}
	
	
	public static global::System.Type resolveClass(string name) {
		#line 105 "/usr/lib/haxe/std/cs/_std/Type.hx"
		global::System.Type t = global::System.Type.GetType(((string) (name) ));
		#line 107 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (global::haxe.lang.Runtime.typeEq(t, null)) {
			#line 109 "/usr/lib/haxe/std/cs/_std/Type.hx"
			global::System.Collections.IEnumerator all = ( global::System.AppDomain.CurrentDomain.GetAssemblies() as global::System.Array ).GetEnumerator();
			while (all.MoveNext()) {
				#line 112 "/usr/lib/haxe/std/cs/_std/Type.hx"
				global::System.Reflection.Assembly t2 = ((global::System.Reflection.Assembly) (all.Current) );
				t = t2.GetType(((string) (name) ));
				if ( ! (global::haxe.lang.Runtime.typeEq(t, null)) ) {
					#line 115 "/usr/lib/haxe/std/cs/_std/Type.hx"
					break;
				}
				
			}
			
		}
		
		#line 119 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (global::haxe.lang.Runtime.typeEq(t, null)) {
			#line 121 "/usr/lib/haxe/std/cs/_std/Type.hx"
			switch (name) {
				case "Int":
				{
					#line 123 "/usr/lib/haxe/std/cs/_std/Type.hx"
					return ((global::System.Type) (typeof(int)) );
				}
				
				
				case "Float":
				{
					#line 124 "/usr/lib/haxe/std/cs/_std/Type.hx"
					return ((global::System.Type) (typeof(double)) );
				}
				
				
				case "Class":
				{
					#line 125 "/usr/lib/haxe/std/cs/_std/Type.hx"
					return ((global::System.Type) (typeof(global::System.Type)) );
				}
				
				
				case "Dynamic":
				{
					#line 126 "/usr/lib/haxe/std/cs/_std/Type.hx"
					return ((global::System.Type) (typeof(object)) );
				}
				
				
				case "String":
				{
					#line 127 "/usr/lib/haxe/std/cs/_std/Type.hx"
					return ((global::System.Type) (typeof(string)) );
				}
				
				
				default:
				{
					#line 128 "/usr/lib/haxe/std/cs/_std/Type.hx"
					return null;
				}
				
			}
			
		}
		else if (( t.IsInterface && (((global::System.Type) (typeof(global::haxe.lang.IGenericObject)) )).IsAssignableFrom(((global::System.Type) (t) )) )) {
			#line 132 "/usr/lib/haxe/std/cs/_std/Type.hx"
			{
				#line 132 "/usr/lib/haxe/std/cs/_std/Type.hx"
				object[] _this = ( t as global::System.Reflection.MemberInfo ).GetCustomAttributes(((bool) (true) ));
				#line 132 "/usr/lib/haxe/std/cs/_std/Type.hx"
				object[] _g_arr = _this;
				#line 132 "/usr/lib/haxe/std/cs/_std/Type.hx"
				uint _g_idx = ((uint) (0) );
				#line 132 "/usr/lib/haxe/std/cs/_std/Type.hx"
				while (((bool) (( _g_idx < ( _g_arr as global::System.Array ).Length )) )) {
					#line 132 "/usr/lib/haxe/std/cs/_std/Type.hx"
					object attr = ((object) (_g_arr[((int) (_g_idx++) )]) );
					#line 134 "/usr/lib/haxe/std/cs/_std/Type.hx"
					global::haxe.lang.GenericInterface g = ((global::haxe.lang.GenericInterface) (( attr as global::haxe.lang.GenericInterface )) );
					if (( g != null )) {
						#line 136 "/usr/lib/haxe/std/cs/_std/Type.hx"
						return ((global::System.Type) (g.generic) );
					}
					
				}
				
			}
			
			#line 139 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return ((global::System.Type) (t) );
		}
		else {
			#line 142 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return ((global::System.Type) (t) );
		}
		
	}
	#line default
	
	public static global::System.Type resolveEnum(string name) {
		#line 148 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (string.Equals(name, "Bool")) {
			#line 148 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return typeof(bool);
		}
		
		#line 149 "/usr/lib/haxe/std/cs/_std/Type.hx"
		global::System.Type t = null;
		#line 149 "/usr/lib/haxe/std/cs/_std/Type.hx"
		{
			#line 149 "/usr/lib/haxe/std/cs/_std/Type.hx"
			global::System.Type cl = global::Type.resolveClass(name);
			#line 149 "/usr/lib/haxe/std/cs/_std/Type.hx"
			t = cl;
		}
		
		#line 150 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (( (  ! (global::haxe.lang.Runtime.typeEq(t, null))  && t.BaseType.Equals(((global::System.Type) (typeof(global::System.Enum)) )) ) || ((global::System.Type) (typeof(global::haxe.lang.Enum)) ).IsAssignableFrom(((global::System.Type) (t) )) )) {
			#line 151 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return t;
		}
		
		#line 152 "/usr/lib/haxe/std/cs/_std/Type.hx"
		return null;
	}
	#line default
	
	public static T createInstance<T>(global::System.Type cl, global::Array args) {
		#line 157 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (global::haxe.lang.Runtime.refEq(cl, typeof(string))) {
			#line 158 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return global::haxe.lang.Runtime.genericCast<T>(args[0]);
		}
		
		#line 159 "/usr/lib/haxe/std/cs/_std/Type.hx"
		global::System.Type t = ((global::System.Type) (cl) );
		if (t.IsInterface) {
			#line 163 "/usr/lib/haxe/std/cs/_std/Type.hx"
			global::System.Type cl1 = global::Type.resolveClass(global::Type.getClassName(cl));
			#line 163 "/usr/lib/haxe/std/cs/_std/Type.hx"
			t = cl1;
		}
		
		#line 165 "/usr/lib/haxe/std/cs/_std/Type.hx"
		global::System.Reflection.ConstructorInfo[] ctors = t.GetConstructors();
		return global::haxe.lang.Runtime.genericCast<T>(global::haxe.lang.Runtime.callMethod(null, ((global::System.Reflection.MethodBase[]) (ctors) ), ( ctors as global::System.Array ).Length, args));
	}
	#line default
	
	public static T createEmptyInstance<T>(global::System.Type cl) {
		unchecked {
			#line 171 "/usr/lib/haxe/std/cs/_std/Type.hx"
			global::System.Type t = ((global::System.Type) (cl) );
			if (t.IsInterface) {
				#line 175 "/usr/lib/haxe/std/cs/_std/Type.hx"
				global::System.Type cl1 = global::Type.resolveClass(global::Type.getClassName(cl));
				#line 175 "/usr/lib/haxe/std/cs/_std/Type.hx"
				t = cl1;
			}
			
			#line 178 "/usr/lib/haxe/std/cs/_std/Type.hx"
			if (global::Reflect.hasField(cl, "__hx_createEmpty")) {
				#line 179 "/usr/lib/haxe/std/cs/_std/Type.hx"
				return global::haxe.lang.Runtime.genericCast<T>(global::haxe.lang.Runtime.callField(cl, "__hx_createEmpty", 2084789794, null));
			}
			
			#line 180 "/usr/lib/haxe/std/cs/_std/Type.hx"
			if (global::haxe.lang.Runtime.refEq(cl, typeof(string))) {
				#line 181 "/usr/lib/haxe/std/cs/_std/Type.hx"
				return global::haxe.lang.Runtime.genericCast<T>(((object) ("") ));
			}
			
			#line 182 "/usr/lib/haxe/std/cs/_std/Type.hx"
			global::System.Type t1 = ((global::System.Type) (cl) );
			#line 184 "/usr/lib/haxe/std/cs/_std/Type.hx"
			global::System.Reflection.ConstructorInfo[] ctors = t1.GetConstructors();
			{
				#line 185 "/usr/lib/haxe/std/cs/_std/Type.hx"
				int _g1 = 0;
				#line 185 "/usr/lib/haxe/std/cs/_std/Type.hx"
				int _g = ( ctors as global::System.Array ).Length;
				#line 185 "/usr/lib/haxe/std/cs/_std/Type.hx"
				while (( _g1 < _g )) {
					#line 185 "/usr/lib/haxe/std/cs/_std/Type.hx"
					int c = _g1++;
					#line 187 "/usr/lib/haxe/std/cs/_std/Type.hx"
					if (( ( ( ctors[c] as global::System.Reflection.MethodBase ).GetParameters() as global::System.Array ).Length == 0 )) {
						#line 189 "/usr/lib/haxe/std/cs/_std/Type.hx"
						global::System.Reflection.ConstructorInfo[] arr = new global::System.Reflection.ConstructorInfo[1];
						arr[0] = ctors[c];
						return global::haxe.lang.Runtime.genericCast<T>(global::haxe.lang.Runtime.callMethod(null, ((global::System.Reflection.MethodBase[]) (arr) ), ( arr as global::System.Array ).Length, new global::Array<object>(new object[]{})));
					}
					
				}
				
			}
			
			#line 194 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return global::haxe.lang.Runtime.genericCast<T>(global::System.Activator.CreateInstance(((global::System.Type) (t1) )));
		}
		#line default
	}
	
	
	public static T createEnum<T>(global::System.Type e, string constr, global::Array @params) {
		#line 199 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (( ( @params == null ) || ( @params[0] == null ) )) {
			#line 201 "/usr/lib/haxe/std/cs/_std/Type.hx"
			T ret = global::haxe.lang.Runtime.genericCast<T>(global::haxe.lang.Runtime.slowGetField(e, constr, true));
			if (( ret is global::haxe.lang.Function )) {
				#line 203 "/usr/lib/haxe/std/cs/_std/Type.hx"
				throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Constructor ", constr), " needs parameters"));
			}
			
			#line 204 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return ret;
		}
		else {
			#line 206 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return global::haxe.lang.Runtime.genericCast<T>(global::haxe.lang.Runtime.slowCallField(e, constr, @params));
		}
		
	}
	#line default
	
	public static T createEnumIndex<T>(global::System.Type e, int index, global::Array @params) {
		#line 211 "/usr/lib/haxe/std/cs/_std/Type.hx"
		global::Array<object> constr = global::Type.getEnumConstructs(e);
		return global::Type.createEnum<T>(e, global::haxe.lang.Runtime.toString(constr[index]), @params);
	}
	#line default
	
	public static global::Array<object> getInstanceFields(global::System.Type c) {
		unchecked {
			#line 217 "/usr/lib/haxe/std/cs/_std/Type.hx"
			if (global::haxe.lang.Runtime.refEq(c, typeof(string))) {
				#line 218 "/usr/lib/haxe/std/cs/_std/Type.hx"
				return global::haxe.lang.StringRefl.fields;
			}
			
			#line 220 "/usr/lib/haxe/std/cs/_std/Type.hx"
			global::System.Type c1 = ((global::System.Type) (c) );
			global::Array<object> ret = new global::Array<object>(new object[]{});
			global::System.Reflection.MemberInfo[] mis = c1.GetMembers(((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Public) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Instance) ) )) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.FlattenHierarchy) ) )) ));
			{
				#line 223 "/usr/lib/haxe/std/cs/_std/Type.hx"
				int _g1 = 0;
				#line 223 "/usr/lib/haxe/std/cs/_std/Type.hx"
				int _g = ( mis as global::System.Array ).Length;
				#line 223 "/usr/lib/haxe/std/cs/_std/Type.hx"
				while (( _g1 < _g )) {
					#line 223 "/usr/lib/haxe/std/cs/_std/Type.hx"
					int i = _g1++;
					#line 225 "/usr/lib/haxe/std/cs/_std/Type.hx"
					global::System.Reflection.MemberInfo i1 = mis[i];
					if (( i1 is global::System.Reflection.PropertyInfo )) {
						#line 227 "/usr/lib/haxe/std/cs/_std/Type.hx"
						continue;
					}
					
					#line 228 "/usr/lib/haxe/std/cs/_std/Type.hx"
					string n = i1.Name;
					if ((  ! (n.StartsWith("__hx_"))  && ( (( (((bool) (( ((uint) (0) ) < n.Length )) )) ? (((int) (n[0]) )) : (-1) )) != 46 ) )) {
						#line 231 "/usr/lib/haxe/std/cs/_std/Type.hx"
						switch (n) {
							case "Equals":
							case "ToString":
							case "GetHashCode":
							case "GetType":
							{
								#line 233 "/usr/lib/haxe/std/cs/_std/Type.hx"
								break;
							}
							
							
							default:
							{
								#line 235 "/usr/lib/haxe/std/cs/_std/Type.hx"
								ret.push(n);
								#line 235 "/usr/lib/haxe/std/cs/_std/Type.hx"
								break;
							}
							
						}
						
					}
					
				}
				
			}
			
			#line 239 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return ret;
		}
		#line default
	}
	
	
	public static global::Array<object> getClassFields(global::System.Type c) {
		#line 243 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (global::System.Object.ReferenceEquals(((object) (c) ), ((object) (typeof(string)) ))) {
			#line 245 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return new global::Array<object>(new object[]{"fromCharCode"});
		}
		
		#line 248 "/usr/lib/haxe/std/cs/_std/Type.hx"
		global::Array<object> ret = new global::Array<object>(new object[]{});
		global::System.Reflection.MemberInfo[] infos = ((global::System.Type) (c) ).GetMembers(((global::System.Reflection.BindingFlags) (( ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Public) ) | ((global::System.Reflection.BindingFlags) (global::System.Reflection.BindingFlags.Static) ) )) ));
		{
			#line 250 "/usr/lib/haxe/std/cs/_std/Type.hx"
			int _g1 = 0;
			#line 250 "/usr/lib/haxe/std/cs/_std/Type.hx"
			int _g = ( infos as global::System.Array ).Length;
			#line 250 "/usr/lib/haxe/std/cs/_std/Type.hx"
			while (( _g1 < _g )) {
				#line 250 "/usr/lib/haxe/std/cs/_std/Type.hx"
				int i = _g1++;
				#line 252 "/usr/lib/haxe/std/cs/_std/Type.hx"
				string name = infos[i].Name;
				if ( ! (name.StartsWith("__hx_")) ) {
					#line 255 "/usr/lib/haxe/std/cs/_std/Type.hx"
					ret.push(name);
				}
				
			}
			
		}
		
		#line 258 "/usr/lib/haxe/std/cs/_std/Type.hx"
		return ret;
	}
	#line default
	
	public static global::Array<object> getEnumConstructs(global::System.Type e) {
		#line 262 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (global::Reflect.hasField(e, "__hx_constructs")) {
			#line 263 "/usr/lib/haxe/std/cs/_std/Type.hx"
			global::Array<object> ret = new global::Array<object>(((object[]) (((string[]) (global::haxe.lang.Runtime.getField(e, "__hx_constructs", 1781145963, true)) )) ));
			return ret.copy();
		}
		
		#line 266 "/usr/lib/haxe/std/cs/_std/Type.hx"
		{
			#line 266 "/usr/lib/haxe/std/cs/_std/Type.hx"
			string[] native = global::System.Enum.GetNames(((global::System.Type) (e) ));
			#line 266 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return new global::Array<object>(((object[]) (native) ));
		}
		
	}
	#line default
	
	public static global::ValueType @typeof(object v) {
		#line 270 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (( v == null )) {
			#line 270 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return global::ValueType.TNull;
		}
		
		#line 272 "/usr/lib/haxe/std/cs/_std/Type.hx"
		global::System.Type t = ((global::System.Type) (( v as global::System.Type )) );
		if ( ! (global::haxe.lang.Runtime.typeEq(t, null)) ) {
			#line 275 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return global::ValueType.TObject;
		}
		
		#line 278 "/usr/lib/haxe/std/cs/_std/Type.hx"
		t = ((global::System.Type) (v.GetType()) );
		if (( t.IsEnum || ( v is global::haxe.lang.Enum ) )) {
			#line 280 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return global::ValueType.TEnum(((global::System.Type) (t) ));
		}
		
		#line 281 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (t.IsValueType) {
			#line 282 "/usr/lib/haxe/std/cs/_std/Type.hx"
			global::System.IConvertible vc = ((global::System.IConvertible) (v) );
			if (( vc != null )) {
				#line 284 "/usr/lib/haxe/std/cs/_std/Type.hx"
				global::System.TypeCode _g = vc.GetTypeCode();
				#line 284 "/usr/lib/haxe/std/cs/_std/Type.hx"
				switch (_g) {
					case global::System.TypeCode.Boolean:
					{
						#line 285 "/usr/lib/haxe/std/cs/_std/Type.hx"
						return global::ValueType.TBool;
					}
					
					
					case global::System.TypeCode.Double:
					{
						#line 287 "/usr/lib/haxe/std/cs/_std/Type.hx"
						double d = vc.ToDouble(((global::System.IFormatProvider) (null) ));
						if (( ( ( d >= global::System.Int32.MinValue ) && ( d <= global::System.Int32.MaxValue ) ) && ( d == vc.ToInt32(((global::System.IFormatProvider) (null) )) ) )) {
							#line 289 "/usr/lib/haxe/std/cs/_std/Type.hx"
							return global::ValueType.TInt;
						}
						else {
							#line 291 "/usr/lib/haxe/std/cs/_std/Type.hx"
							return global::ValueType.TFloat;
						}
						
					}
					
					
					case global::System.TypeCode.Int32:
					{
						#line 293 "/usr/lib/haxe/std/cs/_std/Type.hx"
						return global::ValueType.TInt;
					}
					
					
					default:
					{
						#line 295 "/usr/lib/haxe/std/cs/_std/Type.hx"
						return global::ValueType.TClass(((global::System.Type) (t) ));
					}
					
				}
				
			}
			else {
				#line 298 "/usr/lib/haxe/std/cs/_std/Type.hx"
				return global::ValueType.TClass(((global::System.Type) (t) ));
			}
			
		}
		
		#line 302 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (( v is global::haxe.lang.IHxObject )) {
			#line 303 "/usr/lib/haxe/std/cs/_std/Type.hx"
			if (( v is global::haxe.lang.DynamicObject )) {
				#line 304 "/usr/lib/haxe/std/cs/_std/Type.hx"
				return global::ValueType.TObject;
			}
			else if (( v is global::haxe.lang.Enum )) {
				#line 306 "/usr/lib/haxe/std/cs/_std/Type.hx"
				return global::ValueType.TEnum(((global::System.Type) (t) ));
			}
			
			#line 307 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return global::ValueType.TClass(((global::System.Type) (t) ));
		}
		else if (( v is global::haxe.lang.Function )) {
			#line 309 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return global::ValueType.TFunction;
		}
		else {
			#line 311 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return global::ValueType.TClass(((global::System.Type) (t) ));
		}
		
	}
	#line default
	
	public static bool enumEq<T>(T a, T b) {
		#line 317 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (global::haxe.lang.Runtime.eq(a, default(T))) {
			#line 318 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return global::haxe.lang.Runtime.eq(b, default(T));
		}
		else if (global::haxe.lang.Runtime.eq(b, default(T))) {
			#line 320 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return false;
		}
		else {
			#line 322 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return a.Equals(b);
		}
		
	}
	#line default
	
	public static string enumConstructor(object e) {
		#line 327 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (( e is global::System.Enum )) {
			#line 327 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return global::haxe.lang.Runtime.concat(global::Std.@string(e), "");
		}
		else {
			#line 327 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return (((global::haxe.lang.Enum) (e) )).getTag();
		}
		
	}
	#line default
	
	public static global::Array enumParameters(object e) {
		#line 332 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (( e is global::System.Enum )) {
			#line 332 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return new global::Array<object>(new object[]{});
		}
		else {
			#line 332 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return (((global::haxe.lang.Enum) (e) )).getParams();
		}
		
	}
	#line default
	
	public static int enumIndex(object e) {
		#line 337 "/usr/lib/haxe/std/cs/_std/Type.hx"
		if (( e is global::System.Enum )) {
			#line 339 "/usr/lib/haxe/std/cs/_std/Type.hx"
			global::System.Array values = global::System.Enum.GetValues(((global::System.Type) (global::cs.Lib.getNativeType(e)) ));
			return global::System.Array.IndexOf(((global::System.Array) (values) ), ((object) (e) ));
		}
		else {
			#line 342 "/usr/lib/haxe/std/cs/_std/Type.hx"
			return (((global::haxe.lang.Enum) (e) )).index;
		}
		
	}
	#line default
	
	public static global::Array<T> allEnums<T>(global::System.Type e) {
		#line 348 "/usr/lib/haxe/std/cs/_std/Type.hx"
		global::Array<object> ctors = global::Type.getEnumConstructs(e);
		global::Array<T> ret = new global::Array<T>(new T[]{});
		{
			#line 350 "/usr/lib/haxe/std/cs/_std/Type.hx"
			int _g = 0;
			#line 350 "/usr/lib/haxe/std/cs/_std/Type.hx"
			while (( _g < ctors.length )) {
				#line 350 "/usr/lib/haxe/std/cs/_std/Type.hx"
				string ctor = global::haxe.lang.Runtime.toString(ctors[_g]);
				#line 350 "/usr/lib/haxe/std/cs/_std/Type.hx"
				 ++ _g;
				#line 352 "/usr/lib/haxe/std/cs/_std/Type.hx"
				T v = global::haxe.lang.Runtime.genericCast<T>(global::Reflect.field(e, ctor));
				if (global::Std.@is(v, e)) {
					#line 354 "/usr/lib/haxe/std/cs/_std/Type.hx"
					ret.push(v);
				}
				
			}
			
		}
		
		#line 357 "/usr/lib/haxe/std/cs/_std/Type.hx"
		return ret;
	}
	#line default
	
	public static new object __hx_createEmpty() {
		#line 43 "/usr/lib/haxe/std/cs/_std/Type.hx"
		return new global::Type(global::haxe.lang.EmptyObject.EMPTY);
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		#line 43 "/usr/lib/haxe/std/cs/_std/Type.hx"
		return new global::Type();
	}
	#line default
	
}


