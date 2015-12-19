#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_hunit_match_similar_SimilarArrayMatch
#include <hunit/match/similar/SimilarArrayMatch.h>
#endif
namespace hunit{
namespace match{
namespace similar{

Void SimilarArrayMatch_obj::__construct(::hunit::match::SimilarMatch root,::hunit::match::ObjectCache processedObjects,cpp::ArrayBase expected,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{
HX_STACK_FRAME("hunit.match.similar.SimilarArrayMatch","new",0xf1a8615b,"hunit.match.similar.SimilarArrayMatch.new","hunit/match/similar/SimilarArrayMatch.hx",33,0xa7065eb8)
HX_STACK_THIS(this)
HX_STACK_ARG(root,"root")
HX_STACK_ARG(processedObjects,"processedObjects")
HX_STACK_ARG(expected,"expected")
HX_STACK_ARG(previous,"previous")
HX_STACK_ARG(chainLogic,"chainLogic")
{
	HX_STACK_LINE(34)
	bool tmp = ::Std_obj::is(expected,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	if ((tmp1)){
		HX_STACK_LINE(35)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("SimilarArrayMatch.hx","\x47","\x14","\xa2","\x89"),35,HX_HCSTRING("hunit.match.similar.SimilarArrayMatch","\xe9","\x17","\x38","\x77"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		::hunit::exceptions::InvalidTestException tmp3 = ::hunit::exceptions::InvalidTestException_obj::__new(HX_HCSTRING("`expected` value should be an array.","\xf1","\x10","\xd3","\x68"),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(38)
	::hunit::match::Match tmp2 = previous;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	::hunit::match::MatchChainLogic tmp3 = chainLogic;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	super::__construct(tmp2,tmp3);
	HX_STACK_LINE(40)
	this->root = root;
	HX_STACK_LINE(41)
	::hunit::match::ObjectCache tmp4 = processedObjects;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	this->expected = this->getArrayMatchMap(expected,tmp4);
}
;
	return null();
}

//SimilarArrayMatch_obj::~SimilarArrayMatch_obj() { }

Dynamic SimilarArrayMatch_obj::__CreateEmpty() { return  new SimilarArrayMatch_obj; }
hx::ObjectPtr< SimilarArrayMatch_obj > SimilarArrayMatch_obj::__new(::hunit::match::SimilarMatch root,::hunit::match::ObjectCache processedObjects,cpp::ArrayBase expected,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{  hx::ObjectPtr< SimilarArrayMatch_obj > _result_ = new SimilarArrayMatch_obj();
	_result_->__construct(root,processedObjects,expected,previous,chainLogic);
	return _result_;}

Dynamic SimilarArrayMatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimilarArrayMatch_obj > _result_ = new SimilarArrayMatch_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

bool SimilarArrayMatch_obj::checkMatch( Dynamic value){
	HX_STACK_FRAME("hunit.match.similar.SimilarArrayMatch","checkMatch",0x28e69fc2,"hunit.match.similar.SimilarArrayMatch.checkMatch","hunit/match/similar/SimilarArrayMatch.hx",50,0xa7065eb8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(51)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	if ((tmp2)){
		HX_STACK_LINE(51)
		return false;
	}
	HX_STACK_LINE(53)
	cpp::ArrayBase value1 = value;		HX_STACK_VAR(value1,"value1");
	HX_STACK_LINE(54)
	int tmp3 = this->expected->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	int tmp4 = value1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(54)
	bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(54)
	if ((tmp5)){
		HX_STACK_LINE(54)
		return false;
	}
	HX_STACK_LINE(56)
	Dynamic actual;		HX_STACK_VAR(actual,"actual");
	HX_STACK_LINE(57)
	::hunit::match::Match match;		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(58)
		int tmp6 = this->expected->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(58)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		while((true)){
			HX_STACK_LINE(58)
			bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(58)
			if ((tmp8)){
				HX_STACK_LINE(58)
				break;
			}
			HX_STACK_LINE(58)
			int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(58)
			int i = tmp9;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(59)
			Dynamic tmp10 = value1->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(59)
			actual = tmp10;
			HX_STACK_LINE(60)
			::hunit::match::Match tmp11 = this->expected->__get(i).StaticCast< ::hunit::match::Match >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			match = tmp11;
			HX_STACK_LINE(63)
			::hunit::match::Match tmp12 = match;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(63)
			bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::hunit::match::SimilarMatch >());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(63)
			if ((tmp13)){
				HX_STACK_LINE(64)
				::hunit::match::SimilarMatch tmp14 = this->root;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(64)
				Dynamic tmp15 = actual;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(64)
				int tmp16 = tmp14->checkedObjects->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(64)
				bool tmp17 = (tmp16 >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(64)
				if ((tmp17)){
					HX_STACK_LINE(65)
					continue;
				}
			}
			HX_STACK_LINE(69)
			Dynamic tmp14 = actual;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(69)
			bool tmp15 = match->match(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(69)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(69)
			if ((tmp16)){
				HX_STACK_LINE(69)
				return false;
			}
		}
	}
	HX_STACK_LINE(72)
	return true;
}


::String SimilarArrayMatch_obj::shortCode( ){
	HX_STACK_FRAME("hunit.match.similar.SimilarArrayMatch","shortCode",0x13334f04,"hunit.match.similar.SimilarArrayMatch.shortCode","hunit/match/similar/SimilarArrayMatch.hx",81,0xa7065eb8)
	HX_STACK_THIS(this)

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::String run(::hunit::match::Match m){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","hunit/match/similar/SimilarArrayMatch.hx",82,0xa7065eb8)
		HX_STACK_ARG(m,"m")
		{
			HX_STACK_LINE(82)
			::String tmp = m->toString();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(82)
			return tmp;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(82)
	Array< ::String > parts = this->expected->map( Dynamic(new _Function_1_1())).StaticCast< Array< ::String > >();		HX_STACK_VAR(parts,"parts");
	HX_STACK_LINE(83)
	::String tmp = parts->join(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	::String tmp1 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	::String tmp2 = (tmp1 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	::String str = tmp2;		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(85)
	int tmp3 = str.length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	::String tmp4 = str;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(85)
	::String tmp5 = ::hunit::Utils_obj::shortenString(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(85)
	int tmp6 = tmp5.length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	bool tmp7 = (tmp3 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	if ((tmp7)){
		HX_STACK_LINE(86)
		::String tmp8 = str;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(86)
		return tmp8;
	}
	else{
		HX_STACK_LINE(88)
		::String tmp8 = str;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(88)
		::String tmp9 = ::hunit::Utils_obj::shortenString(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(88)
		str = tmp9;
		HX_STACK_LINE(89)
		int tmp10 = (str.length - (int)6);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(89)
		::String tmp11 = str.substr((int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(89)
		::String tmp12 = (tmp11 + HX_HCSTRING("<...>]","\x11","\x44","\x63","\x98"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(89)
		return tmp12;
	}
	HX_STACK_LINE(85)
	return null();
}


Array< ::Dynamic > SimilarArrayMatch_obj::getArrayMatchMap( cpp::ArrayBase expected,::hunit::match::ObjectCache processedObjects){
	HX_STACK_FRAME("hunit.match.similar.SimilarArrayMatch","getArrayMatchMap",0xd88794bf,"hunit.match.similar.SimilarArrayMatch.getArrayMatchMap","hunit/match/similar/SimilarArrayMatch.hx",99,0xa7065eb8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(expected,"expected")
	HX_STACK_ARG(processedObjects,"processedObjects")
	HX_STACK_LINE(100)
	Array< ::Dynamic > matchers = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(matchers,"matchers");
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(102)
		int _g = expected->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		while((true)){
			HX_STACK_LINE(102)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(102)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(102)
			if ((tmp1)){
				HX_STACK_LINE(102)
				break;
			}
			HX_STACK_LINE(102)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(103)
			::hunit::match::SimilarMatch tmp3 = this->root;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(103)
			Dynamic tmp4 = expected->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(103)
			::hunit::match::ObjectCache tmp5 = processedObjects;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(103)
			::hunit::match::Match tmp6 = tmp3->createMatcherForValue(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(103)
			matchers->push(tmp6);
		}
	}
	HX_STACK_LINE(106)
	return matchers;
}


HX_DEFINE_DYNAMIC_FUNC2(SimilarArrayMatch_obj,getArrayMatchMap,return )


SimilarArrayMatch_obj::SimilarArrayMatch_obj()
{
}

void SimilarArrayMatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimilarArrayMatch);
	HX_MARK_MEMBER_NAME(expected,"expected");
	HX_MARK_MEMBER_NAME(root,"root");
	::hunit::match::Match_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimilarArrayMatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(expected,"expected");
	HX_VISIT_MEMBER_NAME(root,"root");
	::hunit::match::Match_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SimilarArrayMatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	case 16:
		if (HX_FIELD_EQ(inName,"getArrayMatchMap") ) { return getArrayMatchMap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SimilarArrayMatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::hunit::match::SimilarMatch >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"expected") ) { expected=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SimilarArrayMatch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SimilarArrayMatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("expected","\x78","\x2e","\x30","\x40"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SimilarArrayMatch_obj,expected),HX_HCSTRING("expected","\x78","\x2e","\x30","\x40")},
	{hx::fsObject /*::hunit::match::SimilarMatch*/ ,(int)offsetof(SimilarArrayMatch_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("expected","\x78","\x2e","\x30","\x40"),
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("checkMatch","\x5d","\x4b","\x13","\x13"),
	HX_HCSTRING("shortCode","\xc9","\x4f","\x87","\x92"),
	HX_HCSTRING("getArrayMatchMap","\x9a","\x66","\x85","\xaf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimilarArrayMatch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimilarArrayMatch_obj::__mClass,"__mClass");
};

#endif

hx::Class SimilarArrayMatch_obj::__mClass;

void SimilarArrayMatch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.similar.SimilarArrayMatch","\xe9","\x17","\x38","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SimilarArrayMatch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SimilarArrayMatch_obj >;
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
