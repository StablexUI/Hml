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
namespace sx{
namespace properties{
namespace abstracts{
namespace _AAlign{

Void AAlign_Impl__obj::__construct()
{
	return null();
}

//AAlign_Impl__obj::~AAlign_Impl__obj() { }

Dynamic AAlign_Impl__obj::__CreateEmpty() { return  new AAlign_Impl__obj; }
hx::ObjectPtr< AAlign_Impl__obj > AAlign_Impl__obj::__new()
{  hx::ObjectPtr< AAlign_Impl__obj > _result_ = new AAlign_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic AAlign_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AAlign_Impl__obj > _result_ = new AAlign_Impl__obj();
	_result_->__construct();
	return _result_;}

::sx::ds::ObjectPool AAlign_Impl__obj::__pool;

::sx::properties::Align AAlign_Impl__obj::fromHorizontal( ::String v){
	HX_STACK_FRAME("sx.properties.abstracts._AAlign.AAlign_Impl_","fromHorizontal",0xe5d662be,"sx.properties.abstracts._AAlign.AAlign_Impl_.fromHorizontal","sx/properties/abstracts/AAlign.hx",24,0x6f7d370a)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(25)
	::sx::properties::abstracts::_AAlign::WeakAlign tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::sx::ds::ObjectPool tmp1 = ::sx::properties::abstracts::_AAlign::AAlign_Impl__obj::__pool;		HX_STACK_VAR(tmp1,"tmp1");
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
	::sx::properties::abstracts::_AAlign::WeakAlign weakAlign = tmp;		HX_STACK_VAR(weakAlign,"weakAlign");
	HX_STACK_LINE(26)
	bool tmp1 = (weakAlign == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	if ((tmp1)){
		HX_STACK_LINE(26)
		::sx::properties::abstracts::_AAlign::WeakAlign tmp2 = ::sx::properties::abstracts::_AAlign::WeakAlign_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		weakAlign = tmp2;
	}
	HX_STACK_LINE(27)
	weakAlign->weak = true;
	HX_STACK_LINE(28)
	::String tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	weakAlign->set(tmp2,HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));
	HX_STACK_LINE(30)
	::sx::properties::abstracts::_AAlign::WeakAlign tmp3 = weakAlign;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AAlign_Impl__obj,fromHorizontal,return )

::sx::properties::Align AAlign_Impl__obj::fromVertical( ::String v){
	HX_STACK_FRAME("sx.properties.abstracts._AAlign.AAlign_Impl_","fromVertical",0x129717d0,"sx.properties.abstracts._AAlign.AAlign_Impl_.fromVertical","sx/properties/abstracts/AAlign.hx",40,0x6f7d370a)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(41)
	::sx::properties::abstracts::_AAlign::WeakAlign tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::sx::ds::ObjectPool tmp1 = ::sx::properties::abstracts::_AAlign::AAlign_Impl__obj::__pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		::sx::ds::ObjectPool _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(41)
		bool tmp2 = (_this->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		if ((tmp2)){
			HX_STACK_LINE(41)
			(_this->length)--;
			HX_STACK_LINE(41)
			tmp = _this->__pool->__GetItem(_this->length);
		}
		else{
			HX_STACK_LINE(41)
			tmp = null();
		}
	}
	HX_STACK_LINE(41)
	::sx::properties::abstracts::_AAlign::WeakAlign weakAlign = tmp;		HX_STACK_VAR(weakAlign,"weakAlign");
	HX_STACK_LINE(42)
	bool tmp1 = (weakAlign == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	if ((tmp1)){
		HX_STACK_LINE(42)
		::sx::properties::abstracts::_AAlign::WeakAlign tmp2 = ::sx::properties::abstracts::_AAlign::WeakAlign_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		weakAlign = tmp2;
	}
	HX_STACK_LINE(43)
	weakAlign->weak = true;
	HX_STACK_LINE(44)
	::String tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	weakAlign->set(HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"),tmp2);
	HX_STACK_LINE(46)
	::sx::properties::abstracts::_AAlign::WeakAlign tmp3 = weakAlign;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AAlign_Impl__obj,fromVertical,return )

::sx::properties::Align AAlign_Impl__obj::fromNone( ::String v){
	HX_STACK_FRAME("sx.properties.abstracts._AAlign.AAlign_Impl_","fromNone",0x3a703912,"sx.properties.abstracts._AAlign.AAlign_Impl_.fromNone","sx/properties/abstracts/AAlign.hx",55,0x6f7d370a)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(56)
	::sx::properties::Align tmp = ::sx::properties::abstracts::_AAlign::AAlign_Impl__obj::fromHorizontal(HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AAlign_Impl__obj,fromNone,return )


AAlign_Impl__obj::AAlign_Impl__obj()
{
}

bool AAlign_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromNone") ) { outValue = fromNone_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromVertical") ) { outValue = fromVertical_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromHorizontal") ) { outValue = fromHorizontal_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::sx::ds::ObjectPool*/ ,(void *) &AAlign_Impl__obj::__pool,HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AAlign_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AAlign_Impl__obj::__pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AAlign_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AAlign_Impl__obj::__pool,"__pool");
};

#endif

hx::Class AAlign_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"),
	HX_HCSTRING("fromHorizontal","\xee","\x4e","\xf0","\x0d"),
	HX_HCSTRING("fromVertical","\x00","\x98","\x2c","\x0a"),
	HX_HCSTRING("fromNone","\x42","\xe1","\xd5","\xa6"),
	::String(null()) };

void AAlign_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.abstracts._AAlign.AAlign_Impl_","\x9e","\x42","\x24","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AAlign_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AAlign_Impl__obj >;
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

void AAlign_Impl__obj::__boot()
{
	__pool= ::sx::ds::ObjectPool_obj::__new();
}

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _AAlign
