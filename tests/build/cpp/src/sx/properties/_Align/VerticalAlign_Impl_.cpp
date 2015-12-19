#include <hxcpp.h>

#ifndef INCLUDED_sx_properties_Align
#include <sx/properties/Align.h>
#endif
#ifndef INCLUDED_sx_properties__Align_VerticalAlign_Impl_
#include <sx/properties/_Align/VerticalAlign_Impl_.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__AAlign_AAlign_Impl_
#include <sx/properties/abstracts/_AAlign/AAlign_Impl_.h>
#endif
namespace sx{
namespace properties{
namespace _Align{

Void VerticalAlign_Impl__obj::__construct()
{
	return null();
}

//VerticalAlign_Impl__obj::~VerticalAlign_Impl__obj() { }

Dynamic VerticalAlign_Impl__obj::__CreateEmpty() { return  new VerticalAlign_Impl__obj; }
hx::ObjectPtr< VerticalAlign_Impl__obj > VerticalAlign_Impl__obj::__new()
{  hx::ObjectPtr< VerticalAlign_Impl__obj > _result_ = new VerticalAlign_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic VerticalAlign_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VerticalAlign_Impl__obj > _result_ = new VerticalAlign_Impl__obj();
	_result_->__construct();
	return _result_;}

::String VerticalAlign_Impl__obj::Top;

::String VerticalAlign_Impl__obj::Middle;

::String VerticalAlign_Impl__obj::Bottom;

::String VerticalAlign_Impl__obj::VNone;

::sx::properties::Align VerticalAlign_Impl__obj::andHorizontal( ::String this1,::String b){
	HX_STACK_FRAME("sx.properties._Align.VerticalAlign_Impl_","andHorizontal",0xcfb46726,"sx.properties._Align.VerticalAlign_Impl_.andHorizontal","sx/properties/Align.hx",46,0xb92dd46b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(47)
	::String tmp = b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	::sx::properties::Align tmp1 = ::sx::properties::abstracts::_AAlign::AAlign_Impl__obj::fromHorizontal(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	::sx::properties::Align weakAlign = tmp1;		HX_STACK_VAR(weakAlign,"weakAlign");
	HX_STACK_LINE(48)
	::String tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	weakAlign->set_vertical(tmp2);
	HX_STACK_LINE(50)
	::sx::properties::Align tmp3 = weakAlign;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VerticalAlign_Impl__obj,andHorizontal,return )


VerticalAlign_Impl__obj::VerticalAlign_Impl__obj()
{
}

bool VerticalAlign_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"andHorizontal") ) { outValue = andHorizontal_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &VerticalAlign_Impl__obj::Top,HX_HCSTRING("Top","\x75","\x1e","\x40","\x00")},
	{hx::fsString,(void *) &VerticalAlign_Impl__obj::Middle,HX_HCSTRING("Middle","\x75","\x47","\xf3","\x80")},
	{hx::fsString,(void *) &VerticalAlign_Impl__obj::Bottom,HX_HCSTRING("Bottom","\x0b","\x5b","\x0d","\x9a")},
	{hx::fsString,(void *) &VerticalAlign_Impl__obj::VNone,HX_HCSTRING("VNone","\x2e","\x22","\x59","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VerticalAlign_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VerticalAlign_Impl__obj::Top,"Top");
	HX_MARK_MEMBER_NAME(VerticalAlign_Impl__obj::Middle,"Middle");
	HX_MARK_MEMBER_NAME(VerticalAlign_Impl__obj::Bottom,"Bottom");
	HX_MARK_MEMBER_NAME(VerticalAlign_Impl__obj::VNone,"VNone");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VerticalAlign_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VerticalAlign_Impl__obj::Top,"Top");
	HX_VISIT_MEMBER_NAME(VerticalAlign_Impl__obj::Middle,"Middle");
	HX_VISIT_MEMBER_NAME(VerticalAlign_Impl__obj::Bottom,"Bottom");
	HX_VISIT_MEMBER_NAME(VerticalAlign_Impl__obj::VNone,"VNone");
};

#endif

hx::Class VerticalAlign_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Top","\x75","\x1e","\x40","\x00"),
	HX_HCSTRING("Middle","\x75","\x47","\xf3","\x80"),
	HX_HCSTRING("Bottom","\x0b","\x5b","\x0d","\x9a"),
	HX_HCSTRING("VNone","\x2e","\x22","\x59","\xb8"),
	HX_HCSTRING("andHorizontal","\x9b","\x8e","\x87","\x11"),
	::String(null()) };

void VerticalAlign_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties._Align.VerticalAlign_Impl_","\xb9","\x2b","\x5c","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VerticalAlign_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< VerticalAlign_Impl__obj >;
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

void VerticalAlign_Impl__obj::__boot()
{
	Top= HX_HCSTRING("top","\x95","\x66","\x58","\x00");
	Middle= HX_HCSTRING("middle","\x55","\xd3","\x5e","\x4c");
	Bottom= HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65");
	VNone= HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
}

} // end namespace sx
} // end namespace properties
} // end namespace _Align
