
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.mock {
	public class MockBuilder<T> : global::haxe.lang.HxObject, global::hunit.mock.MockBuilder {
		
		public MockBuilder(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public MockBuilder(global::hunit.TestCase test, global::System.Type mockClass, global::System.Type targetClass) {
			#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			global::hunit.mock.MockBuilder<object>.__hx_ctor_hunit_mock_MockBuilder<T>(this, test, mockClass, targetClass);
		}
		#line default
		
		public static void __hx_ctor_hunit_mock_MockBuilder<T_c>(global::hunit.mock.MockBuilder<T_c> __temp_me110, global::hunit.TestCase test, global::System.Type mockClass, global::System.Type targetClass) {
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			__temp_me110.strictMode = false;
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			__temp_me110.fullStub = false;
			#line 31 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			__temp_me110.test = test;
			__temp_me110.mockClass = mockClass;
			__temp_me110.targetClass = targetClass;
		}
		#line default
		
		public static object __hx_cast<T_c_c>(global::hunit.mock.MockBuilder me) {
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			return ( (( me != null )) ? (me.hunit_mock_MockBuilder_cast<T_c_c>()) : (null) );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			return new global::hunit.mock.MockBuilder<object>(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				return new global::hunit.mock.MockBuilder<object>(((global::hunit.TestCase) (arr[0]) ), ((global::System.Type) (arr[1]) ), ((global::System.Type) (arr[2]) ));
			}
			#line default
		}
		
		
		public virtual object hunit_mock_MockBuilder_cast<T_c>() {
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			if (global::haxe.lang.Runtime.eq(typeof(T), typeof(T_c))) {
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				return this;
			}
			
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			global::hunit.mock.MockBuilder<T_c> new_me = new global::hunit.mock.MockBuilder<T_c>(global::haxe.lang.EmptyObject.EMPTY);
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			global::Array<object> fields = global::Reflect.fields(this);
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			int i = 0;
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			while (( i < fields.length )) {
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				string field = global::haxe.lang.Runtime.toString(fields[i++]);
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				global::Reflect.setField(new_me, field, global::Reflect.field(this, field));
			}
			
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			return new_me;
		}
		#line default
		
		public global::hunit.TestCase test;
		
		public global::System.Type mockClass;
		
		public global::System.Type targetClass;
		
		public bool fullStub;
		
		public bool strictMode;
		
		public virtual T @get() {
			#line 43 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			T instance = global::Type.createEmptyInstance<T>(this.mockClass);
			this.assignMockData(instance);
			#line 46 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			return instance;
		}
		#line default
		
		public virtual void assignMockData(T instance) {
			#line 56 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			global::hunit.mock.MockData mockData = this.createMockData();
			global::Reflect.setProperty(instance, "__hu_mock__", mockData);
		}
		#line default
		
		public virtual global::hunit.mock.MockData createMockData() {
			#line 67 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			return new global::hunit.mock.MockData(this.test, this.targetClass, new global::haxe.lang.Null<bool>(this.fullStub, true), new global::haxe.lang.Null<bool>(this.strictMode, true));
		}
		#line default
		
		public virtual bool set_strictMode(bool @value) {
			unchecked {
				#line 76 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				if (this.fullStub) {
					#line 77 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.InvalidTestException("Cannot use `stubAll()` and `strict()` together.", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"set_strictMode", "hunit.mock.MockBuilder", "MockBuilder.hx"}, new int[]{1981972957}, new double[]{((double) (77) )})));
				}
				
				#line 80 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				return this.strictMode = @value;
			}
			#line default
		}
		
		
		public virtual bool set_fullStub(bool @value) {
			unchecked {
				#line 90 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				if (this.strictMode) {
					#line 91 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::hunit.exceptions.InvalidTestException("Cannot use `stubAll()` and `strict()` together.", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"set_fullStub", "hunit.mock.MockBuilder", "MockBuilder.hx"}, new int[]{1981972957}, new double[]{((double) (91) )})));
				}
				
				#line 94 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				return this.fullStub = @value;
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				switch (hash) {
					case 279312204:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						if (handleProperties) {
							#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							this.set_strictMode(global::haxe.lang.Runtime.toBool(@value));
							#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							return @value;
						}
						else {
							#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							this.strictMode = global::haxe.lang.Runtime.toBool(@value);
							#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							return @value;
						}
						
					}
					
					
					case 1617919581:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						if (handleProperties) {
							#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							this.set_fullStub(global::haxe.lang.Runtime.toBool(@value));
							#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							return @value;
						}
						else {
							#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							this.fullStub = global::haxe.lang.Runtime.toBool(@value);
							#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
							return @value;
						}
						
					}
					
					
					case 1487949607:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						this.targetClass = ((global::System.Type) (@value) );
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return @value;
					}
					
					
					case 1445699918:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						this.mockClass = ((global::System.Type) (@value) );
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return @value;
					}
					
					
					case 1291438162:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						this.test = ((global::hunit.TestCase) (@value) );
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return @value;
					}
					
					
					default:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				switch (hash) {
					case 713184730:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_fullStub", 713184730)) );
					}
					
					
					case 649816073:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_strictMode", 649816073)) );
					}
					
					
					case 318038256:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "createMockData", 318038256)) );
					}
					
					
					case 427469603:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "assignMockData", 427469603)) );
					}
					
					
					case 5144726:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get", 5144726)) );
					}
					
					
					case 279312204:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.strictMode;
					}
					
					
					case 1617919581:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.fullStub;
					}
					
					
					case 1487949607:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.targetClass;
					}
					
					
					case 1445699918:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.mockClass;
					}
					
					
					case 1291438162:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.test;
					}
					
					
					default:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				switch (hash) {
					case 713184730:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.set_fullStub(global::haxe.lang.Runtime.toBool(dynargs[0]));
					}
					
					
					case 649816073:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.set_strictMode(global::haxe.lang.Runtime.toBool(dynargs[0]));
					}
					
					
					case 318038256:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.createMockData();
					}
					
					
					case 427469603:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						this.assignMockData(global::haxe.lang.Runtime.genericCast<T>(dynargs[0]));
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						break;
					}
					
					
					case 5144726:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return this.@get();
					}
					
					
					default:
					{
						#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			baseArr.push("strictMode");
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			baseArr.push("fullStub");
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			baseArr.push("targetClass");
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			baseArr.push("mockClass");
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			baseArr.push("test");
			#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
			{
				#line 12 "/home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.mock {
	[global::haxe.lang.GenericInterface(typeof(global::hunit.mock.MockBuilder<object>))]
	public interface MockBuilder : global::haxe.lang.IHxObject, global::haxe.lang.IGenericObject {
		
		object hunit_mock_MockBuilder_cast<T_c>();
		
		global::hunit.mock.MockData createMockData();
		
		bool set_strictMode(bool @value);
		
		bool set_fullStub(bool @value);
		
	}
}


