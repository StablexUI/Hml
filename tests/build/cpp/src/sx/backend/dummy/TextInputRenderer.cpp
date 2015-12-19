#include <hxcpp.h>

#ifndef INCLUDED_sx_backend_dummy_TextInputRenderer
#include <sx/backend/dummy/TextInputRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IRenderer
#include <sx/backend/interfaces/IRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_ITextInputRenderer
#include <sx/backend/interfaces/ITextInputRenderer.h>
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

Void TextInputRenderer_obj::__construct(::sx::widgets::TextInput textInput)
{
HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","new",0x1193a4e9,"sx.backend.dummy.TextInputRenderer.new","sx/backend/dummy/TextInputRenderer.hx",13,0x7c6bb4aa)
HX_STACK_THIS(this)
HX_STACK_ARG(textInput,"textInput")
{
	HX_STACK_LINE(27)
	this->__height = ((Float)0);
	HX_STACK_LINE(25)
	this->__width = ((Float)0);
	HX_STACK_LINE(19)
	this->__text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(35)
	this->__textInput = textInput;
}
;
	return null();
}

//TextInputRenderer_obj::~TextInputRenderer_obj() { }

Dynamic TextInputRenderer_obj::__CreateEmpty() { return  new TextInputRenderer_obj; }
hx::ObjectPtr< TextInputRenderer_obj > TextInputRenderer_obj::__new(::sx::widgets::TextInput textInput)
{  hx::ObjectPtr< TextInputRenderer_obj > _result_ = new TextInputRenderer_obj();
	_result_->__construct(textInput);
	return _result_;}

Dynamic TextInputRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextInputRenderer_obj > _result_ = new TextInputRenderer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *TextInputRenderer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::sx::backend::interfaces::ITextInputRenderer_obj)) return operator ::sx::backend::interfaces::ITextInputRenderer_obj *();
	if (inType==typeid( ::sx::backend::interfaces::IRenderer_obj)) return operator ::sx::backend::interfaces::IRenderer_obj *();
	return super::__ToInterface(inType);
}

TextInputRenderer_obj::operator ::sx::backend::interfaces::ITextInputRenderer_obj *()
	{ return new ::sx::backend::interfaces::ITextInputRenderer_delegate_< TextInputRenderer_obj >(this); }
TextInputRenderer_obj::operator ::sx::backend::interfaces::IRenderer_obj *()
	{ return new ::sx::backend::interfaces::IRenderer_delegate_< TextInputRenderer_obj >(this); }
Void TextInputRenderer_obj::onTextChange( Dynamic onTextChange){
{
		HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","onTextChange",0xa8a68653,"sx.backend.dummy.TextInputRenderer.onTextChange","sx/backend/dummy/TextInputRenderer.hx",44,0x7c6bb4aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(onTextChange,"onTextChange")
		HX_STACK_LINE(44)
		this->__onTextChange = onTextChange;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInputRenderer_obj,onTextChange,(void))

Void TextInputRenderer_obj::onReceiveCursor( Dynamic callback){
{
		HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","onReceiveCursor",0x2891d683,"sx.backend.dummy.TextInputRenderer.onReceiveCursor","sx/backend/dummy/TextInputRenderer.hx",52,0x7c6bb4aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(callback,"callback")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInputRenderer_obj,onReceiveCursor,(void))

Void TextInputRenderer_obj::onLoseCursor( Dynamic callback){
{
		HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","onLoseCursor",0xdd78aee1,"sx.backend.dummy.TextInputRenderer.onLoseCursor","sx/backend/dummy/TextInputRenderer.hx",61,0x7c6bb4aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(callback,"callback")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInputRenderer_obj,onLoseCursor,(void))

::String TextInputRenderer_obj::getText( ){
	HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","getText",0x111bc96c,"sx.backend.dummy.TextInputRenderer.getText","sx/backend/dummy/TextInputRenderer.hx",70,0x7c6bb4aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	::String tmp = this->__text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInputRenderer_obj,getText,return )

Void TextInputRenderer_obj::setText( ::String text){
{
		HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","setText",0x041d5a78,"sx.backend.dummy.TextInputRenderer.setText","sx/backend/dummy/TextInputRenderer.hx",81,0x7c6bb4aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(81)
		this->__text = text;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInputRenderer_obj,setText,(void))

Dynamic TextInputRenderer_obj::getFormat( ){
	HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","getFormat",0x8bb879b6,"sx.backend.dummy.TextInputRenderer.getFormat","sx/backend/dummy/TextInputRenderer.hx",89,0x7c6bb4aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	Dynamic tmp = this->__format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInputRenderer_obj,getFormat,return )

Void TextInputRenderer_obj::setFormat( Dynamic format){
{
		HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","setFormat",0x6f0965c2,"sx.backend.dummy.TextInputRenderer.setFormat","sx/backend/dummy/TextInputRenderer.hx",99,0x7c6bb4aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(99)
		this->__format = format;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInputRenderer_obj,setFormat,(void))

Void TextInputRenderer_obj::onResize( Dynamic callback){
{
		HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","onResize",0x61ec6b4a,"sx.backend.dummy.TextInputRenderer.onResize","sx/backend/dummy/TextInputRenderer.hx",107,0x7c6bb4aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(callback,"callback")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInputRenderer_obj,onResize,(void))

Float TextInputRenderer_obj::getWidth( ){
	HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","getWidth",0xa3fde067,"sx.backend.dummy.TextInputRenderer.getWidth","sx/backend/dummy/TextInputRenderer.hx",116,0x7c6bb4aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	Float tmp = this->__width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInputRenderer_obj,getWidth,return )

Float TextInputRenderer_obj::getHeight( ){
	HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","getHeight",0x9075f266,"sx.backend.dummy.TextInputRenderer.getHeight","sx/backend/dummy/TextInputRenderer.hx",125,0x7c6bb4aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(126)
	Float tmp = this->__height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInputRenderer_obj,getHeight,return )

Void TextInputRenderer_obj::setAvailableAreaWidth( Float width){
{
		HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","setAvailableAreaWidth",0xfd121b3b,"sx.backend.dummy.TextInputRenderer.setAvailableAreaWidth","sx/backend/dummy/TextInputRenderer.hx",135,0x7c6bb4aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(135)
		this->__width = width;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInputRenderer_obj,setAvailableAreaWidth,(void))

Void TextInputRenderer_obj::setAvailableAreaHeight( Float height){
{
		HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","setAvailableAreaHeight",0x29153112,"sx.backend.dummy.TextInputRenderer.setAvailableAreaHeight","sx/backend/dummy/TextInputRenderer.hx",144,0x7c6bb4aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(144)
		this->__height = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInputRenderer_obj,setAvailableAreaHeight,(void))

Void TextInputRenderer_obj::dispose( ){
{
		HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","dispose",0xacebcda8,"sx.backend.dummy.TextInputRenderer.dispose","sx/backend/dummy/TextInputRenderer.hx",153,0x7c6bb4aa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		this->__textInput = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextInputRenderer_obj,dispose,(void))

::String TextInputRenderer_obj::set_text( ::String value){
	HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","set_text",0xf4d5fc81,"sx.backend.dummy.TextInputRenderer.set_text","sx/backend/dummy/TextInputRenderer.hx",161,0x7c6bb4aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(162)
	this->__text = value;
	HX_STACK_LINE(163)
	Dynamic tmp = this->__onTextChange_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	if ((tmp1)){
		HX_STACK_LINE(163)
		::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		this->__onTextChange(tmp2);
	}
	HX_STACK_LINE(165)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(165)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInputRenderer_obj,set_text,return )

::String TextInputRenderer_obj::get_text( ){
	HX_STACK_FRAME("sx.backend.dummy.TextInputRenderer","get_text",0x4678a30d,"sx.backend.dummy.TextInputRenderer.get_text","sx/backend/dummy/TextInputRenderer.hx",170,0x7c6bb4aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	::String tmp = this->__text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInputRenderer_obj,get_text,return )


TextInputRenderer_obj::TextInputRenderer_obj()
{
}

void TextInputRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextInputRenderer);
	HX_MARK_MEMBER_NAME(__textInput,"__textInput");
	HX_MARK_MEMBER_NAME(__text,"__text");
	HX_MARK_MEMBER_NAME(__onTextChange,"__onTextChange");
	HX_MARK_MEMBER_NAME(__format,"__format");
	HX_MARK_MEMBER_NAME(__width,"__width");
	HX_MARK_MEMBER_NAME(__height,"__height");
	HX_MARK_END_CLASS();
}

void TextInputRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__textInput,"__textInput");
	HX_VISIT_MEMBER_NAME(__text,"__text");
	HX_VISIT_MEMBER_NAME(__onTextChange,"__onTextChange");
	HX_VISIT_MEMBER_NAME(__format,"__format");
	HX_VISIT_MEMBER_NAME(__width,"__width");
	HX_VISIT_MEMBER_NAME(__height,"__height");
}

Dynamic TextInputRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__text") ) { return __text; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"setText") ) { return setText_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { return __format; }
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFormat") ) { return getFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__textInput") ) { return __textInput; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onTextChange") ) { return onTextChange_dyn(); }
		if (HX_FIELD_EQ(inName,"onLoseCursor") ) { return onLoseCursor_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__onTextChange") ) { return __onTextChange; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onReceiveCursor") ) { return onReceiveCursor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setAvailableAreaWidth") ) { return setAvailableAreaWidth_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setAvailableAreaHeight") ) { return setAvailableAreaHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextInputRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__text") ) { __text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { __format=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__textInput") ) { __textInput=inValue.Cast< ::sx::widgets::TextInput >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__onTextChange") ) { __onTextChange=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextInputRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TextInputRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__textInput","\xfd","\x9c","\x37","\x85"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb"));
	outFields->push(HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sx::widgets::TextInput*/ ,(int)offsetof(TextInputRenderer_obj,__textInput),HX_HCSTRING("__textInput","\xfd","\x9c","\x37","\x85")},
	{hx::fsString,(int)offsetof(TextInputRenderer_obj,__text),HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextInputRenderer_obj,__onTextChange),HX_HCSTRING("__onTextChange","\x1c","\x37","\x67","\xe7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextInputRenderer_obj,__format),HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5")},
	{hx::fsFloat,(int)offsetof(TextInputRenderer_obj,__width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{hx::fsFloat,(int)offsetof(TextInputRenderer_obj,__height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__textInput","\xfd","\x9c","\x37","\x85"),
	HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb"),
	HX_HCSTRING("__onTextChange","\x1c","\x37","\x67","\xe7"),
	HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5"),
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("onTextChange","\xfc","\xb3","\xa6","\xc6"),
	HX_HCSTRING("onReceiveCursor","\x7a","\xd8","\xe0","\xf8"),
	HX_HCSTRING("onLoseCursor","\x8a","\xdc","\x78","\xfb"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("setText","\x6f","\x0d","\x7e","\x12"),
	HX_HCSTRING("getFormat","\x6d","\x18","\xe5","\x79"),
	HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("getWidth","\x90","\xc5","\x39","\x2a"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("setAvailableAreaWidth","\x72","\x70","\x4d","\x27"),
	HX_HCSTRING("setAvailableAreaHeight","\xfb","\x6b","\xc4","\xf2"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextInputRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextInputRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class TextInputRenderer_obj::__mClass;

void TextInputRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.backend.dummy.TextInputRenderer","\x77","\xfc","\xfa","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TextInputRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextInputRenderer_obj >;
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
