
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.displaylist {
	public class ArrayDisplayList : global::haxe.lang.HxObject {
		
		public ArrayDisplayList(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public ArrayDisplayList(global::sx.widgets.Widget widget) {
			#line 29 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			global::sx.properties.displaylist.ArrayDisplayList.__hx_ctor_sx_properties_displaylist_ArrayDisplayList(this, widget);
		}
		#line default
		
		public static void __hx_ctor_sx_properties_displaylist_ArrayDisplayList(global::sx.properties.displaylist.ArrayDisplayList __temp_me159, global::sx.widgets.Widget widget) {
			#line 31 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			__temp_me159.widget = widget;
			__temp_me159.children = new global::Array<object>(new object[]{});
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			return new global::sx.properties.displaylist.ArrayDisplayList(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			return new global::sx.properties.displaylist.ArrayDisplayList(((global::sx.widgets.Widget) (arr[0]) ));
		}
		#line default
		
		public global::sx.widgets.Widget widget;
		
		public global::sx.properties.displaylist.ArrayDisplayList parent;
		
		
		
		public global::Array<object> children;
		
		public global::sx.properties.displaylist.ArrayDisplayList addChild(global::sx.properties.displaylist.ArrayDisplayList child) {
			#line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			if (( child.parent != null )) {
				#line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				global::sx.properties.displaylist.ArrayDisplayList _this = child.parent;
				#line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				if (( child.parent == _this )) {
					#line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					_this.children.@remove(child);
					#line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					child.parent = null;
					#line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					global::sx.properties.displaylist.ArrayDisplayList __temp_expr2 = child;
				}
				else {
					#line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					global::sx.properties.displaylist.ArrayDisplayList __temp_expr1 = null;
				}
				
			}
			
			#line 45 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			this.children.push(child);
			child.parent = this;
			#line 48 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			return child;
		}
		#line default
		
		public global::sx.properties.displaylist.ArrayDisplayList addChildAt(global::sx.properties.displaylist.ArrayDisplayList child, int index) {
			#line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			if (( child.parent != null )) {
				#line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				global::sx.properties.displaylist.ArrayDisplayList _this = child.parent;
				#line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				if (( child.parent == _this )) {
					#line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					_this.children.@remove(child);
					#line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					child.parent = null;
					#line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					global::sx.properties.displaylist.ArrayDisplayList __temp_expr2 = child;
				}
				else {
					#line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					global::sx.properties.displaylist.ArrayDisplayList __temp_expr1 = null;
				}
				
			}
			
			#line 65 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			this.children.insert(index, child);
			child.parent = this;
			#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			return child;
		}
		#line default
		
		public global::sx.properties.displaylist.ArrayDisplayList removeChild(global::sx.properties.displaylist.ArrayDisplayList child) {
			#line 80 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			if (( child.parent == this )) {
				#line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				this.children.@remove(child);
				child.parent = null;
				#line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				return child;
			}
			else {
				#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				return null;
			}
			
		}
		#line default
		
		public global::sx.properties.displaylist.ArrayDisplayList removeChildAt(int index) {
			unchecked {
				#line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				if (( index < 0 )) {
					#line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					index = ( this.children.length + index );
				}
				
				#line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				if (( ( index < 0 ) || ( index >= this.children.length ) )) {
					#line 104 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					return null;
				}
				else {
					#line 107 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					global::sx.properties.displaylist.ArrayDisplayList removed = ((global::sx.properties.displaylist.ArrayDisplayList) (this.children.splice(index, 1)[0]) );
					removed.parent = null;
					#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					return removed;
				}
				
			}
			#line default
		}
		
		
		public int removeChildren(global::haxe.lang.Null<int> beginIndex, global::haxe.lang.Null<int> endIndex) {
			unchecked {
				#line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				int __temp_endIndex158 = ( ( ! (endIndex.hasValue) ) ? (-1) : ((endIndex).@value) );
				#line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				int __temp_beginIndex157 = ( ( ! (beginIndex.hasValue) ) ? (0) : ((beginIndex).@value) );
				if (( __temp_beginIndex157 < 0 )) {
					#line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					__temp_beginIndex157 = ( this.children.length + __temp_beginIndex157 );
				}
				
				#line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				if (( __temp_beginIndex157 < 0 )) {
					#line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					__temp_beginIndex157 = 0;
				}
				
				#line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				if (( __temp_endIndex158 < 0 )) {
					#line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					__temp_endIndex158 = ( this.children.length + __temp_endIndex158 );
				}
				
				#line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				if (( ( __temp_beginIndex157 >= this.children.length ) || ( __temp_endIndex158 < __temp_beginIndex157 ) )) {
					#line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					return 0;
				}
				
				#line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				global::Array<object> removed = this.children.splice(__temp_beginIndex157, ( ( __temp_endIndex158 - __temp_beginIndex157 ) + 1 ));
				{
					#line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					int _g = 0;
					#line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					while (( _g < removed.length )) {
						#line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						global::sx.properties.displaylist.ArrayDisplayList node = ((global::sx.properties.displaylist.ArrayDisplayList) (removed[_g]) );
						#line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						 ++ _g;
						node.parent = null;
					}
					
				}
				
				#line 135 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				return removed.length;
			}
			#line default
		}
		
		
		public bool contains(global::sx.properties.displaylist.ArrayDisplayList child) {
			#line 144 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			bool found = false;
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			while (( child != null )) {
				#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				if (( child == this )) {
					#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					found = true;
					break;
				}
				
				#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				child = child.parent;
			}
			
			#line 154 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			return found;
		}
		#line default
		
		public int getChildIndex(global::sx.properties.displaylist.ArrayDisplayList child) {
			unchecked {
				#line 165 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				int index = this.children.indexOf(child, default(global::haxe.lang.Null<int>));
				if (( index < 0 )) {
					#line 166 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.NotChildException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"getChildIndex", "sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx"}, new int[]{1981972957}, new double[]{((double) (166) )})));
				}
				
				#line 168 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				return index;
			}
			#line default
		}
		
		
		public int setChildIndex(global::sx.properties.displaylist.ArrayDisplayList child, int index) {
			unchecked {
				#line 185 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				int currentIndex = this.children.indexOf(child, default(global::haxe.lang.Null<int>));
				if (( currentIndex < 0 )) {
					#line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.NotChildException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"setChildIndex", "sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx"}, new int[]{1981972957}, new double[]{((double) (186) )})));
				}
				
				#line 188 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				if (( index < 0 )) {
					#line 188 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					index = ( this.children.length + index );
				}
				
				#line 189 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				if (( index < 0 )) {
					#line 190 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					index = 0;
				}
				else if (( index >= this.children.length )) {
					#line 192 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					index = ( this.children.length - 1 );
				}
				
				#line 195 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				if (( index != currentIndex )) {
					#line 196 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					this.children.@remove(child);
					this.children.insert(index, child);
					#line 199 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					return index;
				}
				else {
					#line 201 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					return currentIndex;
				}
				
			}
			#line default
		}
		
		
		public global::sx.properties.displaylist.ArrayDisplayList getChildAt(int index) {
			#line 215 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			if (( index < 0 )) {
				#line 215 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				index = ( this.children.length + index );
			}
			
			#line 217 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			if (( ( index < 0 ) || ( index >= this.children.length ) )) {
				#line 218 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				return null;
			}
			else {
				#line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				return ((global::sx.properties.displaylist.ArrayDisplayList) (this.children[index]) );
			}
			
		}
		#line default
		
		public void swapChildren(global::sx.properties.displaylist.ArrayDisplayList child1, global::sx.properties.displaylist.ArrayDisplayList child2) {
			unchecked {
				#line 232 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				int index1 = this.children.indexOf(child1, default(global::haxe.lang.Null<int>));
				int index2 = this.children.indexOf(child2, default(global::haxe.lang.Null<int>));
				#line 235 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				if (( ( index1 < 0 ) || ( index2 < 0 ) )) {
					#line 235 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.NotChildException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"swapChildren", "sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx"}, new int[]{1981972957}, new double[]{((double) (235) )})));
				}
				
				#line 237 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				this.children[index1] = child2;
				this.children[index2] = child1;
			}
			#line default
		}
		
		
		public void swapChildrenAt(int index1, int index2) {
			unchecked {
				#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				if (( index1 < 0 )) {
					#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					index1 = ( this.children.length + index1 );
				}
				
				#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				if (( index2 < 0 )) {
					#line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					index2 = ( this.children.length + index2 );
				}
				
				#line 254 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				if (( ( ( ( index1 < 0 ) || ( index1 >= this.children.length ) ) || ( index2 < 0 ) ) || ( index2 > this.children.length ) )) {
					#line 255 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.OutOfBoundsException("Provided index does not exist in display list of this widget.", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"swapChildrenAt", "sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx"}, new int[]{1981972957}, new double[]{((double) (255) )})));
				}
				
				#line 258 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				global::sx.properties.displaylist.ArrayDisplayList child = ((global::sx.properties.displaylist.ArrayDisplayList) (this.children[index1]) );
				this.children[index1] = ((global::sx.properties.displaylist.ArrayDisplayList) (this.children[index2]) );
				this.children[index2] = child;
			}
			#line default
		}
		
		
		public int get_numChildren() {
			#line 265 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			return this.children.length;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				switch (hash) {
					case 1886001471:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						this.children = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return @value;
					}
					
					
					case 1836975402:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						this.parent = ((global::sx.properties.displaylist.ArrayDisplayList) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return @value;
					}
					
					
					case 1274195908:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						this.widget = ((global::sx.widgets.Widget) (@value) );
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return @value;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				switch (hash) {
					case 492970300:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_numChildren", 492970300)) );
					}
					
					
					case 334603397:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "swapChildrenAt", 334603397)) );
					}
					
					
					case 1616071410:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "swapChildren", 1616071410)) );
					}
					
					
					case 906889145:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getChildAt", 906889145)) );
					}
					
					
					case 2114472472:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setChildIndex", 2114472472)) );
					}
					
					
					case 956459020:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getChildIndex", 956459020)) );
					}
					
					
					case 746281503:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "contains", 746281503)) );
					}
					
					
					case 985683363:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "removeChildren", 985683363)) );
					}
					
					
					case 1063706059:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "removeChildAt", 1063706059)) );
					}
					
					
					case 1139639992:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "removeChild", 1139639992)) );
					}
					
					
					case 1312206222:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "addChildAt", 1312206222)) );
					}
					
					
					case 1058459579:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "addChild", 1058459579)) );
					}
					
					
					case 1886001471:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.children;
					}
					
					
					case 1551919525:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.get_numChildren();
					}
					
					
					case 1836975402:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.parent;
					}
					
					
					case 1274195908:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.widget;
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				switch (hash) {
					case 1551919525:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((double) (this.get_numChildren()) );
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				switch (hash) {
					case 492970300:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.get_numChildren();
					}
					
					
					case 334603397:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						this.swapChildrenAt(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ), ((int) (global::haxe.lang.Runtime.toInt(dynargs[1])) ));
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						break;
					}
					
					
					case 1616071410:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						this.swapChildren(((global::sx.properties.displaylist.ArrayDisplayList) (dynargs[0]) ), ((global::sx.properties.displaylist.ArrayDisplayList) (dynargs[1]) ));
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						break;
					}
					
					
					case 906889145:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.getChildAt(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
					}
					
					
					case 2114472472:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.setChildIndex(((global::sx.properties.displaylist.ArrayDisplayList) (dynargs[0]) ), ((int) (global::haxe.lang.Runtime.toInt(dynargs[1])) ));
					}
					
					
					case 956459020:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.getChildIndex(((global::sx.properties.displaylist.ArrayDisplayList) (dynargs[0]) ));
					}
					
					
					case 746281503:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.contains(((global::sx.properties.displaylist.ArrayDisplayList) (dynargs[0]) ));
					}
					
					
					case 985683363:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.removeChildren(global::haxe.lang.Null<object>.ofDynamic<int>(dynargs[0]), global::haxe.lang.Null<object>.ofDynamic<int>(dynargs[1]));
					}
					
					
					case 1063706059:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.removeChildAt(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
					}
					
					
					case 1139639992:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.removeChild(((global::sx.properties.displaylist.ArrayDisplayList) (dynargs[0]) ));
					}
					
					
					case 1312206222:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.addChildAt(((global::sx.properties.displaylist.ArrayDisplayList) (dynargs[0]) ), ((int) (global::haxe.lang.Runtime.toInt(dynargs[1])) ));
					}
					
					
					case 1058459579:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.addChild(((global::sx.properties.displaylist.ArrayDisplayList) (dynargs[0]) ));
					}
					
					
					default:
					{
						#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			baseArr.push("children");
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			baseArr.push("numChildren");
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			baseArr.push("parent");
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			baseArr.push("widget");
			#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			{
				#line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


