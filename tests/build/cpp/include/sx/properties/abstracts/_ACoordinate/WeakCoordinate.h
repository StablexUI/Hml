#ifndef INCLUDED_sx_properties_abstracts__ACoordinate_WeakCoordinate
#define INCLUDED_sx_properties_abstracts__ACoordinate_WeakCoordinate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_properties_metric_Coordinate
#include <sx/properties/metric/Coordinate.h>
#endif
HX_DECLARE_CLASS4(sx,properties,abstracts,_ACoordinate,WeakCoordinate)
HX_DECLARE_CLASS3(sx,properties,metric,Coordinate)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
namespace sx{
namespace properties{
namespace abstracts{
namespace _ACoordinate{


class HXCPP_CLASS_ATTRIBUTES  WeakCoordinate_obj : public ::sx::properties::metric::Coordinate_obj{
	public:
		typedef ::sx::properties::metric::Coordinate_obj super;
		typedef WeakCoordinate_obj OBJ_;
		WeakCoordinate_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.properties.abstracts._ACoordinate.WeakCoordinate")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WeakCoordinate_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WeakCoordinate_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WeakCoordinate","\x30","\xf1","\xb2","\x49"); }

		virtual Void dispose( );

		virtual Void __invokeOnChange( ::String previousUnits,Float previousValue);

};

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _ACoordinate

#endif /* INCLUDED_sx_properties_abstracts__ACoordinate_WeakCoordinate */ 
