#include <hxcpp.h>

#ifndef INCLUDED_hunit_match_CallbackMatch
#include <hunit/match/CallbackMatch.h>
#endif
#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
#ifndef INCLUDED_hunit_match_MatchChainLogic
#include <hunit/match/MatchChainLogic.h>
#endif
namespace hunit{
namespace match{

Void CallbackMatch_obj::__construct(Dynamic verify,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{
HX_STACK_FRAME("hunit.match.CallbackMatch","new",0x25e24927,"hunit.match.CallbackMatch.new","hunit/match/CallbackMatch.hx",22,0x7ab5f2eb)
HX_STACK_THIS(this)
HX_STACK_ARG(verify,"verify")
HX_STACK_ARG(previous,"previous")
HX_STACK_ARG(chainLogic,"chainLogic")
{
	HX_STACK_LINE(23)
	::hunit::match::Match tmp = previous;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::hunit::match::MatchChainLogic tmp1 = chainLogic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(25)
	this->verify = verify;
}
;
	return null();
}

//CallbackMatch_obj::~CallbackMatch_obj() { }

Dynamic CallbackMatch_obj::__CreateEmpty() { return  new CallbackMatch_obj; }
hx::ObjectPtr< CallbackMatch_obj > CallbackMatch_obj::__new(Dynamic verify,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{  hx::ObjectPtr< CallbackMatch_obj > _result_ = new CallbackMatch_obj();
	_result_->__construct(verify,previous,chainLogic);
	return _result_;}

Dynamic CallbackMatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CallbackMatch_obj > _result_ = new CallbackMatch_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

bool CallbackMatch_obj::checkMatch( Dynamic value){
	HX_STACK_FRAME("hunit.match.CallbackMatch","checkMatch",0xf6fa8976,"hunit.match.CallbackMatch.checkMatch","hunit/match/CallbackMatch.hx",33,0x7ab5f2eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(34)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	bool tmp1 = this->verify(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	return tmp1;
}


::String CallbackMatch_obj::shortCode( ){
	HX_STACK_FRAME("hunit.match.CallbackMatch","shortCode",0xb96f17d0,"hunit.match.CallbackMatch.shortCode","hunit/match/CallbackMatch.hx",44,0x7ab5f2eb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	return HX_HCSTRING("CALLBACK","\xc5","\x29","\x8c","\xd8");
}



CallbackMatch_obj::CallbackMatch_obj()
{
}

void CallbackMatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CallbackMatch);
	HX_MARK_MEMBER_NAME(verify,"verify");
	::hunit::match::Match_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CallbackMatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(verify,"verify");
	::hunit::match::Match_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CallbackMatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"verify") ) { return verify; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shortCode") ) { return shortCode_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkMatch") ) { return checkMatch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CallbackMatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"verify") ) { verify=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CallbackMatch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CallbackMatch_obj,verify),HX_HCSTRING("verify","\x79","\x83","\x3f","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("verify","\x79","\x83","\x3f","\xa1"),
	HX_HCSTRING("checkMatch","\x5d","\x4b","\x13","\x13"),
	HX_HCSTRING("shortCode","\xc9","\x4f","\x87","\x92"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CallbackMatch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CallbackMatch_obj::__mClass,"__mClass");
};

#endif

hx::Class CallbackMatch_obj::__mClass;

void CallbackMatch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.CallbackMatch","\xb5","\x29","\x57","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CallbackMatch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CallbackMatch_obj >;
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
} // end namespace match
