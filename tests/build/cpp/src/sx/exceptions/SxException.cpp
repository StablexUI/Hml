#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_sx_exceptions_SxException
#include <sx/exceptions/SxException.h>
#endif
namespace sx{
namespace exceptions{

Void SxException_obj::__construct(::String __o_msg,Dynamic pos)
{
HX_STACK_FRAME("sx.exceptions.SxException","new",0xedbcc0bb,"sx.exceptions.SxException.new","sx/exceptions/SxException.hx",18,0x9a60f4b5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_msg,"msg")
HX_STACK_ARG(pos,"pos")
::String msg = __o_msg.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(19)
	::String tmp = msg;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(20)
	Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("SxException.hx","\x34","\x36","\xea","\x92"),20,HX_HCSTRING("sx.exceptions.SxException","\x49","\x47","\x11","\xf7"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	this->truncateStack(tmp2,(int)1);
}
;
	return null();
}

//SxException_obj::~SxException_obj() { }

Dynamic SxException_obj::__CreateEmpty() { return  new SxException_obj; }
hx::ObjectPtr< SxException_obj > SxException_obj::__new(::String __o_msg,Dynamic pos)
{  hx::ObjectPtr< SxException_obj > _result_ = new SxException_obj();
	_result_->__construct(__o_msg,pos);
	return _result_;}

Dynamic SxException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SxException_obj > _result_ = new SxException_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


SxException_obj::SxException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SxException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SxException_obj::__mClass,"__mClass");
};

#endif

hx::Class SxException_obj::__mClass;

void SxException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.exceptions.SxException","\x49","\x47","\x11","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SxException_obj >;
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
