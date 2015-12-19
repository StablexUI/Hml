#include <hxcpp.h>

#ifndef INCLUDED_hunit_match_GenericMatchFactory
#include <hunit/match/GenericMatchFactory.h>
#endif
#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
#ifndef INCLUDED_hunit_match_MatchChainLogic
#include <hunit/match/MatchChainLogic.h>
#endif
namespace hunit{
namespace match{

Void Match_obj::__construct(::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{
HX_STACK_FRAME("hunit.match.Match","new",0x805c66ac,"hunit.match.Match.new","hunit/match/Match.hx",46,0x88a51b06)
HX_STACK_THIS(this)
HX_STACK_ARG(previous,"previous")
HX_STACK_ARG(chainLogic,"chainLogic")
{
	HX_STACK_LINE(47)
	this->previous = previous;
	HX_STACK_LINE(48)
	this->chainLogic = chainLogic;
}
;
	return null();
}

//Match_obj::~Match_obj() { }

Dynamic Match_obj::__CreateEmpty() { return  new Match_obj; }
hx::ObjectPtr< Match_obj > Match_obj::__new(::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{  hx::ObjectPtr< Match_obj > _result_ = new Match_obj();
	_result_->__construct(previous,chainLogic);
	return _result_;}

Dynamic Match_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Match_obj > _result_ = new Match_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool Match_obj::match( Dynamic value){
	HX_STACK_FRAME("hunit.match.Match","match",0x07370a91,"hunit.match.Match.match","hunit/match/Match.hx",58,0x88a51b06)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(59)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	bool tmp1 = this->checkMatch(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	bool result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(61)
	::hunit::match::Match current = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(current,"current");
	HX_STACK_LINE(62)
	while((true)){
		HX_STACK_LINE(62)
		bool tmp2 = (current->chainLogic != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		if ((tmp3)){
			HX_STACK_LINE(62)
			break;
		}
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			::hunit::match::MatchChainLogic _g = current->chainLogic;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(63)
			bool tmp4 = (_g != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(63)
			if ((tmp4)){
				HX_STACK_LINE(63)
				switch( (int)(_g->__Index())){
					case (int)0: {
						HX_STACK_LINE(64)
						bool tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(64)
						bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(64)
						if ((tmp5)){
							HX_STACK_LINE(64)
							Dynamic tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(64)
							Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(64)
							tmp6 = current->previous->checkMatch(tmp8);
						}
						else{
							HX_STACK_LINE(64)
							tmp6 = false;
						}
						HX_STACK_LINE(64)
						result = tmp6;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(65)
						bool tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(65)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(65)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(65)
						if ((tmp6)){
							HX_STACK_LINE(65)
							Dynamic tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(65)
							Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(65)
							tmp7 = current->previous->checkMatch(tmp9);
						}
						else{
							HX_STACK_LINE(65)
							tmp7 = true;
						}
						HX_STACK_LINE(65)
						result = tmp7;
					}
					;break;
				}
			}
		}
		HX_STACK_LINE(68)
		current = current->previous;
	}
	HX_STACK_LINE(71)
	bool tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Match_obj,match,return )

bool Match_obj::isChained( ){
	HX_STACK_FRAME("hunit.match.Match","isChained",0xef7ec422,"hunit.match.Match.isChained","hunit/match/Match.hx",91,0x88a51b06)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	::hunit::match::Match tmp = this->previous;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Match_obj,isChained,return )

::String Match_obj::toString( ){
	HX_STACK_FRAME("hunit.match.Match","toString",0x86a5e6e0,"hunit.match.Match.toString","hunit/match/Match.hx",102,0x88a51b06)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	::String tmp = this->shortCode();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	::String code = tmp;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(105)
	::hunit::match::Match tmp1 = this->previous;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	if ((tmp2)){
		HX_STACK_LINE(106)
		::String tmp3 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + code);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		::String tmp4 = (tmp3 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		return tmp4;
	}
	else{
		HX_STACK_LINE(108)
		::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + code);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		::String result = tmp3;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(109)
		::hunit::match::Match current = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(110)
		while((true)){
			HX_STACK_LINE(110)
			bool tmp4 = (current->chainLogic != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(110)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(110)
			if ((tmp5)){
				HX_STACK_LINE(110)
				break;
			}
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				::hunit::match::MatchChainLogic _g = current->chainLogic;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(111)
				bool tmp6 = (_g != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(111)
				if ((tmp6)){
					HX_STACK_LINE(111)
					switch( (int)(_g->__Index())){
						case (int)0: {
							HX_STACK_LINE(112)
							::String tmp7 = current->previous->shortCode();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(112)
							::String tmp8 = (HX_HCSTRING(" && ","\xc0","\xca","\x43","\x15") + result);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(112)
							::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(112)
							result = tmp9;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(113)
							::String tmp7 = current->previous->shortCode();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(113)
							::String tmp8 = (HX_HCSTRING(" || ","\x80","\x57","\x85","\x15") + result);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(113)
							::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(113)
							result = tmp9;
						}
						;break;
					}
				}
			}
			HX_STACK_LINE(115)
			current = current->previous;
		}
		HX_STACK_LINE(118)
		::String tmp4 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + result);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		::String tmp5 = (tmp4 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		return tmp5;
	}
	HX_STACK_LINE(105)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Match_obj,toString,return )

::String Match_obj::shortCode( ){
	HX_STACK_FRAME("hunit.match.Match","shortCode",0xb483a715,"hunit.match.Match.shortCode","hunit/match/Match.hx",129,0x88a51b06)
	HX_STACK_THIS(this)
	HX_STACK_LINE(129)
	HX_STACK_DO_THROW(HX_HCSTRING("To be overriden","\xaa","\x65","\x14","\xca"));
	HX_STACK_LINE(129)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Match_obj,shortCode,return )

bool Match_obj::checkMatch( Dynamic value){
	HX_STACK_FRAME("hunit.match.Match","checkMatch",0xade35691,"hunit.match.Match.checkMatch","hunit/match/Match.hx",139,0x88a51b06)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(139)
	HX_STACK_DO_THROW(HX_HCSTRING("To be overriden","\xaa","\x65","\x14","\xca"));
	HX_STACK_LINE(139)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Match_obj,checkMatch,return )

::hunit::match::GenericMatchFactory Match_obj::get_and( ){
	HX_STACK_FRAME("hunit.match.Match","get_and",0x283e6fba,"hunit.match.Match.get_and","hunit/match/Match.hx",148,0x88a51b06)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	::hunit::match::GenericMatchFactory tmp = this->_and;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	if ((tmp1)){
		HX_STACK_LINE(150)
		::hunit::match::GenericMatchFactory tmp2 = ::hunit::match::GenericMatchFactory_obj::__new(hx::ObjectPtr<OBJ_>(this),::hunit::match::MatchChainLogic_obj::And);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		this->_and = tmp2;
	}
	HX_STACK_LINE(153)
	::hunit::match::GenericMatchFactory tmp2 = this->_and;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(153)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Match_obj,get_and,return )

::hunit::match::GenericMatchFactory Match_obj::get_or( ){
	HX_STACK_FRAME("hunit.match.Match","get_or",0x306559a0,"hunit.match.Match.get_or","hunit/match/Match.hx",162,0x88a51b06)
	HX_STACK_THIS(this)
	HX_STACK_LINE(163)
	::hunit::match::GenericMatchFactory tmp = this->_or;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	if ((tmp1)){
		HX_STACK_LINE(164)
		::hunit::match::GenericMatchFactory tmp2 = ::hunit::match::GenericMatchFactory_obj::__new(hx::ObjectPtr<OBJ_>(this),::hunit::match::MatchChainLogic_obj::Or);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		this->_or = tmp2;
	}
	HX_STACK_LINE(167)
	::hunit::match::GenericMatchFactory tmp2 = this->_or;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(167)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Match_obj,get_or,return )


Match_obj::Match_obj()
{
}

void Match_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Match);
	HX_MARK_MEMBER_NAME(previous,"previous");
	HX_MARK_MEMBER_NAME(chainLogic,"chainLogic");
	HX_MARK_MEMBER_NAME(_and,"_and");
	HX_MARK_MEMBER_NAME(_or,"_or");
	HX_MARK_END_CLASS();
}

void Match_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(previous,"previous");
	HX_VISIT_MEMBER_NAME(chainLogic,"chainLogic");
	HX_VISIT_MEMBER_NAME(_and,"_and");
	HX_VISIT_MEMBER_NAME(_or,"_or");
}

Dynamic Match_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"or") ) { if (inCallProp == hx::paccAlways) return get_or(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"and") ) { if (inCallProp == hx::paccAlways) return get_and(); }
		if (HX_FIELD_EQ(inName,"_or") ) { return _or; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_and") ) { return _and; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return match_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_or") ) { return get_or_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_and") ) { return get_and_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"previous") ) { return previous; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isChained") ) { return isChained_dyn(); }
		if (HX_FIELD_EQ(inName,"shortCode") ) { return shortCode_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"chainLogic") ) { return chainLogic; }
		if (HX_FIELD_EQ(inName,"checkMatch") ) { return checkMatch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Match_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_or") ) { _or=inValue.Cast< ::hunit::match::GenericMatchFactory >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_and") ) { _and=inValue.Cast< ::hunit::match::GenericMatchFactory >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"previous") ) { previous=inValue.Cast< ::hunit::match::Match >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"chainLogic") ) { chainLogic=inValue.Cast< ::hunit::match::MatchChainLogic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Match_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Match_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("previous","\x37","\xbc","\xb0","\x23"));
	outFields->push(HX_HCSTRING("chainLogic","\x9d","\xf0","\xac","\xd0"));
	outFields->push(HX_HCSTRING("and","\xd7","\xfa","\x49","\x00"));
	outFields->push(HX_HCSTRING("_and","\xd8","\x3f","\x15","\x3f"));
	outFields->push(HX_HCSTRING("or","\x23","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("_or","\x42","\x77","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hunit::match::Match*/ ,(int)offsetof(Match_obj,previous),HX_HCSTRING("previous","\x37","\xbc","\xb0","\x23")},
	{hx::fsObject /*::hunit::match::MatchChainLogic*/ ,(int)offsetof(Match_obj,chainLogic),HX_HCSTRING("chainLogic","\x9d","\xf0","\xac","\xd0")},
	{hx::fsObject /*::hunit::match::GenericMatchFactory*/ ,(int)offsetof(Match_obj,_and),HX_HCSTRING("_and","\xd8","\x3f","\x15","\x3f")},
	{hx::fsObject /*::hunit::match::GenericMatchFactory*/ ,(int)offsetof(Match_obj,_or),HX_HCSTRING("_or","\x42","\x77","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("previous","\x37","\xbc","\xb0","\x23"),
	HX_HCSTRING("chainLogic","\x9d","\xf0","\xac","\xd0"),
	HX_HCSTRING("_and","\xd8","\x3f","\x15","\x3f"),
	HX_HCSTRING("_or","\x42","\x77","\x48","\x00"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("isChained","\xd6","\x6c","\x82","\xcd"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("shortCode","\xc9","\x4f","\x87","\x92"),
	HX_HCSTRING("checkMatch","\x5d","\x4b","\x13","\x13"),
	HX_HCSTRING("get_and","\x6e","\xc3","\xbe","\x26"),
	HX_HCSTRING("get_or","\x6c","\xf8","\x2f","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Match_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Match_obj::__mClass,"__mClass");
};

#endif

hx::Class Match_obj::__mClass;

void Match_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.Match","\xba","\xe0","\x28","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Match_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Match_obj >;
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
