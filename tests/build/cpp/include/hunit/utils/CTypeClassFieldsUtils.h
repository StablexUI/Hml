#ifndef INCLUDED_hunit_utils_CTypeClassFieldsUtils
#define INCLUDED_hunit_utils_CTypeClassFieldsUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,utils,CTypeClassFieldsUtils)
namespace hunit{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  CTypeClassFieldsUtils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CTypeClassFieldsUtils_obj OBJ_;
		CTypeClassFieldsUtils_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="hunit.utils.CTypeClassFieldsUtils")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CTypeClassFieldsUtils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CTypeClassFieldsUtils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CTypeClassFieldsUtils","\x5d","\x32","\x3c","\x3d"); }

		static void __boot();
		static ::String TEST_INDICATOR;
		static bool isTest( Dynamic field);
		static Dynamic isTest_dyn();

		static bool mIsTest( Dynamic field);
		static Dynamic mIsTest_dyn();

};

} // end namespace hunit
} // end namespace utils

#endif /* INCLUDED_hunit_utils_CTypeClassFieldsUtils */ 
