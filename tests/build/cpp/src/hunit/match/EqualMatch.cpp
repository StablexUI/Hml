#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
namespace hunit{
namespace match{

Void EqualMatch_obj::__construct(Dynamic value,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{
HX_STACK_FRAME("hunit.match.EqualMatch","new",0x7ad03c4e,"hunit.match.EqualMatch.new","hunit/match/EqualMatch.hx",29,0xba443ee0)
HX_STACK_THIS(this)
HX_STACK_ARG(value,"value")
HX_STACK_ARG(previous,"previous")
HX_STACK_ARG(chainLogic,"chainLogic")
{
	HX_STACK_LINE(30)
	::hunit::match::Match tmp = previous;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	::hunit::match::MatchChainLogic tmp1 = chainLogic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(31)
	this->value = value;
}
;
	return null();
}

//EqualMatch_obj::~EqualMatch_obj() { }

Dynamic EqualMatch_obj::__CreateEmpty() { return  new EqualMatch_obj; }
hx::ObjectPtr< EqualMatch_obj > EqualMatch_obj::__new(Dynamic value,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{  hx::ObjectPtr< EqualMatch_obj > _result_ = new EqualMatch_obj();
	_result_->__construct(value,previous,chainLogic);
	return _result_;}

Dynamic EqualMatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EqualMatch_obj > _result_ = new EqualMatch_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

bool EqualMatch_obj::checkMatch( Dynamic value){
	HX_STACK_FRAME("hunit.match.EqualMatch","checkMatch",0x62b0592f,"hunit.match.EqualMatch.checkMatch","hunit/match/EqualMatch.hx",41,0xba443ee0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(41)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			Dynamic tmp = this->value;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(42)
			::ValueType tmp1 = ::Type_obj::_typeof(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			::ValueType _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(42)
			switch( (int)(_g->__Index())){
				case (int)5: {
					HX_STACK_LINE(43)
					Dynamic tmp2 = this->value;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(43)
					Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(43)
					bool tmp4 = ::Reflect_obj::compareMethods(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(43)
					return tmp4;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(44)
					Dynamic tmp2 = this->value;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(44)
					Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(44)
					bool tmp4 = ::Type_obj::enumEq(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(44)
					return tmp4;
				}
				;break;
				default: {
					HX_STACK_LINE(45)
					Dynamic tmp2 = this->value;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(45)
					Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(45)
					bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(45)
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
				HX_STACK_LINE(48)
				return false;
			}
		}
	}
	HX_STACK_LINE(41)
	return false;
}


::String EqualMatch_obj::shortCode( ){
	HX_STACK_FRAME("hunit.match.EqualMatch","shortCode",0x339a6237,"hunit.match.EqualMatch.shortCode","hunit/match/EqualMatch.hx",58,0xba443ee0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	Dynamic tmp = this->value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	::String tmp1 = ::hunit::Utils_obj::safeToString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	::String tmp2 = ::hunit::Utils_obj::shortenString(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	::String code = tmp2;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(62)
	Dynamic tmp3 = this->value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	bool tmp4 = ::hunit::Utils_obj::hasToString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	if ((tmp4)){
		HX_STACK_LINE(62)
		::String tmp6 = (HX_HCSTRING("=\"","\x45","\x35","\x00","\x00") + code);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(62)
		tmp5 = (tmp6 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(62)
		tmp5 = (HX_HCSTRING("=","\x3d","\x00","\x00","\x00") + code);
	}
	HX_STACK_LINE(62)
	return tmp5;
}



EqualMatch_obj::EqualMatch_obj()
{
}

void EqualMatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EqualMatch);
	HX_MARK_MEMBER_NAME(value,"value");
	::hunit::match::Match_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EqualMatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	::hunit::match::Match_obj::__Visit(HX_VISIT_ARG);
}

Dynamic EqualMatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shortCode") ) { return shortCode_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkMatch") ) { return checkMatch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EqualMatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool EqualMatch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void EqualMatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EqualMatch_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("checkMatch","\x5d","\x4b","\x13","\x13"),
	HX_HCSTRING("shortCode","\xc9","\x4f","\x87","\x92"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EqualMatch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EqualMatch_obj::__mClass,"__mClass");
};

#endif

hx::Class EqualMatch_obj::__mClass;

void EqualMatch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.EqualMatch","\x5c","\xbd","\x94","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &EqualMatch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EqualMatch_obj >;
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
