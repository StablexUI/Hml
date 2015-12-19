#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
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
#ifndef INCLUDED_hunit_exceptions_ExpectedExceptionData
#include <hunit/exceptions/ExpectedExceptionData.h>
#endif
#ifndef INCLUDED_hunit_exceptions_InvalidTestException
#include <hunit/exceptions/InvalidTestException.h>
#endif
#ifndef INCLUDED_hunit_exceptions_UnexpectedException
#include <hunit/exceptions/UnexpectedException.h>
#endif
#ifndef INCLUDED_hunit_report_TestReport
#include <hunit/report/TestReport.h>
#endif
#ifndef INCLUDED_hunit_utils_Value
#include <hunit/utils/Value.h>
#endif
#ifndef INCLUDED_hunit_utils_ValueTools
#include <hunit/utils/ValueTools.h>
#endif
#ifndef INCLUDED_hunit_warnings_Warning
#include <hunit/warnings/Warning.h>
#endif
namespace hunit{

Void TestState_obj::__construct(::hunit::TestCase testCase,::String testName,::hunit::report::TestReport report,Dynamic print)
{
HX_STACK_FRAME("hunit.TestState","new",0x7b5f9faf,"hunit.TestState.new","hunit/TestState.hx",22,0xa34aa822)
HX_STACK_THIS(this)
HX_STACK_ARG(testCase,"testCase")
HX_STACK_ARG(testName,"testName")
HX_STACK_ARG(report,"report")
HX_STACK_ARG(print,"print")
{
	HX_STACK_LINE(35)
	this->warned = false;
	HX_STACK_LINE(53)
	this->testCase = testCase;
	HX_STACK_LINE(54)
	this->testName = testName;
	HX_STACK_LINE(55)
	this->report = report;
	HX_STACK_LINE(56)
	this->print = print;
	HX_STACK_LINE(58)
	this->pendingExceptions = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(59)
	this->callExceptions = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(60)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	this->expectedCalls = tmp;
	HX_STACK_LINE(61)
	::List tmp1 = ::List_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	this->asserted = tmp1;
}
;
	return null();
}

//TestState_obj::~TestState_obj() { }

Dynamic TestState_obj::__CreateEmpty() { return  new TestState_obj; }
hx::ObjectPtr< TestState_obj > TestState_obj::__new(::hunit::TestCase testCase,::String testName,::hunit::report::TestReport report,Dynamic print)
{  hx::ObjectPtr< TestState_obj > _result_ = new TestState_obj();
	_result_->__construct(testCase,testName,report,print);
	return _result_;}

Dynamic TestState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestState_obj > _result_ = new TestState_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

bool TestState_obj::expectingException( ){
	HX_STACK_FRAME("hunit.TestState","expectingException",0x273ac7f7,"hunit.TestState.expectingException","hunit/TestState.hx",70,0xa34aa822)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	::hunit::exceptions::ExpectedExceptionData tmp = this->expectedException;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TestState_obj,expectingException,return )

Void TestState_obj::validateException( Dynamic e,Array< ::Dynamic > catchExceptionStack,Array< ::Dynamic > exceptionStack){
{
		HX_STACK_FRAME("hunit.TestState","validateException",0xe74fb868,"hunit.TestState.validateException","hunit/TestState.hx",81,0xa34aa822)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(catchExceptionStack,"catchExceptionStack")
		HX_STACK_ARG(exceptionStack,"exceptionStack")
		HX_STACK_LINE(82)
		bool tmp = (e != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		if ((tmp)){
			HX_STACK_LINE(83)
			::hunit::exceptions::ExpectedExceptionData tmp1 = this->expectedException;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(83)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			if ((tmp2)){
				HX_STACK_LINE(84)
				::hunit::exceptions::ExpectedExceptionData tmp3 = this->expectedException;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(84)
				Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(84)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(84)
				tmp3->validate(tmp4,this->getOriginalExceptionStack(tmp5,catchExceptionStack,exceptionStack));
			}
			else{
				HX_STACK_LINE(86)
				Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(86)
				Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(86)
				Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("TestState.hx","\xdf","\x9f","\x7b","\x9a"),86,HX_HCSTRING("hunit.TestState","\x3d","\x9c","\xb4","\x50"),HX_HCSTRING("validateException","\xd9","\x5c","\x31","\xdf"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(86)
				::hunit::exceptions::UnexpectedException tmp6 = ::hunit::exceptions::UnexpectedException_obj::__new(tmp3,this->getOriginalExceptionStack(tmp4,catchExceptionStack,exceptionStack),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(86)
				HX_STACK_DO_THROW(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TestState_obj,validateException,(void))

Void TestState_obj::success( ){
{
		HX_STACK_FRAME("hunit.TestState","success",0x83954892,"hunit.TestState.success","hunit/TestState.hx",97,0xa34aa822)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		::hunit::report::TestReport tmp = this->report;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		::hunit::TestCase tmp1 = this->testCase;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		::String tmp2 = this->testName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		tmp->addSuccess(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestState_obj,success,(void))

Void TestState_obj::warn( ::hunit::warnings::Warning warning){
{
		HX_STACK_FRAME("hunit.TestState","warn",0x7e3bf817,"hunit.TestState.warn","hunit/TestState.hx",107,0xa34aa822)
		HX_STACK_THIS(this)
		HX_STACK_ARG(warning,"warning")
		HX_STACK_LINE(108)
		this->warned = true;
		HX_STACK_LINE(109)
		::hunit::report::TestReport tmp = this->report;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		::hunit::TestCase tmp1 = this->testCase;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		::String tmp2 = this->testName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		::hunit::warnings::Warning tmp3 = warning;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		tmp->addWarning(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestState_obj,warn,(void))

Void TestState_obj::fail( ::Exception exception){
{
		HX_STACK_FRAME("hunit.TestState","fail",0x72ff4faf,"hunit.TestState.fail","hunit/TestState.hx",118,0xa34aa822)
		HX_STACK_THIS(this)
		HX_STACK_ARG(exception,"exception")
		HX_STACK_LINE(120)
		::Exception tmp = exception;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		this->pendingExceptions->remove(tmp);
		HX_STACK_LINE(122)
		::hunit::report::TestReport tmp1 = this->report;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		::hunit::TestCase tmp2 = this->testCase;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		::String tmp3 = this->testName;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		::Exception tmp4 = exception;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		tmp1->addFail(tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestState_obj,fail,(void))

Void TestState_obj::notice( ::String msg,Dynamic pos){
{
		HX_STACK_FRAME("hunit.TestState","notice",0xf6f04429,"hunit.TestState.notice","hunit/TestState.hx",131,0xa34aa822)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(132)
		::hunit::report::TestReport tmp = this->report;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		::hunit::TestCase tmp1 = this->testCase;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		::String tmp2 = this->testName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		::String tmp3 = msg;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(132)
		Dynamic tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(132)
		tmp->addNotice(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TestState_obj,notice,(void))

Void TestState_obj::pendingFail( ::Exception exception){
{
		HX_STACK_FRAME("hunit.TestState","pendingFail",0x0af62c24,"hunit.TestState.pendingFail","hunit/TestState.hx",141,0xa34aa822)
		HX_STACK_THIS(this)
		HX_STACK_ARG(exception,"exception")
		HX_STACK_LINE(142)
		::Exception tmp = exception;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		this->pendingExceptions->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestState_obj,pendingFail,(void))

Void TestState_obj::cacheCallException( ::hunit::call::Call call){
{
		HX_STACK_FRAME("hunit.TestState","cacheCallException",0xbd4a89c0,"hunit.TestState.cacheCallException","hunit/TestState.hx",151,0xa34aa822)
		HX_STACK_THIS(this)
		HX_STACK_ARG(call,"call")
		HX_STACK_LINE(152)
		::hunit::call::Call tmp = call;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		this->callExceptions->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestState_obj,cacheCallException,(void))

Array< ::Dynamic > TestState_obj::getOriginalExceptionStack( Dynamic e,Array< ::Dynamic > catchExceptionStack,Array< ::Dynamic > exceptionStack){
	HX_STACK_FRAME("hunit.TestState","getOriginalExceptionStack",0xbb16746f,"hunit.TestState.getOriginalExceptionStack","hunit/TestState.hx",161,0xa34aa822)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(catchExceptionStack,"catchExceptionStack")
	HX_STACK_ARG(exceptionStack,"exceptionStack")
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(162)
		Array< ::Dynamic > _g1 = this->callExceptions;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(162)
		while((true)){
			HX_STACK_LINE(162)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(162)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(162)
			if ((tmp1)){
				HX_STACK_LINE(162)
				break;
			}
			HX_STACK_LINE(162)
			::hunit::call::Call tmp2 = _g1->__get(_g).StaticCast< ::hunit::call::Call >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(162)
			::hunit::call::Call call = tmp2;		HX_STACK_VAR(call,"call");
			HX_STACK_LINE(162)
			++(_g);
			HX_STACK_LINE(163)
			::hunit::utils::Value tmp3 = call->exceptionValue;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(163)
			Dynamic tmp4 = ::hunit::utils::ValueTools_obj::getValue(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(163)
			Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(163)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(163)
			if ((tmp6)){
				HX_STACK_LINE(164)
				return call->exceptionStack;
			}
		}
	}
	HX_STACK_LINE(168)
	return exceptionStack->concat(catchExceptionStack);
}


HX_DEFINE_DYNAMIC_FUNC3(TestState_obj,getOriginalExceptionStack,return )

bool TestState_obj::madeAssertions( ){
	HX_STACK_FRAME("hunit.TestState","madeAssertions",0x5ab0bcb7,"hunit.TestState.madeAssertions","hunit/TestState.hx",177,0xa34aa822)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	::List tmp = this->expectedCalls;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(178)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(178)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(178)
	if ((tmp4)){
		HX_STACK_LINE(178)
		::List tmp6 = this->asserted;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(178)
		::List tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(178)
		::List tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(178)
		int tmp9 = tmp8->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(178)
		tmp5 = (tmp9 > (int)0);
	}
	else{
		HX_STACK_LINE(178)
		tmp5 = true;
	}
	HX_STACK_LINE(178)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(178)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(178)
	if ((tmp6)){
		HX_STACK_LINE(178)
		tmp7 = this->expectingException();
	}
	else{
		HX_STACK_LINE(178)
		tmp7 = true;
	}
	HX_STACK_LINE(178)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(TestState_obj,madeAssertions,return )

Void TestState_obj::finalize( ){
{
		HX_STACK_FRAME("hunit.TestState","finalize",0x083197ef,"hunit.TestState.finalize","hunit/TestState.hx",187,0xa34aa822)
		HX_STACK_THIS(this)
		HX_STACK_LINE(188)
		::List tmp = this->asserted;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		::hunit::report::TestReport tmp1 = this->report;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		hx::AddEq(tmp1->assertionCount,tmp->length);
		HX_STACK_LINE(189)
		::List tmp2 = this->expectedCalls;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		::hunit::report::TestReport tmp3 = this->report;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		hx::AddEq(tmp3->assertionCount,tmp2->length);
		HX_STACK_LINE(190)
		bool tmp4 = this->expectingException();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		if ((tmp4)){
			HX_STACK_LINE(191)
			::hunit::report::TestReport tmp5 = this->report;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(191)
			(tmp5->assertionCount)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestState_obj,finalize,(void))

::hunit::exceptions::ExpectedExceptionData TestState_obj::set_expectedException( ::hunit::exceptions::ExpectedExceptionData expectedException){
	HX_STACK_FRAME("hunit.TestState","set_expectedException",0xb89ad2a9,"hunit.TestState.set_expectedException","hunit/TestState.hx",201,0xa34aa822)
	HX_STACK_THIS(this)
	HX_STACK_ARG(expectedException,"expectedException")
	HX_STACK_LINE(202)
	::hunit::exceptions::ExpectedExceptionData tmp = this->expectedException;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	if ((tmp1)){
		HX_STACK_LINE(203)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("TestState.hx","\xdf","\x9f","\x7b","\x9a"),203,HX_HCSTRING("hunit.TestState","\x3d","\x9c","\xb4","\x50"),HX_HCSTRING("set_expectedException","\x9a","\x03","\x66","\x7c"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(203)
		::hunit::exceptions::InvalidTestException tmp3 = ::hunit::exceptions::InvalidTestException_obj::__new(HX_HCSTRING("Expected exception is already set","\x1d","\x45","\xcc","\xb1"),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(203)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(206)
	::hunit::exceptions::ExpectedExceptionData tmp2 = this->expectedException = expectedException;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(206)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TestState_obj,set_expectedException,return )


TestState_obj::TestState_obj()
{
}

void TestState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestState);
	HX_MARK_MEMBER_NAME(testCase,"testCase");
	HX_MARK_MEMBER_NAME(testName,"testName");
	HX_MARK_MEMBER_NAME(report,"report");
	HX_MARK_MEMBER_NAME(expectedException,"expectedException");
	HX_MARK_MEMBER_NAME(print,"print");
	HX_MARK_MEMBER_NAME(warned,"warned");
	HX_MARK_MEMBER_NAME(expectedCalls,"expectedCalls");
	HX_MARK_MEMBER_NAME(asserted,"asserted");
	HX_MARK_MEMBER_NAME(pendingExceptions,"pendingExceptions");
	HX_MARK_MEMBER_NAME(callExceptions,"callExceptions");
	HX_MARK_END_CLASS();
}

void TestState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(testCase,"testCase");
	HX_VISIT_MEMBER_NAME(testName,"testName");
	HX_VISIT_MEMBER_NAME(report,"report");
	HX_VISIT_MEMBER_NAME(expectedException,"expectedException");
	HX_VISIT_MEMBER_NAME(print,"print");
	HX_VISIT_MEMBER_NAME(warned,"warned");
	HX_VISIT_MEMBER_NAME(expectedCalls,"expectedCalls");
	HX_VISIT_MEMBER_NAME(asserted,"asserted");
	HX_VISIT_MEMBER_NAME(pendingExceptions,"pendingExceptions");
	HX_VISIT_MEMBER_NAME(callExceptions,"callExceptions");
}

Dynamic TestState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"warn") ) { return warn_dyn(); }
		if (HX_FIELD_EQ(inName,"fail") ) { return fail_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return print; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"report") ) { return report; }
		if (HX_FIELD_EQ(inName,"warned") ) { return warned; }
		if (HX_FIELD_EQ(inName,"notice") ) { return notice_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"success") ) { return success_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testCase") ) { return testCase; }
		if (HX_FIELD_EQ(inName,"testName") ) { return testName; }
		if (HX_FIELD_EQ(inName,"asserted") ) { return asserted; }
		if (HX_FIELD_EQ(inName,"finalize") ) { return finalize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pendingFail") ) { return pendingFail_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"expectedCalls") ) { return expectedCalls; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"callExceptions") ) { return callExceptions; }
		if (HX_FIELD_EQ(inName,"madeAssertions") ) { return madeAssertions_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"expectedException") ) { return expectedException; }
		if (HX_FIELD_EQ(inName,"pendingExceptions") ) { return pendingExceptions; }
		if (HX_FIELD_EQ(inName,"validateException") ) { return validateException_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"expectingException") ) { return expectingException_dyn(); }
		if (HX_FIELD_EQ(inName,"cacheCallException") ) { return cacheCallException_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"set_expectedException") ) { return set_expectedException_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getOriginalExceptionStack") ) { return getOriginalExceptionStack_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { print=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"report") ) { report=inValue.Cast< ::hunit::report::TestReport >(); return inValue; }
		if (HX_FIELD_EQ(inName,"warned") ) { warned=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testCase") ) { testCase=inValue.Cast< ::hunit::TestCase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"testName") ) { testName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"asserted") ) { asserted=inValue.Cast< ::List >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"expectedCalls") ) { expectedCalls=inValue.Cast< ::List >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"callExceptions") ) { callExceptions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"expectedException") ) { if (inCallProp == hx::paccAlways) return set_expectedException(inValue);expectedException=inValue.Cast< ::hunit::exceptions::ExpectedExceptionData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pendingExceptions") ) { pendingExceptions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TestState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TestState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("testCase","\x22","\xa4","\xec","\x44"));
	outFields->push(HX_HCSTRING("testName","\xbd","\xf7","\x31","\x4c"));
	outFields->push(HX_HCSTRING("report","\xb4","\x3c","\x84","\x06"));
	outFields->push(HX_HCSTRING("expectedException","\xb7","\x32","\xaf","\xa9"));
	outFields->push(HX_HCSTRING("warned","\x25","\x58","\x04","\xba"));
	outFields->push(HX_HCSTRING("expectedCalls","\x7d","\x40","\x85","\x4b"));
	outFields->push(HX_HCSTRING("asserted","\xa5","\x5c","\x77","\xc8"));
	outFields->push(HX_HCSTRING("pendingExceptions","\x7b","\x44","\x16","\xba"));
	outFields->push(HX_HCSTRING("callExceptions","\x82","\x83","\x73","\xe5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hunit::TestCase*/ ,(int)offsetof(TestState_obj,testCase),HX_HCSTRING("testCase","\x22","\xa4","\xec","\x44")},
	{hx::fsString,(int)offsetof(TestState_obj,testName),HX_HCSTRING("testName","\xbd","\xf7","\x31","\x4c")},
	{hx::fsObject /*::hunit::report::TestReport*/ ,(int)offsetof(TestState_obj,report),HX_HCSTRING("report","\xb4","\x3c","\x84","\x06")},
	{hx::fsObject /*::hunit::exceptions::ExpectedExceptionData*/ ,(int)offsetof(TestState_obj,expectedException),HX_HCSTRING("expectedException","\xb7","\x32","\xaf","\xa9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestState_obj,print),HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8")},
	{hx::fsBool,(int)offsetof(TestState_obj,warned),HX_HCSTRING("warned","\x25","\x58","\x04","\xba")},
	{hx::fsObject /*::List*/ ,(int)offsetof(TestState_obj,expectedCalls),HX_HCSTRING("expectedCalls","\x7d","\x40","\x85","\x4b")},
	{hx::fsObject /*::List*/ ,(int)offsetof(TestState_obj,asserted),HX_HCSTRING("asserted","\xa5","\x5c","\x77","\xc8")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TestState_obj,pendingExceptions),HX_HCSTRING("pendingExceptions","\x7b","\x44","\x16","\xba")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TestState_obj,callExceptions),HX_HCSTRING("callExceptions","\x82","\x83","\x73","\xe5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("testCase","\x22","\xa4","\xec","\x44"),
	HX_HCSTRING("testName","\xbd","\xf7","\x31","\x4c"),
	HX_HCSTRING("report","\xb4","\x3c","\x84","\x06"),
	HX_HCSTRING("expectedException","\xb7","\x32","\xaf","\xa9"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("warned","\x25","\x58","\x04","\xba"),
	HX_HCSTRING("expectedCalls","\x7d","\x40","\x85","\x4b"),
	HX_HCSTRING("asserted","\xa5","\x5c","\x77","\xc8"),
	HX_HCSTRING("pendingExceptions","\x7b","\x44","\x16","\xba"),
	HX_HCSTRING("callExceptions","\x82","\x83","\x73","\xe5"),
	HX_HCSTRING("expectingException","\x66","\x06","\xc9","\x14"),
	HX_HCSTRING("validateException","\xd9","\x5c","\x31","\xdf"),
	HX_HCSTRING("success","\xc3","\x25","\x4e","\xb8"),
	HX_HCSTRING("warn","\x46","\x62","\xf2","\x4e"),
	HX_HCSTRING("fail","\xde","\xb9","\xb5","\x43"),
	HX_HCSTRING("notice","\x18","\xd8","\xb8","\x31"),
	HX_HCSTRING("pendingFail","\xd5","\xf5","\x83","\xc0"),
	HX_HCSTRING("cacheCallException","\x2f","\xc8","\xd8","\xaa"),
	HX_HCSTRING("getOriginalExceptionStack","\xe0","\x71","\xcb","\xbf"),
	HX_HCSTRING("madeAssertions","\xa6","\x57","\x25","\x2c"),
	HX_HCSTRING("finalize","\x9e","\x45","\x3a","\xf5"),
	HX_HCSTRING("set_expectedException","\x9a","\x03","\x66","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestState_obj::__mClass,"__mClass");
};

#endif

hx::Class TestState_obj::__mClass;

void TestState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.TestState","\x3d","\x9c","\xb4","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TestState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestState_obj >;
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
