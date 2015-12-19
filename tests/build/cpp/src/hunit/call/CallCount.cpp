#include <hxcpp.h>

#ifndef INCLUDED_hunit_call_CallCount
#include <hunit/call/CallCount.h>
#endif
namespace hunit{
namespace call{

::hunit::call::CallCount CallCount_obj::Any;

::hunit::call::CallCount  CallCount_obj::AtLeast(int amount)
	{ return hx::CreateEnum< CallCount_obj >(HX_HCSTRING("AtLeast","\x56","\xa4","\xd9","\xf5"),3,hx::DynamicArray(0,1).Add(amount)); }

::hunit::call::CallCount  CallCount_obj::Exactly(int amount)
	{ return hx::CreateEnum< CallCount_obj >(HX_HCSTRING("Exactly","\xec","\x16","\xc3","\x4b"),4,hx::DynamicArray(0,1).Add(amount)); }

::hunit::call::CallCount CallCount_obj::Never;

::hunit::call::CallCount CallCount_obj::Once;

HX_DEFINE_CREATE_ENUM(CallCount_obj)

int CallCount_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Any","\xcc","\xb2","\x31","\x00")) return 1;
	if (inName==HX_HCSTRING("AtLeast","\x56","\xa4","\xd9","\xf5")) return 3;
	if (inName==HX_HCSTRING("Exactly","\xec","\x16","\xc3","\x4b")) return 4;
	if (inName==HX_HCSTRING("Never","\x6c","\xae","\x5d","\x2c")) return 0;
	if (inName==HX_HCSTRING("Once","\xa1","\xa9","\x8b","\x34")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallCount_obj,AtLeast,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallCount_obj,Exactly,return)

int CallCount_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Any","\xcc","\xb2","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("AtLeast","\x56","\xa4","\xd9","\xf5")) return 1;
	if (inName==HX_HCSTRING("Exactly","\xec","\x16","\xc3","\x4b")) return 1;
	if (inName==HX_HCSTRING("Never","\x6c","\xae","\x5d","\x2c")) return 0;
	if (inName==HX_HCSTRING("Once","\xa1","\xa9","\x8b","\x34")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic CallCount_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Any","\xcc","\xb2","\x31","\x00")) return Any;
	if (inName==HX_HCSTRING("AtLeast","\x56","\xa4","\xd9","\xf5")) return AtLeast_dyn();
	if (inName==HX_HCSTRING("Exactly","\xec","\x16","\xc3","\x4b")) return Exactly_dyn();
	if (inName==HX_HCSTRING("Never","\x6c","\xae","\x5d","\x2c")) return Never;
	if (inName==HX_HCSTRING("Once","\xa1","\xa9","\x8b","\x34")) return Once;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Never","\x6c","\xae","\x5d","\x2c"),
	HX_HCSTRING("Any","\xcc","\xb2","\x31","\x00"),
	HX_HCSTRING("Once","\xa1","\xa9","\x8b","\x34"),
	HX_HCSTRING("AtLeast","\x56","\xa4","\xd9","\xf5"),
	HX_HCSTRING("Exactly","\xec","\x16","\xc3","\x4b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CallCount_obj::Any,"Any");
	HX_MARK_MEMBER_NAME(CallCount_obj::Never,"Never");
	HX_MARK_MEMBER_NAME(CallCount_obj::Once,"Once");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CallCount_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CallCount_obj::Any,"Any");
	HX_VISIT_MEMBER_NAME(CallCount_obj::Never,"Never");
	HX_VISIT_MEMBER_NAME(CallCount_obj::Once,"Once");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class CallCount_obj::__mClass;

Dynamic __Create_CallCount_obj() { return new CallCount_obj; }

void CallCount_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("hunit.call.CallCount","\xa3","\x92","\x3d","\x63"), hx::TCanCast< CallCount_obj >,sStaticFields,sMemberFields,
	&__Create_CallCount_obj, &__Create,
	&super::__SGetClass(), &CreateCallCount_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void CallCount_obj::__boot()
{
hx::Static(Any) = hx::CreateEnum< CallCount_obj >(HX_HCSTRING("Any","\xcc","\xb2","\x31","\x00"),1);
hx::Static(Never) = hx::CreateEnum< CallCount_obj >(HX_HCSTRING("Never","\x6c","\xae","\x5d","\x2c"),0);
hx::Static(Once) = hx::CreateEnum< CallCount_obj >(HX_HCSTRING("Once","\xa1","\xa9","\x8b","\x34"),2);
}


} // end namespace hunit
} // end namespace call
