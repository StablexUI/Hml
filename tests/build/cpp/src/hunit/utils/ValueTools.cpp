#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_hunit_utils_Value
#include <hunit/utils/Value.h>
#endif
#ifndef INCLUDED_hunit_utils_ValueTools
#include <hunit/utils/ValueTools.h>
#endif
namespace hunit{
namespace utils{

Void ValueTools_obj::__construct()
{
	return null();
}

//ValueTools_obj::~ValueTools_obj() { }

Dynamic ValueTools_obj::__CreateEmpty() { return  new ValueTools_obj; }
hx::ObjectPtr< ValueTools_obj > ValueTools_obj::__new()
{  hx::ObjectPtr< ValueTools_obj > _result_ = new ValueTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic ValueTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ValueTools_obj > _result_ = new ValueTools_obj();
	_result_->__construct();
	return _result_;}

bool ValueTools_obj::hasValue( ::hunit::utils::Value holder){
	HX_STACK_FRAME("hunit.utils.ValueTools","hasValue",0xe9c90adc,"hunit.utils.ValueTools.hasValue","hunit/utils/Value.hx",28,0xee4a29ee)
	HX_STACK_ARG(holder,"holder")
	HX_STACK_LINE(29)
	bool tmp = (holder == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	if ((tmp)){
		HX_STACK_LINE(29)
		return false;
	}
	HX_STACK_LINE(30)
	bool tmp1 = (holder != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	if ((tmp1)){
		HX_STACK_LINE(30)
		switch( (int)(holder->__Index())){
			case (int)0: {
				HX_STACK_LINE(31)
				return false;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(32)
				return true;
			}
			;break;
		}
	}
	HX_STACK_LINE(35)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,hasValue,return )

Dynamic ValueTools_obj::getValue( ::hunit::utils::Value holder){
	HX_STACK_FRAME("hunit.utils.ValueTools","getValue",0xbd47d020,"hunit.utils.ValueTools.getValue","hunit/utils/Value.hx",44,0xee4a29ee)
	HX_STACK_ARG(holder,"holder")
	HX_STACK_LINE(45)
	bool tmp = (holder == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	if ((tmp)){
		HX_STACK_LINE(46)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Value.hx","\x0d","\xfc","\xe6","\xc7"),46,HX_HCSTRING("hunit.utils.ValueTools","\xe9","\xd7","\x9c","\x96"),HX_HCSTRING("getValue","\xfb","\x8e","\x8f","\x91"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		::Exception tmp2 = ::Exception_obj::__new(HX_HCSTRING("No value here","\x5e","\xdc","\xc0","\xa4"),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		HX_STACK_DO_THROW(tmp2);
	}
	HX_STACK_LINE(49)
	bool tmp1 = (holder != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	if ((tmp1)){
		HX_STACK_LINE(49)
		switch( (int)(holder->__Index())){
			case (int)0: {
				HX_STACK_LINE(50)
				Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Value.hx","\x0d","\xfc","\xe6","\xc7"),50,HX_HCSTRING("hunit.utils.ValueTools","\xe9","\xd7","\x9c","\x96"),HX_HCSTRING("getValue","\xfb","\x8e","\x8f","\x91"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(50)
				::Exception tmp3 = ::Exception_obj::__new(HX_HCSTRING("No value here","\x5e","\xdc","\xc0","\xa4"),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(50)
				HX_STACK_DO_THROW(tmp3);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(49)
				Dynamic tmp2 = (::hunit::utils::Value(holder))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(49)
				Dynamic v = tmp2;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(51)
				{
					HX_STACK_LINE(51)
					Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(51)
					return tmp3;
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(54)
	Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Value.hx","\x0d","\xfc","\xe6","\xc7"),54,HX_HCSTRING("hunit.utils.ValueTools","\xe9","\xd7","\x9c","\x96"),HX_HCSTRING("getValue","\xfb","\x8e","\x8f","\x91"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	::Exception tmp3 = ::Exception_obj::__new(HX_HCSTRING("No value here","\x5e","\xdc","\xc0","\xa4"),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	HX_STACK_DO_THROW(tmp3);
	HX_STACK_LINE(54)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,getValue,return )


ValueTools_obj::ValueTools_obj()
{
}

bool ValueTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"hasValue") ) { outValue = hasValue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getValue") ) { outValue = getValue_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ValueTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ValueTools_obj::__mClass,"__mClass");
};

#endif

hx::Class ValueTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("hasValue","\xb7","\xc9","\x10","\xbe"),
	HX_HCSTRING("getValue","\xfb","\x8e","\x8f","\x91"),
	::String(null()) };

void ValueTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.utils.ValueTools","\xe9","\xd7","\x9c","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ValueTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ValueTools_obj >;
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

} // end namespace hunit
} // end namespace utils
