
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.tools {
	public class OrientationTools : global::haxe.lang.HxObject {
		
		public OrientationTools(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public OrientationTools() {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			global::sx.tools.OrientationTools.__hx_ctor_sx_tools_OrientationTools(this);
		}
		#line default
		
		public static void __hx_ctor_sx_tools_OrientationTools(global::sx.tools.OrientationTools __temp_me165) {
		}
		
		
		public static string opposite(string orientation) {
			#line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			switch (orientation) {
				case "vertical":
				{
					#line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return ((string) ("horizontal") );
				}
				
				
				case "horizontal":
				{
					#line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return ((string) ("vertical") );
				}
				
				
			}
			
			#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			return null;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			return new global::sx.tools.OrientationTools(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			return new global::sx.tools.OrientationTools();
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.tools {
	public class SizeTools : global::haxe.lang.HxObject {
		
		public SizeTools(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public SizeTools() {
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			global::sx.tools.SizeTools.__hx_ctor_sx_tools_SizeTools(this);
		}
		#line default
		
		public static void __hx_ctor_sx_tools_SizeTools(global::sx.tools.SizeTools __temp_me166) {
		}
		
		
		public static bool isZero(global::sx.properties.metric.Size size) {
			#line 45 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			return ( size.__value == 0 );
		}
		#line default
		
		public static bool notZero(global::sx.properties.metric.Size size) {
			#line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			return ( size.__value != 0 );
		}
		#line default
		
		public static double @get(global::sx.properties.metric.Size size, string units) {
			#line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			switch (units) {
				case "dip":
				{
					#line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return size.get_dip();
				}
				
				
				case "px":
				{
					#line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return size.get_px();
				}
				
				
				case "pct":
				{
					#line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return size.get_pct();
				}
				
				
			}
			
			#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			return default(double);
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			return new global::sx.tools.SizeTools(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			return new global::sx.tools.SizeTools();
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.tools {
	public class PaddingTools : global::haxe.lang.HxObject {
		
		public PaddingTools(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public PaddingTools() {
			#line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			global::sx.tools.PaddingTools.__hx_ctor_sx_tools_PaddingTools(this);
		}
		#line default
		
		public static void __hx_ctor_sx_tools_PaddingTools(global::sx.tools.PaddingTools __temp_me167) {
		}
		
		
		public static double sumDip(global::sx.properties.metric.Padding padding, string orientation) {
			#line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			switch (orientation) {
				case "horizontal":
				{
					#line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return ( padding.get_left().get_dip() + padding.get_right().get_dip() );
				}
				
				
				case "vertical":
				{
					#line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return ( padding.get_top().get_dip() + padding.get_bottom().get_dip() );
				}
				
				
			}
			
			#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			return default(double);
		}
		#line default
		
		public static double sumPx(global::sx.properties.metric.Padding padding, string orientation) {
			#line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			switch (orientation) {
				case "horizontal":
				{
					#line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return ( padding.get_left().get_px() + padding.get_right().get_px() );
				}
				
				
				case "vertical":
				{
					#line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return ( padding.get_top().get_px() + padding.get_bottom().get_px() );
				}
				
				
			}
			
			#line 98 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			return default(double);
		}
		#line default
		
		public static global::sx.properties.metric.Size side(global::sx.properties.metric.Padding padding, string side) {
			#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			switch (side) {
				case "left":
				{
					#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return padding.get_left();
				}
				
				
				case "right":
				{
					#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return padding.get_right();
				}
				
				
				case "top":
				{
					#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return padding.get_top();
				}
				
				
				case "bottom":
				{
					#line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return padding.get_bottom();
				}
				
				
			}
			
			#line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			return null;
		}
		#line default
		
		public static global::sx.properties.metric.Size oppositeSide(global::sx.properties.metric.Padding padding, string side) {
			#line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			switch (side) {
				case "left":
				{
					#line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return padding.get_right();
				}
				
				
				case "right":
				{
					#line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return padding.get_left();
				}
				
				
				case "top":
				{
					#line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return padding.get_bottom();
				}
				
				
				case "bottom":
				{
					#line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
					return padding.get_top();
				}
				
				
			}
			
			#line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			return null;
		}
		#line default
		
		public static bool isZero(global::sx.properties.metric.Padding padding) {
			#line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			bool leftZero = ( ((global::sx.properties.metric.Size) (padding.get_left()) ).__value == 0 );
			bool rightZero = ( ((global::sx.properties.metric.Size) (padding.get_right()) ).__value == 0 );
			bool topZero = ( ((global::sx.properties.metric.Size) (padding.get_top()) ).__value == 0 );
			bool bottomZero = ( ((global::sx.properties.metric.Size) (padding.get_bottom()) ).__value == 0 );
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			return ( ( ( leftZero && rightZero ) && topZero ) && bottomZero );
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			return new global::sx.tools.PaddingTools(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx"
			return new global::sx.tools.PaddingTools();
		}
		#line default
		
	}
}


