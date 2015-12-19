#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_hunit_TestCase
#include <hunit/TestCase.h>
#endif
#ifndef INCLUDED_hunit_TestState
#include <hunit/TestState.h>
#endif
#ifndef INCLUDED_hunit_assert_AssertFactory
#include <hunit/assert/AssertFactory.h>
#endif
#ifndef INCLUDED_hunit_exceptions_ExpectedExceptionData
#include <hunit/exceptions/ExpectedExceptionData.h>
#endif
#ifndef INCLUDED_hunit_exceptions_InvalidTestException
#include <hunit/exceptions/InvalidTestException.h>
#endif
#ifndef INCLUDED_hunit_match_AnyMatch
#include <hunit/match/AnyMatch.h>
#endif
#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
#ifndef INCLUDED_hunit_match_MatchChainLogic
#include <hunit/match/MatchChainLogic.h>
#endif
#ifndef INCLUDED_hunit_match_MatchFactory
#include <hunit/match/MatchFactory.h>
#endif
#ifndef INCLUDED_hunit_mock_IMock
#include <hunit/mock/IMock.h>
#endif
#ifndef INCLUDED_hunit_mock_MockData
#include <hunit/mock/MockData.h>
#endif
namespace hunit{

Void TestCase_obj::__construct()
{
HX_STACK_FRAME("hunit.TestCase","new",0x1f8ad4f6,"hunit.TestCase.new","hunit/TestCase.hx",65,0xbf04e8d9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(66)
	::hunit::match::MatchFactory tmp = ::hunit::match::MatchFactory_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	this->set_match(tmp);
	HX_STACK_LINE(67)
	::hunit::_assert::AssertFactory tmp1 = ::hunit::_assert::AssertFactory_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	this->set_assert(tmp1);
}
;
	return null();
}

//TestCase_obj::~TestCase_obj() { }

Dynamic TestCase_obj::__CreateEmpty() { return  new TestCase_obj; }
hx::ObjectPtr< TestCase_obj > TestCase_obj::__new()
{  hx::ObjectPtr< TestCase_obj > _result_ = new TestCase_obj();
	_result_->__construct();
	return _result_;}

Dynamic TestCase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestCase_obj > _result_ = new TestCase_obj();
	_result_->__construct();
	return _result_;}

Void TestCase_obj::setupTestCase( ){
{
		HX_STACK_FRAME("hunit.TestCase","setupTestCase",0xdb032fd5,"hunit.TestCase.setupTestCase","hunit/TestCase.hx",76,0xbf04e8d9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestCase_obj,setupTestCase,(void))

Void TestCase_obj::setup( ){
{
		HX_STACK_FRAME("hunit.TestCase","setup",0x18a18493,"hunit.TestCase.setup","hunit/TestCase.hx",85,0xbf04e8d9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestCase_obj,setup,(void))

Void TestCase_obj::tearDown( ){
{
		HX_STACK_FRAME("hunit.TestCase","tearDown",0xacc971ce,"hunit.TestCase.tearDown","hunit/TestCase.hx",95,0xbf04e8d9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestCase_obj,tearDown,(void))

Void TestCase_obj::tearDownTestCase( ){
{
		HX_STACK_FRAME("hunit.TestCase","tearDownTestCase",0x8a035010,"hunit.TestCase.tearDownTestCase","hunit/TestCase.hx",105,0xbf04e8d9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestCase_obj,tearDownTestCase,(void))

Void TestCase_obj::expectException( Dynamic match,Dynamic pos){
{
		HX_STACK_FRAME("hunit.TestCase","expectException",0xd6e78ccc,"hunit.TestCase.expectException","hunit/TestCase.hx",174,0xbf04e8d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(match,"match")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(175)
		bool tmp = (match == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		if ((tmp)){
			HX_STACK_LINE(176)
			::hunit::match::AnyMatch tmp1 = ::hunit::match::AnyMatch_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(176)
			match = tmp1;
		}
		HX_STACK_LINE(179)
		::hunit::TestState tmp1 = this->__hu_state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		::hunit::exceptions::ExpectedExceptionData tmp2 = ::hunit::exceptions::ExpectedExceptionData_obj::__new(match,pos);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		tmp1->set_expectedException(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TestCase_obj,expectException,(void))

Void TestCase_obj::notice( ::String msg,Dynamic pos){
{
		HX_STACK_FRAME("hunit.TestCase","notice",0x36e25542,"hunit.TestCase.notice","hunit/TestCase.hx",188,0xbf04e8d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(189)
		::hunit::TestState tmp = this->__hu_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		::String tmp1 = msg;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		Dynamic tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		tmp->notice(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TestCase_obj,notice,(void))

::hunit::match::MatchFactory TestCase_obj::set_match( ::hunit::match::MatchFactory match){
	HX_STACK_FRAME("hunit.TestCase","set_match",0xc0032abe,"hunit.TestCase.set_match","hunit/TestCase.hx",199,0xbf04e8d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(match,"match")
	HX_STACK_LINE(200)
	::hunit::match::MatchFactory tmp = this->match;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	if ((tmp1)){
		HX_STACK_LINE(201)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("TestCase.hx","\xbc","\xf7","\x60","\xf8"),201,HX_HCSTRING("hunit.TestCase","\x04","\xe2","\x9b","\x3a"),HX_HCSTRING("set_match","\xa8","\x91","\x1d","\x2a"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		::hunit::exceptions::InvalidTestException tmp3 = ::hunit::exceptions::InvalidTestException_obj::__new(HX_HCSTRING("Matcher factory already set","\x76","\x98","\x4e","\x38"),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(204)
	::hunit::match::MatchFactory tmp2 = this->match = match;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(204)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TestCase_obj,set_match,return )

::hunit::_assert::AssertFactory TestCase_obj::set_assert( ::hunit::_assert::AssertFactory _assert){
	HX_STACK_FRAME("hunit.TestCase","set_assert",0xd308af2d,"hunit.TestCase.set_assert","hunit/TestCase.hx",214,0xbf04e8d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_assert,"assert")
	HX_STACK_LINE(215)
	::hunit::_assert::AssertFactory tmp = this->_assert;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	if ((tmp1)){
		HX_STACK_LINE(216)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("TestCase.hx","\xbc","\xf7","\x60","\xf8"),216,HX_HCSTRING("hunit.TestCase","\x04","\xe2","\x9b","\x3a"),HX_HCSTRING("set_assert","\x03","\x55","\x08","\x40"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		::hunit::exceptions::InvalidTestException tmp3 = ::hunit::exceptions::InvalidTestException_obj::__new(HX_HCSTRING("Assertion factory already set","\x46","\xa2","\x9a","\x50"),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(216)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(219)
	::hunit::_assert::AssertFactory tmp2 = this->_assert = _assert;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(219)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TestCase_obj,set_assert,return )

::hunit::mock::MockData TestCase_obj::getMockData( ::hunit::mock::IMock mock){
	HX_STACK_FRAME("hunit.TestCase","getMockData",0xf3fcaf20,"hunit.TestCase.getMockData","hunit/TestCase.hx",55,0xbf04e8d9)
	HX_STACK_ARG(mock,"mock")
	HX_STACK_LINE(56)
	::hunit::mock::MockData tmp = mock->__Field(HX_HCSTRING("__hu_mock__","\x3c","\x87","\xe6","\x32"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TestCase_obj,getMockData,return )


TestCase_obj::TestCase_obj()
{
}

void TestCase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestCase);
	HX_MARK_MEMBER_NAME(match,"match");
	HX_MARK_MEMBER_NAME(_assert,"assert");
	HX_MARK_MEMBER_NAME(__hu_state,"__hu_state");
	HX_MARK_END_CLASS();
}

void TestCase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(match,"match");
	HX_VISIT_MEMBER_NAME(_assert,"assert");
	HX_VISIT_MEMBER_NAME(__hu_state,"__hu_state");
}

Dynamic TestCase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return match; }
		if (HX_FIELD_EQ(inName,"setup") ) { return setup_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assert") ) { return _assert; }
		if (HX_FIELD_EQ(inName,"notice") ) { return notice_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tearDown") ) { return tearDown_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_match") ) { return set_match_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__hu_state") ) { return __hu_state; }
		if (HX_FIELD_EQ(inName,"set_assert") ) { return set_assert_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setupTestCase") ) { return setupTestCase_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"expectException") ) { return expectException_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tearDownTestCase") ) { return tearDownTestCase_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TestCase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"getMockData") ) { outValue = getMockData_dyn(); return true;  }
	}
	return false;
}

Dynamic TestCase_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { if (inCallProp == hx::paccAlways) return set_match(inValue);match=inValue.Cast< ::hunit::match::MatchFactory >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assert") ) { if (inCallProp == hx::paccAlways) return set_assert(inValue);_assert=inValue.Cast< ::hunit::_assert::AssertFactory >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__hu_state") ) { __hu_state=inValue.Cast< ::hunit::TestState >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TestCase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TestCase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("match","\x45","\x49","\x23","\x03"));
	outFields->push(HX_HCSTRING("assert","\xc6","\x46","\x03","\x4c"));
	outFields->push(HX_HCSTRING("__hu_state","\x3f","\xd3","\xf8","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hunit::match::MatchFactory*/ ,(int)offsetof(TestCase_obj,match),HX_HCSTRING("match","\x45","\x49","\x23","\x03")},
	{hx::fsObject /*::hunit::_assert::AssertFactory*/ ,(int)offsetof(TestCase_obj,_assert),HX_HCSTRING("assert","\xc6","\x46","\x03","\x4c")},
	{hx::fsObject /*::hunit::TestState*/ ,(int)offsetof(TestCase_obj,__hu_state),HX_HCSTRING("__hu_state","\x3f","\xd3","\xf8","\x60")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("assert","\xc6","\x46","\x03","\x4c"),
	HX_HCSTRING("__hu_state","\x3f","\xd3","\xf8","\x60"),
	HX_HCSTRING("setupTestCase","\xbf","\x53","\x0c","\xf5"),
	HX_HCSTRING("setup","\x7d","\xae","\x2f","\x7a"),
	HX_HCSTRING("tearDown","\x24","\xd6","\x66","\xec"),
	HX_HCSTRING("tearDownTestCase","\x66","\xfa","\xbd","\x58"),
	HX_HCSTRING("expectException","\x36","\xff","\x70","\x60"),
	HX_HCSTRING("notice","\x18","\xd8","\xb8","\x31"),
	HX_HCSTRING("set_match","\xa8","\x91","\x1d","\x2a"),
	HX_HCSTRING("set_assert","\x03","\x55","\x08","\x40"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestCase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestCase_obj::__mClass,"__mClass");
};

#endif

hx::Class TestCase_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getMockData","\x8a","\x24","\xae","\xe6"),
	::String(null()) };

void TestCase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.TestCase","\x04","\xe2","\x9b","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TestCase_obj::__GetStatic;
	__mClass->mSetStaticField = &TestCase_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestCase_obj >;
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

void TestCase_obj::__boot()
{
	__mClass->__rtti__=HX_HCSTRING("<class path=\"hunit.TestCase\" params=\"\">\n\t<getMockData public=\"1\" set=\"method\" line=\"54\" static=\"1\">\n\t\t<f a=\"mock\">\n\t\t\t<c path=\"hunit.mock.IMock\"/>\n\t\t\t<c path=\"hunit.mock.MockData\"/>\n\t\t</f>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</getMockData>\n\t<match public=\"1\" set=\"accessor\"><c path=\"hunit.match.MatchFactory\"/></match>\n\t<assert public=\"1\" set=\"accessor\"><c path=\"hunit.assert.AssertFactory\"/></assert>\n\t<__hu_state public=\"1\">\n\t\t<t path=\"Null\"><c path=\"hunit.TestState\"/></t>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</__hu_state>\n\t<setupTestCase public=\"1\" set=\"method\" line=\"75\"><f a=\"\"><x path=\"Void\"/></f></setupTestCase>\n\t<setup public=\"1\" set=\"method\" line=\"84\"><f a=\"\"><x path=\"Void\"/></f></setup>\n\t<tearDown public=\"1\" set=\"method\" line=\"94\"><f a=\"\"><x path=\"Void\"/></f></tearDown>\n\t<tearDownTestCase public=\"1\" set=\"method\" line=\"104\"><f a=\"\"><x path=\"Void\"/></f></tearDownTestCase>\n\t<expectException public=\"1\" params=\"T\" set=\"method\" line=\"173\">\n\t\t<f a=\"?match:?pos\" v=\"null:\">\n\t\t\t<x path=\"hunit.Match\"><c path=\"expectException.T\"/></x>\n\t\t\t<t path=\"haxe.PosInfos\"/>\n\t\t\t<x path=\"Void\"/>\n\t\t</f>\n\t\t<meta><m n=\":value\"><e>{match:null}</e></m></meta>\n\t</expectException>\n\t<notice public=\"1\" set=\"method\" line=\"187\"><f a=\"msg:?pos\">\n\t<c path=\"String\"/>\n\t<t path=\"haxe.PosInfos\"/>\n\t<x path=\"Void\"/>\n</f></notice>\n\t<set_match set=\"method\" line=\"198\">\n\t\t<f a=\"match\">\n\t\t\t<c path=\"hunit.match.MatchFactory\"/>\n\t\t\t<c path=\"hunit.match.MatchFactory\"/>\n\t\t</f>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</set_match>\n\t<set_assert set=\"method\" line=\"213\">\n\t\t<f a=\"assert\">\n\t\t\t<c path=\"hunit.assert.AssertFactory\"/>\n\t\t\t<c path=\"hunit.assert.AssertFactory\"/>\n\t\t</f>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</set_assert>\n\t<new public=\"1\" set=\"method\" line=\"64\"><f a=\"\"><x path=\"Void\"/></f></new>\n\t<meta>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t\t<m n=\":access\"><e>hunit.mock.IMock</e></m>\n\t\t<m n=\":rtti\"/>\n\t\t<m n=\":keepSub\"/>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t</meta>\n</class>","\xaa","\xda","\xa9","\x7d");
}

} // end namespace hunit
