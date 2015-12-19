#include <hxcpp.h>

#ifndef INCLUDED_Signal
#include <Signal.h>
#endif
#ifndef INCLUDED_SignalValueTest
#include <SignalValueTest.h>
#endif
#ifndef INCLUDED_hunit_TestCase
#include <hunit/TestCase.h>
#endif
#ifndef INCLUDED_hunit_assert_AssertFactory
#include <hunit/assert/AssertFactory.h>
#endif
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif

Void SignalValueTest_obj::__construct()
{
HX_STACK_FRAME("SignalValueTest","new",0xeb92472d,"SignalValueTest.new","SignalValueTest.hx",11,0x93ff7ce3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	super::__construct();
}
;
	return null();
}

//SignalValueTest_obj::~SignalValueTest_obj() { }

Dynamic SignalValueTest_obj::__CreateEmpty() { return  new SignalValueTest_obj; }
hx::ObjectPtr< SignalValueTest_obj > SignalValueTest_obj::__new()
{  hx::ObjectPtr< SignalValueTest_obj > _result_ = new SignalValueTest_obj();
	_result_->__construct();
	return _result_;}

Dynamic SignalValueTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SignalValueTest_obj > _result_ = new SignalValueTest_obj();
	_result_->__construct();
	return _result_;}

Void SignalValueTest_obj::simple( ){
{
		HX_STACK_FRAME("SignalValueTest","simple",0x6eaf0b85,"SignalValueTest.simple","SignalValueTest.hx",16,0x93ff7ce3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		::Signal tmp = ::Signal_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		::Signal ui = tmp;		HX_STACK_VAR(ui,"ui");
		HX_STACK_LINE(19)
		::sx::widgets::Widget tmp1 = ui->get_simple();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		::sx::signals::Signal tmp2 = tmp1->get_onClick();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		if ((tmp3)){
			HX_STACK_LINE(19)
			::sx::widgets::Widget tmp5 = ui->get_simple();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(19)
			::sx::widgets::Widget tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(19)
			::sx::signals::Signal tmp7 = tmp6->get_onClick();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(19)
			::sx::signals::Signal tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			int tmp9 = tmp8->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(146)
			tmp4 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(146)
			tmp4 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp4)){
			HX_STACK_LINE(19)
			::sx::widgets::Widget tmp5 = ui->get_simple();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(19)
			::sx::signals::Signal tmp6 = tmp5->get_onClick();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			bool tmp7 = tmp6->__listenersInUse;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			if ((tmp7)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(19)
					::sx::widgets::Widget tmp8 = ui->get_simple();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(19)
					::sx::signals::Signal tmp9 = tmp8->get_onClick();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(148)
					cpp::ArrayBase _g1 = tmp9->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(148)
					while((true)){
						HX_STACK_LINE(148)
						bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(148)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(148)
						if ((tmp11)){
							HX_STACK_LINE(148)
							break;
						}
						HX_STACK_LINE(148)
						Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(148)
						Dynamic listener = tmp12;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(148)
						++(_g);
						HX_STACK_LINE(19)
						::sx::widgets::Widget tmp13 = ui->get_simple();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(19)
						::sx::widgets::Widget tmp14 = ui->get_simple();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(148)
						listener(tmp13,tmp14,(int)-1).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(19)
				::sx::widgets::Widget tmp8 = ui->get_simple();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(19)
				::sx::signals::Signal tmp9 = tmp8->get_onClick();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(151)
				tmp9->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(19)
					::sx::widgets::Widget tmp10 = ui->get_simple();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(19)
					::sx::signals::Signal tmp11 = tmp10->get_onClick();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(152)
					cpp::ArrayBase _g1 = tmp11->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(152)
					while((true)){
						HX_STACK_LINE(152)
						bool tmp12 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(152)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(152)
						if ((tmp13)){
							HX_STACK_LINE(152)
							break;
						}
						HX_STACK_LINE(152)
						Dynamic tmp14 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(152)
						Dynamic listener = tmp14;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(152)
						++(_g);
						HX_STACK_LINE(19)
						::sx::widgets::Widget tmp15 = ui->get_simple();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(19)
						::sx::widgets::Widget tmp16 = ui->get_simple();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(152)
						listener(tmp15,tmp16,(int)-1).Cast< Void >();
					}
				}
				HX_STACK_LINE(19)
				::sx::widgets::Widget tmp10 = ui->get_simple();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(19)
				::sx::signals::Signal tmp11 = tmp10->get_onClick();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(153)
				tmp11->__listenersInUse = false;
			}
		}
		HX_STACK_LINE(21)
		::hunit::_assert::AssertFactory tmp5 = this->_assert;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(21)
		bool tmp6 = ui->get_simpleClicked();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(21)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("SignalValueTest.hx","\xe3","\x7c","\xff","\x93"),21,HX_HCSTRING("SignalValueTest","\xbb","\x2c","\x62","\xa6"),HX_HCSTRING("simple","\x32","\x04","\x7f","\xb8"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(21)
		tmp5->__Field(HX_HCSTRING("isTrue","\x58","\x6c","\x6a","\x6a"), hx::paccDynamic )(tmp6,null(),tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SignalValueTest_obj,simple,(void))

Void SignalValueTest_obj::closureWithBlockBody( ){
{
		HX_STACK_FRAME("SignalValueTest","closureWithBlockBody",0x275613c1,"SignalValueTest.closureWithBlockBody","SignalValueTest.hx",27,0x93ff7ce3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		::Signal tmp = ::Signal_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		::Signal ui = tmp;		HX_STACK_VAR(ui,"ui");
		HX_STACK_LINE(30)
		::sx::widgets::Widget tmp1 = ui->get_closureBlockBody();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		::sx::signals::Signal tmp2 = tmp1->get_onClick();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		if ((tmp3)){
			HX_STACK_LINE(30)
			::sx::widgets::Widget tmp5 = ui->get_closureBlockBody();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(30)
			::sx::widgets::Widget tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(30)
			::sx::signals::Signal tmp7 = tmp6->get_onClick();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(30)
			::sx::signals::Signal tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			int tmp9 = tmp8->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(146)
			tmp4 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(146)
			tmp4 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp4)){
			HX_STACK_LINE(30)
			::sx::widgets::Widget tmp5 = ui->get_closureBlockBody();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(30)
			::sx::signals::Signal tmp6 = tmp5->get_onClick();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			bool tmp7 = tmp6->__listenersInUse;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			if ((tmp7)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(30)
					::sx::widgets::Widget tmp8 = ui->get_closureBlockBody();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(30)
					::sx::signals::Signal tmp9 = tmp8->get_onClick();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(148)
					cpp::ArrayBase _g1 = tmp9->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(148)
					while((true)){
						HX_STACK_LINE(148)
						bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(148)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(148)
						if ((tmp11)){
							HX_STACK_LINE(148)
							break;
						}
						HX_STACK_LINE(148)
						Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(148)
						Dynamic listener = tmp12;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(148)
						++(_g);
						HX_STACK_LINE(30)
						::sx::widgets::Widget tmp13 = ui->get_closureBlockBody();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(30)
						::sx::widgets::Widget tmp14 = ui->get_closureBlockBody();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(148)
						listener(tmp13,tmp14,(int)-1).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(30)
				::sx::widgets::Widget tmp8 = ui->get_closureBlockBody();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(30)
				::sx::signals::Signal tmp9 = tmp8->get_onClick();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(151)
				tmp9->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(30)
					::sx::widgets::Widget tmp10 = ui->get_closureBlockBody();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(30)
					::sx::signals::Signal tmp11 = tmp10->get_onClick();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(152)
					cpp::ArrayBase _g1 = tmp11->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(152)
					while((true)){
						HX_STACK_LINE(152)
						bool tmp12 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(152)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(152)
						if ((tmp13)){
							HX_STACK_LINE(152)
							break;
						}
						HX_STACK_LINE(152)
						Dynamic tmp14 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(152)
						Dynamic listener = tmp14;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(152)
						++(_g);
						HX_STACK_LINE(30)
						::sx::widgets::Widget tmp15 = ui->get_closureBlockBody();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(30)
						::sx::widgets::Widget tmp16 = ui->get_closureBlockBody();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(152)
						listener(tmp15,tmp16,(int)-1).Cast< Void >();
					}
				}
				HX_STACK_LINE(30)
				::sx::widgets::Widget tmp10 = ui->get_closureBlockBody();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(30)
				::sx::signals::Signal tmp11 = tmp10->get_onClick();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(153)
				tmp11->__listenersInUse = false;
			}
		}
		HX_STACK_LINE(32)
		::hunit::_assert::AssertFactory tmp5 = this->_assert;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(32)
		bool tmp6 = ui->get_closureBlockClicked();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(32)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("SignalValueTest.hx","\xe3","\x7c","\xff","\x93"),32,HX_HCSTRING("SignalValueTest","\xbb","\x2c","\x62","\xa6"),HX_HCSTRING("closureWithBlockBody","\x2e","\x01","\x33","\xce"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(32)
		tmp5->__Field(HX_HCSTRING("isTrue","\x58","\x6c","\x6a","\x6a"), hx::paccDynamic )(tmp6,null(),tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SignalValueTest_obj,closureWithBlockBody,(void))

Void SignalValueTest_obj::closureWithSingleExprBody( ){
{
		HX_STACK_FRAME("SignalValueTest","closureWithSingleExprBody",0xfcbfeaad,"SignalValueTest.closureWithSingleExprBody","SignalValueTest.hx",38,0x93ff7ce3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		::Signal tmp = ::Signal_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		::Signal ui = tmp;		HX_STACK_VAR(ui,"ui");
		HX_STACK_LINE(41)
		::sx::widgets::Widget tmp1 = ui->get_closureSingleExpr();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		::sx::signals::Signal tmp2 = tmp1->get_onClick();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		if ((tmp3)){
			HX_STACK_LINE(41)
			::sx::widgets::Widget tmp5 = ui->get_closureSingleExpr();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(41)
			::sx::widgets::Widget tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(41)
			::sx::signals::Signal tmp7 = tmp6->get_onClick();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(41)
			::sx::signals::Signal tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			int tmp9 = tmp8->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(146)
			tmp4 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(146)
			tmp4 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp4)){
			HX_STACK_LINE(41)
			::sx::widgets::Widget tmp5 = ui->get_closureSingleExpr();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(41)
			::sx::signals::Signal tmp6 = tmp5->get_onClick();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			bool tmp7 = tmp6->__listenersInUse;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			if ((tmp7)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(41)
					::sx::widgets::Widget tmp8 = ui->get_closureSingleExpr();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(41)
					::sx::signals::Signal tmp9 = tmp8->get_onClick();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(148)
					cpp::ArrayBase _g1 = tmp9->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(148)
					while((true)){
						HX_STACK_LINE(148)
						bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(148)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(148)
						if ((tmp11)){
							HX_STACK_LINE(148)
							break;
						}
						HX_STACK_LINE(148)
						Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(148)
						Dynamic listener = tmp12;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(148)
						++(_g);
						HX_STACK_LINE(41)
						::sx::widgets::Widget tmp13 = ui->get_closureSingleExpr();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(41)
						::sx::widgets::Widget tmp14 = ui->get_closureSingleExpr();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(148)
						listener(tmp13,tmp14,(int)-1).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(41)
				::sx::widgets::Widget tmp8 = ui->get_closureSingleExpr();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(41)
				::sx::signals::Signal tmp9 = tmp8->get_onClick();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(151)
				tmp9->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(41)
					::sx::widgets::Widget tmp10 = ui->get_closureSingleExpr();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(41)
					::sx::signals::Signal tmp11 = tmp10->get_onClick();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(152)
					cpp::ArrayBase _g1 = tmp11->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(152)
					while((true)){
						HX_STACK_LINE(152)
						bool tmp12 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(152)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(152)
						if ((tmp13)){
							HX_STACK_LINE(152)
							break;
						}
						HX_STACK_LINE(152)
						Dynamic tmp14 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(152)
						Dynamic listener = tmp14;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(152)
						++(_g);
						HX_STACK_LINE(41)
						::sx::widgets::Widget tmp15 = ui->get_closureSingleExpr();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(41)
						::sx::widgets::Widget tmp16 = ui->get_closureSingleExpr();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(152)
						listener(tmp15,tmp16,(int)-1).Cast< Void >();
					}
				}
				HX_STACK_LINE(41)
				::sx::widgets::Widget tmp10 = ui->get_closureSingleExpr();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(41)
				::sx::signals::Signal tmp11 = tmp10->get_onClick();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(153)
				tmp11->__listenersInUse = false;
			}
		}
		HX_STACK_LINE(43)
		::hunit::_assert::AssertFactory tmp5 = this->_assert;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		bool tmp6 = ui->get_closureSingleExprClicked();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("SignalValueTest.hx","\xe3","\x7c","\xff","\x93"),43,HX_HCSTRING("SignalValueTest","\xbb","\x2c","\x62","\xa6"),HX_HCSTRING("closureWithSingleExprBody","\x20","\x32","\xce","\x21"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		tmp5->__Field(HX_HCSTRING("isTrue","\x58","\x6c","\x6a","\x6a"), hx::paccDynamic )(tmp6,null(),tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SignalValueTest_obj,closureWithSingleExprBody,(void))


SignalValueTest_obj::SignalValueTest_obj()
{
}

Dynamic SignalValueTest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"simple") ) { return simple_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"closureWithBlockBody") ) { return closureWithBlockBody_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"closureWithSingleExprBody") ) { return closureWithSingleExprBody_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("simple","\x32","\x04","\x7f","\xb8"),
	HX_HCSTRING("closureWithBlockBody","\x2e","\x01","\x33","\xce"),
	HX_HCSTRING("closureWithSingleExprBody","\x20","\x32","\xce","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SignalValueTest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SignalValueTest_obj::__mClass,"__mClass");
};

#endif

hx::Class SignalValueTest_obj::__mClass;

void SignalValueTest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("SignalValueTest","\xbb","\x2c","\x62","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SignalValueTest_obj >;
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

void SignalValueTest_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","SignalValueTest.hx",11,0x93ff7ce3)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","SignalValueTest.hx",11,0x93ff7ce3)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","SignalValueTest.hx",11,0x93ff7ce3)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("simple","\x32","\x04","\x7f","\xb8") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","SignalValueTest.hx",11,0x93ff7ce3)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("closureWithBlockBody","\x2e","\x01","\x33","\xce") , _Function_2_2::Block(),false);
						struct _Function_2_3{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","SignalValueTest.hx",11,0x93ff7ce3)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("closureWithSingleExprBody","\x20","\x32","\xce","\x21") , _Function_2_3::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
	__mClass->__rtti__=HX_HCSTRING("<class path=\"SignalValueTest\" params=\"\">\n\t<extends path=\"hunit.TestCase\"/>\n\t<simple public=\"1\" set=\"method\" line=\"15\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</simple>\n\t<closureWithBlockBody public=\"1\" set=\"method\" line=\"26\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</closureWithBlockBody>\n\t<closureWithSingleExprBody public=\"1\" set=\"method\" line=\"37\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</closureWithSingleExprBody>\n\t<new public=\"1\" set=\"method\" line=\"11\"><f a=\"\"><x path=\"Void\"/></f></new>\n\t<meta>\n\t\t<m n=\":directlyUsed\"/>\n\t\t<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t</meta>\n</class>","\xe5","\xd5","\x77","\x4d");
}

