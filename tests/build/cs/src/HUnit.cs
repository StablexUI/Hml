
#pragma warning disable 109, 114, 219, 429, 168, 162
public class HUnit : global::haxe.lang.HxObject {
	
	public static void Main(){
		global::cs.Boot.init();
		main();
	}
	public HUnit(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public HUnit() {
		#line 14 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
		global::HUnit.__hx_ctor__HUnit(this);
	}
	#line default
	
	public static void __hx_ctor__HUnit(global::HUnit __temp_me18) {
	}
	
	
	public static void main() {
		#line 25 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
		global::Exception.processCallStackOnCreation = ((global::haxe.lang.Function) (new global::haxe.lang.Closure(typeof(global::HUnit), "processExceptionStack", 1755857736)) );
		#line 27 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
		global::hunit.TestSuite suite = new global::hunit.TestSuite(null, null);
		#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestMacroUtils.hx"
		{
			#line 61 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestMacroUtils.hx"
			suite.@add(new global::SignalValueTest());
			#line 61 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestMacroUtils.hx"
			suite.@add(new global::MetricValueTest());
			#line 61 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestMacroUtils.hx"
			suite.@add(new global::ChildWidgetNodeTest());
		}
		
		#line 29 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
		suite.run();
	}
	#line default
	
	public static global::Array<object> processExceptionStack(global::Array<object> stack) {
		unchecked {
			#line 57 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
			int count = 8;
			#line 63 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
			return stack.slice(0, new global::haxe.lang.Null<int>( - (count) , true));
		}
		#line default
	}
	
	
	public static new object __hx_createEmpty() {
		#line 14 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
		return new global::HUnit(global::haxe.lang.EmptyObject.EMPTY);
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		#line 14 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
		return new global::HUnit();
	}
	#line default
	
}


