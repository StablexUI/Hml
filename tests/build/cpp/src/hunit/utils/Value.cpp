#include <hxcpp.h>

#ifndef INCLUDED_hunit_utils_Value
#include <hunit/utils/Value.h>
#endif
namespace hunit{
namespace utils{

::hunit::utils::Value Value_obj::Nothing;

::hunit::utils::Value  Value_obj::Thing(Dynamic v)
	{ return hx::CreateEnum< Value_obj >(HX_HCSTRING("Thing","\xce","\xf7","\xb6","\xa2"),1,hx::DynamicArray(0,1).Add(v)); }

HX_DEFINE_CREATE_ENUM(Value_obj)

int Value_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Nothing","\xed","\xc3","\xb0","\x1c")) return 0;
	if (inName==HX_HCSTRING("Thing","\xce","\xf7","\xb6","\xa2")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,Thing,return)

int Value_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Nothing","\xed","\xc3","\xb0","\x1c")) return 0;
	if (inName==HX_HCSTRING("Thing","\xce","\xf7","\xb6","\xa2")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Value_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Nothing","\xed","\xc3","\xb0","\x1c")) return Nothing;
	if (inName==HX_HCSTRING("Thing","\xce","\xf7","\xb6","\xa2")) return Thing_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Nothing","\xed","\xc3","\xb0","\x1c"),
	HX_HCSTRING("Thing","\xce","\xf7","\xb6","\xa2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Value_obj::Nothing,"Nothing");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Value_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Value_obj::Nothing,"Nothing");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Value_obj::__mClass;

Dynamic __Create_Value_obj() { return new Value_obj; }

void Value_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("hunit.utils.Value","\xd2","\xf0","\x0a","\x0a"), hx::TCanCast< Value_obj >,sStaticFields,sMemberFields,
	&__Create_Value_obj, &__Create,
	&super::__SGetClass(), &CreateValue_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Value_obj::__boot()
{
hx::Static(Nothing) = hx::CreateEnum< Value_obj >(HX_HCSTRING("Nothing","\xed","\xc3","\xb0","\x1c"),0);
}


} // end namespace hunit
} // end namespace utils
