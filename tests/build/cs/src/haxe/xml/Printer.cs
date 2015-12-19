
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.xml {
	public class Printer : global::haxe.lang.HxObject {
		
		public Printer(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Printer(bool pretty) {
			#line 42 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			global::haxe.xml.Printer.__hx_ctor_haxe_xml_Printer(this, pretty);
		}
		#line default
		
		public static void __hx_ctor_haxe_xml_Printer(global::haxe.xml.Printer __temp_me74, bool pretty) {
			#line 43 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			__temp_me74.output = new global::StringBuf();
			__temp_me74.pretty = pretty;
		}
		#line default
		
		public static string print(global::Xml xml, global::haxe.lang.Null<bool> pretty) {
			#line 33 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			global::haxe.lang.Null<bool> __temp_pretty73 = ( ( ! (pretty.hasValue) ) ? (new global::haxe.lang.Null<bool>(false, true)) : (pretty) );
			global::haxe.xml.Printer printer = new global::haxe.xml.Printer((__temp_pretty73).@value);
			printer.writeNode(xml, "");
			return printer.output.b.ToString();
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			return new global::haxe.xml.Printer(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			return new global::haxe.xml.Printer(global::haxe.lang.Runtime.toBool(arr[0]));
		}
		#line default
		
		public global::StringBuf output;
		
		public bool pretty;
		
		public virtual void writeNode(global::Xml @value, string tabs) {
			unchecked {
				#line 48 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				int _g = @value.nodeType;
				#line 48 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				switch (_g) {
					case 2:
					{
						#line 50 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.output.b.Append(((string) (global::Std.@string(global::haxe.lang.Runtime.concat(tabs, "<![CDATA["))) ));
						{
							#line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							string input = null;
							#line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							{
								#line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								string s = null;
								#line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								{
									#line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
									if (( ( @value.nodeType == global::Xml.Document ) || ( @value.nodeType == global::Xml.Element ) )) {
										#line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
										throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, unexpected ", global::haxe.lang.Runtime.toString(@value.nodeType)));
									}
									
									#line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
									s = @value.nodeValue;
								}
								
								#line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								input = s.Trim();
							}
							
							#line 51 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							this.output.b.Append(((string) (global::Std.@string(input)) ));
						}
						
						#line 52 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.output.b.Append(((string) ("]]>") ));
						if (this.pretty) {
							#line 53 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							this.output.b.Append(((string) ("") ));
						}
						
						#line 49 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						break;
					}
					
					
					case 3:
					{
						#line 55 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						string commentContent = null;
						#line 55 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						{
							#line 55 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							if (( ( @value.nodeType == global::Xml.Document ) || ( @value.nodeType == global::Xml.Element ) )) {
								#line 55 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, unexpected ", global::haxe.lang.Runtime.toString(@value.nodeType)));
							}
							
							#line 55 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							commentContent = @value.nodeValue;
						}
						
						#line 56 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						commentContent = new global::EReg("[\n\r\t]+", "g").replace(commentContent, "");
						commentContent = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("<!--", commentContent), "-->");
						this.output.b.Append(((string) (global::Std.@string(tabs)) ));
						{
							#line 59 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							string input1 = commentContent.Trim();
							#line 59 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							this.output.b.Append(((string) (global::Std.@string(input1)) ));
						}
						
						#line 60 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						if (this.pretty) {
							#line 60 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							this.output.b.Append(((string) ("") ));
						}
						
						#line 54 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						break;
					}
					
					
					case 6:
					{
						#line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						{
							#line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							object __temp_iterator1 = null;
							#line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							{
								#line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								if (( ( @value.nodeType != global::Xml.Document ) && ( @value.nodeType != global::Xml.Element ) )) {
									#line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
									throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element or Document but found ", global::haxe.lang.Runtime.toString(@value.nodeType)));
								}
								
								#line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								__temp_iterator1 = ((object) (new global::_Array.ArrayIterator<object>(((global::Array<object>) (@value.children) ))) );
							}
							
							#line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
								#line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								global::Xml child = ((global::Xml) (global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null)) );
								this.writeNode(child, tabs);
							}
							
						}
						
						#line 62 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						break;
					}
					
					
					case 0:
					{
						#line 66 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.output.b.Append(((string) (global::Std.@string(global::haxe.lang.Runtime.concat(tabs, "<"))) ));
						{
							#line 67 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							string input2 = null;
							#line 67 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							{
								#line 67 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								if (( @value.nodeType != global::Xml.Element )) {
									#line 67 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
									throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element but found ", global::haxe.lang.Runtime.toString(@value.nodeType)));
								}
								
								#line 67 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								input2 = @value.nodeName;
							}
							
							#line 67 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							this.output.b.Append(((string) (global::Std.@string(input2)) ));
						}
						
						#line 68 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						{
							#line 68 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							object __temp_iterator2 = @value.attributes();
							#line 68 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator2, "hasNext", 407283053, null))) {
								#line 68 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								string attribute = global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.callField(__temp_iterator2, "next", 1224901875, null));
								this.output.b.Append(((string) (global::Std.@string(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(" ", attribute), "=\""))) ));
								{
									#line 70 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
									string input3 = global::StringTools.htmlEscape(@value.@get(attribute), new global::haxe.lang.Null<bool>(true, true));
									#line 70 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
									this.output.b.Append(((string) (global::Std.@string(input3)) ));
								}
								
								#line 71 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								this.output.b.Append(((string) ("\"") ));
							}
							
						}
						
						#line 73 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						if (this.hasChildren(@value)) {
							#line 74 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							this.output.b.Append(((string) (">") ));
							if (this.pretty) {
								#line 75 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								this.output.b.Append(((string) ("") ));
							}
							
							#line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							{
								#line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								object __temp_iterator3 = null;
								#line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								{
									#line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
									if (( ( @value.nodeType != global::Xml.Document ) && ( @value.nodeType != global::Xml.Element ) )) {
										#line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
										throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element or Document but found ", global::haxe.lang.Runtime.toString(@value.nodeType)));
									}
									
									#line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
									__temp_iterator3 = ((object) (new global::_Array.ArrayIterator<object>(((global::Array<object>) (@value.children) ))) );
								}
								
								#line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator3, "hasNext", 407283053, null))) {
									#line 76 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
									global::Xml child1 = ((global::Xml) (global::haxe.lang.Runtime.callField(__temp_iterator3, "next", 1224901875, null)) );
									this.writeNode(child1, ( (this.pretty) ? (global::haxe.lang.Runtime.concat(tabs, "\t")) : (tabs) ));
								}
								
							}
							
							#line 79 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							this.output.b.Append(((string) (global::Std.@string(global::haxe.lang.Runtime.concat(tabs, "</"))) ));
							{
								#line 80 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								string input4 = null;
								#line 80 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								{
									#line 80 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
									if (( @value.nodeType != global::Xml.Element )) {
										#line 80 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
										throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element but found ", global::haxe.lang.Runtime.toString(@value.nodeType)));
									}
									
									#line 80 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
									input4 = @value.nodeName;
								}
								
								#line 80 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								this.output.b.Append(((string) (global::Std.@string(input4)) ));
							}
							
							#line 81 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							this.output.b.Append(((string) (">") ));
							if (this.pretty) {
								#line 82 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								this.output.b.Append(((string) ("") ));
							}
							
						}
						else {
							#line 84 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							this.output.b.Append(((string) ("/>") ));
							if (this.pretty) {
								#line 85 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								this.output.b.Append(((string) ("") ));
							}
							
						}
						
						#line 65 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						break;
					}
					
					
					case 1:
					{
						#line 88 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						string nodeValue = null;
						#line 88 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						{
							#line 88 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							if (( ( @value.nodeType == global::Xml.Document ) || ( @value.nodeType == global::Xml.Element ) )) {
								#line 88 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, unexpected ", global::haxe.lang.Runtime.toString(@value.nodeType)));
							}
							
							#line 88 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							nodeValue = @value.nodeValue;
						}
						
						#line 89 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						if (( nodeValue.Length != 0 )) {
							#line 90 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							{
								#line 90 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								string input5 = global::haxe.lang.Runtime.concat(tabs, global::StringTools.htmlEscape(nodeValue, default(global::haxe.lang.Null<bool>)));
								#line 90 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								this.output.b.Append(((string) (global::Std.@string(input5)) ));
							}
							
							#line 91 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							if (this.pretty) {
								#line 91 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								this.output.b.Append(((string) ("") ));
							}
							
						}
						
						#line 87 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						break;
					}
					
					
					case 5:
					{
						#line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						string input6 = null;
						#line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						string __temp_stmt2 = null;
						#line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						{
							#line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							if (( ( @value.nodeType == global::Xml.Document ) || ( @value.nodeType == global::Xml.Element ) )) {
								#line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, unexpected ", global::haxe.lang.Runtime.toString(@value.nodeType)));
							}
							
							#line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							__temp_stmt2 = @value.nodeValue;
						}
						
						#line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						string __temp_stmt1 = global::haxe.lang.Runtime.concat("<?", __temp_stmt2);
						#line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						input6 = global::haxe.lang.Runtime.concat(__temp_stmt1, "?>");
						#line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.output.b.Append(((string) (global::Std.@string(input6)) ));
						#line 94 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						break;
					}
					
					
					case 4:
					{
						#line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						string input7 = null;
						#line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						string __temp_stmt4 = null;
						#line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						{
							#line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							if (( ( @value.nodeType == global::Xml.Document ) || ( @value.nodeType == global::Xml.Element ) )) {
								#line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, unexpected ", global::haxe.lang.Runtime.toString(@value.nodeType)));
							}
							
							#line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							__temp_stmt4 = @value.nodeValue;
						}
						
						#line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						string __temp_stmt3 = global::haxe.lang.Runtime.concat("<!DOCTYPE ", __temp_stmt4);
						#line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						input7 = global::haxe.lang.Runtime.concat(__temp_stmt3, ">");
						#line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.output.b.Append(((string) (global::Std.@string(input7)) ));
						#line 96 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						break;
					}
					
					
				}
				
			}
			#line default
		}
		
		
		public virtual bool hasChildren(global::Xml @value) {
			unchecked {
				#line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				{
					#line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					object __temp_iterator1 = null;
					#line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					{
						#line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						if (( ( @value.nodeType != global::Xml.Document ) && ( @value.nodeType != global::Xml.Element ) )) {
							#line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
							throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, expected Element or Document but found ", global::haxe.lang.Runtime.toString(@value.nodeType)));
						}
						
						#line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						__temp_iterator1 = ((object) (new global::_Array.ArrayIterator<object>(((global::Array<object>) (@value.children) ))) );
					}
					
					#line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
					while (global::haxe.lang.Runtime.toBool(global::haxe.lang.Runtime.callField(__temp_iterator1, "hasNext", 407283053, null))) {
						#line 111 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						global::Xml child = ((global::Xml) (global::haxe.lang.Runtime.callField(__temp_iterator1, "next", 1224901875, null)) );
						int _g = child.nodeType;
						#line 112 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						switch (_g) {
							case 0:
							case 1:
							{
								#line 114 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								return true;
							}
							
							
							case 2:
							case 3:
							{
								#line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								string __temp_stmt1 = null;
								#line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								{
									#line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
									string s = null;
									#line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
									{
										#line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
										if (( ( child.nodeType == global::Xml.Document ) || ( child.nodeType == global::Xml.Element ) )) {
											#line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
											throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Bad node type, unexpected ", global::haxe.lang.Runtime.toString(child.nodeType)));
										}
										
										#line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
										s = child.nodeValue;
									}
									
									#line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
									__temp_stmt1 = s.TrimStart();
								}
								
								#line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								if (( __temp_stmt1.Length != 0 )) {
									#line 117 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
									return true;
								}
								
								#line 116 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								break;
							}
							
							
							default:
							{
								#line 119 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
								break;
							}
							
						}
						
					}
					
				}
				
				#line 122 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				return false;
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				switch (hash) {
					case 784433846:
					{
						#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.pretty = global::haxe.lang.Runtime.toBool(@value);
						#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return @value;
					}
					
					
					case 209784577:
					{
						#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.output = ((global::StringBuf) (@value) );
						#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return @value;
					}
					
					
					default:
					{
						#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				switch (hash) {
					case 1126235833:
					{
						#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "hasChildren", 1126235833)) );
					}
					
					
					case 1371405953:
					{
						#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "writeNode", 1371405953)) );
					}
					
					
					case 784433846:
					{
						#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return this.pretty;
					}
					
					
					case 209784577:
					{
						#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return this.output;
					}
					
					
					default:
					{
						#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				switch (hash) {
					case 1126235833:
					{
						#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return this.hasChildren(((global::Xml) (dynargs[0]) ));
					}
					
					
					case 1371405953:
					{
						#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						this.writeNode(((global::Xml) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]));
						#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						break;
					}
					
					
					default:
					{
						#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			baseArr.push("pretty");
			#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			baseArr.push("output");
			#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
			{
				#line 31 "/usr/lib/haxe/std/haxe/xml/Printer.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


