#ifndef INCLUDED_hunit_utils_Value
#define INCLUDED_hunit_utils_Value

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,utils,Value)
namespace hunit{
namespace utils{


class Value_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Value_obj OBJ_;

	public:
		Value_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("hunit.utils.Value","\xd2","\xf0","\x0a","\x0a"); }
		::String __ToString() const { return HX_HCSTRING("Value.","\xbd","\x77","\x4b","\x84") + tag; }

		static ::hunit::utils::Value Nothing;
		static inline ::hunit::utils::Value Nothing_dyn() { return Nothing; }
		static ::hunit::utils::Value Thing(Dynamic v);
		static Dynamic Thing_dyn();
};

} // end namespace hunit
} // end namespace utils

#endif /* INCLUDED_hunit_utils_Value */ 
