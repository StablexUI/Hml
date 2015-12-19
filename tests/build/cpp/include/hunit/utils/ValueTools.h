#ifndef INCLUDED_hunit_utils_ValueTools
#define INCLUDED_hunit_utils_ValueTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,utils,Value)
HX_DECLARE_CLASS2(hunit,utils,ValueTools)
namespace hunit{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ValueTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ValueTools_obj OBJ_;
		ValueTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="hunit.utils.ValueTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ValueTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ValueTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ValueTools","\x0a","\xed","\x7b","\xb2"); }

		static bool hasValue( ::hunit::utils::Value holder);
		static Dynamic hasValue_dyn();

		static Dynamic getValue( ::hunit::utils::Value holder);
		static Dynamic getValue_dyn();

};

} // end namespace hunit
} // end namespace utils

#endif /* INCLUDED_hunit_utils_ValueTools */ 
