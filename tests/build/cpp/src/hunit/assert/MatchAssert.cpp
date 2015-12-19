#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_hunit_Utils
#include <hunit/Utils.h>
#endif
#ifndef INCLUDED_hunit_assert_BaseAssert
#include <hunit/assert/BaseAssert.h>
#endif
#ifndef INCLUDED_hunit_assert_MatchAssert
#include <hunit/assert/MatchAssert.h>
#endif
#ifndef INCLUDED_hunit_match_EqualMatch
#include <hunit/match/EqualMatch.h>
#endif
#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
#ifndef INCLUDED_hunit_match_NotEqualMatch
#include <hunit/match/NotEqualMatch.h>
#endif
#ifndef INCLUDED_hunit_match_TypeMatch
#include <hunit/match/TypeMatch.h>
#endif
namespace hunit{
namespace _assert{

Void MatchAssert_obj::__construct(::hunit::match::Match expected,Dynamic actual,::String message,Dynamic pos)
{
HX_STACK_FRAME("hunit.assert.MatchAssert","new",0x9270a7d7,"hunit.assert.MatchAssert.new","hunit/assert/MatchAssert.hx",30,0xcd514999)
HX_STACK_THIS(this)
HX_STACK_ARG(expected,"expected")
HX_STACK_ARG(actual,"actual")
HX_STACK_ARG(message,"message")
HX_STACK_ARG(pos,"pos")
{
	HX_STACK_LINE(31)
	Dynamic tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	super::__construct(tmp);
	HX_STACK_LINE(33)
	this->expected = expected;
	HX_STACK_LINE(34)
	this->actual = actual;
	HX_STACK_LINE(35)
	this->message = message;
}
;
	return null();
}

//MatchAssert_obj::~MatchAssert_obj() { }

Dynamic MatchAssert_obj::__CreateEmpty() { return  new MatchAssert_obj; }
hx::ObjectPtr< MatchAssert_obj > MatchAssert_obj::__new(::hunit::match::Match expected,Dynamic actual,::String message,Dynamic pos)
{  hx::ObjectPtr< MatchAssert_obj > _result_ = new MatchAssert_obj();
	_result_->__construct(expected,actual,message,pos);
	return _result_;}

Dynamic MatchAssert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MatchAssert_obj > _result_ = new MatchAssert_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void MatchAssert_obj::validate( ){
{
		HX_STACK_FRAME("hunit.assert.MatchAssert","validate",0x9c5389bf,"hunit.assert.MatchAssert.validate","hunit/assert/MatchAssert.hx",44,0xcd514999)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		::hunit::match::Match tmp = this->expected;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		Dynamic tmp1 = this->actual;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		bool tmp2 = tmp->match(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		if ((tmp2)){
			HX_STACK_LINE(45)
			return null();
		}
		HX_STACK_LINE(47)
		::String tmp3 = this->message;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		if ((tmp4)){
			HX_STACK_LINE(47)
			tmp5 = this->buildMessage();
		}
		else{
			HX_STACK_LINE(47)
			tmp5 = this->message;
		}
		HX_STACK_LINE(47)
		this->failed(tmp5);
	}
return null();
}


::String MatchAssert_obj::buildMessage( ){
	HX_STACK_FRAME("hunit.assert.MatchAssert","buildMessage",0xe41765e2,"hunit.assert.MatchAssert.buildMessage","hunit/assert/MatchAssert.hx",56,0xcd514999)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	Dynamic tmp = this->actual;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	::String tmp1 = ::hunit::Utils_obj::shortenQuote(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	::String a = tmp1;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(59)
	::hunit::match::Match tmp2 = this->expected;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	bool tmp3 = tmp2->isChained();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	if ((tmp3)){
		HX_STACK_LINE(60)
		::String tmp4 = (HX_HCSTRING("Failed asserting that ","\x52","\x41","\x96","\x4f") + a);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		::String tmp5 = (tmp4 + HX_HCSTRING(" matches ","\xed","\x37","\x66","\x21"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		::hunit::match::Match tmp6 = this->expected;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(60)
		::String tmp9 = (tmp8 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(60)
		return tmp9;
	}
	else{
		HX_STACK_LINE(62)
		::hunit::match::Match tmp4 = this->expected;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		::hx::Class tmp5 = ::Type_obj::getClass(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		::hx::Class cls = tmp5;		HX_STACK_VAR(cls,"cls");
		HX_STACK_LINE(64)
		::hx::Class tmp6 = cls;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		::hx::Class _switch_1 = (tmp6);
		if (  ( _switch_1==hx::ClassOf< ::hunit::match::TypeMatch >())){
			HX_STACK_LINE(65)
			::String tmp8 = this->actualType();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			::String tmp9 = (HX_HCSTRING("Failed asserting that ","\x52","\x41","\x96","\x4f") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(65)
			::String tmp10 = (tmp9 + HX_HCSTRING(" is ","\xd6","\xe4","\x76","\x15"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(65)
			::hunit::match::Match tmp11 = this->expected;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(65)
			::hunit::match::TypeMatch tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(65)
			tmp12 = hx::TCast< ::hunit::match::TypeMatch >::cast(tmp11);
			HX_STACK_LINE(65)
			::hx::Class tmp13 = tmp12->type;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(65)
			::String tmp14 = ::Type_obj::getClassName(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(65)
			tmp7 = (tmp10 + tmp14);
		}
		else if (  ( _switch_1==hx::ClassOf< ::hunit::match::NotEqualMatch >())){
			HX_STACK_LINE(66)
			::String tmp8 = (HX_HCSTRING("Failed asserting that ","\x52","\x41","\x96","\x4f") + a);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(66)
			::String tmp9 = (tmp8 + HX_HCSTRING(" does not equal ","\x40","\x61","\x5d","\x9f"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(66)
			::hunit::match::Match tmp10 = this->expected;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(66)
			::hunit::match::NotEqualMatch tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(66)
			tmp11 = hx::TCast< ::hunit::match::NotEqualMatch >::cast(tmp10);
			HX_STACK_LINE(66)
			Dynamic tmp12 = tmp11->value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(66)
			::String tmp13 = ::hunit::Utils_obj::shortenQuote(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(66)
			tmp7 = (tmp9 + tmp13);
		}
		else if (  ( _switch_1==hx::ClassOf< ::hunit::match::EqualMatch >())){
			HX_STACK_LINE(67)
			::String tmp8 = (HX_HCSTRING("Failed asserting that ","\x52","\x41","\x96","\x4f") + a);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(67)
			::String tmp9 = (tmp8 + HX_HCSTRING(" equals ","\xe1","\xcc","\xeb","\x5a"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(67)
			::hunit::match::Match tmp10 = this->expected;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(67)
			::hunit::match::EqualMatch tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(67)
			tmp11 = hx::TCast< ::hunit::match::EqualMatch >::cast(tmp10);
			HX_STACK_LINE(67)
			Dynamic tmp12 = tmp11->value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(67)
			::String tmp13 = ::hunit::Utils_obj::shortenQuote(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(67)
			tmp7 = (tmp9 + tmp13);
		}
		else  {
			HX_STACK_LINE(68)
			::String tmp8 = (HX_HCSTRING("Failed asserting that ","\x52","\x41","\x96","\x4f") + a);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(68)
			::String tmp9 = (tmp8 + HX_HCSTRING(" matches ","\xed","\x37","\x66","\x21"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(68)
			::hunit::match::Match tmp10 = this->expected;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			::String tmp11 = ::Std_obj::string(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			tmp7 = (tmp12 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
		}
;
;
		HX_STACK_LINE(64)
		return tmp7;
	}
	HX_STACK_LINE(59)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MatchAssert_obj,buildMessage,return )

::String MatchAssert_obj::actualType( ){
	HX_STACK_FRAME("hunit.assert.MatchAssert","actualType",0xa933ddd1,"hunit.assert.MatchAssert.actualType","hunit/assert/MatchAssert.hx",79,0xcd514999)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		Dynamic tmp1 = this->actual;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		::ValueType tmp2 = ::Type_obj::_typeof(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		::ValueType _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		switch( (int)(_g->__Index())){
			case (int)6: {
				HX_STACK_LINE(80)
				::hx::Class tmp3 = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(80)
				::hx::Class c = tmp3;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					::hx::Class tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(81)
					tmp = ::Type_obj::getClassName(tmp4);
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(80)
				::Enum tmp3 = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(80)
				::Enum e = tmp3;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(82)
				{
					HX_STACK_LINE(82)
					::Enum tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(82)
					tmp = ::Type_obj::getEnumName(tmp4);
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(83)
				tmp = HX_HCSTRING("Null","\xa7","\xca","\xe7","\x33");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(84)
				tmp = HX_HCSTRING("Int","\xcf","\xc4","\x37","\x00");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(85)
				tmp = HX_HCSTRING("Float","\x7c","\x35","\xc4","\x95");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(86)
				tmp = HX_HCSTRING("Bool","\x4a","\xb0","\xf4","\x2b");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(87)
				tmp = HX_HCSTRING("Object","\xdf","\xf2","\xd3","\x49");
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(88)
				tmp = HX_HCSTRING("Function","\x38","\x67","\x04","\xee");
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(89)
				tmp = HX_HCSTRING("Unknown Type","\x50","\xc3","\x4c","\xf8");
			}
			;break;
		}
	}
	HX_STACK_LINE(80)
	return tmp;
	HX_STACK_LINE(80)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MatchAssert_obj,actualType,return )


MatchAssert_obj::MatchAssert_obj()
{
}

void MatchAssert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MatchAssert);
	HX_MARK_MEMBER_NAME(expected,"expected");
	HX_MARK_MEMBER_NAME(actual,"actual");
	HX_MARK_MEMBER_NAME(message,"message");
	::hunit::_assert::BaseAssert_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MatchAssert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(expected,"expected");
	HX_VISIT_MEMBER_NAME(actual,"actual");
	HX_VISIT_MEMBER_NAME(message,"message");
	::hunit::_assert::BaseAssert_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MatchAssert_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"actual") ) { return actual; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return message; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"expected") ) { return expected; }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"actualType") ) { return actualType_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buildMessage") ) { return buildMessage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MatchAssert_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"actual") ) { actual=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"expected") ) { expected=inValue.Cast< ::hunit::match::Match >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MatchAssert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MatchAssert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("expected","\x78","\x2e","\x30","\x40"));
	outFields->push(HX_HCSTRING("actual","\x8e","\x4a","\x4f","\x16"));
	outFields->push(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hunit::match::Match*/ ,(int)offsetof(MatchAssert_obj,expected),HX_HCSTRING("expected","\x78","\x2e","\x30","\x40")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MatchAssert_obj,actual),HX_HCSTRING("actual","\x8e","\x4a","\x4f","\x16")},
	{hx::fsString,(int)offsetof(MatchAssert_obj,message),HX_HCSTRING("message","\xc7","\x35","\x11","\x9a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("expected","\x78","\x2e","\x30","\x40"),
	HX_HCSTRING("actual","\x8e","\x4a","\x4f","\x16"),
	HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("buildMessage","\x39","\x64","\x69","\xac"),
	HX_HCSTRING("actualType","\x68","\xc8","\x84","\x8b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MatchAssert_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MatchAssert_obj::__mClass,"__mClass");
};

#endif

hx::Class MatchAssert_obj::__mClass;

void MatchAssert_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.assert.MatchAssert","\x65","\x70","\x44","\x79");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MatchAssert_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MatchAssert_obj >;
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
