#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_hunit_match_similar_SimilarObjectMatch
#include <hunit/match/similar/SimilarObjectMatch.h>
#endif
namespace hunit{
namespace match{
namespace similar{

Void SimilarObjectMatch_obj::__construct(::hunit::match::SimilarMatch root,::hunit::match::ObjectCache processedObjects,Dynamic expected,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{
HX_STACK_FRAME("hunit.match.similar.SimilarObjectMatch","new",0xd24f55db,"hunit.match.similar.SimilarObjectMatch.new","hunit/match/similar/SimilarObjectMatch.hx",33,0xdd0ffc52)
HX_STACK_THIS(this)
HX_STACK_ARG(root,"root")
HX_STACK_ARG(processedObjects,"processedObjects")
HX_STACK_ARG(expected,"expected")
HX_STACK_ARG(previous,"previous")
HX_STACK_ARG(chainLogic,"chainLogic")
{
	HX_STACK_LINE(34)
	Dynamic tmp = expected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	bool tmp1 = ::hunit::Utils_obj::isObject(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	if ((tmp2)){
		HX_STACK_LINE(35)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("SimilarObjectMatch.hx","\xe3","\x23","\xb3","\x42"),35,HX_HCSTRING("hunit.match.similar.SimilarObjectMatch","\x69","\xcc","\x2a","\xa3"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		::hunit::exceptions::InvalidTestException tmp4 = ::hunit::exceptions::InvalidTestException_obj::__new(HX_HCSTRING("`expected` value should be an object.","\x93","\x3c","\xb2","\x97"),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(38)
	::hunit::match::Match tmp3 = previous;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	::hunit::match::MatchChainLogic tmp4 = chainLogic;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	super::__construct(tmp3,tmp4);
	HX_STACK_LINE(40)
	this->root = root;
	HX_STACK_LINE(41)
	Dynamic tmp5 = expected;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	::hunit::match::ObjectCache tmp6 = processedObjects;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(41)
	::haxe::ds::StringMap tmp7 = this->getFieldMatchMap(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(41)
	this->expected = tmp7;
}
;
	return null();
}

//SimilarObjectMatch_obj::~SimilarObjectMatch_obj() { }

Dynamic SimilarObjectMatch_obj::__CreateEmpty() { return  new SimilarObjectMatch_obj; }
hx::ObjectPtr< SimilarObjectMatch_obj > SimilarObjectMatch_obj::__new(::hunit::match::SimilarMatch root,::hunit::match::ObjectCache processedObjects,Dynamic expected,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic)
{  hx::ObjectPtr< SimilarObjectMatch_obj > _result_ = new SimilarObjectMatch_obj();
	_result_->__construct(root,processedObjects,expected,previous,chainLogic);
	return _result_;}

Dynamic SimilarObjectMatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimilarObjectMatch_obj > _result_ = new SimilarObjectMatch_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

bool SimilarObjectMatch_obj::checkMatch( Dynamic value){
	HX_STACK_FRAME("hunit.match.similar.SimilarObjectMatch","checkMatch",0xf6ff3b42,"hunit.match.similar.SimilarObjectMatch.checkMatch","hunit/match/similar/SimilarObjectMatch.hx",50,0xdd0ffc52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(51)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	::haxe::ds::StringMap tmp1 = ::hunit::match::similar::SimilarObjectMatch_obj::getFieldValueMap(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	::haxe::ds::StringMap valueMap = tmp1;		HX_STACK_VAR(valueMap,"valueMap");
	HX_STACK_LINE(53)
	Dynamic actual;		HX_STACK_VAR(actual,"actual");
	HX_STACK_LINE(54)
	::hunit::match::Match match;		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(55)
	::haxe::ds::StringMap tmp2 = this->expected;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
		::String field = __it->next();
		{
			HX_STACK_LINE(56)
			::String tmp4 = field;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			bool tmp5 = valueMap->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			if ((tmp6)){
				HX_STACK_LINE(56)
				return false;
			}
			HX_STACK_LINE(58)
			::String tmp7 = field;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			Dynamic tmp8 = valueMap->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(58)
			actual = tmp8;
			HX_STACK_LINE(59)
			::haxe::ds::StringMap tmp9 = this->expected;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(59)
			::String tmp10 = field;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(59)
			::hunit::match::Match tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(59)
			match = tmp11;
			HX_STACK_LINE(62)
			::hunit::match::Match tmp12 = match;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(62)
			bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::hunit::match::SimilarMatch >());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(62)
			if ((tmp13)){
				HX_STACK_LINE(63)
				::hunit::match::SimilarMatch tmp14 = this->root;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(63)
				Dynamic tmp15 = actual;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(63)
				int tmp16 = tmp14->checkedObjects->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(63)
				bool tmp17 = (tmp16 >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(63)
				if ((tmp17)){
					HX_STACK_LINE(64)
					continue;
				}
			}
			HX_STACK_LINE(68)
			Dynamic tmp14 = actual;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(68)
			bool tmp15 = match->match(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(68)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(68)
			if ((tmp16)){
				HX_STACK_LINE(68)
				return false;
			}
		}
;
	}
	HX_STACK_LINE(71)
	return true;
}


::String SimilarObjectMatch_obj::shortCode( ){
	HX_STACK_FRAME("hunit.match.similar.SimilarObjectMatch","shortCode",0x3444a384,"hunit.match.similar.SimilarObjectMatch.shortCode","hunit/match/similar/SimilarObjectMatch.hx",80,0xdd0ffc52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	Array< ::String > parts = Array_obj< ::String >::__new();		HX_STACK_VAR(parts,"parts");
	HX_STACK_LINE(82)
	::haxe::ds::StringMap tmp = this->expected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
		::String field = __it->next();
		{
			HX_STACK_LINE(83)
			::String tmp2 = (field + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			::haxe::ds::StringMap tmp3 = this->expected;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			::String tmp4 = field;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			::hunit::match::Match tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			::String tmp6 = tmp5->toString();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			::String tmp7 = (tmp2 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(83)
			parts->unshift(tmp7);
		}
;
	}
	HX_STACK_LINE(85)
	::String tmp2 = parts->join(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	::String tmp3 = (HX_HCSTRING("{","\x7b","\x00","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	::String tmp4 = (tmp3 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(85)
	::String str = tmp4;		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(87)
	int tmp5 = str.length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(87)
	::String tmp6 = str;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(87)
	::String tmp7 = ::hunit::Utils_obj::shortenString(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(87)
	int tmp8 = tmp7.length;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(87)
	bool tmp9 = (tmp5 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(87)
	if ((tmp9)){
		HX_STACK_LINE(88)
		::String tmp10 = str;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(88)
		return tmp10;
	}
	else{
		HX_STACK_LINE(90)
		::String tmp10 = str;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(90)
		::String tmp11 = ::hunit::Utils_obj::shortenString(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(90)
		str = tmp11;
		HX_STACK_LINE(91)
		int tmp12 = (str.length - (int)6);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(91)
		::String tmp13 = str.substr((int)0,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(91)
		::String tmp14 = (tmp13 + HX_HCSTRING("<...>}","\x31","\x44","\x63","\x98"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(91)
		return tmp14;
	}
	HX_STACK_LINE(87)
	return null();
}


::haxe::ds::StringMap SimilarObjectMatch_obj::getFieldMatchMap( Dynamic object,::hunit::match::ObjectCache processedObjects){
	HX_STACK_FRAME("hunit.match.similar.SimilarObjectMatch","getFieldMatchMap",0x09638060,"hunit.match.similar.SimilarObjectMatch.getFieldMatchMap","hunit/match/similar/SimilarObjectMatch.hx",101,0xdd0ffc52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(processedObjects,"processedObjects")
	HX_STACK_LINE(102)
	Dynamic tmp = object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	::haxe::ds::StringMap tmp1 = ::hunit::match::similar::SimilarObjectMatch_obj::getFieldValueMap(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	::haxe::ds::StringMap fieldValue = tmp1;		HX_STACK_VAR(fieldValue,"fieldValue");
	HX_STACK_LINE(103)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(103)
	::haxe::ds::StringMap fieldMatch = tmp2;		HX_STACK_VAR(fieldMatch,"fieldMatch");
	HX_STACK_LINE(105)
	Dynamic value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(106)
	Dynamic tmp3 = fieldValue->keys();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(106)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
		::String field = __it->next();
		{
			HX_STACK_LINE(107)
			::String tmp4 = field;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(107)
			Dynamic tmp5 = fieldValue->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(107)
			value = tmp5;
			HX_STACK_LINE(109)
			{
				HX_STACK_LINE(109)
				::hunit::match::SimilarMatch tmp6 = this->root;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(109)
				Dynamic tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(109)
				::hunit::match::ObjectCache tmp8 = processedObjects;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(109)
				::hunit::match::Match tmp9 = tmp6->createMatcherForValue(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(109)
				::hunit::match::Match value1 = tmp9;		HX_STACK_VAR(value1,"value1");
				HX_STACK_LINE(109)
				::String tmp10 = field;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(109)
				::hunit::match::Match tmp11 = value1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(109)
				fieldMatch->set(tmp10,tmp11);
			}
		}
;
	}
	HX_STACK_LINE(112)
	::haxe::ds::StringMap tmp4 = fieldMatch;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(112)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(SimilarObjectMatch_obj,getFieldMatchMap,return )

::haxe::ds::StringMap SimilarObjectMatch_obj::getFieldValueMap( Dynamic object){
	HX_STACK_FRAME("hunit.match.similar.SimilarObjectMatch","getFieldValueMap",0x34896db4,"hunit.match.similar.SimilarObjectMatch.getFieldValueMap","hunit/match/similar/SimilarObjectMatch.hx",121,0xdd0ffc52)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(122)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		tmp = tmp2;
	}
	HX_STACK_LINE(122)
	::haxe::ds::StringMap map = tmp;		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(124)
	Array< ::String > fields;		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(124)
	{
		HX_STACK_LINE(124)
		Dynamic tmp1 = object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		::ValueType tmp2 = ::Type_obj::_typeof(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		::ValueType _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		switch( (int)(_g->__Index())){
			case (int)4: {
				HX_STACK_LINE(125)
				Dynamic tmp3 = object;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(125)
				fields = ::Reflect_obj::fields(tmp3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(124)
				::hx::Class tmp3 = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(124)
				::hx::Class cls = tmp3;		HX_STACK_VAR(cls,"cls");
				HX_STACK_LINE(124)
				::hx::Class tmp4 = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(124)
				::hx::Class _switch_1 = (tmp4);
				if (  ( _switch_1==hx::ClassOf< ::String >())){
					HX_STACK_LINE(126)
					fields = Array_obj< ::String >::__new();
				}
				else  {
					HX_STACK_LINE(127)
					::hx::Class tmp5 = cls;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(127)
					fields = ::Type_obj::getInstanceFields(tmp5);
				}
;
;
			}
			;break;
			default: {
				HX_STACK_LINE(128)
				fields = Array_obj< ::String >::__new();
			}
		}
	}
	HX_STACK_LINE(131)
	Dynamic property;		HX_STACK_VAR(property,"property");
	HX_STACK_LINE(132)
	{
		HX_STACK_LINE(132)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(132)
		while((true)){
			HX_STACK_LINE(132)
			bool tmp1 = (_g < fields->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(132)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(132)
			if ((tmp2)){
				HX_STACK_LINE(132)
				break;
			}
			HX_STACK_LINE(132)
			::String tmp3 = fields->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			::String field = tmp3;		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(132)
			++(_g);
			HX_STACK_LINE(137)
			Dynamic tmp4 = object;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(137)
			::String tmp5 = field;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			Dynamic tmp6 = ::Reflect_obj::getProperty(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(137)
			property = tmp6;
			HX_STACK_LINE(138)
			Dynamic tmp7 = property;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(138)
			bool tmp8 = ::Reflect_obj::isFunction(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(138)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(138)
			if ((tmp9)){
				HX_STACK_LINE(139)
				::String tmp10 = field;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(139)
				Dynamic tmp11 = property;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(139)
				map->set(tmp10,tmp11);
			}
		}
	}
	HX_STACK_LINE(143)
	::haxe::ds::StringMap tmp1 = map;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SimilarObjectMatch_obj,getFieldValueMap,return )


SimilarObjectMatch_obj::SimilarObjectMatch_obj()
{
}

void SimilarObjectMatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimilarObjectMatch);
	HX_MARK_MEMBER_NAME(expected,"expected");
	HX_MARK_MEMBER_NAME(root,"root");
	::hunit::match::Match_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimilarObjectMatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(expected,"expected");
	HX_VISIT_MEMBER_NAME(root,"root");
	::hunit::match::Match_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SimilarObjectMatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"getFieldMatchMap") ) { return getFieldMatchMap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SimilarObjectMatch_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"getFieldValueMap") ) { outValue = getFieldValueMap_dyn(); return true;  }
	}
	return false;
}

Dynamic SimilarObjectMatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::hunit::match::SimilarMatch >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"expected") ) { expected=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SimilarObjectMatch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SimilarObjectMatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("expected","\x78","\x2e","\x30","\x40"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(SimilarObjectMatch_obj,expected),HX_HCSTRING("expected","\x78","\x2e","\x30","\x40")},
	{hx::fsObject /*::hunit::match::SimilarMatch*/ ,(int)offsetof(SimilarObjectMatch_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("expected","\x78","\x2e","\x30","\x40"),
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("checkMatch","\x5d","\x4b","\x13","\x13"),
	HX_HCSTRING("shortCode","\xc9","\x4f","\x87","\x92"),
	HX_HCSTRING("getFieldMatchMap","\xbb","\x16","\xa7","\x26"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimilarObjectMatch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimilarObjectMatch_obj::__mClass,"__mClass");
};

#endif

hx::Class SimilarObjectMatch_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getFieldValueMap","\x0f","\x04","\xcd","\x51"),
	::String(null()) };

void SimilarObjectMatch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.similar.SimilarObjectMatch","\x69","\xcc","\x2a","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SimilarObjectMatch_obj::__GetStatic;
	__mClass->mSetStaticField = &SimilarObjectMatch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SimilarObjectMatch_obj >;
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
