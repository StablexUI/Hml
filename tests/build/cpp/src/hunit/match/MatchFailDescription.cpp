#include <hxcpp.h>

#ifndef INCLUDED_hunit_match_MatchFailDescription
#include <hunit/match/MatchFailDescription.h>
#endif
namespace hunit{
namespace match{

Void MatchFailDescription_obj::__construct(::String expected,::String actual)
{
HX_STACK_FRAME("hunit.match.MatchFailDescription","new",0xd1492316,"hunit.match.MatchFailDescription.new","hunit/match/MatchFailDescription.hx",22,0xd73d7298)
HX_STACK_THIS(this)
HX_STACK_ARG(expected,"expected")
HX_STACK_ARG(actual,"actual")
{
	HX_STACK_LINE(23)
	this->expected = expected;
	HX_STACK_LINE(24)
	this->actual = actual;
}
;
	return null();
}

//MatchFailDescription_obj::~MatchFailDescription_obj() { }

Dynamic MatchFailDescription_obj::__CreateEmpty() { return  new MatchFailDescription_obj; }
hx::ObjectPtr< MatchFailDescription_obj > MatchFailDescription_obj::__new(::String expected,::String actual)
{  hx::ObjectPtr< MatchFailDescription_obj > _result_ = new MatchFailDescription_obj();
	_result_->__construct(expected,actual);
	return _result_;}

Dynamic MatchFailDescription_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MatchFailDescription_obj > _result_ = new MatchFailDescription_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


MatchFailDescription_obj::MatchFailDescription_obj()
{
}

void MatchFailDescription_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MatchFailDescription);
	HX_MARK_MEMBER_NAME(expected,"expected");
	HX_MARK_MEMBER_NAME(actual,"actual");
	HX_MARK_END_CLASS();
}

void MatchFailDescription_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(expected,"expected");
	HX_VISIT_MEMBER_NAME(actual,"actual");
}

Dynamic MatchFailDescription_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"actual") ) { return actual; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"expected") ) { return expected; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MatchFailDescription_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"actual") ) { actual=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"expected") ) { expected=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MatchFailDescription_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MatchFailDescription_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("expected","\x78","\x2e","\x30","\x40"));
	outFields->push(HX_HCSTRING("actual","\x8e","\x4a","\x4f","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(MatchFailDescription_obj,expected),HX_HCSTRING("expected","\x78","\x2e","\x30","\x40")},
	{hx::fsString,(int)offsetof(MatchFailDescription_obj,actual),HX_HCSTRING("actual","\x8e","\x4a","\x4f","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("expected","\x78","\x2e","\x30","\x40"),
	HX_HCSTRING("actual","\x8e","\x4a","\x4f","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MatchFailDescription_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MatchFailDescription_obj::__mClass,"__mClass");
};

#endif

hx::Class MatchFailDescription_obj::__mClass;

void MatchFailDescription_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.match.MatchFailDescription","\x24","\xa0","\x50","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MatchFailDescription_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MatchFailDescription_obj >;
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
