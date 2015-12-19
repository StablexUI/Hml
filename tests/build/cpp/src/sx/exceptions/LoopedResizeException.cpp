#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_sx_exceptions_LoopedResizeException
#include <sx/exceptions/LoopedResizeException.h>
#endif
#ifndef INCLUDED_sx_exceptions_SxException
#include <sx/exceptions/SxException.h>
#endif
namespace sx{
namespace exceptions{

Void LoopedResizeException_obj::__construct(::String __o_msg,Dynamic pos)
{
HX_STACK_FRAME("sx.exceptions.LoopedResizeException","new",0xa9c370c9,"sx.exceptions.LoopedResizeException.new","sx/exceptions/LoopedResizeException.hx",19,0xdc8fc867)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_msg,"msg")
HX_STACK_ARG(pos,"pos")
::String msg = __o_msg.Default(HX_HCSTRING("Possible endless resizing loop detected.","\xc4","\x91","\xde","\x24"));
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

//LoopedResizeException_obj::~LoopedResizeException_obj() { }

Dynamic LoopedResizeException_obj::__CreateEmpty() { return  new LoopedResizeException_obj; }
hx::ObjectPtr< LoopedResizeException_obj > LoopedResizeException_obj::__new(::String __o_msg,Dynamic pos)
{  hx::ObjectPtr< LoopedResizeException_obj > _result_ = new LoopedResizeException_obj();
	_result_->__construct(__o_msg,pos);
	return _result_;}

Dynamic LoopedResizeException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoopedResizeException_obj > _result_ = new LoopedResizeException_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


LoopedResizeException_obj::LoopedResizeException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoopedResizeException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoopedResizeException_obj::__mClass,"__mClass");
};

#endif

hx::Class LoopedResizeException_obj::__mClass;

void LoopedResizeException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.exceptions.LoopedResizeException","\x57","\x58","\x9f","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LoopedResizeException_obj >;
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
