#include <hxcpp.h>

#ifndef INCLUDED_sx_properties__Align_NoneAlign_Impl_
#include <sx/properties/_Align/NoneAlign_Impl_.h>
#endif
namespace sx{
namespace properties{
namespace _Align{

Void NoneAlign_Impl__obj::__construct()
{
	return null();
}

//NoneAlign_Impl__obj::~NoneAlign_Impl__obj() { }

Dynamic NoneAlign_Impl__obj::__CreateEmpty() { return  new NoneAlign_Impl__obj; }
hx::ObjectPtr< NoneAlign_Impl__obj > NoneAlign_Impl__obj::__new()
{  hx::ObjectPtr< NoneAlign_Impl__obj > _result_ = new NoneAlign_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic NoneAlign_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NoneAlign_Impl__obj > _result_ = new NoneAlign_Impl__obj();
	_result_->__construct();
	return _result_;}

::String NoneAlign_Impl__obj::None;

::String NoneAlign_Impl__obj::toHorizontal( ::String this1){
	HX_STACK_FRAME("sx.properties._Align.NoneAlign_Impl_","toHorizontal",0xddea1956,"sx.properties._Align.NoneAlign_Impl_.toHorizontal","sx/properties/Align.hx",63,0xb92dd46b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(63)
	return HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NoneAlign_Impl__obj,toHorizontal,return )

::String NoneAlign_Impl__obj::toVertical( ::String this1){
	HX_STACK_FRAME("sx.properties._Align.NoneAlign_Impl_","toVertical",0xff5f7868,"sx.properties._Align.NoneAlign_Impl_.toVertical","sx/properties/Align.hx",64,0xb92dd46b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(64)
	return HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NoneAlign_Impl__obj,toVertical,return )


NoneAlign_Impl__obj::NoneAlign_Impl__obj()
{
}

bool NoneAlign_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"toVertical") ) { outValue = toVertical_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toHorizontal") ) { outValue = toHorizontal_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &NoneAlign_Impl__obj::None,HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NoneAlign_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NoneAlign_Impl__obj::None,"None");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NoneAlign_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NoneAlign_Impl__obj::None,"None");
};

#endif

hx::Class NoneAlign_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),
	HX_HCSTRING("toHorizontal","\x3f","\x2e","\xa3","\xb7"),
	HX_HCSTRING("toVertical","\x11","\x51","\x32","\xdc"),
	::String(null()) };

void NoneAlign_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties._Align.NoneAlign_Impl_","\xb7","\x5b","\x39","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NoneAlign_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NoneAlign_Impl__obj >;
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

void NoneAlign_Impl__obj::__boot()
{
	None= HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
}

} // end namespace sx
} // end namespace properties
} // end namespace _Align
