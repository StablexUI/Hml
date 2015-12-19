#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hunit_call_Expect
#include <hunit/call/Expect.h>
#endif
#ifndef INCLUDED_hunit_call_IExpect
#include <hunit/call/IExpect.h>
#endif
#ifndef INCLUDED_hunit_exceptions_TestFailException
#include <hunit/exceptions/TestFailException.h>
#endif
#ifndef INCLUDED_hunit_exceptions_UnmetExpectationException
#include <hunit/exceptions/UnmetExpectationException.h>
#endif
namespace hunit{
namespace exceptions{

Void UnmetExpectationException_obj::__construct(::hunit::call::Expect expect,::String __o_reason,Dynamic pos)
{
HX_STACK_FRAME("hunit.exceptions.UnmetExpectationException","new",0x93b2c460,"hunit.exceptions.UnmetExpectationException.new","hunit/exceptions/UnmetExpectationException.hx",21,0xf86684b0)
HX_STACK_THIS(this)
HX_STACK_ARG(expect,"expect")
HX_STACK_ARG(__o_reason,"reason")
HX_STACK_ARG(pos,"pos")
::String reason = __o_reason.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(22)
	::String tmp = expect->pos->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::String file = tmp;		HX_STACK_VAR(file,"file");
	HX_STACK_LINE(23)
	int tmp1 = expect->pos->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	int line = tmp1;		HX_STACK_VAR(line,"line");
	HX_STACK_LINE(24)
	::hunit::call::Expect tmp2 = expect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	bool tmp5 = (reason.length != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(24)
	::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(24)
	if ((tmp5)){
		HX_STACK_LINE(24)
		tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + reason);
	}
	else{
		HX_STACK_LINE(24)
		tmp6 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(24)
	::String tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(24)
	::String msg = tmp7;		HX_STACK_VAR(msg,"msg");
	HX_STACK_LINE(26)
	::String tmp8 = msg;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(26)
	Dynamic tmp9 = pos;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(26)
	super::__construct(tmp8,tmp9);
}
;
	return null();
}

//UnmetExpectationException_obj::~UnmetExpectationException_obj() { }

Dynamic UnmetExpectationException_obj::__CreateEmpty() { return  new UnmetExpectationException_obj; }
hx::ObjectPtr< UnmetExpectationException_obj > UnmetExpectationException_obj::__new(::hunit::call::Expect expect,::String __o_reason,Dynamic pos)
{  hx::ObjectPtr< UnmetExpectationException_obj > _result_ = new UnmetExpectationException_obj();
	_result_->__construct(expect,__o_reason,pos);
	return _result_;}

Dynamic UnmetExpectationException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UnmetExpectationException_obj > _result_ = new UnmetExpectationException_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


UnmetExpectationException_obj::UnmetExpectationException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UnmetExpectationException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UnmetExpectationException_obj::__mClass,"__mClass");
};

#endif

hx::Class UnmetExpectationException_obj::__mClass;

void UnmetExpectationException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.exceptions.UnmetExpectationException","\x6e","\x54","\xa9","\xed");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< UnmetExpectationException_obj >;
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
