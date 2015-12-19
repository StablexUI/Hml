#include <hxcpp.h>

#ifndef INCLUDED_sx_properties_Align
#include <sx/properties/Align.h>
#endif
#ifndef INCLUDED_sx_properties__Align_HorizontalAlign_Impl_
#include <sx/properties/_Align/HorizontalAlign_Impl_.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__AAlign_AAlign_Impl_
#include <sx/properties/abstracts/_AAlign/AAlign_Impl_.h>
#endif
namespace sx{
namespace properties{
namespace _Align{

Void HorizontalAlign_Impl__obj::__construct()
{
	return null();
}

//HorizontalAlign_Impl__obj::~HorizontalAlign_Impl__obj() { }

Dynamic HorizontalAlign_Impl__obj::__CreateEmpty() { return  new HorizontalAlign_Impl__obj; }
hx::ObjectPtr< HorizontalAlign_Impl__obj > HorizontalAlign_Impl__obj::__new()
{  hx::ObjectPtr< HorizontalAlign_Impl__obj > _result_ = new HorizontalAlign_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic HorizontalAlign_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HorizontalAlign_Impl__obj > _result_ = new HorizontalAlign_Impl__obj();
	_result_->__construct();
	return _result_;}

::String HorizontalAlign_Impl__obj::Left;

::String HorizontalAlign_Impl__obj::Center;

::String HorizontalAlign_Impl__obj::Right;

::String HorizontalAlign_Impl__obj::HNone;

::sx::properties::Align HorizontalAlign_Impl__obj::andVertical( ::String this1,::String b){
	HX_STACK_FRAME("sx.properties._Align.HorizontalAlign_Impl_","andVertical",0x8384ae0a,"sx.properties._Align.HorizontalAlign_Impl_.andVertical","sx/properties/Align.hx",22,0xb92dd46b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(23)
	::String tmp = b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::sx::properties::Align tmp1 = ::sx::properties::abstracts::_AAlign::AAlign_Impl__obj::fromVertical(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	::sx::properties::Align weakAlign = tmp1;		HX_STACK_VAR(weakAlign,"weakAlign");
	HX_STACK_LINE(24)
	::String tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	weakAlign->set_horizontal(tmp2);
	HX_STACK_LINE(26)
	::sx::properties::Align tmp3 = weakAlign;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HorizontalAlign_Impl__obj,andVertical,return )


HorizontalAlign_Impl__obj::HorizontalAlign_Impl__obj()
{
}

bool HorizontalAlign_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"andVertical") ) { outValue = andVertical_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &HorizontalAlign_Impl__obj::Left,HX_HCSTRING("Left","\x27","\x34","\x89","\x32")},
	{hx::fsString,(void *) &HorizontalAlign_Impl__obj::Center,HX_HCSTRING("Center","\xf5","\x99","\x6f","\x3a")},
	{hx::fsString,(void *) &HorizontalAlign_Impl__obj::Right,HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c")},
	{hx::fsString,(void *) &HorizontalAlign_Impl__obj::HNone,HX_HCSTRING("HNone","\x20","\x03","\xbd","\xa8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HorizontalAlign_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HorizontalAlign_Impl__obj::Left,"Left");
	HX_MARK_MEMBER_NAME(HorizontalAlign_Impl__obj::Center,"Center");
	HX_MARK_MEMBER_NAME(HorizontalAlign_Impl__obj::Right,"Right");
	HX_MARK_MEMBER_NAME(HorizontalAlign_Impl__obj::HNone,"HNone");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HorizontalAlign_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HorizontalAlign_Impl__obj::Left,"Left");
	HX_VISIT_MEMBER_NAME(HorizontalAlign_Impl__obj::Center,"Center");
	HX_VISIT_MEMBER_NAME(HorizontalAlign_Impl__obj::Right,"Right");
	HX_VISIT_MEMBER_NAME(HorizontalAlign_Impl__obj::HNone,"HNone");
};

#endif

hx::Class HorizontalAlign_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Left","\x27","\x34","\x89","\x32"),
	HX_HCSTRING("Center","\xf5","\x99","\x6f","\x3a"),
	HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c"),
	HX_HCSTRING("HNone","\x20","\x03","\xbd","\xa8"),
	HX_HCSTRING("andVertical","\x6d","\xa2","\x5a","\x1e"),
	::String(null()) };

void HorizontalAlign_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties._Align.HorizontalAlign_Impl_","\x8b","\x34","\xc2","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HorizontalAlign_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HorizontalAlign_Impl__obj >;
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

void HorizontalAlign_Impl__obj::__boot()
{
	Left= HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	Center= HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
	Right= HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9");
	HNone= HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
}

} // end namespace sx
} // end namespace properties
} // end namespace _Align
