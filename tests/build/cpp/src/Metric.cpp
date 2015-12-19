#include <hxcpp.h>

#ifndef INCLUDED_Metric
#include <Metric.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Coordinate
#include <sx/properties/metric/Coordinate.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif

Void Metric_obj::__construct()
{
HX_STACK_FRAME("Metric","new",0x99ef0542,"Metric.new","Metric.hx",9,0x2692d86e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	this->percents_initialized = false;
	HX_STACK_LINE(15)
	this->pixels_initialized = false;
	HX_STACK_LINE(11)
	this->dips_initialized = false;
	HX_STACK_LINE(78)
	super::__construct();
	HX_STACK_LINE(79)
	::sx::widgets::Widget tmp = this->get_dips();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	this->addChild(tmp);
	HX_STACK_LINE(80)
	::sx::widgets::Widget tmp1 = this->get_pixels();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	this->addChild(tmp1);
	HX_STACK_LINE(81)
	::sx::widgets::Widget tmp2 = this->get_percents();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	this->addChild(tmp2);
}
;
	return null();
}

//Metric_obj::~Metric_obj() { }

Dynamic Metric_obj::__CreateEmpty() { return  new Metric_obj; }
hx::ObjectPtr< Metric_obj > Metric_obj::__new()
{  hx::ObjectPtr< Metric_obj > _result_ = new Metric_obj();
	_result_->__construct();
	return _result_;}

Dynamic Metric_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Metric_obj > _result_ = new Metric_obj();
	_result_->__construct();
	return _result_;}

Void Metric_obj::destroyHml( ){
{
		HX_STACK_FRAME("Metric","destroyHml",0x0b8fb84b,"Metric.destroyHml","Metric.hx",23,0x2692d86e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Metric_obj,destroyHml,(void))

::sx::widgets::Widget Metric_obj::set_dips( ::sx::widgets::Widget value){
	HX_STACK_FRAME("Metric","set_dips",0x107151a3,"Metric.set_dips","Metric.hx",28,0x2692d86e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(29)
	this->dips_initialized = true;
	HX_STACK_LINE(30)
	::sx::widgets::Widget tmp = this->dips = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Metric_obj,set_dips,return )

::sx::widgets::Widget Metric_obj::get_dips( ){
	HX_STACK_FRAME("Metric","get_dips",0x6213f82f,"Metric.get_dips","Metric.hx",33,0x2692d86e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	bool tmp = this->dips_initialized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	if ((tmp)){
		HX_STACK_LINE(35)
		::sx::widgets::Widget tmp1 = this->dips;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		return tmp1;
	}
	HX_STACK_LINE(36)
	this->dips_initialized = true;
	HX_STACK_LINE(37)
	::sx::widgets::Widget tmp1 = ::sx::widgets::Widget_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	this->set_dips(tmp1);
	HX_STACK_LINE(38)
	::sx::widgets::Widget tmp2 = this->dips;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	::sx::widgets::Widget res = tmp2;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(40)
	::sx::properties::metric::Coordinate tmp3 = res->get_left();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	tmp3->set_dip((int)10);
	HX_STACK_LINE(41)
	::sx::widgets::Widget tmp4 = res;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Metric_obj,get_dips,return )

::sx::widgets::Widget Metric_obj::set_pixels( ::sx::widgets::Widget value){
	HX_STACK_FRAME("Metric","set_pixels",0xde2b08c8,"Metric.set_pixels","Metric.hx",44,0x2692d86e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(45)
	this->pixels_initialized = true;
	HX_STACK_LINE(46)
	::sx::widgets::Widget tmp = this->pixels = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Metric_obj,set_pixels,return )

::sx::widgets::Widget Metric_obj::get_pixels( ){
	HX_STACK_FRAME("Metric","get_pixels",0xdaad6a54,"Metric.get_pixels","Metric.hx",49,0x2692d86e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	bool tmp = this->pixels_initialized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	if ((tmp)){
		HX_STACK_LINE(51)
		::sx::widgets::Widget tmp1 = this->pixels;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		return tmp1;
	}
	HX_STACK_LINE(52)
	this->pixels_initialized = true;
	HX_STACK_LINE(53)
	::sx::widgets::Widget tmp1 = ::sx::widgets::Widget_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	this->set_pixels(tmp1);
	HX_STACK_LINE(54)
	::sx::widgets::Widget tmp2 = this->pixels;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	::sx::widgets::Widget res = tmp2;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(56)
	::sx::properties::metric::Coordinate tmp3 = res->get_left();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	tmp3->set_px((int)10);
	HX_STACK_LINE(57)
	::sx::widgets::Widget tmp4 = res;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Metric_obj,get_pixels,return )

::sx::widgets::Widget Metric_obj::set_percents( ::sx::widgets::Widget value){
	HX_STACK_FRAME("Metric","set_percents",0xcda9b869,"Metric.set_percents","Metric.hx",60,0x2692d86e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(61)
	this->percents_initialized = true;
	HX_STACK_LINE(62)
	::sx::widgets::Widget tmp = this->percents = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Metric_obj,set_percents,return )

::sx::widgets::Widget Metric_obj::get_percents( ){
	HX_STACK_FRAME("Metric","get_percents",0xb8b094f5,"Metric.get_percents","Metric.hx",65,0x2692d86e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	bool tmp = this->percents_initialized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	if ((tmp)){
		HX_STACK_LINE(67)
		::sx::widgets::Widget tmp1 = this->percents;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		return tmp1;
	}
	HX_STACK_LINE(68)
	this->percents_initialized = true;
	HX_STACK_LINE(69)
	::sx::widgets::Widget tmp1 = ::sx::widgets::Widget_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	this->set_percents(tmp1);
	HX_STACK_LINE(70)
	::sx::widgets::Widget tmp2 = this->percents;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	::sx::widgets::Widget res = tmp2;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(72)
	::sx::properties::metric::Coordinate tmp3 = res->get_left();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	tmp3->set_pct((int)10);
	HX_STACK_LINE(73)
	::sx::widgets::Widget tmp4 = res;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(73)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Metric_obj,get_percents,return )


Metric_obj::Metric_obj()
{
}

void Metric_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Metric);
	HX_MARK_MEMBER_NAME(dips_initialized,"dips_initialized");
	HX_MARK_MEMBER_NAME(dips,"dips");
	HX_MARK_MEMBER_NAME(pixels_initialized,"pixels_initialized");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(percents_initialized,"percents_initialized");
	HX_MARK_MEMBER_NAME(percents,"percents");
	::sx::widgets::Widget_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Metric_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dips_initialized,"dips_initialized");
	HX_VISIT_MEMBER_NAME(dips,"dips");
	HX_VISIT_MEMBER_NAME(pixels_initialized,"pixels_initialized");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(percents_initialized,"percents_initialized");
	HX_VISIT_MEMBER_NAME(percents,"percents");
	::sx::widgets::Widget_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Metric_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dips") ) { return inCallProp == hx::paccAlways ? get_dips() : dips; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { return inCallProp == hx::paccAlways ? get_pixels() : pixels; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"percents") ) { return inCallProp == hx::paccAlways ? get_percents() : percents; }
		if (HX_FIELD_EQ(inName,"set_dips") ) { return set_dips_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dips") ) { return get_dips_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"destroyHml") ) { return destroyHml_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return set_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return get_pixels_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_percents") ) { return set_percents_dyn(); }
		if (HX_FIELD_EQ(inName,"get_percents") ) { return get_percents_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dips_initialized") ) { return dips_initialized; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixels_initialized") ) { return pixels_initialized; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"percents_initialized") ) { return percents_initialized; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Metric_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dips") ) { if (inCallProp == hx::paccAlways) return set_dips(inValue);dips=inValue.Cast< ::sx::widgets::Widget >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { if (inCallProp == hx::paccAlways) return set_pixels(inValue);pixels=inValue.Cast< ::sx::widgets::Widget >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"percents") ) { if (inCallProp == hx::paccAlways) return set_percents(inValue);percents=inValue.Cast< ::sx::widgets::Widget >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dips_initialized") ) { dips_initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixels_initialized") ) { pixels_initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"percents_initialized") ) { percents_initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Metric_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Metric_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dips_initialized","\xdd","\x13","\x6b","\x08"));
	outFields->push(HX_HCSTRING("dips","\xc8","\x64","\x69","\x42"));
	outFields->push(HX_HCSTRING("pixels_initialized","\xc2","\x21","\x44","\xfb"));
	outFields->push(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"));
	outFields->push(HX_HCSTRING("percents_initialized","\x23","\x42","\x36","\x62"));
	outFields->push(HX_HCSTRING("percents","\x0e","\xc2","\x7a","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Metric_obj,dips_initialized),HX_HCSTRING("dips_initialized","\xdd","\x13","\x6b","\x08")},
	{hx::fsObject /*::sx::widgets::Widget*/ ,(int)offsetof(Metric_obj,dips),HX_HCSTRING("dips","\xc8","\x64","\x69","\x42")},
	{hx::fsBool,(int)offsetof(Metric_obj,pixels_initialized),HX_HCSTRING("pixels_initialized","\xc2","\x21","\x44","\xfb")},
	{hx::fsObject /*::sx::widgets::Widget*/ ,(int)offsetof(Metric_obj,pixels),HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c")},
	{hx::fsBool,(int)offsetof(Metric_obj,percents_initialized),HX_HCSTRING("percents_initialized","\x23","\x42","\x36","\x62")},
	{hx::fsObject /*::sx::widgets::Widget*/ ,(int)offsetof(Metric_obj,percents),HX_HCSTRING("percents","\x0e","\xc2","\x7a","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dips_initialized","\xdd","\x13","\x6b","\x08"),
	HX_HCSTRING("dips","\xc8","\x64","\x69","\x42"),
	HX_HCSTRING("pixels_initialized","\xc2","\x21","\x44","\xfb"),
	HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"),
	HX_HCSTRING("percents_initialized","\x23","\x42","\x36","\x62"),
	HX_HCSTRING("percents","\x0e","\xc2","\x7a","\x46"),
	HX_HCSTRING("destroyHml","\xed","\xac","\x13","\xae"),
	HX_HCSTRING("set_dips","\xc5","\x79","\x81","\x70"),
	HX_HCSTRING("get_dips","\x51","\x20","\x24","\xc2"),
	HX_HCSTRING("set_pixels","\x6a","\xfd","\xae","\x80"),
	HX_HCSTRING("get_pixels","\xf6","\x5e","\x31","\x7d"),
	HX_HCSTRING("set_percents","\x8b","\x99","\x8d","\x10"),
	HX_HCSTRING("get_percents","\x17","\x76","\x94","\xfb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Metric_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Metric_obj::__mClass,"__mClass");
};

#endif

hx::Class Metric_obj::__mClass;

void Metric_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Metric","\x50","\xfc","\xf6","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Metric_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Metric_obj >;
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

