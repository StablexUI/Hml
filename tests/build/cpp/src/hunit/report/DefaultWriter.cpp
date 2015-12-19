#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_hunit_exceptions_TestFailException
#include <hunit/exceptions/TestFailException.h>
#endif
#ifndef INCLUDED_hunit_exceptions_UnexpectedCallException
#include <hunit/exceptions/UnexpectedCallException.h>
#endif
#ifndef INCLUDED_hunit_exceptions_UnexpectedException
#include <hunit/exceptions/UnexpectedException.h>
#endif
#ifndef INCLUDED_hunit_report_DefaultWriter
#include <hunit/report/DefaultWriter.h>
#endif
#ifndef INCLUDED_hunit_report_IReportWriter
#include <hunit/report/IReportWriter.h>
#endif
#ifndef INCLUDED_hunit_report_TestReport
#include <hunit/report/TestReport.h>
#endif
#ifndef INCLUDED_hunit_warnings_Warning
#include <hunit/warnings/Warning.h>
#endif
namespace hunit{
namespace report{

Void DefaultWriter_obj::__construct(Dynamic printer)
{
HX_STACK_FRAME("hunit.report.DefaultWriter","new",0xdee4d0ae,"hunit.report.DefaultWriter.new","hunit/report/DefaultWriter.hx",17,0xdc6310a2)
HX_STACK_THIS(this)
HX_STACK_ARG(printer,"printer")
{
	HX_STACK_LINE(20)
	this->itemsWriteCounter = (int)0;
	HX_STACK_LINE(31)
	this->printer = printer;
}
;
	return null();
}

//DefaultWriter_obj::~DefaultWriter_obj() { }

Dynamic DefaultWriter_obj::__CreateEmpty() { return  new DefaultWriter_obj; }
hx::ObjectPtr< DefaultWriter_obj > DefaultWriter_obj::__new(Dynamic printer)
{  hx::ObjectPtr< DefaultWriter_obj > _result_ = new DefaultWriter_obj();
	_result_->__construct(printer);
	return _result_;}

Dynamic DefaultWriter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultWriter_obj > _result_ = new DefaultWriter_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *DefaultWriter_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::hunit::report::IReportWriter_obj)) return operator ::hunit::report::IReportWriter_obj *();
	return super::__ToInterface(inType);
}

DefaultWriter_obj::operator ::hunit::report::IReportWriter_obj *()
	{ return new ::hunit::report::IReportWriter_delegate_< DefaultWriter_obj >(this); }
Void DefaultWriter_obj::write( ::hunit::report::TestReport report){
{
		HX_STACK_FRAME("hunit.report.DefaultWriter","write",0x35659cad,"hunit.report.DefaultWriter.write","hunit/report/DefaultWriter.hx",40,0xdc6310a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(report,"report")
		HX_STACK_LINE(41)
		int tmp = report->notices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		if ((tmp1)){
			HX_STACK_LINE(42)
			this->printer(HX_HCSTRING("NOTICES:\n\n","\x1f","\x31","\xf4","\x0a"));
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				::_List::ListIterator tmp2 = ::_List::ListIterator_obj::__new(report->notices->h);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				::_List::ListIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(44)
				while((true)){
					HX_STACK_LINE(44)
					bool tmp3 = (_g->head != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(44)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(44)
					if ((tmp4)){
						HX_STACK_LINE(44)
						break;
					}
					HX_STACK_LINE(44)
					Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(44)
					{
						HX_STACK_LINE(44)
						Dynamic tmp6 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(44)
						_g->val = tmp6;
						HX_STACK_LINE(44)
						Dynamic tmp7 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(44)
						_g->head = tmp7;
						HX_STACK_LINE(44)
						tmp5 = _g->val;
					}
					HX_STACK_LINE(44)
					Dynamic notice = tmp5;		HX_STACK_VAR(notice,"notice");
					HX_STACK_LINE(45)
					Dynamic tmp6 = notice;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(45)
					this->writeNotice(tmp6);
				}
			}
		}
		HX_STACK_LINE(49)
		this->itemsWriteCounter = (int)0;
		HX_STACK_LINE(51)
		int tmp2 = report->fails->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		if ((tmp3)){
			HX_STACK_LINE(52)
			this->printer(HX_HCSTRING("FAILURES:\n\n","\x31","\x62","\x1d","\xbb"));
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::_List::ListIterator tmp4 = ::_List::ListIterator_obj::__new(report->fails->h);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				::_List::ListIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(54)
				while((true)){
					HX_STACK_LINE(54)
					bool tmp5 = (_g->head != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(54)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(54)
					if ((tmp6)){
						HX_STACK_LINE(54)
						break;
					}
					HX_STACK_LINE(54)
					Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						Dynamic tmp8 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(54)
						_g->val = tmp8;
						HX_STACK_LINE(54)
						Dynamic tmp9 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(54)
						_g->head = tmp9;
						HX_STACK_LINE(54)
						tmp7 = _g->val;
					}
					HX_STACK_LINE(54)
					Dynamic fail = tmp7;		HX_STACK_VAR(fail,"fail");
					HX_STACK_LINE(55)
					Dynamic tmp8 = fail;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(55)
					this->writeFail(tmp8);
				}
			}
		}
		HX_STACK_LINE(59)
		this->itemsWriteCounter = (int)0;
		HX_STACK_LINE(61)
		int tmp4 = report->warnings->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		if ((tmp5)){
			HX_STACK_LINE(62)
			this->printer(HX_HCSTRING("WARNINGS:\n\n","\x43","\x3d","\x22","\xc1"));
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				::_List::ListIterator tmp6 = ::_List::ListIterator_obj::__new(report->warnings->h);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(64)
				::_List::ListIterator _g = tmp6;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(64)
				while((true)){
					HX_STACK_LINE(64)
					bool tmp7 = (_g->head != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(64)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(64)
					if ((tmp8)){
						HX_STACK_LINE(64)
						break;
					}
					HX_STACK_LINE(64)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(64)
					{
						HX_STACK_LINE(64)
						Dynamic tmp10 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(64)
						_g->val = tmp10;
						HX_STACK_LINE(64)
						Dynamic tmp11 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(64)
						_g->head = tmp11;
						HX_STACK_LINE(64)
						tmp9 = _g->val;
					}
					HX_STACK_LINE(64)
					Dynamic warning = tmp9;		HX_STACK_VAR(warning,"warning");
					HX_STACK_LINE(65)
					Dynamic tmp10 = warning;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(65)
					this->writeWarning(tmp10);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultWriter_obj,write,(void))

Void DefaultWriter_obj::writeFail( Dynamic item){
{
		HX_STACK_FRAME("hunit.report.DefaultWriter","writeFail",0x9944dd2b,"hunit.report.DefaultWriter.writeFail","hunit/report/DefaultWriter.hx",76,0xdc6310a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(77)
		Dynamic tmp = item->__Field(HX_HCSTRING("exception","\x4f","\x10","\x9a","\x49"), hx::paccDynamic )->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		Dynamic pos = tmp;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(78)
		::String tmp1 = item->__Field(HX_HCSTRING("exception","\x4f","\x10","\x9a","\x49"), hx::paccDynamic )->__Field(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		::String message = tmp1;		HX_STACK_VAR(message,"message");
		HX_STACK_LINE(79)
		::Exception e = item->__Field(HX_HCSTRING("exception","\x4f","\x10","\x9a","\x49"), hx::paccDynamic );		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(81)
		::Exception tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::hunit::exceptions::TestFailException >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		if ((tmp3)){
			HX_STACK_LINE(82)
			::Exception tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::hunit::exceptions::UnexpectedCallException >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			if ((tmp5)){
				HX_STACK_LINE(83)
				pos = null();
				HX_STACK_LINE(84)
				::Exception tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(84)
				tmp6 = hx::TCast< ::Exception >::cast(e);
				HX_STACK_LINE(84)
				::String tmp7 = tmp6->stringStack();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(84)
				::String tmp8 = ::StringTools_obj::replace(tmp7,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),HX_HCSTRING("\n\t","\xbf","\x08","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(84)
				hx::AddEq(message,tmp8);
			}
		}
		else{
			HX_STACK_LINE(88)
			pos = null();
			HX_STACK_LINE(90)
			bool customMessage = false;		HX_STACK_VAR(customMessage,"customMessage");
			HX_STACK_LINE(91)
			::Exception tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::hunit::exceptions::UnexpectedException >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			if ((tmp5)){
				HX_STACK_LINE(92)
				::hunit::exceptions::UnexpectedException tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				tmp6 = hx::TCast< ::hunit::exceptions::UnexpectedException >::cast(e);
				HX_STACK_LINE(92)
				::hunit::exceptions::UnexpectedException e1 = tmp6;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(93)
				customMessage = true;
				HX_STACK_LINE(95)
				Dynamic tmp7 = e1->original;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(95)
				bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::Exception >());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(95)
				if ((tmp8)){
					HX_STACK_LINE(96)
					::Exception tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(96)
					tmp9 = hx::TCast< ::Exception >::cast(e1->original);
					HX_STACK_LINE(96)
					::String tmp10 = tmp9->toString();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(96)
					::String tmp11 = (HX_HCSTRING("ERROR: ","\x4e","\x70","\xde","\x69") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(96)
					message = tmp11;
				}
				else{
					HX_STACK_LINE(98)
					::hunit::exceptions::UnexpectedException tmp9 = e1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(98)
					::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(98)
					::String tmp11 = (HX_HCSTRING("ERROR: ","\x4e","\x70","\xde","\x69") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(98)
					message = tmp11;
				}
			}
			HX_STACK_LINE(102)
			bool tmp6 = customMessage;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(102)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(102)
			if ((tmp7)){
				HX_STACK_LINE(103)
				::String tmp8 = (HX_HCSTRING("ERROR: ","\x4e","\x70","\xde","\x69") + e->message);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(103)
				::String tmp9 = (tmp8 + HX_HCSTRING("\n\n","\xc0","\x08","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(103)
				::String tmp10 = e->toString();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(103)
				::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(103)
				message = tmp11;
			}
		}
		HX_STACK_LINE(107)
		::String tmp4 = item->__Field(HX_HCSTRING("caseName","\x1b","\xd5","\x7f","\x36"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		::String tmp5 = item->__Field(HX_HCSTRING("testName","\xbd","\xf7","\x31","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		::String tmp6 = message;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(107)
		Dynamic tmp7 = pos;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(107)
		this->writeItem(tmp4,tmp5,tmp6,tmp7,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultWriter_obj,writeFail,(void))

Void DefaultWriter_obj::writeWarning( Dynamic item){
{
		HX_STACK_FRAME("hunit.report.DefaultWriter","writeWarning",0xacfa052f,"hunit.report.DefaultWriter.writeWarning","hunit/report/DefaultWriter.hx",116,0xdc6310a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(117)
		::String tmp = item->__Field(HX_HCSTRING("caseName","\x1b","\xd5","\x7f","\x36"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		::String tmp1 = item->__Field(HX_HCSTRING("testName","\xbd","\xf7","\x31","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		::String tmp2 = item->__Field(HX_HCSTRING("warning","\x5c","\xda","\xcb","\x09"), hx::paccDynamic )->__Field(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		this->writeItem(tmp,tmp1,tmp2,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultWriter_obj,writeWarning,(void))

Void DefaultWriter_obj::writeNotice( Dynamic item){
{
		HX_STACK_FRAME("hunit.report.DefaultWriter","writeNotice",0x63d128a5,"hunit.report.DefaultWriter.writeNotice","hunit/report/DefaultWriter.hx",126,0xdc6310a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(127)
		::String tmp = item->__Field(HX_HCSTRING("caseName","\x1b","\xd5","\x7f","\x36"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		::String tmp1 = item->__Field(HX_HCSTRING("testName","\xbd","\xf7","\x31","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		::String tmp2 = item->__Field(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		Dynamic tmp3 = item->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(127)
		this->writeItem(tmp,tmp1,tmp2,tmp3,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultWriter_obj,writeNotice,(void))

Void DefaultWriter_obj::writeItem( ::String caseName,::String test,::String message,Dynamic pos,hx::Null< bool >  __o_addPosToTestName){
bool addPosToTestName = __o_addPosToTestName.Default(false);
	HX_STACK_FRAME("hunit.report.DefaultWriter","writeItem",0x9b4ee860,"hunit.report.DefaultWriter.writeItem","hunit/report/DefaultWriter.hx",136,0xdc6310a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(caseName,"caseName")
	HX_STACK_ARG(test,"test")
	HX_STACK_ARG(message,"message")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(addPosToTestName,"addPosToTestName")
{
		HX_STACK_LINE(137)
		(this->itemsWriteCounter)++;
		HX_STACK_LINE(139)
		int tmp = this->itemsWriteCounter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		int idx = tmp;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(141)
		bool tmp1 = (pos == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		if ((tmp1)){
			HX_STACK_LINE(141)
			tmp2 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(141)
			::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + pos->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(141)
			::String tmp4 = (tmp3 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(141)
			int tmp5 = pos->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(141)
			tmp2 = (tmp4 + tmp5);
		}
		HX_STACK_LINE(141)
		::String posStr = tmp2;		HX_STACK_VAR(posStr,"posStr");
		HX_STACK_LINE(143)
		::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + idx);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		::String tmp4 = (tmp3 + HX_HCSTRING(") ","\xd7","\x23","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		::String tmp5 = caseName;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		::String tmp7 = (tmp6 + HX_HCSTRING("::","\xc0","\x32","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(143)
		::String tmp8 = test;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(143)
		::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(143)
		::String tmp10 = (tmp9 + HX_HCSTRING("()","\x01","\x23","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(143)
		bool tmp11 = addPosToTestName;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(143)
		::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(143)
		if ((tmp11)){
			HX_STACK_LINE(143)
			tmp12 = (HX_HCSTRING(" at ","\xad","\xd3","\x70","\x15") + posStr);
		}
		else{
			HX_STACK_LINE(143)
			tmp12 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(143)
		::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(143)
		::String tmp14 = (tmp13 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(143)
		this->printer(tmp14);
		HX_STACK_LINE(144)
		::String tmp15 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + message);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(144)
		::String tmp16 = (tmp15 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(144)
		this->printer(tmp16);
		HX_STACK_LINE(145)
		this->printer(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		HX_STACK_LINE(147)
		bool tmp17 = (pos != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(147)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(147)
		if ((tmp17)){
			HX_STACK_LINE(147)
			bool tmp19 = addPosToTestName;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(147)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(147)
			tmp18 = !(tmp20);
		}
		else{
			HX_STACK_LINE(147)
			tmp18 = false;
		}
		HX_STACK_LINE(147)
		if ((tmp18)){
			HX_STACK_LINE(148)
			::String tmp19 = (HX_HCSTRING("\t","\x09","\x00","\x00","\x00") + posStr);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(148)
			::String tmp20 = (tmp19 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(148)
			this->printer(tmp20);
			HX_STACK_LINE(149)
			this->printer(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(DefaultWriter_obj,writeItem,(void))


DefaultWriter_obj::DefaultWriter_obj()
{
}

void DefaultWriter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultWriter);
	HX_MARK_MEMBER_NAME(itemsWriteCounter,"itemsWriteCounter");
	HX_MARK_MEMBER_NAME(printer,"printer");
	HX_MARK_END_CLASS();
}

void DefaultWriter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(itemsWriteCounter,"itemsWriteCounter");
	HX_VISIT_MEMBER_NAME(printer,"printer");
}

Dynamic DefaultWriter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return write_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"printer") ) { return printer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeFail") ) { return writeFail_dyn(); }
		if (HX_FIELD_EQ(inName,"writeItem") ) { return writeItem_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeNotice") ) { return writeNotice_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"writeWarning") ) { return writeWarning_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"itemsWriteCounter") ) { return itemsWriteCounter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultWriter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"printer") ) { printer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"itemsWriteCounter") ) { itemsWriteCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DefaultWriter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DefaultWriter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("itemsWriteCounter","\xfd","\x4b","\xf9","\xa2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DefaultWriter_obj,itemsWriteCounter),HX_HCSTRING("itemsWriteCounter","\xfd","\x4b","\xf9","\xa2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DefaultWriter_obj,printer),HX_HCSTRING("printer","\xda","\xd5","\x33","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("itemsWriteCounter","\xfd","\x4b","\xf9","\xa2"),
	HX_HCSTRING("printer","\xda","\xd5","\x33","\x84"),
	HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"),
	HX_HCSTRING("writeFail","\x5d","\xae","\x69","\x4c"),
	HX_HCSTRING("writeWarning","\x3d","\x7f","\xfa","\xce"),
	HX_HCSTRING("writeNotice","\x57","\x2a","\xb2","\xc6"),
	HX_HCSTRING("writeItem","\x92","\xb9","\x73","\x4e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultWriter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultWriter_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultWriter_obj::__mClass;

void DefaultWriter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.report.DefaultWriter","\xbc","\xa1","\xef","\xd9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DefaultWriter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultWriter_obj >;
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
} // end namespace report
