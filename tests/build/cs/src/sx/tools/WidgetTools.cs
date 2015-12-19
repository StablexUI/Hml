
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.tools {
	public class WidgetTools : global::haxe.lang.HxObject {
		
		public WidgetTools(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public WidgetTools() {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			global::sx.tools.WidgetTools.__hx_ctor_sx_tools_WidgetTools(this);
		}
		#line default
		
		public static void __hx_ctor_sx_tools_WidgetTools(global::sx.tools.WidgetTools __temp_me168) {
		}
		
		
		public static bool sizeDependsOnParent(global::sx.widgets.Widget widget) {
			#line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return ( string.Equals(widget.get_width().units, ((string) ("pct") )) || string.Equals(widget.get_height().units, ((string) ("pct") )) );
		}
		#line default
		
		public static bool positionDependsOnParent(global::sx.widgets.Widget widget) {
			#line 32 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			global::sx.properties.metric.Coordinate left = widget.get_left();
			if (( left.selected && string.Equals(left.units, ((string) ("pct") )) )) {
				#line 33 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
				return true;
			}
			
			#line 34 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			if (widget.get_right().selected) {
				#line 34 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
				return true;
			}
			
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			global::sx.properties.metric.Coordinate top = widget.get_top();
			if (( top.selected && string.Equals(top.units, ((string) ("pct") )) )) {
				#line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
				return true;
			}
			
			#line 38 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			if (widget.get_bottom().selected) {
				#line 38 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
				return true;
			}
			
			#line 40 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return false;
		}
		#line default
		
		public static bool positionDependsOnSize(global::sx.widgets.Widget widget) {
			#line 49 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return ( widget.get_bottom().selected || widget.get_right().selected );
		}
		#line default
		
		public static global::sx.properties.metric.Coordinate coordinate(global::sx.widgets.Widget widget, string side) {
			#line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			switch (side) {
				case "left":
				{
					#line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					return widget.get_left();
				}
				
				
				case "right":
				{
					#line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					return widget.get_right();
				}
				
				
				case "top":
				{
					#line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					return widget.get_top();
				}
				
				
				case "bottom":
				{
					#line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					return widget.get_bottom();
				}
				
				
			}
			
			#line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return null;
		}
		#line default
		
		public static global::sx.properties.metric.Coordinate selectedCoordinate(global::sx.widgets.Widget widget, string orientation) {
			#line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			switch (orientation) {
				case "horizontal":
				{
					#line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					if (widget.get_left().selected) {
						#line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						return widget.get_left();
					}
					else {
						#line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						return widget.get_right();
					}
					
				}
				
				
				case "vertical":
				{
					#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					if (widget.get_top().selected) {
						#line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						return widget.get_top();
					}
					else {
						#line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						return widget.get_bottom();
					}
					
				}
				
				
			}
			
			#line 70 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return null;
		}
		#line default
		
		public static string selectedSide(global::sx.widgets.Widget widget, string orientation) {
			#line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			switch (orientation) {
				case "horizontal":
				{
					#line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					if (widget.get_left().selected) {
						#line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						return ((string) ("left") );
					}
					else {
						#line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						return ((string) ("right") );
					}
					
				}
				
				
				case "vertical":
				{
					#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					if (widget.get_top().selected) {
						#line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						return ((string) ("top") );
					}
					else {
						#line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						return ((string) ("bottom") );
					}
					
				}
				
				
			}
			
			#line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return null;
		}
		#line default
		
		public static global::sx.properties.metric.Size size(global::sx.widgets.Widget widget, string orientation) {
			#line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			switch (orientation) {
				case "horizontal":
				{
					#line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					return widget.get_width();
				}
				
				
				case "vertical":
				{
					#line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					return widget.get_height();
				}
				
				
			}
			
			#line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return null;
		}
		#line default
		
		public static global::sx.widgets.Widget findEnabled(global::sx.widgets.Widget widget) {
			#line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			global::sx.widgets.Widget current = widget;
			bool useNextEnabled = false;
			#line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			while (( current != null )) {
				#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
				if (useNextEnabled) {
					#line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					if (current.enabled) {
						#line 114 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
						widget = current;
						useNextEnabled = false;
						break;
					}
					
				}
				else if ( ! (current.enabled) ) {
					#line 120 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
					useNextEnabled = true;
				}
				
				#line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
				current = current.get_parent();
			}
			
			#line 127 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			if (useNextEnabled) {
				#line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
				widget = null;
			}
			
			#line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return widget;
		}
		#line default
		
		public static bool hasOrigin(global::sx.widgets.Widget widget) {
			#line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return ( widget.__origin != null );
		}
		#line default
		
		public static bool hasOffset(global::sx.widgets.Widget widget) {
			#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return ( widget.__offset != null );
		}
		#line default
		
		public static bool isArrangeable(global::sx.widgets.Widget widget) {
			#line 160 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return ( widget.arrangeable && widget.visible );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return new global::sx.tools.WidgetTools(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx"
			return new global::sx.tools.WidgetTools();
		}
		#line default
		
	}
}


