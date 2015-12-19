#include <hxcpp.h>

#ifndef INCLUDED_sx_backend_dummy_Backend
#include <sx/backend/dummy/Backend.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_BitmapRenderer
#include <sx/backend/dummy/BitmapRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_Point
#include <sx/backend/dummy/Point.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_TextInputRenderer
#include <sx/backend/dummy/TextInputRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_TextRenderer
#include <sx/backend/dummy/TextRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IBackend
#include <sx/backend/interfaces/IBackend.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IBackendManager
#include <sx/backend/interfaces/IBackendManager.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IBitmapRenderer
#include <sx/backend/interfaces/IBitmapRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IRenderer
#include <sx/backend/interfaces/IRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_ITextInputRenderer
#include <sx/backend/interfaces/ITextInputRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_ITextRenderer
#include <sx/backend/interfaces/ITextRenderer.h>
#endif
#ifndef INCLUDED_sx_widgets_Bmp
#include <sx/widgets/Bmp.h>
#endif
#ifndef INCLUDED_sx_widgets_Text
#include <sx/widgets/Text.h>
#endif
#ifndef INCLUDED_sx_widgets_TextInput
#include <sx/widgets/TextInput.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
#ifndef INCLUDED_sx_widgets_base_RendererHolder
#include <sx/widgets/base/RendererHolder.h>
#endif
namespace sx{
namespace backend{
namespace interfaces{


static ::String sMemberFields[] = {
	HX_HCSTRING("setupPointerDevices","\x3d","\x93","\xc5","\xf7"),
	HX_HCSTRING("setupFrames","\x03","\x4e","\x3b","\x8d"),
	HX_HCSTRING("getRoot","\xd8","\x9d","\x31","\x1e"),
	HX_HCSTRING("getPointerPosition","\x90","\x42","\x8e","\xfc"),
	HX_HCSTRING("widgetBackend","\xb0","\x74","\xc9","\x05"),
	HX_HCSTRING("textRenderer","\x10","\x43","\x57","\xe7"),
	HX_HCSTRING("textInputRenderer","\x80","\xba","\x65","\x82"),
	HX_HCSTRING("bitmapRenderer","\x52","\x98","\x21","\x7e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IBackendManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IBackendManager_obj::__mClass,"__mClass");
};

#endif

hx::Class IBackendManager_obj::__mClass;

void IBackendManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.backend.interfaces.IBackendManager","\x51","\xfd","\x09","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IBackendManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sx
} // end namespace backend
} // end namespace interfaces
