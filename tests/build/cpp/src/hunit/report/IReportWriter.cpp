#include <hxcpp.h>

#ifndef INCLUDED_hunit_report_IReportWriter
#include <hunit/report/IReportWriter.h>
#endif
#ifndef INCLUDED_hunit_report_TestReport
#include <hunit/report/TestReport.h>
#endif
namespace hunit{
namespace report{


static ::String sMemberFields[] = {
	HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IReportWriter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IReportWriter_obj::__mClass,"__mClass");
};

#endif

hx::Class IReportWriter_obj::__mClass;

void IReportWriter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.report.IReportWriter","\xf8","\xc3","\x81","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IReportWriter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hunit
} // end namespace report
