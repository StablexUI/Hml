
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.xml {
	public class Parser : global::haxe.lang.HxObject {
		
		static Parser() {
			#line 51 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			{
				#line 52 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				global::haxe.ds.StringMap<object> h = new global::haxe.ds.StringMap<object>();
				h.@set("lt", "<");
				h.@set("gt", ">");
				h.@set("amp", "&");
				h.@set("quot", "\"");
				h.@set("apos", "\'");
				global::haxe.xml.Parser.escapes = h;
			}
			
		}
		#line default
		
		public Parser(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Parser() {
			#line 49 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			global::haxe.xml.Parser.__hx_ctor_haxe_xml_Parser(this);
		}
		#line default
		
		public static void __hx_ctor_haxe_xml_Parser(global::haxe.xml.Parser __temp_me72) {
		}
		
		
		public static global::haxe.ds.StringMap<object> escapes;
		
		public static global::Xml parse(string str, global::haxe.lang.Null<bool> strict) {
			#line 65 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			bool __temp_strict70 = ( ( ! (strict.hasValue) ) ? (false) : ((strict).@value) );
			global::Xml doc = global::Xml.createDocument();
			global::haxe.xml.Parser.doParse(str, __temp_strict70, new global::haxe.lang.Null<int>(0, true), doc);
			return doc;
		}
		#line default
		
		public static int doParse(string str, bool strict, global::haxe.lang.Null<int> p, global::Xml parent) {
			unchecked {
				#line 72 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				int __temp_p71 = ( ( ! (p.hasValue) ) ? (0) : ((p).@value) );
				global::Xml xml = null;
				int state = 1;
				int next = 1;
				string aname = null;
				int start = 0;
				int nsubs = 0;
				int nbrackets = 0;
				int c = default(int);
				#line 80 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				if (((bool) (( ((uint) (__temp_p71) ) < str.Length )) )) {
					#line 80 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					c = ((int) (str[__temp_p71]) );
				}
				else {
					#line 80 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					c = -1;
				}
				
				#line 81 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				global::StringBuf buf = new global::StringBuf();
				#line 83 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				int escapeNext = 1;
				int attrValQuote = -1;
				#line 89 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				while ( ! ((( c == -1 ))) ) {
					#line 91 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					switch (state) {
						case 0:
						{
							#line 94 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							switch (c) {
								case 10:
								case 13:
								case 9:
								case 32:
								{
									#line 97 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									break;
								}
								
								
								default:
								{
									#line 102 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									state = next;
									continue;
								}
								
							}
							
							#line 94 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 1:
						{
							#line 106 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							switch (c) {
								case 60:
								{
									#line 109 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									state = 0;
									next = 2;
									#line 108 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									break;
								}
								
								
								default:
								{
									#line 112 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									start = __temp_p71;
									state = 13;
									continue;
								}
								
							}
							
							#line 106 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 13:
						{
							#line 117 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (( c == 60 )) {
								#line 119 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								{
									#line 119 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									global::haxe.lang.Null<int> len = new global::haxe.lang.Null<int>(( __temp_p71 - start ), true);
									#line 119 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									buf.b.Append(((string) (str) ), ((int) (start) ), ((int) (( ( ! (len.hasValue) ) ? (( str.Length - start )) : ((len).@value) )) ));
								}
								
								#line 120 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								global::Xml child = global::Xml.createPCData(buf.b.ToString());
								buf = new global::StringBuf();
								{
									#line 122 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									parent.addChild(child);
									#line 122 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									nsubs++;
								}
								
								#line 123 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								state = 0;
								next = 2;
							}
							else if (( c == 38 )) {
								#line 126 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								{
									#line 126 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									global::haxe.lang.Null<int> len1 = new global::haxe.lang.Null<int>(( __temp_p71 - start ), true);
									#line 126 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									buf.b.Append(((string) (str) ), ((int) (start) ), ((int) (( ( ! (len1.hasValue) ) ? (( str.Length - start )) : ((len1).@value) )) ));
								}
								
								#line 127 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								state = 18;
								escapeNext = 13;
								start = ( __temp_p71 + 1 );
							}
							
							#line 117 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 17:
						{
							#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							bool __temp_boolv4 = ( c == 93 );
							#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							bool __temp_boolv3 = false;
							#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							bool __temp_boolv2 = false;
							#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (__temp_boolv4) {
								#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								int __temp_stmt5 = default(int);
								#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								{
									#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									int index = ( __temp_p71 + 1 );
									#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									__temp_stmt5 = ( (((bool) (( ((uint) (index) ) < str.Length )) )) ? (((int) (str[index]) )) : (-1) );
								}
								
								#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								__temp_boolv3 = ( __temp_stmt5 == 93 );
								#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								if (__temp_boolv3) {
									#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									int __temp_stmt6 = default(int);
									#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									{
										#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										int index1 = ( __temp_p71 + 2 );
										#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										__temp_stmt6 = ( (((bool) (( ((uint) (index1) ) < str.Length )) )) ? (((int) (str[index1]) )) : (-1) );
									}
									
									#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									__temp_boolv2 = ( __temp_stmt6 == 62 );
								}
								
							}
							
							#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							bool __temp_stmt1 = ( ( __temp_boolv4 && __temp_boolv3 ) && __temp_boolv2 );
							#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (__temp_stmt1) {
								#line 134 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								global::Xml child1 = global::Xml.createCData(global::haxe.lang.StringExt.substr(str, start, new global::haxe.lang.Null<int>(( __temp_p71 - start ), true)));
								{
									#line 135 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									parent.addChild(child1);
									#line 135 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									nsubs++;
								}
								
								#line 136 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								__temp_p71 += 2;
								state = 1;
							}
							
							#line 132 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 2:
						{
							#line 140 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							switch (c) {
								case 33:
								{
									#line 143 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									int __temp_stmt7 = default(int);
									#line 143 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									{
										#line 143 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										int index2 = ( __temp_p71 + 1 );
										#line 143 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										__temp_stmt7 = ( (((bool) (( ((uint) (index2) ) < str.Length )) )) ? (((int) (str[index2]) )) : (-1) );
									}
									
									#line 143 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									if (( __temp_stmt7 == 91 )) {
										#line 145 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										__temp_p71 += 2;
										if ( ! (string.Equals(global::haxe.lang.StringExt.substr(str, __temp_p71, new global::haxe.lang.Null<int>(6, true)).ToUpperInvariant(), "CDATA[")) ) {
											#line 147 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											throw global::haxe.lang.HaxeException.wrap("Expected <![CDATA[");
										}
										
										#line 148 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										__temp_p71 += 5;
										state = 17;
										start = ( __temp_p71 + 1 );
									}
									else {
										#line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										int __temp_stmt10 = default(int);
										#line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										{
											#line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											int index3 = ( __temp_p71 + 1 );
											#line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											__temp_stmt10 = ( (((bool) (( ((uint) (index3) ) < str.Length )) )) ? (((int) (str[index3]) )) : (-1) );
										}
										
										#line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										bool __temp_stmt9 = ( __temp_stmt10 == 68 );
										#line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										bool __temp_boolv11 = false;
										#line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										if ( ! (__temp_stmt9) ) {
											#line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											int __temp_stmt12 = default(int);
											#line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											{
												#line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
												int index4 = ( __temp_p71 + 1 );
												#line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
												__temp_stmt12 = ( (((bool) (( ((uint) (index4) ) < str.Length )) )) ? (((int) (str[index4]) )) : (-1) );
											}
											
											#line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											__temp_boolv11 = ( __temp_stmt12 == 100 );
										}
										
										#line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										bool __temp_stmt8 = ( __temp_stmt9 || __temp_boolv11 );
										#line 152 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										if (__temp_stmt8) {
											#line 154 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											if ( ! (string.Equals(global::haxe.lang.StringExt.substr(str, ( __temp_p71 + 2 ), new global::haxe.lang.Null<int>(6, true)).ToUpperInvariant(), "OCTYPE")) ) {
												#line 155 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
												throw global::haxe.lang.HaxeException.wrap("Expected <!DOCTYPE");
											}
											
											#line 156 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											__temp_p71 += 8;
											state = 16;
											start = ( __temp_p71 + 1 );
										}
										else {
											#line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											int __temp_stmt15 = default(int);
											#line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											{
												#line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
												int index5 = ( __temp_p71 + 1 );
												#line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
												__temp_stmt15 = ( (((bool) (( ((uint) (index5) ) < str.Length )) )) ? (((int) (str[index5]) )) : (-1) );
											}
											
											#line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											bool __temp_stmt14 = ( __temp_stmt15 != 45 );
											#line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											bool __temp_boolv16 = false;
											#line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											if ( ! (__temp_stmt14) ) {
												#line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
												int __temp_stmt17 = default(int);
												#line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
												{
													#line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
													int index6 = ( __temp_p71 + 2 );
													#line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
													__temp_stmt17 = ( (((bool) (( ((uint) (index6) ) < str.Length )) )) ? (((int) (str[index6]) )) : (-1) );
												}
												
												#line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
												__temp_boolv16 = ( __temp_stmt17 != 45 );
											}
											
											#line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											bool __temp_stmt13 = ( __temp_stmt14 || __temp_boolv16 );
											#line 160 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											if (__temp_stmt13) {
												#line 161 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
												throw global::haxe.lang.HaxeException.wrap("Expected <!--");
											}
											else {
												#line 164 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
												__temp_p71 += 2;
												state = 15;
												start = ( __temp_p71 + 1 );
											}
											
										}
										
									}
									
									#line 143 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									break;
								}
								
								
								case 63:
								{
									#line 169 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									state = 14;
									start = __temp_p71;
									#line 168 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									break;
								}
								
								
								case 47:
								{
									#line 172 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									if (( parent == null )) {
										#line 173 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										throw global::haxe.lang.HaxeException.wrap("Expected node name");
									}
									
									#line 174 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									start = ( __temp_p71 + 1 );
									state = 0;
									next = 10;
									#line 171 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									break;
								}
								
								
								default:
								{
									#line 178 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									state = 3;
									start = __temp_p71;
									continue;
								}
								
							}
							
							#line 140 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 3:
						{
							#line 183 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if ( ! ((( ( ( ( ( ( ( ( c >= 97 ) && ( c <= 122 ) ) || ( ( c >= 65 ) && ( c <= 90 ) ) ) || ( ( c >= 48 ) && ( c <= 57 ) ) ) || ( c == 58 ) ) || ( c == 46 ) ) || ( c == 95 ) ) || ( c == 45 ) ))) ) {
								#line 185 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								if (( __temp_p71 == start )) {
									#line 186 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									throw global::haxe.lang.HaxeException.wrap("Expected node name");
								}
								
								#line 187 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								xml = global::Xml.createElement(global::haxe.lang.StringExt.substr(str, start, new global::haxe.lang.Null<int>(( __temp_p71 - start ), true)));
								{
									#line 188 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									parent.addChild(xml);
									#line 188 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									nsubs++;
								}
								
								#line 189 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								state = 0;
								next = 4;
								continue;
							}
							
							#line 183 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 4:
						{
							#line 194 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							switch (c) {
								case 47:
								{
									#line 197 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									state = 11;
									#line 197 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									break;
								}
								
								
								case 62:
								{
									#line 199 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									state = 9;
									#line 199 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									break;
								}
								
								
								default:
								{
									#line 201 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									state = 5;
									start = __temp_p71;
									continue;
								}
								
							}
							
							#line 194 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 5:
						{
							#line 206 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if ( ! ((( ( ( ( ( ( ( ( c >= 97 ) && ( c <= 122 ) ) || ( ( c >= 65 ) && ( c <= 90 ) ) ) || ( ( c >= 48 ) && ( c <= 57 ) ) ) || ( c == 58 ) ) || ( c == 46 ) ) || ( c == 95 ) ) || ( c == 45 ) ))) ) {
								#line 208 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								string tmp = null;
								if (( start == __temp_p71 )) {
									#line 210 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									throw global::haxe.lang.HaxeException.wrap("Expected attribute name");
								}
								
								#line 211 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								tmp = global::haxe.lang.StringExt.substr(str, start, new global::haxe.lang.Null<int>(( __temp_p71 - start ), true));
								aname = tmp;
								if (xml.exists(aname)) {
									#line 214 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									throw global::haxe.lang.HaxeException.wrap("Duplicate attribute");
								}
								
								#line 215 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								state = 0;
								next = 6;
								continue;
							}
							
							#line 206 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 6:
						{
							#line 220 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							switch (c) {
								case 61:
								{
									#line 223 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									state = 0;
									next = 7;
									#line 222 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									break;
								}
								
								
								default:
								{
									#line 226 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									throw global::haxe.lang.HaxeException.wrap("Expected =");
								}
								
							}
							
							#line 220 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 7:
						{
							#line 229 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							switch (c) {
								case 34:
								case 39:
								{
									#line 232 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									buf = new global::StringBuf();
									state = 8;
									start = ( __temp_p71 + 1 );
									attrValQuote = c;
									#line 231 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									break;
								}
								
								
								default:
								{
									#line 237 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									throw global::haxe.lang.HaxeException.wrap("Expected \"");
								}
								
							}
							
							#line 229 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 8:
						{
							#line 240 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							switch (c) {
								case 38:
								{
									#line 242 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									{
										#line 242 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										global::haxe.lang.Null<int> len2 = new global::haxe.lang.Null<int>(( __temp_p71 - start ), true);
										#line 242 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										buf.b.Append(((string) (str) ), ((int) (start) ), ((int) (( ( ! (len2.hasValue) ) ? (( str.Length - start )) : ((len2).@value) )) ));
									}
									
									#line 243 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									state = 18;
									escapeNext = 8;
									start = ( __temp_p71 + 1 );
									#line 241 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									break;
								}
								
								
								case 62:
								{
									#line 246 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									if (strict) {
										#line 248 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Invalid unescaped ", new string(((char) (c) ), 1)), " in attribute value"));
									}
									else if (( c == attrValQuote )) {
										#line 250 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										{
											#line 250 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											global::haxe.lang.Null<int> len3 = new global::haxe.lang.Null<int>(( __temp_p71 - start ), true);
											#line 250 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											buf.b.Append(((string) (str) ), ((int) (start) ), ((int) (( ( ! (len3.hasValue) ) ? (( str.Length - start )) : ((len3).@value) )) ));
										}
										
										#line 251 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										string val = buf.b.ToString();
										buf = new global::StringBuf();
										xml.@set(aname, val);
										state = 0;
										next = 4;
									}
									
									#line 246 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									break;
								}
								
								
								case 60:
								{
									#line 246 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									if (strict) {
										#line 248 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Invalid unescaped ", new string(((char) (c) ), 1)), " in attribute value"));
									}
									else if (( c == attrValQuote )) {
										#line 250 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										{
											#line 250 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											global::haxe.lang.Null<int> len4 = new global::haxe.lang.Null<int>(( __temp_p71 - start ), true);
											#line 250 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											buf.b.Append(((string) (str) ), ((int) (start) ), ((int) (( ( ! (len4.hasValue) ) ? (( str.Length - start )) : ((len4).@value) )) ));
										}
										
										#line 251 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										string val1 = buf.b.ToString();
										buf = new global::StringBuf();
										xml.@set(aname, val1);
										state = 0;
										next = 4;
									}
									
									#line 246 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									break;
								}
								
								
								default:
								{
									#line 249 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									if (( c == attrValQuote )) {
										#line 250 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										{
											#line 250 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											global::haxe.lang.Null<int> len5 = new global::haxe.lang.Null<int>(( __temp_p71 - start ), true);
											#line 250 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											buf.b.Append(((string) (str) ), ((int) (start) ), ((int) (( ( ! (len5.hasValue) ) ? (( str.Length - start )) : ((len5).@value) )) ));
										}
										
										#line 251 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										string val2 = buf.b.ToString();
										buf = new global::StringBuf();
										xml.@set(aname, val2);
										state = 0;
										next = 4;
									}
									
									#line 249 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									break;
								}
								
							}
							
							#line 240 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 9:
						{
							#line 258 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							__temp_p71 = global::haxe.xml.Parser.doParse(str, strict, new global::haxe.lang.Null<int>(__temp_p71, true), xml);
							start = __temp_p71;
							state = 1;
							#line 257 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 11:
						{
							#line 262 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							switch (c) {
								case 62:
								{
									#line 265 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									state = 1;
									#line 265 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									break;
								}
								
								
								default:
								{
									#line 267 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									throw global::haxe.lang.HaxeException.wrap("Expected >");
								}
								
							}
							
							#line 262 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 12:
						{
							#line 270 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							switch (c) {
								case 62:
								{
									#line 273 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									if (( nsubs == 0 )) {
										#line 274 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										parent.addChild(global::Xml.createPCData(""));
									}
									
									#line 275 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									return __temp_p71;
								}
								
								
								default:
								{
									#line 277 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									throw global::haxe.lang.HaxeException.wrap("Expected >");
								}
								
							}
							
						}
						
						
						case 10:
						{
							#line 280 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if ( ! ((( ( ( ( ( ( ( ( c >= 97 ) && ( c <= 122 ) ) || ( ( c >= 65 ) && ( c <= 90 ) ) ) || ( ( c >= 48 ) && ( c <= 57 ) ) ) || ( c == 58 ) ) || ( c == 46 ) ) || ( c == 95 ) ) || ( c == 45 ) ))) ) {
								#line 282 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								if (( start == __temp_p71 )) {
									#line 283 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									throw global::haxe.lang.HaxeException.wrap("Expected node name");
								}
								
								#line 285 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								string v = global::haxe.lang.StringExt.substr(str, start, new global::haxe.lang.Null<int>(( __temp_p71 - start ), true));
								string __temp_stmt18 = null;
								#line 286 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								{
									#line 286 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									if (( parent.nodeType != global::Xml.Element )) {
										#line 286 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element but found ", global::haxe.lang.Runtime.toString(parent.nodeType)));
									}
									
									#line 286 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									__temp_stmt18 = parent.nodeName;
								}
								
								#line 286 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								if ( ! (string.Equals(v, __temp_stmt18)) ) {
									#line 287 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									string __temp_stmt21 = null;
									#line 287 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									{
										#line 287 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										if (( parent.nodeType != global::Xml.Element )) {
											#line 287 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
											throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element but found ", global::haxe.lang.Runtime.toString(parent.nodeType)));
										}
										
										#line 287 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										__temp_stmt21 = parent.nodeName;
									}
									
									#line 287 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									string __temp_stmt20 = global::haxe.lang.Runtime.concat("Expected </", __temp_stmt21);
									#line 287 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									string __temp_stmt19 = global::haxe.lang.Runtime.concat(__temp_stmt20, ">");
									#line 287 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									throw global::haxe.lang.HaxeException.wrap(__temp_stmt19);
								}
								
								#line 289 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								state = 0;
								next = 12;
								continue;
							}
							
							#line 280 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 15:
						{
							#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							bool __temp_boolv25 = ( c == 45 );
							#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							bool __temp_boolv24 = false;
							#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							bool __temp_boolv23 = false;
							#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (__temp_boolv25) {
								#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								int __temp_stmt26 = default(int);
								#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								{
									#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									int index7 = ( __temp_p71 + 1 );
									#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									__temp_stmt26 = ( (((bool) (( ((uint) (index7) ) < str.Length )) )) ? (((int) (str[index7]) )) : (-1) );
								}
								
								#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								__temp_boolv24 = ( __temp_stmt26 == 45 );
								#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								if (__temp_boolv24) {
									#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									int __temp_stmt27 = default(int);
									#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									{
										#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										int index8 = ( __temp_p71 + 2 );
										#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										__temp_stmt27 = ( (((bool) (( ((uint) (index8) ) < str.Length )) )) ? (((int) (str[index8]) )) : (-1) );
									}
									
									#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									__temp_boolv23 = ( __temp_stmt27 == 62 );
								}
								
							}
							
							#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							bool __temp_stmt22 = ( ( __temp_boolv25 && __temp_boolv24 ) && __temp_boolv23 );
							#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (__temp_stmt22) {
								#line 296 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								{
									#line 296 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									global::Xml xml1 = global::Xml.createComment(global::haxe.lang.StringExt.substr(str, start, new global::haxe.lang.Null<int>(( __temp_p71 - start ), true)));
									#line 296 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									parent.addChild(xml1);
									#line 296 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									nsubs++;
								}
								
								#line 297 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								__temp_p71 += 2;
								state = 1;
							}
							
							#line 294 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 16:
						{
							#line 301 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (( c == 91 )) {
								#line 302 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								nbrackets++;
							}
							else if (( c == 93 )) {
								#line 304 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								nbrackets--;
							}
							else if (( ( c == 62 ) && ( nbrackets == 0 ) )) {
								#line 307 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								{
									#line 307 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									global::Xml xml2 = global::Xml.createDocType(global::haxe.lang.StringExt.substr(str, start, new global::haxe.lang.Null<int>(( __temp_p71 - start ), true)));
									#line 307 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									parent.addChild(xml2);
									#line 307 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									nsubs++;
								}
								
								#line 308 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								state = 1;
							}
							
							#line 301 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 14:
						{
							#line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							bool __temp_boolv30 = ( c == 63 );
							#line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							bool __temp_boolv29 = false;
							#line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (__temp_boolv30) {
								#line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								int __temp_stmt31 = default(int);
								#line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								{
									#line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									int index9 = ( __temp_p71 + 1 );
									#line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									__temp_stmt31 = ( (((bool) (( ((uint) (index9) ) < str.Length )) )) ? (((int) (str[index9]) )) : (-1) );
								}
								
								#line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								__temp_boolv29 = ( __temp_stmt31 == 62 );
							}
							
							#line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							bool __temp_stmt28 = ( __temp_boolv30 && __temp_boolv29 );
							#line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (__temp_stmt28) {
								#line 313 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								__temp_p71++;
								string str1 = global::haxe.lang.StringExt.substr(str, ( start + 1 ), new global::haxe.lang.Null<int>(( ( __temp_p71 - start ) - 2 ), true));
								{
									#line 315 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									global::Xml xml3 = global::Xml.createProcessingInstruction(str1);
									#line 315 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									parent.addChild(xml3);
									#line 315 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									nsubs++;
								}
								
								#line 316 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								state = 1;
							}
							
							#line 311 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
						case 18:
						{
							#line 319 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							if (( c == 59 )) {
								#line 321 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								string s = global::haxe.lang.StringExt.substr(str, start, new global::haxe.lang.Null<int>(( __temp_p71 - start ), true));
								if (( (( (((bool) (( ((uint) (0) ) < s.Length )) )) ? (((int) (s[0]) )) : (-1) )) == 35 )) {
									#line 323 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									global::haxe.lang.Null<int> c1 = default(global::haxe.lang.Null<int>);
									#line 323 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									if (( (( (((bool) (( ((uint) (1) ) < s.Length )) )) ? (((int) (s[1]) )) : (-1) )) == 120 )) {
										#line 324 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										c1 = global::Std.parseInt(global::haxe.lang.Runtime.concat("0", global::haxe.lang.StringExt.substr(s, 1, new global::haxe.lang.Null<int>(( s.Length - 1 ), true))));
									}
									else {
										#line 325 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										c1 = global::Std.parseInt(global::haxe.lang.StringExt.substr(s, 1, new global::haxe.lang.Null<int>(( s.Length - 1 ), true)));
									}
									
									#line 345 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									{
										#line 345 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										int c2 = (c1).@value;
										#line 345 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										buf.b.Append(((char) (c2) ));
									}
									
								}
								else if ( ! (global::haxe.xml.Parser.escapes.exists(s)) ) {
									#line 347 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									if (strict) {
										#line 348 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
										throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Undefined entity: ", s));
									}
									
									#line 349 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									buf.b.Append(((string) (global::Std.@string(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("&", s), ";"))) ));
								}
								else {
									#line 351 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									string x = global::haxe.lang.Runtime.toString((global::haxe.xml.Parser.escapes.@get(((string) (s) ))).toDynamic());
									#line 351 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									buf.b.Append(((string) (global::Std.@string(x)) ));
								}
								
								#line 353 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								start = ( __temp_p71 + 1 );
								state = escapeNext;
							}
							else if ((  ! ((( ( ( ( ( ( ( ( c >= 97 ) && ( c <= 122 ) ) || ( ( c >= 65 ) && ( c <= 90 ) ) ) || ( ( c >= 48 ) && ( c <= 57 ) ) ) || ( c == 58 ) ) || ( c == 46 ) ) || ( c == 95 ) ) || ( c == 45 ) )))  && ( c != 35 ) )) {
								#line 356 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								if (strict) {
									#line 357 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Invalid character in entity: ", new string(((char) (c) ), 1)));
								}
								
								#line 358 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								buf.b.Append(((char) (38) ));
								{
									#line 359 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									global::haxe.lang.Null<int> len6 = new global::haxe.lang.Null<int>(( __temp_p71 - start ), true);
									#line 359 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
									buf.b.Append(((string) (str) ), ((int) (start) ), ((int) (( ( ! (len6.hasValue) ) ? (( str.Length - start )) : ((len6).@value) )) ));
								}
								
								#line 360 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
								__temp_p71--;
								start = ( __temp_p71 + 1 );
								state = escapeNext;
							}
							
							#line 319 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							break;
						}
						
						
					}
					
					#line 365 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					{
						#line 365 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						int index10 =  ++ __temp_p71;
						#line 365 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						if (((bool) (( ((uint) (index10) ) < str.Length )) )) {
							#line 365 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							c = ((int) (str[index10]) );
						}
						else {
							#line 365 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							c = -1;
						}
						
					}
					
				}
				
				#line 368 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				if (( state == 1 )) {
					#line 370 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					start = __temp_p71;
					state = 13;
				}
				
				#line 374 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				if (( state == 13 )) {
					#line 376 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					if (( ( __temp_p71 != start ) || ( nsubs == 0 ) )) {
						#line 377 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						{
							#line 377 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							global::haxe.lang.Null<int> len7 = new global::haxe.lang.Null<int>(( __temp_p71 - start ), true);
							#line 377 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							buf.b.Append(((string) (str) ), ((int) (start) ), ((int) (( ( ! (len7.hasValue) ) ? (( str.Length - start )) : ((len7).@value) )) ));
						}
						
						#line 378 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						{
							#line 378 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							global::Xml xml4 = global::Xml.createPCData(buf.b.ToString());
							#line 378 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							parent.addChild(xml4);
							#line 378 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
							nsubs++;
						}
						
					}
					
					#line 380 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					return __temp_p71;
				}
				
				#line 383 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				if (( (  ! (strict)  && ( state == 18 ) ) && ( escapeNext == 13 ) )) {
					#line 384 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					buf.b.Append(((char) (38) ));
					{
						#line 385 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						global::haxe.lang.Null<int> len8 = new global::haxe.lang.Null<int>(( __temp_p71 - start ), true);
						#line 385 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						buf.b.Append(((string) (str) ), ((int) (start) ), ((int) (( ( ! (len8.hasValue) ) ? (( str.Length - start )) : ((len8).@value) )) ));
					}
					
					#line 386 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					{
						#line 386 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						global::Xml xml5 = global::Xml.createPCData(buf.b.ToString());
						#line 386 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						parent.addChild(xml5);
						#line 386 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
						nsubs++;
					}
					
					#line 387 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
					return __temp_p71;
				}
				
				#line 390 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
				throw global::haxe.lang.HaxeException.wrap("Unexpected end");
			}
			#line default
		}
		
		
		public static new object __hx_createEmpty() {
			#line 49 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			return new global::haxe.xml.Parser(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 49 "/usr/lib/haxe/std/haxe/xml/Parser.hx"
			return new global::haxe.xml.Parser();
		}
		#line default
		
	}
}


