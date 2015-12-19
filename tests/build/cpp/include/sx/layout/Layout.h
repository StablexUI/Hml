#ifndef INCLUDED_sx_layout_Layout
#define INCLUDED_sx_layout_Layout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,layout,Layout)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS2(sx,widgets,Widget)
namespace sx{
namespace layout{


class HXCPP_CLASS_ATTRIBUTES  Layout_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Layout_obj OBJ_;
		Layout_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.layout.Layout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Layout_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Layout_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Layout","\xca","\x22","\x4d","\x8d"); }

		bool autoArrange;
		::sx::widgets::Widget __widget;
		virtual Void arrangeChildren( );
		Dynamic arrangeChildren_dyn();

		virtual Void usedBy( ::sx::widgets::Widget widget);
		Dynamic usedBy_dyn();

		virtual Void removed( );
		Dynamic removed_dyn();

		virtual bool __isChildArrangeable( ::sx::widgets::Widget child);
		Dynamic __isChildArrangeable_dyn();

		virtual Void __hookWidget( ::sx::widgets::Widget widget);
		Dynamic __hookWidget_dyn();

		virtual Void __releaseWidget( ::sx::widgets::Widget widget);
		Dynamic __releaseWidget_dyn();

		virtual Void __widgetInitialized( ::sx::widgets::Widget widget);
		Dynamic __widgetInitialized_dyn();

		virtual Void __childAdded( ::sx::widgets::Widget parent,::sx::widgets::Widget child);
		Dynamic __childAdded_dyn();

		virtual Void __childRemoved( ::sx::widgets::Widget parent,::sx::widgets::Widget child);
		Dynamic __childRemoved_dyn();

		virtual Void __widgetResized( ::sx::widgets::Widget widget,::sx::properties::metric::Size changed,::String previousUnits,Float previousValue);
		Dynamic __widgetResized_dyn();

};

} // end namespace sx
} // end namespace layout

#endif /* INCLUDED_sx_layout_Layout */ 
