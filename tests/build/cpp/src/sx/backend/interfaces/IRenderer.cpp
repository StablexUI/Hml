#include <hxcpp.h>

#ifndef INCLUDED_sx_backend_interfaces_IRenderer
#include <sx/backend/interfaces/IRenderer.h>
#endif
namespace sx{
namespace backend{
namespace interfaces{


static ::String sMemberFields[] = {
	HX_HCSTRING("getWidth","\x90","\xc5","\x39","\x2a"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("setAvailableAreaWidth","\x72","\x70","\x4d","\x27"),
	HX_HCSTRING("setAvailableAreaHeight","\xfb","\x6b","\xc4","\xf2"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class IRenderer_obj::__mClass;

void IRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.backend.interfaces.IRenderer","\xdb","\x57","\xc2","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sx
} // end namespace backend
} // end namespace interfaces
