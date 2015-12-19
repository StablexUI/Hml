#include <hxcpp.h>

#ifndef INCLUDED_sx_ds_ObjectPool
#include <sx/ds/ObjectPool.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__ACoordinate_ACoordinate_Impl_
#include <sx/properties/abstracts/_ACoordinate/ACoordinate_Impl_.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__ACoordinate_WeakCoordinate
#include <sx/properties/abstracts/_ACoordinate/WeakCoordinate.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Coordinate
#include <sx/properties/metric/Coordinate.h>
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
namespace _ACoordinate{

Void WeakCoordinate_obj::__construct()
{
HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.WeakCoordinate","new",0x2fe13507,"sx.properties.abstracts._ACoordinate.WeakCoordinate.new","sx/properties/abstracts/ACoordinate.hx",112,0x4ad4bbb5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(113)
	super::__construct(null());
	HX_STACK_LINE(114)
	this->selected = true;
	HX_STACK_LINE(115)
	this->onChange = null();
}
;
	return null();
}

//WeakCoordinate_obj::~WeakCoordinate_obj() { }

Dynamic WeakCoordinate_obj::__CreateEmpty() { return  new WeakCoordinate_obj; }
hx::ObjectPtr< WeakCoordinate_obj > WeakCoordinate_obj::__new()
{  hx::ObjectPtr< WeakCoordinate_obj > _result_ = new WeakCoordinate_obj();
	_result_->__construct();
	return _result_;}

Dynamic WeakCoordinate_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeakCoordinate_obj > _result_ = new WeakCoordinate_obj();
	_result_->__construct();
	return _result_;}

Void WeakCoordinate_obj::dispose( ){
{
		HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.WeakCoordinate","dispose",0x6f46c4c6,"sx.properties.abstracts._ACoordinate.WeakCoordinate.dispose","sx/properties/abstracts/ACoordinate.hx",123,0x4ad4bbb5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			::sx::ds::ObjectPool tmp = ::sx::properties::abstracts::_ACoordinate::ACoordinate_Impl__obj::__pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(124)
			::sx::ds::ObjectPool _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(124)
			hx::IndexRef((_this->__pool).mPtr,_this->length) = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(124)
			(_this->length)++;
		}
		HX_STACK_LINE(126)
		this->weak = false;
	}
return null();
}


Void WeakCoordinate_obj::__invokeOnChange( ::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.WeakCoordinate","__invokeOnChange",0x4ddefda0,"sx.properties.abstracts._ACoordinate.WeakCoordinate.__invokeOnChange","sx/properties/abstracts/ACoordinate.hx",134,0x4ad4bbb5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
	}
return null();
}



WeakCoordinate_obj::WeakCoordinate_obj()
{
}

Dynamic WeakCoordinate_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(WeakCoordinate_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeakCoordinate_obj::__mClass,"__mClass");
};

#endif

hx::Class WeakCoordinate_obj::__mClass;

void WeakCoordinate_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.abstracts._ACoordinate.WeakCoordinate","\x95","\xa5","\xba","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WeakCoordinate_obj >;
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
} // end namespace _ACoordinate
