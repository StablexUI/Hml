#include <hxcpp.h>

#ifndef INCLUDED_sx_Sx
#include <sx/Sx.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_BackendManager
#include <sx/backend/dummy/BackendManager.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_TextRenderer
#include <sx/backend/dummy/TextRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IBackendManager
#include <sx/backend/interfaces/IBackendManager.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IRenderer
#include <sx/backend/interfaces/IRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_ITextRenderer
#include <sx/backend/interfaces/ITextRenderer.h>
#endif
#ifndef INCLUDED_sx_widgets_Text
#include <sx/widgets/Text.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
#ifndef INCLUDED_sx_widgets_base_RendererHolder
#include <sx/widgets/base/RendererHolder.h>
#endif
namespace sx{
namespace widgets{

Void Text_obj::__construct()
{
HX_STACK_FRAME("sx.widgets.Text","new",0xe8f99647,"sx.widgets.Text.new","sx/widgets/Text.hx",13,0xac7aaa47)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	this->__text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(13)
	super::__construct();
}
;
	return null();
}

//Text_obj::~Text_obj() { }

Dynamic Text_obj::__CreateEmpty() { return  new Text_obj; }
hx::ObjectPtr< Text_obj > Text_obj::__new()
{  hx::ObjectPtr< Text_obj > _result_ = new Text_obj();
	_result_->__construct();
	return _result_;}

Dynamic Text_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Text_obj > _result_ = new Text_obj();
	_result_->__construct();
	return _result_;}

Dynamic Text_obj::getTextFormat( ){
	HX_STACK_FRAME("sx.widgets.Text","getTextFormat",0x0b1238a1,"sx.widgets.Text.getTextFormat","sx/widgets/Text.hx",27,0xac7aaa47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	::sx::backend::dummy::TextRenderer tmp = this->renderer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	Dynamic tmp1 = tmp->getFormat();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,getTextFormat,return )

Void Text_obj::setTextFormat( Dynamic format){
{
		HX_STACK_FRAME("sx.widgets.Text","setTextFormat",0x50181aad,"sx.widgets.Text.setTextFormat","sx/widgets/Text.hx",36,0xac7aaa47)
		HX_STACK_THIS(this)
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(37)
		::sx::backend::dummy::TextRenderer tmp = this->renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		Dynamic tmp1 = format;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		tmp->setFormat(tmp1);
		HX_STACK_LINE(37)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,setTextFormat,(void))

Void Text_obj::__createRenderer( ){
{
		HX_STACK_FRAME("sx.widgets.Text","__createRenderer",0x191f2538,"sx.widgets.Text.__createRenderer","sx/widgets/Text.hx",45,0xac7aaa47)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		::sx::backend::dummy::BackendManager tmp = ::sx::Sx_obj::get_backendManager();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		::sx::backend::dummy::TextRenderer tmp1 = tmp->textRenderer(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		this->renderer = tmp1;
	}
return null();
}


::String Text_obj::set_text( ::String value){
	HX_STACK_FRAME("sx.widgets.Text","set_text",0xc6d25663,"sx.widgets.Text.set_text","sx/widgets/Text.hx",54,0xac7aaa47)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(55)
	this->__text = value;
	HX_STACK_LINE(56)
	::sx::backend::dummy::TextRenderer tmp = this->renderer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::String tmp1 = this->__text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	tmp->setText(tmp1);
	HX_STACK_LINE(58)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_text,return )

::String Text_obj::get_text( ){
	HX_STACK_FRAME("sx.widgets.Text","get_text",0x1874fcef,"sx.widgets.Text.get_text","sx/widgets/Text.hx",63,0xac7aaa47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	::String tmp = this->__text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_text,return )

::sx::backend::interfaces::IRenderer Text_obj::get___renderer( ){
	HX_STACK_FRAME("sx.widgets.Text","get___renderer",0x2e9c0625,"sx.widgets.Text.get___renderer","sx/widgets/Text.hx",64,0xac7aaa47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	::sx::backend::dummy::TextRenderer tmp = this->renderer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	return tmp;
}



Text_obj::Text_obj()
{
}

void Text_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Text);
	HX_MARK_MEMBER_NAME(__text,"__text");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	::sx::widgets::base::RendererHolder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Text_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__text,"__text");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	::sx::widgets::base::RendererHolder_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Text_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__text") ) { return __text; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTextFormat") ) { return getTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextFormat") ) { return setTextFormat_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get___renderer") ) { return get___renderer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__createRenderer") ) { return __createRenderer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Text_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__text") ) { __text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::sx::backend::dummy::TextRenderer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Text_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Text_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Text_obj,__text),HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb")},
	{hx::fsObject /*::sx::backend::dummy::TextRenderer*/ ,(int)offsetof(Text_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("getTextFormat","\xfa","\x6b","\xf1","\x90"),
	HX_HCSTRING("setTextFormat","\x06","\x4e","\xf7","\xd5"),
	HX_HCSTRING("__createRenderer","\x7f","\xcf","\x55","\x39"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("get___renderer","\xac","\xc0","\x09","\xcc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

#endif

hx::Class Text_obj::__mClass;

void Text_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.widgets.Text","\xd5","\x66","\x39","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Text_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Text_obj >;
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
} // end namespace widgets
