#include <hxcpp.h>

#ifndef INCLUDED_sx_ds_ObjectPool
#include <sx/ds/ObjectPool.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__APadding_APadding_Impl_
#include <sx/properties/abstracts/_APadding/APadding_Impl_.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__APadding_WeakPadding
#include <sx/properties/abstracts/_APadding/WeakPadding.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Padding
#include <sx/properties/metric/Padding.h>
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
namespace _APadding{

Void WeakPadding_obj::__construct()
{
HX_STACK_FRAME("sx.properties.abstracts._APadding.WeakPadding","new",0xdc97425d,"sx.properties.abstracts._APadding.WeakPadding.new","sx/properties/abstracts/APadding.hx",73,0xa4bcc1be)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(74)
	super::__construct();
	HX_STACK_LINE(75)
	this->onChange = null();
}
;
	return null();
}

//WeakPadding_obj::~WeakPadding_obj() { }

Dynamic WeakPadding_obj::__CreateEmpty() { return  new WeakPadding_obj; }
hx::ObjectPtr< WeakPadding_obj > WeakPadding_obj::__new()
{  hx::ObjectPtr< WeakPadding_obj > _result_ = new WeakPadding_obj();
	_result_->__construct();
	return _result_;}

Dynamic WeakPadding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeakPadding_obj > _result_ = new WeakPadding_obj();
	_result_->__construct();
	return _result_;}

Void WeakPadding_obj::dispose( ){
{
		HX_STACK_FRAME("sx.properties.abstracts._APadding.WeakPadding","dispose",0x68fd351c,"sx.properties.abstracts._APadding.WeakPadding.dispose","sx/properties/abstracts/APadding.hx",83,0xa4bcc1be)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			::sx::ds::ObjectPool tmp = ::sx::properties::abstracts::_APadding::APadding_Impl__obj::__pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(84)
			::sx::ds::ObjectPool _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(84)
			hx::IndexRef((_this->__pool).mPtr,_this->length) = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(84)
			(_this->length)++;
		}
		HX_STACK_LINE(86)
		this->weak = false;
	}
return null();
}


Void WeakPadding_obj::__invokeOnChange( ::String units,Float value){
{
		HX_STACK_FRAME("sx.properties.abstracts._APadding.WeakPadding","__invokeOnChange",0x9aded28a,"sx.properties.abstracts._APadding.WeakPadding.__invokeOnChange","sx/properties/abstracts/APadding.hx",94,0xa4bcc1be)
		HX_STACK_THIS(this)
		HX_STACK_ARG(units,"units")
		HX_STACK_ARG(value,"value")
	}
return null();
}



WeakPadding_obj::WeakPadding_obj()
{
}

Dynamic WeakPadding_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(WeakPadding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeakPadding_obj::__mClass,"__mClass");
};

#endif

hx::Class WeakPadding_obj::__mClass;

void WeakPadding_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.abstracts._APadding.WeakPadding","\xeb","\xcf","\x1d","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WeakPadding_obj >;
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
} // end namespace _APadding
