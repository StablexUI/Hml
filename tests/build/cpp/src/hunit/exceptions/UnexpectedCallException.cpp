#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_hunit_call_Call
#include <hunit/call/Call.h>
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
#ifndef INCLUDED_hunit_exceptions_UnexpectedCallException
#include <hunit/exceptions/UnexpectedCallException.h>
#endif
namespace hunit{
namespace exceptions{

Void UnexpectedCallException_obj::__construct(::hunit::call::Call call,::hunit::call::Expect expect,::String reason,Dynamic pos)
{
HX_STACK_FRAME("hunit.exceptions.UnexpectedCallException","new",0x737b572a,"hunit.exceptions.UnexpectedCallException.new","hunit/exceptions/UnexpectedCallException.hx",49,0xff273126)
HX_STACK_THIS(this)
HX_STACK_ARG(call,"call")
HX_STACK_ARG(expect,"expect")
HX_STACK_ARG(reason,"reason")
HX_STACK_ARG(pos,"pos")
{
	HX_STACK_LINE(50)
	bool tmp = (reason != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	if ((tmp)){
		HX_STACK_LINE(50)
		tmp1 = reason;
	}
	else{
		HX_STACK_LINE(50)
		::hunit::call::Call tmp2 = call;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		::hunit::call::Expect tmp3 = expect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		tmp1 = ::hunit::exceptions::UnexpectedCallException_obj::generateMessage(tmp2,tmp3);
	}
	HX_STACK_LINE(50)
	::String msg = tmp1;		HX_STACK_VAR(msg,"msg");
	HX_STACK_LINE(52)
	::String tmp2 = msg;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	Dynamic tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	super::__construct(tmp2,tmp3);
	HX_STACK_LINE(54)
	this->stack = ::Exception_obj::processCallStackOnCreation(call->stack);
}
;
	return null();
}

//UnexpectedCallException_obj::~UnexpectedCallException_obj() { }

Dynamic UnexpectedCallException_obj::__CreateEmpty() { return  new UnexpectedCallException_obj; }
hx::ObjectPtr< UnexpectedCallException_obj > UnexpectedCallException_obj::__new(::hunit::call::Call call,::hunit::call::Expect expect,::String reason,Dynamic pos)
{  hx::ObjectPtr< UnexpectedCallException_obj > _result_ = new UnexpectedCallException_obj();
	_result_->__construct(call,expect,reason,pos);
	return _result_;}

Dynamic UnexpectedCallException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UnexpectedCallException_obj > _result_ = new UnexpectedCallException_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::String UnexpectedCallException_obj::generateMessage( ::hunit::call::Call call,::hunit::call::Expect expect){
	HX_STACK_FRAME("hunit.exceptions.UnexpectedCallException","generateMessage",0x53070cdc,"hunit.exceptions.UnexpectedCallException.generateMessage","hunit/exceptions/UnexpectedCallException.hx",27,0xff273126)
	HX_STACK_ARG(call,"call")
	HX_STACK_ARG(expect,"expect")
	HX_STACK_LINE(28)
	::String expectMsg = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(expectMsg,"expectMsg");
	HX_STACK_LINE(29)
	bool tmp = (expect != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	if ((tmp)){
		HX_STACK_LINE(30)
		bool tmp1 = (expect->timesMatched == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		if ((tmp1)){
			HX_STACK_LINE(30)
			tmp2 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(30)
			tmp2 = HX_HCSTRING("s","\x73","\x00","\x00","\x00");
		}
		HX_STACK_LINE(30)
		::String s = tmp2;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(31)
		::hunit::call::Expect tmp3 = expect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		::String tmp5 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		::String tmp6 = (tmp5 + HX_HCSTRING(", but called ","\x30","\x8f","\x44","\x7c"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		int tmp7 = expect->timesMatched;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(31)
		::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(31)
		::String tmp9 = (tmp8 + HX_HCSTRING(" time","\x2d","\x5c","\xcf","\xb9"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(31)
		::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(31)
		::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(31)
		::String tmp12 = (tmp11 + HX_HCSTRING(" and last one was","\xae","\x89","\xd5","\x8d"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(31)
		expectMsg = tmp12;
	}
	HX_STACK_LINE(34)
	::String tmp1 = (HX_HCSTRING("Unexpected call:","\x6d","\xa2","\x39","\x11") + expectMsg);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	::String tmp2 = (tmp1 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	::hunit::call::Call tmp3 = call;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(34)
	::String msg = tmp5;		HX_STACK_VAR(msg,"msg");
	HX_STACK_LINE(36)
	::String tmp6 = msg;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(36)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UnexpectedCallException_obj,generateMessage,return )


UnexpectedCallException_obj::UnexpectedCallException_obj()
{
}

bool UnexpectedCallException_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"generateMessage") ) { outValue = generateMessage_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UnexpectedCallException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UnexpectedCallException_obj::__mClass,"__mClass");
};

#endif

hx::Class UnexpectedCallException_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("generateMessage","\x12","\x7f","\xcb","\x75"),
	::String(null()) };

void UnexpectedCallException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.exceptions.UnexpectedCallException","\x38","\x3a","\xaa","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UnexpectedCallException_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< UnexpectedCallException_obj >;
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
