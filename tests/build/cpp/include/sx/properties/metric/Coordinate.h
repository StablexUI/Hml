#ifndef INCLUDED_sx_properties_metric_Coordinate
#define INCLUDED_sx_properties_metric_Coordinate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
HX_DECLARE_CLASS3(sx,properties,metric,Coordinate)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
namespace sx{
namespace properties{
namespace metric{


class HXCPP_CLASS_ATTRIBUTES  Coordinate_obj : public ::sx::properties::metric::Size_obj{
	public:
		typedef ::sx::properties::metric::Size_obj super;
		typedef Coordinate_obj OBJ_;
		Coordinate_obj();
		Void __construct(::String __o_orientation);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.properties.metric.Coordinate")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Coordinate_obj > __new(::String __o_orientation);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Coordinate_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Coordinate","\x98","\xba","\x5a","\xd5"); }

		Dynamic ownerSize;
		Dynamic &ownerSize_dyn() { return ownerSize;}
		Dynamic pair;
		Dynamic &pair_dyn() { return pair;}
		bool selected;
		virtual Void select( );
		Dynamic select_dyn();

		virtual ::sx::properties::metric::Size __ownerSize( );
		Dynamic __ownerSize_dyn();

		virtual Float get_px( );

		virtual Float get_pct( );

		virtual Float get_dip( );

		virtual Void __invokeOnChange( ::String previousUnits,Float previousValue);

};

} // end namespace sx
} // end namespace properties
} // end namespace metric

#endif /* INCLUDED_sx_properties_metric_Coordinate */ 
