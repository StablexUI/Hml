
#pragma warning disable 109, 114, 219, 429, 168, 162
public class StringBuf : global::haxe.lang.HxObject {
	
	public StringBuf(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public StringBuf() {
		#line 31 "/usr/lib/haxe/std/cs/_std/StringBuf.hx"
		global::StringBuf.__hx_ctor__StringBuf(this);
	}
	#line default
	
	public static void __hx_ctor__StringBuf(global::StringBuf __temp_me26) {
		#line 32 "/usr/lib/haxe/std/cs/_std/StringBuf.hx"
		__temp_me26.b = new global::System.Text.StringBuilder();
	}
	#line default
	
	public static new object __hx_createEmpty() {
		#line 25 "/usr/lib/haxe/std/cs/_std/StringBuf.hx"
		return new global::StringBuf(global::haxe.lang.EmptyObject.EMPTY);
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		#line 25 "/usr/lib/haxe/std/cs/_std/StringBuf.hx"
		return new global::StringBuf();
	}
	#line default
	
	public global::System.Text.StringBuilder b;
	
	
	
	public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
		unchecked {
			#line 25 "/usr/lib/haxe/std/cs/_std/StringBuf.hx"
			switch (hash) {
				case 98:
				{
					#line 25 "/usr/lib/haxe/std/cs/_std/StringBuf.hx"
					this.b = ((global::System.Text.StringBuilder) (@value) );
					#line 25 "/usr/lib/haxe/std/cs/_std/StringBuf.hx"
					return @value;
				}
				
				
				default:
				{
					#line 25 "/usr/lib/haxe/std/cs/_std/StringBuf.hx"
					return base.__hx_setField(field, hash, @value, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
		unchecked {
			#line 25 "/usr/lib/haxe/std/cs/_std/StringBuf.hx"
			switch (hash) {
				case 98:
				{
					#line 25 "/usr/lib/haxe/std/cs/_std/StringBuf.hx"
					return this.b;
				}
				
				
				default:
				{
					#line 25 "/usr/lib/haxe/std/cs/_std/StringBuf.hx"
					return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override void __hx_getFields(global::Array<object> baseArr) {
		#line 25 "/usr/lib/haxe/std/cs/_std/StringBuf.hx"
		baseArr.push("length");
		#line 25 "/usr/lib/haxe/std/cs/_std/StringBuf.hx"
		baseArr.push("b");
		#line 25 "/usr/lib/haxe/std/cs/_std/StringBuf.hx"
		{
			#line 25 "/usr/lib/haxe/std/cs/_std/StringBuf.hx"
			base.__hx_getFields(baseArr);
		}
		
	}
	#line default
	
}


