package hunit;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Utils_filterCases_225__Fun extends haxe.lang.Function
{
	public Utils_filterCases_225__Fun(haxe.root.Array<java.lang.String> excludes)
	{
		//line 225 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		super(1, 0);
		//line 225 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		this.excludes = excludes;
	}
	
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 225 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		hunit.TestCase c = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((hunit.TestCase) (((java.lang.Object) (__fn_float1) )) )) : (((hunit.TestCase) (__fn_dyn1) )) );
		//line 226 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		java.lang.String className = haxe.root.Type.getClassName(((java.lang.Class) (haxe.root.Type.getClass(c)) ));
		//line 228 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		{
			//line 228 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			int _g = 0;
			//line 228 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			while (( _g < this.excludes.length ))
			{
				//line 228 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				java.lang.String e = this.excludes.__get(_g);
				//line 228 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				 ++ _g;
				//line 229 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				if (( haxe.lang.StringExt.indexOf(className, e, null) == 0 )) 
				{
					//line 229 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					return false;
				}
				
			}
			
		}
		
		//line 232 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		return true;
	}
	
	
	public haxe.root.Array<java.lang.String> excludes;
	
}


