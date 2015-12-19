package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class HUnit extends haxe.lang.HxObject
{
	public static void main(String[] args)
	{
		main();
	}
	
	public HUnit(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public HUnit()
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
		haxe.root.HUnit.__hx_ctor__HUnit(this);
	}
	
	
	public static void __hx_ctor__HUnit(haxe.root.HUnit __temp_me13)
	{
	}
	
	
	public static void main()
	{
		//line 25 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
		haxe.root.Exception.processCallStackOnCreation = ((haxe.lang.Function) (new haxe.lang.Closure(haxe.root.HUnit.class, "processExceptionStack")) );
		//line 27 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
		hunit.TestSuite suite = new hunit.TestSuite(null, null);
		//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestMacroUtils.hx"
		{
			//line 61 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestMacroUtils.hx"
			suite.add(new haxe.root.SignalValueTest());
			//line 61 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestMacroUtils.hx"
			suite.add(new haxe.root.MetricValueTest());
			//line 61 "/home/alex/Work/HaXe/hunit/src/hunit/utils/TestMacroUtils.hx"
			suite.add(new haxe.root.ChildWidgetNodeTest());
		}
		
		//line 29 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
		suite.run();
	}
	
	
	public static haxe.root.Array<haxe.StackItem> processExceptionStack(haxe.root.Array<haxe.StackItem> stack)
	{
		//line 58 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
		int count = 7;
		//line 63 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
		return stack.slice(0,  - (count) );
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
		return new haxe.root.HUnit(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 14 "/home/alex/Work/HaXe/hunit/src/HUnit.hx"
		return new haxe.root.HUnit();
	}
	
	
}


