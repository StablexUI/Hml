#include <hxcpp.h>

#ifndef INCLUDED_sx_backend_interfaces_IRenderer
#include <sx/backend/interfaces/IRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_ITextInputRenderer
#include <sx/backend/interfaces/ITextInputRenderer.h>
#endif
namespace sx{
namespace backend{
namespace interfaces{


static ::String sMemberFields[] = {
	HX_HCSTRING("onTextChange","\xfc","\xb3","\xa6","\xc6"),
	HX_HCSTRING("onReceiveCursor","\x7a","\xd8","\xe0","\xf8"),
	HX_HCSTRING("onLoseCursor","\x8a","\xdc","\x78","\xfb"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("setText","\x6f","\x0d","\x7e","\x12"),
	HX_HCSTRING("getFormat","\x6d","\x18","\xe5","\x79"),
	HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ITextInputRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ITextInputRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class ITextInputRenderer_obj::__mClass;

void ITextInputRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.backend.interfaces.ITextInputRenderer","\xe8","\x14","\x54","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ITextInputRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sx
} // end namespace backend
} // end namespace interfaces
