
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace exception {
	public class StackTools : global::haxe.lang.HxObject {
		
		public StackTools(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public StackTools() {
			#line 14 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			global::exception.StackTools.__hx_ctor_exception_StackTools(this);
		}
		#line default
		
		public static void __hx_ctor_exception_StackTools(global::exception.StackTools __temp_me38) {
		}
		
		
		public static global::Array<object> truncate(global::Array<object> stack, object pos, global::haxe.lang.Null<bool> fromTop) {
			#line 33 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			bool __temp_fromTop36 = ( ( ! (fromTop.hasValue) ) ? (false) : ((fromTop).@value) );
			#line 33 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			return global::exception.StackTools.csTruncate(stack, pos, new global::haxe.lang.Null<bool>(__temp_fromTop36, true));
		}
		#line default
		
		public static global::Array<object> csTruncate(global::Array<object> stack, object pos, global::haxe.lang.Null<bool> fromTop) {
			unchecked {
				#line 151 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				bool __temp_fromTop37 = ( ( ! (fromTop.hasValue) ) ? (false) : ((fromTop).@value) );
				int posIndex = 0;
				#line 154 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				int @from = default(int);
				#line 154 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				if (__temp_fromTop37) {
					#line 154 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					@from = ( stack.length - 1 );
				}
				else {
					#line 154 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					@from = 0;
				}
				
				#line 155 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				int till = default(int);
				#line 155 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				if (__temp_fromTop37) {
					#line 155 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					till = -1;
				}
				else {
					#line 155 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					till = stack.length;
				}
				
				#line 157 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				{
					#line 233 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					int _g_current = 0;
					int _g_till = 0;
					#line 157 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					int _g_current1 = @from;
					#line 157 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					int _g_till1 = till;
					#line 157 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					while (( _g_current1 != _g_till1 )) {
						#line 157 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						int i = default(int);
						#line 157 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						if (( _g_current1 < _g_till1 )) {
							#line 157 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
							i = _g_current1++;
						}
						else {
							#line 157 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
							i = _g_current1--;
						}
						
						#line 158 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						{
							#line 158 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
							global::haxe.StackItem _g = ((global::haxe.StackItem) (stack[i]) );
							#line 158 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
							switch (_g.index) {
								case 2:
								{
									#line 158 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
									if (( ((global::haxe.StackItem) (_g.@params[0]) ) != null )) {
										#line 158 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
										switch (((global::haxe.StackItem) (_g.@params[0]) ).index) {
											case 3:
											{
												#line 158 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
												int line = ((int) (global::haxe.lang.Runtime.toInt(_g.@params[2])) );
												#line 158 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
												string file = global::haxe.lang.Runtime.toString(_g.@params[1]);
												#line 158 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
												string methodName = global::haxe.lang.Runtime.toString(((global::haxe.StackItem) (_g.@params[0]) ).@params[1]);
												#line 158 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
												string className = global::haxe.lang.Runtime.toString(((global::haxe.StackItem) (_g.@params[0]) ).@params[0]);
												#line 160 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
												if (( string.Equals(className, global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(pos, "className", 1547539107, true))) && string.Equals(methodName, global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(pos, "methodName", 302979532, true))) )) {
													#line 161 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
													posIndex = i;
													goto label1;
												}
												
												#line 159 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
												break;
											}
											
											
											default:
											{
												#line 164 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
												break;
											}
											
										}
										
									}
									else {
									}
									
									#line 158 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
									break;
								}
								
								
								default:
								{
									#line 164 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
									break;
								}
								
							}
							
						}
						
					}
					
					#line 157 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					label1: {};
				}
				
				#line 168 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				if (__temp_fromTop37) {
					#line 168 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					return stack.slice(0, new global::haxe.lang.Null<int>(( posIndex + 1 ), true));
				}
				else {
					#line 168 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					return stack.slice(posIndex, default(global::haxe.lang.Null<int>));
				}
				
			}
			#line default
		}
		
		
		public static new object __hx_createEmpty() {
			#line 14 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			return new global::exception.StackTools(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 14 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			return new global::exception.StackTools();
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace exception._StackTools {
	public class IntIterator : global::haxe.lang.HxObject {
		
		public IntIterator(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public IntIterator(int @from, int till) {
			#line 236 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			global::exception._StackTools.IntIterator.__hx_ctor_exception__StackTools_IntIterator(this, @from, till);
		}
		#line default
		
		public static void __hx_ctor_exception__StackTools_IntIterator(global::exception._StackTools.IntIterator __temp_me39, int @from, int till) {
			#line 234 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			__temp_me39.till = 0;
			#line 233 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			__temp_me39.current = 0;
			#line 238 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			__temp_me39.current = @from;
			__temp_me39.till = till;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			return new global::exception._StackTools.IntIterator(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				return new global::exception._StackTools.IntIterator(((int) (global::haxe.lang.Runtime.toInt(arr[0])) ), ((int) (global::haxe.lang.Runtime.toInt(arr[1])) ));
			}
			#line default
		}
		
		
		public int current;
		
		public int till;
		
		public bool hasNext() {
			#line 244 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			return ( this.current != this.till );
		}
		#line default
		
		public int next() {
			#line 249 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			if (( this.current < this.till )) {
				#line 249 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				return this.current++;
			}
			else {
				#line 249 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				return this.current--;
			}
			
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				switch (hash) {
					case 1291635509:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						this.till = ((int) (@value) );
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return @value;
					}
					
					
					case 1273207865:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						this.current = ((int) (@value) );
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return @value;
					}
					
					
					default:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				switch (hash) {
					case 1291635509:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						this.till = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return @value;
					}
					
					
					case 1273207865:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						this.current = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return @value;
					}
					
					
					default:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				switch (hash) {
					case 1224901875:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "next", 1224901875)) );
					}
					
					
					case 407283053:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "hasNext", 407283053)) );
					}
					
					
					case 1291635509:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return this.till;
					}
					
					
					case 1273207865:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return this.current;
					}
					
					
					default:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				switch (hash) {
					case 1291635509:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return ((double) (this.till) );
					}
					
					
					case 1273207865:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return ((double) (this.current) );
					}
					
					
					default:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				switch (hash) {
					case 1224901875:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return this.next();
					}
					
					
					case 407283053:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return this.hasNext();
					}
					
					
					default:
					{
						#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			baseArr.push("till");
			#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			baseArr.push("current");
			#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			{
				#line 232 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


