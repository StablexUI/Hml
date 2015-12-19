#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_hunit_exceptions_AssertException
#include <hunit/exceptions/AssertException.h>
#endif
#ifndef INCLUDED_hunit_exceptions_TestFailException
#include <hunit/exceptions/TestFailException.h>
#endif
namespace hunit{
namespace exceptions{

Void AssertException_obj::__construct(::String message,Dynamic pos)
{
HX_STACK_FRAME("hunit.exceptions.AssertException","new",0xf0f6a913,"hunit.exceptions.AssertException.new","hunit/exceptions/AssertException.hx",9,0x4727af5d)
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

//AssertException_obj::~AssertException_obj() { }

Dynamic AssertException_obj::__CreateEmpty() { return  new AssertException_obj; }
hx::ObjectPtr< AssertException_obj > AssertException_obj::__new(::String message,Dynamic pos)
{  hx::ObjectPtr< AssertException_obj > _result_ = new AssertException_obj();
	_result_->__construct(message,pos);
	return _result_;}

Dynamic AssertException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssertException_obj > _result_ = new AssertException_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


AssertException_obj::AssertException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssertException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssertException_obj::__mClass,"__mClass");
};

#endif

hx::Class AssertException_obj::__mClass;

void AssertException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.exceptions.AssertException","\xa1","\x23","\x6a","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssertException_obj >;
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
