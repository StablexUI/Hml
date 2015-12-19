#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_hunit_exceptions_TestFailException
#include <hunit/exceptions/TestFailException.h>
#endif
namespace hunit{
namespace exceptions{

Void TestFailException_obj::__construct(::String message,Dynamic pos)
{
HX_STACK_FRAME("hunit.exceptions.TestFailException","new",0x9e155049,"hunit.exceptions.TestFailException.new","hunit/exceptions/TestFailException.hx",9,0x80dd08e7)
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

//TestFailException_obj::~TestFailException_obj() { }

Dynamic TestFailException_obj::__CreateEmpty() { return  new TestFailException_obj; }
hx::ObjectPtr< TestFailException_obj > TestFailException_obj::__new(::String message,Dynamic pos)
{  hx::ObjectPtr< TestFailException_obj > _result_ = new TestFailException_obj();
	_result_->__construct(message,pos);
	return _result_;}

Dynamic TestFailException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestFailException_obj > _result_ = new TestFailException_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


TestFailException_obj::TestFailException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestFailException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestFailException_obj::__mClass,"__mClass");
};

#endif

hx::Class TestFailException_obj::__mClass;

void TestFailException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.exceptions.TestFailException","\xd7","\x77","\xab","\x53");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TestFailException_obj >;
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
