#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_hunit_exceptions_ExpectedExceptionData
#include <hunit/exceptions/ExpectedExceptionData.h>
#endif
#ifndef INCLUDED_hunit_exceptions_UnexpectedException
#include <hunit/exceptions/UnexpectedException.h>
#endif
#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
namespace hunit{
namespace exceptions{

Void ExpectedExceptionData_obj::__construct(::hunit::match::Match match,Dynamic pos)
{
HX_STACK_FRAME("hunit.exceptions.ExpectedExceptionData","new",0x76ba3aeb,"hunit.exceptions.ExpectedExceptionData.new","hunit/exceptions/ExpectedExceptionData.hx",14,0xf0ff1885)
HX_STACK_THIS(this)
HX_STACK_ARG(match,"match")
HX_STACK_ARG(pos,"pos")
{
	HX_STACK_LINE(19)
	this->satisfied = false;
	HX_STACK_LINE(30)
	this->match = match;
	HX_STACK_LINE(31)
	this->pos = pos;
}
;
	return null();
}

//ExpectedExceptionData_obj::~ExpectedExceptionData_obj() { }

Dynamic ExpectedExceptionData_obj::__CreateEmpty() { return  new ExpectedExceptionData_obj; }
hx::ObjectPtr< ExpectedExceptionData_obj > ExpectedExceptionData_obj::__new(::hunit::match::Match match,Dynamic pos)
{  hx::ObjectPtr< ExpectedExceptionData_obj > _result_ = new ExpectedExceptionData_obj();
	_result_->__construct(match,pos);
	return _result_;}

Dynamic ExpectedExceptionData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExpectedExceptionData_obj > _result_ = new ExpectedExceptionData_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ExpectedExceptionData_obj::validate( Dynamic e,Array< ::Dynamic > exceptionStack){
{
		HX_STACK_FRAME("hunit.exceptions.ExpectedExceptionData","validate",0x04984e2b,"hunit.exceptions.ExpectedExceptionData.validate","hunit/exceptions/ExpectedExceptionData.hx",41,0xf0ff1885)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(exceptionStack,"exceptionStack")
		HX_STACK_LINE(42)
		::hunit::match::Match tmp = this->match;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		bool tmp2 = tmp->match(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		this->satisfied = tmp2;
		HX_STACK_LINE(44)
		bool tmp3 = this->satisfied;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		if ((tmp4)){
			HX_STACK_LINE(45)
			Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("ExpectedExceptionData.hx","\xfd","\x68","\xfc","\x8e"),45,HX_HCSTRING("hunit.exceptions.ExpectedExceptionData","\x79","\xe9","\xd9","\x6e"),HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			::hunit::exceptions::UnexpectedException tmp7 = ::hunit::exceptions::UnexpectedException_obj::__new(tmp5,exceptionStack,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			HX_STACK_DO_THROW(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ExpectedExceptionData_obj,validate,(void))


ExpectedExceptionData_obj::ExpectedExceptionData_obj()
{
}

void ExpectedExceptionData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ExpectedExceptionData);
	HX_MARK_MEMBER_NAME(match,"match");
	HX_MARK_MEMBER_NAME(satisfied,"satisfied");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void ExpectedExceptionData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(match,"match");
	HX_VISIT_MEMBER_NAME(satisfied,"satisfied");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

Dynamic ExpectedExceptionData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return match; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"satisfied") ) { return satisfied; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ExpectedExceptionData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { match=inValue.Cast< ::hunit::match::Match >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"satisfied") ) { satisfied=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ExpectedExceptionData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ExpectedExceptionData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("match","\x45","\x49","\x23","\x03"));
	outFields->push(HX_HCSTRING("satisfied","\xf2","\x99","\x92","\xbc"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hunit::match::Match*/ ,(int)offsetof(ExpectedExceptionData_obj,match),HX_HCSTRING("match","\x45","\x49","\x23","\x03")},
	{hx::fsBool,(int)offsetof(ExpectedExceptionData_obj,satisfied),HX_HCSTRING("satisfied","\xf2","\x99","\x92","\xbc")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ExpectedExceptionData_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("satisfied","\xf2","\x99","\x92","\xbc"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExpectedExceptionData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExpectedExceptionData_obj::__mClass,"__mClass");
};

#endif

hx::Class ExpectedExceptionData_obj::__mClass;

void ExpectedExceptionData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.exceptions.ExpectedExceptionData","\x79","\xe9","\xd9","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ExpectedExceptionData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ExpectedExceptionData_obj >;
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
} // end namespace exceptions
