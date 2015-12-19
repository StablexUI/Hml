package haxe.rtti;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class XmlParser extends haxe.lang.HxObject
{
	public XmlParser(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public XmlParser()
	{
		//line 31 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.rtti.XmlParser.__hx_ctor_haxe_rtti_XmlParser(this);
	}
	
	
	public static void __hx_ctor_haxe_rtti_XmlParser(haxe.rtti.XmlParser __temp_me37)
	{
		//line 32 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		__temp_me37.root = new haxe.root.Array<haxe.rtti.TypeTree>();
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		return new haxe.rtti.XmlParser(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		return new haxe.rtti.XmlParser();
	}
	
	
	public haxe.root.Array<haxe.rtti.TypeTree> root;
	
	public java.lang.String curplatform;
	
	public java.lang.String mkPath(java.lang.String p)
	{
		//line 285 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		return p;
	}
	
	
	public haxe.root.Array<java.lang.String> mkTypeParams(java.lang.String p)
	{
		//line 289 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.Array<java.lang.String> pl = haxe.lang.StringExt.split(p, ":");
		//line 290 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		if (haxe.lang.Runtime.valEq(pl.__get(0), "")) 
		{
			//line 291 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			return new haxe.root.Array<java.lang.String>();
		}
		
		//line 292 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		return pl;
	}
	
	
	public haxe.rtti.Rights mkRights(java.lang.String r)
	{
		//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_svar1 = (r);
			//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			boolean __temp_executeDef2 = true;
			//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			switch (__temp_svar1.hashCode())
			{
				case 3392903:
				{
					//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (__temp_svar1.equals("null")) 
					{
						//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef2 = false;
						//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return haxe.rtti.Rights.RNo;
					}
					
					//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -1183997287:
				{
					//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (__temp_svar1.equals("inline")) 
					{
						//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef2 = false;
						//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return haxe.rtti.Rights.RInline;
					}
					
					//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -1077554975:
				{
					//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (__temp_svar1.equals("method")) 
					{
						//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef2 = false;
						//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return haxe.rtti.Rights.RMethod;
					}
					
					//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case 2124767295:
				{
					//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (__temp_svar1.equals("dynamic")) 
					{
						//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef2 = false;
						//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return haxe.rtti.Rights.RDynamic;
					}
					
					//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
			}
			
			//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			if (__temp_executeDef2) 
			{
				//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				return haxe.rtti.Rights.RCall(r);
			}
			else
			{
				//line 296 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				throw null;
			}
			
		}
		
	}
	
	
	public java.lang.Object xerror(haxe.xml.Fast c)
	{
		//line 306 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		throw haxe.lang.HaxeException.wrap(( "Invalid " + c.get_name() ));
	}
	
	
	public haxe.rtti.TypeTree processElement(haxe.root.Xml x)
	{
		//line 316 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.xml.Fast c = new haxe.xml.Fast(((haxe.root.Xml) (x) ));
		//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String _g = c.get_name();
			//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			{
				//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				java.lang.String __temp_svar1 = (_g);
				//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				boolean __temp_executeDef2 = true;
				//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				switch (__temp_svar1.hashCode())
				{
					case 94742904:
					{
						//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						if (__temp_svar1.equals("class")) 
						{
							//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							__temp_executeDef2 = false;
							//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return haxe.rtti.TypeTree.TClassdecl(this.xclass(c));
						}
						
						//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						break;
					}
					
					
					case 1732898850:
					{
						//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						if (__temp_svar1.equals("abstract")) 
						{
							//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							__temp_executeDef2 = false;
							//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return haxe.rtti.TypeTree.TAbstractdecl(this.xabstract(c));
						}
						
						//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						break;
					}
					
					
					case 3118337:
					{
						//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						if (__temp_svar1.equals("enum")) 
						{
							//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							__temp_executeDef2 = false;
							//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return haxe.rtti.TypeTree.TEnumdecl(this.xenum(c));
						}
						
						//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						break;
					}
					
					
					case -853085557:
					{
						//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						if (__temp_svar1.equals("typedef")) 
						{
							//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							__temp_executeDef2 = false;
							//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return haxe.rtti.TypeTree.TTypedecl(this.xtypedef(c));
						}
						
						//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						break;
					}
					
					
				}
				
				//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				if (__temp_executeDef2) 
				{
					//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					return ((haxe.rtti.TypeTree) (this.xerror(c)) );
				}
				else
				{
					//line 317 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					throw null;
				}
				
			}
			
		}
		
	}
	
	
	public haxe.root.Array<java.lang.Object> xmeta(haxe.xml.Fast x)
	{
		//line 327 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.Array<java.lang.Object> ml = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
		//line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.root.List<haxe.xml.Fast> _this = x.nodes.resolve("m");
			//line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.root.Array _g_head = _this.h;
			//line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.Object _g_val = null;
			//line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			while (( _g_head != null ))
			{
				//line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				haxe.xml.Fast m = null;
				//line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				java.lang.Object __temp_stmt2 = null;
				//line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				{
					//line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					_g_val = _g_head.__get(0);
					//line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					_g_head = ((haxe.root.Array) (_g_head.__get(1)) );
					//line 326 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					__temp_stmt2 = _g_val;
				}
				
				//line 328 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				m = ((haxe.xml.Fast) (__temp_stmt2) );
				//line 329 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				haxe.root.Array<java.lang.String> pl = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
				//line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				{
					//line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					haxe.root.List<haxe.xml.Fast> _this1 = m.nodes.resolve("e");
					//line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					haxe.root.Array _g_head1 = _this1.h;
					//line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					java.lang.Object _g_val1 = null;
					//line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					while (( _g_head1 != null ))
					{
						//line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						haxe.xml.Fast p = null;
						//line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						java.lang.Object __temp_stmt3 = null;
						//line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						{
							//line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							_g_val1 = _g_head1.__get(0);
							//line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							_g_head1 = ((haxe.root.Array) (_g_head1.__get(1)) );
							//line 326 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							__temp_stmt3 = _g_val1;
						}
						
						//line 330 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						p = ((haxe.xml.Fast) (__temp_stmt3) );
						//line 331 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						pl.push(p.get_innerHTML());
					}
					
				}
				
				//line 332 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				java.lang.Object __temp_stmt4 = null;
				//line 332 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				{
					//line 332 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					java.lang.String __temp_odecl1 = m.att.resolve("n");
					//line 332 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					__temp_stmt4 = new haxe.lang.DynamicObject(new java.lang.String[]{"name", "params"}, new java.lang.Object[]{__temp_odecl1, pl}, new java.lang.String[]{}, new double[]{});
				}
				
				//line 332 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				ml.push(__temp_stmt4);
			}
			
		}
		
		//line 334 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		return ml;
	}
	
	
	public haxe.root.List<java.lang.Object> xoverloads(haxe.xml.Fast x)
	{
		//line 338 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.List<java.lang.Object> l = new haxe.root.List<java.lang.Object>();
		//line 339 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 339 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.Object __temp_iterator1 = x.get_elements();
			//line 339 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 339 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				haxe.xml.Fast m = ((haxe.xml.Fast) (haxe.lang.Runtime.callField(__temp_iterator1, "next", null)) );
				//line 340 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				l.add(this.xclassfield(m, null));
			}
			
		}
		
		//line 342 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		return l;
	}
	
	
	public java.lang.Object xpath(haxe.xml.Fast x)
	{
		//line 346 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		java.lang.String path = this.mkPath(x.att.resolve("path"));
		//line 347 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.List<haxe.rtti.CType> params = new haxe.root.List<haxe.rtti.CType>();
		//line 348 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 348 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.Object __temp_iterator1 = x.get_elements();
			//line 348 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 348 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				haxe.xml.Fast c = ((haxe.xml.Fast) (haxe.lang.Runtime.callField(__temp_iterator1, "next", null)) );
				//line 349 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				params.add(this.xtype(c));
			}
			
		}
		
		//line 350 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		return new haxe.lang.DynamicObject(new java.lang.String[]{"params", "path"}, new java.lang.Object[]{params, path}, new java.lang.String[]{}, new double[]{});
	}
	
	
	public java.lang.Object xclass(haxe.xml.Fast x)
	{
		//line 357 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		java.lang.Object csuper = null;
		//line 358 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		java.lang.String doc = null;
		//line 359 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.rtti.CType tdynamic = null;
		//line 360 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.List<java.lang.Object> interfaces = new haxe.root.List<java.lang.Object>();
		//line 361 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.List<java.lang.Object> fields = new haxe.root.List<java.lang.Object>();
		//line 362 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.List<java.lang.Object> statics = new haxe.root.List<java.lang.Object>();
		//line 363 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.Array<java.lang.Object> meta = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
		//line 364 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 364 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.Object __temp_iterator1 = x.get_elements();
			//line 364 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 364 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				haxe.xml.Fast c = ((haxe.xml.Fast) (haxe.lang.Runtime.callField(__temp_iterator1, "next", null)) );
				//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				java.lang.String _g = c.get_name();
				//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				{
					//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					java.lang.String __temp_svar9 = (_g);
					//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					boolean __temp_executeDef10 = true;
					//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					switch (__temp_svar9.hashCode())
					{
						case 288895775:
						{
							//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (__temp_svar9.equals("haxe_doc")) 
							{
								//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								__temp_executeDef10 = false;
								//line 366 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								doc = c.get_innerData();
							}
							
							//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case 3347973:
						{
							//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (__temp_svar9.equals("meta")) 
							{
								//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								__temp_executeDef10 = false;
								//line 370 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								meta = this.xmeta(c);
							}
							
							//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case -1305664359:
						{
							//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (__temp_svar9.equals("extends")) 
							{
								//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								__temp_executeDef10 = false;
								//line 367 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								csuper = this.xpath(c);
							}
							
							//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case -1753955674:
						{
							//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (__temp_svar9.equals("haxe_dynamic")) 
							{
								//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								__temp_executeDef10 = false;
								//line 369 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								tdynamic = this.xtype(new haxe.xml.Fast(((haxe.root.Xml) (c.x.firstElement()) )));
							}
							
							//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case -915384400:
						{
							//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (__temp_svar9.equals("implements")) 
							{
								//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								__temp_executeDef10 = false;
								//line 368 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								interfaces.add(this.xpath(c));
							}
							
							//line 365 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
					}
					
					//line 372 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (__temp_executeDef10) 
					{
						//line 372 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						if (c.x.exists("static")) 
						{
							//line 373 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							statics.add(this.xclassfield(c, null));
						}
						else
						{
							//line 375 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							fields.add(this.xclassfield(c, null));
						}
						
					}
					
				}
				
			}
			
		}
		
		//line 377 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 378 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl1 = ( (x.has.resolve("file")) ? (x.att.resolve("file")) : (null) );
			//line 379 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl2 = this.mkPath(x.att.resolve("path"));
			//line 380 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl3 = ( (x.has.resolve("module")) ? (this.mkPath(x.att.resolve("module"))) : (null) );
			//line 382 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			boolean __temp_odecl4 = x.x.exists("private");
			//line 383 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			boolean __temp_odecl5 = x.x.exists("extern");
			//line 384 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			boolean __temp_odecl6 = x.x.exists("interface");
			//line 385 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.root.Array<java.lang.String> __temp_odecl7 = this.mkTypeParams(x.att.resolve("params"));
			//line 391 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.root.List<java.lang.String> __temp_odecl8 = this.defplat();
			//line 377 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			return new haxe.lang.DynamicObject(new java.lang.String[]{"doc", "fields", "file", "interfaces", "isExtern", "isInterface", "isPrivate", "meta", "module", "params", "path", "platforms", "statics", "superClass", "tdynamic"}, new java.lang.Object[]{doc, fields, __temp_odecl1, interfaces, __temp_odecl5, __temp_odecl6, __temp_odecl4, meta, __temp_odecl3, __temp_odecl7, __temp_odecl2, __temp_odecl8, statics, csuper, tdynamic}, new java.lang.String[]{}, new double[]{});
		}
		
	}
	
	
	public java.lang.Object xclassfield(haxe.xml.Fast x, java.lang.Object defPublic)
	{
		//line 396 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		java.lang.Object __temp_defPublic36 = ( (haxe.lang.Runtime.eq(defPublic, null)) ? (((java.lang.Object) (false) )) : (defPublic) );
		//line 397 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		java.lang.Object e = x.get_elements();
		//line 398 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.rtti.CType t = this.xtype(((haxe.xml.Fast) (haxe.lang.Runtime.callField(e, "next", null)) ));
		//line 399 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		java.lang.String doc = null;
		//line 400 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.Array<java.lang.Object> meta = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
		//line 401 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.List<java.lang.Object> overloads = null;
		//line 402 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 402 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.Object __temp_iterator1 = e;
			//line 402 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 402 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				haxe.xml.Fast c = ((haxe.xml.Fast) (haxe.lang.Runtime.callField(__temp_iterator1, "next", null)) );
				//line 403 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				java.lang.String _g = c.get_name();
				//line 403 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				{
					//line 403 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					java.lang.String __temp_svar10 = (_g);
					//line 403 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					boolean __temp_executeDef11 = true;
					//line 403 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					switch (__temp_svar10.hashCode())
					{
						case 288895775:
						{
							//line 403 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (__temp_svar10.equals("haxe_doc")) 
							{
								//line 403 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								__temp_executeDef11 = false;
								//line 404 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								doc = c.get_innerData();
							}
							
							//line 403 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case -755335175:
						{
							//line 403 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (__temp_svar10.equals("overloads")) 
							{
								//line 403 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								__temp_executeDef11 = false;
								//line 406 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								overloads = this.xoverloads(c);
							}
							
							//line 403 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case 3347973:
						{
							//line 403 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (__temp_svar10.equals("meta")) 
							{
								//line 403 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								__temp_executeDef11 = false;
								//line 405 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								meta = this.xmeta(c);
							}
							
							//line 403 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
					}
					
					//line 407 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (__temp_executeDef11) 
					{
						//line 407 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						this.xerror(c);
					}
					
				}
				
			}
			
		}
		
		//line 409 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 410 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl1 = x.get_name();
			//line 412 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			boolean __temp_odecl2 = ( haxe.lang.Runtime.toBool(x.x.exists("public")) || haxe.lang.Runtime.toBool(__temp_defPublic36) );
			//line 413 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			boolean __temp_odecl3 = x.x.exists("override");
			//line 414 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.Object __temp_odecl4 = ( (x.has.resolve("line")) ? (haxe.root.Std.parseInt(x.att.resolve("line"))) : (null) );
			//line 416 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.rtti.Rights __temp_odecl5 = ( (x.has.resolve("get")) ? (this.mkRights(x.att.resolve("get"))) : (haxe.rtti.Rights.RNormal) );
			//line 417 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.rtti.Rights __temp_odecl6 = ( (x.has.resolve("set")) ? (this.mkRights(x.att.resolve("set"))) : (haxe.rtti.Rights.RNormal) );
			//line 418 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.root.Array<java.lang.String> __temp_odecl7 = ( (x.has.resolve("params")) ? (this.mkTypeParams(x.att.resolve("params"))) : (new haxe.root.Array<java.lang.String>(new java.lang.String[]{})) );
			//line 419 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.root.List<java.lang.String> __temp_odecl8 = this.defplat();
			//line 422 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl9 = ( (x.has.resolve("expr")) ? (x.att.resolve("expr")) : (null) );
			//line 409 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			return new haxe.lang.DynamicObject(new java.lang.String[]{"doc", "expr", "get", "isOverride", "isPublic", "line", "meta", "name", "overloads", "params", "platforms", "set", "type"}, new java.lang.Object[]{doc, __temp_odecl9, __temp_odecl5, __temp_odecl3, __temp_odecl2, __temp_odecl4, meta, __temp_odecl1, overloads, __temp_odecl7, __temp_odecl8, __temp_odecl6, t}, new java.lang.String[]{}, new double[]{});
		}
		
	}
	
	
	public java.lang.Object xenum(haxe.xml.Fast x)
	{
		//line 427 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.List<java.lang.Object> cl = new haxe.root.List<java.lang.Object>();
		//line 428 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		java.lang.String doc = null;
		//line 429 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.Array<java.lang.Object> meta = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
		//line 430 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 430 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.Object __temp_iterator1 = x.get_elements();
			//line 430 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 430 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				haxe.xml.Fast c = ((haxe.xml.Fast) (haxe.lang.Runtime.callField(__temp_iterator1, "next", null)) );
				//line 431 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				if (haxe.lang.Runtime.valEq(c.get_name(), "haxe_doc")) 
				{
					//line 432 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					doc = c.get_innerData();
				}
				else
				{
					//line 433 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (haxe.lang.Runtime.valEq(c.get_name(), "meta")) 
					{
						//line 434 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						meta = this.xmeta(c);
					}
					else
					{
						//line 436 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						cl.add(this.xenumfield(c));
					}
					
				}
				
			}
			
		}
		
		//line 437 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 438 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl1 = ( (x.has.resolve("file")) ? (x.att.resolve("file")) : (null) );
			//line 439 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl2 = this.mkPath(x.att.resolve("path"));
			//line 440 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl3 = ( (x.has.resolve("module")) ? (this.mkPath(x.att.resolve("module"))) : (null) );
			//line 442 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			boolean __temp_odecl4 = x.x.exists("private");
			//line 443 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			boolean __temp_odecl5 = x.x.exists("extern");
			//line 444 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.root.Array<java.lang.String> __temp_odecl6 = this.mkTypeParams(x.att.resolve("params"));
			//line 446 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.root.List<java.lang.String> __temp_odecl7 = this.defplat();
			//line 437 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			return new haxe.lang.DynamicObject(new java.lang.String[]{"constructors", "doc", "file", "isExtern", "isPrivate", "meta", "module", "params", "path", "platforms"}, new java.lang.Object[]{cl, doc, __temp_odecl1, __temp_odecl5, __temp_odecl4, meta, __temp_odecl3, __temp_odecl6, __temp_odecl2, __temp_odecl7}, new java.lang.String[]{}, new double[]{});
		}
		
	}
	
	
	public java.lang.Object xenumfield(haxe.xml.Fast x)
	{
		//line 452 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.List<java.lang.Object> args = null;
		//line 453 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.Xml xdoc = ((haxe.root.Xml) (haxe.lang.Runtime.callField(x.x.elementsNamed("haxe_doc"), "next", null)) );
		//line 454 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.Array<java.lang.Object> meta = null;
		//line 454 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		if (x.hasNode.resolve("meta")) 
		{
			//line 454 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			meta = this.xmeta(x.node.resolve("meta"));
		}
		else
		{
			//line 454 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			meta = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
		}
		
		//line 455 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		if (x.has.resolve("a")) 
		{
			//line 456 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.root.Array<java.lang.String> names = haxe.lang.StringExt.split(x.att.resolve("a"), ":");
			//line 457 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.Object elts = x.get_elements();
			//line 458 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			args = new haxe.root.List<java.lang.Object>();
			//line 459 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			{
				//line 459 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				int _g = 0;
				//line 459 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				while (( _g < names.length ))
				{
					//line 459 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					java.lang.String c = names.__get(_g);
					//line 459 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					 ++ _g;
					//line 460 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					boolean opt = false;
					//line 461 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (haxe.lang.Runtime.valEq(haxe.lang.StringExt.charAt(c, 0), "?")) 
					{
						//line 462 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						opt = true;
						//line 463 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						c = haxe.lang.StringExt.substr(c, 1, null);
					}
					
					//line 465 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					java.lang.Object __temp_stmt5 = null;
					//line 465 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					{
						//line 468 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						haxe.rtti.CType __temp_odecl1 = this.xtype(((haxe.xml.Fast) (haxe.lang.Runtime.callField(elts, "next", null)) ));
						//line 465 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_stmt5 = new haxe.lang.DynamicObject(new java.lang.String[]{"name", "opt", "t"}, new java.lang.Object[]{c, opt, __temp_odecl1}, new java.lang.String[]{}, new double[]{});
					}
					
					//line 465 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					args.add(__temp_stmt5);
				}
				
			}
			
		}
		
		//line 472 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 473 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl2 = x.get_name();
			//line 475 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl3 = ( (( xdoc == null )) ? (null) : (new haxe.xml.Fast(((haxe.root.Xml) (xdoc) )).get_innerData()) );
			//line 477 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.root.List<java.lang.String> __temp_odecl4 = this.defplat();
			//line 472 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			return new haxe.lang.DynamicObject(new java.lang.String[]{"args", "doc", "meta", "name", "platforms"}, new java.lang.Object[]{args, __temp_odecl3, meta, __temp_odecl2, __temp_odecl4}, new java.lang.String[]{}, new double[]{});
		}
		
	}
	
	
	public java.lang.Object xabstract(haxe.xml.Fast x)
	{
		//line 482 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		java.lang.String doc = null;
		//line 482 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		java.lang.Object impl = null;
		//line 482 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.rtti.CType athis = null;
		//line 483 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.Array<java.lang.Object> meta = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
		//line 483 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.Array<java.lang.Object> to = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
		//line 483 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.Array<java.lang.Object> from = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
		//line 484 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 484 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.Object __temp_iterator1 = x.get_elements();
			//line 484 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 484 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				haxe.xml.Fast c = ((haxe.xml.Fast) (haxe.lang.Runtime.callField(__temp_iterator1, "next", null)) );
				//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				java.lang.String _g = c.get_name();
				//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				{
					//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					java.lang.String __temp_svar13 = (_g);
					//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					boolean __temp_executeDef14 = true;
					//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					switch (__temp_svar13.hashCode())
					{
						case 288895775:
						{
							//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (__temp_svar13.equals("haxe_doc")) 
							{
								//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								__temp_executeDef14 = false;
								//line 487 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								doc = c.get_innerData();
							}
							
							//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case 3559070:
						{
							//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (__temp_svar13.equals("this")) 
							{
								//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								__temp_executeDef14 = false;
								//line 499 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								athis = this.xtype(new haxe.xml.Fast(((haxe.root.Xml) (c.x.firstElement()) )));
							}
							
							//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case 3347973:
						{
							//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (__temp_svar13.equals("meta")) 
							{
								//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								__temp_executeDef14 = false;
								//line 489 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								meta = this.xmeta(c);
							}
							
							//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case 3236384:
						{
							//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (__temp_svar13.equals("impl")) 
							{
								//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								__temp_executeDef14 = false;
								//line 497 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								impl = this.xclass(c.node.resolve("class"));
							}
							
							//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case 3707:
						{
							//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (__temp_svar13.equals("to")) 
							{
								//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								__temp_executeDef14 = false;
								//line 491 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								{
									//line 491 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									java.lang.Object __temp_iterator2 = c.get_elements();
									//line 491 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator2, "hasNext", null)))
									{
										//line 491 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										haxe.xml.Fast t = ((haxe.xml.Fast) (haxe.lang.Runtime.callField(__temp_iterator2, "next", null)) );
										//line 492 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										java.lang.Object __temp_stmt11 = null;
										//line 492 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										{
											//line 492 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
											haxe.rtti.CType __temp_odecl1 = this.xtype(new haxe.xml.Fast(((haxe.root.Xml) (t.x.firstElement()) )));
											//line 492 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
											java.lang.String __temp_odecl2 = ( (t.has.resolve("field")) ? (t.att.resolve("field")) : (null) );
											//line 492 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
											__temp_stmt11 = new haxe.lang.DynamicObject(new java.lang.String[]{"field", "t"}, new java.lang.Object[]{__temp_odecl2, __temp_odecl1}, new java.lang.String[]{}, new double[]{});
										}
										
										//line 492 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										to.push(__temp_stmt11);
									}
									
								}
								
							}
							
							//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
						case 3151786:
						{
							//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (__temp_svar13.equals("from")) 
							{
								//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								__temp_executeDef14 = false;
								//line 494 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								{
									//line 494 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									java.lang.Object __temp_iterator3 = c.get_elements();
									//line 494 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator3, "hasNext", null)))
									{
										//line 494 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										haxe.xml.Fast t1 = ((haxe.xml.Fast) (haxe.lang.Runtime.callField(__temp_iterator3, "next", null)) );
										//line 495 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										java.lang.Object __temp_stmt12 = null;
										//line 495 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										{
											//line 495 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
											haxe.rtti.CType __temp_odecl3 = this.xtype(new haxe.xml.Fast(((haxe.root.Xml) (t1.x.firstElement()) )));
											//line 495 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
											java.lang.String __temp_odecl4 = ( (t1.has.resolve("field")) ? (t1.att.resolve("field")) : (null) );
											//line 495 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
											__temp_stmt12 = new haxe.lang.DynamicObject(new java.lang.String[]{"field", "t"}, new java.lang.Object[]{__temp_odecl4, __temp_odecl3}, new java.lang.String[]{}, new double[]{});
										}
										
										//line 495 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										from.push(__temp_stmt12);
									}
									
								}
								
							}
							
							//line 485 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							break;
						}
						
						
					}
					
					//line 501 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (__temp_executeDef14) 
					{
						//line 501 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						this.xerror(c);
					}
					
				}
				
			}
			
		}
		
		//line 503 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 504 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl5 = ( (x.has.resolve("file")) ? (x.att.resolve("file")) : (null) );
			//line 505 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl6 = this.mkPath(x.att.resolve("path"));
			//line 506 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl7 = ( (x.has.resolve("module")) ? (this.mkPath(x.att.resolve("module"))) : (null) );
			//line 508 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			boolean __temp_odecl8 = x.x.exists("private");
			//line 509 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.root.Array<java.lang.String> __temp_odecl9 = this.mkTypeParams(x.att.resolve("params"));
			//line 510 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.root.List<java.lang.String> __temp_odecl10 = this.defplat();
			//line 503 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			return new haxe.lang.DynamicObject(new java.lang.String[]{"athis", "doc", "file", "from", "impl", "isPrivate", "meta", "module", "params", "path", "platforms", "to"}, new java.lang.Object[]{athis, doc, __temp_odecl5, from, impl, __temp_odecl8, meta, __temp_odecl7, __temp_odecl9, __temp_odecl6, __temp_odecl10, to}, new java.lang.String[]{}, new double[]{});
		}
		
	}
	
	
	public java.lang.Object xtypedef(haxe.xml.Fast x)
	{
		//line 521 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		java.lang.String doc = null;
		//line 522 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.rtti.CType t = null;
		//line 523 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.Array<java.lang.Object> meta = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
		//line 524 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 524 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.Object __temp_iterator1 = x.get_elements();
			//line 524 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 524 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				haxe.xml.Fast c = ((haxe.xml.Fast) (haxe.lang.Runtime.callField(__temp_iterator1, "next", null)) );
				//line 525 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				if (haxe.lang.Runtime.valEq(c.get_name(), "haxe_doc")) 
				{
					//line 526 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					doc = c.get_innerData();
				}
				else
				{
					//line 527 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (haxe.lang.Runtime.valEq(c.get_name(), "meta")) 
					{
						//line 528 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						meta = this.xmeta(c);
					}
					else
					{
						//line 530 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						t = this.xtype(c);
					}
					
				}
				
			}
			
		}
		
		//line 531 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.ds.StringMap<haxe.rtti.CType> types = new haxe.ds.StringMap<haxe.rtti.CType>();
		//line 532 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		if (( this.curplatform != null )) 
		{
			//line 533 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			types.set(this.curplatform, t);
		}
		
		//line 534 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 535 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl1 = ( (x.has.resolve("file")) ? (x.att.resolve("file")) : (null) );
			//line 536 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl2 = this.mkPath(x.att.resolve("path"));
			//line 537 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String __temp_odecl3 = ( (x.has.resolve("module")) ? (this.mkPath(x.att.resolve("module"))) : (null) );
			//line 539 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			boolean __temp_odecl4 = x.x.exists("private");
			//line 540 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.root.Array<java.lang.String> __temp_odecl5 = this.mkTypeParams(x.att.resolve("params"));
			//line 543 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			haxe.root.List<java.lang.String> __temp_odecl6 = this.defplat();
			//line 534 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			return new haxe.lang.DynamicObject(new java.lang.String[]{"doc", "file", "isPrivate", "meta", "module", "params", "path", "platforms", "type", "types"}, new java.lang.Object[]{doc, __temp_odecl1, __temp_odecl4, meta, __temp_odecl3, __temp_odecl5, __temp_odecl2, __temp_odecl6, t, ((haxe.ds.StringMap<haxe.rtti.CType>) (types) )}, new java.lang.String[]{}, new double[]{});
		}
		
	}
	
	
	public haxe.rtti.CType xtype(haxe.xml.Fast x)
	{
		//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.String _g = x.get_name();
			//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			{
				//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				java.lang.String __temp_svar3 = (_g);
				//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				boolean __temp_executeDef4 = true;
				//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				switch (__temp_svar3.hashCode())
				{
					case -284840886:
					{
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						if (__temp_svar3.equals("unknown")) 
						{
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							__temp_executeDef4 = false;
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return haxe.rtti.CType.CUnknown;
						}
						
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						break;
					}
					
					
					case 100:
					{
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						if (__temp_svar3.equals("d")) 
						{
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							__temp_executeDef4 = false;
							//line 594 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							haxe.rtti.CType t = null;
							//line 595 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							haxe.root.Xml tx = x.x.firstElement();
							//line 596 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (( tx != null )) 
							{
								//line 597 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								t = this.xtype(new haxe.xml.Fast(((haxe.root.Xml) (tx) )));
							}
							
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return haxe.rtti.CType.CDynamic(t);
						}
						
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						break;
					}
					
					
					case 101:
					{
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						if (__temp_svar3.equals("e")) 
						{
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							__temp_executeDef4 = false;
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return haxe.rtti.CType.CEnum(this.mkPath(x.att.resolve("path")), this.xtypeparams(x));
						}
						
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						break;
					}
					
					
					case 97:
					{
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						if (__temp_svar3.equals("a")) 
						{
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							__temp_executeDef4 = false;
							//line 586 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							haxe.root.List<java.lang.Object> fields = new haxe.root.List<java.lang.Object>();
							//line 587 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							{
								//line 587 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								java.lang.Object __temp_iterator2 = x.get_elements();
								//line 587 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator2, "hasNext", null)))
								{
									//line 587 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									haxe.xml.Fast f = ((haxe.xml.Fast) (haxe.lang.Runtime.callField(__temp_iterator2, "next", null)) );
									//line 588 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									java.lang.Object f1 = this.xclassfield(f, true);
									//line 589 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									haxe.lang.Runtime.setField(f1, "platforms", new haxe.root.List<java.lang.String>());
									//line 590 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									fields.add(f1);
								}
								
							}
							
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return haxe.rtti.CType.CAnonymous(fields);
						}
						
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						break;
					}
					
					
					case 99:
					{
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						if (__temp_svar3.equals("c")) 
						{
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							__temp_executeDef4 = false;
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return haxe.rtti.CType.CClass(this.mkPath(x.att.resolve("path")), this.xtypeparams(x));
						}
						
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						break;
					}
					
					
					case 102:
					{
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						if (__temp_svar3.equals("f")) 
						{
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							__temp_executeDef4 = false;
							//line 561 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							haxe.root.List<java.lang.Object> args = new haxe.root.List<java.lang.Object>();
							//line 562 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							haxe.root.Array<java.lang.String> aname = haxe.lang.StringExt.split(x.att.resolve("a"), ":");
							//line 563 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							java.lang.Object eargs = ((java.lang.Object) (new _Array.ArrayIterator<java.lang.String>(((haxe.root.Array<java.lang.String>) (aname) ))) );
							//line 564 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							java.lang.Object evalues = null;
							//line 564 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							if (x.has.resolve("v")) 
							{
								//line 564 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								haxe.root.Array<java.lang.String> _this = haxe.lang.StringExt.split(x.att.resolve("v"), ":");
								//line 564 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								evalues = new _Array.ArrayIterator<java.lang.String>(((haxe.root.Array<java.lang.String>) (_this) ));
							}
							else
							{
								//line 564 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								evalues = null;
							}
							
							//line 565 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							{
								//line 565 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								java.lang.Object __temp_iterator1 = x.get_elements();
								//line 565 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
								while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
								{
									//line 565 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									haxe.xml.Fast e = ((haxe.xml.Fast) (haxe.lang.Runtime.callField(__temp_iterator1, "next", null)) );
									//line 566 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									boolean opt = false;
									//line 567 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									java.lang.String a = haxe.lang.Runtime.toString(haxe.lang.Runtime.callField(eargs, "next", null));
									//line 568 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									if (( a == null )) 
									{
										//line 569 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										a = "";
									}
									
									//line 570 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									if (haxe.lang.Runtime.valEq(haxe.lang.StringExt.charAt(a, 0), "?")) 
									{
										//line 571 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										opt = true;
										//line 572 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										a = haxe.lang.StringExt.substr(a, 1, null);
									}
									
									//line 574 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									java.lang.String v = null;
									//line 574 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									if (( evalues == null )) 
									{
										//line 574 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										v = null;
									}
									else
									{
										//line 574 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										v = haxe.lang.Runtime.toString(haxe.lang.Runtime.callField(evalues, "next", null));
									}
									
									//line 575 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									java.lang.Object __temp_stmt2 = null;
									//line 575 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									{
										//line 578 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										haxe.rtti.CType __temp_odecl1 = this.xtype(e);
										//line 575 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
										__temp_stmt2 = new haxe.lang.DynamicObject(new java.lang.String[]{"name", "opt", "t", "value"}, new java.lang.Object[]{a, opt, __temp_odecl1, ( (haxe.lang.Runtime.valEq(v, "")) ? (null) : (v) )}, new java.lang.String[]{}, new double[]{});
									}
									
									//line 575 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
									args.add(__temp_stmt2);
								}
								
							}
							
							//line 582 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							java.lang.Object ret = args.last();
							//line 583 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							args.remove(ret);
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return haxe.rtti.CType.CFunction(args, ((haxe.rtti.CType) (haxe.lang.Runtime.getField(ret, "t", true)) ));
						}
						
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						break;
					}
					
					
					case 116:
					{
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						if (__temp_svar3.equals("t")) 
						{
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							__temp_executeDef4 = false;
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return haxe.rtti.CType.CTypedef(this.mkPath(x.att.resolve("path")), this.xtypeparams(x));
						}
						
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						break;
					}
					
					
					case 120:
					{
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						if (__temp_svar3.equals("x")) 
						{
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							__temp_executeDef4 = false;
							//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
							return haxe.rtti.CType.CAbstract(this.mkPath(x.att.resolve("path")), this.xtypeparams(x));
						}
						
						//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						break;
					}
					
					
				}
				
				//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				if (__temp_executeDef4) 
				{
					//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					return ((haxe.rtti.CType) (this.xerror(x)) );
				}
				else
				{
					//line 549 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					throw null;
				}
				
			}
			
		}
		
	}
	
	
	public haxe.root.List<haxe.rtti.CType> xtypeparams(haxe.xml.Fast x)
	{
		//line 605 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.List<haxe.rtti.CType> p = new haxe.root.List<haxe.rtti.CType>();
		//line 606 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 606 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			java.lang.Object __temp_iterator1 = x.get_elements();
			//line 606 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 606 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				haxe.xml.Fast c = ((haxe.xml.Fast) (haxe.lang.Runtime.callField(__temp_iterator1, "next", null)) );
				//line 607 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				p.add(this.xtype(c));
			}
			
		}
		
		//line 608 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		return p;
	}
	
	
	public haxe.root.List<java.lang.String> defplat()
	{
		//line 612 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		haxe.root.List<java.lang.String> l = new haxe.root.List<java.lang.String>();
		//line 613 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		if (( this.curplatform != null )) 
		{
			//line 614 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			l.add(this.curplatform);
		}
		
		//line 615 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		return l;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			boolean __temp_executeDef1 = true;
			//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			switch (field.hashCode())
			{
				case -1338463565:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("curplatform")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						this.curplatform = haxe.lang.Runtime.toString(value);
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return value;
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case 3506402:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("root")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						this.root = ((haxe.root.Array<haxe.rtti.TypeTree>) (value) );
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return value;
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
			}
			
			//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			if (__temp_executeDef1) 
			{
				//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			boolean __temp_executeDef1 = true;
			//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			switch (field.hashCode())
			{
				case 1545241780:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("defplat")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "defplat")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case 3506402:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("root")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.root;
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -1495826504:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xtypeparams")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "xtypeparams")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -1338463565:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("curplatform")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.curplatform;
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case 114398130:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xtype")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "xtype")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -1073092893:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("mkPath")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "mkPath")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case 2125724435:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xtypedef")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "xtypedef")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -1642816098:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("mkTypeParams")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "mkTypeParams")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -413271910:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xabstract")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "xabstract")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -385856235:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("mkRights")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "mkRights")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -1858729183:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xenumfield")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "xenumfield")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -762684272:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xerror")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "xerror")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case 113940857:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xenum")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "xenum")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -1747759731:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("processElement")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "processElement")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -1169953542:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xclassfield")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "xclassfield")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case 114170493:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xmeta")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "xmeta")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -764726272:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xclass")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "xclass")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case 1432848001:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xoverloads")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "xoverloads")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case 114256029:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xpath")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "xpath")) );
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
			}
			
			//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			if (__temp_executeDef1) 
			{
				//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			boolean __temp_executeDef1 = true;
			//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			switch (field.hashCode())
			{
				case 1545241780:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("defplat")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.defplat();
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -1073092893:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("mkPath")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.mkPath(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -1495826504:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xtypeparams")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xtypeparams(((haxe.xml.Fast) (dynargs.__get(0)) ));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -1642816098:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("mkTypeParams")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.mkTypeParams(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case 114398130:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xtype")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xtype(((haxe.xml.Fast) (dynargs.__get(0)) ));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -385856235:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("mkRights")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.mkRights(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case 2125724435:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xtypedef")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xtypedef(((haxe.xml.Fast) (dynargs.__get(0)) ));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -762684272:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xerror")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xerror(((haxe.xml.Fast) (dynargs.__get(0)) ));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -413271910:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xabstract")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xabstract(((haxe.xml.Fast) (dynargs.__get(0)) ));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -1747759731:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("processElement")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.processElement(((haxe.root.Xml) (dynargs.__get(0)) ));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -1858729183:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xenumfield")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xenumfield(((haxe.xml.Fast) (dynargs.__get(0)) ));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case 114170493:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xmeta")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xmeta(((haxe.xml.Fast) (dynargs.__get(0)) ));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case 113940857:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xenum")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xenum(((haxe.xml.Fast) (dynargs.__get(0)) ));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case 1432848001:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xoverloads")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xoverloads(((haxe.xml.Fast) (dynargs.__get(0)) ));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -1169953542:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xclassfield")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xclassfield(((haxe.xml.Fast) (dynargs.__get(0)) ), dynargs.__get(1));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case 114256029:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xpath")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xpath(((haxe.xml.Fast) (dynargs.__get(0)) ));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
				case -764726272:
				{
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					if (field.equals("xclass")) 
					{
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
						return this.xclass(((haxe.xml.Fast) (dynargs.__get(0)) ));
					}
					
					//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
					break;
				}
				
				
			}
			
			//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			if (__temp_executeDef1) 
			{
				//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		baseArr.push("curplatform");
		//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		baseArr.push("root");
		//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
		{
			//line 26 "/usr/lib/haxe/std/haxe/rtti/XmlParser.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


