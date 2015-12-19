#include <hxcpp.h>

#ifndef INCLUDED_hunit_warnings_ForcedWarning
#include <hunit/warnings/ForcedWarning.h>
#endif
#ifndef INCLUDED_hunit_warnings_Warning
#include <hunit/warnings/Warning.h>
#endif
namespace hunit{
namespace warnings{

Void ForcedWarning_obj::__construct(::String message)
{
HX_STACK_FRAME("hunit.warnings.ForcedWarning","new",0x21861840,"hunit.warnings.ForcedWarning.new","hunit/warnings/ForcedWarning.hx",11,0x8f77e710)
HX_STACK_THIS(this)
HX_STACK_ARG(message,"message")
{
	HX_STACK_LINE(11)
	::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	super::__construct(tmp);
}
;
	return null();
}

//ForcedWarning_obj::~ForcedWarning_obj() { }

Dynamic ForcedWarning_obj::__CreateEmpty() { return  new ForcedWarning_obj; }
hx::ObjectPtr< ForcedWarning_obj > ForcedWarning_obj::__new(::String message)
{  hx::ObjectPtr< ForcedWarning_obj > _result_ = new ForcedWarning_obj();
	_result_->__construct(message);
	return _result_;}

Dynamic ForcedWarning_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ForcedWarning_obj > _result_ = new ForcedWarning_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


ForcedWarning_obj::ForcedWarning_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ForcedWarning_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ForcedWarning_obj::__mClass,"__mClass");
};

#endif

hx::Class ForcedWarning_obj::__mClass;

void ForcedWarning_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.warnings.ForcedWarning","\x4e","\x38","\x8d","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ForcedWarning_obj >;
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

} // end namespace hunit
} // end namespace warnings
