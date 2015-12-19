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
#ifndef INCLUDED_hunit_match_GenericMatchFactory
#include <hunit/match/GenericMatchFactory.h>
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

Void GenericMatchFactory_obj::__construct(::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{
HX_STACK_FRAME("hunit.match.GenericMatchFactory","new",0x2f812a63,"hunit.match.GenericMatchFactory.new","hunit/match/GenericMatchFactory.hx",27,0x47618aaf)
HX_STACK_THIS(this)
HX_STACK_ARG(previous,"previous")
HX_STACK_ARG(chainLogic,"chainLogic")
{
	HX_STACK_LINE(28)
	this->previous = previous;
	HX_STACK_LINE(29)
	this->chainLogic = chainLogic;
}
;
	return null();
}

//GenericMatchFactory_obj::~GenericMatchFactory_obj() { }

Dynamic GenericMatchFactory_obj::__CreateEmpty() { return  new GenericMatchFactory_obj; }
hx::ObjectPtr< GenericMatchFactory_obj > GenericMatchFactory_obj::__new(::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{  hx::ObjectPtr< GenericMatchFactory_obj > _result_ = new GenericMatchFactory_obj();
	_result_->__construct(previous,chainLogic);
	return _result_;}

Dynamic GenericMatchFactory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GenericMatchFactory_obj > _result_ = new GenericMatchFactory_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::hunit::match::AnyMatch GenericMatchFactory_obj::any( ){
	HX_STACK_FRAME("hunit.match.GenericMatchFactory","any",0x2f7754ef,"hunit.match.GenericMatchFactory.any","hunit/match/GenericMatchFactory.hx",38,0x47618aaf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	::hunit::match::Match tmp = this->previous;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	::hunit::match::MatchChainLogic tmp1 = this->chainLogic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	::hunit::match::AnyMatch tmp2 = ::hunit::match::AnyMatch_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GenericMatchFactory_obj,any,return )

::hunit::match::TypeMatch GenericMatchFactory_obj::type( ::hx::Class type){
	HX_STACK_FRAME("hunit.match.GenericMatchFactory","type",0x658a5b57,"hunit.match.GenericMatchFactory.type","hunit/match/GenericMatchFactory.hx",48,0x47618aaf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(49)
	::hx::Class tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	::hunit::match::Match tmp1 = this->previous;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	::hunit::match::MatchChainLogic tmp2 = this->chainLogic;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	::hunit::match::TypeMatch tmp3 = ::hunit::match::TypeMatch_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(GenericMatchFactory_obj,type,return )

::hunit::match::ERegMatch GenericMatchFactory_obj::regexp( ::EReg pattern){
	HX_STACK_FRAME("hunit.match.GenericMatchFactory","regexp",0x4aac49a6,"hunit.match.GenericMatchFactory.regexp","hunit/match/GenericMatchFactory.hx",58,0x47618aaf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pattern,"pattern")
	HX_STACK_LINE(59)
	::hunit::match::ERegMatch tmp = ::hunit::match::ERegMatch_obj::__new(pattern,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GenericMatchFactory_obj,regexp,return )

::hunit::match::SimilarMatch GenericMatchFactory_obj::similar( Dynamic pattern){
	HX_STACK_FRAME("hunit.match.GenericMatchFactory","similar",0x461a3dae,"hunit.match.GenericMatchFactory.similar","hunit/match/GenericMatchFactory.hx",70,0x47618aaf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pattern,"pattern")
	HX_STACK_LINE(71)
	::hunit::match::SimilarMatch tmp = ::hunit::match::SimilarMatch_obj::__new(pattern,null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GenericMatchFactory_obj,similar,return )

::hunit::match::EqualMatch GenericMatchFactory_obj::equal( Dynamic value){
	HX_STACK_FRAME("hunit.match.GenericMatchFactory","equal",0xcb3cf077,"hunit.match.GenericMatchFactory.equal","hunit/match/GenericMatchFactory.hx",80,0x47618aaf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(81)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	::hunit::match::Match tmp1 = this->previous;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	::hunit::match::MatchChainLogic tmp2 = this->chainLogic;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	::hunit::match::EqualMatch tmp3 = ::hunit::match::EqualMatch_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(GenericMatchFactory_obj,equal,return )

::hunit::match::Match GenericMatchFactory_obj::notEqual( Dynamic value){
	HX_STACK_FRAME("hunit.match.GenericMatchFactory","notEqual",0x01d01cbe,"hunit.match.GenericMatchFactory.notEqual","hunit/match/GenericMatchFactory.hx",90,0x47618aaf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(91)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	::hunit::match::Match tmp1 = this->previous;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	::hunit::match::MatchChainLogic tmp2 = this->chainLogic;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	::hunit::match::NotEqualMatch tmp3 = ::hunit::match::NotEqualMatch_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(91)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(GenericMatchFactory_obj,notEqual,return )

::hunit::match::CallbackMatch GenericMatchFactory_obj::callback( Dynamic verify){
	HX_STACK_FRAME("hunit.match.GenericMatchFactory","callback",0x7e4514e2,"hunit.match.GenericMatchFactory.callback","hunit/match/GenericMatchFactory.hx",100,0x47618aaf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(verify,"verify")
	HX_STACK_LINE(101)
	::hunit::match::CallbackMatch tmp = ::hunit::match::CallbackMatch_obj::__new(verify,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GenericMatchFactory_obj,callback,return )


GenericMatchFactory_obj::GenericMatchFactory_obj()
{
}

void GenericMatchFactory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericMatchFactory);
	HX_MARK_MEMBER_NAME(previous,"previous");
	HX_MARK_MEMBER_NAME(chainLogic,"chainLogic");
	HX_MARK_END_CLASS();
}

void GenericMatchFactory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(previous,"previous");
	HX_VISIT_MEMBER_NAME(chainLogic,"chainLogic");
}

Dynamic GenericMatchFactory_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"previous") ) { return previous; }
		if (HX_FIELD_EQ(inName,"notEqual") ) { return notEqual_dyn(); }
		if (HX_FIELD_EQ(inName,"callback") ) { return callback_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"chainLogic") ) { return chainLogic; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GenericMatchFactory_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"previous") ) { previous=inValue.Cast< ::hunit::match::Match >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"chainLogic") ) { chainLogic=inValue.Cast< ::hunit::match::MatchChainLogic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GenericMatchFactory_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GenericMatchFactory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("previous","\x37","\xbc","\xb0","\x23"));
	outFields->push(HX_HCSTRING("chainLogic","\x9d","\xf0","\xac","\xd0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hunit::match::Match*/ ,(int)offsetof(GenericMatchFactory_obj,previous),HX_HCSTRING("previous","\x37","\xbc","\xb0","\x23")},
	{hx::fsObject /*::hunit::match::MatchChainLogic*/ ,(int)offsetof(GenericMatchFactory_obj,chainLogic),HX_HCSTRING("chainLogic","\x9d","\xf0","\xac","\xd0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("previous","\x37","\xbc","\xb0","\x23"),
	HX_HCSTRING("chainLogic","\x9d","\xf0","\xac","\xd0"),
	HX_HCSTRING("any","\xec","\xfa","\x49","\x00"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"),
	HX_HCSTRING("similar","\x2b","\x26","\x04","\xb2"),
	HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"),
	HX_HCSTRING("notEqual","\xa1","\xa1","\x91","\x02"),
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericMatchFactory_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericMatchFactory_obj::__mClass,"__mClass");
};

#endif

hx::Class GenericMatchFactory_obj::__mClass;

void GenericMatchFactory_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.GenericMatchFactory","\xf1","\xbc","\xa5","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GenericMatchFactory_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GenericMatchFactory_obj >;
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
