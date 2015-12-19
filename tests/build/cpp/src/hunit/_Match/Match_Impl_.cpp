#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hunit__Match_Match_Impl_
#include <hunit/_Match/Match_Impl_.h>
#endif
#ifndef INCLUDED_hunit_match_AnyMatch
#include <hunit/match/AnyMatch.h>
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
namespace _Match{

Void Match_Impl__obj::__construct()
{
	return null();
}

//Match_Impl__obj::~Match_Impl__obj() { }

Dynamic Match_Impl__obj::__CreateEmpty() { return  new Match_Impl__obj; }
hx::ObjectPtr< Match_Impl__obj > Match_Impl__obj::__new()
{  hx::ObjectPtr< Match_Impl__obj > _result_ = new Match_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Match_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Match_Impl__obj > _result_ = new Match_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Match_Impl__obj::fromValue( Dynamic value){
	HX_STACK_FRAME("hunit._Match.Match_Impl_","fromValue",0x696f5438,"hunit._Match.Match_Impl_.fromValue","hunit/Match.hx",23,0x8baff97c)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(24)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	if ((tmp)){
		HX_STACK_LINE(25)
		::hunit::match::AnyMatch tmp1 = ::hunit::match::AnyMatch_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		Dynamic tmp2 = ::hunit::_Match::Match_Impl__obj::_new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		return tmp2;
	}
	else{
		HX_STACK_LINE(27)
		Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		Dynamic tmp2 = ::hunit::_Match::Match_Impl__obj::_new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		return tmp2;
	}
	HX_STACK_LINE(24)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Match_Impl__obj,fromValue,return )

Dynamic Match_Impl__obj::_new( Dynamic value){
	HX_STACK_FRAME("hunit._Match.Match_Impl_","_new",0x6dfb3470,"hunit._Match.Match_Impl_._new","hunit/Match.hx",36,0x8baff97c)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(36)
	Dynamic this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(37)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::hunit::match::Match >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	if ((tmp1)){
		HX_STACK_LINE(38)
		this1 = value;
	}
	else{
		HX_STACK_LINE(40)
		::hunit::match::EqualMatch tmp2 = ::hunit::match::EqualMatch_obj::__new(value,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		this1 = tmp2;
	}
	HX_STACK_LINE(36)
	Dynamic tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Match_Impl__obj,_new,return )


Match_Impl__obj::Match_Impl__obj()
{
}

bool Match_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromValue") ) { outValue = fromValue_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Match_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Match_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Match_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromValue","\xa7","\x69","\x41","\xe6"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	::String(null()) };

void Match_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit._Match.Match_Impl_","\xbf","\x9b","\x6a","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Match_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Match_Impl__obj >;
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
} // end namespace _Match
