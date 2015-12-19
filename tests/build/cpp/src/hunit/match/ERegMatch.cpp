#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hunit_match_ERegMatch
#include <hunit/match/ERegMatch.h>
#endif
#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
#ifndef INCLUDED_hunit_match_MatchChainLogic
#include <hunit/match/MatchChainLogic.h>
#endif
namespace hunit{
namespace match{

Void ERegMatch_obj::__construct(::EReg regexp,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{
HX_STACK_FRAME("hunit.match.ERegMatch","new",0x0073113d,"hunit.match.ERegMatch.new","hunit/match/ERegMatch.hx",26,0x2bcf3695)
HX_STACK_THIS(this)
HX_STACK_ARG(regexp,"regexp")
HX_STACK_ARG(previous,"previous")
HX_STACK_ARG(chainLogic,"chainLogic")
{
	HX_STACK_LINE(27)
	::hunit::match::Match tmp = previous;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::hunit::match::MatchChainLogic tmp1 = chainLogic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(28)
	this->regexp = regexp;
}
;
	return null();
}

//ERegMatch_obj::~ERegMatch_obj() { }

Dynamic ERegMatch_obj::__CreateEmpty() { return  new ERegMatch_obj; }
hx::ObjectPtr< ERegMatch_obj > ERegMatch_obj::__new(::EReg regexp,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{  hx::ObjectPtr< ERegMatch_obj > _result_ = new ERegMatch_obj();
	_result_->__construct(regexp,previous,chainLogic);
	return _result_;}

Dynamic ERegMatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ERegMatch_obj > _result_ = new ERegMatch_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

bool ERegMatch_obj::checkMatch( Dynamic value){
	HX_STACK_FRAME("hunit.match.ERegMatch","checkMatch",0xe1e89020,"hunit.match.ERegMatch.checkMatch","hunit/match/ERegMatch.hx",37,0x2bcf3695)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(38)
	::EReg tmp = this->regexp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	bool tmp3 = tmp->match(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	return tmp3;
}


::String ERegMatch_obj::shortCode( ){
	HX_STACK_FRAME("hunit.match.ERegMatch","shortCode",0x379e1466,"hunit.match.ERegMatch.shortCode","hunit/match/ERegMatch.hx",47,0x2bcf3695)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	::String tmp = this->extractPattern();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	return tmp;
}


::String ERegMatch_obj::extractPattern( ){
	HX_STACK_FRAME("hunit.match.ERegMatch","extractPattern",0xcb877552,"hunit.match.ERegMatch.extractPattern","hunit/match/ERegMatch.hx",57,0x2bcf3695)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	::String pattern = HX_HCSTRING("EReg","\x0f","\x4a","\xda","\x2d");		HX_STACK_VAR(pattern,"pattern");
	HX_STACK_LINE(68)
	::String tmp = pattern;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ERegMatch_obj,extractPattern,return )


ERegMatch_obj::ERegMatch_obj()
{
}

void ERegMatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ERegMatch);
	HX_MARK_MEMBER_NAME(regexp,"regexp");
	::hunit::match::Match_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ERegMatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(regexp,"regexp");
	::hunit::match::Match_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ERegMatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"regexp") ) { return regexp; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shortCode") ) { return shortCode_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkMatch") ) { return checkMatch_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"extractPattern") ) { return extractPattern_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ERegMatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"regexp") ) { regexp=inValue.Cast< ::EReg >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ERegMatch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ERegMatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(int)offsetof(ERegMatch_obj,regexp),HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"),
	HX_HCSTRING("checkMatch","\x5d","\x4b","\x13","\x13"),
	HX_HCSTRING("shortCode","\xc9","\x4f","\x87","\x92"),
	HX_HCSTRING("extractPattern","\x0f","\x13","\x9d","\xe7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ERegMatch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ERegMatch_obj::__mClass,"__mClass");
};

#endif

hx::Class ERegMatch_obj::__mClass;

void ERegMatch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.ERegMatch","\xcb","\xae","\x70","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ERegMatch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ERegMatch_obj >;
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
