#include <hxcpp.h>

#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
#ifndef INCLUDED_hunit_match_ObjectCache
#include <hunit/match/ObjectCache.h>
#endif
#ifndef INCLUDED_hunit_match_SimilarMatch
#include <hunit/match/SimilarMatch.h>
#endif
namespace hunit{
namespace match{

Void ObjectCache_obj::__construct()
{
HX_STACK_FRAME("hunit.match.ObjectCache","new",0xba09f12a,"hunit.match.ObjectCache.new","hunit/match/SimilarMatch.hx",184,0x4195a717)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(185)
	this->keys = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(186)
	this->values = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//ObjectCache_obj::~ObjectCache_obj() { }

Dynamic ObjectCache_obj::__CreateEmpty() { return  new ObjectCache_obj; }
hx::ObjectPtr< ObjectCache_obj > ObjectCache_obj::__new()
{  hx::ObjectPtr< ObjectCache_obj > _result_ = new ObjectCache_obj();
	_result_->__construct();
	return _result_;}

Dynamic ObjectCache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectCache_obj > _result_ = new ObjectCache_obj();
	_result_->__construct();
	return _result_;}

::hunit::match::SimilarMatch ObjectCache_obj::get( Dynamic key){
	HX_STACK_FRAME("hunit.match.ObjectCache","get",0xba04a160,"hunit.match.ObjectCache.get","hunit/match/SimilarMatch.hx",189,0x4195a717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(190)
	Dynamic tmp = key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	int tmp1 = this->keys->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	bool tmp2 = (tmp1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	if ((tmp2)){
		HX_STACK_LINE(191)
		return null();
	}
	else{
		HX_STACK_LINE(193)
		Dynamic tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		int tmp4 = this->keys->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(193)
		::hunit::match::SimilarMatch tmp5 = this->values->__get(tmp4).StaticCast< ::hunit::match::SimilarMatch >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(193)
		return tmp5;
	}
	HX_STACK_LINE(190)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectCache_obj,get,return )

Void ObjectCache_obj::set( Dynamic key,::hunit::match::SimilarMatch value){
{
		HX_STACK_FRAME("hunit.match.ObjectCache","set",0xba0dbc6c,"hunit.match.ObjectCache.set","hunit/match/SimilarMatch.hx",197,0x4195a717)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(198)
		Dynamic tmp = key;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		int tmp1 = this->keys->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		if ((tmp2)){
			HX_STACK_LINE(199)
			Dynamic tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(199)
			int tmp4 = this->keys->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(199)
			::hunit::match::SimilarMatch tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(199)
			this->values[tmp4] = tmp5;
		}
		else{
			HX_STACK_LINE(201)
			Dynamic tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(201)
			this->keys->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
			HX_STACK_LINE(202)
			::hunit::match::SimilarMatch tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(202)
			this->values->push(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectCache_obj,set,(void))


ObjectCache_obj::ObjectCache_obj()
{
}

void ObjectCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectCache);
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_END_CLASS();
}

void ObjectCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keys,"keys");
	HX_VISIT_MEMBER_NAME(values,"values");
}

Dynamic ObjectCache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return values; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectCache_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ObjectCache_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ObjectCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"));
	outFields->push(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectCache_obj,keys),HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectCache_obj,values),HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectCache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectCache_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectCache_obj::__mClass;

void ObjectCache_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.ObjectCache","\x38","\xd4","\x63","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ObjectCache_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectCache_obj >;
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
