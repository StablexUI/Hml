#include <hxcpp.h>

#ifndef INCLUDED_sx_backend_interfaces_IRenderer
#include <sx/backend/interfaces/IRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_ITextRenderer
#include <sx/backend/interfaces/ITextRenderer.h>
#endif
namespace sx{
namespace backend{
namespace interfaces{


static ::String sMemberFields[] = {
	HX_HCSTRING("setText","\x6f","\x0d","\x7e","\x12"),
	HX_HCSTRING("getFormat","\x6d","\x18","\xe5","\x79"),
	HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ITextRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ITextRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class ITextRenderer_obj::__mClass;

void ITextRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.backend.interfaces.ITextRenderer","\xa8","\x01","\xd7","\x8a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ITextRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sx
} // end namespace backend
} // end namespace interfaces
