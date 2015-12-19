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
namespace sx{
namespace properties{
namespace abstracts{
namespace _ASizeSetterProxy{

Void ASizeSetterProxy_Impl__obj::__construct()
{
	return null();
}

//ASizeSetterProxy_Impl__obj::~ASizeSetterProxy_Impl__obj() { }

Dynamic ASizeSetterProxy_Impl__obj::__CreateEmpty() { return  new ASizeSetterProxy_Impl__obj; }
hx::ObjectPtr< ASizeSetterProxy_Impl__obj > ASizeSetterProxy_Impl__obj::__new()
{  hx::ObjectPtr< ASizeSetterProxy_Impl__obj > _result_ = new ASizeSetterProxy_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ASizeSetterProxy_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ASizeSetterProxy_Impl__obj > _result_ = new ASizeSetterProxy_Impl__obj();
	_result_->__construct();
	return _result_;}

::sx::ds::ObjectPool ASizeSetterProxy_Impl__obj::__pool;

::sx::properties::metric::SizeSetterProxy ASizeSetterProxy_Impl__obj::fromFloat( Float v){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_","fromFloat",0x2a5f8062,"sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_.fromFloat","sx/properties/abstracts/ASizeSetterProxy.hx",24,0xb276f181)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(25)
	::sx::properties::abstracts::_ASizeSetterProxy::WeakSizeSetterProxy tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::sx::ds::ObjectPool tmp1 = ::sx::properties::abstracts::_ASizeSetterProxy::ASizeSetterProxy_Impl__obj::__pool;		HX_STACK_VAR(tmp1,"tmp1");
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
	::sx::properties::abstracts::_ASizeSetterProxy::WeakSizeSetterProxy weakSizeSetterProxy = tmp;		HX_STACK_VAR(weakSizeSetterProxy,"weakSizeSetterProxy");
	HX_STACK_LINE(26)
	bool tmp1 = (weakSizeSetterProxy == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	if ((tmp1)){
		HX_STACK_LINE(26)
		::sx::properties::abstracts::_ASizeSetterProxy::WeakSizeSetterProxy tmp2 = ::sx::properties::abstracts::_ASizeSetterProxy::WeakSizeSetterProxy_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		weakSizeSetterProxy = tmp2;
	}
	HX_STACK_LINE(27)
	weakSizeSetterProxy->weak = true;
	HX_STACK_LINE(28)
	Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	weakSizeSetterProxy->set_dip(tmp2);
	HX_STACK_LINE(30)
	::sx::properties::abstracts::_ASizeSetterProxy::WeakSizeSetterProxy tmp3 = weakSizeSetterProxy;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASizeSetterProxy_Impl__obj,fromFloat,return )

Float ASizeSetterProxy_Impl__obj::set_dip( ::sx::properties::metric::SizeSetterProxy this1,Float v){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_","set_dip",0xfe9a237e,"sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_.set_dip","sx/properties/abstracts/ASizeSetterProxy.hx",43,0xb276f181)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(43)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	Float tmp1 = this1->set_dip(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASizeSetterProxy_Impl__obj,set_dip,return )

Float ASizeSetterProxy_Impl__obj::set_px( ::sx::properties::metric::SizeSetterProxy this1,Float v){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_","set_px",0x92ef8335,"sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_.set_px","sx/properties/abstracts/ASizeSetterProxy.hx",44,0xb276f181)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(44)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	Float tmp1 = this1->set_px(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASizeSetterProxy_Impl__obj,set_px,return )

Float ASizeSetterProxy_Impl__obj::set_pct( ::sx::properties::metric::SizeSetterProxy this1,Float v){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_","set_pct",0xfea33954,"sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_.set_pct","sx/properties/abstracts/ASizeSetterProxy.hx",45,0xb276f181)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(45)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	Float tmp1 = this1->set_pct(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASizeSetterProxy_Impl__obj,set_pct,return )


ASizeSetterProxy_Impl__obj::ASizeSetterProxy_Impl__obj()
{
}

bool ASizeSetterProxy_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::sx::ds::ObjectPool*/ ,(void *) &ASizeSetterProxy_Impl__obj::__pool,HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ASizeSetterProxy_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ASizeSetterProxy_Impl__obj::__pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ASizeSetterProxy_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ASizeSetterProxy_Impl__obj::__pool,"__pool");
};

#endif

hx::Class ASizeSetterProxy_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"),
	HX_HCSTRING("fromFloat","\xd2","\xaf","\x1f","\xb7"),
	HX_HCSTRING("set_dip","\xee","\x96","\xc2","\x19"),
	HX_HCSTRING("set_px","\xc5","\x4d","\x78","\x6f"),
	HX_HCSTRING("set_pct","\xc4","\xac","\xcb","\x19"),
	::String(null()) };

void ASizeSetterProxy_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_","\xfe","\xdc","\x04","\x38");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ASizeSetterProxy_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ASizeSetterProxy_Impl__obj >;
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

void ASizeSetterProxy_Impl__obj::__boot()
{
	__pool= ::sx::ds::ObjectPool_obj::__new();
}

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _ASizeSetterProxy
