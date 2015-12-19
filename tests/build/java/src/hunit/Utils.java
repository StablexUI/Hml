package hunit;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Utils extends haxe.lang.HxObject
{
	static
	{
		//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		hunit.Utils.META_TEST = "test";
		//line 205 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		hunit.Utils.buffer = "";
	}
	
	public Utils(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Utils()
	{
		//line 55 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		hunit.Utils.__hx_ctor_hunit_Utils(this);
	}
	
	
	public static void __hx_ctor_hunit_Utils(hunit.Utils __temp_me54)
	{
	}
	
	
	public static java.lang.String META_TEST;
	
	public static boolean isObject(java.lang.Object value)
	{
		//line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		{
			//line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			haxe.root.ValueType _g = haxe.root.Type.typeof(value);
			//line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			switch (_g.index)
			{
				case 6:
				{
					//line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					{
						//line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
						java.lang.Class __temp_switch1 = (((java.lang.Class) (_g.params[0]) ));
						//line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
						if (haxe.lang.Runtime.eq(__temp_switch1, java.lang.String.class)) 
						{
							//line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
							return false;
						}
						else
						{
							//line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
							return true;
						}
						
					}
					
				}
				
				
				case 4:
				{
					//line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					return true;
				}
				
				
				default:
				{
					//line 67 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					return false;
				}
				
			}
			
		}
		
	}
	
	
	public static java.lang.String shortenString(java.lang.String str)
	{
		//line 82 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		if (( str.length() > 70 )) 
		{
			//line 82 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			return ( haxe.lang.StringExt.substr(str, 0, 65) + "<...>" );
		}
		else
		{
			//line 82 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			return str;
		}
		
	}
	
	
	public static boolean hasToString(java.lang.Object value)
	{
		//line 92 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		if (( value instanceof java.lang.String )) 
		{
			//line 92 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			return true;
		}
		
		//line 94 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		{
			//line 94 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			haxe.root.ValueType _g = haxe.root.Type.typeof(value);
			//line 94 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			switch (_g.index)
			{
				case 6:
				{
					//line 94 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					java.lang.Class cls = ((java.lang.Class) (_g.params[0]) );
					//line 96 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					return ( haxe.root.Type.getInstanceFields(cls).indexOf("toString", null) >= 0 );
				}
				
				
				default:
				{
					//line 98 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					return false;
				}
				
			}
			
		}
		
	}
	
	
	public static java.lang.String safeToString(java.lang.Object value)
	{
		//line 110 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		return haxe.root.Std.string(value);
	}
	
	
	public static java.lang.String shortenQuote(java.lang.Object value)
	{
		//line 131 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		java.lang.String str = hunit.Utils.shortenString(hunit.Utils.safeToString(value));
		//line 133 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		if (hunit.Utils.hasToString(value)) 
		{
			//line 133 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			return ( ( "\"" + str ) + "\"" );
		}
		else
		{
			//line 133 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			return str;
		}
		
	}
	
	
	public static void printTrace(haxe.lang.Function printer, java.lang.Object value, java.lang.Object pos)
	{
		//line 143 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		java.lang.String file = haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(pos, "fileName", true));
		//line 144 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		int line = ((int) (haxe.lang.Runtime.getField_f(pos, "lineNumber", true)) );
		//line 145 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		java.lang.String msg = hunit.Utils.safeToString(value);
		//line 147 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		printer.__hx_invoke1_o(0.0, ( ( ( ( ( ( "HUnit: " + file ) + ":" ) + line ) + ": " ) + msg ) + "\n" ));
	}
	
	
	public static void print(java.lang.Object value)
	{
		//line 169 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		java.lang.String str = haxe.root.Std.string(value);
		//line 170 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		java.lang.System.out.print(str);
	}
	
	
	public static java.lang.String buffer;
	
	public static void bufferedPrint(java.lang.String value, haxe.lang.Function printer)
	{
		//line 208 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		hunit.Utils.buffer += value;
		//line 209 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		if (( haxe.lang.StringExt.indexOf(hunit.Utils.buffer, "\n", null) >= 0 )) 
		{
			//line 210 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			haxe.root.Array<java.lang.String> lines = haxe.lang.StringExt.split(hunit.Utils.buffer, "\n");
			//line 211 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			{
				//line 211 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				int _g1 = 0;
				//line 211 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				int _g = ( lines.length - 1 );
				//line 211 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
				while (( _g1 < _g ))
				{
					//line 211 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					int i = _g1++;
					//line 212 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
					printer.__hx_invoke1_o(0.0, lines.__get(i));
				}
				
			}
			
			//line 214 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
			hunit.Utils.buffer = lines.__get(( lines.length - 1 ));
		}
		
	}
	
	
	public static haxe.root.Array<hunit.TestCase> filterCases(haxe.root.Array<hunit.TestCase> cases, haxe.root.Array<java.lang.String> excludes)
	{
		//line 225 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		return cases.filter(new hunit.Utils_filterCases_225__Fun(excludes));
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 55 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		return new hunit.Utils(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 55 "/home/alex/Work/HaXe/hunit/src/hunit/Utils.hx"
		return new hunit.Utils();
	}
	
	
}


