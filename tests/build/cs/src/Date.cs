
#pragma warning disable 109, 114, 219, 429, 168, 162
public class Date : global::haxe.lang.HxObject {
	
	public Date(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public Date(int year, int month, int day, int hour, int min, int sec) {
		#line 34 "/usr/lib/haxe/std/cs/_std/Date.hx"
		global::Date.__hx_ctor__Date(this, year, month, day, hour, min, sec);
	}
	#line default
	
	public static void __hx_ctor__Date(global::Date __temp_me14, int year, int month, int day, int hour, int min, int sec) {
		unchecked {
			#line 36 "/usr/lib/haxe/std/cs/_std/Date.hx"
			if (( day <= 0 )) {
				#line 36 "/usr/lib/haxe/std/cs/_std/Date.hx"
				day = 1;
			}
			
			#line 37 "/usr/lib/haxe/std/cs/_std/Date.hx"
			if (( year <= 0 )) {
				#line 37 "/usr/lib/haxe/std/cs/_std/Date.hx"
				year = 1;
			}
			
			#line 38 "/usr/lib/haxe/std/cs/_std/Date.hx"
			__temp_me14.date = new global::System.DateTime(year, ( month + 1 ), day, hour, min, sec);
		}
		#line default
	}
	
	
	public static global::Date now() {
		#line 98 "/usr/lib/haxe/std/cs/_std/Date.hx"
		global::Date d = new global::Date(0, 0, 0, 0, 0, 0);
		d.date = global::System.DateTime.Now;
		return d;
	}
	#line default
	
	public static new object __hx_createEmpty() {
		#line 30 "/usr/lib/haxe/std/cs/_std/Date.hx"
		return new global::Date(global::haxe.lang.EmptyObject.EMPTY);
	}
	#line default
	
	public static new object __hx_create(global::Array arr) {
		unchecked {
			#line 30 "/usr/lib/haxe/std/cs/_std/Date.hx"
			return new global::Date(((int) (global::haxe.lang.Runtime.toInt(arr[0])) ), ((int) (global::haxe.lang.Runtime.toInt(arr[1])) ), ((int) (global::haxe.lang.Runtime.toInt(arr[2])) ), ((int) (global::haxe.lang.Runtime.toInt(arr[3])) ), ((int) (global::haxe.lang.Runtime.toInt(arr[4])) ), ((int) (global::haxe.lang.Runtime.toInt(arr[5])) ));
		}
		#line default
	}
	
	
	public global::System.DateTime date;
	
	public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
		unchecked {
			#line 30 "/usr/lib/haxe/std/cs/_std/Date.hx"
			switch (hash) {
				case 1113806382:
				{
					#line 30 "/usr/lib/haxe/std/cs/_std/Date.hx"
					this.date = ((global::System.DateTime) (@value) );
					#line 30 "/usr/lib/haxe/std/cs/_std/Date.hx"
					return @value;
				}
				
				
				default:
				{
					#line 30 "/usr/lib/haxe/std/cs/_std/Date.hx"
					return base.__hx_setField(field, hash, @value, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
		unchecked {
			#line 30 "/usr/lib/haxe/std/cs/_std/Date.hx"
			switch (hash) {
				case 1113806382:
				{
					#line 30 "/usr/lib/haxe/std/cs/_std/Date.hx"
					return this.date;
				}
				
				
				default:
				{
					#line 30 "/usr/lib/haxe/std/cs/_std/Date.hx"
					return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
				}
				
			}
			
		}
		#line default
	}
	
	
	public override void __hx_getFields(global::Array<object> baseArr) {
		#line 30 "/usr/lib/haxe/std/cs/_std/Date.hx"
		baseArr.push("date");
		#line 30 "/usr/lib/haxe/std/cs/_std/Date.hx"
		{
			#line 30 "/usr/lib/haxe/std/cs/_std/Date.hx"
			base.__hx_getFields(baseArr);
		}
		
	}
	#line default
	
}


