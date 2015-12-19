package haxe;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class CallStack extends haxe.lang.HxObject
{
	public CallStack(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public CallStack()
	{
		//line 38 "/usr/lib/haxe/std/haxe/CallStack.hx"
		haxe.CallStack.__hx_ctor_haxe_CallStack(this);
	}
	
	
	public static void __hx_ctor_haxe_CallStack(haxe.CallStack __temp_me30)
	{
	}
	
	
	public static haxe.root.Array<haxe.StackItem> callStack()
	{
		//line 101 "/usr/lib/haxe/std/haxe/CallStack.hx"
		haxe.root.Array<haxe.StackItem> stack = new haxe.root.Array<haxe.StackItem>(new haxe.StackItem[]{});
		//line 102 "/usr/lib/haxe/std/haxe/CallStack.hx"
		{
			//line 102 "/usr/lib/haxe/std/haxe/CallStack.hx"
			int _g = 0;
			//line 102 "/usr/lib/haxe/std/haxe/CallStack.hx"
			java.lang.StackTraceElement[] _g1 = java.lang.Thread.currentThread().getStackTrace();
			//line 102 "/usr/lib/haxe/std/haxe/CallStack.hx"
			while (( _g < _g1.length ))
			{
				//line 102 "/usr/lib/haxe/std/haxe/CallStack.hx"
				java.lang.StackTraceElement el = _g1[_g];
				//line 102 "/usr/lib/haxe/std/haxe/CallStack.hx"
				 ++ _g;
				//line 103 "/usr/lib/haxe/std/haxe/CallStack.hx"
				java.lang.String className = el.getClassName();
				//line 104 "/usr/lib/haxe/std/haxe/CallStack.hx"
				java.lang.String methodName = el.getMethodName();
				//line 105 "/usr/lib/haxe/std/haxe/CallStack.hx"
				java.lang.String fileName = el.getFileName();
				//line 106 "/usr/lib/haxe/std/haxe/CallStack.hx"
				int lineNumber = el.getLineNumber();
				//line 107 "/usr/lib/haxe/std/haxe/CallStack.hx"
				haxe.StackItem method = haxe.StackItem.Method(className, methodName);
				//line 108 "/usr/lib/haxe/std/haxe/CallStack.hx"
				if (( ( fileName != null ) || ( lineNumber >= 0 ) )) 
				{
					//line 109 "/usr/lib/haxe/std/haxe/CallStack.hx"
					stack.push(haxe.StackItem.FilePos(method, fileName, lineNumber));
				}
				else
				{
					//line 112 "/usr/lib/haxe/std/haxe/CallStack.hx"
					stack.push(method);
				}
				
			}
			
		}
		
		//line 115 "/usr/lib/haxe/std/haxe/CallStack.hx"
		stack.shift();
		//line 116 "/usr/lib/haxe/std/haxe/CallStack.hx"
		stack.shift();
		//line 117 "/usr/lib/haxe/std/haxe/CallStack.hx"
		stack.pop();
		//line 118 "/usr/lib/haxe/std/haxe/CallStack.hx"
		return stack;
	}
	
	
	public static haxe.root.Array<haxe.StackItem> exceptionStack()
	{
		//line 165 "/usr/lib/haxe/std/haxe/CallStack.hx"
		haxe.root.Array<haxe.StackItem> stack = new haxe.root.Array<haxe.StackItem>(new haxe.StackItem[]{});
		//line 166 "/usr/lib/haxe/std/haxe/CallStack.hx"
		{
			//line 166 "/usr/lib/haxe/std/haxe/CallStack.hx"
			int _g = 0;
			//line 166 "/usr/lib/haxe/std/haxe/CallStack.hx"
			java.lang.StackTraceElement[] _g1 = haxe.lang.Exceptions.currentException().getStackTrace();
			//line 166 "/usr/lib/haxe/std/haxe/CallStack.hx"
			while (( _g < _g1.length ))
			{
				//line 166 "/usr/lib/haxe/std/haxe/CallStack.hx"
				java.lang.StackTraceElement el = _g1[_g];
				//line 166 "/usr/lib/haxe/std/haxe/CallStack.hx"
				 ++ _g;
				//line 167 "/usr/lib/haxe/std/haxe/CallStack.hx"
				java.lang.String className = el.getClassName();
				//line 168 "/usr/lib/haxe/std/haxe/CallStack.hx"
				java.lang.String methodName = el.getMethodName();
				//line 169 "/usr/lib/haxe/std/haxe/CallStack.hx"
				java.lang.String fileName = el.getFileName();
				//line 170 "/usr/lib/haxe/std/haxe/CallStack.hx"
				int lineNumber = el.getLineNumber();
				//line 171 "/usr/lib/haxe/std/haxe/CallStack.hx"
				haxe.StackItem method = haxe.StackItem.Method(className, methodName);
				//line 172 "/usr/lib/haxe/std/haxe/CallStack.hx"
				if (( ( fileName != null ) || ( lineNumber >= 0 ) )) 
				{
					//line 173 "/usr/lib/haxe/std/haxe/CallStack.hx"
					stack.push(haxe.StackItem.FilePos(method, fileName, lineNumber));
				}
				else
				{
					//line 176 "/usr/lib/haxe/std/haxe/CallStack.hx"
					stack.push(method);
				}
				
			}
			
		}
		
		//line 180 "/usr/lib/haxe/std/haxe/CallStack.hx"
		stack.shift();
		//line 181 "/usr/lib/haxe/std/haxe/CallStack.hx"
		stack.pop();
		//line 182 "/usr/lib/haxe/std/haxe/CallStack.hx"
		return stack;
	}
	
	
	public static java.lang.String toString(haxe.root.Array<haxe.StackItem> stack)
	{
		//line 207 "/usr/lib/haxe/std/haxe/CallStack.hx"
		haxe.root.StringBuf b = new haxe.root.StringBuf();
		//line 208 "/usr/lib/haxe/std/haxe/CallStack.hx"
		{
			//line 208 "/usr/lib/haxe/std/haxe/CallStack.hx"
			int _g = 0;
			//line 208 "/usr/lib/haxe/std/haxe/CallStack.hx"
			while (( _g < stack.length ))
			{
				//line 208 "/usr/lib/haxe/std/haxe/CallStack.hx"
				haxe.StackItem s = stack.__get(_g);
				//line 208 "/usr/lib/haxe/std/haxe/CallStack.hx"
				 ++ _g;
				//line 209 "/usr/lib/haxe/std/haxe/CallStack.hx"
				b.add("\nCalled from ");
				//line 210 "/usr/lib/haxe/std/haxe/CallStack.hx"
				haxe.CallStack.itemToString(b, s);
			}
			
		}
		
		//line 212 "/usr/lib/haxe/std/haxe/CallStack.hx"
		return b.toString();
	}
	
	
	public static void itemToString(haxe.root.StringBuf b, haxe.StackItem s)
	{
		//line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
		switch (s.index)
		{
			case 0:
			{
				//line 218 "/usr/lib/haxe/std/haxe/CallStack.hx"
				b.add("a C function");
				//line 218 "/usr/lib/haxe/std/haxe/CallStack.hx"
				break;
			}
			
			
			case 1:
			{
				//line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
				java.lang.String m = haxe.lang.Runtime.toString(s.params[0]);
				//line 219 "/usr/lib/haxe/std/haxe/CallStack.hx"
				{
					//line 220 "/usr/lib/haxe/std/haxe/CallStack.hx"
					b.add("module ");
					//line 221 "/usr/lib/haxe/std/haxe/CallStack.hx"
					b.add(m);
				}
				
				//line 219 "/usr/lib/haxe/std/haxe/CallStack.hx"
				break;
			}
			
			
			case 2:
			{
				//line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
				int line = ((int) (haxe.lang.Runtime.toInt(s.params[2])) );
				//line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
				java.lang.String file = haxe.lang.Runtime.toString(s.params[1]);
				//line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
				haxe.StackItem s1 = ((haxe.StackItem) (s.params[0]) );
				//line 222 "/usr/lib/haxe/std/haxe/CallStack.hx"
				{
					//line 223 "/usr/lib/haxe/std/haxe/CallStack.hx"
					if (( s1 != null )) 
					{
						//line 224 "/usr/lib/haxe/std/haxe/CallStack.hx"
						haxe.CallStack.itemToString(b, s1);
						//line 225 "/usr/lib/haxe/std/haxe/CallStack.hx"
						b.add(" (");
					}
					
					//line 227 "/usr/lib/haxe/std/haxe/CallStack.hx"
					b.add(file);
					//line 228 "/usr/lib/haxe/std/haxe/CallStack.hx"
					b.add(" line ");
					//line 229 "/usr/lib/haxe/std/haxe/CallStack.hx"
					b.add(line);
					//line 230 "/usr/lib/haxe/std/haxe/CallStack.hx"
					if (( s1 != null )) 
					{
						//line 230 "/usr/lib/haxe/std/haxe/CallStack.hx"
						b.add(")");
					}
					
				}
				
				//line 222 "/usr/lib/haxe/std/haxe/CallStack.hx"
				break;
			}
			
			
			case 3:
			{
				//line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
				java.lang.String meth = haxe.lang.Runtime.toString(s.params[1]);
				//line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
				java.lang.String cname = haxe.lang.Runtime.toString(s.params[0]);
				//line 231 "/usr/lib/haxe/std/haxe/CallStack.hx"
				{
					//line 232 "/usr/lib/haxe/std/haxe/CallStack.hx"
					b.add(cname);
					//line 233 "/usr/lib/haxe/std/haxe/CallStack.hx"
					b.add(".");
					//line 234 "/usr/lib/haxe/std/haxe/CallStack.hx"
					b.add(meth);
				}
				
				//line 231 "/usr/lib/haxe/std/haxe/CallStack.hx"
				break;
			}
			
			
			case 4:
			{
				//line 216 "/usr/lib/haxe/std/haxe/CallStack.hx"
				java.lang.Object n = s.params[0];
				//line 235 "/usr/lib/haxe/std/haxe/CallStack.hx"
				{
					//line 236 "/usr/lib/haxe/std/haxe/CallStack.hx"
					b.add("local function #");
					//line 237 "/usr/lib/haxe/std/haxe/CallStack.hx"
					b.add(n);
				}
				
				//line 235 "/usr/lib/haxe/std/haxe/CallStack.hx"
				break;
			}
			
			
		}
		
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 38 "/usr/lib/haxe/std/haxe/CallStack.hx"
		return new haxe.CallStack(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 38 "/usr/lib/haxe/std/haxe/CallStack.hx"
		return new haxe.CallStack();
	}
	
	
}


