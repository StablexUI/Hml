#ifndef INCLUDED_sx_properties_abstracts__ASizeSetterProxy_WeakSizeSetterProxy
#define INCLUDED_sx_properties_abstracts__ASizeSetterProxy_WeakSizeSetterProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_properties_metric_SizeSetterProxy
#include <sx/properties/metric/SizeSetterProxy.h>
#endif
HX_DECLARE_CLASS4(sx,properties,abstracts,_ASizeSetterProxy,WeakSizeSetterProxy)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS3(sx,properties,metric,SizeSetterProxy)
namespace sx{
namespace properties{
namespace abstracts{
namespace _ASizeSetterProxy{


class HXCPP_CLASS_ATTRIBUTES  WeakSizeSetterProxy_obj : public ::sx::properties::metric::SizeSetterProxy_obj{
	public:
		typedef ::sx::properties::metric::SizeSetterProxy_obj super;
		typedef WeakSizeSetterProxy_obj OBJ_;
		WeakSizeSetterProxy_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WeakSizeSetterProxy_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WeakSizeSetterProxy_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WeakSizeSetterProxy","\x76","\xa5","\x72","\xab"); }

		virtual Void dispose( );

		virtual Void __invokeOnChange( ::String units,Float value);

};

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _ASizeSetterProxy

#endif /* INCLUDED_sx_properties_abstracts__ASizeSetterProxy_WeakSizeSetterProxy */ 
