#include <hxcpp.h>

#ifndef INCLUDED_sx_backend_dummy_Backend
#include <sx/backend/dummy/Backend.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_BackendManager
#include <sx/backend/dummy/BackendManager.h>
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
namespace dummy{

Void BackendManager_obj::__construct()
{
HX_STACK_FRAME("sx.backend.dummy.BackendManager","new",0x4fe0d054,"sx.backend.dummy.BackendManager.new","sx/backend/dummy/BackendManager.hx",30,0x27dffbb9)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BackendManager_obj::~BackendManager_obj() { }

Dynamic BackendManager_obj::__CreateEmpty() { return  new BackendManager_obj; }
hx::ObjectPtr< BackendManager_obj > BackendManager_obj::__new()
{  hx::ObjectPtr< BackendManager_obj > _result_ = new BackendManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic BackendManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BackendManager_obj > _result_ = new BackendManager_obj();
	_result_->__construct();
	return _result_;}

hx::Object *BackendManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::sx::backend::interfaces::IBackendManager_obj)) return operator ::sx::backend::interfaces::IBackendManager_obj *();
	return super::__ToInterface(inType);
}

BackendManager_obj::operator ::sx::backend::interfaces::IBackendManager_obj *()
	{ return new ::sx::backend::interfaces::IBackendManager_delegate_< BackendManager_obj >(this); }
Void BackendManager_obj::setupPointerDevices( ){
{
		HX_STACK_FRAME("sx.backend.dummy.BackendManager","setupPointerDevices",0xcde4bb31,"sx.backend.dummy.BackendManager.setupPointerDevices","sx/backend/dummy/BackendManager.hx",39,0x27dffbb9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BackendManager_obj,setupPointerDevices,(void))

Void BackendManager_obj::setupFrames( ){
{
		HX_STACK_FRAME("sx.backend.dummy.BackendManager","setupFrames",0xce7761f7,"sx.backend.dummy.BackendManager.setupFrames","sx/backend/dummy/BackendManager.hx",48,0x27dffbb9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BackendManager_obj,setupFrames,(void))

::sx::backend::dummy::Point BackendManager_obj::getPointerPosition( hx::Null< int >  __o_touchId){
int touchId = __o_touchId.Default(0);
	HX_STACK_FRAME("sx.backend.dummy.BackendManager","getPointerPosition",0xdd5f551c,"sx.backend.dummy.BackendManager.getPointerPosition","sx/backend/dummy/BackendManager.hx",59,0x27dffbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(touchId,"touchId")
{
		HX_STACK_LINE(60)
		::sx::backend::dummy::Point tmp = ::sx::backend::dummy::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(BackendManager_obj,getPointerPosition,return )

::sx::widgets::Widget BackendManager_obj::getRoot( ){
	HX_STACK_FRAME("sx.backend.dummy.BackendManager","getRoot",0xcf6fa7cc,"sx.backend.dummy.BackendManager.getRoot","sx/backend/dummy/BackendManager.hx",68,0x27dffbb9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	::sx::widgets::Widget tmp = this->__root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	if ((tmp1)){
		HX_STACK_LINE(70)
		::sx::widgets::Widget tmp2 = ::sx::widgets::Widget_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		this->__root = tmp2;
	}
	HX_STACK_LINE(73)
	::sx::widgets::Widget tmp2 = this->__root;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(BackendManager_obj,getRoot,return )

::sx::backend::dummy::Backend BackendManager_obj::widgetBackend( ::sx::widgets::Widget widget){
	HX_STACK_FRAME("sx.backend.dummy.BackendManager","widgetBackend",0x1d296da4,"sx.backend.dummy.BackendManager.widgetBackend","sx/backend/dummy/BackendManager.hx",81,0x27dffbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(widget,"widget")
	HX_STACK_LINE(82)
	::sx::backend::dummy::Backend tmp = ::sx::backend::dummy::Backend_obj::__new(widget);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(BackendManager_obj,widgetBackend,return )

::sx::backend::dummy::TextRenderer BackendManager_obj::textRenderer( ::sx::widgets::Text textField){
	HX_STACK_FRAME("sx.backend.dummy.BackendManager","textRenderer",0xbaaca49c,"sx.backend.dummy.BackendManager.textRenderer","sx/backend/dummy/BackendManager.hx",90,0x27dffbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(91)
	::sx::backend::dummy::TextRenderer tmp = ::sx::backend::dummy::TextRenderer_obj::__new(textField);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(BackendManager_obj,textRenderer,return )

::sx::backend::dummy::TextInputRenderer BackendManager_obj::textInputRenderer( ::sx::widgets::TextInput textInput){
	HX_STACK_FRAME("sx.backend.dummy.BackendManager","textInputRenderer",0x12e73d74,"sx.backend.dummy.BackendManager.textInputRenderer","sx/backend/dummy/BackendManager.hx",99,0x27dffbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(textInput,"textInput")
	HX_STACK_LINE(100)
	::sx::backend::dummy::TextInputRenderer tmp = ::sx::backend::dummy::TextInputRenderer_obj::__new(textInput);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(BackendManager_obj,textInputRenderer,return )

::sx::backend::dummy::BitmapRenderer BackendManager_obj::bitmapRenderer( ::sx::widgets::Bmp bmp){
	HX_STACK_FRAME("sx.backend.dummy.BackendManager","bitmapRenderer",0xdabb74de,"sx.backend.dummy.BackendManager.bitmapRenderer","sx/backend/dummy/BackendManager.hx",108,0x27dffbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmp,"bmp")
	HX_STACK_LINE(109)
	::sx::backend::dummy::BitmapRenderer tmp = ::sx::backend::dummy::BitmapRenderer_obj::__new(bmp);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(BackendManager_obj,bitmapRenderer,return )


BackendManager_obj::BackendManager_obj()
{
}

void BackendManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BackendManager);
	HX_MARK_MEMBER_NAME(__root,"__root");
	HX_MARK_END_CLASS();
}

void BackendManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__root,"__root");
}

Dynamic BackendManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__root") ) { return __root; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getRoot") ) { return getRoot_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setupFrames") ) { return setupFrames_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textRenderer") ) { return textRenderer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"widgetBackend") ) { return widgetBackend_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitmapRenderer") ) { return bitmapRenderer_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"textInputRenderer") ) { return textInputRenderer_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getPointerPosition") ) { return getPointerPosition_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setupPointerDevices") ) { return setupPointerDevices_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BackendManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__root") ) { __root=inValue.Cast< ::sx::widgets::Widget >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BackendManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BackendManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__root","\x42","\x51","\xa7","\xfa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sx::widgets::Widget*/ ,(int)offsetof(BackendManager_obj,__root),HX_HCSTRING("__root","\x42","\x51","\xa7","\xfa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__root","\x42","\x51","\xa7","\xfa"),
	HX_HCSTRING("setupPointerDevices","\x3d","\x93","\xc5","\xf7"),
	HX_HCSTRING("setupFrames","\x03","\x4e","\x3b","\x8d"),
	HX_HCSTRING("getPointerPosition","\x90","\x42","\x8e","\xfc"),
	HX_HCSTRING("getRoot","\xd8","\x9d","\x31","\x1e"),
	HX_HCSTRING("widgetBackend","\xb0","\x74","\xc9","\x05"),
	HX_HCSTRING("textRenderer","\x10","\x43","\x57","\xe7"),
	HX_HCSTRING("textInputRenderer","\x80","\xba","\x65","\x82"),
	HX_HCSTRING("bitmapRenderer","\x52","\x98","\x21","\x7e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackendManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackendManager_obj::__mClass,"__mClass");
};

#endif

hx::Class BackendManager_obj::__mClass;

void BackendManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.backend.dummy.BackendManager","\x62","\x56","\x7d","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BackendManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BackendManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sx
} // end namespace backend
} // end namespace dummy
