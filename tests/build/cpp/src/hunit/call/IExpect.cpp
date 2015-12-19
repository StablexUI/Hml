#include <hxcpp.h>

#ifndef INCLUDED_hunit_call_IExpect
#include <hunit/call/IExpect.h>
#endif
namespace hunit{
namespace call{


static ::String sMemberFields[] = {
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IExpect_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IExpect_obj::__mClass,"__mClass");
};

#endif

hx::Class IExpect_obj::__mClass;

void IExpect_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.call.IExpect","\xf4","\x31","\x59","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IExpect_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hunit
} // end namespace call
