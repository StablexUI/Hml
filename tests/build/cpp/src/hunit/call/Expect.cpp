#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hunit_call_Call
#include <hunit/call/Call.h>
#endif
#ifndef INCLUDED_hunit_call_CallCount
#include <hunit/call/CallCount.h>
#endif
#ifndef INCLUDED_hunit_call_Expect
#include <hunit/call/Expect.h>
#endif
#ifndef INCLUDED_hunit_call_IExpect
#include <hunit/call/IExpect.h>
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
#ifndef INCLUDED_hunit_utils_ValueTools
#include <hunit/utils/ValueTools.h>
#endif
namespace hunit{
namespace call{

Void Expect_obj::__construct(::hunit::mock::MockData mockData,::String method,Array< ::Dynamic > arguments,::hunit::utils::Value returns,::hunit::utils::Value throws,::hunit::call::CallCount count,Dynamic pos)
{
HX_STACK_FRAME("hunit.call.Expect","new",0x2619e3b9,"hunit.call.Expect.new","hunit/call/Expect.hx",17,0xcbafcd77)
HX_STACK_THIS(this)
HX_STACK_ARG(mockData,"mockData")
HX_STACK_ARG(method,"method")
HX_STACK_ARG(arguments,"arguments")
HX_STACK_ARG(returns,"returns")
HX_STACK_ARG(throws,"throws")
HX_STACK_ARG(count,"count")
HX_STACK_ARG(pos,"pos")
{
	HX_STACK_LINE(36)
	this->fromCallId = (int)0;
	HX_STACK_LINE(34)
	this->timesMatched = (int)0;
	HX_STACK_LINE(45)
	this->mockData = mockData;
	HX_STACK_LINE(46)
	this->method = method;
	HX_STACK_LINE(47)
	this->arguments = arguments;
	HX_STACK_LINE(48)
	this->returns = returns;
	HX_STACK_LINE(49)
	this->throws = throws;
	HX_STACK_LINE(50)
	this->count = count;
	HX_STACK_LINE(51)
	this->pos = pos;
}
;
	return null();
}

//Expect_obj::~Expect_obj() { }

Dynamic Expect_obj::__CreateEmpty() { return  new Expect_obj; }
hx::ObjectPtr< Expect_obj > Expect_obj::__new(::hunit::mock::MockData mockData,::String method,Array< ::Dynamic > arguments,::hunit::utils::Value returns,::hunit::utils::Value throws,::hunit::call::CallCount count,Dynamic pos)
{  hx::ObjectPtr< Expect_obj > _result_ = new Expect_obj();
	_result_->__construct(mockData,method,arguments,returns,throws,count,pos);
	return _result_;}

Dynamic Expect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Expect_obj > _result_ = new Expect_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

hx::Object *Expect_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::hunit::call::IExpect_obj)) return operator ::hunit::call::IExpect_obj *();
	return super::__ToInterface(inType);
}

Expect_obj::operator ::hunit::call::IExpect_obj *()
	{ return new ::hunit::call::IExpect_delegate_< Expect_obj >(this); }
bool Expect_obj::sameObjectMethod( ::hunit::call::Call call){
	HX_STACK_FRAME("hunit.call.Expect","sameObjectMethod",0xc41b5c8d,"hunit.call.Expect.sameObjectMethod","hunit/call/Expect.hx",60,0xcbafcd77)
	HX_STACK_THIS(this)
	HX_STACK_ARG(call,"call")
	HX_STACK_LINE(61)
	::hunit::mock::MockData tmp = this->mockData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	::hunit::mock::MockData tmp1 = call->mockData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	if ((tmp2)){
		HX_STACK_LINE(61)
		::String tmp4 = this->method;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		::String tmp6 = call->method;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		tmp3 = (tmp5 == tmp6);
	}
	else{
		HX_STACK_LINE(61)
		tmp3 = false;
	}
	HX_STACK_LINE(61)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Expect_obj,sameObjectMethod,return )

bool Expect_obj::match( ::hunit::call::Call call){
	HX_STACK_FRAME("hunit.call.Expect","match",0xb517a4de,"hunit.call.Expect.match","hunit/call/Expect.hx",70,0xcbafcd77)
	HX_STACK_THIS(this)
	HX_STACK_ARG(call,"call")
	HX_STACK_LINE(71)
	::hunit::mock::MockData tmp = this->mockData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	::hunit::mock::MockData tmp1 = call->mockData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	if ((tmp2)){
		HX_STACK_LINE(71)
		return false;
	}
	HX_STACK_LINE(73)
	::String tmp3 = this->method;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	::String tmp4 = call->method;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(73)
	bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(73)
	if ((tmp5)){
		HX_STACK_LINE(73)
		return false;
	}
	HX_STACK_LINE(75)
	int tmp6 = this->arguments->length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(75)
	int tmp7 = call->arguments->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(75)
	bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(75)
	if ((tmp8)){
		HX_STACK_LINE(76)
		HX_STACK_DO_THROW(HX_HCSTRING("Arguments count does not match","\xac","\x19","\x64","\xea"));
	}
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(79)
		int tmp9 = this->arguments->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(79)
		int _g = tmp9;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(79)
		while((true)){
			HX_STACK_LINE(79)
			bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(79)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(79)
			if ((tmp11)){
				HX_STACK_LINE(79)
				break;
			}
			HX_STACK_LINE(79)
			int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(79)
			int i = tmp12;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(80)
			::hunit::match::Match tmp13 = this->arguments->__get(i).StaticCast< ::hunit::match::Match >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(80)
			Dynamic tmp14 = call->arguments->__GetItem(i);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(80)
			bool tmp15 = tmp13->match(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(80)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(80)
			if ((tmp16)){
				HX_STACK_LINE(80)
				return false;
			}
		}
	}
	HX_STACK_LINE(83)
	::hunit::utils::Value tmp9 = this->returns;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(83)
	bool tmp10 = ::hunit::utils::ValueTools_obj::hasValue(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(83)
	if ((tmp10)){
		HX_STACK_LINE(84)
		::hunit::utils::Value tmp11 = call->result;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(84)
		bool tmp12 = ::hunit::utils::ValueTools_obj::hasValue(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(84)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(84)
		if ((tmp13)){
			HX_STACK_LINE(84)
			return false;
		}
		HX_STACK_LINE(86)
		::hunit::utils::Value tmp14 = this->returns;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(86)
		::hunit::match::Match tmp15 = ::hunit::utils::ValueTools_obj::getValue(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(86)
		::hunit::match::Match expected = tmp15;		HX_STACK_VAR(expected,"expected");
		HX_STACK_LINE(87)
		::hunit::utils::Value tmp16 = call->result;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(87)
		Dynamic tmp17 = ::hunit::utils::ValueTools_obj::getValue(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(87)
		Dynamic actual = tmp17;		HX_STACK_VAR(actual,"actual");
		HX_STACK_LINE(88)
		Dynamic tmp18 = actual;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(88)
		bool tmp19 = expected->match(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(88)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(88)
		if ((tmp20)){
			HX_STACK_LINE(88)
			return false;
		}
	}
	HX_STACK_LINE(91)
	::hunit::utils::Value tmp11 = this->throws;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(91)
	bool tmp12 = ::hunit::utils::ValueTools_obj::hasValue(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(91)
	if ((tmp12)){
		HX_STACK_LINE(92)
		::hunit::utils::Value tmp13 = call->exceptionValue;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(92)
		bool tmp14 = ::hunit::utils::ValueTools_obj::hasValue(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(92)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(92)
		if ((tmp15)){
			HX_STACK_LINE(93)
			return false;
		}
		HX_STACK_LINE(96)
		::hunit::utils::Value tmp16 = call->exceptionValue;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(96)
		Dynamic tmp17 = ::hunit::utils::ValueTools_obj::getValue(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(96)
		Dynamic e = tmp17;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(97)
		::hunit::utils::Value tmp18 = this->throws;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(97)
		::hunit::match::Match tmp19 = ::hunit::utils::ValueTools_obj::getValue(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(97)
		Dynamic tmp20 = e;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(97)
		bool tmp21 = tmp19->match(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(97)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(97)
		if ((tmp22)){
			HX_STACK_LINE(98)
			return false;
		}
	}
	HX_STACK_LINE(102)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Expect_obj,match,return )

Void Expect_obj::validate( ){
{
		HX_STACK_FRAME("hunit.call.Expect","validate",0x8efbfa9d,"hunit.call.Expect.validate","hunit/call/Expect.hx",111,0xcbafcd77)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		::hunit::mock::MockData tmp = this->mockData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		tmp->validateExpectation(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Expect_obj,validate,(void))

bool Expect_obj::tooManyCalls( ){
	HX_STACK_FRAME("hunit.call.Expect","tooManyCalls",0x9025c549,"hunit.call.Expect.tooManyCalls","hunit/call/Expect.hx",121,0xcbafcd77)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		::hunit::call::CallCount tmp1 = this->count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		::hunit::call::CallCount _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(123)
				int tmp2 = this->timesMatched;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(123)
				tmp = (tmp2 > (int)0);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(124)
				tmp = false;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(125)
				int tmp2 = this->timesMatched;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(125)
				tmp = (tmp2 > (int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(122)
				int tmp2 = (::hunit::call::CallCount(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(122)
				int amount = tmp2;		HX_STACK_VAR(amount,"amount");
				HX_STACK_LINE(126)
				tmp = false;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(122)
				int tmp2 = (::hunit::call::CallCount(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(122)
				int amount = tmp2;		HX_STACK_VAR(amount,"amount");
				HX_STACK_LINE(127)
				{
					HX_STACK_LINE(127)
					int tmp3 = this->timesMatched;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(127)
					int tmp4 = amount;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(127)
					tmp = (tmp3 > tmp4);
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(122)
	return tmp;
	HX_STACK_LINE(122)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Expect_obj,tooManyCalls,return )

::String Expect_obj::toString( ){
	HX_STACK_FRAME("hunit.call.Expect","toString",0xc286fab3,"hunit.call.Expect.toString","hunit/call/Expect.hx",137,0xcbafcd77)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	::hunit::mock::MockData tmp = this->mockData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	::String tmp1 = tmp->mockClassName();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	::String cls = tmp1;		HX_STACK_VAR(cls,"cls");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::String run(::hunit::match::Match a){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","hunit/call/Expect.hx",139,0xcbafcd77)
		HX_STACK_ARG(a,"a")
		{
			HX_STACK_LINE(139)
			::String tmp2 = a->toString();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(139)
			::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			return tmp3;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(139)
	::String tmp2 = this->arguments->map( Dynamic(new _Function_1_1())).StaticCast< Array< ::String > >()->join(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	::String args = tmp2;		HX_STACK_VAR(args,"args");
	HX_STACK_LINE(141)
	Array< ::String > results = Array_obj< ::String >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(142)
	::hunit::utils::Value tmp3 = this->returns;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(142)
	bool tmp4 = ::hunit::utils::ValueTools_obj::hasValue(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(142)
	if ((tmp4)){
		HX_STACK_LINE(143)
		::hunit::utils::Value tmp5 = this->returns;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		::hunit::match::Match tmp6 = ::hunit::utils::ValueTools_obj::getValue(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(143)
		::String tmp8 = (HX_HCSTRING("to return ","\xcb","\x91","\x7b","\xbd") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(143)
		results->push(tmp8);
	}
	HX_STACK_LINE(145)
	::hunit::utils::Value tmp5 = this->throws;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(145)
	bool tmp6 = ::hunit::utils::ValueTools_obj::hasValue(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(145)
	if ((tmp6)){
		HX_STACK_LINE(146)
		::hunit::utils::Value tmp7 = this->throws;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(146)
		::hunit::match::Match tmp8 = ::hunit::utils::ValueTools_obj::getValue(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(146)
		::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(146)
		::String tmp10 = (HX_HCSTRING("to throw ","\x3f","\x0c","\xb3","\x23") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(146)
		results->push(tmp10);
	}
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(149)
		::hunit::call::CallCount tmp7 = this->count;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(149)
		::hunit::call::CallCount _g = tmp7;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(149)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(150)
				results->push(HX_HCSTRING("to be called zero or more times","\xcb","\x40","\x15","\x9c"));
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(151)
				results->push(HX_HCSTRING("to be never called","\x69","\x43","\x6b","\xe7"));
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(152)
				results->push(HX_HCSTRING("to be called once","\x2c","\x6b","\x92","\x82"));
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(149)
				int tmp8 = (::hunit::call::CallCount(_g))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(149)
				int amount = tmp8;		HX_STACK_VAR(amount,"amount");
				HX_STACK_LINE(153)
				{
					HX_STACK_LINE(153)
					::String tmp9 = (HX_HCSTRING("to be called at least ","\x99","\xe7","\xc7","\xd3") + amount);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(153)
					::String tmp10 = (tmp9 + HX_HCSTRING(" time","\x2d","\x5c","\xcf","\xb9"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(153)
					bool tmp11 = (amount == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(153)
					::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(153)
					if ((tmp11)){
						HX_STACK_LINE(153)
						tmp12 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					else{
						HX_STACK_LINE(153)
						tmp12 = HX_HCSTRING("s","\x73","\x00","\x00","\x00");
					}
					HX_STACK_LINE(153)
					::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(153)
					results->push(tmp13);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(149)
				int tmp8 = (::hunit::call::CallCount(_g))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(149)
				int amount = tmp8;		HX_STACK_VAR(amount,"amount");
				HX_STACK_LINE(154)
				{
					HX_STACK_LINE(154)
					::String tmp9 = (HX_HCSTRING("to be called exactly ","\xbf","\xda","\x9e","\x26") + amount);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(154)
					::String tmp10 = (tmp9 + HX_HCSTRING(" time","\x2d","\x5c","\xcf","\xb9"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(154)
					bool tmp11 = (amount == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(154)
					::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(154)
					if ((tmp11)){
						HX_STACK_LINE(154)
						tmp12 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					else{
						HX_STACK_LINE(154)
						tmp12 = HX_HCSTRING("s","\x73","\x00","\x00","\x00");
					}
					HX_STACK_LINE(154)
					::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(154)
					results->push(tmp13);
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(157)
	::String tmp7 = results->pop();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(157)
	::String last = tmp7;		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(158)
	bool tmp8 = (results->length == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(158)
	::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(158)
	if ((tmp8)){
		HX_STACK_LINE(158)
		tmp9 = last;
	}
	else{
		HX_STACK_LINE(158)
		::String tmp10 = results->join(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(158)
		::String tmp11 = (HX_HCSTRING(" and ","\x89","\x11","\x44","\xad") + last);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(158)
		tmp9 = (tmp10 + tmp11);
	}
	HX_STACK_LINE(158)
	::String toDo = tmp9;		HX_STACK_VAR(toDo,"toDo");
	HX_STACK_LINE(159)
	::String tmp10 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + cls);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(159)
	::String tmp11 = (tmp10 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(159)
	::String tmp12 = this->method;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(159)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(159)
	::String tmp14 = (tmp13 + HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(159)
	::String tmp15 = args;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(159)
	::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(159)
	::String tmp17 = (tmp16 + HX_HCSTRING(") is expected ","\x49","\xa5","\x87","\xb4"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(159)
	::String tmp18 = toDo;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(159)
	::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(159)
	::String msg = tmp19;		HX_STACK_VAR(msg,"msg");
	HX_STACK_LINE(161)
	::String tmp20 = msg;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(161)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC0(Expect_obj,toString,return )


Expect_obj::Expect_obj()
{
}

void Expect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Expect);
	HX_MARK_MEMBER_NAME(mockData,"mockData");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(arguments,"arguments");
	HX_MARK_MEMBER_NAME(returns,"returns");
	HX_MARK_MEMBER_NAME(throws,"throws");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(timesMatched,"timesMatched");
	HX_MARK_MEMBER_NAME(fromCallId,"fromCallId");
	HX_MARK_END_CLASS();
}

void Expect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mockData,"mockData");
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(arguments,"arguments");
	HX_VISIT_MEMBER_NAME(returns,"returns");
	HX_VISIT_MEMBER_NAME(throws,"throws");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(timesMatched,"timesMatched");
	HX_VISIT_MEMBER_NAME(fromCallId,"fromCallId");
}

Dynamic Expect_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		if (HX_FIELD_EQ(inName,"match") ) { return match_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		if (HX_FIELD_EQ(inName,"throws") ) { return throws; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"returns") ) { return returns; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mockData") ) { return mockData; }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arguments") ) { return arguments; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromCallId") ) { return fromCallId; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"timesMatched") ) { return timesMatched; }
		if (HX_FIELD_EQ(inName,"tooManyCalls") ) { return tooManyCalls_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sameObjectMethod") ) { return sameObjectMethod_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Expect_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< ::hunit::call::CallCount >(); return inValue; }
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
	case 10:
		if (HX_FIELD_EQ(inName,"fromCallId") ) { fromCallId=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"timesMatched") ) { timesMatched=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Expect_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Expect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mockData","\xd4","\x61","\xba","\xc0"));
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	outFields->push(HX_HCSTRING("arguments","\x56","\x3f","\x97","\xee"));
	outFields->push(HX_HCSTRING("returns","\xc3","\x75","\xc2","\xfe"));
	outFields->push(HX_HCSTRING("throws","\x8d","\x24","\xc1","\x8e"));
	outFields->push(HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("timesMatched","\xbe","\xc9","\x61","\xc7"));
	outFields->push(HX_HCSTRING("fromCallId","\x23","\x41","\x2c","\xfa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hunit::mock::MockData*/ ,(int)offsetof(Expect_obj,mockData),HX_HCSTRING("mockData","\xd4","\x61","\xba","\xc0")},
	{hx::fsString,(int)offsetof(Expect_obj,method),HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Expect_obj,arguments),HX_HCSTRING("arguments","\x56","\x3f","\x97","\xee")},
	{hx::fsObject /*::hunit::utils::Value*/ ,(int)offsetof(Expect_obj,returns),HX_HCSTRING("returns","\xc3","\x75","\xc2","\xfe")},
	{hx::fsObject /*::hunit::utils::Value*/ ,(int)offsetof(Expect_obj,throws),HX_HCSTRING("throws","\x8d","\x24","\xc1","\x8e")},
	{hx::fsObject /*::hunit::call::CallCount*/ ,(int)offsetof(Expect_obj,count),HX_HCSTRING("count","\xcf","\x44","\x63","\x4a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Expect_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsInt,(int)offsetof(Expect_obj,timesMatched),HX_HCSTRING("timesMatched","\xbe","\xc9","\x61","\xc7")},
	{hx::fsInt,(int)offsetof(Expect_obj,fromCallId),HX_HCSTRING("fromCallId","\x23","\x41","\x2c","\xfa")},
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
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("timesMatched","\xbe","\xc9","\x61","\xc7"),
	HX_HCSTRING("fromCallId","\x23","\x41","\x2c","\xfa"),
	HX_HCSTRING("sameObjectMethod","\x86","\x53","\x2f","\x02"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("tooManyCalls","\xc2","\x8b","\xe2","\x3d"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Expect_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Expect_obj::__mClass,"__mClass");
};

#endif

hx::Class Expect_obj::__mClass;

void Expect_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.call.Expect","\x47","\x93","\x25","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Expect_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Expect_obj >;
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
