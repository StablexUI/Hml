#include <hxcpp.h>

#ifndef INCLUDED_sx_ds_ObjectPool
#include <sx/ds/ObjectPool.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__ASizeSetterProxy_ASizeSetterProxy_Impl_
#include <sx/properties/abstracts/_ASizeSetterProxy/ASizeSetterProxy_Impl_.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__ASizeSetterProxy_WeakSizeSetterProxy
#include <sx/properties/abstracts/_ASizeSetterProxy/WeakSizeSetterProxy.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
#ifndef INCLUDED_sx_properties_metric_SizeSetterProxy
#include <sx/properties/metric/SizeSetterProxy.h>
#endif
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
namespace sx{
namespace properties{
namespace abstracts{
namespace _ASizeSetterProxy{

Void WeakSizeSetterProxy_obj::__construct()
{
HX_STACK_FRAME("sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy","new",0x43781797,"sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy.new","sx/properties/abstracts/ASizeSetterProxy.hx",63,0xb276f181)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(64)
	super::__construct(null());
	HX_STACK_LINE(65)
	this->onChange = null();
}
;
	return null();
}

//WeakSizeSetterProxy_obj::~WeakSizeSetterProxy_obj() { }

Dynamic WeakSizeSetterProxy_obj::__CreateEmpty() { return  new WeakSizeSetterProxy_obj; }
hx::ObjectPtr< WeakSizeSetterProxy_obj > WeakSizeSetterProxy_obj::__new()
{  hx::ObjectPtr< WeakSizeSetterProxy_obj > _result_ = new WeakSizeSetterProxy_obj();
	_result_->__construct();
	return _result_;}

Dynamic WeakSizeSetterProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeakSizeSetterProxy_obj > _result_ = new WeakSizeSetterProxy_obj();
	_result_->__construct();
	return _result_;}

Void WeakSizeSetterProxy_obj::dispose( ){
{
		HX_STACK_FRAME("sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy","dispose",0x7eaa2f56,"sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy.dispose","sx/properties/abstracts/ASizeSetterProxy.hx",73,0xb276f181)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			::sx::ds::ObjectPool tmp = ::sx::properties::abstracts::_ASizeSetterProxy::ASizeSetterProxy_Impl__obj::__pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(74)
			::sx::ds::ObjectPool _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(74)
			hx::IndexRef((_this->__pool).mPtr,_this->length) = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(74)
			(_this->length)++;
		}
		HX_STACK_LINE(76)
		this->weak = false;
	}
return null();
}


Void WeakSizeSetterProxy_obj::__invokeOnChange( ::String units,Float value){
{
		HX_STACK_FRAME("sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy","__invokeOnChange",0xb9a1c110,"sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy.__invokeOnChange","sx/properties/abstracts/ASizeSetterProxy.hx",84,0xb276f181)
		HX_STACK_THIS(this)
		HX_STACK_ARG(units,"units")
		HX_STACK_ARG(value,"value")
	}
return null();
}



WeakSizeSetterProxy_obj::WeakSizeSetterProxy_obj()
{
}

Dynamic WeakSizeSetterProxy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__invokeOnChange") ) { return __invokeOnChange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("__invokeOnChange","\xa7","\x7e","\xe9","\x3d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeakSizeSetterProxy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeakSizeSetterProxy_obj::__mClass,"__mClass");
};

#endif

hx::Class WeakSizeSetterProxy_obj::__mClass;

void WeakSizeSetterProxy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy","\x25","\x00","\x69","\xee");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WeakSizeSetterProxy_obj >;
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
} // end namespace _ASizeSetterProxy
