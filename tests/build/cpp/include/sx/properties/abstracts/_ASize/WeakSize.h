#ifndef INCLUDED_sx_properties_abstracts__ASize_WeakSize
#define INCLUDED_sx_properties_abstracts__ASize_WeakSize

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
HX_DECLARE_CLASS4(sx,properties,abstracts,_ASize,WeakSize)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
namespace sx{
namespace properties{
namespace abstracts{
namespace _ASize{


class HXCPP_CLASS_ATTRIBUTES  WeakSize_obj : public ::sx::properties::metric::Size_obj{
	public:
		typedef ::sx::properties::metric::Size_obj super;
		typedef WeakSize_obj OBJ_;
		WeakSize_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.properties.abstracts._ASize.WeakSize")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WeakSize_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WeakSize_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WeakSize","\x79","\x81","\xc7","\x73"); }

		virtual Void dispose( );

		virtual Void __invokeOnChange( ::String previousUnits,Float previousValue);

};

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _ASize

#endif /* INCLUDED_sx_properties_abstracts__ASize_WeakSize */ 
