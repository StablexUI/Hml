#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_hunit_TestCase
#include <hunit/TestCase.h>
#endif
#ifndef INCLUDED_hunit_exceptions_InvalidTestException
#include <hunit/exceptions/InvalidTestException.h>
#endif
#ifndef INCLUDED_hunit_mock_MockBuilder
#include <hunit/mock/MockBuilder.h>
#endif
#ifndef INCLUDED_hunit_mock_MockData
#include <hunit/mock/MockData.h>
#endif
namespace hunit{
namespace mock{

Void MockBuilder_obj::__construct(::hunit::TestCase test,::hx::Class mockClass,::hx::Class targetClass)
{
HX_STACK_FRAME("hunit.mock.MockBuilder","new",0xbd2351e1,"hunit.mock.MockBuilder.new","hunit/mock/MockBuilder.hx",12,0xabdd890f)
HX_STACK_THIS(this)
HX_STACK_ARG(test,"test")
HX_STACK_ARG(mockClass,"mockClass")
HX_STACK_ARG(targetClass,"targetClass")
{
	HX_STACK_LINE(22)
	this->strictMode = false;
	HX_STACK_LINE(20)
	this->fullStub = false;
	HX_STACK_LINE(31)
	this->test = test;
	HX_STACK_LINE(32)
	this->mockClass = mockClass;
	HX_STACK_LINE(33)
	this->targetClass = targetClass;
}
;
	return null();
}

//MockBuilder_obj::~MockBuilder_obj() { }

Dynamic MockBuilder_obj::__CreateEmpty() { return  new MockBuilder_obj; }
hx::ObjectPtr< MockBuilder_obj > MockBuilder_obj::__new(::hunit::TestCase test,::hx::Class mockClass,::hx::Class targetClass)
{  hx::ObjectPtr< MockBuilder_obj > _result_ = new MockBuilder_obj();
	_result_->__construct(test,mockClass,targetClass);
	return _result_;}

Dynamic MockBuilder_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MockBuilder_obj > _result_ = new MockBuilder_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Dynamic MockBuilder_obj::get( ){
	HX_STACK_FRAME("hunit.mock.MockBuilder","get",0xbd1e0217,"hunit.mock.MockBuilder.get","hunit/mock/MockBuilder.hx",42,0xabdd890f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	::hx::Class tmp = this->mockClass;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	Dynamic tmp1 = ::Type_obj::createEmptyInstance(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	Dynamic instance = tmp1;		HX_STACK_VAR(instance,"instance");
	HX_STACK_LINE(44)
	Dynamic tmp2 = instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	this->assignMockData(tmp2);
	HX_STACK_LINE(46)
	Dynamic tmp3 = instance;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(MockBuilder_obj,get,return )

Void MockBuilder_obj::assignMockData( Dynamic instance){
{
		HX_STACK_FRAME("hunit.mock.MockBuilder","assignMockData",0x18bf0742,"hunit.mock.MockBuilder.assignMockData","hunit/mock/MockBuilder.hx",55,0xabdd890f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instance,"instance")
		HX_STACK_LINE(56)
		::hunit::mock::MockData tmp = this->createMockData();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		::hunit::mock::MockData mockData = tmp;		HX_STACK_VAR(mockData,"mockData");
		HX_STACK_LINE(57)
		Dynamic tmp1 = instance;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		::hunit::mock::MockData tmp2 = mockData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		::Reflect_obj::setProperty(tmp1,HX_HCSTRING("__hu_mock__","\x3c","\x87","\xe6","\x32"),tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MockBuilder_obj,assignMockData,(void))

::hunit::mock::MockData MockBuilder_obj::createMockData( ){
	HX_STACK_FRAME("hunit.mock.MockBuilder","createMockData",0x12393d0f,"hunit.mock.MockBuilder.createMockData","hunit/mock/MockBuilder.hx",66,0xabdd890f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	::hunit::TestCase tmp = this->test;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	::hx::Class tmp1 = this->targetClass;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	bool tmp2 = this->fullStub;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	bool tmp3 = this->strictMode;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	::hunit::mock::MockData tmp4 = ::hunit::mock::MockData_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(67)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(MockBuilder_obj,createMockData,return )

bool MockBuilder_obj::set_strictMode( bool value){
	HX_STACK_FRAME("hunit.mock.MockBuilder","set_strictMode",0xa5ffc428,"hunit.mock.MockBuilder.set_strictMode","hunit/mock/MockBuilder.hx",75,0xabdd890f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(76)
	bool tmp = this->fullStub;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	if ((tmp)){
		HX_STACK_LINE(77)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("MockBuilder.hx","\xcd","\xc5","\x83","\x81"),77,HX_HCSTRING("hunit.mock.MockBuilder","\x6f","\xcd","\x02","\xe7"),HX_HCSTRING("set_strictMode","\x09","\x68","\xbb","\xa6"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		::hunit::exceptions::InvalidTestException tmp2 = ::hunit::exceptions::InvalidTestException_obj::__new(HX_HCSTRING("Cannot use `stubAll()` and `strict()` together.","\x7d","\xb6","\x5c","\x4b"),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		HX_STACK_DO_THROW(tmp2);
	}
	HX_STACK_LINE(80)
	bool tmp1 = this->strictMode = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(MockBuilder_obj,set_strictMode,return )

bool MockBuilder_obj::set_fullStub( bool value){
	HX_STACK_FRAME("hunit.mock.MockBuilder","set_fullStub",0x47c11c39,"hunit.mock.MockBuilder.set_fullStub","hunit/mock/MockBuilder.hx",89,0xabdd890f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(90)
	bool tmp = this->strictMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	if ((tmp)){
		HX_STACK_LINE(91)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("MockBuilder.hx","\xcd","\xc5","\x83","\x81"),91,HX_HCSTRING("hunit.mock.MockBuilder","\x6f","\xcd","\x02","\xe7"),HX_HCSTRING("set_fullStub","\xda","\x55","\x82","\x2a"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		::hunit::exceptions::InvalidTestException tmp2 = ::hunit::exceptions::InvalidTestException_obj::__new(HX_HCSTRING("Cannot use `stubAll()` and `strict()` together.","\x7d","\xb6","\x5c","\x4b"),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		HX_STACK_DO_THROW(tmp2);
	}
	HX_STACK_LINE(94)
	bool tmp1 = this->fullStub = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(MockBuilder_obj,set_fullStub,return )


MockBuilder_obj::MockBuilder_obj()
{
}

void MockBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MockBuilder);
	HX_MARK_MEMBER_NAME(test,"test");
	HX_MARK_MEMBER_NAME(mockClass,"mockClass");
	HX_MARK_MEMBER_NAME(targetClass,"targetClass");
	HX_MARK_MEMBER_NAME(fullStub,"fullStub");
	HX_MARK_MEMBER_NAME(strictMode,"strictMode");
	HX_MARK_END_CLASS();
}

void MockBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(test,"test");
	HX_VISIT_MEMBER_NAME(mockClass,"mockClass");
	HX_VISIT_MEMBER_NAME(targetClass,"targetClass");
	HX_VISIT_MEMBER_NAME(fullStub,"fullStub");
	HX_VISIT_MEMBER_NAME(strictMode,"strictMode");
}

Dynamic MockBuilder_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return test; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullStub") ) { return fullStub; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mockClass") ) { return mockClass; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"strictMode") ) { return strictMode; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"targetClass") ) { return targetClass; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_fullStub") ) { return set_fullStub_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"assignMockData") ) { return assignMockData_dyn(); }
		if (HX_FIELD_EQ(inName,"createMockData") ) { return createMockData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_strictMode") ) { return set_strictMode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MockBuilder_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { test=inValue.Cast< ::hunit::TestCase >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullStub") ) { if (inCallProp == hx::paccAlways) return set_fullStub(inValue);fullStub=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mockClass") ) { mockClass=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"strictMode") ) { if (inCallProp == hx::paccAlways) return set_strictMode(inValue);strictMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"targetClass") ) { targetClass=inValue.Cast< ::hx::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MockBuilder_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MockBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("mockClass","\x4e","\xa1","\x2b","\x56"));
	outFields->push(HX_HCSTRING("targetClass","\x27","\x4f","\xb0","\xd8"));
	outFields->push(HX_HCSTRING("fullStub","\x5d","\x7e","\x6f","\x60"));
	outFields->push(HX_HCSTRING("strictMode","\x4c","\xf7","\xa5","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hunit::TestCase*/ ,(int)offsetof(MockBuilder_obj,test),HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(MockBuilder_obj,mockClass),HX_HCSTRING("mockClass","\x4e","\xa1","\x2b","\x56")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(MockBuilder_obj,targetClass),HX_HCSTRING("targetClass","\x27","\x4f","\xb0","\xd8")},
	{hx::fsBool,(int)offsetof(MockBuilder_obj,fullStub),HX_HCSTRING("fullStub","\x5d","\x7e","\x6f","\x60")},
	{hx::fsBool,(int)offsetof(MockBuilder_obj,strictMode),HX_HCSTRING("strictMode","\x4c","\xf7","\xa5","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"),
	HX_HCSTRING("mockClass","\x4e","\xa1","\x2b","\x56"),
	HX_HCSTRING("targetClass","\x27","\x4f","\xb0","\xd8"),
	HX_HCSTRING("fullStub","\x5d","\x7e","\x6f","\x60"),
	HX_HCSTRING("strictMode","\x4c","\xf7","\xa5","\x10"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("assignMockData","\x23","\xab","\x7a","\x19"),
	HX_HCSTRING("createMockData","\xf0","\xe0","\xf4","\x12"),
	HX_HCSTRING("set_strictMode","\x09","\x68","\xbb","\xa6"),
	HX_HCSTRING("set_fullStub","\xda","\x55","\x82","\x2a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MockBuilder_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MockBuilder_obj::__mClass,"__mClass");
};

#endif

hx::Class MockBuilder_obj::__mClass;

void MockBuilder_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.mock.MockBuilder","\x6f","\xcd","\x02","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MockBuilder_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MockBuilder_obj >;
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
} // end namespace mock
