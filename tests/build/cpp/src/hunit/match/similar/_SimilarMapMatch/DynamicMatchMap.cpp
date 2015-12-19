#include <hxcpp.h>

#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
#ifndef INCLUDED_hunit_match_similar__SimilarMapMatch_DynamicMatchMap
#include <hunit/match/similar/_SimilarMapMatch/DynamicMatchMap.h>
#endif
namespace hunit{
namespace match{
namespace similar{
namespace _SimilarMapMatch{

Void DynamicMatchMap_obj::__construct()
{
HX_STACK_FRAME("hunit.match.similar._SimilarMapMatch.DynamicMatchMap","new",0x91a890bd,"hunit.match.similar._SimilarMapMatch.DynamicMatchMap.new","hunit/match/similar/SimilarMapMatch.hx",131,0xfae7f13b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(132)
	this->keyList = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(133)
	this->valueList = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//DynamicMatchMap_obj::~DynamicMatchMap_obj() { }

Dynamic DynamicMatchMap_obj::__CreateEmpty() { return  new DynamicMatchMap_obj; }
hx::ObjectPtr< DynamicMatchMap_obj > DynamicMatchMap_obj::__new()
{  hx::ObjectPtr< DynamicMatchMap_obj > _result_ = new DynamicMatchMap_obj();
	_result_->__construct();
	return _result_;}

Dynamic DynamicMatchMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DynamicMatchMap_obj > _result_ = new DynamicMatchMap_obj();
	_result_->__construct();
	return _result_;}

cpp::ArrayBase DynamicMatchMap_obj::keys( ){
	HX_STACK_FRAME("hunit.match.similar._SimilarMapMatch.DynamicMatchMap","keys",0xdfda72f7,"hunit.match.similar._SimilarMapMatch.DynamicMatchMap.keys","hunit/match/similar/SimilarMapMatch.hx",136,0xfae7f13b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(136)
	return this->keyList;
}


HX_DEFINE_DYNAMIC_FUNC0(DynamicMatchMap_obj,keys,return )

bool DynamicMatchMap_obj::exists( Dynamic key){
	HX_STACK_FRAME("hunit.match.similar._SimilarMapMatch.DynamicMatchMap","exists",0xe17c359f,"hunit.match.similar._SimilarMapMatch.DynamicMatchMap.exists","hunit/match/similar/SimilarMapMatch.hx",137,0xfae7f13b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(137)
	Dynamic tmp = key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	int tmp1 = this->keyList->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(137)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DynamicMatchMap_obj,exists,return )

::hunit::match::Match DynamicMatchMap_obj::get( Dynamic key){
	HX_STACK_FRAME("hunit.match.similar._SimilarMapMatch.DynamicMatchMap","get",0x91a340f3,"hunit.match.similar._SimilarMapMatch.DynamicMatchMap.get","hunit/match/similar/SimilarMapMatch.hx",138,0xfae7f13b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(138)
	Dynamic tmp = key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	bool tmp1 = this->exists(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(138)
	::hunit::match::Match tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(138)
	if ((tmp2)){
		HX_STACK_LINE(138)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(138)
		Dynamic tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(138)
		int tmp5 = this->keyList->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		tmp3 = this->valueList->__get(tmp5).StaticCast< ::hunit::match::Match >();
	}
	HX_STACK_LINE(138)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DynamicMatchMap_obj,get,return )

Void DynamicMatchMap_obj::set( Dynamic key,::hunit::match::Match value){
{
		HX_STACK_FRAME("hunit.match.similar._SimilarMapMatch.DynamicMatchMap","set",0x91ac5bff,"hunit.match.similar._SimilarMapMatch.DynamicMatchMap.set","hunit/match/similar/SimilarMapMatch.hx",140,0xfae7f13b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(141)
		Dynamic tmp = key;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		int tmp1 = this->keyList->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		if ((tmp2)){
			HX_STACK_LINE(142)
			Dynamic tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(142)
			int tmp4 = this->keyList->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(142)
			::hunit::match::Match tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(142)
			this->valueList[tmp4] = tmp5;
		}
		else{
			HX_STACK_LINE(144)
			Dynamic tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			this->keyList->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
			HX_STACK_LINE(145)
			::hunit::match::Match tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			this->valueList->push(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DynamicMatchMap_obj,set,(void))


DynamicMatchMap_obj::DynamicMatchMap_obj()
{
}

void DynamicMatchMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DynamicMatchMap);
	HX_MARK_MEMBER_NAME(keyList,"keyList");
	HX_MARK_MEMBER_NAME(valueList,"valueList");
	HX_MARK_END_CLASS();
}

void DynamicMatchMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keyList,"keyList");
	HX_VISIT_MEMBER_NAME(valueList,"valueList");
}

Dynamic DynamicMatchMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyList") ) { return keyList; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"valueList") ) { return valueList; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DynamicMatchMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"keyList") ) { keyList=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"valueList") ) { valueList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DynamicMatchMap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DynamicMatchMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("keyList","\x9d","\x8d","\x8c","\xa1"));
	outFields->push(HX_HCSTRING("valueList","\x6f","\xd4","\x37","\x94"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(DynamicMatchMap_obj,keyList),HX_HCSTRING("keyList","\x9d","\x8d","\x8c","\xa1")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DynamicMatchMap_obj,valueList),HX_HCSTRING("valueList","\x6f","\xd4","\x37","\x94")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("keyList","\x9d","\x8d","\x8c","\xa1"),
	HX_HCSTRING("valueList","\x6f","\xd4","\x37","\x94"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DynamicMatchMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DynamicMatchMap_obj::__mClass,"__mClass");
};

#endif

hx::Class DynamicMatchMap_obj::__mClass;

void DynamicMatchMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.similar._SimilarMapMatch.DynamicMatchMap","\x4b","\x6e","\x10","\xe8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DynamicMatchMap_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DynamicMatchMap_obj >;
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
} // end namespace _SimilarMapMatch
