#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_hunit_exceptions_NoExpectedException
#include <hunit/exceptions/NoExpectedException.h>
#endif
#ifndef INCLUDED_hunit_exceptions_TestFailException
#include <hunit/exceptions/TestFailException.h>
#endif
#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
namespace hunit{
namespace exceptions{

Void NoExpectedException_obj::__construct(::hunit::match::Match exceptionMatch,Dynamic pos)
{
HX_STACK_FRAME("hunit.exceptions.NoExpectedException","new",0x20c7e820,"hunit.exceptions.NoExpectedException.new","hunit/exceptions/NoExpectedException.hx",20,0xbadf20f0)
HX_STACK_THIS(this)
HX_STACK_ARG(exceptionMatch,"exceptionMatch")
HX_STACK_ARG(pos,"pos")
{
	HX_STACK_LINE(21)
	::String tmp = exceptionMatch->toString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	::String tmp1 = (HX_HCSTRING("Expected exception was not thrown: ","\xab","\xaa","\x3a","\xd2") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	Dynamic tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	super::__construct(tmp1,tmp2);
}
;
	return null();
}

//NoExpectedException_obj::~NoExpectedException_obj() { }

Dynamic NoExpectedException_obj::__CreateEmpty() { return  new NoExpectedException_obj; }
hx::ObjectPtr< NoExpectedException_obj > NoExpectedException_obj::__new(::hunit::match::Match exceptionMatch,Dynamic pos)
{  hx::ObjectPtr< NoExpectedException_obj > _result_ = new NoExpectedException_obj();
	_result_->__construct(exceptionMatch,pos);
	return _result_;}

Dynamic NoExpectedException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NoExpectedException_obj > _result_ = new NoExpectedException_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


NoExpectedException_obj::NoExpectedException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NoExpectedException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NoExpectedException_obj::__mClass,"__mClass");
};

#endif

hx::Class NoExpectedException_obj::__mClass;

void NoExpectedException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.exceptions.NoExpectedException","\x2e","\x98","\xf1","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NoExpectedException_obj >;
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
