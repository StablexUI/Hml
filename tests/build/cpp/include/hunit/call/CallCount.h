#ifndef INCLUDED_hunit_call_CallCount
#define INCLUDED_hunit_call_CallCount

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,call,CallCount)
namespace hunit{
namespace call{


class CallCount_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CallCount_obj OBJ_;

	public:
		CallCount_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("hunit.call.CallCount","\xa3","\x92","\x3d","\x63"); }
		::String __ToString() const { return HX_HCSTRING("CallCount.","\xdd","\xcb","\x59","\xee") + tag; }

		static ::hunit::call::CallCount Any;
		static inline ::hunit::call::CallCount Any_dyn() { return Any; }
		static ::hunit::call::CallCount AtLeast(int amount);
		static Dynamic AtLeast_dyn();
		static ::hunit::call::CallCount Exactly(int amount);
		static Dynamic Exactly_dyn();
		static ::hunit::call::CallCount Never;
		static inline ::hunit::call::CallCount Never_dyn() { return Never; }
		static ::hunit::call::CallCount Once;
		static inline ::hunit::call::CallCount Once_dyn() { return Once; }
};

} // end namespace hunit
} // end namespace call

#endif /* INCLUDED_hunit_call_CallCount */ 
