#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_hunit_Utils
#include <hunit/Utils.h>
#endif
#ifndef INCLUDED_hunit_call_Call
#include <hunit/call/Call.h>
#endif
#ifndef INCLUDED_hunit_call_Stub
#include <hunit/call/Stub.h>
#endif
#ifndef INCLUDED_hunit_mock_MockData
#include <hunit/mock/MockData.h>
#endif
#ifndef INCLUDED_hunit_utils_Value
#include <hunit/utils/Value.h>
#endif
#ifndef INCLUDED_hunit_utils_ValueTools
#include <hunit/utils/ValueTools.h>
#endif
namespace hunit{
namespace call{

Void Call_obj::__construct(int id,::hunit::mock::MockData mockData,::String method,cpp::ArrayBase arguments,Array< ::Dynamic > stack,Dynamic pos,bool isStub,::hunit::call::Stub stub)
{
HX_STACK_FRAME("hunit.call.Call","new",0x67a7bd7e,"hunit.call.Call.new","hunit/call/Call.hx",15,0x092beb52)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
HX_STACK_ARG(mockData,"mockData")
HX_STACK_ARG(method,"method")
HX_STACK_ARG(arguments,"arguments")
HX_STACK_ARG(stack,"stack")
HX_STACK_ARG(pos,"pos")
HX_STACK_ARG(isStub,"isStub")
HX_STACK_ARG(stub,"stub")
{
	HX_STACK_LINE(34)
	this->isStub = false;
	HX_STACK_LINE(47)
	this->id = id;
	HX_STACK_LINE(48)
	this->mockData = mockData;
	HX_STACK_LINE(49)
	this->method = method;
	HX_STACK_LINE(50)
	this->arguments = arguments;
	HX_STACK_LINE(51)
	this->isStub = isStub;
	HX_STACK_LINE(52)
	this->stub = stub;
	HX_STACK_LINE(53)
	this->pos = pos;
	HX_STACK_LINE(54)
	this->stack = stack;
	HX_STACK_LINE(56)
	this->result = ::hunit::utils::Value_obj::Nothing;
	HX_STACK_LINE(57)
	this->set_exceptionValue(::hunit::utils::Value_obj::Nothing);
}
;
	return null();
}

//Call_obj::~Call_obj() { }

Dynamic Call_obj::__CreateEmpty() { return  new Call_obj; }
hx::ObjectPtr< Call_obj > Call_obj::__new(int id,::hunit::mock::MockData mockData,::String method,cpp::ArrayBase arguments,Array< ::Dynamic > stack,Dynamic pos,bool isStub,::hunit::call::Stub stub)
{  hx::ObjectPtr< Call_obj > _result_ = new Call_obj();
	_result_->__construct(id,mockData,method,arguments,stack,pos,isStub,stub);
	return _result_;}

Dynamic Call_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Call_obj > _result_ = new Call_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

::String Call_obj::toString( ){
	HX_STACK_FRAME("hunit.call.Call","toString",0xf77496ce,"hunit.call.Call.toString","hunit/call/Call.hx",66,0x092beb52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	::String str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(68)
	::hunit::utils::Value tmp = this->result;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	bool tmp1 = ::hunit::utils::ValueTools_obj::hasValue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	if ((tmp1)){
		HX_STACK_LINE(69)
		::hunit::utils::Value tmp2 = this->result;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		Dynamic tmp3 = ::hunit::utils::ValueTools_obj::getValue(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		Dynamic value = tmp3;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(70)
		Dynamic tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		::String tmp5 = ::hunit::Utils_obj::shortenQuote(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		::String tmp6 = (HX_HCSTRING("returned ","\x31","\x64","\x93","\x0c") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(70)
		::String tmp7 = (tmp6 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(70)
		str = tmp7;
	}
	HX_STACK_LINE(73)
	::hunit::utils::Value tmp2 = this->exceptionValue;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	bool tmp3 = ::hunit::utils::ValueTools_obj::hasValue(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	if ((tmp3)){
		HX_STACK_LINE(74)
		::hunit::utils::Value tmp4 = this->exceptionValue;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		Dynamic tmp5 = ::hunit::utils::ValueTools_obj::getValue(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(74)
		Dynamic e = tmp5;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(76)
		Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::Exception >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		if ((tmp7)){
			HX_STACK_LINE(77)
			::Exception tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(77)
			tmp9 = hx::TCast< ::Exception >::cast(e);
			HX_STACK_LINE(77)
			::String tmp10 = tmp9->message;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(77)
			tmp8 = ::hunit::Utils_obj::shortenString(tmp10);
		}
		else{
			HX_STACK_LINE(78)
			Dynamic tmp9 = e;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(78)
			tmp8 = ::hunit::Utils_obj::shortenQuote(tmp9);
		}
		HX_STACK_LINE(75)
		::String exceptionMsg = tmp8;		HX_STACK_VAR(exceptionMsg,"exceptionMsg");
		HX_STACK_LINE(81)
		::String tmp9 = (HX_HCSTRING("threw ","\xb0","\x8d","\xb9","\x8e") + exceptionMsg);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(81)
		str = tmp9;
	}
	HX_STACK_LINE(84)
	::hunit::mock::MockData tmp4 = this->mockData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(84)
	::String tmp5 = tmp4->mockClassName();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(84)
	::String className = tmp5;		HX_STACK_VAR(className,"className");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::String run(Dynamic a){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","hunit/call/Call.hx",85,0x092beb52)
		HX_STACK_ARG(a,"a")
		{
			HX_STACK_LINE(85)
			Dynamic tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(85)
			::String tmp7 = ::hunit::Utils_obj::shortenQuote(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			return tmp7;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(85)
	::String tmp6 = this->arguments->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )( Dynamic(new _Function_1_1()))->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	::String args = tmp6;		HX_STACK_VAR(args,"args");
	HX_STACK_LINE(86)
	::String tmp7 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + className);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(86)
	::String tmp8 = (tmp7 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(86)
	::String tmp9 = this->method;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(86)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(86)
	::String tmp11 = (tmp10 + HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(86)
	::String tmp12 = args;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(86)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(86)
	::String tmp14 = (tmp13 + HX_HCSTRING(") ","\xd7","\x23","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(86)
	::String tmp15 = str;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(86)
	::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(86)
	::String msg = tmp16;		HX_STACK_VAR(msg,"msg");
	HX_STACK_LINE(88)
	::String tmp17 = msg;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(88)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(Call_obj,toString,return )

::hunit::utils::Value Call_obj::set_exceptionValue( ::hunit::utils::Value value){
	HX_STACK_FRAME("hunit.call.Call","set_exceptionValue",0xed0ff881,"hunit.call.Call.set_exceptionValue","hunit/call/Call.hx",97,0x092beb52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(98)
	::hunit::utils::Value tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	bool tmp1 = ::hunit::utils::ValueTools_obj::hasValue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	if ((tmp1)){
		HX_STACK_LINE(99)
		this->exceptionStack = ::haxe::CallStack_obj::exceptionStack()->concat(this->stack);
	}
	HX_STACK_LINE(102)
	::hunit::utils::Value tmp2 = this->exceptionValue = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Call_obj,set_exceptionValue,return )


Call_obj::Call_obj()
{
}

void Call_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Call);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(mockData,"mockData");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(arguments,"arguments");
	HX_MARK_MEMBER_NAME(result,"result");
	HX_MARK_MEMBER_NAME(stack,"stack");
	HX_MARK_MEMBER_NAME(exceptionValue,"exceptionValue");
	HX_MARK_MEMBER_NAME(exceptionStack,"exceptionStack");
	HX_MARK_MEMBER_NAME(isStub,"isStub");
	HX_MARK_MEMBER_NAME(stub,"stub");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void Call_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(mockData,"mockData");
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(arguments,"arguments");
	HX_VISIT_MEMBER_NAME(result,"result");
	HX_VISIT_MEMBER_NAME(stack,"stack");
	HX_VISIT_MEMBER_NAME(exceptionValue,"exceptionValue");
	HX_VISIT_MEMBER_NAME(exceptionStack,"exceptionStack");
	HX_VISIT_MEMBER_NAME(isStub,"isStub");
	HX_VISIT_MEMBER_NAME(stub,"stub");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

Dynamic Call_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stub") ) { return stub; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { return stack; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		if (HX_FIELD_EQ(inName,"result") ) { return result; }
		if (HX_FIELD_EQ(inName,"isStub") ) { return isStub; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mockData") ) { return mockData; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arguments") ) { return arguments; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exceptionValue") ) { return exceptionValue; }
		if (HX_FIELD_EQ(inName,"exceptionStack") ) { return exceptionStack; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_exceptionValue") ) { return set_exceptionValue_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Call_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stub") ) { stub=inValue.Cast< ::hunit::call::Stub >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { stack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast< ::hunit::utils::Value >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isStub") ) { isStub=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mockData") ) { mockData=inValue.Cast< ::hunit::mock::MockData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arguments") ) { arguments=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exceptionValue") ) { if (inCallProp == hx::paccAlways) return set_exceptionValue(inValue);exceptionValue=inValue.Cast< ::hunit::utils::Value >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exceptionStack") ) { exceptionStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Call_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Call_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("mockData","\xd4","\x61","\xba","\xc0"));
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	outFields->push(HX_HCSTRING("arguments","\x56","\x3f","\x97","\xee"));
	outFields->push(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"));
	outFields->push(HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"));
	outFields->push(HX_HCSTRING("exceptionValue","\xa2","\x60","\x03","\xb9"));
	outFields->push(HX_HCSTRING("exceptionStack","\x79","\x48","\x56","\x0b"));
	outFields->push(HX_HCSTRING("isStub","\x38","\xba","\xc2","\x69"));
	outFields->push(HX_HCSTRING("stub","\x2e","\xf5","\x5b","\x4c"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Call_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::hunit::mock::MockData*/ ,(int)offsetof(Call_obj,mockData),HX_HCSTRING("mockData","\xd4","\x61","\xba","\xc0")},
	{hx::fsString,(int)offsetof(Call_obj,method),HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Call_obj,arguments),HX_HCSTRING("arguments","\x56","\x3f","\x97","\xee")},
	{hx::fsObject /*::hunit::utils::Value*/ ,(int)offsetof(Call_obj,result),HX_HCSTRING("result","\xdd","\x68","\x84","\x08")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Call_obj,stack),HX_HCSTRING("stack","\x48","\x67","\x0b","\x84")},
	{hx::fsObject /*::hunit::utils::Value*/ ,(int)offsetof(Call_obj,exceptionValue),HX_HCSTRING("exceptionValue","\xa2","\x60","\x03","\xb9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Call_obj,exceptionStack),HX_HCSTRING("exceptionStack","\x79","\x48","\x56","\x0b")},
	{hx::fsBool,(int)offsetof(Call_obj,isStub),HX_HCSTRING("isStub","\x38","\xba","\xc2","\x69")},
	{hx::fsObject /*::hunit::call::Stub*/ ,(int)offsetof(Call_obj,stub),HX_HCSTRING("stub","\x2e","\xf5","\x5b","\x4c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Call_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("mockData","\xd4","\x61","\xba","\xc0"),
	HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"),
	HX_HCSTRING("arguments","\x56","\x3f","\x97","\xee"),
	HX_HCSTRING("result","\xdd","\x68","\x84","\x08"),
	HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"),
	HX_HCSTRING("exceptionValue","\xa2","\x60","\x03","\xb9"),
	HX_HCSTRING("exceptionStack","\x79","\x48","\x56","\x0b"),
	HX_HCSTRING("isStub","\x38","\xba","\xc2","\x69"),
	HX_HCSTRING("stub","\x2e","\xf5","\x5b","\x4c"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("set_exceptionValue","\xdf","\x73","\x4c","\x31"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Call_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Call_obj::__mClass,"__mClass");
};

#endif

hx::Class Call_obj::__mClass;

void Call_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.call.Call","\x8c","\xe6","\xe7","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Call_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Call_obj >;
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
} // end namespace call
