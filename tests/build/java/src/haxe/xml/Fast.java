package haxe.xml;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Fast extends haxe.lang.HxObject
{
	public Fast(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Fast(haxe.root.Xml x)
	{
		//line 122 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		haxe.xml.Fast.__hx_ctor_haxe_xml_Fast(this, x);
	}
	
	
	public static void __hx_ctor_haxe_xml_Fast(haxe.xml.Fast __temp_me46, haxe.root.Xml x)
	{
		//line 123 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		if (( ( x.nodeType != haxe.root.Xml.Document ) && ( x.nodeType != haxe.root.Xml.Element ) )) 
		{
			//line 124 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			throw haxe.lang.HaxeException.wrap(( "Invalid nodeType " + x.nodeType ));
		}
		
		//line 125 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		__temp_me46.x = x;
		//line 126 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		__temp_me46.node = new haxe.xml._Fast.NodeAccess(((haxe.root.Xml) (x) ));
		//line 127 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		__temp_me46.nodes = new haxe.xml._Fast.NodeListAccess(((haxe.root.Xml) (x) ));
		//line 128 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		__temp_me46.att = new haxe.xml._Fast.AttribAccess(((haxe.root.Xml) (x) ));
		//line 129 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		__temp_me46.has = new haxe.xml._Fast.HasAttribAccess(((haxe.root.Xml) (x) ));
		//line 130 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		__temp_me46.hasNode = new haxe.xml._Fast.HasNodeAccess(((haxe.root.Xml) (x) ));
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return new haxe.xml.Fast(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return new haxe.xml.Fast(((haxe.root.Xml) (arr.__get(0)) ));
	}
	
	
	public haxe.root.Xml x;
	
	public haxe.xml._Fast.NodeAccess node;
	
	public haxe.xml._Fast.NodeListAccess nodes;
	
	public haxe.xml._Fast.AttribAccess att;
	
	public haxe.xml._Fast.HasAttribAccess has;
	
	public haxe.xml._Fast.HasNodeAccess hasNode;
	
	public java.lang.String get_name()
	{
		//line 134 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		if (( this.x.nodeType == haxe.root.Xml.Document )) 
		{
			//line 134 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return "Document";
		}
		else
		{
			//line 134 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			haxe.root.Xml _this = this.x;
			//line 134 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (( _this.nodeType != haxe.root.Xml.Element )) 
			{
				//line 134 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw haxe.lang.HaxeException.wrap(( "Bad node type, expected Element but found " + _this.nodeType ));
			}
			
			//line 134 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return _this.nodeName;
		}
		
	}
	
	
	public java.lang.String get_innerData()
	{
		//line 138 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		java.lang.Object it = null;
		//line 138 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 138 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			haxe.root.Xml _this = this.x;
			//line 138 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (( ( _this.nodeType != haxe.root.Xml.Document ) && ( _this.nodeType != haxe.root.Xml.Element ) )) 
			{
				//line 138 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw haxe.lang.HaxeException.wrap(( "Bad node type, expected Element or Document but found " + _this.nodeType ));
			}
			
			//line 138 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			it = ((java.lang.Object) (new _Array.ArrayIterator<haxe.root.Xml>(((haxe.root.Array<haxe.root.Xml>) (_this.children) ))) );
		}
		
		//line 139 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		if ( ! (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(it, "hasNext", null))) ) 
		{
			//line 140 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			throw haxe.lang.HaxeException.wrap(( this.get_name() + " does not have data" ));
		}
		
		//line 141 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		haxe.root.Xml v = ((haxe.root.Xml) (haxe.lang.Runtime.callField(it, "next", null)) );
		//line 142 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		haxe.root.Xml n = ((haxe.root.Xml) (haxe.lang.Runtime.callField(it, "next", null)) );
		//line 143 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		if (( n != null )) 
		{
			//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_boolv4 = ( v.nodeType == haxe.root.Xml.PCData );
			//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_boolv3 = false;
			//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_boolv2 = false;
			//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_boolv4) 
			{
				//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				__temp_boolv3 = ( n.nodeType == haxe.root.Xml.CData );
				//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				if (__temp_boolv3) 
				{
					//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					java.lang.String __temp_stmt5 = null;
					//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					{
						//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						java.lang.String s = null;
						//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						{
							//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
							if (( ( v.nodeType == haxe.root.Xml.Document ) || ( v.nodeType == haxe.root.Xml.Element ) )) 
							{
								//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
								throw haxe.lang.HaxeException.wrap(( "Bad node type, unexpected " + v.nodeType ));
							}
							
							//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
							s = v.nodeValue;
						}
						
						//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_stmt5 = s.trim();
					}
					
					//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					__temp_boolv2 = haxe.lang.Runtime.valEq(__temp_stmt5, "");
				}
				
			}
			
			//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_stmt1 = ( ( __temp_boolv4 && __temp_boolv3 ) && __temp_boolv2 );
			//line 145 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_stmt1) 
			{
				//line 146 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				haxe.root.Xml n2 = ((haxe.root.Xml) (haxe.lang.Runtime.callField(it, "next", null)) );
				//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				boolean __temp_stmt7 = ( n2 == null );
				//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				boolean __temp_boolv8 = false;
				//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				if ( ! (__temp_stmt7) ) 
				{
					//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					boolean __temp_boolv11 = ( n2.nodeType == haxe.root.Xml.PCData );
					//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					boolean __temp_boolv10 = false;
					//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					boolean __temp_boolv9 = false;
					//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (__temp_boolv11) 
					{
						//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						java.lang.String __temp_stmt12 = null;
						//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						{
							//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
							java.lang.String s1 = null;
							//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
							{
								//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
								if (( ( n2.nodeType == haxe.root.Xml.Document ) || ( n2.nodeType == haxe.root.Xml.Element ) )) 
								{
									//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
									throw haxe.lang.HaxeException.wrap(( "Bad node type, unexpected " + n2.nodeType ));
								}
								
								//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
								s1 = n2.nodeValue;
							}
							
							//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
							__temp_stmt12 = s1.trim();
						}
						
						//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_boolv10 = haxe.lang.Runtime.valEq(__temp_stmt12, "");
						//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						if (__temp_boolv10) 
						{
							//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
							__temp_boolv9 = ( ((haxe.root.Xml) (haxe.lang.Runtime.callField(it, "next", null)) ) == null );
						}
						
					}
					
					//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					__temp_boolv8 = ( ( __temp_boolv11 && __temp_boolv10 ) && __temp_boolv9 );
				}
				
				//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				boolean __temp_stmt6 = ( __temp_stmt7 || __temp_boolv8 );
				//line 147 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				if (__temp_stmt6) 
				{
					//line 148 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (( ( n.nodeType == haxe.root.Xml.Document ) || ( n.nodeType == haxe.root.Xml.Element ) )) 
					{
						//line 148 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						throw haxe.lang.HaxeException.wrap(( "Bad node type, unexpected " + n.nodeType ));
					}
					
					//line 148 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					return n.nodeValue;
				}
				
			}
			
			//line 150 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			throw haxe.lang.HaxeException.wrap(( this.get_name() + " does not only have data" ));
		}
		
		//line 152 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		if (( ( v.nodeType != haxe.root.Xml.PCData ) && ( v.nodeType != haxe.root.Xml.CData ) )) 
		{
			//line 153 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			throw haxe.lang.HaxeException.wrap(( this.get_name() + " does not have data" ));
		}
		
		//line 154 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 154 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (( ( v.nodeType == haxe.root.Xml.Document ) || ( v.nodeType == haxe.root.Xml.Element ) )) 
			{
				//line 154 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw haxe.lang.HaxeException.wrap(( "Bad node type, unexpected " + v.nodeType ));
			}
			
			//line 154 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return v.nodeValue;
		}
		
	}
	
	
	public java.lang.String get_innerHTML()
	{
		//line 158 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		haxe.root.StringBuf s = new haxe.root.StringBuf();
		//line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			java.lang.Object __temp_iterator1 = null;
			//line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			{
				//line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				haxe.root.Xml _this = this.x;
				//line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				if (( ( _this.nodeType != haxe.root.Xml.Document ) && ( _this.nodeType != haxe.root.Xml.Element ) )) 
				{
					//line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					throw haxe.lang.HaxeException.wrap(( "Bad node type, expected Element or Document but found " + _this.nodeType ));
				}
				
				//line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				__temp_iterator1 = ((java.lang.Object) (new _Array.ArrayIterator<haxe.root.Xml>(((haxe.root.Array<haxe.root.Xml>) (_this.children) ))) );
			}
			
			//line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 159 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				haxe.root.Xml x = ((haxe.root.Xml) (haxe.lang.Runtime.callField(__temp_iterator1, "next", null)) );
				//line 160 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				s.add(haxe.xml.Printer.print(x, null));
			}
			
		}
		
		//line 161 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		return s.toString();
	}
	
	
	public java.lang.Object get_elements()
	{
		//line 165 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		java.lang.Object it = this.x.elements();
		//line 166 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 167 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			haxe.lang.Function __temp_odecl1 = ((haxe.lang.Function) (haxe.lang.Runtime.getField(it, "hasNext", true)) );
			//line 168 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			haxe.lang.Function __temp_odecl2 = new haxe.xml.Fast_get_elements_168__Fun(it);
			//line 166 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			return new haxe.lang.DynamicObject(new java.lang.String[]{"hasNext", "next"}, new java.lang.Object[]{__temp_odecl1, __temp_odecl2}, new java.lang.String[]{}, new double[]{});
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_executeDef1 = true;
			//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			switch (field.hashCode())
			{
				case 696768444:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("hasNode")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.hasNode = ((haxe.xml._Fast.HasNodeAccess) (value) );
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return value;
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 120:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("x")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.x = ((haxe.root.Xml) (value) );
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return value;
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 103066:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("has")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.has = ((haxe.xml._Fast.HasAttribAccess) (value) );
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return value;
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 3386882:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("node")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.node = ((haxe.xml._Fast.NodeAccess) (value) );
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return value;
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 96929:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("att")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.att = ((haxe.xml._Fast.AttribAccess) (value) );
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return value;
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 104993457:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("nodes")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						this.nodes = ((haxe.xml._Fast.NodeListAccess) (value) );
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return value;
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
			}
			
			//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_executeDef1) 
			{
				//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_executeDef1 = true;
			//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			switch (field.hashCode())
			{
				case -1931394112:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("get_elements")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_elements")) );
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 120:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("x")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.x;
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case -13498024:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("get_innerHTML")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_innerHTML")) );
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 3386882:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("node")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.node;
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case -13603465:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("get_innerData")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_innerData")) );
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 104993457:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("nodes")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.nodes;
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 1976486356:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("get_name")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_name")) );
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 96929:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("att")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.att;
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 696768444:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("hasNode")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.hasNode;
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 103066:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("has")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.has;
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
			}
			
			//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_executeDef1) 
			{
				//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			boolean __temp_executeDef1 = true;
			//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			switch (field.hashCode())
			{
				case -1931394112:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("get_elements")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.get_elements();
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case 1976486356:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("get_name")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.get_name();
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case -13498024:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("get_innerHTML")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.get_innerHTML();
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
				case -13603465:
				{
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					if (field.equals("get_innerData")) 
					{
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						__temp_executeDef1 = false;
						//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
						return this.get_innerData();
					}
					
					//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
					break;
				}
				
				
			}
			
			//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			if (__temp_executeDef1) 
			{
				//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		baseArr.push("hasNode");
		//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		baseArr.push("has");
		//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		baseArr.push("att");
		//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		baseArr.push("nodes");
		//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		baseArr.push("node");
		//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		baseArr.push("x");
		//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
		{
			//line 109 "/usr/lib/haxe/std/haxe/xml/Fast.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


