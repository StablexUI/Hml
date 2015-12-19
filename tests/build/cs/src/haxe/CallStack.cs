
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe {
	public class StackItem : global::haxe.lang.ParamEnum {
		
		public StackItem(int index, object[] @params) : base(index, @params) {
		}
		
		
		public static readonly string[] __hx_constructs = new string[]{"CFunction", "Module", "FilePos", "Method", "LocalFunction"};
		
		public static readonly global::haxe.StackItem CFunction = new global::haxe.StackItem(0, null);
		
		public static global::haxe.StackItem Module(string m) {
			unchecked {
				#line 29 "/usr/lib/haxe/std/haxe/CallStack.hx"
				return new global::haxe.StackItem(1, new object[]{m});
			}
			#line default
		}
		
		
		public static global::haxe.StackItem FilePos(global::haxe.StackItem s, string file, int line) {
			unchecked {
				#line 30 "/usr/lib/haxe/std/haxe/CallStack.hx"
				return new global::haxe.StackItem(2, new object[]{s, file, line});
			}
			#line default
		}
		
		
		public static global::haxe.StackItem Method(string classname, string method) {
			unchecked {
				#line 31 "/usr/lib/haxe/std/haxe/CallStack.hx"
				return new global::haxe.StackItem(3, new object[]{classname, method});
			}
			#line default
		}
		
		
		public static global::haxe.StackItem LocalFunction(global::haxe.lang.Null<int> v) {
			unchecked {
				#line 32 "/usr/lib/haxe/std/haxe/CallStack.hx"
				return new global::haxe.StackItem(4, new object[]{(v).toDynamic()});
			}
			#line default
		}
		
		
		public override string getTag() {
			#line 27 "/usr/lib/haxe/std/haxe/CallStack.hx"
			return global::haxe.StackItem.__hx_constructs[this.index];
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe {
	public class CallStack : global::haxe.lang.HxObject {
		
		public CallStack(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public CallStack() {
			#line 38 "/usr/lib/haxe/std/haxe/CallStack.hx"
			global::haxe.CallStack.__hx_ctor_haxe_CallStack(this);
		}
		#line default
		
		public static void __hx_ctor_haxe_CallStack(global::haxe.CallStack __temp_me40) {
		}
		
		
		public static global::Array<object> callStack() {
			unchecked {
				#line 120 "/usr/lib/haxe/std/haxe/CallStack.hx"
				return global::haxe.CallStack.makeStack(new global::System.Diagnostics.StackTrace(((int) (1) ), ((bool) (true) )));
			}
			#line default
		}
		
		
		public static global::Array<object> exceptionStack() {
			#line 184 "/usr/lib/haxe/std/haxe/CallStack.hx"
			return global::haxe.CallStack.makeStack(new global::System.Diagnostics.StackTrace(((global::System.Exception) (global::haxe.lang.Exceptions.exception) ), ((bool) (true) )));
		}
		#line default
		
		public static string toString(global::Array<object> stack) {
			#line 207 "/usr/lib/haxe/std/haxe/CallStack.hx"
			global::StringBuf b = new global::StringBuf();
			{
				#line 208 "/usr/lib/haxe/std/haxe/CallStack.hx"
				int _g = 0;
				#line 208 "/usr/lib/haxe/std/haxe/CallStack.hx"
				while (( _g < stack.length )) {
					#line 208 "/usr/lib/haxe/std/haxe/CallStack.hx"
					global::haxe.StackItem s = ((global::haxe.StackItem) (stack[_g]) );
					#line 208 "/usr/lib/haxe/std/haxe/CallStack.hx"
					 ++ _g;
					b.b.Append(((string) ("\nCalled from ") ));
					global::haxe.CallStack.itemToString(b, s);
				}
				
			}
			
			#line 212 "/usr/lib/haxe/std/haxe/CallStack.hx"
			return b.b.ToString();
		}
		#line default
		
		public static void itemToString(global::StringBuf b, global::haxe.StackItem s) {
			unchecked {
				#line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
				switch (s.index) {
					case 0:
					{
						#line 218 "/usr/lib/haxe/std/haxe/CallStack.hx"
						b.b.Append(((string) ("a C function") ));
						#line 218 "/usr/lib/haxe/std/haxe/CallStack.hx"
						break;
					}
					
					
					case 1:
					{
						#line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
						string m = global::haxe.lang.Runtime.toString(s.@params[0]);
						#line 219 "/usr/lib/haxe/std/haxe/CallStack.hx"
						{
							#line 220 "/usr/lib/haxe/std/haxe/CallStack.hx"
							b.b.Append(((string) ("module ") ));
							b.b.Append(((string) (global::Std.@string(m)) ));
						}
						
						#line 219 "/usr/lib/haxe/std/haxe/CallStack.hx"
						break;
					}
					
					
					case 2:
					{
						#line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
						int line = ((int) (global::haxe.lang.Runtime.toInt(s.@params[2])) );
						#line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
						string file = global::haxe.lang.Runtime.toString(s.@params[1]);
						#line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
						global::haxe.StackItem s1 = ((global::haxe.StackItem) (s.@params[0]) );
						#line 222 "/usr/lib/haxe/std/haxe/CallStack.hx"
						{
							#line 223 "/usr/lib/haxe/std/haxe/CallStack.hx"
							if (( s1 != null )) {
								#line 224 "/usr/lib/haxe/std/haxe/CallStack.hx"
								global::haxe.CallStack.itemToString(b, s1);
								b.b.Append(((string) (" (") ));
							}
							
							#line 227 "/usr/lib/haxe/std/haxe/CallStack.hx"
							b.b.Append(((string) (global::Std.@string(file)) ));
							b.b.Append(((string) (" line ") ));
							b.b.Append(((string) (global::Std.@string(line)) ));
							if (( s1 != null )) {
								#line 230 "/usr/lib/haxe/std/haxe/CallStack.hx"
								b.b.Append(((string) (")") ));
							}
							
						}
						
						#line 222 "/usr/lib/haxe/std/haxe/CallStack.hx"
						break;
					}
					
					
					case 3:
					{
						#line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
						string meth = global::haxe.lang.Runtime.toString(s.@params[1]);
						#line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
						string cname = global::haxe.lang.Runtime.toString(s.@params[0]);
						#line 231 "/usr/lib/haxe/std/haxe/CallStack.hx"
						{
							#line 232 "/usr/lib/haxe/std/haxe/CallStack.hx"
							b.b.Append(((string) (global::Std.@string(cname)) ));
							b.b.Append(((string) (".") ));
							b.b.Append(((string) (global::Std.@string(meth)) ));
						}
						
						#line 231 "/usr/lib/haxe/std/haxe/CallStack.hx"
						break;
					}
					
					
					case 4:
					{
						#line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
						global::haxe.lang.Null<int> n = global::haxe.lang.Null<object>.ofDynamic<int>(s.@params[0]);
						#line 235 "/usr/lib/haxe/std/haxe/CallStack.hx"
						{
							#line 236 "/usr/lib/haxe/std/haxe/CallStack.hx"
							b.b.Append(((string) ("local function #") ));
							b.b.Append(((string) (global::Std.@string((n).toDynamic())) ));
						}
						
						#line 235 "/usr/lib/haxe/std/haxe/CallStack.hx"
						break;
					}
					
					
				}
				
			}
			#line default
		}
		
		
		public static global::Array<object> makeStack(global::System.Diagnostics.StackTrace s) {
			#line 325 "/usr/lib/haxe/std/haxe/CallStack.hx"
			global::Array<object> stack = new global::Array<object>(new object[]{});
			{
				#line 326 "/usr/lib/haxe/std/haxe/CallStack.hx"
				int _g1 = 0;
				#line 326 "/usr/lib/haxe/std/haxe/CallStack.hx"
				int _g = s.FrameCount;
				#line 326 "/usr/lib/haxe/std/haxe/CallStack.hx"
				while (( _g1 < _g )) {
					#line 326 "/usr/lib/haxe/std/haxe/CallStack.hx"
					int i = _g1++;
					#line 328 "/usr/lib/haxe/std/haxe/CallStack.hx"
					global::System.Diagnostics.StackFrame frame = s.GetFrame(((int) (i) ));
					global::System.Reflection.MethodBase m = frame.GetMethod();
					#line 331 "/usr/lib/haxe/std/haxe/CallStack.hx"
					global::haxe.StackItem method = global::haxe.StackItem.Method(( ( m as global::System.Reflection.MemberInfo ).ReflectedType as global::System.Reflection.MemberInfo ).ToString(), ( m as global::System.Reflection.MemberInfo ).Name);
					#line 333 "/usr/lib/haxe/std/haxe/CallStack.hx"
					string fileName = frame.GetFileName();
					int lineNumber = frame.GetFileLineNumber();
					#line 336 "/usr/lib/haxe/std/haxe/CallStack.hx"
					if ((  ! (string.Equals(fileName, null))  || ( lineNumber >= 0 ) )) {
						#line 337 "/usr/lib/haxe/std/haxe/CallStack.hx"
						stack.push(global::haxe.StackItem.FilePos(method, fileName, lineNumber));
					}
					else {
						#line 339 "/usr/lib/haxe/std/haxe/CallStack.hx"
						stack.push(method);
					}
					
				}
				
			}
			
			#line 341 "/usr/lib/haxe/std/haxe/CallStack.hx"
			return stack;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 38 "/usr/lib/haxe/std/haxe/CallStack.hx"
			return new global::haxe.CallStack(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 38 "/usr/lib/haxe/std/haxe/CallStack.hx"
			return new global::haxe.CallStack();
		}
		#line default
		
	}
}


