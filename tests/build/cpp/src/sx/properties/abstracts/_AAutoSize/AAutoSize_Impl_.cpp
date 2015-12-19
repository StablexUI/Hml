#include <hxcpp.h>

#ifndef INCLUDED_sx_ds_ObjectPool
#include <sx/ds/ObjectPool.h>
#endif
#ifndef INCLUDED_sx_properties_AutoSize
#include <sx/properties/AutoSize.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__AAutoSize_AAutoSize_Impl_
#include <sx/properties/abstracts/_AAutoSize/AAutoSize_Impl_.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__AAutoSize_WeakAutoSize
#include <sx/properties/abstracts/_AAutoSize/WeakAutoSize.h>
#endif
namespace sx{
namespace properties{
namespace abstracts{
namespace _AAutoSize{

Void AAutoSize_Impl__obj::__construct()
{
	return null();
}

//AAutoSize_Impl__obj::~AAutoSize_Impl__obj() { }

Dynamic AAutoSize_Impl__obj::__CreateEmpty() { return  new AAutoSize_Impl__obj; }
hx::ObjectPtr< AAutoSize_Impl__obj > AAutoSize_Impl__obj::__new()
{  hx::ObjectPtr< AAutoSize_Impl__obj > _result_ = new AAutoSize_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic AAutoSize_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AAutoSize_Impl__obj > _result_ = new AAutoSize_Impl__obj();
	_result_->__construct();
	return _result_;}

::sx::ds::ObjectPool AAutoSize_Impl__obj::__pool;

::sx::properties::AutoSize AAutoSize_Impl__obj::fromBool( bool v){
	HX_STACK_FRAME("sx.properties.abstracts._AAutoSize.AAutoSize_Impl_","fromBool",0xb570d0be,"sx.properties.abstracts._AAutoSize.AAutoSize_Impl_.fromBool","sx/properties/abstracts/AAutoSize.hx",23,0x1fa1ff9d)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(24)
	::sx::properties::abstracts::_AAutoSize::WeakAutoSize tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		::sx::ds::ObjectPool tmp1 = ::sx::properties::abstracts::_AAutoSize::AAutoSize_Impl__obj::__pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		::sx::ds::ObjectPool _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(24)
		bool tmp2 = (_this->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		if ((tmp2)){
			HX_STACK_LINE(24)
			(_this->length)--;
			HX_STACK_LINE(24)
			tmp = _this->__pool->__GetItem(_this->length);
		}
		else{
			HX_STACK_LINE(24)
			tmp = null();
		}
	}
	HX_STACK_LINE(24)
	::sx::properties::abstracts::_AAutoSize::WeakAutoSize weakAutoSize = tmp;		HX_STACK_VAR(weakAutoSize,"weakAutoSize");
	HX_STACK_LINE(25)
	bool tmp1 = (weakAutoSize == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	if ((tmp1)){
		HX_STACK_LINE(25)
		::sx::properties::abstracts::_AAutoSize::WeakAutoSize tmp2 = ::sx::properties::abstracts::_AAutoSize::WeakAutoSize_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		weakAutoSize = tmp2;
	}
	HX_STACK_LINE(26)
	weakAutoSize->weak = true;
	HX_STACK_LINE(27)
	bool tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	weakAutoSize->set_width(tmp2);
	HX_STACK_LINE(28)
	bool tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	weakAutoSize->set_height(tmp3);
	HX_STACK_LINE(30)
	::sx::properties::abstracts::_AAutoSize::WeakAutoSize tmp4 = weakAutoSize;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AAutoSize_Impl__obj,fromBool,return )


AAutoSize_Impl__obj::AAutoSize_Impl__obj()
{
}

bool AAutoSize_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromBool") ) { outValue = fromBool_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::sx::ds::ObjectPool*/ ,(void *) &AAutoSize_Impl__obj::__pool,HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AAutoSize_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AAutoSize_Impl__obj::__pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AAutoSize_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AAutoSize_Impl__obj::__pool,"__pool");
};

#endif

hx::Class AAutoSize_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"),
	HX_HCSTRING("fromBool","\xb4","\x52","\xe7","\x9e"),
	::String(null()) };

void AAutoSize_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.abstracts._AAutoSize.AAutoSize_Impl_","\xa4","\xcb","\x5a","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AAutoSize_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AAutoSize_Impl__obj >;
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

void AAutoSize_Impl__obj::__boot()
{
	__pool= ::sx::ds::ObjectPool_obj::__new();
}

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _AAutoSize
