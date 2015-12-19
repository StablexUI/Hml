#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
#ifndef INCLUDED_hunit_match_MatchChainLogic
#include <hunit/match/MatchChainLogic.h>
#endif
#ifndef INCLUDED_hunit_match_TypeMatch
#include <hunit/match/TypeMatch.h>
#endif
namespace hunit{
namespace match{

Void TypeMatch_obj::__construct(::hx::Class type,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{
HX_STACK_FRAME("hunit.match.TypeMatch","new",0x23ddcb12,"hunit.match.TypeMatch.new","hunit/match/TypeMatch.hx",23,0x45394e60)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(previous,"previous")
HX_STACK_ARG(chainLogic,"chainLogic")
{
	HX_STACK_LINE(24)
	::hunit::match::Match tmp = previous;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	::hunit::match::MatchChainLogic tmp1 = chainLogic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(25)
	this->type = type;
}
;
	return null();
}

//TypeMatch_obj::~TypeMatch_obj() { }

Dynamic TypeMatch_obj::__CreateEmpty() { return  new TypeMatch_obj; }
hx::ObjectPtr< TypeMatch_obj > TypeMatch_obj::__new(::hx::Class type,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{  hx::ObjectPtr< TypeMatch_obj > _result_ = new TypeMatch_obj();
	_result_->__construct(type,previous,chainLogic);
	return _result_;}

Dynamic TypeMatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TypeMatch_obj > _result_ = new TypeMatch_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

bool TypeMatch_obj::checkMatch( Dynamic value){
	HX_STACK_FRAME("hunit.match.TypeMatch","checkMatch",0x6b2feaeb,"hunit.match.TypeMatch.checkMatch","hunit/match/TypeMatch.hx",33,0x45394e60)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(34)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	if ((tmp)){
		HX_STACK_LINE(34)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		::hx::Class tmp3 = this->type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		::hx::Class tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		Dynamic tmp5 = tmp2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		::hx::Class tmp6 = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		tmp1 = ::Std_obj::is(tmp5,tmp6);
	}
	else{
		HX_STACK_LINE(34)
		tmp1 = false;
	}
	HX_STACK_LINE(34)
	return tmp1;
}


::String TypeMatch_obj::shortCode( ){
	HX_STACK_FRAME("hunit.match.TypeMatch","shortCode",0x62b55bfb,"hunit.match.TypeMatch.shortCode","hunit/match/TypeMatch.hx",43,0x45394e60)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	::hx::Class tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	::String tmp2 = (HX_HCSTRING("Class<","\x24","\x2d","\xa5","\x39") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	::String tmp3 = (tmp2 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	return tmp3;
}



TypeMatch_obj::TypeMatch_obj()
{
}

void TypeMatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TypeMatch);
	HX_MARK_MEMBER_NAME(type,"type");
	::hunit::match::Match_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TypeMatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	::hunit::match::Match_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TypeMatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shortCode") ) { return shortCode_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkMatch") ) { return checkMatch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TypeMatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::hx::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TypeMatch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TypeMatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(TypeMatch_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("checkMatch","\x5d","\x4b","\x13","\x13"),
	HX_HCSTRING("shortCode","\xc9","\x4f","\x87","\x92"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypeMatch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeMatch_obj::__mClass,"__mClass");
};

#endif

hx::Class TypeMatch_obj::__mClass;

void TypeMatch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.TypeMatch","\x20","\x9a","\xfa","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TypeMatch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TypeMatch_obj >;
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
