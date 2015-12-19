#include <hxcpp.h>

#ifndef INCLUDED_sx_properties_metric_Padding
#include <sx/properties/metric/Padding.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
#ifndef INCLUDED_sx_properties_metric_SizeSetterProxy
#include <sx/properties/metric/SizeSetterProxy.h>
#endif
#ifndef INCLUDED_sx_tools_PaddingTools
#include <sx/tools/PaddingTools.h>
#endif
namespace sx{
namespace tools{

Void PaddingTools_obj::__construct()
{
	return null();
}

//PaddingTools_obj::~PaddingTools_obj() { }

Dynamic PaddingTools_obj::__CreateEmpty() { return  new PaddingTools_obj; }
hx::ObjectPtr< PaddingTools_obj > PaddingTools_obj::__new()
{  hx::ObjectPtr< PaddingTools_obj > _result_ = new PaddingTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic PaddingTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PaddingTools_obj > _result_ = new PaddingTools_obj();
	_result_->__construct();
	return _result_;}

Float PaddingTools_obj::sumDip( ::sx::properties::metric::Padding padding,::String orientation){
	HX_STACK_FRAME("sx.tools.PaddingTools","sumDip",0xe56158e8,"sx.tools.PaddingTools.sumDip","sx/tools/PropertiesTools.hx",87,0xabe69754)
	HX_STACK_ARG(padding,"padding")
	HX_STACK_ARG(orientation,"orientation")
	HX_STACK_LINE(88)
	::String tmp = orientation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"))){
		HX_STACK_LINE(89)
		::sx::properties::metric::Size tmp2 = padding->get_left();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		Float tmp3 = tmp2->get_dip();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		::sx::properties::metric::Size tmp4 = padding->get_right();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		Float tmp5 = tmp4->get_dip();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		tmp1 = (tmp3 + tmp5);
	}
	else if (  ( _switch_1==HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"))){
		HX_STACK_LINE(90)
		::sx::properties::metric::Size tmp2 = padding->get_top();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		Float tmp3 = tmp2->get_dip();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(90)
		::sx::properties::metric::Size tmp4 = padding->get_bottom();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		Float tmp5 = tmp4->get_dip();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		tmp1 = (tmp3 + tmp5);
	}
	HX_STACK_LINE(88)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PaddingTools_obj,sumDip,return )

Float PaddingTools_obj::sumPx( ::sx::properties::metric::Padding padding,::String orientation){
	HX_STACK_FRAME("sx.tools.PaddingTools","sumPx",0xb1d1690b,"sx.tools.PaddingTools.sumPx","sx/tools/PropertiesTools.hx",99,0xabe69754)
	HX_STACK_ARG(padding,"padding")
	HX_STACK_ARG(orientation,"orientation")
	HX_STACK_LINE(100)
	::String tmp = orientation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	::String _switch_2 = (tmp);
	if (  ( _switch_2==HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"))){
		HX_STACK_LINE(101)
		::sx::properties::metric::Size tmp2 = padding->get_left();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		Float tmp3 = tmp2->get_px();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		::sx::properties::metric::Size tmp4 = padding->get_right();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(101)
		Float tmp5 = tmp4->get_px();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(101)
		tmp1 = (tmp3 + tmp5);
	}
	else if (  ( _switch_2==HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"))){
		HX_STACK_LINE(102)
		::sx::properties::metric::Size tmp2 = padding->get_top();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		Float tmp3 = tmp2->get_px();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		::sx::properties::metric::Size tmp4 = padding->get_bottom();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(102)
		Float tmp5 = tmp4->get_px();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		tmp1 = (tmp3 + tmp5);
	}
	HX_STACK_LINE(100)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PaddingTools_obj,sumPx,return )

::sx::properties::metric::Size PaddingTools_obj::side( ::sx::properties::metric::Padding padding,::String side){
	HX_STACK_FRAME("sx.tools.PaddingTools","side",0x9f2ee7ff,"sx.tools.PaddingTools.side","sx/tools/PropertiesTools.hx",111,0xabe69754)
	HX_STACK_ARG(padding,"padding")
	HX_STACK_ARG(side,"side")
	HX_STACK_LINE(112)
	::String tmp = side;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	::sx::properties::metric::Size tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	::String _switch_3 = (tmp);
	if (  ( _switch_3==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
		HX_STACK_LINE(113)
		tmp1 = padding->get_left();
	}
	else if (  ( _switch_3==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
		HX_STACK_LINE(114)
		tmp1 = padding->get_right();
	}
	else if (  ( _switch_3==HX_HCSTRING("top","\x95","\x66","\x58","\x00"))){
		HX_STACK_LINE(115)
		tmp1 = padding->get_top();
	}
	else if (  ( _switch_3==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"))){
		HX_STACK_LINE(116)
		tmp1 = padding->get_bottom();
	}
	HX_STACK_LINE(112)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PaddingTools_obj,side,return )

::sx::properties::metric::Size PaddingTools_obj::oppositeSide( ::sx::properties::metric::Padding padding,::String side){
	HX_STACK_FRAME("sx.tools.PaddingTools","oppositeSide",0xb16a9486,"sx.tools.PaddingTools.oppositeSide","sx/tools/PropertiesTools.hx",125,0xabe69754)
	HX_STACK_ARG(padding,"padding")
	HX_STACK_ARG(side,"side")
	HX_STACK_LINE(126)
	::String tmp = side;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	::sx::properties::metric::Size tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	::String _switch_4 = (tmp);
	if (  ( _switch_4==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
		HX_STACK_LINE(127)
		tmp1 = padding->get_right();
	}
	else if (  ( _switch_4==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
		HX_STACK_LINE(128)
		tmp1 = padding->get_left();
	}
	else if (  ( _switch_4==HX_HCSTRING("top","\x95","\x66","\x58","\x00"))){
		HX_STACK_LINE(129)
		tmp1 = padding->get_bottom();
	}
	else if (  ( _switch_4==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"))){
		HX_STACK_LINE(130)
		tmp1 = padding->get_top();
	}
	HX_STACK_LINE(126)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PaddingTools_obj,oppositeSide,return )

bool PaddingTools_obj::isZero( ::sx::properties::metric::Padding padding){
	HX_STACK_FRAME("sx.tools.PaddingTools","isZero",0xb28c989a,"sx.tools.PaddingTools.isZero","sx/tools/PropertiesTools.hx",140,0xabe69754)
	HX_STACK_ARG(padding,"padding")
	HX_STACK_LINE(141)
	::sx::properties::metric::Size tmp = padding->get_left();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	Float tmp1 = tmp->__value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	bool leftZero = tmp2;		HX_STACK_VAR(leftZero,"leftZero");
	HX_STACK_LINE(142)
	::sx::properties::metric::Size tmp3 = padding->get_right();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(142)
	Float tmp4 = tmp3->__value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(142)
	bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(142)
	bool rightZero = tmp5;		HX_STACK_VAR(rightZero,"rightZero");
	HX_STACK_LINE(143)
	::sx::properties::metric::Size tmp6 = padding->get_top();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(143)
	Float tmp7 = tmp6->__value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(143)
	bool tmp8 = (tmp7 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(143)
	bool topZero = tmp8;		HX_STACK_VAR(topZero,"topZero");
	HX_STACK_LINE(144)
	::sx::properties::metric::Size tmp9 = padding->get_bottom();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(144)
	Float tmp10 = tmp9->__value;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(144)
	bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(144)
	bool bottomZero = tmp11;		HX_STACK_VAR(bottomZero,"bottomZero");
	HX_STACK_LINE(146)
	bool tmp12 = leftZero;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(146)
	bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(146)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(146)
	if ((tmp13)){
		HX_STACK_LINE(146)
		tmp14 = rightZero;
	}
	else{
		HX_STACK_LINE(146)
		tmp14 = false;
	}
	HX_STACK_LINE(146)
	bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(146)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(146)
	if ((tmp15)){
		HX_STACK_LINE(146)
		tmp16 = topZero;
	}
	else{
		HX_STACK_LINE(146)
		tmp16 = false;
	}
	HX_STACK_LINE(146)
	bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(146)
	if ((tmp16)){
		HX_STACK_LINE(146)
		tmp17 = bottomZero;
	}
	else{
		HX_STACK_LINE(146)
		tmp17 = false;
	}
	HX_STACK_LINE(146)
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PaddingTools_obj,isZero,return )


PaddingTools_obj::PaddingTools_obj()
{
}

bool PaddingTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"side") ) { outValue = side_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sumPx") ) { outValue = sumPx_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sumDip") ) { outValue = sumDip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isZero") ) { outValue = isZero_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"oppositeSide") ) { outValue = oppositeSide_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PaddingTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PaddingTools_obj::__mClass,"__mClass");
};

#endif

hx::Class PaddingTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sumDip","\x80","\x94","\x2c","\xa1"),
	HX_HCSTRING("sumPx","\x73","\xa8","\xbd","\x84"),
	HX_HCSTRING("side","\x97","\x8d","\x53","\x4c"),
	HX_HCSTRING("oppositeSide","\x1e","\x92","\x92","\xfa"),
	HX_HCSTRING("isZero","\x32","\xd4","\x57","\x6e"),
	::String(null()) };

void PaddingTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.tools.PaddingTools","\x06","\x1f","\x87","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PaddingTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PaddingTools_obj >;
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
} // end namespace tools
