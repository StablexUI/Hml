#ifndef INCLUDED_sx_tools_WidgetTools
#define INCLUDED_sx_tools_WidgetTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(sx,properties,metric,Coordinate)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS2(sx,tools,WidgetTools)
HX_DECLARE_CLASS2(sx,widgets,Widget)
namespace sx{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  WidgetTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WidgetTools_obj OBJ_;
		WidgetTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.tools.WidgetTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WidgetTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WidgetTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WidgetTools","\x97","\x43","\x74","\x84"); }

		static bool sizeDependsOnParent( ::sx::widgets::Widget widget);
		static Dynamic sizeDependsOnParent_dyn();

		static bool positionDependsOnParent( ::sx::widgets::Widget widget);
		static Dynamic positionDependsOnParent_dyn();

		static bool positionDependsOnSize( ::sx::widgets::Widget widget);
		static Dynamic positionDependsOnSize_dyn();

		static ::sx::properties::metric::Coordinate coordinate( ::sx::widgets::Widget widget,::String side);
		static Dynamic coordinate_dyn();

		static ::sx::properties::metric::Coordinate selectedCoordinate( ::sx::widgets::Widget widget,::String orientation);
		static Dynamic selectedCoordinate_dyn();

		static ::String selectedSide( ::sx::widgets::Widget widget,::String orientation);
		static Dynamic selectedSide_dyn();

		static ::sx::properties::metric::Size size( ::sx::widgets::Widget widget,::String orientation);
		static Dynamic size_dyn();

		static ::sx::widgets::Widget findEnabled( ::sx::widgets::Widget widget);
		static Dynamic findEnabled_dyn();

		static bool hasOrigin( ::sx::widgets::Widget widget);
		static Dynamic hasOrigin_dyn();

		static bool hasOffset( ::sx::widgets::Widget widget);
		static Dynamic hasOffset_dyn();

		static bool isArrangeable( ::sx::widgets::Widget widget);
		static Dynamic isArrangeable_dyn();

};

} // end namespace sx
} // end namespace tools

#endif /* INCLUDED_sx_tools_WidgetTools */ 
