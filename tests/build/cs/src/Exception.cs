
#pragma warning disable 109, 114, 219, 429, 168, 162
public class Exception : global::haxe.lang.HxObject {
	
	static Exception() {
		#line 58 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		global::Exception.processCallStackOnCreation = ( (( global::Exception_Anon_58__Fun.__hx_current != null )) ? (global::Exception_Anon_58__Fun.__hx_current) : (global::Exception_Anon_58__Fun.__hx_current = ((global::Exception_Anon_58__Fun) (new global::Exception_Anon_58__Fun()) )) );
	}
	#line default
	
	public Exception(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public Exception(string message, object pos) {
		#line 69 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		global::Exception.__hx_ctor__Exception(this, message, pos);
	}
	#line default
	
	public static void __hx_ctor__Exception(global::Exception __temp_me17, string message, object pos) {
		#line 73 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		__temp_me17.message = message;
		__temp_me17.pos = pos;
		#line 77 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		__temp_me17.stack = __temp_me17.buildStack(global::haxe.CallStack.callStack());
	}
	#line default
	
	public static global::Exception wrap(object e, object pos) {
		#line 40 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		if (( e is global::Exception )) {
			#line 40 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			return ((global::Exception) (e) );
		}
		
		#line 42 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		global::Array<object> exceptionStack = global::haxe.CallStack.exceptionStack();
		global::Exception exception = new global::Exception(global::Std.@string(e), pos);
		#line 46 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		if (( exceptionStack.length > 0 )) {
			#line 47 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			exception.stack = exceptionStack;
		}
		
		#line 50 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		return exception;
	}
	#line default
	
	public static global::haxe.lang.Function processCallStackOnCreation;
	
	public static new object __hx_createEmpty() {
		#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		return new global::Exception(global::haxe.lang.EmptyObject.EMPTY);
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		unchecked {
			#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			return new global::Exception(global::haxe.lang.Runtime.toString(arr[0]), arr[1]);
		}
		#line default
	}
	
	
	public string message;
	
	public object pos;
	
	public global::Array<object> stack;
	
	public virtual void truncateStack(object pos, global::haxe.lang.Null<int> count) {
		#line 89 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		int __temp_count16 = ( ( ! (count.hasValue) ) ? (0) : ((count).@value) );
		#line 94 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		if (( pos != null )) {
			#line 95 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			bool fromTop = false;
			#line 95 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			this.stack = global::exception.StackTools.csTruncate(this.stack, pos, new global::haxe.lang.Null<bool>(fromTop, true));
		}
		
		#line 98 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		if (( __temp_count16 > 0 )) {
			#line 99 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			this.stack = this.stack.slice(__temp_count16, default(global::haxe.lang.Null<int>));
		}
		
	}
	#line default
	
	public virtual string stringStack() {
		#line 111 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		return global::haxe.CallStack.toString(this.stack);
	}
	#line default
	
	public virtual string toString() {
		#line 121 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		string className = global::Type.getClassName(global::Type.getClass<object>(this));
		string position = null;
		#line 122 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		if (( this.pos == null )) {
			#line 122 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			position = "unknown position";
		}
		else {
			#line 122 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			position = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(this.pos, "fileName", 1648581351, true)), ":"), global::haxe.lang.Runtime.toString(((int) (global::haxe.lang.Runtime.getField_f(this.pos, "lineNumber", 1981972957, true)) )));
		}
		
		#line 124 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		string msg = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("", className), ": "), this.message), "\n\tCreated at "), position);
		msg = global::haxe.lang.Runtime.concat(msg, global::StringTools.replace(global::haxe.CallStack.toString(this.stack), "\n", "\n\t"));
		#line 127 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		return msg;
	}
	#line default
	
	public virtual global::Array<object> buildStack(global::Array<object> stack) {
		#line 137 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		global::Array<object> stack1 = null;
		#line 137 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		{
			#line 137 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			bool fromTop = false;
			#line 137 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			stack1 = global::exception.StackTools.csTruncate(stack, this.pos, new global::haxe.lang.Null<bool>(fromTop, true));
		}
		
		#line 139 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		return ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::Exception.processCallStackOnCreation.__hx_invoke1_o(default(double), stack1)) ))) );
	}
	#line default
	
	public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
		unchecked {
			#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			switch (hash) {
				case 5594516:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					this.pos = ((object) (@value) );
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return @value;
				}
				
				
				default:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return base.__hx_setField_f(field, hash, @value, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
		unchecked {
			#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			switch (hash) {
				case 67856200:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					this.stack = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return @value;
				}
				
				
				case 5594516:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					this.pos = ((object) (@value) );
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return @value;
				}
				
				
				case 437335495:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					this.message = global::haxe.lang.Runtime.toString(@value);
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return @value;
				}
				
				
				default:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return base.__hx_setField(field, hash, @value, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
		unchecked {
			#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			switch (hash) {
				case 410957114:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "buildStack", 410957114)) );
				}
				
				
				case 946786476:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "toString", 946786476)) );
				}
				
				
				case 252582071:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "stringStack", 252582071)) );
				}
				
				
				case 2023040770:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "truncateStack", 2023040770)) );
				}
				
				
				case 67856200:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return this.stack;
				}
				
				
				case 5594516:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return this.pos;
				}
				
				
				case 437335495:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return this.message;
				}
				
				
				default:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
		unchecked {
			#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			switch (hash) {
				case 5594516:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return ((double) (global::haxe.lang.Runtime.toDouble(this.pos)) );
				}
				
				
				default:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
		unchecked {
			#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			switch (hash) {
				case 410957114:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return this.buildStack(((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (dynargs[0]) ))) ));
				}
				
				
				case 946786476:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return this.toString();
				}
				
				
				case 252582071:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return this.stringStack();
				}
				
				
				case 2023040770:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					this.truncateStack(dynargs[0], global::haxe.lang.Null<object>.ofDynamic<int>(dynargs[1]));
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					break;
				}
				
				
				default:
				{
					#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
					return base.__hx_invokeField(field, hash, dynargs);
				}
				
			}
			
			#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			return null;
		}
		#line default
	}
	
	
	public override void __hx_getFields(global::Array<object> baseArr) {
		#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		baseArr.push("stack");
		#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		baseArr.push("pos");
		#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		baseArr.push("message");
		#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		{
			#line 22 "/home/alex/Work/HaXe/exception/src/Exception.hx"
			base.__hx_getFields(baseArr);
		}
		
	}
	#line default
	
	public override string ToString(){
		return this.toString();
	}
	
	
}



#pragma warning disable 109, 114, 219, 429, 168, 162
public class Exception_Anon_58__Fun : global::haxe.lang.Function {
	
	public Exception_Anon_58__Fun() : base(1, 0) {
	}
	
	
	public static global::Exception_Anon_58__Fun __hx_current;
	
	public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
		#line 58 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		global::Array<object> stack = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (((object) (__fn_float1) )) ))) )) : (((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (__fn_dyn1) ))) )) );
		#line 60 "/home/alex/Work/HaXe/exception/src/Exception.hx"
		return stack;
	}
	#line default
	
}


