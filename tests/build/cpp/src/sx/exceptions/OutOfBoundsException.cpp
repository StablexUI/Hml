#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_sx_exceptions_OutOfBoundsException
#include <sx/exceptions/OutOfBoundsException.h>
#endif
#ifndef INCLUDED_sx_exceptions_SxException
#include <sx/exceptions/SxException.h>
#endif
namespace sx{
namespace exceptions{

Void OutOfBoundsException_obj::__construct(::String __o_msg,Dynamic pos)
{
HX_STACK_FRAME("sx.exceptions.OutOfBoundsException","new",0xd4e8f308,"sx.exceptions.OutOfBoundsException.new","sx/exceptions/OutOfBoundsException.hx",19,0x1ff28bc8)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_msg,"msg")
HX_STACK_ARG(pos,"pos")
::String msg = __o_msg.Default(HX_HCSTRING("Provided argument does not fit required bounds.","\x55","\x24","\x22","\x07"));
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

//OutOfBoundsException_obj::~OutOfBoundsException_obj() { }

Dynamic OutOfBoundsException_obj::__CreateEmpty() { return  new OutOfBoundsException_obj; }
hx::ObjectPtr< OutOfBoundsException_obj > OutOfBoundsException_obj::__new(::String __o_msg,Dynamic pos)
{  hx::ObjectPtr< OutOfBoundsException_obj > _result_ = new OutOfBoundsException_obj();
	_result_->__construct(__o_msg,pos);
	return _result_;}

Dynamic OutOfBoundsException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OutOfBoundsException_obj > _result_ = new OutOfBoundsException_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


OutOfBoundsException_obj::OutOfBoundsException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OutOfBoundsException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OutOfBoundsException_obj::__mClass,"__mClass");
};

#endif

hx::Class OutOfBoundsException_obj::__mClass;

void OutOfBoundsException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.exceptions.OutOfBoundsException","\x16","\x0f","\x29","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OutOfBoundsException_obj >;
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
