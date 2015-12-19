#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_hunit_match_similar_SimilarMapMatch
#include <hunit/match/similar/SimilarMapMatch.h>
#endif
#ifndef INCLUDED_hunit_match_similar__SimilarMapMatch_DynamicMatchMap
#include <hunit/match/similar/_SimilarMapMatch/DynamicMatchMap.h>
#endif
namespace hunit{
namespace match{
namespace similar{

Void SimilarMapMatch_obj::__construct(::hunit::match::SimilarMatch root,::hunit::match::ObjectCache processedObjects,Dynamic expected,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{
HX_STACK_FRAME("hunit.match.similar.SimilarMapMatch","new",0x0c0e42b8,"hunit.match.similar.SimilarMapMatch.new","hunit/match/similar/SimilarMapMatch.hx",34,0xfae7f13b)
HX_STACK_THIS(this)
HX_STACK_ARG(root,"root")
HX_STACK_ARG(processedObjects,"processedObjects")
HX_STACK_ARG(expected,"expected")
HX_STACK_ARG(previous,"previous")
HX_STACK_ARG(chainLogic,"chainLogic")
{
	HX_STACK_LINE(35)
	Dynamic tmp = expected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::IMap >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	if ((tmp2)){
		HX_STACK_LINE(36)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("SimilarMapMatch.hx","\x0a","\xd5","\xe7","\xf2"),36,HX_HCSTRING("hunit.match.similar.SimilarMapMatch","\xc6","\xc6","\x20","\x85"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		::hunit::exceptions::InvalidTestException tmp4 = ::hunit::exceptions::InvalidTestException_obj::__new(HX_HCSTRING("`expected` value should be an `haxe.Constraints.IMap` instance.","\x4a","\x76","\xa4","\xfd"),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(39)
	::hunit::match::Match tmp3 = previous;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	::hunit::match::MatchChainLogic tmp4 = chainLogic;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(39)
	super::__construct(tmp3,tmp4);
	HX_STACK_LINE(41)
	this->root = root;
	HX_STACK_LINE(42)
	Dynamic tmp5 = expected;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	::hunit::match::ObjectCache tmp6 = processedObjects;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	::hunit::match::similar::_SimilarMapMatch::DynamicMatchMap tmp7 = this->getMatchMap(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(42)
	this->expected = tmp7;
}
;
	return null();
}

//SimilarMapMatch_obj::~SimilarMapMatch_obj() { }

Dynamic SimilarMapMatch_obj::__CreateEmpty() { return  new SimilarMapMatch_obj; }
hx::ObjectPtr< SimilarMapMatch_obj > SimilarMapMatch_obj::__new(::hunit::match::SimilarMatch root,::hunit::match::ObjectCache processedObjects,Dynamic expected,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{  hx::ObjectPtr< SimilarMapMatch_obj > _result_ = new SimilarMapMatch_obj();
	_result_->__construct(root,processedObjects,expected,previous,chainLogic);
	return _result_;}

Dynamic SimilarMapMatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimilarMapMatch_obj > _result_ = new SimilarMapMatch_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

bool SimilarMapMatch_obj::checkMatch( Dynamic value){
	HX_STACK_FRAME("hunit.match.similar.SimilarMapMatch","checkMatch",0x72c25405,"hunit.match.similar.SimilarMapMatch.checkMatch","hunit/match/similar/SimilarMapMatch.hx",51,0xfae7f13b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(52)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::IMap >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	if ((tmp2)){
		HX_STACK_LINE(52)
		return false;
	}
	HX_STACK_LINE(54)
	::haxe::IMap value1 = value;		HX_STACK_VAR(value1,"value1");
	HX_STACK_LINE(56)
	int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
	HX_STACK_LINE(57)
	Dynamic tmp3 = value1->keys();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp3);  __it->hasNext(); ){
		Dynamic k = __it->next();
		(cnt)++;
	}
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		::hunit::match::similar::_SimilarMapMatch::DynamicMatchMap tmp4 = this->expected;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		cpp::ArrayBase _g1 = tmp4->keys();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(58)
		while((true)){
			HX_STACK_LINE(58)
			bool tmp5 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(58)
			if ((tmp6)){
				HX_STACK_LINE(58)
				break;
			}
			HX_STACK_LINE(58)
			Dynamic tmp7 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			Dynamic k = tmp7;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(58)
			++(_g);
			HX_STACK_LINE(58)
			(cnt)--;
		}
	}
	HX_STACK_LINE(59)
	bool tmp4 = (cnt != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	if ((tmp4)){
		HX_STACK_LINE(59)
		return false;
	}
	HX_STACK_LINE(61)
	Dynamic actual;		HX_STACK_VAR(actual,"actual");
	HX_STACK_LINE(62)
	::hunit::match::Match match;		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		::hunit::match::similar::_SimilarMapMatch::DynamicMatchMap tmp5 = this->expected;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		cpp::ArrayBase _g1 = tmp5->keys();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(63)
		while((true)){
			HX_STACK_LINE(63)
			bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(63)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(63)
			if ((tmp7)){
				HX_STACK_LINE(63)
				break;
			}
			HX_STACK_LINE(63)
			Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(63)
			Dynamic key = tmp8;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(63)
			++(_g);
			HX_STACK_LINE(64)
			Dynamic tmp9 = key;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(64)
			Dynamic tmp10 = value1->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(64)
			actual = tmp10;
			HX_STACK_LINE(65)
			::hunit::match::similar::_SimilarMapMatch::DynamicMatchMap tmp11 = this->expected;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(65)
			Dynamic tmp12 = key;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(65)
			::hunit::match::Match tmp13 = tmp11->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(65)
			match = tmp13;
			HX_STACK_LINE(68)
			::hunit::match::Match tmp14 = match;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(68)
			bool tmp15 = ::Std_obj::is(tmp14,hx::ClassOf< ::hunit::match::SimilarMatch >());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(68)
			if ((tmp15)){
				HX_STACK_LINE(69)
				::hunit::match::SimilarMatch tmp16 = this->root;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(69)
				Dynamic tmp17 = actual;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(69)
				int tmp18 = tmp16->checkedObjects->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(69)
				bool tmp19 = (tmp18 >= (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(69)
				if ((tmp19)){
					HX_STACK_LINE(70)
					continue;
				}
			}
			HX_STACK_LINE(74)
			Dynamic tmp16 = actual;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(74)
			bool tmp17 = match->match(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(74)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(74)
			if ((tmp18)){
				HX_STACK_LINE(74)
				return false;
			}
		}
	}
	HX_STACK_LINE(77)
	return true;
}


::String SimilarMapMatch_obj::shortCode( ){
	HX_STACK_FRAME("hunit.match.similar.SimilarMapMatch","shortCode",0x00041421,"hunit.match.similar.SimilarMapMatch.shortCode","hunit/match/similar/SimilarMapMatch.hx",86,0xfae7f13b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	Array< ::String > parts = Array_obj< ::String >::__new();		HX_STACK_VAR(parts,"parts");
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		::hunit::match::similar::_SimilarMapMatch::DynamicMatchMap tmp = this->expected;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		cpp::ArrayBase _g1 = tmp->keys();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		while((true)){
			HX_STACK_LINE(88)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(88)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			if ((tmp2)){
				HX_STACK_LINE(88)
				break;
			}
			HX_STACK_LINE(88)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			Dynamic key = tmp3;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(88)
			++(_g);
			HX_STACK_LINE(89)
			Dynamic tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			::String tmp6 = (tmp5 + HX_HCSTRING("=>","\x61","\x35","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			::hunit::match::similar::_SimilarMapMatch::DynamicMatchMap tmp7 = this->expected;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(89)
			Dynamic tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(89)
			::hunit::match::Match tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(89)
			::String tmp10 = tmp9->toString();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(89)
			::String tmp11 = (tmp6 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(89)
			parts->push(tmp11);
		}
	}
	HX_STACK_LINE(91)
	::String tmp = parts->join(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	::String tmp1 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	::String tmp2 = (tmp1 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	::String str = tmp2;		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(93)
	int tmp3 = str.length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(93)
	::String tmp4 = str;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(93)
	::String tmp5 = ::hunit::Utils_obj::shortenString(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(93)
	int tmp6 = tmp5.length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(93)
	bool tmp7 = (tmp3 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(93)
	if ((tmp7)){
		HX_STACK_LINE(94)
		::String tmp8 = str;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(94)
		return tmp8;
	}
	else{
		HX_STACK_LINE(96)
		::String tmp8 = str;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		::String tmp9 = ::hunit::Utils_obj::shortenString(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(96)
		str = tmp9;
		HX_STACK_LINE(97)
		int tmp10 = (str.length - (int)6);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(97)
		::String tmp11 = str.substr((int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(97)
		::String tmp12 = (tmp11 + HX_HCSTRING("<...>]","\x11","\x44","\x63","\x98"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(97)
		return tmp12;
	}
	HX_STACK_LINE(93)
	return null();
}


::hunit::match::similar::_SimilarMapMatch::DynamicMatchMap SimilarMapMatch_obj::getMatchMap( ::haxe::IMap expected,::hunit::match::ObjectCache processedObjects){
	HX_STACK_FRAME("hunit.match.similar.SimilarMapMatch","getMatchMap",0x42931f65,"hunit.match.similar.SimilarMapMatch.getMatchMap","hunit/match/similar/SimilarMapMatch.hx",107,0xfae7f13b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(expected,"expected")
	HX_STACK_ARG(processedObjects,"processedObjects")
	HX_STACK_LINE(108)
	::hunit::match::similar::_SimilarMapMatch::DynamicMatchMap tmp = ::hunit::match::similar::_SimilarMapMatch::DynamicMatchMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	::hunit::match::similar::_SimilarMapMatch::DynamicMatchMap map = tmp;		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(110)
	Dynamic tmp1 = expected->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(110)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp1);  __it->hasNext(); ){
		Dynamic key = __it->next();
		{
			HX_STACK_LINE(111)
			Dynamic tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			::hunit::match::SimilarMatch tmp3 = this->root;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			Dynamic tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			Dynamic tmp5 = expected->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(111)
			::hunit::match::ObjectCache tmp6 = processedObjects;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(111)
			::hunit::match::Match tmp7 = tmp3->createMatcherForValue(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			map->set(tmp2,tmp7);
		}
;
	}
	HX_STACK_LINE(114)
	::hunit::match::similar::_SimilarMapMatch::DynamicMatchMap tmp2 = map;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(SimilarMapMatch_obj,getMatchMap,return )


SimilarMapMatch_obj::SimilarMapMatch_obj()
{
}

void SimilarMapMatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimilarMapMatch);
	HX_MARK_MEMBER_NAME(expected,"expected");
	HX_MARK_MEMBER_NAME(root,"root");
	::hunit::match::Match_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimilarMapMatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(expected,"expected");
	HX_VISIT_MEMBER_NAME(root,"root");
	::hunit::match::Match_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SimilarMapMatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"expected") ) { return expected; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shortCode") ) { return shortCode_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkMatch") ) { return checkMatch_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getMatchMap") ) { return getMatchMap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SimilarMapMatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::hunit::match::SimilarMatch >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"expected") ) { expected=inValue.Cast< ::hunit::match::similar::_SimilarMapMatch::DynamicMatchMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SimilarMapMatch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SimilarMapMatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("expected","\x78","\x2e","\x30","\x40"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hunit::match::similar::_SimilarMapMatch::DynamicMatchMap*/ ,(int)offsetof(SimilarMapMatch_obj,expected),HX_HCSTRING("expected","\x78","\x2e","\x30","\x40")},
	{hx::fsObject /*::hunit::match::SimilarMatch*/ ,(int)offsetof(SimilarMapMatch_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("expected","\x78","\x2e","\x30","\x40"),
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("checkMatch","\x5d","\x4b","\x13","\x13"),
	HX_HCSTRING("shortCode","\xc9","\x4f","\x87","\x92"),
	HX_HCSTRING("getMatchMap","\x0d","\x95","\x1a","\xe9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimilarMapMatch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimilarMapMatch_obj::__mClass,"__mClass");
};

#endif

hx::Class SimilarMapMatch_obj::__mClass;

void SimilarMapMatch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.similar.SimilarMapMatch","\xc6","\xc6","\x20","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SimilarMapMatch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SimilarMapMatch_obj >;
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
} // end namespace similar
