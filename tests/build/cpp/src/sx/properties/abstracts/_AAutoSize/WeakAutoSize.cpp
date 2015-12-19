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
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
namespace sx{
namespace properties{
namespace abstracts{
namespace _AAutoSize{

Void WeakAutoSize_obj::__construct()
{
HX_STACK_FRAME("sx.properties.abstracts._AAutoSize.WeakAutoSize","new",0x703ac307,"sx.properties.abstracts._AAutoSize.WeakAutoSize.new","sx/properties/abstracts/AAutoSize.hx",50,0x1fa1ff9d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(51)
	super::__construct(null());
	HX_STACK_LINE(52)
	this->onChange = null();
}
;
	return null();
}

//WeakAutoSize_obj::~WeakAutoSize_obj() { }

Dynamic WeakAutoSize_obj::__CreateEmpty() { return  new WeakAutoSize_obj; }
hx::ObjectPtr< WeakAutoSize_obj > WeakAutoSize_obj::__new()
{  hx::ObjectPtr< WeakAutoSize_obj > _result_ = new WeakAutoSize_obj();
	_result_->__construct();
	return _result_;}

Dynamic WeakAutoSize_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeakAutoSize_obj > _result_ = new WeakAutoSize_obj();
	_result_->__construct();
	return _result_;}

Void WeakAutoSize_obj::dispose( ){
{
		HX_STACK_FRAME("sx.properties.abstracts._AAutoSize.WeakAutoSize","dispose",0x367f52c6,"sx.properties.abstracts._AAutoSize.WeakAutoSize.dispose","sx/properties/abstracts/AAutoSize.hx",60,0x1fa1ff9d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			::sx::ds::ObjectPool tmp = ::sx::properties::abstracts::_AAutoSize::AAutoSize_Impl__obj::__pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(61)
			::sx::ds::ObjectPool _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(61)
			hx::IndexRef((_this->__pool).mPtr,_this->length) = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(61)
			(_this->length)++;
		}
		HX_STACK_LINE(63)
		this->weak = false;
	}
return null();
}



WeakAutoSize_obj::WeakAutoSize_obj()
{
}

Dynamic WeakAutoSize_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeakAutoSize_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeakAutoSize_obj::__mClass,"__mClass");
};

#endif

hx::Class WeakAutoSize_obj::__mClass;

void WeakAutoSize_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.abstracts._AAutoSize.WeakAutoSize","\x95","\x33","\xb5","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WeakAutoSize_obj >;
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
} // end namespace properties
} // end namespace abstracts
} // end namespace _AAutoSize
