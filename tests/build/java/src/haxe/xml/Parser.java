package haxe.xml;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Parser extends haxe.lang.HxObject
{
	static
	{
		//line 51 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		{
			//line 52 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			haxe.ds.StringMap<java.lang.String> h = new haxe.ds.StringMap<java.lang.String>();
			//line 53 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			h.set("lt", "<");
			//line 54 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			h.set("gt", ">");
			//line 55 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			h.set("amp", "&");
			//line 56 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			h.set("quot", "\"");
			//line 57 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			h.set("apos", "\'");
			//line 58 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			haxe.xml.Parser.escapes = h;
		}
		
	}
	
	public Parser(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Parser()
	{
		//line 49 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		haxe.xml.Parser.__hx_ctor_haxe_xml_Parser(this);
	}
	
	
	public static void __hx_ctor_haxe_xml_Parser(haxe.xml.Parser __temp_me49)
	{
	}
	
	
	public static haxe.ds.StringMap<java.lang.String> escapes;
	
	public static haxe.root.Xml parse(java.lang.String str, java.lang.Object strict)
	{
		//line 65 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		boolean __temp_strict47 = ( (haxe.lang.Runtime.eq(strict, null)) ? (false) : (haxe.lang.Runtime.toBool(strict)) );
		//line 66 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		haxe.root.Xml doc = haxe.root.Xml.createDocument();
		//line 67 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		haxe.xml.Parser.doParse(str, __temp_strict47, 0, doc);
		//line 68 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		return doc;
	}
	
	
	public static int doParse(java.lang.String str, boolean strict, java.lang.Object p, haxe.root.Xml parent)
	{
		//line 72 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		int __temp_p48 = ( (haxe.lang.Runtime.eq(p, null)) ? (0) : (((int) (haxe.lang.Runtime.toInt(p)) )) );
		//line 73 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		haxe.root.Xml xml = null;
		//line 74 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		int state = 1;
		//line 75 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		int next = 1;
		//line 76 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		java.lang.String aname = null;
		//line 77 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		int start = 0;
		//line 78 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		int nsubs = 0;
		//line 79 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		int nbrackets = 0;
		//line 80 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		int c = 0;
		//line 80 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		if (( __temp_p48 < str.length() )) 
		{
			//line 80 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			c = ((int) (str.charAt(__temp_p48)) );
		}
		else
		{
			//line 80 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			c = -1;
		}
		
		//line 81 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		haxe.root.StringBuf buf = new haxe.root.StringBuf();
		//line 83 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		int escapeNext = 1;
		//line 84 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		int attrValQuote = -1;
		//line 89 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		while ( ! ((( c == -1 ))) )
		{
			//line 91 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			switch (state)
			{
				case 0:
				{
					//line 94 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					switch (c)
					{
						case 10:
						case 13:
						case 9:
						case 32:
						{
							//line 97 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						default:
						{
							//line 102 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							state = next;
							//line 103 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							continue;
						}
						
					}
					
					//line 94 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 1:
				{
					//line 106 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					switch (c)
					{
						case 60:
						{
							//line 109 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							state = 0;
							//line 110 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							next = 2;
							//line 108 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						default:
						{
							//line 112 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							start = __temp_p48;
							//line 113 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							state = 13;
							//line 114 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							continue;
						}
						
					}
					
					//line 106 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 13:
				{
					//line 117 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					if (( c == 60 )) 
					{
						//line 119 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						buf.addSub(str, start, ( __temp_p48 - start ));
						//line 120 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						haxe.root.Xml child = haxe.root.Xml.createPCData(buf.toString());
						//line 121 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						buf = new haxe.root.StringBuf();
						//line 122 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						{
							//line 122 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							parent.addChild(child);
							//line 122 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							nsubs++;
						}
						
						//line 123 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						state = 0;
						//line 124 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						next = 2;
					}
					else
					{
						//line 125 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						if (( c == 38 )) 
						{
							//line 126 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							buf.addSub(str, start, ( __temp_p48 - start ));
							//line 127 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							state = 18;
							//line 128 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							escapeNext = 13;
							//line 129 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							start = ( __temp_p48 + 1 );
						}
						
					}
					
					//line 117 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 17:
				{
					//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					boolean __temp_boolv4 = ( c == 93 );
					//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					boolean __temp_boolv3 = false;
					//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					boolean __temp_boolv2 = false;
					//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					if (__temp_boolv4) 
					{
						//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						int __temp_stmt5 = 0;
						//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						{
							//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							int index = ( __temp_p48 + 1 );
							//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							__temp_stmt5 = ( (( index < str.length() )) ? (((int) (str.charAt(index)) )) : (-1) );
						}
						
						//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						__temp_boolv3 = ( __temp_stmt5 == 93 );
						//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						if (__temp_boolv3) 
						{
							//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							int __temp_stmt6 = 0;
							//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							{
								//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								int index1 = ( __temp_p48 + 2 );
								//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								__temp_stmt6 = ( (( index1 < str.length() )) ? (((int) (str.charAt(index1)) )) : (-1) );
							}
							
							//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							__temp_boolv2 = ( __temp_stmt6 == 62 );
						}
						
					}
					
					//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					boolean __temp_stmt1 = ( ( __temp_boolv4 && __temp_boolv3 ) && __temp_boolv2 );
					//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					if (__temp_stmt1) 
					{
						//line 134 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						haxe.root.Xml child1 = haxe.root.Xml.createCData(haxe.lang.StringExt.substr(str, start, ( __temp_p48 - start )));
						//line 135 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						{
							//line 135 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							parent.addChild(child1);
							//line 135 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							nsubs++;
						}
						
						//line 136 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						__temp_p48 += 2;
						//line 137 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						state = 1;
					}
					
					//line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 2:
				{
					//line 140 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					switch (c)
					{
						case 33:
						{
							//line 143 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							int __temp_stmt7 = 0;
							//line 143 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							{
								//line 143 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								int index2 = ( __temp_p48 + 1 );
								//line 143 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								__temp_stmt7 = ( (( index2 < str.length() )) ? (((int) (str.charAt(index2)) )) : (-1) );
							}
							
							//line 143 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (( __temp_stmt7 == 91 )) 
							{
								//line 145 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								__temp_p48 += 2;
								//line 146 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								if ( ! (haxe.lang.Runtime.valEq(haxe.lang.StringExt.substr(str, __temp_p48, 6).toUpperCase(), "CDATA[")) ) 
								{
									//line 147 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									throw haxe.lang.HaxeException.wrap("Expected <![CDATA[");
								}
								
								//line 148 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								__temp_p48 += 5;
								//line 149 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								state = 17;
								//line 150 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								start = ( __temp_p48 + 1 );
							}
							else
							{
								//line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								int __temp_stmt10 = 0;
								//line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								{
									//line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									int index3 = ( __temp_p48 + 1 );
									//line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									__temp_stmt10 = ( (( index3 < str.length() )) ? (((int) (str.charAt(index3)) )) : (-1) );
								}
								
								//line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								boolean __temp_stmt9 = ( __temp_stmt10 == 68 );
								//line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								boolean __temp_boolv11 = false;
								//line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								if ( ! (__temp_stmt9) ) 
								{
									//line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									int __temp_stmt12 = 0;
									//line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									{
										//line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										int index4 = ( __temp_p48 + 1 );
										//line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										__temp_stmt12 = ( (( index4 < str.length() )) ? (((int) (str.charAt(index4)) )) : (-1) );
									}
									
									//line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									__temp_boolv11 = ( __temp_stmt12 == 100 );
								}
								
								//line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								boolean __temp_stmt8 = ( __temp_stmt9 || __temp_boolv11 );
								//line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								if (__temp_stmt8) 
								{
									//line 154 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									if ( ! (haxe.lang.Runtime.valEq(haxe.lang.StringExt.substr(str, ( __temp_p48 + 2 ), 6).toUpperCase(), "OCTYPE")) ) 
									{
										//line 155 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										throw haxe.lang.HaxeException.wrap("Expected <!DOCTYPE");
									}
									
									//line 156 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									__temp_p48 += 8;
									//line 157 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									state = 16;
									//line 158 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									start = ( __temp_p48 + 1 );
								}
								else
								{
									//line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									int __temp_stmt15 = 0;
									//line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									{
										//line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										int index5 = ( __temp_p48 + 1 );
										//line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										__temp_stmt15 = ( (( index5 < str.length() )) ? (((int) (str.charAt(index5)) )) : (-1) );
									}
									
									//line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									boolean __temp_stmt14 = ( __temp_stmt15 != 45 );
									//line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									boolean __temp_boolv16 = false;
									//line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									if ( ! (__temp_stmt14) ) 
									{
										//line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										int __temp_stmt17 = 0;
										//line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										{
											//line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											int index6 = ( __temp_p48 + 2 );
											//line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											__temp_stmt17 = ( (( index6 < str.length() )) ? (((int) (str.charAt(index6)) )) : (-1) );
										}
										
										//line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										__temp_boolv16 = ( __temp_stmt17 != 45 );
									}
									
									//line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									boolean __temp_stmt13 = ( __temp_stmt14 || __temp_boolv16 );
									//line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									if (__temp_stmt13) 
									{
										//line 161 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										throw haxe.lang.HaxeException.wrap("Expected <!--");
									}
									else
									{
										//line 164 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										__temp_p48 += 2;
										//line 165 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										state = 15;
										//line 166 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										start = ( __temp_p48 + 1 );
									}
									
								}
								
							}
							
							//line 143 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 63:
						{
							//line 169 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							state = 14;
							//line 170 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							start = __temp_p48;
							//line 168 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 47:
						{
							//line 172 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (( parent == null )) 
							{
								//line 173 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								throw haxe.lang.HaxeException.wrap("Expected node name");
							}
							
							//line 174 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							start = ( __temp_p48 + 1 );
							//line 175 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							state = 0;
							//line 176 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							next = 10;
							//line 171 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						default:
						{
							//line 178 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							state = 3;
							//line 179 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							start = __temp_p48;
							//line 180 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							continue;
						}
						
					}
					
					//line 140 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 3:
				{
					//line 183 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					if ( ! ((( ( ( ( ( ( ( ( c >= 97 ) && ( c <= 122 ) ) || ( ( c >= 65 ) && ( c <= 90 ) ) ) || ( ( c >= 48 ) && ( c <= 57 ) ) ) || ( c == 58 ) ) || ( c == 46 ) ) || ( c == 95 ) ) || ( c == 45 ) ))) ) 
					{
						//line 185 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						if (( __temp_p48 == start )) 
						{
							//line 186 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							throw haxe.lang.HaxeException.wrap("Expected node name");
						}
						
						//line 187 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						xml = haxe.root.Xml.createElement(haxe.lang.StringExt.substr(str, start, ( __temp_p48 - start )));
						//line 188 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						{
							//line 188 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							parent.addChild(xml);
							//line 188 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							nsubs++;
						}
						
						//line 189 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						state = 0;
						//line 190 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						next = 4;
						//line 191 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						continue;
					}
					
					//line 183 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 4:
				{
					//line 194 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					switch (c)
					{
						case 47:
						{
							//line 197 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							state = 11;
							//line 197 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 62:
						{
							//line 199 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							state = 9;
							//line 199 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						default:
						{
							//line 201 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							state = 5;
							//line 202 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							start = __temp_p48;
							//line 203 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							continue;
						}
						
					}
					
					//line 194 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 5:
				{
					//line 206 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					if ( ! ((( ( ( ( ( ( ( ( c >= 97 ) && ( c <= 122 ) ) || ( ( c >= 65 ) && ( c <= 90 ) ) ) || ( ( c >= 48 ) && ( c <= 57 ) ) ) || ( c == 58 ) ) || ( c == 46 ) ) || ( c == 95 ) ) || ( c == 45 ) ))) ) 
					{
						//line 208 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						java.lang.String tmp = null;
						//line 209 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						if (( start == __temp_p48 )) 
						{
							//line 210 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							throw haxe.lang.HaxeException.wrap("Expected attribute name");
						}
						
						//line 211 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						tmp = haxe.lang.StringExt.substr(str, start, ( __temp_p48 - start ));
						//line 212 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						aname = tmp;
						//line 213 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						if (xml.exists(aname)) 
						{
							//line 214 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							throw haxe.lang.HaxeException.wrap("Duplicate attribute");
						}
						
						//line 215 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						state = 0;
						//line 216 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						next = 6;
						//line 217 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						continue;
					}
					
					//line 206 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 6:
				{
					//line 220 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					switch (c)
					{
						case 61:
						{
							//line 223 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							state = 0;
							//line 224 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							next = 7;
							//line 222 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						default:
						{
							//line 226 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							throw haxe.lang.HaxeException.wrap("Expected =");
						}
						
					}
					
					//line 220 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 7:
				{
					//line 229 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					switch (c)
					{
						case 34:
						case 39:
						{
							//line 232 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							buf = new haxe.root.StringBuf();
							//line 233 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							state = 8;
							//line 234 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							start = ( __temp_p48 + 1 );
							//line 235 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							attrValQuote = c;
							//line 231 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						default:
						{
							//line 237 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							throw haxe.lang.HaxeException.wrap("Expected \"");
						}
						
					}
					
					//line 229 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 8:
				{
					//line 240 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					switch (c)
					{
						case 38:
						{
							//line 242 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							buf.addSub(str, start, ( __temp_p48 - start ));
							//line 243 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							state = 18;
							//line 244 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							escapeNext = 8;
							//line 245 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							start = ( __temp_p48 + 1 );
							//line 241 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 62:
						{
							//line 246 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (strict) 
							{
								//line 248 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								throw haxe.lang.HaxeException.wrap(( ( "Invalid unescaped " + Character.toString((char) c) ) + " in attribute value" ));
							}
							else
							{
								//line 249 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								if (( c == attrValQuote )) 
								{
									//line 250 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									buf.addSub(str, start, ( __temp_p48 - start ));
									//line 251 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									java.lang.String val = buf.toString();
									//line 252 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									buf = new haxe.root.StringBuf();
									//line 253 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									xml.set(aname, val);
									//line 254 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									state = 0;
									//line 255 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									next = 4;
								}
								
							}
							
							//line 246 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 60:
						{
							//line 246 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (strict) 
							{
								//line 248 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								throw haxe.lang.HaxeException.wrap(( ( "Invalid unescaped " + Character.toString((char) c) ) + " in attribute value" ));
							}
							else
							{
								//line 249 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								if (( c == attrValQuote )) 
								{
									//line 250 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									buf.addSub(str, start, ( __temp_p48 - start ));
									//line 251 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									java.lang.String val1 = buf.toString();
									//line 252 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									buf = new haxe.root.StringBuf();
									//line 253 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									xml.set(aname, val1);
									//line 254 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									state = 0;
									//line 255 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									next = 4;
								}
								
							}
							
							//line 246 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						default:
						{
							//line 249 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (( c == attrValQuote )) 
							{
								//line 250 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								buf.addSub(str, start, ( __temp_p48 - start ));
								//line 251 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								java.lang.String val2 = buf.toString();
								//line 252 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								buf = new haxe.root.StringBuf();
								//line 253 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								xml.set(aname, val2);
								//line 254 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								state = 0;
								//line 255 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								next = 4;
							}
							
							//line 249 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
					}
					
					//line 240 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 9:
				{
					//line 258 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					__temp_p48 = haxe.xml.Parser.doParse(str, strict, __temp_p48, xml);
					//line 259 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					start = __temp_p48;
					//line 260 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					state = 1;
					//line 257 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 11:
				{
					//line 262 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					switch (c)
					{
						case 62:
						{
							//line 265 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							state = 1;
							//line 265 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						default:
						{
							//line 267 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							throw haxe.lang.HaxeException.wrap("Expected >");
						}
						
					}
					
					//line 262 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 12:
				{
					//line 270 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					switch (c)
					{
						case 62:
						{
							//line 273 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (( nsubs == 0 )) 
							{
								//line 274 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								parent.addChild(haxe.root.Xml.createPCData(""));
							}
							
							//line 275 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							return __temp_p48;
						}
						
						
						default:
						{
							//line 277 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							throw haxe.lang.HaxeException.wrap("Expected >");
						}
						
					}
					
				}
				
				
				case 10:
				{
					//line 280 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					if ( ! ((( ( ( ( ( ( ( ( c >= 97 ) && ( c <= 122 ) ) || ( ( c >= 65 ) && ( c <= 90 ) ) ) || ( ( c >= 48 ) && ( c <= 57 ) ) ) || ( c == 58 ) ) || ( c == 46 ) ) || ( c == 95 ) ) || ( c == 45 ) ))) ) 
					{
						//line 282 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						if (( start == __temp_p48 )) 
						{
							//line 283 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							throw haxe.lang.HaxeException.wrap("Expected node name");
						}
						
						//line 285 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						java.lang.String v = haxe.lang.StringExt.substr(str, start, ( __temp_p48 - start ));
						//line 286 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						java.lang.String __temp_stmt18 = null;
						//line 286 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						{
							//line 286 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (( parent.nodeType != haxe.root.Xml.Element )) 
							{
								//line 286 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								throw haxe.lang.HaxeException.wrap(( "Bad node type, expected Element but found " + parent.nodeType ));
							}
							
							//line 286 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							__temp_stmt18 = parent.nodeName;
						}
						
						//line 286 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						if ( ! (haxe.lang.Runtime.valEq(v, __temp_stmt18)) ) 
						{
							//line 287 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							java.lang.String __temp_stmt19 = null;
							//line 287 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							{
								//line 287 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								if (( parent.nodeType != haxe.root.Xml.Element )) 
								{
									//line 287 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									throw haxe.lang.HaxeException.wrap(( "Bad node type, expected Element but found " + parent.nodeType ));
								}
								
								//line 287 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								__temp_stmt19 = parent.nodeName;
							}
							
							//line 287 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							throw haxe.lang.HaxeException.wrap(( ( "Expected </" + __temp_stmt19 ) + ">" ));
						}
						
						//line 289 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						state = 0;
						//line 290 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						next = 12;
						//line 291 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						continue;
					}
					
					//line 280 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 15:
				{
					//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					boolean __temp_boolv23 = ( c == 45 );
					//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					boolean __temp_boolv22 = false;
					//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					boolean __temp_boolv21 = false;
					//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					if (__temp_boolv23) 
					{
						//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						int __temp_stmt24 = 0;
						//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						{
							//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							int index7 = ( __temp_p48 + 1 );
							//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							__temp_stmt24 = ( (( index7 < str.length() )) ? (((int) (str.charAt(index7)) )) : (-1) );
						}
						
						//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						__temp_boolv22 = ( __temp_stmt24 == 45 );
						//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						if (__temp_boolv22) 
						{
							//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							int __temp_stmt25 = 0;
							//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							{
								//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								int index8 = ( __temp_p48 + 2 );
								//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								__temp_stmt25 = ( (( index8 < str.length() )) ? (((int) (str.charAt(index8)) )) : (-1) );
							}
							
							//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							__temp_boolv21 = ( __temp_stmt25 == 62 );
						}
						
					}
					
					//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					boolean __temp_stmt20 = ( ( __temp_boolv23 && __temp_boolv22 ) && __temp_boolv21 );
					//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					if (__temp_stmt20) 
					{
						//line 296 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						{
							//line 296 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							haxe.root.Xml xml1 = haxe.root.Xml.createComment(haxe.lang.StringExt.substr(str, start, ( __temp_p48 - start )));
							//line 296 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							parent.addChild(xml1);
							//line 296 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							nsubs++;
						}
						
						//line 297 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						__temp_p48 += 2;
						//line 298 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						state = 1;
					}
					
					//line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 16:
				{
					//line 301 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					if (( c == 91 )) 
					{
						//line 302 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						nbrackets++;
					}
					else
					{
						//line 303 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						if (( c == 93 )) 
						{
							//line 304 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							nbrackets--;
						}
						else
						{
							//line 305 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (( ( c == 62 ) && ( nbrackets == 0 ) )) 
							{
								//line 307 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								{
									//line 307 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									haxe.root.Xml xml2 = haxe.root.Xml.createDocType(haxe.lang.StringExt.substr(str, start, ( __temp_p48 - start )));
									//line 307 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									parent.addChild(xml2);
									//line 307 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									nsubs++;
								}
								
								//line 308 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								state = 1;
							}
							
						}
						
					}
					
					//line 301 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 14:
				{
					//line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					boolean __temp_boolv28 = ( c == 63 );
					//line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					boolean __temp_boolv27 = false;
					//line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					if (__temp_boolv28) 
					{
						//line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						int __temp_stmt29 = 0;
						//line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						{
							//line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							int index9 = ( __temp_p48 + 1 );
							//line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							__temp_stmt29 = ( (( index9 < str.length() )) ? (((int) (str.charAt(index9)) )) : (-1) );
						}
						
						//line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						__temp_boolv27 = ( __temp_stmt29 == 62 );
					}
					
					//line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					boolean __temp_stmt26 = ( __temp_boolv28 && __temp_boolv27 );
					//line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					if (__temp_stmt26) 
					{
						//line 313 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						__temp_p48++;
						//line 314 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						java.lang.String str1 = haxe.lang.StringExt.substr(str, ( start + 1 ), ( ( __temp_p48 - start ) - 2 ));
						//line 315 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						{
							//line 315 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							haxe.root.Xml xml3 = haxe.root.Xml.createProcessingInstruction(str1);
							//line 315 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							parent.addChild(xml3);
							//line 315 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							nsubs++;
						}
						
						//line 316 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						state = 1;
					}
					
					//line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
				case 18:
				{
					//line 319 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					if (( c == 59 )) 
					{
						//line 321 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						java.lang.String s = haxe.lang.StringExt.substr(str, start, ( __temp_p48 - start ));
						//line 322 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						if (( (( (( 0 < s.length() )) ? (((int) (s.charAt(0)) )) : (-1) )) == 35 )) 
						{
							//line 323 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							java.lang.Object c1 = null;
							//line 323 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (( (( (( 1 < s.length() )) ? (((int) (s.charAt(1)) )) : (-1) )) == 120 )) 
							{
								//line 324 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								c1 = haxe.root.Std.parseInt(( "0" + haxe.lang.StringExt.substr(s, 1, ( s.length() - 1 )) ));
							}
							else
							{
								//line 325 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								c1 = haxe.root.Std.parseInt(haxe.lang.StringExt.substr(s, 1, ( s.length() - 1 )));
							}
							
							//line 345 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							buf.addChar(((int) (haxe.lang.Runtime.toInt(c1)) ));
						}
						else
						{
							//line 346 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if ( ! (haxe.xml.Parser.escapes.exists(s)) ) 
							{
								//line 347 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								if (strict) 
								{
									//line 348 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									throw haxe.lang.HaxeException.wrap(( "Undefined entity: " + s ));
								}
								
								//line 349 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								buf.add(( ( "&" + s ) + ";" ));
							}
							else
							{
								//line 351 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								buf.add(haxe.lang.Runtime.toString(haxe.xml.Parser.escapes.get(s)));
							}
							
						}
						
						//line 353 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						start = ( __temp_p48 + 1 );
						//line 354 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						state = escapeNext;
					}
					else
					{
						//line 355 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						if ((  ! ((( ( ( ( ( ( ( ( c >= 97 ) && ( c <= 122 ) ) || ( ( c >= 65 ) && ( c <= 90 ) ) ) || ( ( c >= 48 ) && ( c <= 57 ) ) ) || ( c == 58 ) ) || ( c == 46 ) ) || ( c == 95 ) ) || ( c == 45 ) )))  && ( c != 35 ) )) 
						{
							//line 356 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (strict) 
							{
								//line 357 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								throw haxe.lang.HaxeException.wrap(( "Invalid character in entity: " + Character.toString((char) c) ));
							}
							
							//line 358 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							buf.addChar(38);
							//line 359 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							buf.addSub(str, start, ( __temp_p48 - start ));
							//line 360 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							__temp_p48--;
							//line 361 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							start = ( __temp_p48 + 1 );
							//line 362 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							state = escapeNext;
						}
						
					}
					
					//line 319 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					break;
				}
				
				
			}
			
			//line 365 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			{
				//line 365 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				int index10 =  ++ __temp_p48;
				//line 365 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				if (( index10 < str.length() )) 
				{
					//line 365 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					c = ((int) (str.charAt(index10)) );
				}
				else
				{
					//line 365 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					c = -1;
				}
				
			}
			
		}
		
		//line 368 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		if (( state == 1 )) 
		{
			//line 370 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			start = __temp_p48;
			//line 371 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			state = 13;
		}
		
		//line 374 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		if (( state == 13 )) 
		{
			//line 376 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			if (( ( __temp_p48 != start ) || ( nsubs == 0 ) )) 
			{
				//line 377 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				buf.addSub(str, start, ( __temp_p48 - start ));
				//line 378 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				{
					//line 378 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					haxe.root.Xml xml4 = haxe.root.Xml.createPCData(buf.toString());
					//line 378 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					parent.addChild(xml4);
					//line 378 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					nsubs++;
				}
				
			}
			
			//line 380 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			return __temp_p48;
		}
		
		//line 383 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		if (( (  ! (strict)  && ( state == 18 ) ) && ( escapeNext == 13 ) )) 
		{
			//line 384 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			buf.addChar(38);
			//line 385 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			buf.addSub(str, start, ( __temp_p48 - start ));
			//line 386 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			{
				//line 386 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				haxe.root.Xml xml5 = haxe.root.Xml.createPCData(buf.toString());
				//line 386 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				parent.addChild(xml5);
				//line 386 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				nsubs++;
			}
			
			//line 387 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			return __temp_p48;
		}
		
		//line 390 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		throw haxe.lang.HaxeException.wrap("Unexpected end");
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 49 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		return new haxe.xml.Parser(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 49 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
		return new haxe.xml.Parser();
	}
	
	
}


