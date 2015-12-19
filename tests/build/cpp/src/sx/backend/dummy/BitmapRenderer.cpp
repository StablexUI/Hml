#include <hxcpp.h>

#ifndef INCLUDED_sx_backend_dummy_BitmapRenderer
#include <sx/backend/dummy/BitmapRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IBitmapRenderer
#include <sx/backend/interfaces/IBitmapRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IRenderer
#include <sx/backend/interfaces/IRenderer.h>
#endif
#ifndef INCLUDED_sx_widgets_Bmp
#include <sx/widgets/Bmp.h>
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

Void BitmapRenderer_obj::__construct(::sx::widgets::Bmp bmp)
{
HX_STACK_FRAME("sx.backend.dummy.BitmapRenderer","new",0xf669406d,"sx.backend.dummy.BitmapRenderer.new","sx/backend/dummy/BitmapRenderer.hx",28,0xb5d2d1c0)
HX_STACK_THIS(this)
HX_STACK_ARG(bmp,"bmp")
{
	HX_STACK_LINE(28)
	this->__bmp = bmp;
}
;
	return null();
}

//BitmapRenderer_obj::~BitmapRenderer_obj() { }

Dynamic BitmapRenderer_obj::__CreateEmpty() { return  new BitmapRenderer_obj; }
hx::ObjectPtr< BitmapRenderer_obj > BitmapRenderer_obj::__new(::sx::widgets::Bmp bmp)
{  hx::ObjectPtr< BitmapRenderer_obj > _result_ = new BitmapRenderer_obj();
	_result_->__construct(bmp);
	return _result_;}

Dynamic BitmapRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapRenderer_obj > _result_ = new BitmapRenderer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *BitmapRenderer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::sx::backend::interfaces::IBitmapRenderer_obj)) return operator ::sx::backend::interfaces::IBitmapRenderer_obj *();
	if (inType==typeid( ::sx::backend::interfaces::IRenderer_obj)) return operator ::sx::backend::interfaces::IRenderer_obj *();
	return super::__ToInterface(inType);
}

BitmapRenderer_obj::operator ::sx::backend::interfaces::IBitmapRenderer_obj *()
	{ return new ::sx::backend::interfaces::IBitmapRenderer_delegate_< BitmapRenderer_obj >(this); }
BitmapRenderer_obj::operator ::sx::backend::interfaces::IRenderer_obj *()
	{ return new ::sx::backend::interfaces::IRenderer_delegate_< BitmapRenderer_obj >(this); }
Void BitmapRenderer_obj::setBitmapData( Dynamic bitmapData){
{
		HX_STACK_FRAME("sx.backend.dummy.BitmapRenderer","setBitmapData",0xf1c5d648,"sx.backend.dummy.BitmapRenderer.setBitmapData","sx/backend/dummy/BitmapRenderer.hx",37,0xb5d2d1c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmapData,"bitmapData")
		HX_STACK_LINE(37)
		this->__bitmapData = bitmapData;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapRenderer_obj,setBitmapData,(void))

Float BitmapRenderer_obj::getBitmapDataWidth( ){
	HX_STACK_FRAME("sx.backend.dummy.BitmapRenderer","getBitmapDataWidth",0x2de5582a,"sx.backend.dummy.BitmapRenderer.getBitmapDataWidth","sx/backend/dummy/BitmapRenderer.hx",45,0xb5d2d1c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	Dynamic tmp = this->__bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	if ((tmp2)){
		HX_STACK_LINE(46)
		Dynamic tmp4 = this->__bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		tmp3 = (tmp5->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());
	}
	else{
		HX_STACK_LINE(46)
		tmp3 = true;
	}
	HX_STACK_LINE(46)
	if ((tmp3)){
		HX_STACK_LINE(47)
		return (int)0;
	}
	else{
		HX_STACK_LINE(49)
		Dynamic tmp4 = this->__bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		return tmp4->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
	}
	HX_STACK_LINE(46)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapRenderer_obj,getBitmapDataWidth,return )

Float BitmapRenderer_obj::getBitmapDataHeight( ){
	HX_STACK_FRAME("sx.backend.dummy.BitmapRenderer","getBitmapDataHeight",0xb1174543,"sx.backend.dummy.BitmapRenderer.getBitmapDataHeight","sx/backend/dummy/BitmapRenderer.hx",58,0xb5d2d1c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	Dynamic tmp = this->__bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	if ((tmp2)){
		HX_STACK_LINE(59)
		Dynamic tmp4 = this->__bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		tmp3 = (tmp5->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());
	}
	else{
		HX_STACK_LINE(59)
		tmp3 = true;
	}
	HX_STACK_LINE(59)
	if ((tmp3)){
		HX_STACK_LINE(60)
		return (int)0;
	}
	else{
		HX_STACK_LINE(62)
		Dynamic tmp4 = this->__bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		return tmp4->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
	}
	HX_STACK_LINE(59)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapRenderer_obj,getBitmapDataHeight,return )

Void BitmapRenderer_obj::setBitmapScale( Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("sx.backend.dummy.BitmapRenderer","setBitmapScale",0x3f9c68ac,"sx.backend.dummy.BitmapRenderer.setBitmapScale","sx/backend/dummy/BitmapRenderer.hx",71,0xb5d2d1c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapRenderer_obj,setBitmapScale,(void))

Void BitmapRenderer_obj::setBitmapSmoothing( bool smooth){
{
		HX_STACK_FRAME("sx.backend.dummy.BitmapRenderer","setBitmapSmoothing",0x90242896,"sx.backend.dummy.BitmapRenderer.setBitmapSmoothing","sx/backend/dummy/BitmapRenderer.hx",80,0xb5d2d1c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(smooth,"smooth")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapRenderer_obj,setBitmapSmoothing,(void))

Float BitmapRenderer_obj::getWidth( ){
	HX_STACK_FRAME("sx.backend.dummy.BitmapRenderer","getWidth",0x33120663,"sx.backend.dummy.BitmapRenderer.getWidth","sx/backend/dummy/BitmapRenderer.hx",89,0xb5d2d1c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	Dynamic tmp = this->__bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(90)
	if ((tmp2)){
		HX_STACK_LINE(90)
		Dynamic tmp4 = this->__bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		tmp3 = (tmp5->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());
	}
	else{
		HX_STACK_LINE(90)
		tmp3 = true;
	}
	HX_STACK_LINE(90)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(90)
	if ((tmp3)){
		HX_STACK_LINE(90)
		tmp4 = (int)0;
	}
	else{
		HX_STACK_LINE(90)
		Dynamic tmp5 = this->__bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		tmp4 = tmp5->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
	}
	HX_STACK_LINE(90)
	Float tmp5 = ((Float)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(90)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapRenderer_obj,getWidth,return )

Float BitmapRenderer_obj::getHeight( ){
	HX_STACK_FRAME("sx.backend.dummy.BitmapRenderer","getHeight",0x330308ea,"sx.backend.dummy.BitmapRenderer.getHeight","sx/backend/dummy/BitmapRenderer.hx",98,0xb5d2d1c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	Dynamic tmp = this->__bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(99)
	if ((tmp2)){
		HX_STACK_LINE(99)
		Dynamic tmp4 = this->__bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		tmp3 = (tmp5->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());
	}
	else{
		HX_STACK_LINE(99)
		tmp3 = true;
	}
	HX_STACK_LINE(99)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(99)
	if ((tmp3)){
		HX_STACK_LINE(99)
		tmp4 = (int)0;
	}
	else{
		HX_STACK_LINE(99)
		Dynamic tmp5 = this->__bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		tmp4 = tmp5->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
	}
	HX_STACK_LINE(99)
	Float tmp5 = ((Float)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(99)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapRenderer_obj,getHeight,return )

Void BitmapRenderer_obj::onResize( Dynamic callback){
{
		HX_STACK_FRAME("sx.backend.dummy.BitmapRenderer","onResize",0xf1009146,"sx.backend.dummy.BitmapRenderer.onResize","sx/backend/dummy/BitmapRenderer.hx",110,0xb5d2d1c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_LINE(110)
		this->__onResize = callback;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapRenderer_obj,onResize,(void))

Void BitmapRenderer_obj::setAvailableAreaWidth( Float width){
{
		HX_STACK_FRAME("sx.backend.dummy.BitmapRenderer","setAvailableAreaWidth",0x4128e7bf,"sx.backend.dummy.BitmapRenderer.setAvailableAreaWidth","sx/backend/dummy/BitmapRenderer.hx",118,0xb5d2d1c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(119)
		Dynamic tmp = this->__bitmapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		if ((tmp1)){
			HX_STACK_LINE(120)
			Dynamic tmp2 = this->__bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(120)
			tmp2->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = width;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapRenderer_obj,setAvailableAreaWidth,(void))

Void BitmapRenderer_obj::setAvailableAreaHeight( Float height){
{
		HX_STACK_FRAME("sx.backend.dummy.BitmapRenderer","setAvailableAreaHeight",0x78f1580e,"sx.backend.dummy.BitmapRenderer.setAvailableAreaHeight","sx/backend/dummy/BitmapRenderer.hx",129,0xb5d2d1c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(130)
		Dynamic tmp = this->__bitmapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		if ((tmp1)){
			HX_STACK_LINE(131)
			Dynamic tmp2 = this->__bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(131)
			tmp2->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = height;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapRenderer_obj,setAvailableAreaHeight,(void))

Void BitmapRenderer_obj::dispose( ){
{
		HX_STACK_FRAME("sx.backend.dummy.BitmapRenderer","dispose",0x3d0f7b2c,"sx.backend.dummy.BitmapRenderer.dispose","sx/backend/dummy/BitmapRenderer.hx",140,0xb5d2d1c0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		this->__bmp = null();
		HX_STACK_LINE(142)
		this->__onResize = null();
		HX_STACK_LINE(143)
		this->__bitmapData = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapRenderer_obj,dispose,(void))


BitmapRenderer_obj::BitmapRenderer_obj()
{
}

void BitmapRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapRenderer);
	HX_MARK_MEMBER_NAME(__bmp,"__bmp");
	HX_MARK_MEMBER_NAME(__bitmapData,"__bitmapData");
	HX_MARK_MEMBER_NAME(__onResize,"__onResize");
	HX_MARK_END_CLASS();
}

void BitmapRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__bmp,"__bmp");
	HX_VISIT_MEMBER_NAME(__bitmapData,"__bitmapData");
	HX_VISIT_MEMBER_NAME(__onResize,"__onResize");
}

Dynamic BitmapRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__bmp") ) { return __bmp; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__onResize") ) { return __onResize; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { return __bitmapData; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setBitmapData") ) { return setBitmapData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setBitmapScale") ) { return setBitmapScale_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getBitmapDataWidth") ) { return getBitmapDataWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"setBitmapSmoothing") ) { return setBitmapSmoothing_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getBitmapDataHeight") ) { return getBitmapDataHeight_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setAvailableAreaWidth") ) { return setAvailableAreaWidth_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setAvailableAreaHeight") ) { return setAvailableAreaHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__bmp") ) { __bmp=inValue.Cast< ::sx::widgets::Bmp >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__onResize") ) { __onResize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { __bitmapData=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BitmapRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__bmp","\x25","\x1d","\x27","\xf2"));
	outFields->push(HX_HCSTRING("__bitmapData","\xd9","\x30","\x54","\x6c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sx::widgets::Bmp*/ ,(int)offsetof(BitmapRenderer_obj,__bmp),HX_HCSTRING("__bmp","\x25","\x1d","\x27","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapRenderer_obj,__bitmapData),HX_HCSTRING("__bitmapData","\xd9","\x30","\x54","\x6c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapRenderer_obj,__onResize),HX_HCSTRING("__onResize","\x93","\xc3","\x60","\x8b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__bmp","\x25","\x1d","\x27","\xf2"),
	HX_HCSTRING("__bitmapData","\xd9","\x30","\x54","\x6c"),
	HX_HCSTRING("__onResize","\x93","\xc3","\x60","\x8b"),
	HX_HCSTRING("setBitmapData","\xfb","\xf3","\x38","\xd5"),
	HX_HCSTRING("getBitmapDataWidth","\x97","\xb1","\xea","\xd4"),
	HX_HCSTRING("getBitmapDataHeight","\x36","\x2b","\xc0","\x2e"),
	HX_HCSTRING("setBitmapScale","\x99","\x47","\xe3","\x60"),
	HX_HCSTRING("setBitmapSmoothing","\x03","\x82","\x29","\x37"),
	HX_HCSTRING("getWidth","\x90","\xc5","\x39","\x2a"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("setAvailableAreaWidth","\x72","\x70","\x4d","\x27"),
	HX_HCSTRING("setAvailableAreaHeight","\xfb","\x6b","\xc4","\xf2"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapRenderer_obj::__mClass;

void BitmapRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.backend.dummy.BitmapRenderer","\xfb","\x85","\x73","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BitmapRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapRenderer_obj >;
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
