#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_hunit_match_AnyMatch
#include <hunit/match/AnyMatch.h>
#endif
#ifndef INCLUDED_hunit_match_CallbackMatch
#include <hunit/match/CallbackMatch.h>
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
#ifndef INCLUDED_hunit_match_MatchChainLogic
#include <hunit/match/MatchChainLogic.h>
#endif
#ifndef INCLUDED_hunit_match_MatchFactory
#include <hunit/match/MatchFactory.h>
#endif
#ifndef INCLUDED_hunit_match_NotEqualMatch
#include <hunit/match/NotEqualMatch.h>
#endif
#ifndef INCLUDED_hunit_match_ObjectCache
#include <hunit/match/ObjectCache.h>
#endif
#ifndef INCLUDED_hunit_match_SimilarMatch
#include <hunit/match/SimilarMatch.h>
#endif
#ifndef INCLUDED_hunit_match_TypeMatch
#include <hunit/match/TypeMatch.h>
#endif
namespace hunit{
namespace match{

Void MatchFactory_obj::__construct()
{
HX_STACK_FRAME("hunit.match.MatchFactory","new",0x70ce4822,"hunit.match.MatchFactory.new","hunit/match/MatchFactory.hx",24,0x6d94050c)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//MatchFactory_obj::~MatchFactory_obj() { }

Dynamic MatchFactory_obj::__CreateEmpty() { return  new MatchFactory_obj; }
hx::ObjectPtr< MatchFactory_obj > MatchFactory_obj::__new()
{  hx::ObjectPtr< MatchFactory_obj > _result_ = new MatchFactory_obj();
	_result_->__construct();
	return _result_;}

Dynamic MatchFactory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MatchFactory_obj > _result_ = new MatchFactory_obj();
	_result_->__construct();
	return _result_;}

::hunit::match::AnyMatch MatchFactory_obj::any( ){
	HX_STACK_FRAME("hunit.match.MatchFactory","any",0x70c472ae,"hunit.match.MatchFactory.any","hunit/match/MatchFactory.hx",33,0x6d94050c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	::hunit::match::AnyMatch tmp = ::hunit::match::AnyMatch_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MatchFactory_obj,any,return )

::hunit::match::TypeMatch MatchFactory_obj::type( ::hx::Class type){
	HX_STACK_FRAME("hunit.match.MatchFactory","type",0x47b744b8,"hunit.match.MatchFactory.type","hunit/match/MatchFactory.hx",43,0x6d94050c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(44)
	::hunit::match::TypeMatch tmp = ::hunit::match::TypeMatch_obj::__new(type,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(MatchFactory_obj,type,return )

::hunit::match::ERegMatch MatchFactory_obj::regexp( ::EReg pattern){
	HX_STACK_FRAME("hunit.match.MatchFactory","regexp",0xc0ef0d47,"hunit.match.MatchFactory.regexp","hunit/match/MatchFactory.hx",53,0x6d94050c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pattern,"pattern")
	HX_STACK_LINE(54)
	::hunit::match::ERegMatch tmp = ::hunit::match::ERegMatch_obj::__new(pattern,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(MatchFactory_obj,regexp,return )

::hunit::match::SimilarMatch MatchFactory_obj::similar( Dynamic pattern){
	HX_STACK_FRAME("hunit.match.MatchFactory","similar",0x4a42a6ed,"hunit.match.MatchFactory.similar","hunit/match/MatchFactory.hx",65,0x6d94050c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pattern,"pattern")
	HX_STACK_LINE(66)
	::hunit::match::SimilarMatch tmp = ::hunit::match::SimilarMatch_obj::__new(pattern,null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(MatchFactory_obj,similar,return )

::hunit::match::EqualMatch MatchFactory_obj::equal( Dynamic value){
	HX_STACK_FRAME("hunit.match.MatchFactory","equal",0xd05c3bf6,"hunit.match.MatchFactory.equal","hunit/match/MatchFactory.hx",75,0x6d94050c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(76)
	::hunit::match::EqualMatch tmp = ::hunit::match::EqualMatch_obj::__new(value,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(MatchFactory_obj,equal,return )

::hunit::match::NotEqualMatch MatchFactory_obj::notEqual( Dynamic value){
	HX_STACK_FRAME("hunit.match.MatchFactory","notEqual",0xa103ca9f,"hunit.match.MatchFactory.notEqual","hunit/match/MatchFactory.hx",85,0x6d94050c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(86)
	::hunit::match::NotEqualMatch tmp = ::hunit::match::NotEqualMatch_obj::__new(value,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(MatchFactory_obj,notEqual,return )

::hunit::match::CallbackMatch MatchFactory_obj::callback( Dynamic verify){
	HX_STACK_FRAME("hunit.match.MatchFactory","callback",0x1d78c2c3,"hunit.match.MatchFactory.callback","hunit/match/MatchFactory.hx",95,0x6d94050c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(verify,"verify")
	HX_STACK_LINE(96)
	::hunit::match::CallbackMatch tmp = ::hunit::match::CallbackMatch_obj::__new(verify,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(MatchFactory_obj,callback,return )


MatchFactory_obj::MatchFactory_obj()
{
}

Dynamic MatchFactory_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"any") ) { return any_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"equal") ) { return equal_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"regexp") ) { return regexp_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"similar") ) { return similar_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"notEqual") ) { return notEqual_dyn(); }
		if (HX_FIELD_EQ(inName,"callback") ) { return callback_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("any","\xec","\xfa","\x49","\x00"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"),
	HX_HCSTRING("similar","\x2b","\x26","\x04","\xb2"),
	HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"),
	HX_HCSTRING("notEqual","\xa1","\xa1","\x91","\x02"),
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MatchFactory_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MatchFactory_obj::__mClass,"__mClass");
};

#endif

hx::Class MatchFactory_obj::__mClass;

void MatchFactory_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.MatchFactory","\x30","\x4f","\x83","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MatchFactory_obj >;
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
