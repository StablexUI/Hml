#ifndef INCLUDED_sx_properties_metric_Offset
#define INCLUDED_sx_properties_metric_Offset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(sx,properties,metric,Coordinate)
HX_DECLARE_CLASS3(sx,properties,metric,Offset)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS2(sx,signals,Signal)
namespace sx{
namespace properties{
namespace metric{


class HXCPP_CLASS_ATTRIBUTES  Offset_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Offset_obj OBJ_;
		Offset_obj();
		Void __construct(Dynamic widthProvider,Dynamic heightProvider);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.properties.metric.Offset")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Offset_obj > __new(Dynamic widthProvider,Dynamic heightProvider);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Offset_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Offset","\xb3","\x0b","\xd4","\x94"); }

		::sx::properties::metric::Coordinate __left;
		::sx::properties::metric::Coordinate __right;
		::sx::properties::metric::Coordinate __top;
		::sx::properties::metric::Coordinate __bottom;
		::sx::signals::Signal onChange;
		bool __silentChanges;
		virtual Void set( Float x,Float y);
		Dynamic set_dyn();

		virtual Void __changed( ::sx::properties::metric::Size property,::String previousUnits,Float previousValue);
		Dynamic __changed_dyn();

		virtual ::sx::properties::metric::Coordinate get_left( );
		Dynamic get_left_dyn();

		virtual ::sx::properties::metric::Coordinate get_right( );
		Dynamic get_right_dyn();

		virtual ::sx::properties::metric::Coordinate get_top( );
		Dynamic get_top_dyn();

		virtual ::sx::properties::metric::Coordinate get_bottom( );
		Dynamic get_bottom_dyn();

		virtual ::sx::properties::metric::Coordinate set_left( ::sx::properties::metric::Size v);
		Dynamic set_left_dyn();

		virtual ::sx::properties::metric::Coordinate set_right( ::sx::properties::metric::Size v);
		Dynamic set_right_dyn();

		virtual ::sx::properties::metric::Coordinate set_top( ::sx::properties::metric::Size v);
		Dynamic set_top_dyn();

		virtual ::sx::properties::metric::Coordinate set_bottom( ::sx::properties::metric::Size v);
		Dynamic set_bottom_dyn();

};

} // end namespace sx
} // end namespace properties
} // end namespace metric

#endif /* INCLUDED_sx_properties_metric_Offset */ 
