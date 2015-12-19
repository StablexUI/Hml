#include <hxcpp.h>

#ifndef INCLUDED_sx_backend_dummy_TextRenderer
#include <sx/backend/dummy/TextRenderer.h>
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
namespace backend{
namespace dummy{

Void TextRenderer_obj::__construct(::sx::widgets::Text textField)
{
HX_STACK_FRAME("sx.backend.dummy.TextRenderer","new",0x4ac115eb,"sx.backend.dummy.TextRenderer.new","sx/backend/dummy/TextRenderer.hx",13,0x4f2604c2)
HX_STACK_THIS(this)
HX_STACK_ARG(textField,"textField")
{
	HX_STACK_LINE(18)
	this->__text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(30)
	this->__textField = textField;
}
;
	return null();
}

//TextRenderer_obj::~TextRenderer_obj() { }

Dynamic TextRenderer_obj::__CreateEmpty() { return  new TextRenderer_obj; }
hx::ObjectPtr< TextRenderer_obj > TextRenderer_obj::__new(::sx::widgets::Text textField)
{  hx::ObjectPtr< TextRenderer_obj > _result_ = new TextRenderer_obj();
	_result_->__construct(textField);
	return _result_;}

Dynamic TextRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextRenderer_obj > _result_ = new TextRenderer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *TextRenderer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::sx::backend::interfaces::ITextRenderer_obj)) return operator ::sx::backend::interfaces::ITextRenderer_obj *();
	if (inType==typeid( ::sx::backend::interfaces::IRenderer_obj)) return operator ::sx::backend::interfaces::IRenderer_obj *();
	return super::__ToInterface(inType);
}

TextRenderer_obj::operator ::sx::backend::interfaces::ITextRenderer_obj *()
	{ return new ::sx::backend::interfaces::ITextRenderer_delegate_< TextRenderer_obj >(this); }
TextRenderer_obj::operator ::sx::backend::interfaces::IRenderer_obj *()
	{ return new ::sx::backend::interfaces::IRenderer_delegate_< TextRenderer_obj >(this); }
Void TextRenderer_obj::setText( ::String text){
{
		HX_STACK_FRAME("sx.backend.dummy.TextRenderer","setText",0x4624747a,"sx.backend.dummy.TextRenderer.setText","sx/backend/dummy/TextRenderer.hx",38,0x4f2604c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(39)
		this->__text = text;
		HX_STACK_LINE(40)
		Dynamic tmp = this->__onResize_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		if ((tmp1)){
			HX_STACK_LINE(40)
			Float tmp2 = this->getWidth();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			Float tmp3 = this->getHeight();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			this->__onResize(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextRenderer_obj,setText,(void))

Dynamic TextRenderer_obj::getFormat( ){
	HX_STACK_FRAME("sx.backend.dummy.TextRenderer","getFormat",0xb13b9838,"sx.backend.dummy.TextRenderer.getFormat","sx/backend/dummy/TextRenderer.hx",48,0x4f2604c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	Dynamic tmp = this->__format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextRenderer_obj,getFormat,return )

Void TextRenderer_obj::setFormat( Dynamic format){
{
		HX_STACK_FRAME("sx.backend.dummy.TextRenderer","setFormat",0x948c8444,"sx.backend.dummy.TextRenderer.setFormat","sx/backend/dummy/TextRenderer.hx",58,0x4f2604c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(58)
		this->__format = format;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextRenderer_obj,setFormat,(void))

Void TextRenderer_obj::onResize( Dynamic callback){
{
		HX_STACK_FRAME("sx.backend.dummy.TextRenderer","onResize",0xe61c1308,"sx.backend.dummy.TextRenderer.onResize","sx/backend/dummy/TextRenderer.hx",67,0x4f2604c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_LINE(67)
		this->__onResize = callback;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextRenderer_obj,onResize,(void))

Float TextRenderer_obj::getWidth( ){
	HX_STACK_FRAME("sx.backend.dummy.TextRenderer","getWidth",0x282d8825,"sx.backend.dummy.TextRenderer.getWidth","sx/backend/dummy/TextRenderer.hx",75,0x4f2604c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	int max = (int)0;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(78)
	int nlPos = (int)0;		HX_STACK_VAR(nlPos,"nlPos");
	HX_STACK_LINE(79)
	int prevPos = (int)0;		HX_STACK_VAR(prevPos,"prevPos");
	HX_STACK_LINE(80)
	while((true)){
		HX_STACK_LINE(81)
		::String tmp = this->__text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		int tmp1 = prevPos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		int tmp2 = tmp.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		nlPos = tmp2;
		HX_STACK_LINE(82)
		bool tmp3 = (nlPos > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		if ((tmp3)){
			HX_STACK_LINE(82)
			int tmp5 = (nlPos - prevPos);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(82)
			int tmp7 = max;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(82)
			tmp4 = (tmp6 > tmp7);
		}
		else{
			HX_STACK_LINE(82)
			tmp4 = false;
		}
		HX_STACK_LINE(82)
		if ((tmp4)){
			HX_STACK_LINE(83)
			int tmp5 = (nlPos - prevPos);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			max = tmp5;
		}
		HX_STACK_LINE(85)
		int tmp5 = (nlPos + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(85)
		prevPos = tmp5;
		HX_STACK_LINE(86)
		bool tmp6 = (nlPos >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(86)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(80)
		if ((tmp7)){
			HX_STACK_LINE(80)
			break;
		}
	}
	HX_STACK_LINE(88)
	int tmp = max;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextRenderer_obj,getWidth,return )

Float TextRenderer_obj::getHeight( ){
	HX_STACK_FRAME("sx.backend.dummy.TextRenderer","getHeight",0xb5f910e8,"sx.backend.dummy.TextRenderer.getHeight","sx/backend/dummy/TextRenderer.hx",96,0x4f2604c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	int linesCount = (int)0;		HX_STACK_VAR(linesCount,"linesCount");
	HX_STACK_LINE(98)
	::String tmp = this->__text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	int tmp1 = tmp.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	int pos = tmp1;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(99)
	while((true)){
		HX_STACK_LINE(99)
		bool tmp2 = (pos >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		if ((tmp3)){
			HX_STACK_LINE(99)
			break;
		}
		HX_STACK_LINE(100)
		::String tmp4 = this->__text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		int tmp5 = (pos + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		int tmp6 = tmp4.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		pos = tmp6;
	}
	HX_STACK_LINE(103)
	int tmp2 = linesCount;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TextRenderer_obj,getHeight,return )

Void TextRenderer_obj::setAvailableAreaWidth( Float width){
{
		HX_STACK_FRAME("sx.backend.dummy.TextRenderer","setAvailableAreaWidth",0xd589f4bd,"sx.backend.dummy.TextRenderer.setAvailableAreaWidth","sx/backend/dummy/TextRenderer.hx",111,0x4f2604c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextRenderer_obj,setAvailableAreaWidth,(void))

Void TextRenderer_obj::setAvailableAreaHeight( Float height){
{
		HX_STACK_FRAME("sx.backend.dummy.TextRenderer","setAvailableAreaHeight",0xb97ba950,"sx.backend.dummy.TextRenderer.setAvailableAreaHeight","sx/backend/dummy/TextRenderer.hx",120,0x4f2604c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextRenderer_obj,setAvailableAreaHeight,(void))

Void TextRenderer_obj::dispose( ){
{
		HX_STACK_FRAME("sx.backend.dummy.TextRenderer","dispose",0xeef2e7aa,"sx.backend.dummy.TextRenderer.dispose","sx/backend/dummy/TextRenderer.hx",130,0x4f2604c2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		this->__textField = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextRenderer_obj,dispose,(void))


TextRenderer_obj::TextRenderer_obj()
{
}

void TextRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextRenderer);
	HX_MARK_MEMBER_NAME(__textField,"__textField");
	HX_MARK_MEMBER_NAME(__text,"__text");
	HX_MARK_MEMBER_NAME(__onResize,"__onResize");
	HX_MARK_MEMBER_NAME(__format,"__format");
	HX_MARK_END_CLASS();
}

void TextRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__textField,"__textField");
	HX_VISIT_MEMBER_NAME(__text,"__text");
	HX_VISIT_MEMBER_NAME(__onResize,"__onResize");
	HX_VISIT_MEMBER_NAME(__format,"__format");
}

Dynamic TextRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__text") ) { return __text; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setText") ) { return setText_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { return __format; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFormat") ) { return getFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__onResize") ) { return __onResize; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__textField") ) { return __textField; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setAvailableAreaWidth") ) { return setAvailableAreaWidth_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setAvailableAreaHeight") ) { return setAvailableAreaHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__text") ) { __text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { __format=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__onResize") ) { __onResize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__textField") ) { __textField=inValue.Cast< ::sx::widgets::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TextRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__textField","\xad","\x6d","\xad","\xc7"));
	outFields->push(HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb"));
	outFields->push(HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sx::widgets::Text*/ ,(int)offsetof(TextRenderer_obj,__textField),HX_HCSTRING("__textField","\xad","\x6d","\xad","\xc7")},
	{hx::fsString,(int)offsetof(TextRenderer_obj,__text),HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextRenderer_obj,__onResize),HX_HCSTRING("__onResize","\x93","\xc3","\x60","\x8b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextRenderer_obj,__format),HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__textField","\xad","\x6d","\xad","\xc7"),
	HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb"),
	HX_HCSTRING("__onResize","\x93","\xc3","\x60","\x8b"),
	HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5"),
	HX_HCSTRING("setText","\x6f","\x0d","\x7e","\x12"),
	HX_HCSTRING("getFormat","\x6d","\x18","\xe5","\x79"),
	HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("getWidth","\x90","\xc5","\x39","\x2a"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("setAvailableAreaWidth","\x72","\x70","\x4d","\x27"),
	HX_HCSTRING("setAvailableAreaHeight","\xfb","\x6b","\xc4","\xf2"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class TextRenderer_obj::__mClass;

void TextRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.backend.dummy.TextRenderer","\x79","\x44","\x97","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TextRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextRenderer_obj >;
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
