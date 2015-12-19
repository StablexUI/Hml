#ifndef INCLUDED_Metric
#define INCLUDED_Metric

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
HX_DECLARE_CLASS0(Metric)
HX_DECLARE_CLASS2(sx,widgets,Widget)


class HXCPP_CLASS_ATTRIBUTES  Metric_obj : public ::sx::widgets::Widget_obj{
	public:
		typedef ::sx::widgets::Widget_obj super;
		typedef Metric_obj OBJ_;
		Metric_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Metric")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Metric_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Metric_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Metric","\x50","\xfc","\xf6","\x3d"); }

		bool dips_initialized;
		::sx::widgets::Widget dips;
		bool pixels_initialized;
		::sx::widgets::Widget pixels;
		bool percents_initialized;
		::sx::widgets::Widget percents;
		virtual Void destroyHml( );
		Dynamic destroyHml_dyn();

		virtual ::sx::widgets::Widget set_dips( ::sx::widgets::Widget value);
		Dynamic set_dips_dyn();

		virtual ::sx::widgets::Widget get_dips( );
		Dynamic get_dips_dyn();

		virtual ::sx::widgets::Widget set_pixels( ::sx::widgets::Widget value);
		Dynamic set_pixels_dyn();

		virtual ::sx::widgets::Widget get_pixels( );
		Dynamic get_pixels_dyn();

		virtual ::sx::widgets::Widget set_percents( ::sx::widgets::Widget value);
		Dynamic set_percents_dyn();

		virtual ::sx::widgets::Widget get_percents( );
		Dynamic get_percents_dyn();

};


#endif /* INCLUDED_Metric */ 
