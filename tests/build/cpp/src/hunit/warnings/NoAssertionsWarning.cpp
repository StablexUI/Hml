#include <hxcpp.h>

#ifndef INCLUDED_hunit_warnings_NoAssertionsWarning
#include <hunit/warnings/NoAssertionsWarning.h>
#endif
#ifndef INCLUDED_hunit_warnings_Warning
#include <hunit/warnings/Warning.h>
#endif
namespace hunit{
namespace warnings{

Void NoAssertionsWarning_obj::__construct(::String message)
{
HX_STACK_FRAME("hunit.warnings.NoAssertionsWarning","new",0x26e2ac27,"hunit.warnings.NoAssertionsWarning.new","hunit/warnings/NoAssertionsWarning.hx",11,0x5777b509)
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

//NoAssertionsWarning_obj::~NoAssertionsWarning_obj() { }

Dynamic NoAssertionsWarning_obj::__CreateEmpty() { return  new NoAssertionsWarning_obj; }
hx::ObjectPtr< NoAssertionsWarning_obj > NoAssertionsWarning_obj::__new(::String message)
{  hx::ObjectPtr< NoAssertionsWarning_obj > _result_ = new NoAssertionsWarning_obj();
	_result_->__construct(message);
	return _result_;}

Dynamic NoAssertionsWarning_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NoAssertionsWarning_obj > _result_ = new NoAssertionsWarning_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


NoAssertionsWarning_obj::NoAssertionsWarning_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NoAssertionsWarning_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NoAssertionsWarning_obj::__mClass,"__mClass");
};

#endif

hx::Class NoAssertionsWarning_obj::__mClass;

void NoAssertionsWarning_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.warnings.NoAssertionsWarning","\xb5","\x0c","\xaa","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NoAssertionsWarning_obj >;
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
