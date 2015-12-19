#include <hxcpp.h>

#ifndef INCLUDED_sx_ds_ObjectPool
#include <sx/ds/ObjectPool.h>
#endif
#ifndef INCLUDED_sx_properties_Align
#include <sx/properties/Align.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__AAlign_AAlign_Impl_
#include <sx/properties/abstracts/_AAlign/AAlign_Impl_.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__AAlign_WeakAlign
#include <sx/properties/abstracts/_AAlign/WeakAlign.h>
#endif
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
namespace sx{
namespace properties{
namespace abstracts{
namespace _AAlign{

Void WeakAlign_obj::__construct()
{
HX_STACK_FRAME("sx.properties.abstracts._AAlign.WeakAlign","new",0x882b9505,"sx.properties.abstracts._AAlign.WeakAlign.new","sx/properties/abstracts/AAlign.hx",75,0x6f7d370a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(76)
	super::__construct(null(),null());
	HX_STACK_LINE(77)
	this->onChange = null();
}
;
	return null();
}

//WeakAlign_obj::~WeakAlign_obj() { }

Dynamic WeakAlign_obj::__CreateEmpty() { return  new WeakAlign_obj; }
hx::ObjectPtr< WeakAlign_obj > WeakAlign_obj::__new()
{  hx::ObjectPtr< WeakAlign_obj > _result_ = new WeakAlign_obj();
	_result_->__construct();
	return _result_;}

Dynamic WeakAlign_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeakAlign_obj > _result_ = new WeakAlign_obj();
	_result_->__construct();
	return _result_;}

Void WeakAlign_obj::dispose( ){
{
		HX_STACK_FRAME("sx.properties.abstracts._AAlign.WeakAlign","dispose",0x0573fbc4,"sx.properties.abstracts._AAlign.WeakAlign.dispose","sx/properties/abstracts/AAlign.hx",85,0x6f7d370a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			::sx::ds::ObjectPool tmp = ::sx::properties::abstracts::_AAlign::AAlign_Impl__obj::__pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(86)
			::sx::ds::ObjectPool _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(86)
			hx::IndexRef((_this->__pool).mPtr,_this->length) = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(86)
			(_this->length)++;
		}
		HX_STACK_LINE(88)
		this->weak = false;
	}
return null();
}



WeakAlign_obj::WeakAlign_obj()
{
}

Dynamic WeakAlign_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(WeakAlign_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeakAlign_obj::__mClass,"__mClass");
};

#endif

hx::Class WeakAlign_obj::__mClass;

void WeakAlign_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.abstracts._AAlign.WeakAlign","\x93","\xae","\x19","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WeakAlign_obj >;
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
} // end namespace _AAlign
