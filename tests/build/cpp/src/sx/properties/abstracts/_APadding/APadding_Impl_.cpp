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

Void APadding_Impl__obj::__construct()
{
	return null();
}

//APadding_Impl__obj::~APadding_Impl__obj() { }

Dynamic APadding_Impl__obj::__CreateEmpty() { return  new APadding_Impl__obj; }
hx::ObjectPtr< APadding_Impl__obj > APadding_Impl__obj::__new()
{  hx::ObjectPtr< APadding_Impl__obj > _result_ = new APadding_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic APadding_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< APadding_Impl__obj > _result_ = new APadding_Impl__obj();
	_result_->__construct();
	return _result_;}

::sx::ds::ObjectPool APadding_Impl__obj::__pool;

::sx::properties::metric::Padding APadding_Impl__obj::fromFloat( Float v){
	HX_STACK_FRAME("sx.properties.abstracts._APadding.APadding_Impl_","fromFloat",0xb70f8b02,"sx.properties.abstracts._APadding.APadding_Impl_.fromFloat","sx/properties/abstracts/APadding.hx",24,0xa4bcc1be)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(25)
	::sx::properties::abstracts::_APadding::WeakPadding tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::sx::ds::ObjectPool tmp1 = ::sx::properties::abstracts::_APadding::APadding_Impl__obj::__pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		::sx::ds::ObjectPool _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(25)
		bool tmp2 = (_this->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		if ((tmp2)){
			HX_STACK_LINE(25)
			(_this->length)--;
			HX_STACK_LINE(25)
			tmp = _this->__pool->__GetItem(_this->length);
		}
		else{
			HX_STACK_LINE(25)
			tmp = null();
		}
	}
	HX_STACK_LINE(25)
	::sx::properties::abstracts::_APadding::WeakPadding weakPadding = tmp;		HX_STACK_VAR(weakPadding,"weakPadding");
	HX_STACK_LINE(26)
	bool tmp1 = (weakPadding == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	if ((tmp1)){
		HX_STACK_LINE(26)
		::sx::properties::abstracts::_APadding::WeakPadding tmp2 = ::sx::properties::abstracts::_APadding::WeakPadding_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		weakPadding = tmp2;
	}
	HX_STACK_LINE(27)
	weakPadding->weak = true;
	HX_STACK_LINE(28)
	Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	weakPadding->set_dip(tmp2);
	HX_STACK_LINE(30)
	::sx::properties::abstracts::_APadding::WeakPadding tmp3 = weakPadding;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(APadding_Impl__obj,fromFloat,return )

::sx::signals::Signal APadding_Impl__obj::get_onChange( ::sx::properties::metric::Padding this1){
	HX_STACK_FRAME("sx.properties.abstracts._APadding.APadding_Impl_","get_onChange",0x8d1e7ec8,"sx.properties.abstracts._APadding.APadding_Impl_.get_onChange","sx/properties/abstracts/APadding.hx",50,0xa4bcc1be)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(50)
	::sx::signals::Signal tmp = this1->onComponentsChange;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(APadding_Impl__obj,get_onChange,return )

Float APadding_Impl__obj::set_dip( ::sx::properties::metric::Padding this1,Float v){
	HX_STACK_FRAME("sx.properties.abstracts._APadding.APadding_Impl_","set_dip",0x2284461e,"sx.properties.abstracts._APadding.APadding_Impl_.set_dip","sx/properties/abstracts/APadding.hx",53,0xa4bcc1be)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(53)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	Float tmp1 = this1->set_dip(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(APadding_Impl__obj,set_dip,return )

Float APadding_Impl__obj::set_px( ::sx::properties::metric::Padding this1,Float v){
	HX_STACK_FRAME("sx.properties.abstracts._APadding.APadding_Impl_","set_px",0xe3749495,"sx.properties.abstracts._APadding.APadding_Impl_.set_px","sx/properties/abstracts/APadding.hx",54,0xa4bcc1be)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(54)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	Float tmp1 = this1->set_px(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(APadding_Impl__obj,set_px,return )

Float APadding_Impl__obj::set_pct( ::sx::properties::metric::Padding this1,Float v){
	HX_STACK_FRAME("sx.properties.abstracts._APadding.APadding_Impl_","set_pct",0x228d5bf4,"sx.properties.abstracts._APadding.APadding_Impl_.set_pct","sx/properties/abstracts/APadding.hx",55,0xa4bcc1be)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(55)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	Float tmp1 = this1->set_pct(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(APadding_Impl__obj,set_pct,return )


APadding_Impl__obj::APadding_Impl__obj()
{
}

bool APadding_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"set_px") ) { outValue = set_px_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_dip") ) { outValue = set_dip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_pct") ) { outValue = set_pct_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromFloat") ) { outValue = fromFloat_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_onChange") ) { outValue = get_onChange_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::sx::ds::ObjectPool*/ ,(void *) &APadding_Impl__obj::__pool,HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(APadding_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(APadding_Impl__obj::__pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(APadding_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(APadding_Impl__obj::__pool,"__pool");
};

#endif

hx::Class APadding_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"),
	HX_HCSTRING("fromFloat","\xd2","\xaf","\x1f","\xb7"),
	HX_HCSTRING("get_onChange","\xf8","\x3b","\x39","\x4c"),
	HX_HCSTRING("set_dip","\xee","\x96","\xc2","\x19"),
	HX_HCSTRING("set_px","\xc5","\x4d","\x78","\x6f"),
	HX_HCSTRING("set_pct","\xc4","\xac","\xcb","\x19"),
	::String(null()) };

void APadding_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.abstracts._APadding.APadding_Impl_","\x9e","\x5f","\xbb","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &APadding_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< APadding_Impl__obj >;
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

void APadding_Impl__obj::__boot()
{
	__pool= ::sx::ds::ObjectPool_obj::__new();
}

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _APadding
