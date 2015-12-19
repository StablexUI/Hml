#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_sx_exceptions_NotChildException
#include <sx/exceptions/NotChildException.h>
#endif
#ifndef INCLUDED_sx_exceptions_SxException
#include <sx/exceptions/SxException.h>
#endif
namespace sx{
namespace exceptions{

Void NotChildException_obj::__construct(::String __o_msg,Dynamic pos)
{
HX_STACK_FRAME("sx.exceptions.NotChildException","new",0xecbfdc97,"sx.exceptions.NotChildException.new","sx/exceptions/NotChildException.hx",19,0x0e6b0059)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_msg,"msg")
HX_STACK_ARG(pos,"pos")
::String msg = __o_msg.Default(HX_HCSTRING("Provided widget is not a child of this one.","\xa8","\xcc","\xa7","\x73"));
{
	HX_STACK_LINE(20)
	::String tmp = msg;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	Dynamic tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//NotChildException_obj::~NotChildException_obj() { }

Dynamic NotChildException_obj::__CreateEmpty() { return  new NotChildException_obj; }
hx::ObjectPtr< NotChildException_obj > NotChildException_obj::__new(::String __o_msg,Dynamic pos)
{  hx::ObjectPtr< NotChildException_obj > _result_ = new NotChildException_obj();
	_result_->__construct(__o_msg,pos);
	return _result_;}

Dynamic NotChildException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NotChildException_obj > _result_ = new NotChildException_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


NotChildException_obj::NotChildException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NotChildException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NotChildException_obj::__mClass,"__mClass");
};

#endif

hx::Class NotChildException_obj::__mClass;

void NotChildException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.exceptions.NotChildException","\x25","\x45","\x2a","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NotChildException_obj >;
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
