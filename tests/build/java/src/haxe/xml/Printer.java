package haxe.xml;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Printer extends haxe.lang.HxObject
{
	public Printer(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Printer(boolean pretty)
	{
		//line 42 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		haxe.xml.Printer.__hx_ctor_haxe_xml_Printer(this, pretty);
	}
	
	
	public static void __hx_ctor_haxe_xml_Printer(haxe.xml.Printer __temp_me51, boolean pretty)
	{
		//line 43 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		__temp_me51.output = new haxe.root.StringBuf();
		//line 44 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		__temp_me51.pretty = pretty;
	}
	
	
	public static java.lang.String print(haxe.root.Xml xml, java.lang.Object pretty)
	{
		//line 33 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		java.lang.Object __temp_pretty50 = ( (haxe.lang.Runtime.eq(pretty, null)) ? (((java.lang.Object) (false) )) : (pretty) );
		//line 34 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		haxe.xml.Printer printer = new haxe.xml.Printer(haxe.lang.Runtime.toBool(__temp_pretty50));
		//line 35 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		printer.writeNode(xml, "");
		//line 36 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		return printer.output.toString();
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		return new haxe.xml.Printer(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		return new haxe.xml.Printer(haxe.lang.Runtime.toBool(arr.__get(0)));
	}
	
	
	public haxe.root.StringBuf output;
	
	public boolean pretty;
	
	public void writeNode(haxe.root.Xml value, java.lang.String tabs)
	{
		//line 48 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		int _g = value.nodeType;
		//line 48 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		switch (_g)
		{
			case 2:
			{
				//line 50 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				this.output.add(( tabs + "<![CDATA[" ));
				//line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				{
					//line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					java.lang.String input = null;
					//line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					{
						//line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						java.lang.String s = null;
						//line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						{
							//line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							if (( ( value.nodeType == haxe.root.Xml.Document ) || ( value.nodeType == haxe.root.Xml.Element ) )) 
							{
								//line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								throw haxe.lang.HaxeException.wrap(( "Bad node type, unexpected " + value.nodeType ));
							}
							
							//line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							s = value.nodeValue;
						}
						
						//line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						input = s.trim();
					}
					
					//line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					this.output.add(input);
				}
				
				//line 52 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				this.output.add("]]>");
				//line 53 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				if (this.pretty) 
				{
					//line 53 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					this.output.add("");
				}
				
				//line 49 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				break;
			}
			
			
			case 3:
			{
				//line 55 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				java.lang.String commentContent = null;
				//line 55 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				{
					//line 55 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (( ( value.nodeType == haxe.root.Xml.Document ) || ( value.nodeType == haxe.root.Xml.Element ) )) 
					{
						//line 55 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						throw haxe.lang.HaxeException.wrap(( "Bad node type, unexpected " + value.nodeType ));
					}
					
					//line 55 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					commentContent = value.nodeValue;
				}
				
				//line 56 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				commentContent = new haxe.root.EReg("[\n\r\t]+", "g").replace(commentContent, "");
				//line 57 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				commentContent = ( ( "<!--" + commentContent ) + "-->" );
				//line 58 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				this.output.add(tabs);
				//line 59 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				{
					//line 59 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					java.lang.String input1 = commentContent.trim();
					//line 59 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					this.output.add(input1);
				}
				
				//line 60 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				if (this.pretty) 
				{
					//line 60 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					this.output.add("");
				}
				
				//line 54 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				break;
			}
			
			
			case 6:
			{
				//line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				{
					//line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					java.lang.Object __temp_iterator1 = null;
					//line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					{
						//line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						if (( ( value.nodeType != haxe.root.Xml.Document ) && ( value.nodeType != haxe.root.Xml.Element ) )) 
						{
							//line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							throw haxe.lang.HaxeException.wrap(( "Bad node type, expected Element or Document but found " + value.nodeType ));
						}
						
						//line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						__temp_iterator1 = ((java.lang.Object) (new _Array.ArrayIterator<haxe.root.Xml>(((haxe.root.Array<haxe.root.Xml>) (value.children) ))) );
					}
					
					//line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
					{
						//line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						haxe.root.Xml child = ((haxe.root.Xml) (haxe.lang.Runtime.callField(__temp_iterator1, "next", null)) );
						//line 63 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.writeNode(child, tabs);
					}
					
				}
				
				//line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				break;
			}
			
			
			case 0:
			{
				//line 66 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				this.output.add(( tabs + "<" ));
				//line 67 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				{
					//line 67 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					java.lang.String input2 = null;
					//line 67 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					{
						//line 67 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						if (( value.nodeType != haxe.root.Xml.Element )) 
						{
							//line 67 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							throw haxe.lang.HaxeException.wrap(( "Bad node type, expected Element but found " + value.nodeType ));
						}
						
						//line 67 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						input2 = value.nodeName;
					}
					
					//line 67 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					this.output.add(input2);
				}
				
				//line 68 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				{
					//line 68 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					java.lang.Object __temp_iterator2 = value.attributes();
					//line 68 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator2, "hasNext", null)))
					{
						//line 68 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						java.lang.String attribute = haxe.lang.Runtime.toString(haxe.lang.Runtime.callField(__temp_iterator2, "next", null));
						//line 69 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.output.add(( ( " " + attribute ) + "=\"" ));
						//line 70 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						{
							//line 70 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							java.lang.String input3 = haxe.root.StringTools.htmlEscape(value.get(attribute), true);
							//line 70 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							this.output.add(input3);
						}
						
						//line 71 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.output.add("\"");
					}
					
				}
				
				//line 73 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				if (this.hasChildren(value)) 
				{
					//line 74 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					this.output.add(">");
					//line 75 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (this.pretty) 
					{
						//line 75 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.output.add("");
					}
					
					//line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					{
						//line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						java.lang.Object __temp_iterator3 = null;
						//line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						{
							//line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							if (( ( value.nodeType != haxe.root.Xml.Document ) && ( value.nodeType != haxe.root.Xml.Element ) )) 
							{
								//line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								throw haxe.lang.HaxeException.wrap(( "Bad node type, expected Element or Document but found " + value.nodeType ));
							}
							
							//line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							__temp_iterator3 = ((java.lang.Object) (new _Array.ArrayIterator<haxe.root.Xml>(((haxe.root.Array<haxe.root.Xml>) (value.children) ))) );
						}
						
						//line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator3, "hasNext", null)))
						{
							//line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							haxe.root.Xml child1 = ((haxe.root.Xml) (haxe.lang.Runtime.callField(__temp_iterator3, "next", null)) );
							//line 77 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							this.writeNode(child1, ( (this.pretty) ? (( tabs + "\t" )) : (tabs) ));
						}
						
					}
					
					//line 79 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					this.output.add(( tabs + "</" ));
					//line 80 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					{
						//line 80 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						java.lang.String input4 = null;
						//line 80 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						{
							//line 80 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							if (( value.nodeType != haxe.root.Xml.Element )) 
							{
								//line 80 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								throw haxe.lang.HaxeException.wrap(( "Bad node type, expected Element but found " + value.nodeType ));
							}
							
							//line 80 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							input4 = value.nodeName;
						}
						
						//line 80 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.output.add(input4);
					}
					
					//line 81 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					this.output.add(">");
					//line 82 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (this.pretty) 
					{
						//line 82 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.output.add("");
					}
					
				}
				else
				{
					//line 84 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					this.output.add("/>");
					//line 85 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (this.pretty) 
					{
						//line 85 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.output.add("");
					}
					
				}
				
				//line 65 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				break;
			}
			
			
			case 1:
			{
				//line 88 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				java.lang.String nodeValue = null;
				//line 88 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				{
					//line 88 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (( ( value.nodeType == haxe.root.Xml.Document ) || ( value.nodeType == haxe.root.Xml.Element ) )) 
					{
						//line 88 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						throw haxe.lang.HaxeException.wrap(( "Bad node type, unexpected " + value.nodeType ));
					}
					
					//line 88 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					nodeValue = value.nodeValue;
				}
				
				//line 89 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				if (( nodeValue.length() != 0 )) 
				{
					//line 90 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					{
						//line 90 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						java.lang.String input5 = ( tabs + haxe.root.StringTools.htmlEscape(nodeValue, null) );
						//line 90 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.output.add(input5);
					}
					
					//line 91 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (this.pretty) 
					{
						//line 91 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.output.add("");
					}
					
				}
				
				//line 87 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				break;
			}
			
			
			case 5:
			{
				//line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				java.lang.String input6 = null;
				//line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				java.lang.String __temp_stmt1 = null;
				//line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				{
					//line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (( ( value.nodeType == haxe.root.Xml.Document ) || ( value.nodeType == haxe.root.Xml.Element ) )) 
					{
						//line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						throw haxe.lang.HaxeException.wrap(( "Bad node type, unexpected " + value.nodeType ));
					}
					
					//line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					__temp_stmt1 = value.nodeValue;
				}
				
				//line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				input6 = ( ( "<?" + __temp_stmt1 ) + "?>" );
				//line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				this.output.add(input6);
				//line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				break;
			}
			
			
			case 4:
			{
				//line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				java.lang.String input7 = null;
				//line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				java.lang.String __temp_stmt2 = null;
				//line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				{
					//line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (( ( value.nodeType == haxe.root.Xml.Document ) || ( value.nodeType == haxe.root.Xml.Element ) )) 
					{
						//line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						throw haxe.lang.HaxeException.wrap(( "Bad node type, unexpected " + value.nodeType ));
					}
					
					//line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					__temp_stmt2 = value.nodeValue;
				}
				
				//line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				input7 = ( ( "<!DOCTYPE " + __temp_stmt2 ) + ">" );
				//line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				this.output.add(input7);
				//line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				break;
			}
			
			
		}
		
	}
	
	
	public boolean hasChildren(haxe.root.Xml value)
	{
		//line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		{
			//line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			java.lang.Object __temp_iterator1 = null;
			//line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			{
				//line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				if (( ( value.nodeType != haxe.root.Xml.Document ) && ( value.nodeType != haxe.root.Xml.Element ) )) 
				{
					//line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					throw haxe.lang.HaxeException.wrap(( "Bad node type, expected Element or Document but found " + value.nodeType ));
				}
				
				//line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				__temp_iterator1 = ((java.lang.Object) (new _Array.ArrayIterator<haxe.root.Xml>(((haxe.root.Array<haxe.root.Xml>) (value.children) ))) );
			}
			
			//line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			while (haxe.lang.Runtime.toBool(haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", null)))
			{
				//line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				haxe.root.Xml child = ((haxe.root.Xml) (haxe.lang.Runtime.callField(__temp_iterator1, "next", null)) );
				//line 112 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				int _g = child.nodeType;
				//line 112 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				switch (_g)
				{
					case 0:
					case 1:
					{
						//line 114 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return true;
					}
					
					
					case 2:
					case 3:
					{
						//line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						java.lang.String __temp_stmt2 = null;
						//line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						{
							//line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							if (( ( child.nodeType == haxe.root.Xml.Document ) || ( child.nodeType == haxe.root.Xml.Element ) )) 
							{
								//line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								throw haxe.lang.HaxeException.wrap(( "Bad node type, unexpected " + child.nodeType ));
							}
							
							//line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							__temp_stmt2 = child.nodeValue;
						}
						
						//line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						java.lang.String __temp_stmt1 = haxe.root.StringTools.ltrim(__temp_stmt2);
						//line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						if (( __temp_stmt1.length() != 0 )) 
						{
							//line 117 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							return true;
						}
						
						//line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						break;
					}
					
					
					default:
					{
						//line 119 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						break;
					}
					
				}
				
			}
			
		}
		
		//line 122 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		return false;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		{
			//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			boolean __temp_executeDef1 = true;
			//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			switch (field.hashCode())
			{
				case -980096906:
				{
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (field.equals("pretty")) 
					{
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						__temp_executeDef1 = false;
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.pretty = haxe.lang.Runtime.toBool(value);
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return value;
					}
					
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					break;
				}
				
				
				case -1005512447:
				{
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (field.equals("output")) 
					{
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						__temp_executeDef1 = false;
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.output = ((haxe.root.StringBuf) (value) );
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return value;
					}
					
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					break;
				}
				
				
			}
			
			//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			if (__temp_executeDef1) 
			{
				//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		{
			//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			boolean __temp_executeDef1 = true;
			//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			switch (field.hashCode())
			{
				case 239016633:
				{
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (field.equals("hasChildren")) 
					{
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						__temp_executeDef1 = false;
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "hasChildren")) );
					}
					
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					break;
				}
				
				
				case -1005512447:
				{
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (field.equals("output")) 
					{
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						__temp_executeDef1 = false;
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return this.output;
					}
					
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					break;
				}
				
				
				case -1406504319:
				{
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (field.equals("writeNode")) 
					{
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						__temp_executeDef1 = false;
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "writeNode")) );
					}
					
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					break;
				}
				
				
				case -980096906:
				{
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (field.equals("pretty")) 
					{
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						__temp_executeDef1 = false;
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return this.pretty;
					}
					
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					break;
				}
				
				
			}
			
			//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			if (__temp_executeDef1) 
			{
				//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		{
			//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			boolean __temp_executeDef1 = true;
			//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			switch (field.hashCode())
			{
				case 239016633:
				{
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (field.equals("hasChildren")) 
					{
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						__temp_executeDef1 = false;
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return this.hasChildren(((haxe.root.Xml) (dynargs.__get(0)) ));
					}
					
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					break;
				}
				
				
				case -1406504319:
				{
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					if (field.equals("writeNode")) 
					{
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						__temp_executeDef1 = false;
						//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.writeNode(((haxe.root.Xml) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)));
					}
					
					//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					break;
				}
				
				
			}
			
			//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			if (__temp_executeDef1) 
			{
				//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		baseArr.push("pretty");
		//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		baseArr.push("output");
		//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
		{
			//line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


