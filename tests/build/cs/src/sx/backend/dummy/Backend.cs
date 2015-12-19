
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.backend.dummy {
	public class Backend : global::haxe.lang.HxObject, global::sx.backend.interfaces.IBackend {
		
		public Backend(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Backend(global::sx.widgets.Widget widget) {
			#line 23 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			global::sx.backend.dummy.Backend.__hx_ctor_sx_backend_dummy_Backend(this, widget);
		}
		#line default
		
		public static void __hx_ctor_sx_backend_dummy_Backend(global::sx.backend.dummy.Backend __temp_me126, global::sx.widgets.Widget widget) {
			#line 25 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			__temp_me126.__node = new global::sx.properties.displaylist.ArrayDisplayList(((global::sx.widgets.Widget) (widget) ));
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			return new global::sx.backend.dummy.Backend(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			return new global::sx.backend.dummy.Backend(((global::sx.widgets.Widget) (arr[0]) ));
		}
		#line default
		
		public global::sx.properties.displaylist.ArrayDisplayList __node;
		
		public virtual void addWidget(global::sx.widgets.Widget child) {
			#line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			global::sx.properties.displaylist.ArrayDisplayList _this = this.__node;
			#line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			global::sx.properties.displaylist.ArrayDisplayList child1 = child.backend.__node;
			#line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (( child1.parent != null )) {
				#line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				global::sx.properties.displaylist.ArrayDisplayList _this1 = child1.parent;
				#line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				if (( child1.parent == _this1 )) {
					#line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					_this1.children.@remove(child1);
					#line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					child1.parent = null;
					#line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					global::sx.properties.displaylist.ArrayDisplayList __temp_expr2 = child1;
				}
				else {
					#line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					global::sx.properties.displaylist.ArrayDisplayList __temp_expr1 = null;
				}
				
			}
			
			#line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			_this.children.push(child1);
			#line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			child1.parent = _this;
			#line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			global::sx.properties.displaylist.ArrayDisplayList __temp_expr3 = child1;
		}
		#line default
		
		public virtual void addWidgetAt(global::sx.widgets.Widget child, int index) {
			#line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			global::sx.properties.displaylist.ArrayDisplayList _this = this.__node;
			#line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			global::sx.properties.displaylist.ArrayDisplayList child1 = child.backend.__node;
			#line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (( child1.parent != null )) {
				#line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				global::sx.properties.displaylist.ArrayDisplayList _this1 = child1.parent;
				#line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				if (( child1.parent == _this1 )) {
					#line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					_this1.children.@remove(child1);
					#line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					child1.parent = null;
					#line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					global::sx.properties.displaylist.ArrayDisplayList __temp_expr2 = child1;
				}
				else {
					#line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					global::sx.properties.displaylist.ArrayDisplayList __temp_expr1 = null;
				}
				
			}
			
			#line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			_this.children.insert(index, child1);
			#line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			child1.parent = _this;
			#line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			global::sx.properties.displaylist.ArrayDisplayList __temp_expr3 = child1;
		}
		#line default
		
		public virtual void removeWidget(global::sx.widgets.Widget child) {
			#line 56 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			global::sx.properties.displaylist.ArrayDisplayList _this = this.__node;
			#line 56 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			global::sx.properties.displaylist.ArrayDisplayList child1 = child.backend.__node;
			#line 56 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (( child1.parent == _this )) {
				#line 56 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				_this.children.@remove(child1);
				#line 56 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				child1.parent = null;
				#line 56 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				global::sx.properties.displaylist.ArrayDisplayList __temp_expr2 = child1;
			}
			else {
				#line 56 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				global::sx.properties.displaylist.ArrayDisplayList __temp_expr1 = null;
			}
			
		}
		#line default
		
		public virtual global::sx.widgets.Widget removeWidgetAt(int index) {
			unchecked {
				#line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				global::sx.properties.displaylist.ArrayDisplayList removed = null;
				#line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				{
					#line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					global::sx.properties.displaylist.ArrayDisplayList _this = this.__node;
					#line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					int index1 = index;
					#line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (( index1 < 0 )) {
						#line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						index1 = ( _this.children.length + index1 );
					}
					
					#line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (( ( index1 < 0 ) || ( index1 >= _this.children.length ) )) {
						#line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						removed = null;
					}
					else {
						#line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						global::sx.properties.displaylist.ArrayDisplayList removed1 = ((global::sx.properties.displaylist.ArrayDisplayList) (_this.children.splice(index1, 1)[0]) );
						#line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						removed1.parent = null;
						#line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						removed = removed1;
					}
					
				}
				
				#line 71 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				if (( removed == null )) {
					#line 71 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					return null;
				}
				else {
					#line 71 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					return removed.widget;
				}
				
			}
			#line default
		}
		
		
		public virtual int getWidgetIndex(global::sx.widgets.Widget child) {
			unchecked {
				#line 80 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				{
					#line 80 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					int index = this.__node.children.indexOf(child.backend.__node, default(global::haxe.lang.Null<int>));
					#line 80 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (( index < 0 )) {
						#line 80 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.NotChildException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"getChildIndex", "sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx"}, new int[]{1981972957}, new double[]{((double) (166) )})));
					}
					
					#line 80 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					return index;
				}
				
			}
			#line default
		}
		
		
		public virtual int setWidgetIndex(global::sx.widgets.Widget child, int index) {
			unchecked {
				#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				{
					#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					global::sx.properties.displaylist.ArrayDisplayList _this = this.__node;
					#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					global::sx.properties.displaylist.ArrayDisplayList child1 = child.backend.__node;
					#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					int index1 = index;
					#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					int currentIndex = _this.children.indexOf(child1, default(global::haxe.lang.Null<int>));
					#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (( currentIndex < 0 )) {
						#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.NotChildException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"setChildIndex", "sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx"}, new int[]{1981972957}, new double[]{((double) (186) )})));
					}
					
					#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (( index1 < 0 )) {
						#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						index1 = ( _this.children.length + index1 );
					}
					
					#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (( index1 < 0 )) {
						#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						index1 = 0;
					}
					else if (( index1 >= _this.children.length )) {
						#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						index1 = ( _this.children.length - 1 );
					}
					
					#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (( index1 != currentIndex )) {
						#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						_this.children.@remove(child1);
						#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						_this.children.insert(index1, child1);
						#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return index1;
					}
					else {
						#line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return currentIndex;
					}
					
				}
				
			}
			#line default
		}
		
		
		public virtual global::sx.widgets.Widget getWidgetAt(int index) {
			#line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			global::sx.properties.displaylist.ArrayDisplayList childNode = null;
			#line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			{
				#line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				global::sx.properties.displaylist.ArrayDisplayList _this = this.__node;
				#line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				int index1 = index;
				#line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				if (( index1 < 0 )) {
					#line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					index1 = ( _this.children.length + index1 );
				}
				
				#line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				if (( ( index1 < 0 ) || ( index1 >= _this.children.length ) )) {
					#line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					childNode = null;
				}
				else {
					#line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					childNode = ((global::sx.properties.displaylist.ArrayDisplayList) (_this.children[index1]) );
				}
				
			}
			
			#line 110 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (( childNode == null )) {
				#line 110 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				return null;
			}
			else {
				#line 110 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				return childNode.widget;
			}
			
		}
		#line default
		
		public virtual void swapWidgets(global::sx.widgets.Widget child1, global::sx.widgets.Widget child2) {
			unchecked {
				#line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				global::sx.properties.displaylist.ArrayDisplayList _this = this.__node;
				#line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				global::sx.properties.displaylist.ArrayDisplayList child11 = child1.backend.__node;
				#line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				global::sx.properties.displaylist.ArrayDisplayList child21 = child2.backend.__node;
				#line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				int index1 = _this.children.indexOf(child11, default(global::haxe.lang.Null<int>));
				#line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				int index2 = _this.children.indexOf(child21, default(global::haxe.lang.Null<int>));
				#line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				if (( ( index1 < 0 ) || ( index2 < 0 ) )) {
					#line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.NotChildException(null, new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"swapChildren", "sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx"}, new int[]{1981972957}, new double[]{((double) (235) )})));
				}
				
				#line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				_this.children[index1] = child21;
				#line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				_this.children[index2] = child11;
			}
			#line default
		}
		
		
		public virtual void swapWidgetsAt(int index1, int index2) {
			unchecked {
				#line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				global::sx.properties.displaylist.ArrayDisplayList _this = this.__node;
				#line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				int index11 = index1;
				#line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				int index21 = index2;
				#line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				if (( index11 < 0 )) {
					#line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					index11 = ( _this.children.length + index11 );
				}
				
				#line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				if (( index21 < 0 )) {
					#line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					index21 = ( _this.children.length + index21 );
				}
				
				#line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				if (( ( ( ( index11 < 0 ) || ( index11 >= _this.children.length ) ) || ( index21 < 0 ) ) || ( index21 > _this.children.length ) )) {
					#line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.OutOfBoundsException("Provided index does not exist in display list of this widget.", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"swapChildrenAt", "sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx"}, new int[]{1981972957}, new double[]{((double) (255) )})));
				}
				
				#line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				global::sx.properties.displaylist.ArrayDisplayList child = ((global::sx.properties.displaylist.ArrayDisplayList) (_this.children[index11]) );
				#line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				_this.children[index11] = ((global::sx.properties.displaylist.ArrayDisplayList) (_this.children[index21]) );
				#line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				_this.children[index21] = child;
			}
			#line default
		}
		
		
		public virtual global::sx.backend.dummy.Point widgetGlobalToLocal(global::sx.backend.dummy.Point point) {
			#line 139 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			return new global::sx.backend.dummy.Point(default(global::haxe.lang.Null<double>), default(global::haxe.lang.Null<double>));
		}
		#line default
		
		public virtual global::sx.backend.dummy.Point widgetLocalToGlobal(global::sx.backend.dummy.Point point) {
			#line 148 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			return new global::sx.backend.dummy.Point(default(global::haxe.lang.Null<double>), default(global::haxe.lang.Null<double>));
		}
		#line default
		
		public virtual void widgetOriginChanged() {
		}
		
		
		public virtual void widgetOffsetChanged() {
		}
		
		
		public virtual void widgetResized() {
		}
		
		
		public virtual void widgetMoved() {
		}
		
		
		public virtual void widgetRotated() {
		}
		
		
		public virtual void widgetScaledX() {
		}
		
		
		public virtual void widgetScaledY() {
		}
		
		
		public virtual void widgetAlphaChanged() {
		}
		
		
		public virtual void widgetVisibilityChanged() {
		}
		
		
		public virtual void widgetOverflowChanged() {
		}
		
		
		public virtual void widgetSkinChanged() {
		}
		
		
		public virtual void widgetDisposed() {
			#line 255 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			this.__node = null;
		}
		#line default
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				switch (hash) {
					case 2013424930:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.__node = ((global::sx.properties.displaylist.ArrayDisplayList) (@value) );
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return @value;
					}
					
					
					default:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				switch (hash) {
					case 384031433:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "widgetDisposed", 384031433)) );
					}
					
					
					case 1104769683:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "widgetSkinChanged", 1104769683)) );
					}
					
					
					case 38499950:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "widgetOverflowChanged", 38499950)) );
					}
					
					
					case 525499614:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "widgetVisibilityChanged", 525499614)) );
					}
					
					
					case 342854426:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "widgetAlphaChanged", 342854426)) );
					}
					
					
					case 1867060507:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "widgetScaledY", 1867060507)) );
					}
					
					
					case 1867060506:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "widgetScaledX", 1867060506)) );
					}
					
					
					case 2069824069:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "widgetRotated", 2069824069)) );
					}
					
					
					case 410576335:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "widgetMoved", 410576335)) );
					}
					
					
					case 1840583820:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "widgetResized", 1840583820)) );
					}
					
					
					case 1584840509:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "widgetOffsetChanged", 1584840509)) );
					}
					
					
					case 1730444618:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "widgetOriginChanged", 1730444618)) );
					}
					
					
					case 1029396325:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "widgetLocalToGlobal", 1029396325)) );
					}
					
					
					case 1629381737:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "widgetGlobalToLocal", 1629381737)) );
					}
					
					
					case 1638681071:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "swapWidgetsAt", 1638681071)) );
					}
					
					
					case 801825244:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "swapWidgets", 801825244)) );
					}
					
					
					case 1472537741:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getWidgetAt", 1472537741)) );
					}
					
					
					case 1910894636:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "setWidgetIndex", 1910894636)) );
					}
					
					
					case 1371932600:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getWidgetIndex", 1371932600)) );
					}
					
					
					case 2082971195:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "removeWidgetAt", 2082971195)) );
					}
					
					
					case 991972136:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "removeWidget", 991972136)) );
					}
					
					
					case 1663932696:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "addWidgetAt", 1663932696)) );
					}
					
					
					case 68609221:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "addWidget", 68609221)) );
					}
					
					
					case 2013424930:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return this.__node;
					}
					
					
					default:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				switch (hash) {
					case 384031433:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetDisposed();
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 1104769683:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetSkinChanged();
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 38499950:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetOverflowChanged();
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 525499614:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetVisibilityChanged();
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 342854426:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetAlphaChanged();
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 1867060507:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetScaledY();
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 1867060506:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetScaledX();
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 2069824069:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetRotated();
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 410576335:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetMoved();
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 1840583820:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetResized();
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 1584840509:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetOffsetChanged();
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 1730444618:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetOriginChanged();
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 1029396325:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return this.widgetLocalToGlobal(((global::sx.backend.dummy.Point) (dynargs[0]) ));
					}
					
					
					case 1629381737:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return this.widgetGlobalToLocal(((global::sx.backend.dummy.Point) (dynargs[0]) ));
					}
					
					
					case 1638681071:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.swapWidgetsAt(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ), ((int) (global::haxe.lang.Runtime.toInt(dynargs[1])) ));
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 801825244:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.swapWidgets(((global::sx.widgets.Widget) (dynargs[0]) ), ((global::sx.widgets.Widget) (dynargs[1]) ));
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 1472537741:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return this.getWidgetAt(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
					}
					
					
					case 1910894636:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return this.setWidgetIndex(((global::sx.widgets.Widget) (dynargs[0]) ), ((int) (global::haxe.lang.Runtime.toInt(dynargs[1])) ));
					}
					
					
					case 1371932600:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return this.getWidgetIndex(((global::sx.widgets.Widget) (dynargs[0]) ));
					}
					
					
					case 2082971195:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return this.removeWidgetAt(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
					}
					
					
					case 991972136:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.removeWidget(((global::sx.widgets.Widget) (dynargs[0]) ));
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 1663932696:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.addWidgetAt(((global::sx.widgets.Widget) (dynargs[0]) ), ((int) (global::haxe.lang.Runtime.toInt(dynargs[1])) ));
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					case 68609221:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.addWidget(((global::sx.widgets.Widget) (dynargs[0]) ));
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						break;
					}
					
					
					default:
					{
						#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			baseArr.push("__node");
			#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			{
				#line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


