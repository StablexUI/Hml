#include <hxcpp.h>

#ifndef INCLUDED_sx_backend_dummy_Point
#include <sx/backend/dummy/Point.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IBackend
#include <sx/backend/interfaces/IBackend.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
namespace sx{
namespace backend{
namespace interfaces{


static ::String sMemberFields[] = {
	HX_HCSTRING("addWidget","\xc5","\xe4","\x16","\x04"),
	HX_HCSTRING("addWidgetAt","\x18","\x99","\x2d","\x63"),
	HX_HCSTRING("removeWidget","\x28","\x4b","\x20","\xbb"),
	HX_HCSTRING("removeWidgetAt","\x3b","\x9e","\x27","\xfc"),
	HX_HCSTRING("getWidgetIndex","\xb8","\x07","\xc6","\xd1"),
	HX_HCSTRING("setWidgetIndex","\x2c","\xf0","\xe5","\xf1"),
	HX_HCSTRING("getWidgetAt","\x8d","\x24","\xc5","\x57"),
	HX_HCSTRING("swapWidgets","\xdc","\xe1","\xca","\x2f"),
	HX_HCSTRING("swapWidgetsAt","\xef","\x49","\xac","\xe1"),
	HX_HCSTRING("widgetGlobalToLocal","\x69","\x64","\x1e","\xe1"),
	HX_HCSTRING("widgetLocalToGlobal","\x65","\x57","\x5b","\xbd"),
	HX_HCSTRING("widgetOriginChanged","\x4a","\x7d","\x24","\xe7"),
	HX_HCSTRING("widgetOffsetChanged","\x3d","\xbf","\x76","\x5e"),
	HX_HCSTRING("widgetResized","\x8c","\x14","\xb5","\x6d"),
	HX_HCSTRING("widgetMoved","\xcf","\xe5","\x78","\x98"),
	HX_HCSTRING("widgetRotated","\x45","\x02","\x5f","\xfb"),
	HX_HCSTRING("widgetScaledX","\x1a","\x15","\x49","\x6f"),
	HX_HCSTRING("widgetScaledY","\x1b","\x15","\x49","\x6f"),
	HX_HCSTRING("widgetAlphaChanged","\x1a","\x8b","\x6f","\x94"),
	HX_HCSTRING("widgetVisibilityChanged","\xde","\x7c","\x52","\x1f"),
	HX_HCSTRING("widgetOverflowChanged","\x6e","\x76","\x4b","\x02"),
	HX_HCSTRING("widgetSkinChanged","\x93","\x72","\xd9","\x41"),
	HX_HCSTRING("widgetDisposed","\xc9","\xda","\xe3","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IBackend_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IBackend_obj::__mClass,"__mClass");
};

#endif

hx::Class IBackend_obj::__mClass;

void IBackend_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.backend.interfaces.IBackend","\x7c","\x84","\x50","\xf8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IBackend_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sx
} // end namespace backend
} // end namespace interfaces
