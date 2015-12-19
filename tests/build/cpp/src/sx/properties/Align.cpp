#include <hxcpp.h>

#ifndef INCLUDED_sx_properties_Align
#include <sx/properties/Align.h>
#endif
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
namespace sx{
namespace properties{

Void Align_obj::__construct(::String __o_horizontal,::String __o_vertical)
{
HX_STACK_FRAME("sx.properties.Align","new",0x5cfaa845,"sx.properties.Align.new","sx/properties/Align.hx",73,0xb92dd46b)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_horizontal,"horizontal")
HX_STACK_ARG(__o_vertical,"vertical")
::String horizontal = __o_horizontal.Default(HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));
::String vertical = __o_vertical.Default(HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));
{
	HX_STACK_LINE(92)
	this->weak = false;
	HX_STACK_LINE(81)
	this->__vertical = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
	HX_STACK_LINE(78)
	this->__horizontal = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
	HX_STACK_LINE(100)
	this->__horizontal = horizontal;
	HX_STACK_LINE(101)
	this->__vertical = vertical;
	HX_STACK_LINE(103)
	::sx::signals::Signal tmp = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	this->onChange = tmp;
}
;
	return null();
}

//Align_obj::~Align_obj() { }

Dynamic Align_obj::__CreateEmpty() { return  new Align_obj; }
hx::ObjectPtr< Align_obj > Align_obj::__new(::String __o_horizontal,::String __o_vertical)
{  hx::ObjectPtr< Align_obj > _result_ = new Align_obj();
	_result_->__construct(__o_horizontal,__o_vertical);
	return _result_;}

Dynamic Align_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Align_obj > _result_ = new Align_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Align_obj::set( ::String horizontal,::String vertical){
{
		HX_STACK_FRAME("sx.properties.Align","set",0x5cfe7387,"sx.properties.Align.set","sx/properties/Align.hx",113,0xb92dd46b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(horizontal,"horizontal")
		HX_STACK_ARG(vertical,"vertical")
		HX_STACK_LINE(114)
		::String tmp = this->__horizontal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		::String tmp1 = horizontal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		bool horizontalChanged = tmp2;		HX_STACK_VAR(horizontalChanged,"horizontalChanged");
		HX_STACK_LINE(115)
		::String tmp3 = this->__vertical;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		::String tmp4 = vertical;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		bool verticalChanged = tmp5;		HX_STACK_VAR(verticalChanged,"verticalChanged");
		HX_STACK_LINE(117)
		this->__horizontal = horizontal;
		HX_STACK_LINE(118)
		this->__vertical = vertical;
		HX_STACK_LINE(120)
		bool tmp6 = horizontalChanged;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(120)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(120)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(120)
		if ((tmp7)){
			HX_STACK_LINE(120)
			tmp8 = verticalChanged;
		}
		else{
			HX_STACK_LINE(120)
			tmp8 = true;
		}
		HX_STACK_LINE(120)
		if ((tmp8)){
			HX_STACK_LINE(121)
			::sx::signals::Signal tmp9 = this->onChange;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(121)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(121)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(121)
			if ((tmp10)){
				HX_STACK_LINE(121)
				::sx::signals::Signal tmp12 = this->onChange;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(121)
				::sx::signals::Signal tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(121)
				int tmp14 = tmp13->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(121)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(121)
				tmp11 = (tmp15 > (int)0);
			}
			else{
				HX_STACK_LINE(121)
				tmp11 = false;
			}
			HX_STACK_LINE(121)
			if ((tmp11)){
				HX_STACK_LINE(121)
				::sx::signals::Signal tmp12 = this->onChange;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(121)
				bool tmp13 = tmp12->__listenersInUse;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(121)
				if ((tmp13)){
					HX_STACK_LINE(121)
					{
						HX_STACK_LINE(121)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(121)
						::sx::signals::Signal tmp14 = this->onChange;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(121)
						cpp::ArrayBase _g1 = tmp14->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(121)
						while((true)){
							HX_STACK_LINE(121)
							bool tmp15 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(121)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(121)
							if ((tmp16)){
								HX_STACK_LINE(121)
								break;
							}
							HX_STACK_LINE(121)
							Dynamic tmp17 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(121)
							Dynamic listener = tmp17;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(121)
							++(_g);
							HX_STACK_LINE(121)
							bool tmp18 = horizontalChanged;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(121)
							bool tmp19 = verticalChanged;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(121)
							listener(tmp18,tmp19).Cast< Void >();
						}
					}
					HX_STACK_LINE(121)
					false;
				}
				else{
					HX_STACK_LINE(121)
					::sx::signals::Signal tmp14 = this->onChange;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(121)
					tmp14->__listenersInUse = true;
					HX_STACK_LINE(121)
					{
						HX_STACK_LINE(121)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(121)
						::sx::signals::Signal tmp15 = this->onChange;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(121)
						cpp::ArrayBase _g1 = tmp15->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(121)
						while((true)){
							HX_STACK_LINE(121)
							bool tmp16 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(121)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(121)
							if ((tmp17)){
								HX_STACK_LINE(121)
								break;
							}
							HX_STACK_LINE(121)
							Dynamic tmp18 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(121)
							Dynamic listener = tmp18;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(121)
							++(_g);
							HX_STACK_LINE(121)
							bool tmp19 = horizontalChanged;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(121)
							bool tmp20 = verticalChanged;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(121)
							listener(tmp19,tmp20).Cast< Void >();
						}
					}
					HX_STACK_LINE(121)
					::sx::signals::Signal tmp15 = this->onChange;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(121)
					tmp15->__listenersInUse = false;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Align_obj,set,(void))

::sx::properties::Align Align_obj::copyValueFrom( ::sx::properties::Align align){
	HX_STACK_FRAME("sx.properties.Align","copyValueFrom",0xed3c6b2b,"sx.properties.Align.copyValueFrom","sx/properties/Align.hx",132,0xb92dd46b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(align,"align")
	HX_STACK_LINE(133)
	::String tmp = align->get_horizontal();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	::String tmp1 = align->get_vertical();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	this->set(tmp,tmp1);
	HX_STACK_LINE(134)
	bool tmp2 = align->weak;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	if ((tmp2)){
		HX_STACK_LINE(134)
		align->dispose();
	}
	HX_STACK_LINE(136)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Align_obj,copyValueFrom,return )

Void Align_obj::dispose( ){
{
		HX_STACK_FRAME("sx.properties.Align","dispose",0x646daf04,"sx.properties.Align.dispose","sx/properties/Align.hx",144,0xb92dd46b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Align_obj,dispose,(void))

Void Align_obj::__invokeOnChange( bool horizontalChanged,bool verticalChanged){
{
		HX_STACK_FRAME("sx.properties.Align","__invokeOnChange",0x2793dba2,"sx.properties.Align.__invokeOnChange","sx/properties/Align.hx",153,0xb92dd46b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(horizontalChanged,"horizontalChanged")
		HX_STACK_ARG(verticalChanged,"verticalChanged")
		HX_STACK_LINE(154)
		::sx::signals::Signal tmp = this->onChange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		if ((tmp1)){
			HX_STACK_LINE(154)
			::sx::signals::Signal tmp3 = this->onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(154)
			::sx::signals::Signal tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			int tmp5 = tmp4->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(146)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(146)
			tmp2 = (tmp6 > (int)0);
		}
		else{
			HX_STACK_LINE(146)
			tmp2 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp2)){
			HX_STACK_LINE(154)
			::sx::signals::Signal tmp3 = this->onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			bool tmp4 = tmp3->__listenersInUse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			if ((tmp4)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(154)
					::sx::signals::Signal tmp5 = this->onChange;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(148)
					cpp::ArrayBase _g1 = tmp5->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(148)
					while((true)){
						HX_STACK_LINE(148)
						bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(148)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(148)
						if ((tmp7)){
							HX_STACK_LINE(148)
							break;
						}
						HX_STACK_LINE(148)
						Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(148)
						Dynamic listener = tmp8;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(148)
						++(_g);
						HX_STACK_LINE(154)
						bool tmp9 = horizontalChanged;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(154)
						bool tmp10 = verticalChanged;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(148)
						listener(tmp9,tmp10).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(154)
				::sx::signals::Signal tmp5 = this->onChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				tmp5->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(154)
					::sx::signals::Signal tmp6 = this->onChange;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(152)
					cpp::ArrayBase _g1 = tmp6->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(152)
					while((true)){
						HX_STACK_LINE(152)
						bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(152)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(152)
						if ((tmp8)){
							HX_STACK_LINE(152)
							break;
						}
						HX_STACK_LINE(152)
						Dynamic tmp9 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(152)
						Dynamic listener = tmp9;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(152)
						++(_g);
						HX_STACK_LINE(154)
						bool tmp10 = horizontalChanged;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(154)
						bool tmp11 = verticalChanged;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(152)
						listener(tmp10,tmp11).Cast< Void >();
					}
				}
				HX_STACK_LINE(154)
				::sx::signals::Signal tmp6 = this->onChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				tmp6->__listenersInUse = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Align_obj,__invokeOnChange,(void))

::String Align_obj::set_vertical( ::String value){
	HX_STACK_FRAME("sx.properties.Align","set_vertical",0xa00c176e,"sx.properties.Align.set_vertical","sx/properties/Align.hx",162,0xb92dd46b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(163)
	this->__vertical = value;
	HX_STACK_LINE(164)
	{
		HX_STACK_LINE(164)
		::sx::signals::Signal tmp = this->onChange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		if ((tmp1)){
			HX_STACK_LINE(164)
			::sx::signals::Signal tmp3 = this->onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			::sx::signals::Signal tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			int tmp5 = tmp4->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(164)
			tmp2 = (tmp6 > (int)0);
		}
		else{
			HX_STACK_LINE(164)
			tmp2 = false;
		}
		HX_STACK_LINE(164)
		if ((tmp2)){
			HX_STACK_LINE(164)
			::sx::signals::Signal tmp3 = this->onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			bool tmp4 = tmp3->__listenersInUse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			if ((tmp4)){
				HX_STACK_LINE(164)
				{
					HX_STACK_LINE(164)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(164)
					::sx::signals::Signal tmp5 = this->onChange;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(164)
					cpp::ArrayBase _g1 = tmp5->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(164)
					while((true)){
						HX_STACK_LINE(164)
						bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(164)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(164)
						if ((tmp7)){
							HX_STACK_LINE(164)
							break;
						}
						HX_STACK_LINE(164)
						Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(164)
						Dynamic listener = tmp8;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(164)
						++(_g);
						HX_STACK_LINE(164)
						listener(false,true).Cast< Void >();
					}
				}
				HX_STACK_LINE(164)
				false;
			}
			else{
				HX_STACK_LINE(164)
				::sx::signals::Signal tmp5 = this->onChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(164)
				tmp5->__listenersInUse = true;
				HX_STACK_LINE(164)
				{
					HX_STACK_LINE(164)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(164)
					::sx::signals::Signal tmp6 = this->onChange;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(164)
					cpp::ArrayBase _g1 = tmp6->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(164)
					while((true)){
						HX_STACK_LINE(164)
						bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(164)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(164)
						if ((tmp8)){
							HX_STACK_LINE(164)
							break;
						}
						HX_STACK_LINE(164)
						Dynamic tmp9 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(164)
						Dynamic listener = tmp9;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(164)
						++(_g);
						HX_STACK_LINE(164)
						listener(false,true).Cast< Void >();
					}
				}
				HX_STACK_LINE(164)
				::sx::signals::Signal tmp6 = this->onChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(164)
				tmp6->__listenersInUse = false;
			}
		}
	}
	HX_STACK_LINE(166)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Align_obj,set_vertical,return )

::String Align_obj::set_horizontal( ::String value){
	HX_STACK_FRAME("sx.properties.Align","set_horizontal",0x7a4105dc,"sx.properties.Align.set_horizontal","sx/properties/Align.hx",174,0xb92dd46b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(175)
	this->__horizontal = value;
	HX_STACK_LINE(176)
	{
		HX_STACK_LINE(176)
		::sx::signals::Signal tmp = this->onChange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		if ((tmp1)){
			HX_STACK_LINE(176)
			::sx::signals::Signal tmp3 = this->onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			::sx::signals::Signal tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			int tmp5 = tmp4->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			tmp2 = (tmp6 > (int)0);
		}
		else{
			HX_STACK_LINE(176)
			tmp2 = false;
		}
		HX_STACK_LINE(176)
		if ((tmp2)){
			HX_STACK_LINE(176)
			::sx::signals::Signal tmp3 = this->onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			bool tmp4 = tmp3->__listenersInUse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			if ((tmp4)){
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(176)
					::sx::signals::Signal tmp5 = this->onChange;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(176)
					cpp::ArrayBase _g1 = tmp5->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(176)
					while((true)){
						HX_STACK_LINE(176)
						bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(176)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(176)
						if ((tmp7)){
							HX_STACK_LINE(176)
							break;
						}
						HX_STACK_LINE(176)
						Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(176)
						Dynamic listener = tmp8;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(176)
						++(_g);
						HX_STACK_LINE(176)
						listener(true,false).Cast< Void >();
					}
				}
				HX_STACK_LINE(176)
				false;
			}
			else{
				HX_STACK_LINE(176)
				::sx::signals::Signal tmp5 = this->onChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(176)
				tmp5->__listenersInUse = true;
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(176)
					::sx::signals::Signal tmp6 = this->onChange;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(176)
					cpp::ArrayBase _g1 = tmp6->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(176)
					while((true)){
						HX_STACK_LINE(176)
						bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(176)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(176)
						if ((tmp8)){
							HX_STACK_LINE(176)
							break;
						}
						HX_STACK_LINE(176)
						Dynamic tmp9 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(176)
						Dynamic listener = tmp9;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(176)
						++(_g);
						HX_STACK_LINE(176)
						listener(true,false).Cast< Void >();
					}
				}
				HX_STACK_LINE(176)
				::sx::signals::Signal tmp6 = this->onChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(176)
				tmp6->__listenersInUse = false;
			}
		}
	}
	HX_STACK_LINE(178)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Align_obj,set_horizontal,return )

::String Align_obj::get_vertical( ){
	HX_STACK_FRAME("sx.properties.Align","get_vertical",0x8b12f3fa,"sx.properties.Align.get_vertical","sx/properties/Align.hx",183,0xb92dd46b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(183)
	::String tmp = this->__vertical;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Align_obj,get_vertical,return )

::String Align_obj::get_horizontal( ){
	HX_STACK_FRAME("sx.properties.Align","get_horizontal",0x5a211d68,"sx.properties.Align.get_horizontal","sx/properties/Align.hx",184,0xb92dd46b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	::String tmp = this->__horizontal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Align_obj,get_horizontal,return )


Align_obj::Align_obj()
{
}

void Align_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Align);
	HX_MARK_MEMBER_NAME(__horizontal,"__horizontal");
	HX_MARK_MEMBER_NAME(__vertical,"__vertical");
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_MEMBER_NAME(weak,"weak");
	HX_MARK_END_CLASS();
}

void Align_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__horizontal,"__horizontal");
	HX_VISIT_MEMBER_NAME(__vertical,"__vertical");
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	HX_VISIT_MEMBER_NAME(weak,"weak");
}

Dynamic Align_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { return weak; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { if (inCallProp == hx::paccAlways) return get_vertical(); }
		if (HX_FIELD_EQ(inName,"onChange") ) { return onChange; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"horizontal") ) { if (inCallProp == hx::paccAlways) return get_horizontal(); }
		if (HX_FIELD_EQ(inName,"__vertical") ) { return __vertical; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__horizontal") ) { return __horizontal; }
		if (HX_FIELD_EQ(inName,"set_vertical") ) { return set_vertical_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertical") ) { return get_vertical_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyValueFrom") ) { return copyValueFrom_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_horizontal") ) { return set_horizontal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_horizontal") ) { return get_horizontal_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__invokeOnChange") ) { return __invokeOnChange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Align_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { weak=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { if (inCallProp == hx::paccAlways) return set_vertical(inValue); }
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"horizontal") ) { if (inCallProp == hx::paccAlways) return set_horizontal(inValue); }
		if (HX_FIELD_EQ(inName,"__vertical") ) { __vertical=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__horizontal") ) { __horizontal=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Align_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Align_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));
	outFields->push(HX_HCSTRING("__horizontal","\x04","\x78","\x57","\x4e"));
	outFields->push(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));
	outFields->push(HX_HCSTRING("__vertical","\x96","\x2f","\x4e","\x0d"));
	outFields->push(HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"));
	outFields->push(HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Align_obj,__horizontal),HX_HCSTRING("__horizontal","\x04","\x78","\x57","\x4e")},
	{hx::fsString,(int)offsetof(Align_obj,__vertical),HX_HCSTRING("__vertical","\x96","\x2f","\x4e","\x0d")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Align_obj,onChange),HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97")},
	{hx::fsBool,(int)offsetof(Align_obj,weak),HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__horizontal","\x04","\x78","\x57","\x4e"),
	HX_HCSTRING("__vertical","\x96","\x2f","\x4e","\x0d"),
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("copyValueFrom","\x06","\xe3","\x0c","\xf2"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("__invokeOnChange","\xa7","\x7e","\xe9","\x3d"),
	HX_HCSTRING("set_vertical","\xf3","\x93","\x28","\x34"),
	HX_HCSTRING("set_horizontal","\xa1","\x6d","\xd9","\xab"),
	HX_HCSTRING("get_vertical","\x7f","\x70","\x2f","\x1f"),
	HX_HCSTRING("get_horizontal","\x2d","\x85","\xb9","\x8b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Align_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Align_obj::__mClass,"__mClass");
};

#endif

hx::Class Align_obj::__mClass;

void Align_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.Align","\xd3","\x21","\x8e","\x28");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Align_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Align_obj >;
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

} // end namespace sx
} // end namespace properties
