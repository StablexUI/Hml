#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
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
#ifndef INCLUDED_hunit_match_EqualMatch
#include <hunit/match/EqualMatch.h>
#endif
#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
#ifndef INCLUDED_hunit_match_MatchChainLogic
#include <hunit/match/MatchChainLogic.h>
#endif
#ifndef INCLUDED_hunit_match_NotEqualMatch
#include <hunit/match/NotEqualMatch.h>
#endif
namespace hunit{
namespace match{

Void NotEqualMatch_obj::__construct(Dynamic value,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{
HX_STACK_FRAME("hunit.match.NotEqualMatch","new",0xa23d65cb,"hunit.match.NotEqualMatch.new","hunit/match/NotEqualMatch.hx",13,0xe29636c7)
HX_STACK_THIS(this)
HX_STACK_ARG(value,"value")
HX_STACK_ARG(previous,"previous")
HX_STACK_ARG(chainLogic,"chainLogic")
{
	HX_STACK_LINE(13)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	::hunit::match::Match tmp1 = previous;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	::hunit::match::MatchChainLogic tmp2 = chainLogic;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//NotEqualMatch_obj::~NotEqualMatch_obj() { }

Dynamic NotEqualMatch_obj::__CreateEmpty() { return  new NotEqualMatch_obj; }
hx::ObjectPtr< NotEqualMatch_obj > NotEqualMatch_obj::__new(Dynamic value,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{  hx::ObjectPtr< NotEqualMatch_obj > _result_ = new NotEqualMatch_obj();
	_result_->__construct(value,previous,chainLogic);
	return _result_;}

Dynamic NotEqualMatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NotEqualMatch_obj > _result_ = new NotEqualMatch_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

bool NotEqualMatch_obj::checkMatch( Dynamic value){
	HX_STACK_FRAME("hunit.match.NotEqualMatch","checkMatch",0xb4cc0952,"hunit.match.NotEqualMatch.checkMatch","hunit/match/NotEqualMatch.hx",22,0xe29636c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(22)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(23)
		{
			HX_STACK_LINE(23)
			Dynamic tmp = this->value;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(23)
			::ValueType tmp1 = ::Type_obj::_typeof(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(23)
			::ValueType _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(23)
			switch( (int)(_g->__Index())){
				case (int)5: {
					HX_STACK_LINE(24)
					Dynamic tmp2 = this->value;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(24)
					Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(24)
					bool tmp4 = ::Reflect_obj::compareMethods(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(24)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(24)
					return tmp5;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(25)
					Dynamic tmp2 = this->value;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(25)
					Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(25)
					bool tmp4 = ::Type_obj::enumEq(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(25)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(25)
					return tmp5;
				}
				;break;
				default: {
					HX_STACK_LINE(26)
					Dynamic tmp2 = this->value;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(26)
					Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(26)
					bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(26)
					return tmp4;
				}
			}
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(29)
				return false;
			}
		}
	}
	HX_STACK_LINE(22)
	return false;
}


::String NotEqualMatch_obj::shortCode( ){
	HX_STACK_FRAME("hunit.match.NotEqualMatch","shortCode",0x68c74774,"hunit.match.NotEqualMatch.shortCode","hunit/match/NotEqualMatch.hx",39,0xe29636c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	Dynamic tmp = this->value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	::String tmp2 = ::hunit::Utils_obj::shortenString(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	::String code = tmp2;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(42)
	Dynamic tmp3 = this->value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	bool tmp4 = ::hunit::Utils_obj::hasToString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	if ((tmp4)){
		HX_STACK_LINE(42)
		::String tmp6 = (HX_HCSTRING("!=\"","\xa6","\x3f","\x19","\x00") + code);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		tmp5 = (tmp6 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(42)
		tmp5 = (HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00") + code);
	}
	HX_STACK_LINE(42)
	return tmp5;
}



NotEqualMatch_obj::NotEqualMatch_obj()
{
}

Dynamic NotEqualMatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(NotEqualMatch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NotEqualMatch_obj::__mClass,"__mClass");
};

#endif

hx::Class NotEqualMatch_obj::__mClass;

void NotEqualMatch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.NotEqualMatch","\x59","\x24","\xf6","\x24");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NotEqualMatch_obj >;
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
