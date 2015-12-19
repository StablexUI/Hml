#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_hunit_Utils
#include <hunit/Utils.h>
#endif
#ifndef INCLUDED_hunit_exceptions_InvalidTestException
#include <hunit/exceptions/InvalidTestException.h>
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
#ifndef INCLUDED_hunit_match_ObjectCache
#include <hunit/match/ObjectCache.h>
#endif
#ifndef INCLUDED_hunit_match_SimilarMatch
#include <hunit/match/SimilarMatch.h>
#endif
#ifndef INCLUDED_hunit_match_similar_SimilarArrayMatch
#include <hunit/match/similar/SimilarArrayMatch.h>
#endif
#ifndef INCLUDED_hunit_match_similar_SimilarMapMatch
#include <hunit/match/similar/SimilarMapMatch.h>
#endif
#ifndef INCLUDED_hunit_match_similar_SimilarObjectMatch
#include <hunit/match/similar/SimilarObjectMatch.h>
#endif
namespace hunit{
namespace match{

Void SimilarMatch_obj::__construct(Dynamic expected,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic,::hunit::match::SimilarMatch root,::hunit::match::ObjectCache processedObjects)
{
HX_STACK_FRAME("hunit.match.SimilarMatch","new",0x1e3a6fb7,"hunit.match.SimilarMatch.new","hunit/match/SimilarMatch.hx",68,0x4195a717)
HX_STACK_THIS(this)
HX_STACK_ARG(expected,"expected")
HX_STACK_ARG(previous,"previous")
HX_STACK_ARG(chainLogic,"chainLogic")
HX_STACK_ARG(root,"root")
HX_STACK_ARG(processedObjects,"processedObjects")
{
	HX_STACK_LINE(69)
	::hunit::match::Match tmp = previous;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	::hunit::match::MatchChainLogic tmp1 = chainLogic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(70)
	this->root = root;
	HX_STACK_LINE(72)
	bool tmp2 = (processedObjects == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	if ((tmp2)){
		HX_STACK_LINE(73)
		::hunit::match::ObjectCache tmp3 = ::hunit::match::ObjectCache_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		processedObjects = tmp3;
	}
	HX_STACK_LINE(75)
	Dynamic tmp3 = expected;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	processedObjects->set(tmp3,hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(77)
	bool tmp4 = this->isRoot();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(77)
	if ((tmp4)){
		HX_STACK_LINE(78)
		Dynamic tmp5 = expected;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		::hunit::match::ObjectCache tmp6 = processedObjects;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		this->buildMatcher(hx::ObjectPtr<OBJ_>(this),tmp5,tmp6);
	}
	else{
		HX_STACK_LINE(80)
		::hunit::match::SimilarMatch tmp5 = root;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		Dynamic tmp6 = expected;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(80)
		::hunit::match::ObjectCache tmp7 = processedObjects;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(80)
		this->buildMatcher(tmp5,tmp6,tmp7);
	}
}
;
	return null();
}

//SimilarMatch_obj::~SimilarMatch_obj() { }

Dynamic SimilarMatch_obj::__CreateEmpty() { return  new SimilarMatch_obj; }
hx::ObjectPtr< SimilarMatch_obj > SimilarMatch_obj::__new(Dynamic expected,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic,::hunit::match::SimilarMatch root,::hunit::match::ObjectCache processedObjects)
{  hx::ObjectPtr< SimilarMatch_obj > _result_ = new SimilarMatch_obj();
	_result_->__construct(expected,previous,chainLogic,root,processedObjects);
	return _result_;}

Dynamic SimilarMatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimilarMatch_obj > _result_ = new SimilarMatch_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void SimilarMatch_obj::buildMatcher( ::hunit::match::SimilarMatch root,Dynamic expected,::hunit::match::ObjectCache processedObjects){
{
		HX_STACK_FRAME("hunit.match.SimilarMatch","buildMatcher",0x2af0a92d,"hunit.match.SimilarMatch.buildMatcher","hunit/match/SimilarMatch.hx",91,0x4195a717)
		HX_STACK_THIS(this)
		HX_STACK_ARG(root,"root")
		HX_STACK_ARG(expected,"expected")
		HX_STACK_ARG(processedObjects,"processedObjects")
		HX_STACK_LINE(91)
		Dynamic tmp = expected;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		::String tmp1 = ::hunit::match::SimilarMatch_obj::getAType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		::String _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		::String tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		::String _switch_1 = (tmp2);
		if (  ( _switch_1==HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"))){
			HX_STACK_LINE(92)
			::hunit::match::similar::SimilarObjectMatch tmp3 = ::hunit::match::similar::SimilarObjectMatch_obj::__new(root,processedObjects,expected,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			this->matcher = tmp3;
		}
		else if (  ( _switch_1==HX_HCSTRING("array","\x99","\x6d","\x8f","\x25"))){
			HX_STACK_LINE(93)
			::hunit::match::similar::SimilarArrayMatch tmp3 = ::hunit::match::similar::SimilarArrayMatch_obj::__new(root,processedObjects,expected,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(93)
			this->matcher = tmp3;
		}
		else if (  ( _switch_1==HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"))){
			HX_STACK_LINE(94)
			::hunit::match::similar::SimilarMapMatch tmp3 = ::hunit::match::similar::SimilarMapMatch_obj::__new(root,processedObjects,expected,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(94)
			this->matcher = tmp3;
		}
		else  {
			HX_STACK_LINE(95)
			Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("SimilarMatch.hx","\xc4","\xdf","\x73","\x97"),95,HX_HCSTRING("hunit.match.SimilarMatch","\x45","\xc8","\xd4","\x26"),HX_HCSTRING("buildMatcher","\x64","\x6b","\xd4","\x9b"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(95)
			::hunit::exceptions::InvalidTestException tmp4 = ::hunit::exceptions::InvalidTestException_obj::__new(HX_HCSTRING("Provided value can not be used with `similar` matcher","\x5c","\xe1","\x2c","\x02"),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			HX_STACK_DO_THROW(tmp4);
		}
;
;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SimilarMatch_obj,buildMatcher,(void))

bool SimilarMatch_obj::isRoot( ){
	HX_STACK_FRAME("hunit.match.SimilarMatch","isRoot",0xd15e0435,"hunit.match.SimilarMatch.isRoot","hunit/match/SimilarMatch.hx",105,0x4195a717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	::hunit::match::SimilarMatch tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SimilarMatch_obj,isRoot,return )

bool SimilarMatch_obj::checkMatch( Dynamic value){
	HX_STACK_FRAME("hunit.match.SimilarMatch","checkMatch",0xe2f354e6,"hunit.match.SimilarMatch.checkMatch","hunit/match/SimilarMatch.hx",115,0x4195a717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(116)
	bool tmp = this->isRoot();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	if ((tmp)){
		HX_STACK_LINE(117)
		this->checkedObjects = cpp::ArrayBase_obj::__new();
		HX_STACK_LINE(118)
		Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		this->checkedObjects->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
	else{
		HX_STACK_LINE(120)
		::hunit::match::SimilarMatch tmp1 = this->root;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		tmp1->checkedObjects->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
	}
	HX_STACK_LINE(123)
	::hunit::match::Match tmp1 = this->matcher;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	bool tmp3 = tmp1->checkMatch(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	bool result = tmp3;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(125)
	bool tmp4 = this->isRoot();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(125)
	if ((tmp4)){
		HX_STACK_LINE(126)
		this->checkedObjects = null();
	}
	HX_STACK_LINE(129)
	bool tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(129)
	return tmp5;
}


::String SimilarMatch_obj::shortCode( ){
	HX_STACK_FRAME("hunit.match.SimilarMatch","shortCode",0x177a8a60,"hunit.match.SimilarMatch.shortCode","hunit/match/SimilarMatch.hx",138,0x4195a717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	::hunit::match::Match tmp = this->matcher;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	::String tmp1 = tmp->shortCode();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	return tmp1;
}


::hunit::match::Match SimilarMatch_obj::createMatcherForValue( Dynamic value,::hunit::match::ObjectCache processedObjects){
	HX_STACK_FRAME("hunit.match.SimilarMatch","createMatcherForValue",0xdf106035,"hunit.match.SimilarMatch.createMatcherForValue","hunit/match/SimilarMatch.hx",148,0x4195a717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(processedObjects,"processedObjects")
	HX_STACK_LINE(149)
	::hunit::match::Match match = null();		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(151)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::hunit::match::Match >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	if ((tmp1)){
		HX_STACK_LINE(152)
		match = value;
	}
	else{
		HX_STACK_LINE(156)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		bool tmp3 = ::hunit::Utils_obj::isObject(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		if ((tmp3)){
			HX_STACK_LINE(157)
			Dynamic tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(157)
			::hunit::match::SimilarMatch tmp5 = processedObjects->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(157)
			match = tmp5;
			HX_STACK_LINE(158)
			bool tmp6 = (match == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(158)
			if ((tmp6)){
				HX_STACK_LINE(159)
				::hunit::match::SimilarMatch tmp7 = ::hunit::match::SimilarMatch_obj::__new(value,null(),null(),hx::ObjectPtr<OBJ_>(this),processedObjects);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(159)
				match = tmp7;
			}
		}
		else{
			HX_STACK_LINE(164)
			::hunit::match::EqualMatch tmp4 = ::hunit::match::EqualMatch_obj::__new(value,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			match = tmp4;
		}
	}
	HX_STACK_LINE(168)
	::hunit::match::Match tmp2 = match;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(168)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(SimilarMatch_obj,createMatcherForValue,return )

::String SimilarMatch_obj::getAType( Dynamic value){
	HX_STACK_FRAME("hunit.match.SimilarMatch","getAType",0xb95cd88e,"hunit.match.SimilarMatch.getAType","hunit/match/SimilarMatch.hx",50,0x4195a717)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(51)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::IMap >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	if ((tmp1)){
		HX_STACK_LINE(51)
		return HX_HCSTRING("map","\x9c","\x0a","\x53","\x00");
	}
	HX_STACK_LINE(53)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		::ValueType tmp4 = ::Type_obj::_typeof(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		::ValueType _g = tmp4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		switch( (int)(_g->__Index())){
			case (int)6: {
				HX_STACK_LINE(53)
				::hx::Class tmp5 = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				::hx::Class _switch_2 = (tmp5);
				if (  ( _switch_2==hx::ClassOf< ::String >())){
					HX_STACK_LINE(54)
					Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("SimilarMatch.hx","\xc4","\xdf","\x73","\x97"),54,HX_HCSTRING("hunit.match.SimilarMatch","\x45","\xc8","\xd4","\x26"),HX_HCSTRING("getAType","\x45","\x73","\x97","\x71"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(54)
					::hunit::exceptions::InvalidTestException tmp7 = ::hunit::exceptions::InvalidTestException_obj::__new(HX_HCSTRING("Invalid `expected` value similar matcher","\x1f","\x3d","\xdc","\x66"),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(54)
					HX_STACK_DO_THROW(tmp7);
				}
				else if (  ( _switch_2==hx::ClassOf< Array<int> >())){
					HX_STACK_LINE(55)
					tmp2 = HX_HCSTRING("array","\x99","\x6d","\x8f","\x25");
				}
				else  {
					HX_STACK_LINE(56)
					tmp2 = HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15");
				}
;
;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(57)
				tmp2 = HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15");
			}
			;break;
			default: {
				HX_STACK_LINE(58)
				Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("SimilarMatch.hx","\xc4","\xdf","\x73","\x97"),58,HX_HCSTRING("hunit.match.SimilarMatch","\x45","\xc8","\xd4","\x26"),HX_HCSTRING("getAType","\x45","\x73","\x97","\x71"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				::hunit::exceptions::InvalidTestException tmp6 = ::hunit::exceptions::InvalidTestException_obj::__new(HX_HCSTRING("Invalid `expected` value similar matcher","\x1f","\x3d","\xdc","\x66"),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(58)
				HX_STACK_DO_THROW(tmp6);
			}
		}
	}
	HX_STACK_LINE(53)
	return tmp2;
	HX_STACK_LINE(53)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SimilarMatch_obj,getAType,return )


SimilarMatch_obj::SimilarMatch_obj()
{
}

void SimilarMatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimilarMatch);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(matcher,"matcher");
	HX_MARK_MEMBER_NAME(checkedObjects,"checkedObjects");
	::hunit::match::Match_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimilarMatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(matcher,"matcher");
	HX_VISIT_MEMBER_NAME(checkedObjects,"checkedObjects");
	::hunit::match::Match_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SimilarMatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isRoot") ) { return isRoot_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"matcher") ) { return matcher; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shortCode") ) { return shortCode_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkMatch") ) { return checkMatch_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buildMatcher") ) { return buildMatcher_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkedObjects") ) { return checkedObjects; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createMatcherForValue") ) { return createMatcherForValue_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SimilarMatch_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getAType") ) { outValue = getAType_dyn(); return true;  }
	}
	return false;
}

Dynamic SimilarMatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::hunit::match::SimilarMatch >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"matcher") ) { matcher=inValue.Cast< ::hunit::match::Match >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkedObjects") ) { checkedObjects=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SimilarMatch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SimilarMatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("matcher","\xf2","\x3c","\x7c","\x89"));
	outFields->push(HX_HCSTRING("checkedObjects","\x6d","\xa0","\x77","\xa5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hunit::match::SimilarMatch*/ ,(int)offsetof(SimilarMatch_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsObject /*::hunit::match::Match*/ ,(int)offsetof(SimilarMatch_obj,matcher),HX_HCSTRING("matcher","\xf2","\x3c","\x7c","\x89")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(SimilarMatch_obj,checkedObjects),HX_HCSTRING("checkedObjects","\x6d","\xa0","\x77","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("matcher","\xf2","\x3c","\x7c","\x89"),
	HX_HCSTRING("checkedObjects","\x6d","\xa0","\x77","\xa5"),
	HX_HCSTRING("buildMatcher","\x64","\x6b","\xd4","\x9b"),
	HX_HCSTRING("isRoot","\x2c","\xb3","\x15","\x69"),
	HX_HCSTRING("checkMatch","\x5d","\x4b","\x13","\x13"),
	HX_HCSTRING("shortCode","\xc9","\x4f","\x87","\x92"),
	HX_HCSTRING("createMatcherForValue","\x1e","\x1f","\xa4","\x78"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimilarMatch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimilarMatch_obj::__mClass,"__mClass");
};

#endif

hx::Class SimilarMatch_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getAType","\x45","\x73","\x97","\x71"),
	::String(null()) };

void SimilarMatch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.SimilarMatch","\x45","\xc8","\xd4","\x26");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SimilarMatch_obj::__GetStatic;
	__mClass->mSetStaticField = &SimilarMatch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SimilarMatch_obj >;
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
