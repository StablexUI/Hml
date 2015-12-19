#include <hxcpp.h>

#ifndef INCLUDED_sx_ds_ObjectPool
#include <sx/ds/ObjectPool.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__ASize_ASize_Impl_
#include <sx/properties/abstracts/_ASize/ASize_Impl_.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__ASize_WeakSize
#include <sx/properties/abstracts/_ASize/WeakSize.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
namespace sx{
namespace properties{
namespace abstracts{
namespace _ASize{

Void WeakSize_obj::__construct()
{
HX_STACK_FRAME("sx.properties.abstracts._ASize.WeakSize","new",0xf00f02e7,"sx.properties.abstracts._ASize.WeakSize.new","sx/properties/abstracts/ASize.hx",112,0xa6f997cc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(113)
	super::__construct(null());
	HX_STACK_LINE(114)
	this->onChange = null();
}
;
	return null();
}

//WeakSize_obj::~WeakSize_obj() { }

Dynamic WeakSize_obj::__CreateEmpty() { return  new WeakSize_obj; }
hx::ObjectPtr< WeakSize_obj > WeakSize_obj::__new()
{  hx::ObjectPtr< WeakSize_obj > _result_ = new WeakSize_obj();
	_result_->__construct();
	return _result_;}

Dynamic WeakSize_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeakSize_obj > _result_ = new WeakSize_obj();
	_result_->__construct();
	return _result_;}

Void WeakSize_obj::dispose( ){
{
		HX_STACK_FRAME("sx.properties.abstracts._ASize.WeakSize","dispose",0x68a102a6,"sx.properties.abstracts._ASize.WeakSize.dispose","sx/properties/abstracts/ASize.hx",122,0xa6f997cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			::sx::ds::ObjectPool tmp = ::sx::properties::abstracts::_ASize::ASize_Impl__obj::__pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(123)
			::sx::ds::ObjectPool _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(123)
			hx::IndexRef((_this->__pool).mPtr,_this->length) = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(123)
			(_this->length)++;
		}
		HX_STACK_LINE(125)
		this->weak = false;
	}
return null();
}


Void WeakSize_obj::__invokeOnChange( ::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.properties.abstracts._ASize.WeakSize","__invokeOnChange",0x58fe03c0,"sx.properties.abstracts._ASize.WeakSize.__invokeOnChange","sx/properties/abstracts/ASize.hx",133,0xa6f997cc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
	}
return null();
}



WeakSize_obj::WeakSize_obj()
{
}

Dynamic WeakSize_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(WeakSize_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeakSize_obj::__mClass,"__mClass");
};

#endif

hx::Class WeakSize_obj::__mClass;

void WeakSize_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.abstracts._ASize.WeakSize","\x75","\x03","\xb4","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WeakSize_obj >;
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
} // end namespace _ASize
