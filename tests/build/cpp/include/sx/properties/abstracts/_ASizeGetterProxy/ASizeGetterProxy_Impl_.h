#ifndef INCLUDED_sx_properties_abstracts__ASizeGetterProxy_ASizeGetterProxy_Impl_
#define INCLUDED_sx_properties_abstracts__ASizeGetterProxy_ASizeGetterProxy_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(sx,properties,abstracts,_ASizeGetterProxy,ASizeGetterProxy_Impl_)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
namespace sx{
namespace properties{
namespace abstracts{
namespace _ASizeGetterProxy{


class HXCPP_CLASS_ATTRIBUTES  ASizeGetterProxy_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ASizeGetterProxy_Impl__obj OBJ_;
		ASizeGetterProxy_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ASizeGetterProxy_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ASizeGetterProxy_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ASizeGetterProxy_Impl_","\x41","\xc8","\xec","\xa8"); }

		static Float get_dip( ::sx::properties::metric::Size this1);
		static Dynamic get_dip_dyn();

		static Float get_px( ::sx::properties::metric::Size this1);
		static Dynamic get_px_dyn();

		static Float get_pct( ::sx::properties::metric::Size this1);
		static Dynamic get_pct_dyn();

		static Float AplusBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AplusBf_dyn();

		static Float AminusBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AminusBf_dyn();

		static Float AmulBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AmulBf_dyn();

		static Float AdivBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AdivBf_dyn();

		static bool AltBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AltBf_dyn();

		static bool AlteBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AlteBf_dyn();

		static bool AneBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AneBf_dyn();

		static bool AgteBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AgteBf_dyn();

		static bool AgtBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AgtBf_dyn();

		static bool AeqBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AeqBf_dyn();

};

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _ASizeGetterProxy

#endif /* INCLUDED_sx_properties_abstracts__ASizeGetterProxy_ASizeGetterProxy_Impl_ */ 
