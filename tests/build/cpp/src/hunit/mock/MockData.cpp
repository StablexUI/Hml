#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_hunit_TestCase
#include <hunit/TestCase.h>
#endif
#ifndef INCLUDED_hunit_TestState
#include <hunit/TestState.h>
#endif
#ifndef INCLUDED_hunit_call_Call
#include <hunit/call/Call.h>
#endif
#ifndef INCLUDED_hunit_call_CallCount
#include <hunit/call/CallCount.h>
#endif
#ifndef INCLUDED_hunit_call_Expect
#include <hunit/call/Expect.h>
#endif
#ifndef INCLUDED_hunit_call_IExpect
#include <hunit/call/IExpect.h>
#endif
#ifndef INCLUDED_hunit_call_Stub
#include <hunit/call/Stub.h>
#endif
#ifndef INCLUDED_hunit_exceptions_InvalidTestException
#include <hunit/exceptions/InvalidTestException.h>
#endif
#ifndef INCLUDED_hunit_exceptions_TestFailException
#include <hunit/exceptions/TestFailException.h>
#endif
#ifndef INCLUDED_hunit_exceptions_UnexpectedCallException
#include <hunit/exceptions/UnexpectedCallException.h>
#endif
#ifndef INCLUDED_hunit_exceptions_UnmetExpectationException
#include <hunit/exceptions/UnmetExpectationException.h>
#endif
#ifndef INCLUDED_hunit_mock_MockData
#include <hunit/mock/MockData.h>
#endif
#ifndef INCLUDED_hunit_utils_Value
#include <hunit/utils/Value.h>
#endif
#ifndef INCLUDED_hunit_utils_ValueTools
#include <hunit/utils/ValueTools.h>
#endif
namespace hunit{
namespace mock{

Void MockData_obj::__construct(::hunit::TestCase testCase,::hx::Class mockClass,hx::Null< bool >  __o_fullStub,hx::Null< bool >  __o_strictMode)
{
HX_STACK_FRAME("hunit.mock.MockData","new",0x5b026b48,"hunit.mock.MockData.new","hunit/mock/MockData.hx",26,0x4db7d4c8)
HX_STACK_THIS(this)
HX_STACK_ARG(testCase,"testCase")
HX_STACK_ARG(mockClass,"mockClass")
HX_STACK_ARG(__o_fullStub,"fullStub")
HX_STACK_ARG(__o_strictMode,"strictMode")
bool fullStub = __o_fullStub.Default(false);
bool strictMode = __o_strictMode.Default(false);
{
	HX_STACK_LINE(44)
	this->strictMode = false;
	HX_STACK_LINE(42)
	this->fullStub = false;
	HX_STACK_LINE(34)
	this->callCounter = (int)0;
	HX_STACK_LINE(56)
	this->mockClass = mockClass;
	HX_STACK_LINE(57)
	this->testCase = testCase;
	HX_STACK_LINE(58)
	this->fullStub = fullStub;
	HX_STACK_LINE(59)
	this->strictMode = strictMode;
	HX_STACK_LINE(61)
	this->unstubbedMethods = Array_obj< ::String >::__new();
	HX_STACK_LINE(62)
	this->unstubPositions = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(63)
	this->callLog = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(64)
	this->stubs = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(65)
	this->expectations = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//MockData_obj::~MockData_obj() { }

Dynamic MockData_obj::__CreateEmpty() { return  new MockData_obj; }
hx::ObjectPtr< MockData_obj > MockData_obj::__new(::hunit::TestCase testCase,::hx::Class mockClass,hx::Null< bool >  __o_fullStub,hx::Null< bool >  __o_strictMode)
{  hx::ObjectPtr< MockData_obj > _result_ = new MockData_obj();
	_result_->__construct(testCase,mockClass,__o_fullStub,__o_strictMode);
	return _result_;}

Dynamic MockData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MockData_obj > _result_ = new MockData_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::String MockData_obj::mockClassName( ){
	HX_STACK_FRAME("hunit.mock.MockData","mockClassName",0x3e6e4ba1,"hunit.mock.MockData.mockClassName","hunit/mock/MockData.hx",74,0x4db7d4c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	::hx::Class tmp = this->mockClass;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(MockData_obj,mockClassName,return )

Void MockData_obj::stub( ::hunit::call::Stub stub){
{
		HX_STACK_FRAME("hunit.mock.MockData","stub",0x4a74e546,"hunit.mock.MockData.stub","hunit/mock/MockData.hx",84,0x4db7d4c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stub,"stub")
		HX_STACK_LINE(86)
		::String tmp = stub->method;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		int tmp1 = this->unstubbedMethods->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		if ((tmp2)){
			HX_STACK_LINE(87)
			::String tmp3 = stub->method;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			int tmp4 = this->unstubbedMethods->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			Dynamic tmp5 = this->unstubPositions->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(87)
			Dynamic pos = tmp5;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(88)
			::String tmp6 = (pos->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic ) + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(88)
			int tmp7 = pos->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(88)
			::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(88)
			::String unstubPos = tmp8;		HX_STACK_VAR(unstubPos,"unstubPos");
			HX_STACK_LINE(90)
			::String tmp9 = (HX_HCSTRING("Cannot stub method which was unstubbed at ","\x03","\x47","\x7a","\x5b") + unstubPos);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(90)
			Dynamic tmp10 = stub->pos;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(90)
			::hunit::exceptions::InvalidTestException tmp11 = ::hunit::exceptions::InvalidTestException_obj::__new(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(90)
			HX_STACK_DO_THROW(tmp11);
		}
		HX_STACK_LINE(93)
		::hunit::call::Stub tmp3 = stub;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		this->stubs->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MockData_obj,stub,(void))

Void MockData_obj::unstub( ::String method,Dynamic pos){
{
		HX_STACK_FRAME("hunit.mock.MockData","unstub",0xd478221f,"hunit.mock.MockData.unstub","hunit/mock/MockData.hx",103,0x4db7d4c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(method,"method")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			Array< ::Dynamic > _g1 = this->stubs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(104)
			while((true)){
				HX_STACK_LINE(104)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(104)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(104)
				if ((tmp1)){
					HX_STACK_LINE(104)
					break;
				}
				HX_STACK_LINE(104)
				::hunit::call::Stub tmp2 = _g1->__get(_g).StaticCast< ::hunit::call::Stub >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(104)
				::hunit::call::Stub stub = tmp2;		HX_STACK_VAR(stub,"stub");
				HX_STACK_LINE(104)
				++(_g);
				HX_STACK_LINE(106)
				bool tmp3 = (stub->method == method);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(106)
				if ((tmp3)){
					HX_STACK_LINE(107)
					::String tmp4 = stub->pos->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(107)
					::String tmp5 = (tmp4 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(107)
					int tmp6 = stub->pos->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(107)
					::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(107)
					::String stubPos = tmp7;		HX_STACK_VAR(stubPos,"stubPos");
					HX_STACK_LINE(109)
					::String tmp8 = (HX_HCSTRING("Cannot unstub method which was stubbed directly at ","\xad","\x11","\xfb","\xbe") + stubPos);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(109)
					Dynamic tmp9 = pos;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(109)
					::hunit::exceptions::InvalidTestException tmp10 = ::hunit::exceptions::InvalidTestException_obj::__new(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(109)
					HX_STACK_DO_THROW(tmp10);
				}
			}
		}
		HX_STACK_LINE(114)
		::String tmp = method;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		int tmp1 = this->unstubbedMethods->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		bool tmp2 = (tmp1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		if ((tmp2)){
			HX_STACK_LINE(115)
			::String tmp3 = method;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(115)
			this->unstubbedMethods->push(tmp3);
			HX_STACK_LINE(116)
			Dynamic tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(116)
			this->unstubPositions->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MockData_obj,unstub,(void))

Void MockData_obj::expect( ::hunit::call::Expect expect){
{
		HX_STACK_FRAME("hunit.mock.MockData","expect",0x2ebd13f1,"hunit.mock.MockData.expect","hunit/mock/MockData.hx",126,0x4db7d4c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(expect,"expect")
		HX_STACK_LINE(127)
		int tmp = this->callCounter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		expect->fromCallId = tmp;
		HX_STACK_LINE(128)
		::hunit::call::Expect tmp1 = expect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		this->expectations->push(tmp1);
		HX_STACK_LINE(129)
		::hunit::TestCase tmp2 = this->testCase;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		::List tmp3 = tmp2->__hu_state->expectedCalls;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		::hunit::call::Expect tmp4 = expect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(129)
		tmp3->add(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MockData_obj,expect,(void))

Void MockData_obj::removeExpect( ::hunit::call::Expect expect){
{
		HX_STACK_FRAME("hunit.mock.MockData","removeExpect",0x22ce5155,"hunit.mock.MockData.removeExpect","hunit/mock/MockData.hx",138,0x4db7d4c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(expect,"expect")
		HX_STACK_LINE(139)
		::hunit::call::Expect tmp = expect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		this->expectations->remove(tmp);
		HX_STACK_LINE(140)
		::hunit::TestCase tmp1 = this->testCase;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		::List tmp2 = tmp1->__hu_state->expectedCalls;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		::hunit::call::Expect tmp3 = expect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		tmp2->remove(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MockData_obj,removeExpect,(void))

int MockData_obj::methodInvoked( ::String name,cpp::ArrayBase args,Dynamic pos){
	HX_STACK_FRAME("hunit.mock.MockData","methodInvoked",0x5d039df3,"hunit.mock.MockData.methodInvoked","hunit/mock/MockData.hx",150,0x4db7d4c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(args,"args")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(151)
	bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	if ((tmp)){
		HX_STACK_LINE(151)
		bool tmp2 = this->fullStub;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(151)
		if ((tmp4)){
			HX_STACK_LINE(151)
			::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			int tmp8 = this->unstubbedMethods->indexOf(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(151)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(151)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(151)
			tmp1 = (tmp10 < (int)0);
		}
		else{
			HX_STACK_LINE(151)
			tmp1 = false;
		}
	}
	else{
		HX_STACK_LINE(151)
		tmp1 = true;
	}
	HX_STACK_LINE(151)
	bool isStub = tmp1;		HX_STACK_VAR(isStub,"isStub");
	HX_STACK_LINE(152)
	::hunit::call::Stub stub = null();		HX_STACK_VAR(stub,"stub");
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(153)
		int tmp2 = this->stubs->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(153)
		while((true)){
			HX_STACK_LINE(153)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(153)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(153)
			if ((tmp4)){
				HX_STACK_LINE(153)
				break;
			}
			HX_STACK_LINE(153)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(154)
			::hunit::call::Stub tmp6 = this->stubs->__get(i).StaticCast< ::hunit::call::Stub >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(154)
			stub = tmp6;
			HX_STACK_LINE(156)
			bool tmp7 = (stub->method == name);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(156)
			if ((tmp7)){
				HX_STACK_LINE(157)
				isStub = true;
				HX_STACK_LINE(159)
				::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(159)
				bool tmp9 = stub->match(tmp8,args);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(159)
				if ((tmp9)){
					HX_STACK_LINE(160)
					break;
				}
			}
			HX_STACK_LINE(163)
			stub = null();
		}
	}
	HX_STACK_LINE(166)
	Array< ::Dynamic > stack = ::haxe::CallStack_obj::callStack();		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(168)
	stack->shift().StaticCast< ::haxe::StackItem >();
	HX_STACK_LINE(170)
	int tmp2 = (this->callCounter)++;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(170)
	::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(170)
	Dynamic tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(170)
	bool tmp5 = isStub;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(170)
	::hunit::call::Stub tmp6 = stub;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(170)
	::hunit::call::Call tmp7 = ::hunit::call::Call_obj::__new(tmp2,hx::ObjectPtr<OBJ_>(this),tmp3,args,stack,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(170)
	::hunit::call::Call call = tmp7;		HX_STACK_VAR(call,"call");
	HX_STACK_LINE(171)
	::hunit::call::Call tmp8 = call;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(171)
	this->callLog->push(tmp8);
	HX_STACK_LINE(173)
	int tmp9 = call->id;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(173)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC3(MockData_obj,methodInvoked,return )

bool MockData_obj::isMethodMocked( int callId){
	HX_STACK_FRAME("hunit.mock.MockData","isMethodMocked",0xc62c884c,"hunit.mock.MockData.isMethodMocked","hunit/mock/MockData.hx",182,0x4db7d4c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(callId,"callId")
	HX_STACK_LINE(183)
	::hunit::call::Call tmp = this->callLog->__get(callId).StaticCast< ::hunit::call::Call >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	::hunit::call::Call call = tmp;		HX_STACK_VAR(call,"call");
	HX_STACK_LINE(185)
	bool tmp1 = call->isStub;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(MockData_obj,isMethodMocked,return )

Dynamic MockData_obj::getMockedCallResult( int callId){
	HX_STACK_FRAME("hunit.mock.MockData","getMockedCallResult",0x75043682,"hunit.mock.MockData.getMockedCallResult","hunit/mock/MockData.hx",194,0x4db7d4c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(callId,"callId")
	HX_STACK_LINE(195)
	::hunit::call::Call tmp = this->callLog->__get(callId).StaticCast< ::hunit::call::Call >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	::hunit::call::Call call = tmp;		HX_STACK_VAR(call,"call");
	HX_STACK_LINE(197)
	bool tmp1 = call->isStub;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(197)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(197)
	if ((tmp2)){
		HX_STACK_LINE(198)
		::hx::Class tmp3 = this->mockClass;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		::String cls = tmp4;		HX_STACK_VAR(cls,"cls");
		HX_STACK_LINE(199)
		::String tmp5 = (HX_HCSTRING("Trying to get mocked result while `","\xef","\x97","\x52","\x47") + cls);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(199)
		::String tmp6 = (tmp5 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(199)
		::String tmp7 = call->method;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(199)
		::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(199)
		::String tmp9 = (tmp8 + HX_HCSTRING("()` is not stubbed","\x51","\x38","\xb6","\xba"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(199)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("MockData.hx","\x4a","\x55","\xaf","\x7d"),199,HX_HCSTRING("hunit.mock.MockData","\x56","\x67","\x91","\xd5"),HX_HCSTRING("getMockedCallResult","\x9a","\x4b","\x0b","\x05"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(199)
		::Exception tmp11 = ::Exception_obj::__new(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(199)
		HX_STACK_DO_THROW(tmp11);
	}
	HX_STACK_LINE(202)
	bool tmp3 = (call->stub == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(202)
	if ((tmp3)){
		HX_STACK_LINE(203)
		return null();
	}
	HX_STACK_LINE(206)
	::hunit::utils::Value tmp4 = call->stub->implementation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(206)
	bool tmp5 = ::hunit::utils::ValueTools_obj::hasValue(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(206)
	if ((tmp5)){
		HX_STACK_LINE(207)
		::hunit::utils::Value tmp6 = call->stub->implementation;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(207)
		Dynamic tmp7 = ::hunit::utils::ValueTools_obj::getValue(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(207)
		Dynamic tmp8 = ::Reflect_obj::callMethod(null(),tmp7,call->arguments);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(207)
		return tmp8;
	}
	HX_STACK_LINE(210)
	::hunit::utils::Value tmp6 = call->stub->throws;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(210)
	bool tmp7 = ::hunit::utils::ValueTools_obj::hasValue(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(210)
	if ((tmp7)){
		HX_STACK_LINE(211)
		::hunit::utils::Value tmp8 = call->stub->throws;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(211)
		Dynamic tmp9 = ::hunit::utils::ValueTools_obj::getValue(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(211)
		HX_STACK_DO_THROW(tmp9);
	}
	HX_STACK_LINE(214)
	::hunit::utils::Value tmp8 = call->stub->returns;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(214)
	bool tmp9 = ::hunit::utils::ValueTools_obj::hasValue(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(214)
	Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(214)
	if ((tmp9)){
		HX_STACK_LINE(214)
		::hunit::utils::Value tmp11 = call->stub->returns;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(214)
		tmp10 = ::hunit::utils::ValueTools_obj::getValue(tmp11);
	}
	else{
		HX_STACK_LINE(214)
		tmp10 = null();
	}
	HX_STACK_LINE(214)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(MockData_obj,getMockedCallResult,return )

Void MockData_obj::addCallResult( int callId,Dynamic result){
{
		HX_STACK_FRAME("hunit.mock.MockData","addCallResult",0xf441d684,"hunit.mock.MockData.addCallResult","hunit/mock/MockData.hx",223,0x4db7d4c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(callId,"callId")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(224)
		Dynamic tmp = result;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		::hunit::utils::Value tmp1 = ::hunit::utils::Value_obj::Thing(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		::hunit::call::Call tmp2 = this->callLog->__get(callId).StaticCast< ::hunit::call::Call >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		tmp2->result = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MockData_obj,addCallResult,(void))

Void MockData_obj::addCallException( int callId,Dynamic exception){
{
		HX_STACK_FRAME("hunit.mock.MockData","addCallException",0x0ca16508,"hunit.mock.MockData.addCallException","hunit/mock/MockData.hx",233,0x4db7d4c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(callId,"callId")
		HX_STACK_ARG(exception,"exception")
		HX_STACK_LINE(234)
		::hunit::call::Call tmp = this->callLog->__get(callId).StaticCast< ::hunit::call::Call >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		Dynamic tmp1 = exception;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		::hunit::utils::Value tmp2 = ::hunit::utils::Value_obj::Thing(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(234)
		tmp->set_exceptionValue(tmp2);
		HX_STACK_LINE(235)
		::hunit::TestCase tmp3 = this->testCase;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		::hunit::call::Call tmp4 = this->callLog->__get(callId).StaticCast< ::hunit::call::Call >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		tmp3->__hu_state->cacheCallException(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MockData_obj,addCallException,(void))

Void MockData_obj::validateExpectation( ::hunit::call::Expect expect){
{
		HX_STACK_FRAME("hunit.mock.MockData","validateExpectation",0x859f402e,"hunit.mock.MockData.validateExpectation","hunit/mock/MockData.hx",244,0x4db7d4c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(expect,"expect")
		HX_STACK_LINE(245)
		bool failed = false;		HX_STACK_VAR(failed,"failed");
		HX_STACK_LINE(246)
		::String reason = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(reason,"reason");
		HX_STACK_LINE(248)
		::hunit::call::Call call;		HX_STACK_VAR(call,"call");
		HX_STACK_LINE(249)
		int count = (int)0;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(250)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(250)
			int tmp = this->callLog->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(250)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(250)
			while((true)){
				HX_STACK_LINE(250)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(250)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(250)
				if ((tmp2)){
					HX_STACK_LINE(250)
					break;
				}
				HX_STACK_LINE(250)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(250)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(251)
				::hunit::call::Call tmp4 = this->callLog->__get(i).StaticCast< ::hunit::call::Call >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(251)
				call = tmp4;
				HX_STACK_LINE(252)
				bool tmp5 = (call->id < expect->fromCallId);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(252)
				if ((tmp5)){
					HX_STACK_LINE(252)
					continue;
				}
				HX_STACK_LINE(254)
				::hunit::call::Call tmp6 = call;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(254)
				bool tmp7 = expect->match(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(254)
				if ((tmp7)){
					HX_STACK_LINE(255)
					(count)++;
				}
			}
		}
		HX_STACK_LINE(258)
		bool tmp = (count == (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		if ((tmp)){
			HX_STACK_LINE(258)
			tmp1 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(258)
			tmp1 = HX_HCSTRING("s","\x73","\x00","\x00","\x00");
		}
		HX_STACK_LINE(258)
		::String s = tmp1;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			::hunit::call::CallCount _g = expect->count;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(260)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(262)
					bool tmp2 = (count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(262)
					if ((tmp2)){
						HX_STACK_LINE(263)
						failed = true;
						HX_STACK_LINE(265)
						::String tmp3 = (HX_HCSTRING(", actually called ","\xf2","\xa6","\x4b","\x4b") + count);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(265)
						::String tmp4 = (tmp3 + HX_HCSTRING(" time","\x2d","\x5c","\xcf","\xb9"));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(265)
						::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(265)
						::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(265)
						::String tmp7 = (tmp6 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(265)
						reason = tmp7;
					}
				}
				;break;
				case (int)1: {
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(269)
					bool tmp2 = (count != (int)1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(269)
					if ((tmp2)){
						HX_STACK_LINE(270)
						failed = true;
						HX_STACK_LINE(272)
						::String tmp3 = (HX_HCSTRING(", actually called ","\xf2","\xa6","\x4b","\x4b") + count);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(272)
						::String tmp4 = (tmp3 + HX_HCSTRING(" time","\x2d","\x5c","\xcf","\xb9"));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(272)
						::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(272)
						::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(272)
						::String tmp7 = (tmp6 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(272)
						reason = tmp7;
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(260)
					int tmp2 = (::hunit::call::CallCount(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(260)
					int amount = tmp2;		HX_STACK_VAR(amount,"amount");
					HX_STACK_LINE(274)
					{
						HX_STACK_LINE(275)
						bool tmp3 = (count < amount);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(275)
						if ((tmp3)){
							HX_STACK_LINE(276)
							failed = true;
							HX_STACK_LINE(278)
							::String tmp4 = (HX_HCSTRING(", actually called ","\xf2","\xa6","\x4b","\x4b") + count);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(278)
							::String tmp5 = (tmp4 + HX_HCSTRING(" time","\x2d","\x5c","\xcf","\xb9"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(278)
							::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(278)
							::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(278)
							::String tmp8 = (tmp7 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(278)
							reason = tmp8;
						}
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(260)
					int tmp2 = (::hunit::call::CallCount(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(260)
					int amount = tmp2;		HX_STACK_VAR(amount,"amount");
					HX_STACK_LINE(280)
					{
						HX_STACK_LINE(281)
						bool tmp3 = (count != amount);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(281)
						if ((tmp3)){
							HX_STACK_LINE(282)
							failed = true;
							HX_STACK_LINE(284)
							::String tmp4 = (HX_HCSTRING(", actually called ","\xf2","\xa6","\x4b","\x4b") + count);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(284)
							::String tmp5 = (tmp4 + HX_HCSTRING(" time","\x2d","\x5c","\xcf","\xb9"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(284)
							::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(284)
							::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(284)
							::String tmp8 = (tmp7 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(284)
							reason = tmp8;
						}
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(288)
		bool tmp2 = failed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(288)
		if ((tmp2)){
			HX_STACK_LINE(289)
			::hunit::exceptions::UnmetExpectationException tmp3 = ::hunit::exceptions::UnmetExpectationException_obj::__new(expect,reason,expect->pos);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(289)
			HX_STACK_DO_THROW(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MockData_obj,validateExpectation,(void))

Void MockData_obj::validateStrictMode( int callId){
{
		HX_STACK_FRAME("hunit.mock.MockData","validateStrictMode",0xb4e58d9a,"hunit.mock.MockData.validateStrictMode","hunit/mock/MockData.hx",299,0x4db7d4c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(callId,"callId")
		HX_STACK_LINE(300)
		bool tmp = this->strictMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		if ((tmp1)){
			HX_STACK_LINE(300)
			return null();
		}
		HX_STACK_LINE(302)
		::hunit::call::Call tmp2 = this->callLog->__get(callId).StaticCast< ::hunit::call::Call >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(302)
		::hunit::call::Call call = tmp2;		HX_STACK_VAR(call,"call");
		HX_STACK_LINE(304)
		bool tmp3 = (call->stub != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(304)
		if ((tmp3)){
			HX_STACK_LINE(304)
			return null();
		}
		HX_STACK_LINE(306)
		{
			HX_STACK_LINE(306)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(306)
			int tmp4 = this->expectations->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(306)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(306)
			while((true)){
				HX_STACK_LINE(306)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(306)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(306)
				if ((tmp6)){
					HX_STACK_LINE(306)
					break;
				}
				HX_STACK_LINE(306)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(306)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(307)
				::hunit::call::Expect tmp8 = this->expectations->__get(i).StaticCast< ::hunit::call::Expect >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(307)
				::hunit::call::Call tmp9 = call;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(307)
				bool tmp10 = tmp8->sameObjectMethod(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(307)
				if ((tmp10)){
					HX_STACK_LINE(308)
					return null();
				}
			}
		}
		HX_STACK_LINE(312)
		::hunit::call::Call tmp4 = call;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(312)
		::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(312)
		::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(312)
		::String tmp7 = (tmp6 + HX_HCSTRING(" is not expected nor stubbed.","\x2f","\x8b","\x4d","\x18"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(312)
		::String msg = tmp7;		HX_STACK_VAR(msg,"msg");
		HX_STACK_LINE(313)
		::hunit::call::Call tmp8 = call;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(313)
		::String tmp9 = msg;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(313)
		this->throwUnexpectedCallException(tmp8,tmp9,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MockData_obj,validateStrictMode,(void))

Void MockData_obj::validateCall( int callId){
{
		HX_STACK_FRAME("hunit.mock.MockData","validateCall",0x84e4e06c,"hunit.mock.MockData.validateCall","hunit/mock/MockData.hx",322,0x4db7d4c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(callId,"callId")
		HX_STACK_LINE(323)
		bool isExpected = false;		HX_STACK_VAR(isExpected,"isExpected");
		HX_STACK_LINE(324)
		bool satisfies = false;		HX_STACK_VAR(satisfies,"satisfies");
		HX_STACK_LINE(326)
		::hunit::call::Call tmp = this->callLog->__get(callId).StaticCast< ::hunit::call::Call >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(326)
		::hunit::call::Call call = tmp;		HX_STACK_VAR(call,"call");
		HX_STACK_LINE(328)
		::hunit::call::Expect expect;		HX_STACK_VAR(expect,"expect");
		HX_STACK_LINE(329)
		{
			HX_STACK_LINE(329)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(329)
			int tmp1 = this->expectations->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(329)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(329)
			while((true)){
				HX_STACK_LINE(329)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(329)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(329)
				if ((tmp3)){
					HX_STACK_LINE(329)
					break;
				}
				HX_STACK_LINE(329)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(329)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(330)
				::hunit::call::Expect tmp5 = this->expectations->__get(i).StaticCast< ::hunit::call::Expect >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(330)
				expect = tmp5;
				HX_STACK_LINE(332)
				::hunit::call::Call tmp6 = call;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(332)
				bool tmp7 = expect->sameObjectMethod(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(332)
				if ((tmp7)){
					HX_STACK_LINE(333)
					isExpected = true;
					HX_STACK_LINE(335)
					::hunit::call::Call tmp8 = call;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(335)
					bool tmp9 = expect->match(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(335)
					if ((tmp9)){
						HX_STACK_LINE(336)
						(expect->timesMatched)++;
						HX_STACK_LINE(337)
						satisfies = true;
						HX_STACK_LINE(338)
						bool tmp10 = expect->tooManyCalls();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(338)
						if ((tmp10)){
							HX_STACK_LINE(339)
							::hunit::call::Call tmp11 = call;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(339)
							::hunit::call::Expect tmp12 = expect;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(339)
							this->throwUnexpectedCallException(tmp11,null(),tmp12);
						}
					}
				}
			}
		}
		HX_STACK_LINE(345)
		bool tmp1 = isExpected;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		if ((tmp1)){
			HX_STACK_LINE(345)
			bool tmp3 = satisfies;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(345)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(345)
			tmp2 = !(tmp4);
		}
		else{
			HX_STACK_LINE(345)
			tmp2 = false;
		}
		HX_STACK_LINE(345)
		if ((tmp2)){
			HX_STACK_LINE(346)
			::hunit::call::Call tmp3 = call;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(346)
			this->throwUnexpectedCallException(tmp3,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MockData_obj,validateCall,(void))

Void MockData_obj::throwUnexpectedCallException( ::hunit::call::Call call,::String msg,::hunit::call::Expect expect){
{
		HX_STACK_FRAME("hunit.mock.MockData","throwUnexpectedCallException",0xfd1be6d2,"hunit.mock.MockData.throwUnexpectedCallException","hunit/mock/MockData.hx",356,0x4db7d4c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(call,"call")
		HX_STACK_ARG(msg,"msg")
		HX_STACK_ARG(expect,"expect")
		HX_STACK_LINE(357)
		::hunit::exceptions::UnexpectedCallException tmp = ::hunit::exceptions::UnexpectedCallException_obj::__new(call,expect,msg,call->pos);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(357)
		::hunit::exceptions::UnexpectedCallException e = tmp;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(358)
		::hunit::TestCase tmp1 = this->testCase;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		::hunit::exceptions::UnexpectedCallException tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(358)
		tmp1->__hu_state->pendingFail(tmp2);
		HX_STACK_LINE(360)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("MockData.hx","\x4a","\x55","\xaf","\x7d"),360,HX_HCSTRING("hunit.mock.MockData","\x56","\x67","\x91","\xd5"),HX_HCSTRING("throwUnexpectedCallException","\xba","\x6e","\x05","\xd7"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(360)
		e->truncateStack(tmp3,(int)1);
		HX_STACK_LINE(361)
		::hunit::exceptions::UnexpectedCallException tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(361)
		HX_STACK_DO_THROW(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(MockData_obj,throwUnexpectedCallException,(void))


MockData_obj::MockData_obj()
{
}

void MockData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MockData);
	HX_MARK_MEMBER_NAME(mockClass,"mockClass");
	HX_MARK_MEMBER_NAME(testCase,"testCase");
	HX_MARK_MEMBER_NAME(callCounter,"callCounter");
	HX_MARK_MEMBER_NAME(callLog,"callLog");
	HX_MARK_MEMBER_NAME(stubs,"stubs");
	HX_MARK_MEMBER_NAME(expectations,"expectations");
	HX_MARK_MEMBER_NAME(fullStub,"fullStub");
	HX_MARK_MEMBER_NAME(strictMode,"strictMode");
	HX_MARK_MEMBER_NAME(unstubbedMethods,"unstubbedMethods");
	HX_MARK_MEMBER_NAME(unstubPositions,"unstubPositions");
	HX_MARK_END_CLASS();
}

void MockData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mockClass,"mockClass");
	HX_VISIT_MEMBER_NAME(testCase,"testCase");
	HX_VISIT_MEMBER_NAME(callCounter,"callCounter");
	HX_VISIT_MEMBER_NAME(callLog,"callLog");
	HX_VISIT_MEMBER_NAME(stubs,"stubs");
	HX_VISIT_MEMBER_NAME(expectations,"expectations");
	HX_VISIT_MEMBER_NAME(fullStub,"fullStub");
	HX_VISIT_MEMBER_NAME(strictMode,"strictMode");
	HX_VISIT_MEMBER_NAME(unstubbedMethods,"unstubbedMethods");
	HX_VISIT_MEMBER_NAME(unstubPositions,"unstubPositions");
}

Dynamic MockData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stub") ) { return stub_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stubs") ) { return stubs; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unstub") ) { return unstub_dyn(); }
		if (HX_FIELD_EQ(inName,"expect") ) { return expect_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"callLog") ) { return callLog; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testCase") ) { return testCase; }
		if (HX_FIELD_EQ(inName,"fullStub") ) { return fullStub; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mockClass") ) { return mockClass; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"strictMode") ) { return strictMode; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"callCounter") ) { return callCounter; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"expectations") ) { return expectations; }
		if (HX_FIELD_EQ(inName,"removeExpect") ) { return removeExpect_dyn(); }
		if (HX_FIELD_EQ(inName,"validateCall") ) { return validateCall_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mockClassName") ) { return mockClassName_dyn(); }
		if (HX_FIELD_EQ(inName,"methodInvoked") ) { return methodInvoked_dyn(); }
		if (HX_FIELD_EQ(inName,"addCallResult") ) { return addCallResult_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isMethodMocked") ) { return isMethodMocked_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unstubPositions") ) { return unstubPositions; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"unstubbedMethods") ) { return unstubbedMethods; }
		if (HX_FIELD_EQ(inName,"addCallException") ) { return addCallException_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"validateStrictMode") ) { return validateStrictMode_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getMockedCallResult") ) { return getMockedCallResult_dyn(); }
		if (HX_FIELD_EQ(inName,"validateExpectation") ) { return validateExpectation_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"throwUnexpectedCallException") ) { return throwUnexpectedCallException_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MockData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stubs") ) { stubs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"callLog") ) { callLog=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testCase") ) { testCase=inValue.Cast< ::hunit::TestCase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullStub") ) { fullStub=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mockClass") ) { mockClass=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"strictMode") ) { strictMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"callCounter") ) { callCounter=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"expectations") ) { expectations=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unstubPositions") ) { unstubPositions=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"unstubbedMethods") ) { unstubbedMethods=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MockData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MockData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mockClass","\x4e","\xa1","\x2b","\x56"));
	outFields->push(HX_HCSTRING("testCase","\x22","\xa4","\xec","\x44"));
	outFields->push(HX_HCSTRING("callCounter","\xfe","\x2d","\x06","\xbc"));
	outFields->push(HX_HCSTRING("callLog","\x86","\xaa","\x4e","\x54"));
	outFields->push(HX_HCSTRING("stubs","\x85","\x93","\x1a","\x84"));
	outFields->push(HX_HCSTRING("expectations","\xb7","\xa2","\xac","\x81"));
	outFields->push(HX_HCSTRING("fullStub","\x5d","\x7e","\x6f","\x60"));
	outFields->push(HX_HCSTRING("strictMode","\x4c","\xf7","\xa5","\x10"));
	outFields->push(HX_HCSTRING("unstubbedMethods","\xf8","\x05","\xdc","\x9e"));
	outFields->push(HX_HCSTRING("unstubPositions","\xa3","\x9e","\xfd","\xd1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(MockData_obj,mockClass),HX_HCSTRING("mockClass","\x4e","\xa1","\x2b","\x56")},
	{hx::fsObject /*::hunit::TestCase*/ ,(int)offsetof(MockData_obj,testCase),HX_HCSTRING("testCase","\x22","\xa4","\xec","\x44")},
	{hx::fsInt,(int)offsetof(MockData_obj,callCounter),HX_HCSTRING("callCounter","\xfe","\x2d","\x06","\xbc")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MockData_obj,callLog),HX_HCSTRING("callLog","\x86","\xaa","\x4e","\x54")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MockData_obj,stubs),HX_HCSTRING("stubs","\x85","\x93","\x1a","\x84")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MockData_obj,expectations),HX_HCSTRING("expectations","\xb7","\xa2","\xac","\x81")},
	{hx::fsBool,(int)offsetof(MockData_obj,fullStub),HX_HCSTRING("fullStub","\x5d","\x7e","\x6f","\x60")},
	{hx::fsBool,(int)offsetof(MockData_obj,strictMode),HX_HCSTRING("strictMode","\x4c","\xf7","\xa5","\x10")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(MockData_obj,unstubbedMethods),HX_HCSTRING("unstubbedMethods","\xf8","\x05","\xdc","\x9e")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(MockData_obj,unstubPositions),HX_HCSTRING("unstubPositions","\xa3","\x9e","\xfd","\xd1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mockClass","\x4e","\xa1","\x2b","\x56"),
	HX_HCSTRING("testCase","\x22","\xa4","\xec","\x44"),
	HX_HCSTRING("callCounter","\xfe","\x2d","\x06","\xbc"),
	HX_HCSTRING("callLog","\x86","\xaa","\x4e","\x54"),
	HX_HCSTRING("stubs","\x85","\x93","\x1a","\x84"),
	HX_HCSTRING("expectations","\xb7","\xa2","\xac","\x81"),
	HX_HCSTRING("fullStub","\x5d","\x7e","\x6f","\x60"),
	HX_HCSTRING("strictMode","\x4c","\xf7","\xa5","\x10"),
	HX_HCSTRING("unstubbedMethods","\xf8","\x05","\xdc","\x9e"),
	HX_HCSTRING("unstubPositions","\xa3","\x9e","\xfd","\xd1"),
	HX_HCSTRING("mockClassName","\xb9","\xfe","\x29","\xe8"),
	HX_HCSTRING("stub","\x2e","\xf5","\x5b","\x4c"),
	HX_HCSTRING("unstub","\x07","\xfc","\x30","\x6a"),
	HX_HCSTRING("expect","\xd9","\xed","\x75","\xc4"),
	HX_HCSTRING("removeExpect","\x3d","\x89","\xa3","\x33"),
	HX_HCSTRING("methodInvoked","\x0b","\x51","\xbf","\x06"),
	HX_HCSTRING("isMethodMocked","\x34","\x8a","\xad","\xa0"),
	HX_HCSTRING("getMockedCallResult","\x9a","\x4b","\x0b","\x05"),
	HX_HCSTRING("addCallResult","\x9c","\x89","\xfd","\x9d"),
	HX_HCSTRING("addCallException","\xf0","\xb0","\xd4","\x4a"),
	HX_HCSTRING("validateExpectation","\x46","\x55","\xa6","\x15"),
	HX_HCSTRING("validateStrictMode","\x82","\xa3","\x71","\x5f"),
	HX_HCSTRING("validateCall","\x54","\x18","\xba","\x95"),
	HX_HCSTRING("throwUnexpectedCallException","\xba","\x6e","\x05","\xd7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MockData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MockData_obj::__mClass,"__mClass");
};

#endif

hx::Class MockData_obj::__mClass;

void MockData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.mock.MockData","\x56","\x67","\x91","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MockData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MockData_obj >;
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
} // end namespace mock
