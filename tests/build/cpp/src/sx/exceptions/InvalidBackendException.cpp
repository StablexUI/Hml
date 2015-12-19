#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_sx_exceptions_InvalidBackendException
#include <sx/exceptions/InvalidBackendException.h>
#endif
#ifndef INCLUDED_sx_exceptions_SxException
#include <sx/exceptions/SxException.h>
#endif
namespace sx{
namespace exceptions{

Void InvalidBackendException_obj::__construct(::String __o_msg,Dynamic pos)
{
HX_STACK_FRAME("sx.exceptions.InvalidBackendException","new",0x86ac2f03,"sx.exceptions.InvalidBackendException.new","sx/exceptions/InvalidBackendException.hx",11,0x2087d76d)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_msg,"msg")
HX_STACK_ARG(pos,"pos")
::String msg = __o_msg.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(11)
	::String tmp = msg;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Dynamic tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//InvalidBackendException_obj::~InvalidBackendException_obj() { }

Dynamic InvalidBackendException_obj::__CreateEmpty() { return  new InvalidBackendException_obj; }
hx::ObjectPtr< InvalidBackendException_obj > InvalidBackendException_obj::__new(::String __o_msg,Dynamic pos)
{  hx::ObjectPtr< InvalidBackendException_obj > _result_ = new InvalidBackendException_obj();
	_result_->__construct(__o_msg,pos);
	return _result_;}

Dynamic InvalidBackendException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InvalidBackendException_obj > _result_ = new InvalidBackendException_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


InvalidBackendException_obj::InvalidBackendException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InvalidBackendException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InvalidBackendException_obj::__mClass,"__mClass");
};

#endif

hx::Class InvalidBackendException_obj::__mClass;

void InvalidBackendException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.exceptions.InvalidBackendException","\x91","\xf1","\x89","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< InvalidBackendException_obj >;
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

} // end namespace sx
} // end namespace exceptions
