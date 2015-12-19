#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_hunit_exceptions_WarningException
#include <hunit/exceptions/WarningException.h>
#endif
namespace hunit{
namespace exceptions{

Void WarningException_obj::__construct(::String message,Dynamic pos)
{
HX_STACK_FRAME("hunit.exceptions.WarningException","new",0xbd3d6acd,"hunit.exceptions.WarningException.new","hunit/exceptions/WarningException.hx",9,0x383e43a3)
HX_STACK_THIS(this)
HX_STACK_ARG(message,"message")
HX_STACK_ARG(pos,"pos")
{
	HX_STACK_LINE(9)
	::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	Dynamic tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//WarningException_obj::~WarningException_obj() { }

Dynamic WarningException_obj::__CreateEmpty() { return  new WarningException_obj; }
hx::ObjectPtr< WarningException_obj > WarningException_obj::__new(::String message,Dynamic pos)
{  hx::ObjectPtr< WarningException_obj > _result_ = new WarningException_obj();
	_result_->__construct(message,pos);
	return _result_;}

Dynamic WarningException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WarningException_obj > _result_ = new WarningException_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


WarningException_obj::WarningException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WarningException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WarningException_obj::__mClass,"__mClass");
};

#endif

hx::Class WarningException_obj::__mClass;

void WarningException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.exceptions.WarningException","\x5b","\x00","\x8b","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< WarningException_obj >;
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
} // end namespace exceptions
