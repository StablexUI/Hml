#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_sx_exceptions_LockedPropertyException
#include <sx/exceptions/LockedPropertyException.h>
#endif
namespace sx{
namespace exceptions{

Void LockedPropertyException_obj::__construct(::String __o_msg,Dynamic pos)
{
HX_STACK_FRAME("sx.exceptions.LockedPropertyException","new",0xf5a91421,"sx.exceptions.LockedPropertyException.new","sx/exceptions/LockedPropertyException.hx",18,0xed5e800f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_msg,"msg")
HX_STACK_ARG(pos,"pos")
::String msg = __o_msg.Default(HX_HCSTRING("Property cannot be changed.","\xe5","\xda","\xb1","\x9d"));
{
	HX_STACK_LINE(19)
	::String tmp = msg;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//LockedPropertyException_obj::~LockedPropertyException_obj() { }

Dynamic LockedPropertyException_obj::__CreateEmpty() { return  new LockedPropertyException_obj; }
hx::ObjectPtr< LockedPropertyException_obj > LockedPropertyException_obj::__new(::String __o_msg,Dynamic pos)
{  hx::ObjectPtr< LockedPropertyException_obj > _result_ = new LockedPropertyException_obj();
	_result_->__construct(__o_msg,pos);
	return _result_;}

Dynamic LockedPropertyException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LockedPropertyException_obj > _result_ = new LockedPropertyException_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


LockedPropertyException_obj::LockedPropertyException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LockedPropertyException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LockedPropertyException_obj::__mClass,"__mClass");
};

#endif

hx::Class LockedPropertyException_obj::__mClass;

void LockedPropertyException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.exceptions.LockedPropertyException","\xaf","\x6f","\x6a","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LockedPropertyException_obj >;
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
