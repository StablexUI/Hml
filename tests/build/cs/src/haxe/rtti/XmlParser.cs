
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.rtti {
	public class XmlParser : global::haxe.lang.HxObject {
		
		public XmlParser(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public XmlParser() {
			#line 31 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			global::haxe.rtti.XmlParser.__hx_ctor_haxe_rtti_XmlParser(this);
		}
		#line default
		
		public static void __hx_ctor_haxe_rtti_XmlParser(global::haxe.rtti.XmlParser __temp_me60) {
			#line 32 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			__temp_me60.root = new global::Array<object>();
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			return new global::haxe.rtti.XmlParser(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			return new global::haxe.rtti.XmlParser();
		}
		#line default
		
		public global::Array<object> root;
		
		public string curplatform;
		
		public virtual string mkPath(string p) {
			#line 285 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			return p;
		}
		#line default
		
		public virtual global::Array<object> mkTypeParams(string p) {
			#line 289 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			global::Array<object> pl = global::haxe.lang.StringExt.split(p, ":");
			if (string.Equals(global::haxe.lang.Runtime.toString(pl[0]), "")) {
				#line 291 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				return new global::Array<object>();
			}
			
			#line 292 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			return pl;
		}
		#line default
		
		public virtual global::haxe.rtti.Rights mkRights(string r) {
			#line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			switch (r) {
				case "null":
				{
					#line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					return global::haxe.rtti.Rights.RNo;
				}
				
				
				case "method":
				{
					#line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					return global::haxe.rtti.Rights.RMethod;
				}
				
				
				case "dynamic":
				{
					#line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					return global::haxe.rtti.Rights.RDynamic;
				}
				
				
				case "inline":
				{
					#line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					return global::haxe.rtti.Rights.RInline;
				}
				
				
				default:
				{
					#line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					return global::haxe.rtti.Rights.RCall(r);
				}
				
			}
			
		}
		#line default
		
		public virtual object xerror(global::haxe.xml.Fast c) {
			#line 306 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Invalid ", c.get_name()));
		}
		#line default
		
		public virtual global::haxe.rtti.TypeTree processElement(global::Xml x) {
			#line 316 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			global::haxe.xml.Fast c = new global::haxe.xml.Fast(((global::Xml) (x) ));
			{
				#line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				string _g = c.get_name();
				#line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				switch (_g) {
					case "class":
					{
						#line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return global::haxe.rtti.TypeTree.TClassdecl(this.xclass(c));
					}
					
					
					case "enum":
					{
						#line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return global::haxe.rtti.TypeTree.TEnumdecl(this.xenum(c));
					}
					
					
					case "typedef":
					{
						#line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return global::haxe.rtti.TypeTree.TTypedecl(this.xtypedef(c));
					}
					
					
					case "abstract":
					{
						#line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return global::haxe.rtti.TypeTree.TAbstractdecl(this.xabstract(c));
					}
					
					
					default:
					{
						#line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.rtti.TypeTree) (this.xerror(c)) );
					}
					
				}
				
			}
			
		}
		#line default
		
		public virtual global::Array<object> xmeta(global::haxe.xml.Fast x) {
			unchecked {
				#line 327 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				global::Array<object> ml = new global::Array<object>(new object[]{});
				{
					#line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					global::List<object> _this = x.nodes.resolve("m");
					#line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					global::Array _g_head = _this.h;
					#line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					object _g_val = null;
					#line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					while (( _g_head != null )) {
						#line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						global::haxe.xml.Fast m = null;
						#line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						object __temp_stmt2 = null;
						#line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						{
							#line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							_g_val = _g_head[0];
							#line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							_g_head = ((global::Array) (_g_head[1]) );
							#line 326 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							__temp_stmt2 = _g_val;
						}
						
						#line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						m = ((global::haxe.xml.Fast) (__temp_stmt2) );
						global::Array<object> pl = new global::Array<object>(new object[]{});
						{
							#line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							global::List<object> _this1 = m.nodes.resolve("e");
							#line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							global::Array _g_head1 = _this1.h;
							#line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							object _g_val1 = null;
							#line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							while (( _g_head1 != null )) {
								#line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								global::haxe.xml.Fast p = null;
								#line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								object __temp_stmt3 = null;
								#line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								{
									#line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									_g_val1 = _g_head1[0];
									#line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									_g_head1 = ((global::Array) (_g_head1[1]) );
									#line 326 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									__temp_stmt3 = _g_val1;
								}
								
								#line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								p = ((global::haxe.xml.Fast) (__temp_stmt3) );
								pl.push(p.get_innerHTML());
							}
							
						}
						
						#line 332 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						object __temp_stmt4 = null;
						#line 332 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						{
							#line 332 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							string __temp_odecl1 = m.att.resolve("n");
							#line 332 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							__temp_stmt4 = new global::haxe.lang.DynamicObject(new int[]{1224700491, 1836776262}, new object[]{__temp_odecl1, pl}, new int[]{}, new double[]{});
						}
						
						#line 332 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						ml.push(__temp_stmt4);
					}
					
				}
				
				#line 334 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				return ml;
			}
			#line default
		}
		
		
		public virtual global::List<object> xoverloads(global::haxe.xml.Fast x) {
			#line 338 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			global::List<object> l = new global::List<object>();
			{
				#line 339 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				object __temp_iterator1 = x.get_elements();
				#line 339 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
					#line 339 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					global::haxe.xml.Fast m = ((global::haxe.xml.Fast) (global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null)) );
					l.@add(this.xclassfield(m, default(global::haxe.lang.Null<bool>)));
				}
				
			}
			
			#line 342 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			return l;
		}
		#line default
		
		public virtual object xpath(global::haxe.xml.Fast x) {
			#line 346 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			string path = this.mkPath(x.att.resolve("path"));
			global::List<object> @params = new global::List<object>();
			{
				#line 348 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				object __temp_iterator1 = x.get_elements();
				#line 348 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
					#line 348 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					global::haxe.xml.Fast c = ((global::haxe.xml.Fast) (global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null)) );
					@params.@add(this.xtype(c));
				}
				
			}
			
			#line 350 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			return new global::haxe.lang.DynamicObject(new int[]{1246881189, 1836776262}, new object[]{path, @params}, new int[]{}, new double[]{});
		}
		#line default
		
		public virtual object xclass(global::haxe.xml.Fast x) {
			#line 357 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			object csuper = null;
			string doc = null;
			global::haxe.rtti.CType tdynamic = null;
			global::List<object> interfaces = new global::List<object>();
			global::List<object> fields = new global::List<object>();
			global::List<object> statics = new global::List<object>();
			global::Array<object> meta = new global::Array<object>(new object[]{});
			{
				#line 364 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				object __temp_iterator1 = x.get_elements();
				#line 364 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
					#line 364 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					global::haxe.xml.Fast c = ((global::haxe.xml.Fast) (global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null)) );
					string _g = c.get_name();
					#line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					switch (_g) {
						case "haxe_doc":
						{
							#line 366 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							doc = c.get_innerData();
							#line 366 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case "extends":
						{
							#line 367 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							csuper = this.xpath(c);
							#line 367 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case "implements":
						{
							#line 368 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							interfaces.@add(this.xpath(c));
							#line 368 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case "haxe_dynamic":
						{
							#line 369 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							tdynamic = this.xtype(new global::haxe.xml.Fast(((global::Xml) (c.x.firstElement()) )));
							#line 369 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case "meta":
						{
							#line 370 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							meta = this.xmeta(c);
							#line 370 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						default:
						{
							#line 372 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (c.x.exists("static")) {
								#line 373 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								statics.@add(this.xclassfield(c, default(global::haxe.lang.Null<bool>)));
							}
							else {
								#line 375 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								fields.@add(this.xclassfield(c, default(global::haxe.lang.Null<bool>)));
							}
							
							#line 372 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
					}
					
				}
				
			}
			
			#line 377 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			{
				#line 378 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				string __temp_odecl1 = ( (x.has.resolve("file")) ? (x.att.resolve("file")) : (null) );
				string __temp_odecl2 = this.mkPath(x.att.resolve("path"));
				string __temp_odecl3 = ( (x.has.resolve("module")) ? (this.mkPath(x.att.resolve("module"))) : (null) );
				#line 382 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				bool __temp_odecl4 = x.x.exists("private");
				bool __temp_odecl5 = x.x.exists("extern");
				bool __temp_odecl6 = x.x.exists("interface");
				global::Array<object> __temp_odecl7 = this.mkTypeParams(x.att.resolve("params"));
				#line 391 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				global::List<object> __temp_odecl8 = this.defplat();
				#line 377 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				return new global::haxe.lang.DynamicObject(new int[]{4997752, 9342585, 225290809, 310553184, 408610927, 528773354, 552686987, 671590589, 912604165, 1087583404, 1136381564, 1213811397, 1246881189, 1695633562, 1836776262}, new object[]{doc, fields, __temp_odecl4, __temp_odecl8, __temp_odecl6, __temp_odecl5, tdynamic, csuper, statics, __temp_odecl3, __temp_odecl1, meta, __temp_odecl2, interfaces, __temp_odecl7}, new int[]{}, new double[]{});
			}
			
		}
		#line default
		
		public virtual object xclassfield(global::haxe.xml.Fast x, global::haxe.lang.Null<bool> defPublic) {
			#line 396 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			global::haxe.lang.Null<bool> __temp_defPublic59 = ( ( ! (defPublic.hasValue) ) ? (new global::haxe.lang.Null<bool>(false, true)) : (defPublic) );
			object e = x.get_elements();
			global::haxe.rtti.CType t = this.xtype(((global::haxe.xml.Fast) (global::haxe.lang.Runtime.callField(e, "next", 1224901875, null)) ));
			string doc = null;
			global::Array<object> meta = new global::Array<object>(new object[]{});
			global::List<object> overloads = null;
			{
				#line 402 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				object __temp_iterator1 = e;
				#line 402 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
					#line 402 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					global::haxe.xml.Fast c = ((global::haxe.xml.Fast) (global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null)) );
					string _g = c.get_name();
					#line 403 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					switch (_g) {
						case "haxe_doc":
						{
							#line 404 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							doc = c.get_innerData();
							#line 404 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case "meta":
						{
							#line 405 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							meta = this.xmeta(c);
							#line 405 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case "overloads":
						{
							#line 406 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							overloads = this.xoverloads(c);
							#line 406 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						default:
						{
							#line 407 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							this.xerror(c);
							#line 407 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
					}
					
				}
				
			}
			
			#line 409 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			{
				#line 410 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				string __temp_odecl1 = x.get_name();
				#line 412 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				bool __temp_odecl2 = ( x.x.exists("public") || (__temp_defPublic59).@value );
				bool __temp_odecl3 = x.x.exists("override");
				global::haxe.lang.Null<int> __temp_odecl4 = ( (x.has.resolve("line")) ? (global::Std.parseInt(x.att.resolve("line"))) : (default(global::haxe.lang.Null<int>)) );
				#line 416 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				global::haxe.rtti.Rights __temp_odecl5 = ( (x.has.resolve("get")) ? (this.mkRights(x.att.resolve("get"))) : (global::haxe.rtti.Rights.RNormal) );
				global::haxe.rtti.Rights __temp_odecl6 = ( (x.has.resolve("set")) ? (this.mkRights(x.att.resolve("set"))) : (global::haxe.rtti.Rights.RNormal) );
				global::Array<object> __temp_odecl7 = ( (x.has.resolve("params")) ? (this.mkTypeParams(x.att.resolve("params"))) : (new global::Array<object>(new object[]{})) );
				global::List<object> __temp_odecl8 = this.defplat();
				#line 422 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				string __temp_odecl9 = ( (x.has.resolve("expr")) ? (x.att.resolve("expr")) : (null) );
				#line 409 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				return new global::haxe.lang.DynamicObject(new int[]{4997752, 5144726, 5741474, 310553184, 1063066675, 1126038837, 1138177110, 1202919412, 1213811397, 1224700491, 1233348025, 1292432058, 1836776262}, new object[]{doc, __temp_odecl5, __temp_odecl6, __temp_odecl8, __temp_odecl2, __temp_odecl9, __temp_odecl3, (__temp_odecl4).toDynamic(), meta, __temp_odecl1, overloads, t, __temp_odecl7}, new int[]{}, new double[]{});
			}
			
		}
		#line default
		
		public virtual object xenum(global::haxe.xml.Fast x) {
			#line 427 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			global::List<object> cl = new global::List<object>();
			string doc = null;
			global::Array<object> meta = new global::Array<object>(new object[]{});
			{
				#line 430 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				object __temp_iterator1 = x.get_elements();
				#line 430 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
					#line 430 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					global::haxe.xml.Fast c = ((global::haxe.xml.Fast) (global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null)) );
					if (string.Equals(c.get_name(), "haxe_doc")) {
						#line 432 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						doc = c.get_innerData();
					}
					else if (string.Equals(c.get_name(), "meta")) {
						#line 434 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						meta = this.xmeta(c);
					}
					else {
						#line 436 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						cl.@add(this.xenumfield(c));
					}
					
				}
				
			}
			
			#line 437 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			{
				#line 438 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				string __temp_odecl1 = ( (x.has.resolve("file")) ? (x.att.resolve("file")) : (null) );
				string __temp_odecl2 = this.mkPath(x.att.resolve("path"));
				string __temp_odecl3 = ( (x.has.resolve("module")) ? (this.mkPath(x.att.resolve("module"))) : (null) );
				#line 442 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				bool __temp_odecl4 = x.x.exists("private");
				bool __temp_odecl5 = x.x.exists("extern");
				global::Array<object> __temp_odecl6 = this.mkTypeParams(x.att.resolve("params"));
				#line 446 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				global::List<object> __temp_odecl7 = this.defplat();
				#line 437 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				return new global::haxe.lang.DynamicObject(new int[]{4997752, 225290809, 310553184, 528773354, 885141049, 1087583404, 1136381564, 1213811397, 1246881189, 1836776262}, new object[]{doc, __temp_odecl4, __temp_odecl7, __temp_odecl5, cl, __temp_odecl3, __temp_odecl1, meta, __temp_odecl2, __temp_odecl6}, new int[]{}, new double[]{});
			}
			
		}
		#line default
		
		public virtual object xenumfield(global::haxe.xml.Fast x) {
			unchecked {
				#line 452 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				global::List<object> args = null;
				global::Xml xdoc = ((global::Xml) (global::haxe.lang.Runtime.callField(x.x.elementsNamed("haxe_doc"), "next", 1224901875, null)) );
				global::Array<object> meta = null;
				#line 454 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				if (x.hasNode.resolve("meta")) {
					#line 454 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					meta = this.xmeta(x.node.resolve("meta"));
				}
				else {
					#line 454 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					meta = new global::Array<object>(new object[]{});
				}
				
				#line 455 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				if (x.has.resolve("a")) {
					#line 456 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					global::Array<object> names = global::haxe.lang.StringExt.split(x.att.resolve("a"), ":");
					object elts = x.get_elements();
					args = new global::List<object>();
					{
						#line 459 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						int _g = 0;
						#line 459 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						while (( _g < names.length )) {
							#line 459 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							string c = global::haxe.lang.Runtime.toString(names[_g]);
							#line 459 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							 ++ _g;
							bool opt = false;
							if (string.Equals(global::haxe.lang.StringExt.charAt(c, 0), "?")) {
								#line 462 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								opt = true;
								c = global::haxe.lang.StringExt.substr(c, 1, default(global::haxe.lang.Null<int>));
							}
							
							#line 465 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							object __temp_stmt5 = null;
							#line 465 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							{
								#line 468 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								global::haxe.rtti.CType __temp_odecl1 = this.xtype(((global::haxe.xml.Fast) (global::haxe.lang.Runtime.callField(elts, "next", 1224901875, null)) ));
								#line 465 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								__temp_stmt5 = new global::haxe.lang.DynamicObject(new int[]{116, 5545011, 1224700491}, new object[]{__temp_odecl1, opt, c}, new int[]{}, new double[]{});
							}
							
							#line 465 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							args.@add(__temp_stmt5);
						}
						
					}
					
				}
				
				#line 472 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				{
					#line 473 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					string __temp_odecl2 = x.get_name();
					#line 475 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					string __temp_odecl3 = ( (( xdoc == null )) ? (null) : (new global::haxe.xml.Fast(((global::Xml) (xdoc) )).get_innerData()) );
					#line 477 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					global::List<object> __temp_odecl4 = this.defplat();
					#line 472 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					return new global::haxe.lang.DynamicObject(new int[]{4997752, 310553184, 1081380189, 1213811397, 1224700491}, new object[]{__temp_odecl3, __temp_odecl4, args, meta, __temp_odecl2}, new int[]{}, new double[]{});
				}
				
			}
			#line default
		}
		
		
		public virtual object xabstract(global::haxe.xml.Fast x) {
			#line 482 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			string doc = null;
			#line 482 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			object impl = null;
			#line 482 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			global::haxe.rtti.CType athis = null;
			global::Array<object> meta = new global::Array<object>(new object[]{});
			#line 483 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			global::Array<object> to = new global::Array<object>(new object[]{});
			#line 483 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			global::Array<object> @from = new global::Array<object>(new object[]{});
			{
				#line 484 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				object __temp_iterator1 = x.get_elements();
				#line 484 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
					#line 484 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					global::haxe.xml.Fast c = ((global::haxe.xml.Fast) (global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null)) );
					string _g = c.get_name();
					#line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					switch (_g) {
						case "haxe_doc":
						{
							#line 487 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							doc = c.get_innerData();
							#line 487 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case "meta":
						{
							#line 489 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							meta = this.xmeta(c);
							#line 489 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case "to":
						{
							#line 491 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							{
								#line 491 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								object __temp_iterator2 = c.get_elements();
								#line 491 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator2, "hasNext", 407283053, null))) {
									#line 491 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									global::haxe.xml.Fast t = ((global::haxe.xml.Fast) (global::haxe.lang.Runtime.callField(__temp_iterator2, "next", 1224901875, null)) );
									object __temp_stmt11 = null;
									#line 492 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									{
										#line 492 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										global::haxe.rtti.CType __temp_odecl1 = this.xtype(new global::haxe.xml.Fast(((global::Xml) (t.x.firstElement()) )));
										#line 492 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										string __temp_odecl2 = ( (t.has.resolve("field")) ? (t.att.resolve("field")) : (null) );
										#line 492 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										__temp_stmt11 = new global::haxe.lang.DynamicObject(new int[]{116, 9671866}, new object[]{__temp_odecl1, __temp_odecl2}, new int[]{}, new double[]{});
									}
									
									#line 492 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									to.push(__temp_stmt11);
								}
								
							}
							
							#line 491 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case "from":
						{
							#line 494 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							{
								#line 494 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								object __temp_iterator3 = c.get_elements();
								#line 494 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator3, "hasNext", 407283053, null))) {
									#line 494 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									global::haxe.xml.Fast t1 = ((global::haxe.xml.Fast) (global::haxe.lang.Runtime.callField(__temp_iterator3, "next", 1224901875, null)) );
									object __temp_stmt12 = null;
									#line 495 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									{
										#line 495 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										global::haxe.rtti.CType __temp_odecl3 = this.xtype(new global::haxe.xml.Fast(((global::Xml) (t1.x.firstElement()) )));
										#line 495 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										string __temp_odecl4 = ( (t1.has.resolve("field")) ? (t1.att.resolve("field")) : (null) );
										#line 495 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										__temp_stmt12 = new global::haxe.lang.DynamicObject(new int[]{116, 9671866}, new object[]{__temp_odecl3, __temp_odecl4}, new int[]{}, new double[]{});
									}
									
									#line 495 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									@from.push(__temp_stmt12);
								}
								
							}
							
							#line 494 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case "impl":
						{
							#line 497 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							impl = this.xclass(c.node.resolve("class"));
							#line 497 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case "this":
						{
							#line 499 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							athis = this.xtype(new global::haxe.xml.Fast(((global::Xml) (c.x.firstElement()) )));
							#line 499 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						default:
						{
							#line 501 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							this.xerror(c);
							#line 501 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
					}
					
				}
				
			}
			
			#line 503 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			{
				#line 504 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				string __temp_odecl5 = ( (x.has.resolve("file")) ? (x.att.resolve("file")) : (null) );
				string __temp_odecl6 = this.mkPath(x.att.resolve("path"));
				string __temp_odecl7 = ( (x.has.resolve("module")) ? (this.mkPath(x.att.resolve("module"))) : (null) );
				#line 508 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				bool __temp_odecl8 = x.x.exists("private");
				global::Array<object> __temp_odecl9 = this.mkTypeParams(x.att.resolve("params"));
				global::List<object> __temp_odecl10 = this.defplat();
				#line 503 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				return new global::haxe.lang.DynamicObject(new int[]{25979, 4997752, 225290809, 310553184, 651840319, 1087583404, 1136381564, 1136829802, 1169850080, 1213811397, 1246881189, 1836776262}, new object[]{to, doc, __temp_odecl8, __temp_odecl10, athis, __temp_odecl7, __temp_odecl5, @from, impl, meta, __temp_odecl6, __temp_odecl9}, new int[]{}, new double[]{});
			}
			
		}
		#line default
		
		public virtual object xtypedef(global::haxe.xml.Fast x) {
			#line 521 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			string doc = null;
			global::haxe.rtti.CType t = null;
			global::Array<object> meta = new global::Array<object>(new object[]{});
			{
				#line 524 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				object __temp_iterator1 = x.get_elements();
				#line 524 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
					#line 524 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					global::haxe.xml.Fast c = ((global::haxe.xml.Fast) (global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null)) );
					if (string.Equals(c.get_name(), "haxe_doc")) {
						#line 526 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						doc = c.get_innerData();
					}
					else if (string.Equals(c.get_name(), "meta")) {
						#line 528 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						meta = this.xmeta(c);
					}
					else {
						#line 530 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						t = this.xtype(c);
					}
					
				}
				
			}
			
			#line 531 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			global::haxe.ds.StringMap<object> types = new global::haxe.ds.StringMap<object>();
			if ( ! (string.Equals(this.curplatform, null)) ) {
				#line 533 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				types.@set(this.curplatform, t);
			}
			
			#line 534 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			{
				#line 535 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				string __temp_odecl1 = ( (x.has.resolve("file")) ? (x.att.resolve("file")) : (null) );
				string __temp_odecl2 = this.mkPath(x.att.resolve("path"));
				string __temp_odecl3 = ( (x.has.resolve("module")) ? (this.mkPath(x.att.resolve("module"))) : (null) );
				#line 539 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				bool __temp_odecl4 = x.x.exists("private");
				global::Array<object> __temp_odecl5 = this.mkTypeParams(x.att.resolve("params"));
				#line 543 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				global::List<object> __temp_odecl6 = this.defplat();
				#line 534 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				return new global::haxe.lang.DynamicObject(new int[]{4997752, 225290809, 310553184, 449540217, 1087583404, 1136381564, 1213811397, 1246881189, 1292432058, 1836776262}, new object[]{doc, __temp_odecl4, __temp_odecl6, ((global::haxe.ds.StringMap<object>) (types) ), __temp_odecl3, __temp_odecl1, meta, __temp_odecl2, t, __temp_odecl5}, new int[]{}, new double[]{});
			}
			
		}
		#line default
		
		public virtual global::haxe.rtti.CType xtype(global::haxe.xml.Fast x) {
			unchecked {
				#line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				{
					#line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					string _g = x.get_name();
					#line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					switch (_g) {
						case "unknown":
						{
							#line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return global::haxe.rtti.CType.CUnknown;
						}
						
						
						case "e":
						{
							#line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return global::haxe.rtti.CType.CEnum(this.mkPath(x.att.resolve("path")), this.xtypeparams(x));
						}
						
						
						case "c":
						{
							#line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return global::haxe.rtti.CType.CClass(this.mkPath(x.att.resolve("path")), this.xtypeparams(x));
						}
						
						
						case "t":
						{
							#line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return global::haxe.rtti.CType.CTypedef(this.mkPath(x.att.resolve("path")), this.xtypeparams(x));
						}
						
						
						case "x":
						{
							#line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return global::haxe.rtti.CType.CAbstract(this.mkPath(x.att.resolve("path")), this.xtypeparams(x));
						}
						
						
						case "f":
						{
							#line 561 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							global::List<object> args = new global::List<object>();
							global::Array<object> aname = global::haxe.lang.StringExt.split(x.att.resolve("a"), ":");
							object eargs = ((object) (new global::_Array.ArrayIterator<object>(((global::Array<object>) (aname) ))) );
							object evalues = null;
							#line 564 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (x.has.resolve("v")) {
								#line 564 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								global::Array<object> _this = global::haxe.lang.StringExt.split(x.att.resolve("v"), ":");
								#line 564 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								evalues = new global::_Array.ArrayIterator<object>(((global::Array<object>) (_this) ));
							}
							else {
								#line 564 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								evalues = null;
							}
							
							#line 565 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							{
								#line 565 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								object __temp_iterator1 = x.get_elements();
								#line 565 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
									#line 565 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									global::haxe.xml.Fast e = ((global::haxe.xml.Fast) (global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null)) );
									bool opt = false;
									string a = global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.callField(eargs, "next", 1224901875, null));
									if (string.Equals(a, null)) {
										#line 569 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										a = "";
									}
									
									#line 570 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									if (string.Equals(global::haxe.lang.StringExt.charAt(a, 0), "?")) {
										#line 571 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										opt = true;
										a = global::haxe.lang.StringExt.substr(a, 1, default(global::haxe.lang.Null<int>));
									}
									
									#line 574 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									string v = null;
									#line 574 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									if (( evalues == null )) {
										#line 574 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										v = null;
									}
									else {
										#line 574 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										v = global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.callField(evalues, "next", 1224901875, null));
									}
									
									#line 575 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									object __temp_stmt2 = null;
									#line 575 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									{
										#line 578 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										global::haxe.rtti.CType __temp_odecl1 = this.xtype(e);
										#line 575 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										__temp_stmt2 = new global::haxe.lang.DynamicObject(new int[]{116, 5545011, 834174833, 1224700491}, new object[]{__temp_odecl1, opt, ( (string.Equals(v, "")) ? (null) : (v) ), a}, new int[]{}, new double[]{});
									}
									
									#line 575 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									args.@add(__temp_stmt2);
								}
								
							}
							
							#line 582 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							object ret = (args.last()).@value;
							args.@remove(ret);
							#line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return global::haxe.rtti.CType.CFunction(args, ((global::haxe.rtti.CType) (global::haxe.lang.Runtime.getField(ret, "t", 116, true)) ));
						}
						
						
						case "a":
						{
							#line 586 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							global::List<object> fields = new global::List<object>();
							{
								#line 587 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								object __temp_iterator2 = x.get_elements();
								#line 587 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator2, "hasNext", 407283053, null))) {
									#line 587 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									global::haxe.xml.Fast f = ((global::haxe.xml.Fast) (global::haxe.lang.Runtime.callField(__temp_iterator2, "next", 1224901875, null)) );
									object f1 = this.xclassfield(f, new global::haxe.lang.Null<bool>(true, true));
									global::List<object>.__hx_cast<object>(((global::List) (global::haxe.lang.Runtime.setField(f1, "platforms", 310553184, new global::List<object>())) ));
									fields.@add(f1);
								}
								
							}
							
							#line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return global::haxe.rtti.CType.CAnonymous(fields);
						}
						
						
						case "d":
						{
							#line 594 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							global::haxe.rtti.CType t = null;
							global::Xml tx = x.x.firstElement();
							if (( tx != null )) {
								#line 597 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								t = this.xtype(new global::haxe.xml.Fast(((global::Xml) (tx) )));
							}
							
							#line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return global::haxe.rtti.CType.CDynamic(t);
						}
						
						
						default:
						{
							#line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return ((global::haxe.rtti.CType) (this.xerror(x)) );
						}
						
					}
					
				}
				
			}
			#line default
		}
		
		
		public virtual global::List<object> xtypeparams(global::haxe.xml.Fast x) {
			#line 605 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			global::List<object> p = new global::List<object>();
			{
				#line 606 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				object __temp_iterator1 = x.get_elements();
				#line 606 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
					#line 606 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					global::haxe.xml.Fast c = ((global::haxe.xml.Fast) (global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null)) );
					p.@add(this.xtype(c));
				}
				
			}
			
			#line 608 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			return p;
		}
		#line default
		
		public virtual global::List<object> defplat() {
			#line 612 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			global::List<object> l = new global::List<object>();
			if ( ! (string.Equals(this.curplatform, null)) ) {
				#line 614 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				l.@add(this.curplatform);
			}
			
			#line 615 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			return l;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				switch (hash) {
					case 260487219:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						this.curplatform = global::haxe.lang.Runtime.toString(@value);
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return @value;
					}
					
					
					case 1269755426:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						this.root = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return @value;
					}
					
					
					default:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				switch (hash) {
					case 631713332:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "defplat", 631713332)) );
					}
					
					
					case 429915128:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "xtypeparams", 429915128)) );
					}
					
					
					case 1696501554:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "xtype", 1696501554)) );
					}
					
					
					case 1216198099:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "xtypedef", 1216198099)) );
					}
					
					
					case 162003290:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "xabstract", 162003290)) );
					}
					
					
					case 110941857:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "xenumfield", 110941857)) );
					}
					
					
					case 1529612153:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "xenum", 1529612153)) );
					}
					
					
					case 415668218:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "xclassfield", 415668218)) );
					}
					
					
					case 1126941888:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "xclass", 1126941888)) );
					}
					
					
					case 1650950685:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "xpath", 1650950685)) );
					}
					
					
					case 1818990145:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "xoverloads", 1818990145)) );
					}
					
					
					case 1617880893:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "xmeta", 1617880893)) );
					}
					
					
					case 951250957:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "processElement", 951250957)) );
					}
					
					
					case 1845303376:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "xerror", 1845303376)) );
					}
					
					
					case 1051591445:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "mkRights", 1051591445)) );
					}
					
					
					case 941338270:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "mkTypeParams", 941338270)) );
					}
					
					
					case 1710323747:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "mkPath", 1710323747)) );
					}
					
					
					case 260487219:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.curplatform;
					}
					
					
					case 1269755426:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.root;
					}
					
					
					default:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				switch (hash) {
					case 631713332:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.defplat();
					}
					
					
					case 429915128:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xtypeparams(((global::haxe.xml.Fast) (dynargs[0]) ));
					}
					
					
					case 1696501554:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xtype(((global::haxe.xml.Fast) (dynargs[0]) ));
					}
					
					
					case 1216198099:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xtypedef(((global::haxe.xml.Fast) (dynargs[0]) ));
					}
					
					
					case 162003290:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xabstract(((global::haxe.xml.Fast) (dynargs[0]) ));
					}
					
					
					case 110941857:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xenumfield(((global::haxe.xml.Fast) (dynargs[0]) ));
					}
					
					
					case 1529612153:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xenum(((global::haxe.xml.Fast) (dynargs[0]) ));
					}
					
					
					case 415668218:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xclassfield(((global::haxe.xml.Fast) (dynargs[0]) ), global::haxe.lang.Null<object>.ofDynamic<bool>(dynargs[1]));
					}
					
					
					case 1126941888:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xclass(((global::haxe.xml.Fast) (dynargs[0]) ));
					}
					
					
					case 1650950685:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xpath(((global::haxe.xml.Fast) (dynargs[0]) ));
					}
					
					
					case 1818990145:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xoverloads(((global::haxe.xml.Fast) (dynargs[0]) ));
					}
					
					
					case 1617880893:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xmeta(((global::haxe.xml.Fast) (dynargs[0]) ));
					}
					
					
					case 951250957:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.processElement(((global::Xml) (dynargs[0]) ));
					}
					
					
					case 1845303376:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xerror(((global::haxe.xml.Fast) (dynargs[0]) ));
					}
					
					
					case 1051591445:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.mkRights(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					case 941338270:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.mkTypeParams(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					case 1710323747:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.mkPath(global::haxe.lang.Runtime.toString(dynargs[0]));
					}
					
					
					default:
					{
						#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			baseArr.push("curplatform");
			#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			baseArr.push("root");
			#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			{
				#line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


