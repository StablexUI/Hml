#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_hunit_assert_BaseAssert
#include <hunit/assert/BaseAssert.h>
#endif
#ifndef INCLUDED_hunit_exceptions_AssertException
#include <hunit/exceptions/AssertException.h>
#endif
#ifndef INCLUDED_hunit_exceptions_TestFailException
#include <hunit/exceptions/TestFailException.h>
#endif
namespace hunit{
namespace _assert{

Void BaseAssert_obj::__construct(Dynamic pos)
{
HX_STACK_FRAME("hunit.assert.BaseAssert","new",0x23906bef,"hunit.assert.BaseAssert.new","hunit/assert/BaseAssert.hx",26,0x89be6041)
HX_STACK_THIS(this)
HX_STACK_ARG(pos,"pos")
{
	HX_STACK_LINE(26)
	this->pos = pos;
}
;
	return null();
}

//BaseAssert_obj::~BaseAssert_obj() { }

Dynamic BaseAssert_obj::__CreateEmpty() { return  new BaseAssert_obj; }
hx::ObjectPtr< BaseAssert_obj > BaseAssert_obj::__new(Dynamic pos)
{  hx::ObjectPtr< BaseAssert_obj > _result_ = new BaseAssert_obj();
	_result_->__construct(pos);
	return _result_;}

Dynamic BaseAssert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseAssert_obj > _result_ = new BaseAssert_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void BaseAssert_obj::validate( ){
{
		HX_STACK_FRAME("hunit.assert.BaseAssert","validate",0x261deea7,"hunit.assert.BaseAssert.validate","hunit/assert/BaseAssert.hx",36,0x89be6041)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		HX_STACK_DO_THROW(HX_HCSTRING("To be overriden","\xaa","\x65","\x14","\xca"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseAssert_obj,validate,(void))

Void BaseAssert_obj::failed( ::String message){
{
		HX_STACK_FRAME("hunit.assert.BaseAssert","failed",0x44da8d8e,"hunit.assert.BaseAssert.failed","hunit/assert/BaseAssert.hx",45,0x89be6041)
		HX_STACK_THIS(this)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(46)
		::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		Dynamic tmp1 = this->pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		::hunit::exceptions::AssertException tmp2 = ::hunit::exceptions::AssertException_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		HX_STACK_DO_THROW(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BaseAssert_obj,failed,(void))


BaseAssert_obj::BaseAssert_obj()
{
}

void BaseAssert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseAssert);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void BaseAssert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

Dynamic BaseAssert_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { return failed_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BaseAssert_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BaseAssert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BaseAssert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BaseAssert_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseAssert_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseAssert_obj::__mClass,"__mClass");
};

#endif

hx::Class BaseAssert_obj::__mClass;

void BaseAssert_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.assert.BaseAssert","\x7d","\x48","\xfa","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BaseAssert_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BaseAssert_obj >;
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
} // end namespace assert
