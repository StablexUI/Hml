#ifndef INCLUDED_sx_properties_abstracts__APadding_WeakPadding
#define INCLUDED_sx_properties_abstracts__APadding_WeakPadding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_properties_metric_Padding
#include <sx/properties/metric/Padding.h>
#endif
HX_DECLARE_CLASS4(sx,properties,abstracts,_APadding,WeakPadding)
HX_DECLARE_CLASS3(sx,properties,metric,Padding)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS3(sx,properties,metric,SizeSetterProxy)
namespace sx{
namespace properties{
namespace abstracts{
namespace _APadding{


class HXCPP_CLASS_ATTRIBUTES  WeakPadding_obj : public ::sx::properties::metric::Padding_obj{
	public:
		typedef ::sx::properties::metric::Padding_obj super;
		typedef WeakPadding_obj OBJ_;
		WeakPadding_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.properties.abstracts._APadding.WeakPadding")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WeakPadding_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WeakPadding_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WeakPadding","\x19","\xbc","\x54","\x1c"); }

		virtual Void dispose( );

		virtual Void __invokeOnChange( ::String units,Float value);

};

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _APadding

#endif /* INCLUDED_sx_properties_abstracts__APadding_WeakPadding */ 
