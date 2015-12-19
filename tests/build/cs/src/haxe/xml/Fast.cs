
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.xml._Fast {
	public class NodeAccess : global::haxe.lang.DynamicObject {
		
		public NodeAccess(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public NodeAccess(global::Xml x) {
			#line 28 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			global::haxe.xml._Fast.NodeAccess.__hx_ctor_haxe_xml__Fast_NodeAccess(this, x);
		}
		#line default
		
		public static void __hx_ctor_haxe_xml__Fast_NodeAccess(global::haxe.xml._Fast.NodeAccess __temp_me64, global::Xml x) {
			#line 29 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			__temp_me64.__x = x;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return new global::haxe.xml._Fast.NodeAccess(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return new global::haxe.xml._Fast.NodeAccess(((global::Xml) (arr[0]) ));
		}
		#line default
		
		public global::Xml __x;
		
		public virtual global::haxe.xml.Fast resolve(string name) {
			#line 33 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			global::Xml x = ((global::Xml) (global::haxe.lang.Runtime.callField(this.__x.elementsNamed(name), "next", 1224901875, null)) );
			if (( x == null )) {
				#line 35 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				string xname = null;
				#line 35 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				if (( this.__x.nodeType == global::Xml.Document )) {
					#line 35 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					xname = "Document";
				}
				else {
					#line 35 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					global::Xml _this = this.__x;
					#line 35 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (( _this.nodeType != global::Xml.Element )) {
						#line 35 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element but found ", global::haxe.lang.Runtime.toString(_this.nodeType)));
					}
					
					#line 35 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					xname = _this.nodeName;
				}
				
				#line 36 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(xname, " is missing element "), name));
			}
			
			#line 38 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return new global::haxe.xml.Fast(((global::Xml) (x) ));
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 4745560:
					{
						#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.__x = ((global::Xml) (@value) );
						#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return @value;
					}
					
					
					default:
					{
						#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 1734349548:
					{
						#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "resolve", 1734349548)) );
					}
					
					
					case 4745560:
					{
						#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.__x;
					}
					
					
					default:
					{
						#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 1734349548:
					{
						#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.resolve(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					default:
					{
						#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			baseArr.push("__x");
			#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			{
				#line 24 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.xml._Fast {
	public class AttribAccess : global::haxe.lang.DynamicObject {
		
		public AttribAccess(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public AttribAccess(global::Xml x) {
			#line 47 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			global::haxe.xml._Fast.AttribAccess.__hx_ctor_haxe_xml__Fast_AttribAccess(this, x);
		}
		#line default
		
		public static void __hx_ctor_haxe_xml__Fast_AttribAccess(global::haxe.xml._Fast.AttribAccess __temp_me65, global::Xml x) {
			#line 48 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			__temp_me65.__x = x;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return new global::haxe.xml._Fast.AttribAccess(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return new global::haxe.xml._Fast.AttribAccess(((global::Xml) (arr[0]) ));
		}
		#line default
		
		public global::Xml __x;
		
		public virtual string resolve(string name) {
			#line 52 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (( this.__x.nodeType == global::Xml.Document )) {
				#line 53 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Cannot access document attribute ", name));
			}
			
			#line 54 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			string v = this.__x.@get(name);
			if (string.Equals(v, null)) {
				#line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				string __temp_stmt3 = null;
				#line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				{
					#line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					global::Xml _this = this.__x;
					#line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (( _this.nodeType != global::Xml.Element )) {
						#line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element but found ", global::haxe.lang.Runtime.toString(_this.nodeType)));
					}
					
					#line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					__temp_stmt3 = _this.nodeName;
				}
				
				#line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				string __temp_stmt2 = global::haxe.lang.Runtime.concat(__temp_stmt3, " is missing attribute ");
				#line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				string __temp_stmt1 = global::haxe.lang.Runtime.concat(__temp_stmt2, name);
				#line 56 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw global::haxe.lang.HaxeException.wrap(__temp_stmt1);
			}
			
			#line 57 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return v;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 4745560:
					{
						#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.__x = ((global::Xml) (@value) );
						#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return @value;
					}
					
					
					default:
					{
						#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 1734349548:
					{
						#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "resolve", 1734349548)) );
					}
					
					
					case 4745560:
					{
						#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.__x;
					}
					
					
					default:
					{
						#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 1734349548:
					{
						#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.resolve(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					default:
					{
						#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			baseArr.push("__x");
			#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			{
				#line 43 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.xml._Fast {
	public class HasAttribAccess : global::haxe.lang.DynamicObject {
		
		public HasAttribAccess(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public HasAttribAccess(global::Xml x) {
			#line 66 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			global::haxe.xml._Fast.HasAttribAccess.__hx_ctor_haxe_xml__Fast_HasAttribAccess(this, x);
		}
		#line default
		
		public static void __hx_ctor_haxe_xml__Fast_HasAttribAccess(global::haxe.xml._Fast.HasAttribAccess __temp_me66, global::Xml x) {
			#line 67 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			__temp_me66.__x = x;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return new global::haxe.xml._Fast.HasAttribAccess(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return new global::haxe.xml._Fast.HasAttribAccess(((global::Xml) (arr[0]) ));
		}
		#line default
		
		public global::Xml __x;
		
		public virtual bool resolve(string name) {
			#line 71 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (( this.__x.nodeType == global::Xml.Document )) {
				#line 72 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Cannot access document attribute ", name));
			}
			
			#line 73 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return this.__x.exists(name);
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 4745560:
					{
						#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.__x = ((global::Xml) (@value) );
						#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return @value;
					}
					
					
					default:
					{
						#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 1734349548:
					{
						#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "resolve", 1734349548)) );
					}
					
					
					case 4745560:
					{
						#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.__x;
					}
					
					
					default:
					{
						#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 1734349548:
					{
						#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.resolve(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					default:
					{
						#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			baseArr.push("__x");
			#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			{
				#line 62 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.xml._Fast {
	public class HasNodeAccess : global::haxe.lang.DynamicObject {
		
		public HasNodeAccess(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public HasNodeAccess(global::Xml x) {
			#line 82 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			global::haxe.xml._Fast.HasNodeAccess.__hx_ctor_haxe_xml__Fast_HasNodeAccess(this, x);
		}
		#line default
		
		public static void __hx_ctor_haxe_xml__Fast_HasNodeAccess(global::haxe.xml._Fast.HasNodeAccess __temp_me67, global::Xml x) {
			#line 83 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			__temp_me67.__x = x;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return new global::haxe.xml._Fast.HasNodeAccess(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return new global::haxe.xml._Fast.HasNodeAccess(((global::Xml) (arr[0]) ));
		}
		#line default
		
		public global::Xml __x;
		
		public virtual bool resolve(string name) {
			#line 87 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(this.__x.elementsNamed(name), "hasNext", 407283053, null));
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 4745560:
					{
						#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.__x = ((global::Xml) (@value) );
						#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return @value;
					}
					
					
					default:
					{
						#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 1734349548:
					{
						#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "resolve", 1734349548)) );
					}
					
					
					case 4745560:
					{
						#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.__x;
					}
					
					
					default:
					{
						#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 1734349548:
					{
						#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.resolve(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					default:
					{
						#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			baseArr.push("__x");
			#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			{
				#line 78 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.xml._Fast {
	public class NodeListAccess : global::haxe.lang.DynamicObject {
		
		public NodeListAccess(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public NodeListAccess(global::Xml x) {
			#line 96 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			global::haxe.xml._Fast.NodeListAccess.__hx_ctor_haxe_xml__Fast_NodeListAccess(this, x);
		}
		#line default
		
		public static void __hx_ctor_haxe_xml__Fast_NodeListAccess(global::haxe.xml._Fast.NodeListAccess __temp_me68, global::Xml x) {
			#line 97 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			__temp_me68.__x = x;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return new global::haxe.xml._Fast.NodeListAccess(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return new global::haxe.xml._Fast.NodeListAccess(((global::Xml) (arr[0]) ));
		}
		#line default
		
		public global::Xml __x;
		
		public virtual global::List<object> resolve(string name) {
			#line 101 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			global::List<object> l = new global::List<object>();
			{
				#line 102 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				object __temp_iterator1 = this.__x.elementsNamed(name);
				#line 102 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
					#line 102 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					global::Xml x = ((global::Xml) (global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null)) );
					l.@add(new global::haxe.xml.Fast(((global::Xml) (x) )));
				}
				
			}
			
			#line 104 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return l;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 4745560:
					{
						#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.__x = ((global::Xml) (@value) );
						#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return @value;
					}
					
					
					default:
					{
						#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 1734349548:
					{
						#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "resolve", 1734349548)) );
					}
					
					
					case 4745560:
					{
						#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.__x;
					}
					
					
					default:
					{
						#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 1734349548:
					{
						#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.resolve(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					default:
					{
						#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			baseArr.push("__x");
			#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			{
				#line 92 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.xml {
	public class Fast : global::haxe.lang.HxObject {
		
		public Fast(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Fast(global::Xml x) {
			#line 122 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			global::haxe.xml.Fast.__hx_ctor_haxe_xml_Fast(this, x);
		}
		#line default
		
		public static void __hx_ctor_haxe_xml_Fast(global::haxe.xml.Fast __temp_me69, global::Xml x) {
			#line 123 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (( ( x.nodeType != global::Xml.Document ) && ( x.nodeType != global::Xml.Element ) )) {
				#line 124 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Invalid nodeType ", global::haxe.lang.Runtime.toString(x.nodeType)));
			}
			
			#line 125 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			__temp_me69.x = x;
			__temp_me69.node = new global::haxe.xml._Fast.NodeAccess(((global::Xml) (x) ));
			__temp_me69.nodes = new global::haxe.xml._Fast.NodeListAccess(((global::Xml) (x) ));
			__temp_me69.att = new global::haxe.xml._Fast.AttribAccess(((global::Xml) (x) ));
			__temp_me69.has = new global::haxe.xml._Fast.HasAttribAccess(((global::Xml) (x) ));
			__temp_me69.hasNode = new global::haxe.xml._Fast.HasNodeAccess(((global::Xml) (x) ));
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return new global::haxe.xml.Fast(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return new global::haxe.xml.Fast(((global::Xml) (arr[0]) ));
		}
		#line default
		
		public global::Xml x;
		
		public global::haxe.xml._Fast.NodeAccess node;
		
		public global::haxe.xml._Fast.NodeListAccess nodes;
		
		public global::haxe.xml._Fast.AttribAccess att;
		
		public global::haxe.xml._Fast.HasAttribAccess has;
		
		public global::haxe.xml._Fast.HasNodeAccess hasNode;
		
		public virtual string get_name() {
			#line 134 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (( this.x.nodeType == global::Xml.Document )) {
				#line 134 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return "Document";
			}
			else {
				#line 134 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				global::Xml _this = this.x;
				#line 134 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				if (( _this.nodeType != global::Xml.Element )) {
					#line 134 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element but found ", global::haxe.lang.Runtime.toString(_this.nodeType)));
				}
				
				#line 134 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return _this.nodeName;
			}
			
		}
		#line default
		
		public virtual string get_innerData() {
			#line 138 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			object it = null;
			#line 138 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			{
				#line 138 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				global::Xml _this = this.x;
				#line 138 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				if (( ( _this.nodeType != global::Xml.Document ) && ( _this.nodeType != global::Xml.Element ) )) {
					#line 138 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element or Document but found ", global::haxe.lang.Runtime.toString(_this.nodeType)));
				}
				
				#line 138 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				it = ((object) (new global::_Array.ArrayIterator<object>(((global::Array<object>) (_this.children) ))) );
			}
			
			#line 139 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if ( ! (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(it, "hasNext", 407283053, null))) ) {
				#line 140 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat(this.get_name(), " does not have data"));
			}
			
			#line 141 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			global::Xml v = ((global::Xml) (global::haxe.lang.Runtime.callField(it, "next", 1224901875, null)) );
			global::Xml n = ((global::Xml) (global::haxe.lang.Runtime.callField(it, "next", 1224901875, null)) );
			if (( n != null )) {
				#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				bool __temp_boolv4 = ( v.nodeType == global::Xml.PCData );
				#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				bool __temp_boolv3 = false;
				#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				bool __temp_boolv2 = false;
				#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				if (__temp_boolv4) {
					#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					__temp_boolv3 = ( n.nodeType == global::Xml.CData );
					#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (__temp_boolv3) {
						#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						string __temp_stmt5 = null;
						#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						{
							#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
							string s = null;
							#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
							{
								#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
								if (( ( v.nodeType == global::Xml.Document ) || ( v.nodeType == global::Xml.Element ) )) {
									#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
									throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, unexpected ", global::haxe.lang.Runtime.toString(v.nodeType)));
								}
								
								#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
								s = v.nodeValue;
							}
							
							#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
							__temp_stmt5 = s.Trim();
						}
						
						#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_boolv2 = string.Equals(__temp_stmt5, "");
					}
					
				}
				
				#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				bool __temp_stmt1 = ( ( __temp_boolv4 && __temp_boolv3 ) && __temp_boolv2 );
				#line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				if (__temp_stmt1) {
					#line 146 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					global::Xml n2 = ((global::Xml) (global::haxe.lang.Runtime.callField(it, "next", 1224901875, null)) );
					bool __temp_stmt7 = ( n2 == null );
					#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					bool __temp_boolv8 = false;
					#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if ( ! (__temp_stmt7) ) {
						#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						bool __temp_boolv11 = ( n2.nodeType == global::Xml.PCData );
						#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						bool __temp_boolv10 = false;
						#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						bool __temp_boolv9 = false;
						#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						if (__temp_boolv11) {
							#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
							string __temp_stmt12 = null;
							#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
							{
								#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
								string s1 = null;
								#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
								{
									#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
									if (( ( n2.nodeType == global::Xml.Document ) || ( n2.nodeType == global::Xml.Element ) )) {
										#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
										throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, unexpected ", global::haxe.lang.Runtime.toString(n2.nodeType)));
									}
									
									#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
									s1 = n2.nodeValue;
								}
								
								#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
								__temp_stmt12 = s1.Trim();
							}
							
							#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
							__temp_boolv10 = string.Equals(__temp_stmt12, "");
							#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
							if (__temp_boolv10) {
								#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
								__temp_boolv9 = ( ((global::Xml) (global::haxe.lang.Runtime.callField(it, "next", 1224901875, null)) ) == null );
							}
							
						}
						
						#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_boolv8 = ( ( __temp_boolv11 && __temp_boolv10 ) && __temp_boolv9 );
					}
					
					#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					bool __temp_stmt6 = ( __temp_stmt7 || __temp_boolv8 );
					#line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (__temp_stmt6) {
						#line 148 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						if (( ( n.nodeType == global::Xml.Document ) || ( n.nodeType == global::Xml.Element ) )) {
							#line 148 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
							throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, unexpected ", global::haxe.lang.Runtime.toString(n.nodeType)));
						}
						
						#line 148 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return n.nodeValue;
					}
					
				}
				
				#line 150 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat(this.get_name(), " does not only have data"));
			}
			
			#line 152 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (( ( v.nodeType != global::Xml.PCData ) && ( v.nodeType != global::Xml.CData ) )) {
				#line 153 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat(this.get_name(), " does not have data"));
			}
			
			#line 154 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			{
				#line 154 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				if (( ( v.nodeType == global::Xml.Document ) || ( v.nodeType == global::Xml.Element ) )) {
					#line 154 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, unexpected ", global::haxe.lang.Runtime.toString(v.nodeType)));
				}
				
				#line 154 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return v.nodeValue;
			}
			
		}
		#line default
		
		public virtual string get_innerHTML() {
			#line 158 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			global::System.Text.StringBuilder s_b = new global::System.Text.StringBuilder();
			{
				#line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				object __temp_iterator1 = null;
				#line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				{
					#line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					global::Xml _this = this.x;
					#line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (( ( _this.nodeType != global::Xml.Document ) && ( _this.nodeType != global::Xml.Element ) )) {
						#line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element or Document but found ", global::haxe.lang.Runtime.toString(_this.nodeType)));
					}
					
					#line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					__temp_iterator1 = ((object) (new global::_Array.ArrayIterator<object>(((global::Array<object>) (_this.children) ))) );
				}
				
				#line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
					#line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					global::Xml x = ((global::Xml) (global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null)) );
					string x1 = global::haxe.xml.Printer.print(x, default(global::haxe.lang.Null<bool>));
					#line 160 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					s_b.Append(((string) (global::Std.@string(x1)) ));
				}
				
			}
			
			#line 161 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return s_b.ToString();
		}
		#line default
		
		public virtual object get_elements() {
			#line 165 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			object it = this.x.elements();
			{
				#line 167 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				global::haxe.lang.Function __temp_odecl1 = ((global::haxe.lang.Function) (global::haxe.lang.Runtime.getField(it, "hasNext", 407283053, true)) );
				global::haxe.lang.Function __temp_odecl2 = new global::haxe.xml.Fast_get_elements_168__Fun(it);
				#line 166 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return new global::haxe.lang.DynamicObject(new int[]{407283053, 1224901875}, new object[]{__temp_odecl1, __temp_odecl2}, new int[]{}, new double[]{});
			}
			
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 407775868:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.hasNode = ((global::haxe.xml._Fast.HasNodeAccess) (@value) );
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return @value;
					}
					
					
					case 5193562:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.has = ((global::haxe.xml._Fast.HasAttribAccess) (@value) );
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return @value;
					}
					
					
					case 4849697:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.att = ((global::haxe.xml._Fast.AttribAccess) (@value) );
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return @value;
					}
					
					
					case 532592689:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.nodes = ((global::haxe.xml._Fast.NodeListAccess) (@value) );
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return @value;
					}
					
					
					case 1225394690:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.node = ((global::haxe.xml._Fast.NodeAccess) (@value) );
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return @value;
					}
					
					
					case 120:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.x = ((global::Xml) (@value) );
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return @value;
					}
					
					
					default:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 954067520:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_elements", 954067520)) );
					}
					
					
					case 1843324376:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_innerHTML", 1843324376)) );
					}
					
					
					case 1799621303:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_innerData", 1799621303)) );
					}
					
					
					case 1220160980:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_name", 1220160980)) );
					}
					
					
					case 407775868:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.hasNode;
					}
					
					
					case 5193562:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.has;
					}
					
					
					case 4849697:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.att;
					}
					
					
					case 532592689:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.nodes;
					}
					
					
					case 1225394690:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.node;
					}
					
					
					case 120:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.x;
					}
					
					
					default:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				switch (hash) {
					case 954067520:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.get_elements();
					}
					
					
					case 1843324376:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.get_innerHTML();
					}
					
					
					case 1799621303:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.get_innerData();
					}
					
					
					case 1220160980:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.get_name();
					}
					
					
					default:
					{
						#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			baseArr.push("hasNode");
			#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			baseArr.push("has");
			#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			baseArr.push("att");
			#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			baseArr.push("nodes");
			#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			baseArr.push("node");
			#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			baseArr.push("x");
			#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			{
				#line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.xml {
	public class Fast_get_elements_168__Fun : global::haxe.lang.Function {
		
		public Fast_get_elements_168__Fun(object it) : base(0, 0) {
			#line 168 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			this.it = it;
		}
		#line default
		
		public override object __hx_invoke0_o() {
			#line 169 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			global::Xml x = ((global::Xml) (global::haxe.lang.Runtime.callField(this.it, "next", 1224901875, null)) );
			if (( x == null )) {
				#line 171 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return null;
			}
			
			#line 172 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return new global::haxe.xml.Fast(((global::Xml) (x) ));
		}
		#line default
		
		public object it;
		
	}
}


