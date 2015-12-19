#include <hxcpp.h>

#ifndef INCLUDED_hunit_warnings_IncompleteTestWarning
#include <hunit/warnings/IncompleteTestWarning.h>
#endif
#ifndef INCLUDED_hunit_warnings_Warning
#include <hunit/warnings/Warning.h>
#endif
namespace hunit{
namespace warnings{

Void IncompleteTestWarning_obj::__construct(::String message)
{
HX_STACK_FRAME("hunit.warnings.IncompleteTestWarning","new",0x2d3177a9,"hunit.warnings.IncompleteTestWarning.new","hunit/warnings/IncompleteTestWarning.hx",10,0xa43007c7)
HX_STACK_THIS(this)
HX_STACK_ARG(message,"message")
{
	HX_STACK_LINE(10)
	::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	super::__construct(tmp);
}
;
	return null();
}

//IncompleteTestWarning_obj::~IncompleteTestWarning_obj() { }

Dynamic IncompleteTestWarning_obj::__CreateEmpty() { return  new IncompleteTestWarning_obj; }
hx::ObjectPtr< IncompleteTestWarning_obj > IncompleteTestWarning_obj::__new(::String message)
{  hx::ObjectPtr< IncompleteTestWarning_obj > _result_ = new IncompleteTestWarning_obj();
	_result_->__construct(message);
	return _result_;}

Dynamic IncompleteTestWarning_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IncompleteTestWarning_obj > _result_ = new IncompleteTestWarning_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String IncompleteTestWarning_obj::defaultMessage( ){
	HX_STACK_FRAME("hunit.warnings.IncompleteTestWarning","defaultMessage",0x5fad8a5d,"hunit.warnings.IncompleteTestWarning.defaultMessage","hunit/warnings/IncompleteTestWarning.hx",19,0xa43007c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	return HX_HCSTRING("Incomplete test.","\xba","\x3b","\xa6","\x3c");
}



IncompleteTestWarning_obj::IncompleteTestWarning_obj()
{
}

Dynamic IncompleteTestWarning_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"defaultMessage") ) { return defaultMessage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("defaultMessage","\x06","\x8f","\x51","\xc9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IncompleteTestWarning_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IncompleteTestWarning_obj::__mClass,"__mClass");
};

#endif

hx::Class IncompleteTestWarning_obj::__mClass;

void IncompleteTestWarning_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.warnings.IncompleteTestWarning","\x37","\x6f","\x08","\xc5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IncompleteTestWarning_obj >;
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
} // end namespace warnings
