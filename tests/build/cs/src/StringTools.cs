
#pragma warning disable 109, 114, 219, 429, 168, 162
public class StringTools : global::haxe.lang.HxObject {
	
	public StringTools(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public StringTools() {
		#line 32 "/usr/lib/haxe/std/StringTools.hx"
		global::StringTools.__hx_ctor__StringTools(this);
	}
	#line default
	
	public static void __hx_ctor__StringTools(global::StringTools __temp_me27) {
	}
	
	
	public static string htmlEscape(string s, global::haxe.lang.Null<bool> quotes) {
		#line 98 "/usr/lib/haxe/std/StringTools.hx"
		s = global::haxe.lang.StringExt.split(global::haxe.lang.StringExt.split(global::haxe.lang.StringExt.split(s, "&").@join("&amp;"), "<").@join("&lt;"), ">").@join("&gt;");
		if (((quotes)).@value) {
			#line 99 "/usr/lib/haxe/std/StringTools.hx"
			return global::haxe.lang.StringExt.split(global::haxe.lang.StringExt.split(s, "\"").@join("&quot;"), "\'").@join("&#039;");
		}
		else {
			#line 99 "/usr/lib/haxe/std/StringTools.hx"
			return s;
		}
		
	}
	#line default
	
	public static string replace(string s, string sub, string @by) {
		#line 319 "/usr/lib/haxe/std/StringTools.hx"
		if (( sub.Length == 0 )) {
			#line 320 "/usr/lib/haxe/std/StringTools.hx"
			return global::haxe.lang.StringExt.split(s, sub).@join(@by);
		}
		else {
			#line 322 "/usr/lib/haxe/std/StringTools.hx"
			return s.Replace(sub, @by);
		}
		
	}
	#line default
	
	public static new object __hx_createEmpty() {
		#line 32 "/usr/lib/haxe/std/StringTools.hx"
		return new global::StringTools(global::haxe.lang.EmptyObject.EMPTY);
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		#line 32 "/usr/lib/haxe/std/StringTools.hx"
		return new global::StringTools();
	}
	#line default
	
}


