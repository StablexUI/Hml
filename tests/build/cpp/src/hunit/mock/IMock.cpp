#include <hxcpp.h>

#ifndef INCLUDED_hunit_mock_IMock
#include <hunit/mock/IMock.h>
#endif
#ifndef INCLUDED_hunit_mock_MockData
#include <hunit/mock/MockData.h>
#endif
namespace hunit{
namespace mock{


static ::String sMemberFields[] = {
	HX_HCSTRING("__hu_mock__","\x3c","\x87","\xe6","\x32"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IMock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IMock_obj::__mClass,"__mClass");
};

#endif

hx::Class IMock_obj::__mClass;

void IMock_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.mock.IMock","\xd1","\x3c","\xf4","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IMock_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hunit
} // end namespace mock
