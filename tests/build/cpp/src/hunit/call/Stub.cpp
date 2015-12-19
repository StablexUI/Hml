#include <hxcpp.h>

#ifndef INCLUDED_hunit_call_CallCount
#include <hunit/call/CallCount.h>
#endif
#ifndef INCLUDED_hunit_call_Expect
#include <hunit/call/Expect.h>
#endif
#ifndef INCLUDED_hunit_call_IExpect
#include <hunit/call/IExpect.h>
#endif
#ifndef INCLUDED_hunit_call_Stub
#include <hunit/call/Stub.h>
#endif
#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
#ifndef INCLUDED_hunit_mock_MockData
#include <hunit/mock/MockData.h>
#endif
#ifndef INCLUDED_hunit_utils_Value
#include <hunit/utils/Value.h>
#endif
namespace hunit{
namespace call{

Void Stub_obj::__construct(::hunit::mock::MockData mockData,::String method,Array< ::Dynamic > arguments,::hunit::utils::Value returns,::hunit::utils::Value throws,Dynamic pos)
{
HX_STACK_FRAME("hunit.call.Stub","new",0xe81b220e,"hunit.call.Stub.new","hunit/call/Stub.hx",43,0x634a48c2)
HX_STACK_THIS(this)
HX_STACK_ARG(mockData,"mockData")
HX_STACK_ARG(method,"method")
HX_STACK_ARG(arguments,"arguments")
HX_STACK_ARG(returns,"returns")
HX_STACK_ARG(throws,"throws")
HX_STACK_ARG(pos,"pos")
{
	HX_STACK_LINE(44)
	this->mockData = mockData;
	HX_STACK_LINE(45)
	this->method = method;
	HX_STACK_LINE(46)
	this->arguments = arguments;
	HX_STACK_LINE(47)
	this->returns = returns;
	HX_STACK_LINE(48)
	this->throws = throws;
	HX_STACK_LINE(49)
	this->pos = pos;
}
;
	return null();
}

//Stub_obj::~Stub_obj() { }

Dynamic Stub_obj::__CreateEmpty() { return  new Stub_obj; }
hx::ObjectPtr< Stub_obj > Stub_obj::__new(::hunit::mock::MockData mockData,::String method,Array< ::Dynamic > arguments,::hunit::utils::Value returns,::hunit::utils::Value throws,Dynamic pos)
{  hx::ObjectPtr< Stub_obj > _result_ = new Stub_obj();
	_result_->__construct(mockData,method,arguments,returns,throws,pos);
	return _result_;}

Dynamic Stub_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stub_obj > _result_ = new Stub_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::hunit::call::Expect Stub_obj::expect( ::hunit::call::CallCount count){
	HX_STACK_FRAME("hunit.call.Stub","expect",0xb05a5ceb,"hunit.call.Stub.expect","hunit/call/Stub.hx",58,0x634a48c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(count,"count")
	HX_STACK_LINE(60)
	::hunit::mock::MockData tmp = this->mockData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	::String tmp1 = this->method;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	::hunit::call::CallCount tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	Dynamic tmp3 = this->pos;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	::hunit::call::Expect tmp4 = ::hunit::call::Expect_obj::__new(tmp,tmp1,this->arguments,::hunit::utils::Value_obj::Nothing,::hunit::utils::Value_obj::Nothing,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	::hunit::call::Expect expect = tmp4;		HX_STACK_VAR(expect,"expect");
	HX_STACK_LINE(68)
	::hunit::mock::MockData tmp5 = this->mockData;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(68)
	::hunit::call::Expect tmp6 = expect;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(68)
	tmp5->expect(tmp6);
	HX_STACK_LINE(70)
	::hunit::call::Expect tmp7 = expect;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(70)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Stub_obj,expect,return )

bool Stub_obj::match( ::String method,cpp::ArrayBase arguments){
	HX_STACK_FRAME("hunit.call.Stub","match",0xe8a4e273,"hunit.call.Stub.match","hunit/call/Stub.hx",79,0x634a48c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(arguments,"arguments")
	HX_STACK_LINE(80)
	::String tmp = this->method;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	::String tmp1 = method;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	if ((tmp2)){
		HX_STACK_LINE(80)
		return false;
	}
	HX_STACK_LINE(82)
	int tmp3 = arguments->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	int tmp4 = this->arguments->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(82)
	bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(82)
	if ((tmp5)){
		HX_STACK_LINE(83)
		HX_STACK_DO_THROW(HX_HCSTRING("Arguments count does not match","\xac","\x19","\x64","\xea"));
	}
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(86)
		int tmp6 = this->arguments->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(86)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		while((true)){
			HX_STACK_LINE(86)
			bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(86)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(86)
			if ((tmp8)){
				HX_STACK_LINE(86)
				break;
			}
			HX_STACK_LINE(86)
			int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(86)
			int i = tmp9;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(87)
			::hunit::match::Match tmp10 = this->arguments->__get(i).StaticCast< ::hunit::match::Match >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(87)
			Dynamic tmp11 = arguments->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(87)
			bool tmp12 = tmp10->match(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(87)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(87)
			if ((tmp13)){
				HX_STACK_LINE(87)
				return false;
			}
		}
	}
	HX_STACK_LINE(90)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(Stub_obj,match,return )


Stub_obj::Stub_obj()
{
}

void Stub_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stub);
	HX_MARK_MEMBER_NAME(mockData,"mockData");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(arguments,"arguments");
	HX_MARK_MEMBER_NAME(returns,"returns");
	HX_MARK_MEMBER_NAME(throws,"throws");
	HX_MARK_MEMBER_NAME(implementation,"implementation");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void Stub_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mockData,"mockData");
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(arguments,"arguments");
	HX_VISIT_MEMBER_NAME(returns,"returns");
	HX_VISIT_MEMBER_NAME(throws,"throws");
	HX_VISIT_MEMBER_NAME(implementation,"implementation");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

Dynamic Stub_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return match_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		if (HX_FIELD_EQ(inName,"throws") ) { return throws; }
		if (HX_FIELD_EQ(inName,"expect") ) { return expect_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"returns") ) { return returns; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mockData") ) { return mockData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arguments") ) { return arguments; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"implementation") ) { return implementation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stub_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"throws") ) { throws=inValue.Cast< ::hunit::utils::Value >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"returns") ) { returns=inValue.Cast< ::hunit::utils::Value >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mockData") ) { mockData=inValue.Cast< ::hunit::mock::MockData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arguments") ) { arguments=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"implementation") ) { implementation=inValue.Cast< ::hunit::utils::Value >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stub_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Stub_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mockData","\xd4","\x61","\xba","\xc0"));
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	outFields->push(HX_HCSTRING("arguments","\x56","\x3f","\x97","\xee"));
	outFields->push(HX_HCSTRING("returns","\xc3","\x75","\xc2","\xfe"));
	outFields->push(HX_HCSTRING("throws","\x8d","\x24","\xc1","\x8e"));
	outFields->push(HX_HCSTRING("implementation","\x32","\xd2","\x2d","\x53"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hunit::mock::MockData*/ ,(int)offsetof(Stub_obj,mockData),HX_HCSTRING("mockData","\xd4","\x61","\xba","\xc0")},
	{hx::fsString,(int)offsetof(Stub_obj,method),HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stub_obj,arguments),HX_HCSTRING("arguments","\x56","\x3f","\x97","\xee")},
	{hx::fsObject /*::hunit::utils::Value*/ ,(int)offsetof(Stub_obj,returns),HX_HCSTRING("returns","\xc3","\x75","\xc2","\xfe")},
	{hx::fsObject /*::hunit::utils::Value*/ ,(int)offsetof(Stub_obj,throws),HX_HCSTRING("throws","\x8d","\x24","\xc1","\x8e")},
	{hx::fsObject /*::hunit::utils::Value*/ ,(int)offsetof(Stub_obj,implementation),HX_HCSTRING("implementation","\x32","\xd2","\x2d","\x53")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stub_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mockData","\xd4","\x61","\xba","\xc0"),
	HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"),
	HX_HCSTRING("arguments","\x56","\x3f","\x97","\xee"),
	HX_HCSTRING("returns","\xc3","\x75","\xc2","\xfe"),
	HX_HCSTRING("throws","\x8d","\x24","\xc1","\x8e"),
	HX_HCSTRING("implementation","\x32","\xd2","\x2d","\x53"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("expect","\xd9","\xed","\x75","\xc4"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stub_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stub_obj::__mClass,"__mClass");
};

#endif

hx::Class Stub_obj::__mClass;

void Stub_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.call.Stub","\x1c","\xc3","\x89","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Stub_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stub_obj >;
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
