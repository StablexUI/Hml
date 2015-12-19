#include <hxcpp.h>

#ifndef INCLUDED_sx_Sx
#include <sx/Sx.h>
#endif
#ifndef INCLUDED_sx_skins__ASkin_ASkin_Impl_
#include <sx/skins/_ASkin/ASkin_Impl_.h>
#endif
#ifndef INCLUDED_sx_skins_base_SkinBase
#include <sx/skins/base/SkinBase.h>
#endif
namespace sx{
namespace skins{
namespace _ASkin{

Void ASkin_Impl__obj::__construct()
{
	return null();
}

//ASkin_Impl__obj::~ASkin_Impl__obj() { }

Dynamic ASkin_Impl__obj::__CreateEmpty() { return  new ASkin_Impl__obj; }
hx::ObjectPtr< ASkin_Impl__obj > ASkin_Impl__obj::__new()
{  hx::ObjectPtr< ASkin_Impl__obj > _result_ = new ASkin_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ASkin_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ASkin_Impl__obj > _result_ = new ASkin_Impl__obj();
	_result_->__construct();
	return _result_;}

::sx::skins::base::SkinBase ASkin_Impl__obj::__byName( ::String name){
	HX_STACK_FRAME("sx.skins._ASkin.ASkin_Impl_","__byName",0x3d4f83e0,"sx.skins._ASkin.ASkin_Impl_.__byName","sx/skins/ASkin.hx",18,0x21d9c0a3)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(19)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	::sx::skins::base::SkinBase tmp1 = ::sx::Sx_obj::skin(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASkin_Impl__obj,__byName,return )


ASkin_Impl__obj::ASkin_Impl__obj()
{
}

bool ASkin_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__byName") ) { outValue = __byName_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ASkin_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ASkin_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class ASkin_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__byName","\xe2","\x96","\x7d","\xb6"),
	::String(null()) };

void ASkin_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.skins._ASkin.ASkin_Impl_","\x30","\x0b","\x2c","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ASkin_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ASkin_Impl__obj >;
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
} // end namespace skins
} // end namespace _ASkin
