
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.exceptions {
	public class UnexpectedException : global::Exception {
		
		public UnexpectedException(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public UnexpectedException(object e, global::Array<object> exceptionStack, object pos) : base(global::haxe.lang.EmptyObject.EMPTY) {
			#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			global::hunit.exceptions.UnexpectedException.__hx_ctor_hunit_exceptions_UnexpectedException(this, e, exceptionStack, pos);
		}
		#line default
		
		public static void __hx_ctor_hunit_exceptions_UnexpectedException(global::hunit.exceptions.UnexpectedException __temp_me91, object e, global::Array<object> exceptionStack, object pos) {
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			__temp_me91.originalExceptionStack = exceptionStack;
			__temp_me91.original = e;
			#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			global::Exception.__hx_ctor__Exception(__temp_me91, global::Std.@string(e), pos);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			return new global::hunit.exceptions.UnexpectedException(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				return new global::hunit.exceptions.UnexpectedException(arr[0], ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (arr[1]) ))) ), arr[2]);
			}
			#line default
		}
		
		
		public object original;
		
		public global::Array<object> originalExceptionStack;
		
		public override string toString() {
			#line 39 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			if (( this.original is global::Exception )) {
				#line 40 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				string className = global::Type.getClassName(global::Type.getClass<object>(this));
				return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("", className), ": "), (((global::Exception) (this.original) )).toString());
			}
			else {
				#line 43 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				return base.toString();
			}
			
		}
		#line default
		
		public override global::Array<object> buildStack(global::Array<object> stack) {
			unchecked {
				#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				global::Array<object> exceptionStack = this.originalExceptionStack;
				#line 57 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				if (( this.original is global::Exception )) {
					#line 58 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					this.pos = (((global::Exception) (this.original) )).pos;
					exceptionStack = (((global::Exception) (this.original) )).stack.copy();
				}
				else if (( exceptionStack.length == 0 )) {
					#line 65 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					exceptionStack = stack;
				}
				else {
					#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					global::haxe.StackItem _g = ((global::haxe.StackItem) (exceptionStack[0]) );
					#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
					switch (_g.index) {
						case 2:
						{
							#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
							if (( ((global::haxe.StackItem) (_g.@params[0]) ) == null )) {
								#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
								int line = ((int) (global::haxe.lang.Runtime.toInt(_g.@params[2])) );
								#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
								string file = global::haxe.lang.Runtime.toString(_g.@params[1]);
								{
									#line 71 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
									global::haxe.lang.Runtime.setField(this.pos, "fileName", 1648581351, file);
									global::haxe.lang.Runtime.setField_f(this.pos, "lineNumber", 1981972957, ((double) (line) ));
								}
								
							}
							else {
								#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
								switch (((global::haxe.StackItem) (_g.@params[0]) ).index) {
									case 3:
									{
										#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
										int line1 = ((int) (global::haxe.lang.Runtime.toInt(_g.@params[2])) );
										#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
										string file1 = global::haxe.lang.Runtime.toString(_g.@params[1]);
										#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
										string methodName = global::haxe.lang.Runtime.toString(((global::haxe.StackItem) (_g.@params[0]) ).@params[1]);
										#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
										string className = global::haxe.lang.Runtime.toString(((global::haxe.StackItem) (_g.@params[0]) ).@params[0]);
										#line 73 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
										{
											#line 74 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
											global::haxe.lang.Runtime.setField(this.pos, "className", 1547539107, className);
											global::haxe.lang.Runtime.setField(this.pos, "methodName", 302979532, methodName);
											global::haxe.lang.Runtime.setField(this.pos, "fileName", 1648581351, file1);
											global::haxe.lang.Runtime.setField_f(this.pos, "lineNumber", 1981972957, ((double) (line1) ));
										}
										
										#line 73 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
										break;
									}
									
									
									default:
									{
										#line 81 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
										break;
									}
									
								}
								
							}
							
							#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
							break;
						}
						
						
						case 3:
						{
							#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
							string methodName1 = global::haxe.lang.Runtime.toString(_g.@params[1]);
							#line 69 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
							string className1 = global::haxe.lang.Runtime.toString(_g.@params[0]);
							#line 78 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
							{
								#line 79 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
								global::haxe.lang.Runtime.setField(this.pos, "methodName", 302979532, methodName1);
								global::haxe.lang.Runtime.setField(this.pos, "className", 1547539107, className1);
							}
							
							#line 78 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
							break;
						}
						
						
						default:
						{
							#line 81 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
							break;
						}
						
					}
					
				}
				
				#line 86 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				return base.buildStack(exceptionStack);
			}
			#line default
		}
		
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				switch (hash) {
					case 1625830481:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						this.original = ((object) (@value) );
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return @value;
					}
					
					
					default:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				switch (hash) {
					case 480550058:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						this.originalExceptionStack = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return @value;
					}
					
					
					case 1625830481:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						this.original = ((object) (@value) );
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return @value;
					}
					
					
					default:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				switch (hash) {
					case 410957114:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "buildStack", 410957114)) );
					}
					
					
					case 946786476:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "toString", 946786476)) );
					}
					
					
					case 480550058:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return this.originalExceptionStack;
					}
					
					
					case 1625830481:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return this.original;
					}
					
					
					default:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				switch (hash) {
					case 1625830481:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return ((double) (global::haxe.lang.Runtime.toDouble(this.original)) );
					}
					
					
					default:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			baseArr.push("originalExceptionStack");
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			baseArr.push("original");
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
			{
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


