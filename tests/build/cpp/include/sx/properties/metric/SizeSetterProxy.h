#ifndef INCLUDED_sx_properties_metric_SizeSetterProxy
#define INCLUDED_sx_properties_metric_SizeSetterProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS3(sx,properties,metric,SizeSetterProxy)
namespace sx{
namespace properties{
namespace metric{


class HXCPP_CLASS_ATTRIBUTES  SizeSetterProxy_obj : public ::sx::properties::metric::Size_obj{
	public:
		typedef ::sx::properties::metric::Size_obj super;
		typedef SizeSetterProxy_obj OBJ_;
		SizeSetterProxy_obj();
		Void __construct(::String __o_orientation);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.properties.metric.SizeSetterProxy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SizeSetterProxy_obj > __new(::String __o_orientation);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SizeSetterProxy_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SizeSetterProxy","\x0e","\xc3","\x0f","\xd3"); }

		virtual Void __invokeOnChange( ::String previousUnits,Float previousValue);

		virtual Float get_dip( );

		virtual Float get_px( );

		virtual Float get_pct( );

};

} // end namespace sx
} // end namespace properties
} // end namespace metric

#endif /* INCLUDED_sx_properties_metric_SizeSetterProxy */ 
