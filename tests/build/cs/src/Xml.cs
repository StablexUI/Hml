
#pragma warning disable 109, 114, 219, 429, 168, 162
public class Xml : global::haxe.lang.HxObject {
	
	static Xml() {
		#line 35 "/usr/lib/haxe/std/Xml.hx"
		global::Xml.Element = ((int) (0) );
		global::Xml.PCData = ((int) (1) );
		global::Xml.CData = ((int) (2) );
		global::Xml.Comment = ((int) (3) );
		global::Xml.DocType = ((int) (4) );
		global::Xml.ProcessingInstruction = ((int) (5) );
		global::Xml.Document = ((int) (6) );
	}
	#line default
	
	public Xml(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public Xml(int nodeType) {
		#line 316 "/usr/lib/haxe/std/Xml.hx"
		global::Xml.__hx_ctor__Xml(this, nodeType);
	}
	#line default
	
	public static void __hx_ctor__Xml(global::Xml __temp_me30, int nodeType) {
		#line 317 "/usr/lib/haxe/std/Xml.hx"
		__temp_me30.nodeType = nodeType;
		__temp_me30.children = new global::Array<object>(new object[]{});
		__temp_me30.attributeMap = new global::haxe.ds.StringMap<object>();
	}
	#line default
	
	public static int Element;
	
	public static int PCData;
	
	public static int CData;
	
	public static int Comment;
	
	public static int DocType;
	
	public static int ProcessingInstruction;
	
	public static int Document;
	
	public static global::Xml parse(string str) {
		#line 44 "/usr/lib/haxe/std/Xml.hx"
		return global::haxe.xml.Parser.parse(str, default(global::haxe.lang.Null<bool>));
	}
	#line default
	
	public static global::Xml createElement(string name) {
		#line 105 "/usr/lib/haxe/std/Xml.hx"
		global::Xml xml = new global::Xml(((int) (global::Xml.Element) ));
		{
			#line 106 "/usr/lib/haxe/std/Xml.hx"
			if (( xml.nodeType != global::Xml.Element )) {
				#line 106 "/usr/lib/haxe/std/Xml.hx"
				throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element but found ", global::haxe.lang.Runtime.toString(xml.nodeType)));
			}
			
			#line 106 "/usr/lib/haxe/std/Xml.hx"
			xml.nodeName = name;
		}
		
		#line 107 "/usr/lib/haxe/std/Xml.hx"
		return xml;
	}
	#line default
	
	public static global::Xml createPCData(string data) {
		#line 114 "/usr/lib/haxe/std/Xml.hx"
		global::Xml xml = new global::Xml(((int) (global::Xml.PCData) ));
		{
			#line 115 "/usr/lib/haxe/std/Xml.hx"
			if (( ( xml.nodeType == global::Xml.Document ) || ( xml.nodeType == global::Xml.Element ) )) {
				#line 115 "/usr/lib/haxe/std/Xml.hx"
				throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, unexpected ", global::haxe.lang.Runtime.toString(xml.nodeType)));
			}
			
			#line 115 "/usr/lib/haxe/std/Xml.hx"
			xml.nodeValue = data;
		}
		
		#line 116 "/usr/lib/haxe/std/Xml.hx"
		return xml;
	}
	#line default
	
	public static global::Xml createCData(string data) {
		#line 123 "/usr/lib/haxe/std/Xml.hx"
		global::Xml xml = new global::Xml(((int) (global::Xml.CData) ));
		{
			#line 124 "/usr/lib/haxe/std/Xml.hx"
			if (( ( xml.nodeType == global::Xml.Document ) || ( xml.nodeType == global::Xml.Element ) )) {
				#line 124 "/usr/lib/haxe/std/Xml.hx"
				throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, unexpected ", global::haxe.lang.Runtime.toString(xml.nodeType)));
			}
			
			#line 124 "/usr/lib/haxe/std/Xml.hx"
			xml.nodeValue = data;
		}
		
		#line 125 "/usr/lib/haxe/std/Xml.hx"
		return xml;
	}
	#line default
	
	public static global::Xml createComment(string data) {
		#line 132 "/usr/lib/haxe/std/Xml.hx"
		global::Xml xml = new global::Xml(((int) (global::Xml.Comment) ));
		{
			#line 133 "/usr/lib/haxe/std/Xml.hx"
			if (( ( xml.nodeType == global::Xml.Document ) || ( xml.nodeType == global::Xml.Element ) )) {
				#line 133 "/usr/lib/haxe/std/Xml.hx"
				throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, unexpected ", global::haxe.lang.Runtime.toString(xml.nodeType)));
			}
			
			#line 133 "/usr/lib/haxe/std/Xml.hx"
			xml.nodeValue = data;
		}
		
		#line 134 "/usr/lib/haxe/std/Xml.hx"
		return xml;
	}
	#line default
	
	public static global::Xml createDocType(string data) {
		#line 141 "/usr/lib/haxe/std/Xml.hx"
		global::Xml xml = new global::Xml(((int) (global::Xml.DocType) ));
		{
			#line 142 "/usr/lib/haxe/std/Xml.hx"
			if (( ( xml.nodeType == global::Xml.Document ) || ( xml.nodeType == global::Xml.Element ) )) {
				#line 142 "/usr/lib/haxe/std/Xml.hx"
				throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, unexpected ", global::haxe.lang.Runtime.toString(xml.nodeType)));
			}
			
			#line 142 "/usr/lib/haxe/std/Xml.hx"
			xml.nodeValue = data;
		}
		
		#line 143 "/usr/lib/haxe/std/Xml.hx"
		return xml;
	}
	#line default
	
	public static global::Xml createProcessingInstruction(string data) {
		#line 150 "/usr/lib/haxe/std/Xml.hx"
		global::Xml xml = new global::Xml(((int) (global::Xml.ProcessingInstruction) ));
		{
			#line 151 "/usr/lib/haxe/std/Xml.hx"
			if (( ( xml.nodeType == global::Xml.Document ) || ( xml.nodeType == global::Xml.Element ) )) {
				#line 151 "/usr/lib/haxe/std/Xml.hx"
				throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, unexpected ", global::haxe.lang.Runtime.toString(xml.nodeType)));
			}
			
			#line 151 "/usr/lib/haxe/std/Xml.hx"
			xml.nodeValue = data;
		}
		
		#line 152 "/usr/lib/haxe/std/Xml.hx"
		return xml;
	}
	#line default
	
	public static global::Xml createDocument() {
		#line 159 "/usr/lib/haxe/std/Xml.hx"
		return new global::Xml(((int) (global::Xml.Document) ));
	}
	#line default
	
	public static new object __hx_createEmpty() {
		#line 33 "/usr/lib/haxe/std/Xml.hx"
		return new global::Xml(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		#line 33 "/usr/lib/haxe/std/Xml.hx"
		return new global::Xml(((int) (global::haxe.lang.Runtime.toInt(arr[0])) ));
	}
	#line default
	
	public int nodeType;
	
	public string nodeName;
	
	public string nodeValue;
	
	public global::Xml parent;
	
	public global::Array<object> children;
	
	public global::haxe.ds.StringMap<object> attributeMap;
	
	public virtual string @get(string att) {
		#line 167 "/usr/lib/haxe/std/Xml.hx"
		if (( this.nodeType != global::Xml.Element )) {
			#line 168 "/usr/lib/haxe/std/Xml.hx"
			throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element but found ", global::haxe.lang.Runtime.toString(this.nodeType)));
		}
		
		#line 170 "/usr/lib/haxe/std/Xml.hx"
		return global::haxe.lang.Runtime.toString((this.attributeMap.@get(((string) (att) ))).toDynamic());
	}
	#line default
	
	public virtual void @set(string att, string @value) {
		#line 178 "/usr/lib/haxe/std/Xml.hx"
		if (( this.nodeType != global::Xml.Element )) {
			#line 179 "/usr/lib/haxe/std/Xml.hx"
			throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element but found ", global::haxe.lang.Runtime.toString(this.nodeType)));
		}
		
		#line 181 "/usr/lib/haxe/std/Xml.hx"
		this.attributeMap.@set(att, @value);
	}
	#line default
	
	public virtual bool exists(string att) {
		#line 200 "/usr/lib/haxe/std/Xml.hx"
		if (( this.nodeType != global::Xml.Element )) {
			#line 201 "/usr/lib/haxe/std/Xml.hx"
			throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element but found ", global::haxe.lang.Runtime.toString(this.nodeType)));
		}
		
		#line 203 "/usr/lib/haxe/std/Xml.hx"
		return this.attributeMap.exists(att);
	}
	#line default
	
	public virtual object attributes() {
		#line 210 "/usr/lib/haxe/std/Xml.hx"
		if (( this.nodeType != global::Xml.Element )) {
			#line 211 "/usr/lib/haxe/std/Xml.hx"
			throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element but found ", global::haxe.lang.Runtime.toString(this.nodeType)));
		}
		
		#line 213 "/usr/lib/haxe/std/Xml.hx"
		return ((object) (new global::haxe.ds._StringMap.StringMapKeyIterator<object>(((global::haxe.ds.StringMap<object>) (this.attributeMap) ))) );
	}
	#line default
	
	public virtual object elements() {
		#line 230 "/usr/lib/haxe/std/Xml.hx"
		if (( ( this.nodeType != global::Xml.Document ) && ( this.nodeType != global::Xml.Element ) )) {
			#line 230 "/usr/lib/haxe/std/Xml.hx"
			throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element or Document but found ", global::haxe.lang.Runtime.toString(this.nodeType)));
		}
		
		#line 231 "/usr/lib/haxe/std/Xml.hx"
		global::Array<object> ret = null;
		#line 231 "/usr/lib/haxe/std/Xml.hx"
		{
			#line 231 "/usr/lib/haxe/std/Xml.hx"
			global::Array<object> _g = new global::Array<object>(new object[]{});
			#line 231 "/usr/lib/haxe/std/Xml.hx"
			{
				#line 231 "/usr/lib/haxe/std/Xml.hx"
				int _g1 = 0;
				#line 231 "/usr/lib/haxe/std/Xml.hx"
				global::Array<object> _g2 = this.children;
				#line 231 "/usr/lib/haxe/std/Xml.hx"
				while (( _g1 < _g2.length )) {
					#line 231 "/usr/lib/haxe/std/Xml.hx"
					global::Xml child = ((global::Xml) (_g2[_g1]) );
					#line 231 "/usr/lib/haxe/std/Xml.hx"
					 ++ _g1;
					#line 231 "/usr/lib/haxe/std/Xml.hx"
					if (( child.nodeType == global::Xml.Element )) {
						#line 231 "/usr/lib/haxe/std/Xml.hx"
						_g.push(child);
					}
					
				}
				
			}
			
			#line 231 "/usr/lib/haxe/std/Xml.hx"
			ret = _g;
		}
		
		#line 232 "/usr/lib/haxe/std/Xml.hx"
		return ((object) (new global::_Array.ArrayIterator<object>(((global::Array<object>) (ret) ))) );
	}
	#line default
	
	public virtual object elementsNamed(string name) {
		#line 240 "/usr/lib/haxe/std/Xml.hx"
		if (( ( this.nodeType != global::Xml.Document ) && ( this.nodeType != global::Xml.Element ) )) {
			#line 240 "/usr/lib/haxe/std/Xml.hx"
			throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element or Document but found ", global::haxe.lang.Runtime.toString(this.nodeType)));
		}
		
		#line 241 "/usr/lib/haxe/std/Xml.hx"
		global::Array<object> ret = null;
		#line 241 "/usr/lib/haxe/std/Xml.hx"
		{
			#line 241 "/usr/lib/haxe/std/Xml.hx"
			global::Array<object> _g = new global::Array<object>(new object[]{});
			#line 241 "/usr/lib/haxe/std/Xml.hx"
			{
				#line 241 "/usr/lib/haxe/std/Xml.hx"
				int _g1 = 0;
				#line 241 "/usr/lib/haxe/std/Xml.hx"
				global::Array<object> _g2 = this.children;
				#line 241 "/usr/lib/haxe/std/Xml.hx"
				while (( _g1 < _g2.length )) {
					#line 241 "/usr/lib/haxe/std/Xml.hx"
					global::Xml child = ((global::Xml) (_g2[_g1]) );
					#line 241 "/usr/lib/haxe/std/Xml.hx"
					 ++ _g1;
					#line 241 "/usr/lib/haxe/std/Xml.hx"
					bool __temp_boolv3 = ( child.nodeType == global::Xml.Element );
					#line 241 "/usr/lib/haxe/std/Xml.hx"
					bool __temp_boolv2 = false;
					#line 241 "/usr/lib/haxe/std/Xml.hx"
					if (__temp_boolv3) {
						#line 241 "/usr/lib/haxe/std/Xml.hx"
						string __temp_stmt4 = null;
						#line 241 "/usr/lib/haxe/std/Xml.hx"
						{
							#line 241 "/usr/lib/haxe/std/Xml.hx"
							if (( child.nodeType != global::Xml.Element )) {
								#line 241 "/usr/lib/haxe/std/Xml.hx"
								throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element but found ", global::haxe.lang.Runtime.toString(child.nodeType)));
							}
							
							#line 241 "/usr/lib/haxe/std/Xml.hx"
							__temp_stmt4 = child.nodeName;
						}
						
						#line 241 "/usr/lib/haxe/std/Xml.hx"
						__temp_boolv2 = string.Equals(__temp_stmt4, name);
					}
					
					#line 241 "/usr/lib/haxe/std/Xml.hx"
					bool __temp_stmt1 = ( __temp_boolv3 && __temp_boolv2 );
					#line 241 "/usr/lib/haxe/std/Xml.hx"
					if (__temp_stmt1) {
						#line 241 "/usr/lib/haxe/std/Xml.hx"
						_g.push(child);
					}
					
				}
				
			}
			
			#line 241 "/usr/lib/haxe/std/Xml.hx"
			ret = _g;
		}
		
		#line 242 "/usr/lib/haxe/std/Xml.hx"
		return ((object) (new global::_Array.ArrayIterator<object>(((global::Array<object>) (ret) ))) );
	}
	#line default
	
	public virtual global::Xml firstElement() {
		#line 257 "/usr/lib/haxe/std/Xml.hx"
		if (( ( this.nodeType != global::Xml.Document ) && ( this.nodeType != global::Xml.Element ) )) {
			#line 257 "/usr/lib/haxe/std/Xml.hx"
			throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element or Document but found ", global::haxe.lang.Runtime.toString(this.nodeType)));
		}
		
		#line 258 "/usr/lib/haxe/std/Xml.hx"
		{
			#line 258 "/usr/lib/haxe/std/Xml.hx"
			int _g = 0;
			#line 258 "/usr/lib/haxe/std/Xml.hx"
			global::Array<object> _g1 = this.children;
			#line 258 "/usr/lib/haxe/std/Xml.hx"
			while (( _g < _g1.length )) {
				#line 258 "/usr/lib/haxe/std/Xml.hx"
				global::Xml child = ((global::Xml) (_g1[_g]) );
				#line 258 "/usr/lib/haxe/std/Xml.hx"
				 ++ _g;
				if (( child.nodeType == global::Xml.Element )) {
					#line 260 "/usr/lib/haxe/std/Xml.hx"
					return child;
				}
				
			}
			
		}
		
		#line 263 "/usr/lib/haxe/std/Xml.hx"
		return null;
	}
	#line default
	
	public virtual void addChild(global::Xml x) {
		#line 273 "/usr/lib/haxe/std/Xml.hx"
		if (( ( this.nodeType != global::Xml.Document ) && ( this.nodeType != global::Xml.Element ) )) {
			#line 273 "/usr/lib/haxe/std/Xml.hx"
			throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element or Document but found ", global::haxe.lang.Runtime.toString(this.nodeType)));
		}
		
		#line 274 "/usr/lib/haxe/std/Xml.hx"
		if (( x.parent != null )) {
			#line 275 "/usr/lib/haxe/std/Xml.hx"
			x.parent.removeChild(x);
		}
		
		#line 277 "/usr/lib/haxe/std/Xml.hx"
		this.children.push(x);
		x.parent = this;
	}
	#line default
	
	public virtual bool removeChild(global::Xml x) {
		#line 286 "/usr/lib/haxe/std/Xml.hx"
		if (( ( this.nodeType != global::Xml.Document ) && ( this.nodeType != global::Xml.Element ) )) {
			#line 286 "/usr/lib/haxe/std/Xml.hx"
			throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element or Document but found ", global::haxe.lang.Runtime.toString(this.nodeType)));
		}
		
		#line 287 "/usr/lib/haxe/std/Xml.hx"
		if (this.children.@remove(x)) {
			#line 288 "/usr/lib/haxe/std/Xml.hx"
			x.parent = null;
			return true;
		}
		
		#line 291 "/usr/lib/haxe/std/Xml.hx"
		return false;
	}
	#line default
	
	public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
		unchecked {
			#line 33 "/usr/lib/haxe/std/Xml.hx"
			switch (hash) {
				case 1988514268:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					this.nodeType = ((int) (@value) );
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return @value;
				}
				
				
				default:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return base.__hx_setField_f(field, hash, @value, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
		unchecked {
			#line 33 "/usr/lib/haxe/std/Xml.hx"
			switch (hash) {
				case 364006368:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					this.attributeMap = ((global::haxe.ds.StringMap<object>) (global::haxe.ds.StringMap<object>.__hx_cast<object>(((global::haxe.ds.StringMap) (@value) ))) );
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return @value;
				}
				
				
				case 1886001471:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					this.children = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return @value;
				}
				
				
				case 1836975402:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					this.parent = ((global::Xml) (@value) );
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return @value;
				}
				
				
				case 1441685007:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					this.nodeValue = global::haxe.lang.Runtime.toString(@value);
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return @value;
				}
				
				
				case 1920782701:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					this.nodeName = global::haxe.lang.Runtime.toString(@value);
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return @value;
				}
				
				
				case 1988514268:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					this.nodeType = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return @value;
				}
				
				
				default:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return base.__hx_setField(field, hash, @value, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
		unchecked {
			#line 33 "/usr/lib/haxe/std/Xml.hx"
			switch (hash) {
				case 1139639992:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "removeChild", 1139639992)) );
				}
				
				
				case 1058459579:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "addChild", 1058459579)) );
				}
				
				
				case 798803052:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "firstElement", 798803052)) );
				}
				
				
				case 1116398082:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "elementsNamed", 1116398082)) );
				}
				
				
				case 63190583:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "elements", 63190583)) );
				}
				
				
				case 393324759:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "attributes", 393324759)) );
				}
				
				
				case 1071652316:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "exists", 1071652316)) );
				}
				
				
				case 5741474:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set", 5741474)) );
				}
				
				
				case 5144726:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get", 5144726)) );
				}
				
				
				case 364006368:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return this.attributeMap;
				}
				
				
				case 1886001471:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return this.children;
				}
				
				
				case 1836975402:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return this.parent;
				}
				
				
				case 1441685007:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return this.nodeValue;
				}
				
				
				case 1920782701:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return this.nodeName;
				}
				
				
				case 1988514268:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return this.nodeType;
				}
				
				
				default:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
		unchecked {
			#line 33 "/usr/lib/haxe/std/Xml.hx"
			switch (hash) {
				case 1988514268:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return ((double) (this.nodeType) );
				}
				
				
				default:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
		unchecked {
			#line 33 "/usr/lib/haxe/std/Xml.hx"
			switch (hash) {
				case 1139639992:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return this.removeChild(((global::Xml) (dynargs[0]) ));
				}
				
				
				case 1058459579:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					this.addChild(((global::Xml) (dynargs[0]) ));
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					break;
				}
				
				
				case 798803052:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return this.firstElement();
				}
				
				
				case 1116398082:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return this.elementsNamed(global::haxe.lang.Runtime.toString(dynargs[0]));
				}
				
				
				case 63190583:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return this.elements();
				}
				
				
				case 393324759:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return this.attributes();
				}
				
				
				case 1071652316:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return this.exists(global::haxe.lang.Runtime.toString(dynargs[0]));
				}
				
				
				case 5741474:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					this.@set(global::haxe.lang.Runtime.toString(dynargs[0]), global::haxe.lang.Runtime.toString(dynargs[1]));
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					break;
				}
				
				
				case 5144726:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return this.@get(global::haxe.lang.Runtime.toString(dynargs[0]));
				}
				
				
				default:
				{
					#line 33 "/usr/lib/haxe/std/Xml.hx"
					return base.__hx_invokeField(field, hash, dynargs);
				}
				
			}
			
			#line 33 "/usr/lib/haxe/std/Xml.hx"
			return null;
		}
		#line default
	}
	
	
	public override void __hx_getFields(global::Array<object> baseArr) {
		#line 33 "/usr/lib/haxe/std/Xml.hx"
		baseArr.push("attributeMap");
		#line 33 "/usr/lib/haxe/std/Xml.hx"
		baseArr.push("children");
		#line 33 "/usr/lib/haxe/std/Xml.hx"
		baseArr.push("parent");
		#line 33 "/usr/lib/haxe/std/Xml.hx"
		baseArr.push("nodeValue");
		#line 33 "/usr/lib/haxe/std/Xml.hx"
		baseArr.push("nodeName");
		#line 33 "/usr/lib/haxe/std/Xml.hx"
		baseArr.push("nodeType");
		#line 33 "/usr/lib/haxe/std/Xml.hx"
		{
			#line 33 "/usr/lib/haxe/std/Xml.hx"
			base.__hx_getFields(baseArr);
		}
		
	}
	#line default
	
}


