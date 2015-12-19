#include <hxcpp.h>

#ifndef INCLUDED_hunit_match_AnyMatch
#include <hunit/match/AnyMatch.h>
#endif
#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
#ifndef INCLUDED_hunit_match_MatchChainLogic
#include <hunit/match/MatchChainLogic.h>
#endif
namespace hunit{
namespace match{

Void AnyMatch_obj::__construct(::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{
HX_STACK_FRAME("hunit.match.AnyMatch","new",0x08770956,"hunit.match.AnyMatch.new","hunit/match/AnyMatch.hx",9,0x65654f58)
HX_STACK_THIS(this)
HX_STACK_ARG(previous,"previous")
HX_STACK_ARG(chainLogic,"chainLogic")
{
	HX_STACK_LINE(9)
	::hunit::match::Match tmp = previous;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	::hunit::match::MatchChainLogic tmp1 = chainLogic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//AnyMatch_obj::~AnyMatch_obj() { }

Dynamic AnyMatch_obj::__CreateEmpty() { return  new AnyMatch_obj; }
hx::ObjectPtr< AnyMatch_obj > AnyMatch_obj::__new(::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{  hx::ObjectPtr< AnyMatch_obj > _result_ = new AnyMatch_obj();
	_result_->__construct(previous,chainLogic);
	return _result_;}

Dynamic AnyMatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnyMatch_obj > _result_ = new AnyMatch_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool AnyMatch_obj::checkMatch( Dynamic value){
	HX_STACK_FRAME("hunit.match.AnyMatch","checkMatch",0xa4c0bd27,"hunit.match.AnyMatch.checkMatch","hunit/match/AnyMatch.hx",18,0x65654f58)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(18)
	return true;
}


::String AnyMatch_obj::shortCode( ){
	HX_STACK_FRAME("hunit.match.AnyMatch","shortCode",0x7e84a53f,"hunit.match.AnyMatch.shortCode","hunit/match/AnyMatch.hx",28,0x65654f58)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	return HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00");
}



AnyMatch_obj::AnyMatch_obj()
{
}

Dynamic AnyMatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"shortCode") ) { return shortCode_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkMatch") ) { return checkMatch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("checkMatch","\x5d","\x4b","\x13","\x13"),
	HX_HCSTRING("shortCode","\xc9","\x4f","\x87","\x92"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnyMatch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnyMatch_obj::__mClass,"__mClass");
};

#endif

hx::Class AnyMatch_obj::__mClass;

void AnyMatch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.AnyMatch","\x64","\x66","\x7e","\xdf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnyMatch_obj >;
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
