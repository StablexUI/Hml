#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
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
#ifndef INCLUDED_hunit_assert_BaseAssert
#include <hunit/assert/BaseAssert.h>
#endif
#ifndef INCLUDED_hunit_assert_MatchAssert
#include <hunit/assert/MatchAssert.h>
#endif
#ifndef INCLUDED_hunit_exceptions_AssertException
#include <hunit/exceptions/AssertException.h>
#endif
#ifndef INCLUDED_hunit_exceptions_TestFailException
#include <hunit/exceptions/TestFailException.h>
#endif
#ifndef INCLUDED_hunit_match_ERegMatch
#include <hunit/match/ERegMatch.h>
#endif
#ifndef INCLUDED_hunit_match_EqualMatch
#include <hunit/match/EqualMatch.h>
#endif
#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
#ifndef INCLUDED_hunit_match_MatchFactory
#include <hunit/match/MatchFactory.h>
#endif
#ifndef INCLUDED_hunit_match_NotEqualMatch
#include <hunit/match/NotEqualMatch.h>
#endif
#ifndef INCLUDED_hunit_match_SimilarMatch
#include <hunit/match/SimilarMatch.h>
#endif
#ifndef INCLUDED_hunit_match_TypeMatch
#include <hunit/match/TypeMatch.h>
#endif
#ifndef INCLUDED_hunit_warnings_ForcedWarning
#include <hunit/warnings/ForcedWarning.h>
#endif
#ifndef INCLUDED_hunit_warnings_Warning
#include <hunit/warnings/Warning.h>
#endif
namespace hunit{
namespace _assert{

Void AssertFactory_obj::__construct(::hunit::TestCase testCase)
{
HX_STACK_FRAME("hunit.assert.AssertFactory","new",0x60548790,"hunit.assert.AssertFactory.new","hunit/assert/AssertFactory.hx",29,0x56a74c00)
HX_STACK_THIS(this)
HX_STACK_ARG(testCase,"testCase")
{
	HX_STACK_LINE(29)
	this->testCase = testCase;
}
;
	return null();
}

//AssertFactory_obj::~AssertFactory_obj() { }

Dynamic AssertFactory_obj::__CreateEmpty() { return  new AssertFactory_obj; }
hx::ObjectPtr< AssertFactory_obj > AssertFactory_obj::__new(::hunit::TestCase testCase)
{  hx::ObjectPtr< AssertFactory_obj > _result_ = new AssertFactory_obj();
	_result_->__construct(testCase);
	return _result_;}

Dynamic AssertFactory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssertFactory_obj > _result_ = new AssertFactory_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void AssertFactory_obj::match( ::hunit::match::Match match,Dynamic value,::String message,Dynamic pos){
{
		HX_STACK_FRAME("hunit.assert.AssertFactory","match",0xee242c75,"hunit.assert.AssertFactory.match","hunit/assert/AssertFactory.hx",38,0x56a74c00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(match,"match")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(39)
		::hunit::_assert::MatchAssert tmp = ::hunit::_assert::MatchAssert_obj::__new(match,value,message,pos);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		::hunit::_assert::MatchAssert _assert = tmp;		HX_STACK_VAR(_assert,"assert");
		HX_STACK_LINE(40)
		::hunit::TestCase tmp1 = this->testCase;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		::List tmp2 = tmp1->__hu_state->asserted;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		::hunit::_assert::MatchAssert tmp3 = _assert;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		tmp2->add(tmp3);
		HX_STACK_LINE(42)
		_assert->__Field(HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(AssertFactory_obj,match,(void))

Void AssertFactory_obj::equal( Dynamic expected,Dynamic actual,::String message,Dynamic pos){
{
		HX_STACK_FRAME("hunit.assert.AssertFactory","equal",0x5d83b2e4,"hunit.assert.AssertFactory.equal","hunit/assert/AssertFactory.hx",51,0x56a74c00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(expected,"expected")
		HX_STACK_ARG(actual,"actual")
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(52)
		::hunit::TestCase tmp = this->testCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		Dynamic tmp1 = expected;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		::hunit::match::EqualMatch tmp2 = tmp->match->equal(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		Dynamic tmp3 = actual;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		::String tmp4 = message;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		Dynamic tmp5 = pos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		::hunit::_assert::MatchAssert tmp6 = ::hunit::_assert::MatchAssert_obj::__new(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		::hunit::_assert::MatchAssert _assert = tmp6;		HX_STACK_VAR(_assert,"assert");
		HX_STACK_LINE(53)
		::hunit::TestCase tmp7 = this->testCase;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(53)
		::List tmp8 = tmp7->__hu_state->asserted;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		::hunit::_assert::MatchAssert tmp9 = _assert;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(53)
		tmp8->add(tmp9);
		HX_STACK_LINE(55)
		_assert->__Field(HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(AssertFactory_obj,equal,(void))

Void AssertFactory_obj::notEqual( Dynamic expected,Dynamic actual,::String message,Dynamic pos){
{
		HX_STACK_FRAME("hunit.assert.AssertFactory","notEqual",0x22badc71,"hunit.assert.AssertFactory.notEqual","hunit/assert/AssertFactory.hx",64,0x56a74c00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(expected,"expected")
		HX_STACK_ARG(actual,"actual")
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(65)
		::hunit::TestCase tmp = this->testCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		Dynamic tmp1 = expected;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		::hunit::match::NotEqualMatch tmp2 = tmp->match->notEqual(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		Dynamic tmp3 = actual;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		::String tmp4 = message;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		Dynamic tmp5 = pos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(65)
		::hunit::_assert::MatchAssert tmp6 = ::hunit::_assert::MatchAssert_obj::__new(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		::hunit::_assert::MatchAssert _assert = tmp6;		HX_STACK_VAR(_assert,"assert");
		HX_STACK_LINE(66)
		::hunit::TestCase tmp7 = this->testCase;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		::List tmp8 = tmp7->__hu_state->asserted;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(66)
		::hunit::_assert::MatchAssert tmp9 = _assert;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(66)
		tmp8->add(tmp9);
		HX_STACK_LINE(68)
		_assert->__Field(HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(AssertFactory_obj,notEqual,(void))

Void AssertFactory_obj::type( ::hx::Class expectedType,Dynamic value,::String message,Dynamic pos){
{
		HX_STACK_FRAME("hunit.assert.AssertFactory","type",0xeda8858a,"hunit.assert.AssertFactory.type","hunit/assert/AssertFactory.hx",77,0x56a74c00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(expectedType,"expectedType")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(78)
		::hunit::TestCase tmp = this->testCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		::hx::Class tmp1 = expectedType;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		::hunit::match::TypeMatch tmp2 = tmp->match->type(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		::String tmp4 = message;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		Dynamic tmp5 = pos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		::hunit::_assert::MatchAssert tmp6 = ::hunit::_assert::MatchAssert_obj::__new(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		::hunit::_assert::MatchAssert _assert = tmp6;		HX_STACK_VAR(_assert,"assert");
		HX_STACK_LINE(79)
		::hunit::TestCase tmp7 = this->testCase;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(79)
		::List tmp8 = tmp7->__hu_state->asserted;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(79)
		::hunit::_assert::MatchAssert tmp9 = _assert;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(79)
		tmp8->add(tmp9);
		HX_STACK_LINE(81)
		_assert->__Field(HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(AssertFactory_obj,type,(void))

Void AssertFactory_obj::isNull( Dynamic value,::String message,Dynamic pos){
{
		HX_STACK_FRAME("hunit.assert.AssertFactory","isNull",0x1c3b4a61,"hunit.assert.AssertFactory.isNull","hunit/assert/AssertFactory.hx",90,0x56a74c00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(91)
		::hunit::TestCase tmp = this->testCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		::hunit::match::EqualMatch tmp1 = tmp->match->equal(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		::String tmp3 = message;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		Dynamic tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		::hunit::_assert::MatchAssert tmp5 = ::hunit::_assert::MatchAssert_obj::__new(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		::hunit::_assert::MatchAssert _assert = tmp5;		HX_STACK_VAR(_assert,"assert");
		HX_STACK_LINE(92)
		::hunit::TestCase tmp6 = this->testCase;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(92)
		::List tmp7 = tmp6->__hu_state->asserted;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(92)
		::hunit::_assert::MatchAssert tmp8 = _assert;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(92)
		tmp7->add(tmp8);
		HX_STACK_LINE(94)
		_assert->__Field(HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AssertFactory_obj,isNull,(void))

Void AssertFactory_obj::notNull( Dynamic value,::String message,Dynamic pos){
{
		HX_STACK_FRAME("hunit.assert.AssertFactory","notNull",0x959d386a,"hunit.assert.AssertFactory.notNull","hunit/assert/AssertFactory.hx",103,0x56a74c00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(104)
		::hunit::TestCase tmp = this->testCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		::hunit::match::NotEqualMatch tmp1 = tmp->match->notEqual(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		::String tmp3 = message;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		Dynamic tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		::hunit::_assert::MatchAssert tmp5 = ::hunit::_assert::MatchAssert_obj::__new(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		::hunit::_assert::MatchAssert _assert = tmp5;		HX_STACK_VAR(_assert,"assert");
		HX_STACK_LINE(105)
		::hunit::TestCase tmp6 = this->testCase;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		::List tmp7 = tmp6->__hu_state->asserted;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(105)
		::hunit::_assert::MatchAssert tmp8 = _assert;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(105)
		tmp7->add(tmp8);
		HX_STACK_LINE(107)
		_assert->__Field(HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AssertFactory_obj,notNull,(void))

Void AssertFactory_obj::isTrue( bool value,::String message,Dynamic pos){
{
		HX_STACK_FRAME("hunit.assert.AssertFactory","isTrue",0x20305328,"hunit.assert.AssertFactory.isTrue","hunit/assert/AssertFactory.hx",116,0x56a74c00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(117)
		::hunit::TestCase tmp = this->testCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		::hunit::match::EqualMatch tmp1 = tmp->match->equal(true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		::String tmp3 = message;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		Dynamic tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(117)
		::hunit::_assert::MatchAssert tmp5 = ::hunit::_assert::MatchAssert_obj::__new(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(117)
		::hunit::_assert::MatchAssert _assert = tmp5;		HX_STACK_VAR(_assert,"assert");
		HX_STACK_LINE(118)
		::hunit::TestCase tmp6 = this->testCase;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(118)
		::List tmp7 = tmp6->__hu_state->asserted;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(118)
		::hunit::_assert::MatchAssert tmp8 = _assert;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(118)
		tmp7->add(tmp8);
		HX_STACK_LINE(120)
		_assert->__Field(HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AssertFactory_obj,isTrue,(void))

Void AssertFactory_obj::isFalse( bool value,::String message,Dynamic pos){
{
		HX_STACK_FRAME("hunit.assert.AssertFactory","isFalse",0xef38e889,"hunit.assert.AssertFactory.isFalse","hunit/assert/AssertFactory.hx",129,0x56a74c00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(130)
		::hunit::TestCase tmp = this->testCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		::hunit::match::EqualMatch tmp1 = tmp->match->equal(false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		::String tmp3 = message;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		Dynamic tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		::hunit::_assert::MatchAssert tmp5 = ::hunit::_assert::MatchAssert_obj::__new(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		::hunit::_assert::MatchAssert _assert = tmp5;		HX_STACK_VAR(_assert,"assert");
		HX_STACK_LINE(131)
		::hunit::TestCase tmp6 = this->testCase;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		::List tmp7 = tmp6->__hu_state->asserted;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(131)
		::hunit::_assert::MatchAssert tmp8 = _assert;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(131)
		tmp7->add(tmp8);
		HX_STACK_LINE(133)
		_assert->__Field(HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AssertFactory_obj,isFalse,(void))

Void AssertFactory_obj::regexp( ::EReg pattern,::String value,::String message,Dynamic pos){
{
		HX_STACK_FRAME("hunit.assert.AssertFactory","regexp",0xb64fa699,"hunit.assert.AssertFactory.regexp","hunit/assert/AssertFactory.hx",142,0x56a74c00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pattern,"pattern")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(143)
		::hunit::TestCase tmp = this->testCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		::EReg tmp1 = pattern;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		::hunit::match::ERegMatch tmp2 = tmp->match->regexp(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		::String tmp4 = message;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		Dynamic tmp5 = pos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		::hunit::_assert::MatchAssert tmp6 = ::hunit::_assert::MatchAssert_obj::__new(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		::hunit::_assert::MatchAssert _assert = tmp6;		HX_STACK_VAR(_assert,"assert");
		HX_STACK_LINE(144)
		::hunit::TestCase tmp7 = this->testCase;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(144)
		::List tmp8 = tmp7->__hu_state->asserted;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(144)
		::hunit::_assert::MatchAssert tmp9 = _assert;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(144)
		tmp8->add(tmp9);
		HX_STACK_LINE(146)
		_assert->__Field(HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(AssertFactory_obj,regexp,(void))

Void AssertFactory_obj::similar( Dynamic expected,Dynamic actual,::String message,Dynamic pos){
{
		HX_STACK_FRAME("hunit.assert.AssertFactory","similar",0x0968355b,"hunit.assert.AssertFactory.similar","hunit/assert/AssertFactory.hx",168,0x56a74c00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(expected,"expected")
		HX_STACK_ARG(actual,"actual")
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(169)
		::hunit::TestCase tmp = this->testCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		Dynamic tmp1 = expected;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		::hunit::match::SimilarMatch tmp2 = tmp->match->similar(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		Dynamic tmp3 = actual;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(169)
		::String tmp4 = message;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(169)
		Dynamic tmp5 = pos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(169)
		::hunit::_assert::MatchAssert tmp6 = ::hunit::_assert::MatchAssert_obj::__new(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(169)
		::hunit::_assert::MatchAssert _assert = tmp6;		HX_STACK_VAR(_assert,"assert");
		HX_STACK_LINE(170)
		::hunit::TestCase tmp7 = this->testCase;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		::List tmp8 = tmp7->__hu_state->asserted;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(170)
		::hunit::_assert::MatchAssert tmp9 = _assert;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(170)
		tmp8->add(tmp9);
		HX_STACK_LINE(172)
		_assert->__Field(HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(AssertFactory_obj,similar,(void))

Void AssertFactory_obj::fail( ::String message,Dynamic pos){
{
		HX_STACK_FRAME("hunit.assert.AssertFactory","fail",0xe4554cae,"hunit.assert.AssertFactory.fail","hunit/assert/AssertFactory.hx",181,0x56a74c00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(182)
		bool tmp = (message == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		if ((tmp)){
			HX_STACK_LINE(182)
			tmp1 = HX_HCSTRING("Forced test failure.","\x0b","\xfc","\xac","\x16");
		}
		else{
			HX_STACK_LINE(182)
			tmp1 = message;
		}
		HX_STACK_LINE(182)
		Dynamic tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		::hunit::exceptions::AssertException tmp3 = ::hunit::exceptions::AssertException_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		HX_STACK_DO_THROW(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssertFactory_obj,fail,(void))

Void AssertFactory_obj::warn( ::String message,Dynamic pos){
{
		HX_STACK_FRAME("hunit.assert.AssertFactory","warn",0xef91f516,"hunit.assert.AssertFactory.warn","hunit/assert/AssertFactory.hx",191,0x56a74c00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(192)
		::hunit::TestCase tmp = this->testCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		bool tmp1 = (message == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		if ((tmp1)){
			HX_STACK_LINE(192)
			tmp2 = HX_HCSTRING("Forced warning","\x75","\xef","\xe5","\x0a");
		}
		else{
			HX_STACK_LINE(192)
			tmp2 = message;
		}
		HX_STACK_LINE(192)
		::hunit::warnings::ForcedWarning tmp3 = ::hunit::warnings::ForcedWarning_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		tmp->__hu_state->warn(tmp3);
		HX_STACK_LINE(193)
		::hunit::TestCase tmp4 = this->testCase;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(193)
		::List tmp5 = tmp4->__hu_state->asserted;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(193)
		::hunit::_assert::BaseAssert tmp6 = ::hunit::_assert::BaseAssert_obj::__new(pos);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(193)
		tmp5->add(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssertFactory_obj,warn,(void))

Void AssertFactory_obj::success( Dynamic pos){
{
		HX_STACK_FRAME("hunit.assert.AssertFactory","success",0x0fb234f3,"hunit.assert.AssertFactory.success","hunit/assert/AssertFactory.hx",202,0x56a74c00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(203)
		::hunit::TestCase tmp = this->testCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		::List tmp1 = tmp->__hu_state->asserted;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(203)
		::hunit::_assert::BaseAssert tmp2 = ::hunit::_assert::BaseAssert_obj::__new(pos);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(203)
		tmp1->add(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssertFactory_obj,success,(void))


AssertFactory_obj::AssertFactory_obj()
{
}

void AssertFactory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssertFactory);
	HX_MARK_MEMBER_NAME(testCase,"testCase");
	HX_MARK_END_CLASS();
}

void AssertFactory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(testCase,"testCase");
}

Dynamic AssertFactory_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type_dyn(); }
		if (HX_FIELD_EQ(inName,"fail") ) { return fail_dyn(); }
		if (HX_FIELD_EQ(inName,"warn") ) { return warn_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return match_dyn(); }
		if (HX_FIELD_EQ(inName,"equal") ) { return equal_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isNull") ) { return isNull_dyn(); }
		if (HX_FIELD_EQ(inName,"isTrue") ) { return isTrue_dyn(); }
		if (HX_FIELD_EQ(inName,"regexp") ) { return regexp_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"notNull") ) { return notNull_dyn(); }
		if (HX_FIELD_EQ(inName,"isFalse") ) { return isFalse_dyn(); }
		if (HX_FIELD_EQ(inName,"similar") ) { return similar_dyn(); }
		if (HX_FIELD_EQ(inName,"success") ) { return success_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testCase") ) { return testCase; }
		if (HX_FIELD_EQ(inName,"notEqual") ) { return notEqual_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssertFactory_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"testCase") ) { testCase=inValue.Cast< ::hunit::TestCase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AssertFactory_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AssertFactory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("testCase","\x22","\xa4","\xec","\x44"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hunit::TestCase*/ ,(int)offsetof(AssertFactory_obj,testCase),HX_HCSTRING("testCase","\x22","\xa4","\xec","\x44")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("testCase","\x22","\xa4","\xec","\x44"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"),
	HX_HCSTRING("notEqual","\xa1","\xa1","\x91","\x02"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("isNull","\x91","\x63","\x75","\x66"),
	HX_HCSTRING("notNull","\x3a","\x29","\x39","\x3e"),
	HX_HCSTRING("isTrue","\x58","\x6c","\x6a","\x6a"),
	HX_HCSTRING("isFalse","\x59","\xd9","\xd4","\x97"),
	HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"),
	HX_HCSTRING("similar","\x2b","\x26","\x04","\xb2"),
	HX_HCSTRING("fail","\xde","\xb9","\xb5","\x43"),
	HX_HCSTRING("warn","\x46","\x62","\xf2","\x4e"),
	HX_HCSTRING("success","\xc3","\x25","\x4e","\xb8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssertFactory_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssertFactory_obj::__mClass,"__mClass");
};

#endif

hx::Class AssertFactory_obj::__mClass;

void AssertFactory_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.assert.AssertFactory","\x9e","\xbf","\xfd","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &AssertFactory_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssertFactory_obj >;
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
} // end namespace assert
