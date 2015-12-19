
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit {
	public class Utils : global::haxe.lang.HxObject {
		
		static Utils() {
			#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			global::hunit.Utils.META_TEST = "test";
			#line 205 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			global::hunit.Utils.buffer = "";
		}
		#line default
		
		public Utils(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Utils() {
			#line 55 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			global::hunit.Utils.__hx_ctor_hunit_Utils(this);
		}
		#line default
		
		public static void __hx_ctor_hunit_Utils(global::hunit.Utils __temp_me77) {
		}
		
		
		public static string META_TEST;
		
		public static bool isObject(object @value) {
			unchecked {
				#line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				{
					#line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					global::ValueType _g = global::Type.@typeof(@value);
					#line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					switch (_g.index) {
						case 6:
						{
							#line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
							{
								#line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
								global::System.Type __temp_switch1 = (((global::System.Type) (_g.@params[0]) ));
								#line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
								if (global::haxe.lang.Runtime.eq(__temp_switch1, typeof(string))) {
									#line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
									return false;
								}
								else {
									#line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
									return true;
								}
								
							}
							
						}
						
						
						case 4:
						{
							#line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
							return true;
						}
						
						
						default:
						{
							#line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
							return false;
						}
						
					}
					
				}
				
			}
			#line default
		}
		
		
		public static string shortenString(string str) {
			unchecked {
				#line 82 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				if (( str.Length > 70 )) {
					#line 82 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					return global::haxe.lang.Runtime.concat(global::haxe.lang.StringExt.substr(str, 0, new global::haxe.lang.Null<int>(65, true)), "<...>");
				}
				else {
					#line 82 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					return str;
				}
				
			}
			#line default
		}
		
		
		public static bool hasToString(object @value) {
			unchecked {
				#line 92 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				if (( @value is string )) {
					#line 92 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					return true;
				}
				
				#line 94 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				{
					#line 94 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					global::ValueType _g = global::Type.@typeof(@value);
					#line 94 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					switch (_g.index) {
						case 6:
						{
							#line 94 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
							global::System.Type cls = ((global::System.Type) (_g.@params[0]) );
							#line 96 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
							return ( global::Type.getInstanceFields(cls).indexOf("toString", default(global::haxe.lang.Null<int>)) >= 0 );
						}
						
						
						default:
						{
							#line 98 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
							return false;
						}
						
					}
					
				}
				
			}
			#line default
		}
		
		
		public static string safeToString(object @value) {
			#line 110 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			return global::Std.@string(@value);
		}
		#line default
		
		public static string shortenQuote(object @value) {
			#line 131 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			string str = global::hunit.Utils.shortenString(global::hunit.Utils.safeToString(@value));
			#line 133 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			if (global::hunit.Utils.hasToString(@value)) {
				#line 133 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\"", str), "\"");
			}
			else {
				#line 133 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				return str;
			}
			
		}
		#line default
		
		public static void printTrace(global::haxe.lang.Function printer, object @value, object pos) {
			#line 143 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			string file = global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(pos, "fileName", 1648581351, true));
			int line = ((int) (global::haxe.lang.Runtime.getField_f(pos, "lineNumber", 1981972957, true)) );
			string msg = global::hunit.Utils.safeToString(@value);
			#line 147 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			printer.__hx_invoke1_o(default(double), global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("HUnit: ", file), ":"), global::haxe.lang.Runtime.toString(line)), ": "), msg), "\n"));
		}
		#line default
		
		public static void print(object @value) {
			#line 167 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			global::System.Console.Write(((object) (@value) ));
		}
		#line default
		
		public static string buffer;
		
		public static void bufferedPrint(string @value, global::haxe.lang.Function printer) {
			unchecked {
				#line 208 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				{
					#line 208 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					System.Type __temp_dynop1 = typeof(global::hunit.Utils);
					#line 208 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					global::hunit.Utils.buffer = global::haxe.lang.Runtime.concat(global::hunit.Utils.buffer, @value);
				}
				
				#line 209 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				if (( global::haxe.lang.StringExt.indexOf(global::hunit.Utils.buffer, "\n", default(global::haxe.lang.Null<int>)) >= 0 )) {
					#line 210 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					global::Array<object> lines = global::haxe.lang.StringExt.split(global::hunit.Utils.buffer, "\n");
					{
						#line 211 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
						int _g1 = 0;
						#line 211 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
						int _g = ( lines.length - 1 );
						#line 211 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
						while (( _g1 < _g )) {
							#line 211 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
							int i = _g1++;
							printer.__hx_invoke1_o(default(double), global::haxe.lang.Runtime.toString(lines[i]));
						}
						
					}
					
					#line 214 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					global::hunit.Utils.buffer = global::haxe.lang.Runtime.toString(lines[( lines.length - 1 )]);
				}
				
			}
			#line default
		}
		
		
		public static global::Array<object> filterCases(global::Array<object> cases, global::Array<object> excludes) {
			#line 225 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			return cases.filter(new global::hunit.Utils_filterCases_225__Fun(excludes));
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 55 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			return new global::hunit.Utils(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 55 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			return new global::hunit.Utils();
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit {
	public class Utils_filterCases_225__Fun : global::haxe.lang.Function {
		
		public Utils_filterCases_225__Fun(global::Array<object> excludes) : base(1, 0) {
			#line 225 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			this.excludes = excludes;
		}
		#line default
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			#line 225 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			global::hunit.TestCase c = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((global::hunit.TestCase) (((object) (__fn_float1) )) )) : (((global::hunit.TestCase) (__fn_dyn1) )) );
			string className = global::Type.getClassName(global::Type.getClass<object>(c));
			#line 228 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			{
				#line 228 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				int _g = 0;
				#line 228 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				while (( _g < this.excludes.length )) {
					#line 228 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					string e = global::haxe.lang.Runtime.toString(this.excludes[_g]);
					#line 228 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					 ++ _g;
					if (( global::haxe.lang.StringExt.indexOf(className, e, default(global::haxe.lang.Null<int>)) == 0 )) {
						#line 229 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
						return false;
					}
					
				}
				
			}
			
			#line 232 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			return true;
		}
		#line default
		
		public global::Array<object> excludes;
		
	}
}


