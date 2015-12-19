#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Padding
#include <sx/properties/metric/Padding.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
#ifndef INCLUDED_sx_properties_metric_SizeSetterProxy
#include <sx/properties/metric/SizeSetterProxy.h>
#endif
#ifndef INCLUDED_sx_properties_metric__Size_Size_Internal_ZeroSize
#include <sx/properties/metric/_Size/Size_Internal_ZeroSize.h>
#endif
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
namespace sx{
namespace properties{
namespace metric{

Void Padding_obj::__construct()
{
HX_STACK_FRAME("sx.properties.metric.Padding","new",0xc06fd1f7,"sx.properties.metric.Padding.new","sx/properties/metric/Padding.hx",18,0xb37c82fa)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(54)
	this->__batchChanges = false;
	HX_STACK_LINE(62)
	super::__construct(null());
	HX_STACK_LINE(64)
	::sx::signals::Signal tmp = this->onChange;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	Dynamic tmp1 = this->__setAll_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	tmp->add(tmp1);
	HX_STACK_LINE(66)
	::sx::properties::metric::Size tmp2 = ::sx::properties::metric::Size_obj::__new(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	this->__left = tmp2;
	HX_STACK_LINE(67)
	::sx::properties::metric::Size tmp3 = ::sx::properties::metric::Size_obj::__new(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	this->__right = tmp3;
	HX_STACK_LINE(68)
	::sx::properties::metric::Size tmp4 = ::sx::properties::metric::Size_obj::__new(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(68)
	this->__top = tmp4;
	HX_STACK_LINE(69)
	::sx::properties::metric::Size tmp5 = ::sx::properties::metric::Size_obj::__new(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(69)
	this->__bottom = tmp5;
	HX_STACK_LINE(71)
	::sx::properties::metric::Size tmp6 = this->__left;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(71)
	Dynamic tmp7 = this->__sideChanged_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(71)
	tmp6->onChange->add(tmp7);
	HX_STACK_LINE(72)
	::sx::properties::metric::Size tmp8 = this->__right;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(72)
	Dynamic tmp9 = this->__sideChanged_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(72)
	tmp8->onChange->add(tmp9);
	HX_STACK_LINE(73)
	::sx::properties::metric::Size tmp10 = this->__top;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(73)
	Dynamic tmp11 = this->__sideChanged_dyn();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(73)
	tmp10->onChange->add(tmp11);
	HX_STACK_LINE(74)
	::sx::properties::metric::Size tmp12 = this->__bottom;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(74)
	Dynamic tmp13 = this->__sideChanged_dyn();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(74)
	tmp12->onChange->add(tmp13);
	HX_STACK_LINE(76)
	Dynamic tmp14 = this->__ownerWidthProvider_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(76)
	::sx::properties::metric::Size tmp15 = this->__left;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(76)
	tmp15->pctSource = tmp14;
	HX_STACK_LINE(77)
	Dynamic tmp16 = this->__ownerWidthProvider_dyn();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(77)
	::sx::properties::metric::Size tmp17 = this->__right;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(77)
	tmp17->pctSource = tmp16;
	HX_STACK_LINE(78)
	Dynamic tmp18 = this->__ownerHeightProvider_dyn();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(78)
	::sx::properties::metric::Size tmp19 = this->__top;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(78)
	tmp19->pctSource = tmp18;
	HX_STACK_LINE(79)
	Dynamic tmp20 = this->__ownerHeightProvider_dyn();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(79)
	::sx::properties::metric::Size tmp21 = this->__bottom;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(79)
	tmp21->pctSource = tmp20;
	HX_STACK_LINE(81)
	::sx::signals::Signal tmp22 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(81)
	this->onComponentsChange = tmp22;
}
;
	return null();
}

//Padding_obj::~Padding_obj() { }

Dynamic Padding_obj::__CreateEmpty() { return  new Padding_obj; }
hx::ObjectPtr< Padding_obj > Padding_obj::__new()
{  hx::ObjectPtr< Padding_obj > _result_ = new Padding_obj();
	_result_->__construct();
	return _result_;}

Dynamic Padding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Padding_obj > _result_ = new Padding_obj();
	_result_->__construct();
	return _result_;}

Void Padding_obj::__sideChanged( ::sx::properties::metric::Size changed,::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.properties.metric.Padding","__sideChanged",0xf8f80154,"sx.properties.metric.Padding.__sideChanged","sx/properties/metric/Padding.hx",89,0xb37c82fa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changed,"changed")
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(90)
		bool tmp = this->__batchChanges;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		if ((tmp)){
			HX_STACK_LINE(90)
			return null();
		}
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			bool tmp1 = (changed->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(91)
			bool horizontal = tmp1;		HX_STACK_VAR(horizontal,"horizontal");
			HX_STACK_LINE(91)
			bool tmp2 = (changed->orientation == HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			bool vertical = tmp2;		HX_STACK_VAR(vertical,"vertical");
			HX_STACK_LINE(91)
			::sx::signals::Signal tmp3 = this->onComponentsChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			if ((tmp4)){
				HX_STACK_LINE(91)
				::sx::signals::Signal tmp6 = this->onComponentsChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(91)
				::sx::signals::Signal tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(91)
				int tmp8 = tmp7->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(91)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(91)
				tmp5 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(91)
				tmp5 = false;
			}
			HX_STACK_LINE(91)
			if ((tmp5)){
				HX_STACK_LINE(91)
				::sx::signals::Signal tmp6 = this->onComponentsChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(91)
				bool tmp7 = tmp6->__listenersInUse;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(91)
				if ((tmp7)){
					HX_STACK_LINE(91)
					{
						HX_STACK_LINE(91)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(91)
						::sx::signals::Signal tmp8 = this->onComponentsChange;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(91)
						cpp::ArrayBase _g1 = tmp8->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(91)
						while((true)){
							HX_STACK_LINE(91)
							bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(91)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(91)
							if ((tmp10)){
								HX_STACK_LINE(91)
								break;
							}
							HX_STACK_LINE(91)
							Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(91)
							Dynamic listener = tmp11;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(91)
							++(_g);
							HX_STACK_LINE(91)
							bool tmp12 = horizontal;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(91)
							bool tmp13 = vertical;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(91)
							listener(tmp12,tmp13).Cast< Void >();
						}
					}
					HX_STACK_LINE(91)
					false;
				}
				else{
					HX_STACK_LINE(91)
					::sx::signals::Signal tmp8 = this->onComponentsChange;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(91)
					tmp8->__listenersInUse = true;
					HX_STACK_LINE(91)
					{
						HX_STACK_LINE(91)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(91)
						::sx::signals::Signal tmp9 = this->onComponentsChange;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(91)
						cpp::ArrayBase _g1 = tmp9->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(91)
						while((true)){
							HX_STACK_LINE(91)
							bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(91)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(91)
							if ((tmp11)){
								HX_STACK_LINE(91)
								break;
							}
							HX_STACK_LINE(91)
							Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(91)
							Dynamic listener = tmp12;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(91)
							++(_g);
							HX_STACK_LINE(91)
							bool tmp13 = horizontal;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(91)
							bool tmp14 = vertical;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(91)
							listener(tmp13,tmp14).Cast< Void >();
						}
					}
					HX_STACK_LINE(91)
					::sx::signals::Signal tmp9 = this->onComponentsChange;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(91)
					tmp9->__listenersInUse = false;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Padding_obj,__sideChanged,(void))

Void Padding_obj::__dimensionChanged( ::sx::properties::metric::Size changed,::String units,Float value){
{
		HX_STACK_FRAME("sx.properties.metric.Padding","__dimensionChanged",0xd2766997,"sx.properties.metric.Padding.__dimensionChanged","sx/properties/metric/Padding.hx",99,0xb37c82fa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changed,"changed")
		HX_STACK_ARG(units,"units")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(100)
		this->__batchChanges = true;
		HX_STACK_LINE(102)
		bool tmp = (changed->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		if ((tmp)){
			HX_STACK_LINE(103)
			::sx::properties::metric::Size tmp1 = this->get_left();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			::sx::properties::metric::Size first = tmp1;		HX_STACK_VAR(first,"first");
			HX_STACK_LINE(103)
			::sx::properties::metric::Size tmp2 = this->get_right();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			::sx::properties::metric::Size second = tmp2;		HX_STACK_VAR(second,"second");
			HX_STACK_LINE(103)
			::String tmp3 = units;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(103)
			::String _switch_1 = (tmp3);
			if (  ( _switch_1==HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"))){
				HX_STACK_LINE(103)
				Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(103)
				first->set_dip(tmp4);
				HX_STACK_LINE(103)
				Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(103)
				second->set_dip(tmp5);
			}
			else if (  ( _switch_1==HX_HCSTRING("px","\x08","\x62","\x00","\x00"))){
				HX_STACK_LINE(103)
				Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(103)
				first->set_px(tmp4);
				HX_STACK_LINE(103)
				Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(103)
				second->set_px(tmp5);
			}
			else if (  ( _switch_1==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
				HX_STACK_LINE(103)
				Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(103)
				first->set_pct(tmp4);
				HX_STACK_LINE(103)
				Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(103)
				second->set_pct(tmp5);
			}
		}
		else{
			HX_STACK_LINE(105)
			::sx::properties::metric::Size tmp1 = this->get_top();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(105)
			::sx::properties::metric::Size first = tmp1;		HX_STACK_VAR(first,"first");
			HX_STACK_LINE(105)
			::sx::properties::metric::Size tmp2 = this->get_bottom();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(105)
			::sx::properties::metric::Size second = tmp2;		HX_STACK_VAR(second,"second");
			HX_STACK_LINE(105)
			::String tmp3 = units;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(105)
			::String _switch_2 = (tmp3);
			if (  ( _switch_2==HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"))){
				HX_STACK_LINE(105)
				Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				first->set_dip(tmp4);
				HX_STACK_LINE(105)
				Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(105)
				second->set_dip(tmp5);
			}
			else if (  ( _switch_2==HX_HCSTRING("px","\x08","\x62","\x00","\x00"))){
				HX_STACK_LINE(105)
				Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				first->set_px(tmp4);
				HX_STACK_LINE(105)
				Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(105)
				second->set_px(tmp5);
			}
			else if (  ( _switch_2==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
				HX_STACK_LINE(105)
				Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				first->set_pct(tmp4);
				HX_STACK_LINE(105)
				Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(105)
				second->set_pct(tmp5);
			}
		}
		HX_STACK_LINE(108)
		this->__batchChanges = false;
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			bool tmp1 = (changed->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(109)
			bool horizontal = tmp1;		HX_STACK_VAR(horizontal,"horizontal");
			HX_STACK_LINE(109)
			bool tmp2 = (changed->orientation == HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(109)
			bool vertical = tmp2;		HX_STACK_VAR(vertical,"vertical");
			HX_STACK_LINE(109)
			::sx::signals::Signal tmp3 = this->onComponentsChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(109)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(109)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(109)
			if ((tmp4)){
				HX_STACK_LINE(109)
				::sx::signals::Signal tmp6 = this->onComponentsChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(109)
				::sx::signals::Signal tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(109)
				int tmp8 = tmp7->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(109)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(109)
				tmp5 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(109)
				tmp5 = false;
			}
			HX_STACK_LINE(109)
			if ((tmp5)){
				HX_STACK_LINE(109)
				::sx::signals::Signal tmp6 = this->onComponentsChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(109)
				bool tmp7 = tmp6->__listenersInUse;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(109)
				if ((tmp7)){
					HX_STACK_LINE(109)
					{
						HX_STACK_LINE(109)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(109)
						::sx::signals::Signal tmp8 = this->onComponentsChange;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(109)
						cpp::ArrayBase _g1 = tmp8->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(109)
						while((true)){
							HX_STACK_LINE(109)
							bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(109)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(109)
							if ((tmp10)){
								HX_STACK_LINE(109)
								break;
							}
							HX_STACK_LINE(109)
							Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(109)
							Dynamic listener = tmp11;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(109)
							++(_g);
							HX_STACK_LINE(109)
							bool tmp12 = horizontal;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(109)
							bool tmp13 = vertical;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(109)
							listener(tmp12,tmp13).Cast< Void >();
						}
					}
					HX_STACK_LINE(109)
					false;
				}
				else{
					HX_STACK_LINE(109)
					::sx::signals::Signal tmp8 = this->onComponentsChange;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(109)
					tmp8->__listenersInUse = true;
					HX_STACK_LINE(109)
					{
						HX_STACK_LINE(109)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(109)
						::sx::signals::Signal tmp9 = this->onComponentsChange;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(109)
						cpp::ArrayBase _g1 = tmp9->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(109)
						while((true)){
							HX_STACK_LINE(109)
							bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(109)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(109)
							if ((tmp11)){
								HX_STACK_LINE(109)
								break;
							}
							HX_STACK_LINE(109)
							Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(109)
							Dynamic listener = tmp12;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(109)
							++(_g);
							HX_STACK_LINE(109)
							bool tmp13 = horizontal;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(109)
							bool tmp14 = vertical;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(109)
							listener(tmp13,tmp14).Cast< Void >();
						}
					}
					HX_STACK_LINE(109)
					::sx::signals::Signal tmp9 = this->onComponentsChange;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(109)
					tmp9->__listenersInUse = false;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Padding_obj,__dimensionChanged,(void))

Void Padding_obj::__setDimension( ::sx::properties::metric::Size first,::sx::properties::metric::Size second,::String units,Float value){
{
		HX_STACK_FRAME("sx.properties.metric.Padding","__setDimension",0x9edfc64d,"sx.properties.metric.Padding.__setDimension","sx/properties/metric/Padding.hx",117,0xb37c82fa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(first,"first")
		HX_STACK_ARG(second,"second")
		HX_STACK_ARG(units,"units")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(118)
		::String tmp = units;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		::String _switch_3 = (tmp);
		if (  ( _switch_3==HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"))){
			HX_STACK_LINE(120)
			Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(120)
			first->set_dip(tmp1);
			HX_STACK_LINE(121)
			Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(121)
			second->set_dip(tmp2);
		}
		else if (  ( _switch_3==HX_HCSTRING("px","\x08","\x62","\x00","\x00"))){
			HX_STACK_LINE(123)
			Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(123)
			first->set_px(tmp1);
			HX_STACK_LINE(124)
			Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			second->set_px(tmp2);
		}
		else if (  ( _switch_3==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
			HX_STACK_LINE(126)
			Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(126)
			first->set_pct(tmp1);
			HX_STACK_LINE(127)
			Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			second->set_pct(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Padding_obj,__setDimension,(void))

Void Padding_obj::__setAll( ::sx::properties::metric::Size changed,::String units,Float value){
{
		HX_STACK_FRAME("sx.properties.metric.Padding","__setAll",0x2d34ccc8,"sx.properties.metric.Padding.__setAll","sx/properties/metric/Padding.hx",136,0xb37c82fa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changed,"changed")
		HX_STACK_ARG(units,"units")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(137)
		this->__batchChanges = true;
		HX_STACK_LINE(139)
		::String tmp = units;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		::String _switch_4 = (tmp);
		if (  ( _switch_4==HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"))){
			HX_STACK_LINE(141)
			::sx::properties::metric::Size tmp1 = this->get_left();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(141)
			Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			tmp1->set_dip(tmp2);
			HX_STACK_LINE(142)
			::sx::properties::metric::Size tmp3 = this->get_right();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(142)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(142)
			tmp3->set_dip(tmp4);
			HX_STACK_LINE(143)
			::sx::properties::metric::Size tmp5 = this->get_top();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(143)
			tmp5->set_dip(tmp6);
			HX_STACK_LINE(144)
			::sx::properties::metric::Size tmp7 = this->get_bottom();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			Float tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(144)
			tmp7->set_dip(tmp8);
		}
		else if (  ( _switch_4==HX_HCSTRING("px","\x08","\x62","\x00","\x00"))){
			HX_STACK_LINE(146)
			::sx::properties::metric::Size tmp1 = this->get_left();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(146)
			Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(146)
			tmp1->set_px(tmp2);
			HX_STACK_LINE(147)
			::sx::properties::metric::Size tmp3 = this->get_right();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			tmp3->set_px(tmp4);
			HX_STACK_LINE(148)
			::sx::properties::metric::Size tmp5 = this->get_top();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(148)
			Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			tmp5->set_px(tmp6);
			HX_STACK_LINE(149)
			::sx::properties::metric::Size tmp7 = this->get_bottom();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			Float tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(149)
			tmp7->set_px(tmp8);
		}
		else if (  ( _switch_4==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
			HX_STACK_LINE(151)
			::sx::properties::metric::Size tmp1 = this->get_left();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(151)
			Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			tmp1->set_pct(tmp2);
			HX_STACK_LINE(152)
			::sx::properties::metric::Size tmp3 = this->get_right();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(152)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			tmp3->set_pct(tmp4);
			HX_STACK_LINE(153)
			::sx::properties::metric::Size tmp5 = this->get_top();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(153)
			tmp5->set_pct(tmp6);
			HX_STACK_LINE(154)
			::sx::properties::metric::Size tmp7 = this->get_bottom();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(154)
			Float tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(154)
			tmp7->set_pct(tmp8);
		}
		HX_STACK_LINE(157)
		this->__batchChanges = false;
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			::sx::signals::Signal tmp1 = this->onComponentsChange;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(158)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			if ((tmp2)){
				HX_STACK_LINE(158)
				::sx::signals::Signal tmp4 = this->onComponentsChange;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(158)
				::sx::signals::Signal tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(158)
				int tmp6 = tmp5->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(158)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(158)
				tmp3 = (tmp7 > (int)0);
			}
			else{
				HX_STACK_LINE(158)
				tmp3 = false;
			}
			HX_STACK_LINE(158)
			if ((tmp3)){
				HX_STACK_LINE(158)
				::sx::signals::Signal tmp4 = this->onComponentsChange;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(158)
				bool tmp5 = tmp4->__listenersInUse;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(158)
				if ((tmp5)){
					HX_STACK_LINE(158)
					{
						HX_STACK_LINE(158)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(158)
						::sx::signals::Signal tmp6 = this->onComponentsChange;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(158)
						cpp::ArrayBase _g1 = tmp6->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(158)
						while((true)){
							HX_STACK_LINE(158)
							bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(158)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(158)
							if ((tmp8)){
								HX_STACK_LINE(158)
								break;
							}
							HX_STACK_LINE(158)
							Dynamic tmp9 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(158)
							Dynamic listener = tmp9;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(158)
							++(_g);
							HX_STACK_LINE(158)
							listener(true,true).Cast< Void >();
						}
					}
					HX_STACK_LINE(158)
					false;
				}
				else{
					HX_STACK_LINE(158)
					::sx::signals::Signal tmp6 = this->onComponentsChange;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(158)
					tmp6->__listenersInUse = true;
					HX_STACK_LINE(158)
					{
						HX_STACK_LINE(158)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(158)
						::sx::signals::Signal tmp7 = this->onComponentsChange;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(158)
						cpp::ArrayBase _g1 = tmp7->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(158)
						while((true)){
							HX_STACK_LINE(158)
							bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(158)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(158)
							if ((tmp9)){
								HX_STACK_LINE(158)
								break;
							}
							HX_STACK_LINE(158)
							Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(158)
							Dynamic listener = tmp10;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(158)
							++(_g);
							HX_STACK_LINE(158)
							listener(true,true).Cast< Void >();
						}
					}
					HX_STACK_LINE(158)
					::sx::signals::Signal tmp7 = this->onComponentsChange;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(158)
					tmp7->__listenersInUse = false;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Padding_obj,__setAll,(void))

Void Padding_obj::__invokeOnComponentsChange( bool horizontal,bool vertical){
{
		HX_STACK_FRAME("sx.properties.metric.Padding","__invokeOnComponentsChange",0x97aa3866,"sx.properties.metric.Padding.__invokeOnComponentsChange","sx/properties/metric/Padding.hx",166,0xb37c82fa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(horizontal,"horizontal")
		HX_STACK_ARG(vertical,"vertical")
		HX_STACK_LINE(167)
		::sx::signals::Signal tmp = this->onComponentsChange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		if ((tmp1)){
			HX_STACK_LINE(167)
			::sx::signals::Signal tmp3 = this->onComponentsChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(167)
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
			HX_STACK_LINE(167)
			::sx::signals::Signal tmp3 = this->onComponentsChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			bool tmp4 = tmp3->__listenersInUse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			if ((tmp4)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(167)
					::sx::signals::Signal tmp5 = this->onComponentsChange;		HX_STACK_VAR(tmp5,"tmp5");
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
						HX_STACK_LINE(167)
						bool tmp9 = horizontal;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(167)
						bool tmp10 = vertical;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(148)
						listener(tmp9,tmp10).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(167)
				::sx::signals::Signal tmp5 = this->onComponentsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				tmp5->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(167)
					::sx::signals::Signal tmp6 = this->onComponentsChange;		HX_STACK_VAR(tmp6,"tmp6");
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
						HX_STACK_LINE(167)
						bool tmp10 = horizontal;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(167)
						bool tmp11 = vertical;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(152)
						listener(tmp10,tmp11).Cast< Void >();
					}
				}
				HX_STACK_LINE(167)
				::sx::signals::Signal tmp6 = this->onComponentsChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				tmp6->__listenersInUse = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Padding_obj,__invokeOnComponentsChange,(void))

::sx::properties::metric::Size Padding_obj::__ownerWidthProvider( ){
	HX_STACK_FRAME("sx.properties.metric.Padding","__ownerWidthProvider",0x37d78ccd,"sx.properties.metric.Padding.__ownerWidthProvider","sx/properties/metric/Padding.hx",175,0xb37c82fa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(176)
	Dynamic tmp = this->ownerWidth_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	::sx::properties::metric::Size tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(176)
	if ((tmp1)){
		HX_STACK_LINE(176)
		tmp2 = ::sx::properties::metric::_Size::Size_Internal_ZeroSize_obj::instance;
	}
	else{
		HX_STACK_LINE(176)
		tmp2 = this->ownerWidth();
	}
	HX_STACK_LINE(176)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Padding_obj,__ownerWidthProvider,return )

::sx::properties::metric::Size Padding_obj::__ownerHeightProvider( ){
	HX_STACK_FRAME("sx.properties.metric.Padding","__ownerHeightProvider",0x240ec802,"sx.properties.metric.Padding.__ownerHeightProvider","sx/properties/metric/Padding.hx",184,0xb37c82fa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	Dynamic tmp = this->ownerHeight_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	::sx::properties::metric::Size tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	if ((tmp1)){
		HX_STACK_LINE(185)
		tmp2 = ::sx::properties::metric::_Size::Size_Internal_ZeroSize_obj::instance;
	}
	else{
		HX_STACK_LINE(185)
		tmp2 = this->ownerHeight();
	}
	HX_STACK_LINE(185)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Padding_obj,__ownerHeightProvider,return )

Void Padding_obj::__constraintChanged( ::sx::properties::metric::Size constraint,::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.properties.metric.Padding","__constraintChanged",0xd4d4568e,"sx.properties.metric.Padding.__constraintChanged","sx/properties/metric/Padding.hx",193,0xb37c82fa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(constraint,"constraint")
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(194)
		::sx::properties::metric::Size tmp = constraint;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		::String tmp1 = previousUnits;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		Float tmp2 = previousValue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		this->super::__constraintChanged(tmp,tmp1,tmp2);
		HX_STACK_LINE(196)
		::sx::properties::metric::Size tmp3 = constraint;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		::sx::properties::metric::Size tmp4 = this->__min;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		if ((tmp5)){
			HX_STACK_LINE(197)
			::sx::properties::metric::SizeSetterProxy tmp6 = this->__horizontal;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(197)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(197)
			if ((tmp7)){
				HX_STACK_LINE(198)
				::sx::properties::metric::SizeSetterProxy tmp8 = this->__horizontal;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(198)
				::sx::properties::metric::Size tmp9 = constraint;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(198)
				tmp8->set_min(tmp9);
			}
			else{
				HX_STACK_LINE(200)
				::sx::properties::metric::Size tmp8 = this->get_left();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(200)
				::sx::properties::metric::Size tmp9 = constraint;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(200)
				tmp8->set_min(tmp9);
				HX_STACK_LINE(201)
				::sx::properties::metric::Size tmp10 = this->get_right();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(201)
				::sx::properties::metric::Size tmp11 = constraint;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(201)
				tmp10->set_min(tmp11);
			}
			HX_STACK_LINE(204)
			::sx::properties::metric::SizeSetterProxy tmp8 = this->__vertical;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(204)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(204)
			if ((tmp9)){
				HX_STACK_LINE(205)
				::sx::properties::metric::SizeSetterProxy tmp10 = this->__vertical;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(205)
				::sx::properties::metric::Size tmp11 = constraint;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(205)
				tmp10->set_min(tmp11);
			}
			else{
				HX_STACK_LINE(207)
				::sx::properties::metric::Size tmp10 = this->get_top();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(207)
				::sx::properties::metric::Size tmp11 = constraint;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(207)
				tmp10->set_min(tmp11);
				HX_STACK_LINE(208)
				::sx::properties::metric::Size tmp12 = this->get_bottom();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(208)
				::sx::properties::metric::Size tmp13 = constraint;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(208)
				tmp12->set_min(tmp13);
			}
		}
		else{
			HX_STACK_LINE(211)
			::sx::properties::metric::Size tmp6 = constraint;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(211)
			::sx::properties::metric::Size tmp7 = this->__max;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(211)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(211)
			if ((tmp8)){
				HX_STACK_LINE(212)
				::sx::properties::metric::SizeSetterProxy tmp9 = this->__horizontal;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(212)
				bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(212)
				if ((tmp10)){
					HX_STACK_LINE(213)
					::sx::properties::metric::SizeSetterProxy tmp11 = this->__horizontal;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(213)
					::sx::properties::metric::Size tmp12 = constraint;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(213)
					tmp11->set_max(tmp12);
				}
				else{
					HX_STACK_LINE(215)
					::sx::properties::metric::Size tmp11 = this->get_left();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(215)
					::sx::properties::metric::Size tmp12 = constraint;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(215)
					tmp11->set_max(tmp12);
					HX_STACK_LINE(216)
					::sx::properties::metric::Size tmp13 = this->get_right();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(216)
					::sx::properties::metric::Size tmp14 = constraint;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(216)
					tmp13->set_max(tmp14);
				}
				HX_STACK_LINE(219)
				::sx::properties::metric::SizeSetterProxy tmp11 = this->__vertical;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(219)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(219)
				if ((tmp12)){
					HX_STACK_LINE(220)
					::sx::properties::metric::SizeSetterProxy tmp13 = this->__vertical;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(220)
					::sx::properties::metric::Size tmp14 = constraint;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(220)
					tmp13->set_max(tmp14);
				}
				else{
					HX_STACK_LINE(222)
					::sx::properties::metric::Size tmp13 = this->get_top();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(222)
					::sx::properties::metric::Size tmp14 = constraint;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(222)
					tmp13->set_max(tmp14);
					HX_STACK_LINE(223)
					::sx::properties::metric::Size tmp15 = this->get_bottom();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(223)
					::sx::properties::metric::Size tmp16 = constraint;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(223)
					tmp15->set_max(tmp16);
				}
			}
		}
	}
return null();
}


Void Padding_obj::__verticalConstraintChanged( ::sx::properties::metric::Size constraint,::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.properties.metric.Padding","__verticalConstraintChanged",0xa2a0c438,"sx.properties.metric.Padding.__verticalConstraintChanged","sx/properties/metric/Padding.hx",233,0xb37c82fa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(constraint,"constraint")
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(234)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			::sx::properties::metric::SizeSetterProxy tmp1 = this->__vertical;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(234)
			::sx::properties::metric::Size tmp2 = tmp1->get_max();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(234)
			::sx::properties::metric::Size b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(234)
			Float tmp3 = constraint->get_dip();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(234)
			Float tmp4 = b->get_dip();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(234)
			tmp = (tmp3 == tmp4);
		}
		HX_STACK_LINE(234)
		if ((tmp)){
			HX_STACK_LINE(235)
			::sx::properties::metric::Size tmp1 = this->get_top();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(235)
			::sx::properties::metric::Size tmp2 = constraint;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(235)
			tmp1->set_max(tmp2);
			HX_STACK_LINE(236)
			::sx::properties::metric::Size tmp3 = this->get_bottom();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(236)
			::sx::properties::metric::Size tmp4 = constraint;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			tmp3->set_max(tmp4);
		}
		else{
			HX_STACK_LINE(237)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				::sx::properties::metric::SizeSetterProxy tmp2 = this->__vertical;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(237)
				::sx::properties::metric::Size tmp3 = tmp2->get_min();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(237)
				::sx::properties::metric::Size b = tmp3;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(237)
				Float tmp4 = constraint->get_dip();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(237)
				Float tmp5 = b->get_dip();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(237)
				tmp1 = (tmp4 == tmp5);
			}
			HX_STACK_LINE(237)
			if ((tmp1)){
				HX_STACK_LINE(238)
				::sx::properties::metric::Size tmp2 = this->get_top();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(238)
				::sx::properties::metric::Size tmp3 = constraint;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(238)
				tmp2->set_min(tmp3);
				HX_STACK_LINE(239)
				::sx::properties::metric::Size tmp4 = this->get_bottom();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(239)
				::sx::properties::metric::Size tmp5 = constraint;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(239)
				tmp4->set_min(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Padding_obj,__verticalConstraintChanged,(void))

Void Padding_obj::__horizontalConstraintChanged( ::sx::properties::metric::Size constraint,::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.properties.metric.Padding","__horizontalConstraintChanged",0xa0d933ca,"sx.properties.metric.Padding.__horizontalConstraintChanged","sx/properties/metric/Padding.hx",248,0xb37c82fa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(constraint,"constraint")
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(249)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			::sx::properties::metric::SizeSetterProxy tmp1 = this->__horizontal;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(249)
			::sx::properties::metric::Size tmp2 = tmp1->get_max();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(249)
			::sx::properties::metric::Size b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(249)
			Float tmp3 = constraint->get_dip();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			Float tmp4 = b->get_dip();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(249)
			tmp = (tmp3 == tmp4);
		}
		HX_STACK_LINE(249)
		if ((tmp)){
			HX_STACK_LINE(250)
			::sx::properties::metric::Size tmp1 = this->get_left();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(250)
			::sx::properties::metric::Size tmp2 = constraint;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(250)
			tmp1->set_max(tmp2);
			HX_STACK_LINE(251)
			::sx::properties::metric::Size tmp3 = this->get_right();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(251)
			::sx::properties::metric::Size tmp4 = constraint;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(251)
			tmp3->set_max(tmp4);
		}
		else{
			HX_STACK_LINE(252)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(252)
			{
				HX_STACK_LINE(252)
				::sx::properties::metric::SizeSetterProxy tmp2 = this->__horizontal;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(252)
				::sx::properties::metric::Size tmp3 = tmp2->get_min();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(252)
				::sx::properties::metric::Size b = tmp3;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(252)
				Float tmp4 = constraint->get_dip();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(252)
				Float tmp5 = b->get_dip();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(252)
				tmp1 = (tmp4 == tmp5);
			}
			HX_STACK_LINE(252)
			if ((tmp1)){
				HX_STACK_LINE(253)
				::sx::properties::metric::Size tmp2 = this->get_left();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(253)
				::sx::properties::metric::Size tmp3 = constraint;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(253)
				tmp2->set_min(tmp3);
				HX_STACK_LINE(254)
				::sx::properties::metric::Size tmp4 = this->get_right();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(254)
				::sx::properties::metric::Size tmp5 = constraint;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(254)
				tmp4->set_min(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Padding_obj,__horizontalConstraintChanged,(void))

::sx::properties::metric::SizeSetterProxy Padding_obj::get_horizontal( ){
	HX_STACK_FRAME("sx.properties.metric.Padding","get_horizontal",0x5074ccf6,"sx.properties.metric.Padding.get_horizontal","sx/properties/metric/Padding.hx",263,0xb37c82fa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(264)
	::sx::properties::metric::SizeSetterProxy tmp = this->__horizontal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(264)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(264)
	if ((tmp1)){
		HX_STACK_LINE(265)
		::sx::properties::metric::SizeSetterProxy tmp2 = ::sx::properties::metric::SizeSetterProxy_obj::__new(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		this->__horizontal = tmp2;
		HX_STACK_LINE(266)
		::sx::properties::metric::SizeSetterProxy tmp3 = this->__horizontal;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(266)
		Dynamic tmp4 = this->__dimensionChanged_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(266)
		tmp3->onChange->add(tmp4);
		HX_STACK_LINE(267)
		::sx::properties::metric::SizeSetterProxy tmp5 = this->__horizontal;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(267)
		::sx::properties::metric::Size tmp6 = tmp5->get_min();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(267)
		Dynamic tmp7 = this->__horizontalConstraintChanged_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(267)
		tmp6->onChange->add(tmp7);
		HX_STACK_LINE(268)
		::sx::properties::metric::SizeSetterProxy tmp8 = this->__horizontal;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(268)
		::sx::properties::metric::Size tmp9 = tmp8->get_max();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(268)
		Dynamic tmp10 = this->__horizontalConstraintChanged_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(268)
		tmp9->onChange->add(tmp10);
	}
	HX_STACK_LINE(271)
	::sx::properties::metric::SizeSetterProxy tmp2 = this->__horizontal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(271)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Padding_obj,get_horizontal,return )

::sx::properties::metric::SizeSetterProxy Padding_obj::get_vertical( ){
	HX_STACK_FRAME("sx.properties.metric.Padding","get_vertical",0x31f80408,"sx.properties.metric.Padding.get_vertical","sx/properties/metric/Padding.hx",279,0xb37c82fa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(280)
	::sx::properties::metric::SizeSetterProxy tmp = this->__vertical;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	if ((tmp1)){
		HX_STACK_LINE(281)
		::sx::properties::metric::SizeSetterProxy tmp2 = ::sx::properties::metric::SizeSetterProxy_obj::__new(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(281)
		this->__vertical = tmp2;
		HX_STACK_LINE(282)
		::sx::properties::metric::SizeSetterProxy tmp3 = this->__vertical;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		Dynamic tmp4 = this->__dimensionChanged_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(282)
		tmp3->onChange->add(tmp4);
		HX_STACK_LINE(283)
		::sx::properties::metric::SizeSetterProxy tmp5 = this->__vertical;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(283)
		::sx::properties::metric::Size tmp6 = tmp5->get_min();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(283)
		Dynamic tmp7 = this->__verticalConstraintChanged_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(283)
		tmp6->onChange->add(tmp7);
		HX_STACK_LINE(284)
		::sx::properties::metric::SizeSetterProxy tmp8 = this->__vertical;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(284)
		::sx::properties::metric::Size tmp9 = tmp8->get_max();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(284)
		Dynamic tmp10 = this->__verticalConstraintChanged_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(284)
		tmp9->onChange->add(tmp10);
	}
	HX_STACK_LINE(287)
	::sx::properties::metric::SizeSetterProxy tmp2 = this->__vertical;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(287)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Padding_obj,get_vertical,return )

::sx::properties::metric::SizeSetterProxy Padding_obj::set_horizontal( ::sx::properties::metric::SizeSetterProxy value){
	HX_STACK_FRAME("sx.properties.metric.Padding","set_horizontal",0x7094b56a,"sx.properties.metric.Padding.set_horizontal","sx/properties/metric/Padding.hx",295,0xb37c82fa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(296)
	::sx::properties::metric::SizeSetterProxy tmp = this->get_horizontal();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	::sx::properties::metric::SizeSetterProxy proxy = tmp;		HX_STACK_VAR(proxy,"proxy");
	HX_STACK_LINE(297)
	::sx::properties::metric::SizeSetterProxy tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	proxy->copyValueFrom(tmp1);
	HX_STACK_LINE(299)
	::sx::properties::metric::SizeSetterProxy tmp2 = proxy;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(299)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Padding_obj,set_horizontal,return )

::sx::properties::metric::SizeSetterProxy Padding_obj::set_vertical( ::sx::properties::metric::SizeSetterProxy value){
	HX_STACK_FRAME("sx.properties.metric.Padding","set_vertical",0x46f1277c,"sx.properties.metric.Padding.set_vertical","sx/properties/metric/Padding.hx",307,0xb37c82fa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(308)
	::sx::properties::metric::SizeSetterProxy tmp = this->get_vertical();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(308)
	::sx::properties::metric::SizeSetterProxy proxy = tmp;		HX_STACK_VAR(proxy,"proxy");
	HX_STACK_LINE(309)
	::sx::properties::metric::SizeSetterProxy tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(309)
	proxy->copyValueFrom(tmp1);
	HX_STACK_LINE(311)
	::sx::properties::metric::SizeSetterProxy tmp2 = proxy;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(311)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Padding_obj,set_vertical,return )

::String Padding_obj::toString( ){
	HX_STACK_FRAME("sx.properties.metric.Padding","toString",0x4e12abb5,"sx.properties.metric.Padding.toString","sx/properties/metric/Padding.hx",319,0xb37c82fa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(320)
	::sx::properties::metric::Size tmp = this->get_left();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(320)
	::String tmp2 = (HX_HCSTRING("{ left : ","\x7a","\xa8","\x09","\x75") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(320)
	::String tmp3 = (tmp2 + HX_HCSTRING(", top : ","\xc5","\x14","\x5b","\x9c"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(320)
	::sx::properties::metric::Size tmp4 = this->get_top();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(320)
	::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(320)
	::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(320)
	::String tmp7 = (tmp6 + HX_HCSTRING(", right : ","\xde","\xfa","\xf1","\x4e"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(320)
	::sx::properties::metric::Size tmp8 = this->get_right();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(320)
	::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(320)
	::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(320)
	::String tmp11 = (tmp10 + HX_HCSTRING(", bottom : ","\xc7","\xe3","\x91","\x27"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(320)
	::sx::properties::metric::Size tmp12 = this->get_bottom();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(320)
	::String tmp13 = ::Std_obj::string(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(320)
	::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(320)
	::String tmp15 = (tmp14 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(320)
	return tmp15;
}


::sx::properties::metric::Size Padding_obj::get_left( ){
	HX_STACK_FRAME("sx.properties.metric.Padding","get_left",0xdd0e9e99,"sx.properties.metric.Padding.get_left","sx/properties/metric/Padding.hx",325,0xb37c82fa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(325)
	::sx::properties::metric::Size tmp = this->__left;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(325)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Padding_obj,get_left,return )

::sx::properties::metric::Size Padding_obj::get_right( ){
	HX_STACK_FRAME("sx.properties.metric.Padding","get_right",0x06c9350a,"sx.properties.metric.Padding.get_right","sx/properties/metric/Padding.hx",326,0xb37c82fa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(326)
	::sx::properties::metric::Size tmp = this->__right;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(326)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Padding_obj,get_right,return )

::sx::properties::metric::Size Padding_obj::get_top( ){
	HX_STACK_FRAME("sx.properties.metric.Padding","get_top",0x7cff4843,"sx.properties.metric.Padding.get_top","sx/properties/metric/Padding.hx",327,0xb37c82fa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(327)
	::sx::properties::metric::Size tmp = this->__top;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Padding_obj,get_top,return )

::sx::properties::metric::Size Padding_obj::get_bottom( ){
	HX_STACK_FRAME("sx.properties.metric.Padding","get_bottom",0x0097c5fd,"sx.properties.metric.Padding.get_bottom","sx/properties/metric/Padding.hx",328,0xb37c82fa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(328)
	::sx::properties::metric::Size tmp = this->__bottom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Padding_obj,get_bottom,return )

::sx::properties::metric::Size Padding_obj::set_left( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.properties.metric.Padding","set_left",0x8b6bf80d,"sx.properties.metric.Padding.set_left","sx/properties/metric/Padding.hx",331,0xb37c82fa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(331)
	::sx::properties::metric::Size tmp = this->__left;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	::sx::properties::metric::Size tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(331)
	::sx::properties::metric::Size tmp2 = tmp->copyValueFrom(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(331)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Padding_obj,set_left,return )

::sx::properties::metric::Size Padding_obj::set_right( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.properties.metric.Padding","set_right",0xea1a2116,"sx.properties.metric.Padding.set_right","sx/properties/metric/Padding.hx",332,0xb37c82fa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(332)
	::sx::properties::metric::Size tmp = this->__right;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(332)
	::sx::properties::metric::Size tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(332)
	::sx::properties::metric::Size tmp2 = tmp->copyValueFrom(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(332)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Padding_obj,set_right,return )

::sx::properties::metric::Size Padding_obj::set_top( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.properties.metric.Padding","set_top",0x7000d94f,"sx.properties.metric.Padding.set_top","sx/properties/metric/Padding.hx",333,0xb37c82fa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(333)
	::sx::properties::metric::Size tmp = this->__top;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(333)
	::sx::properties::metric::Size tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(333)
	::sx::properties::metric::Size tmp2 = tmp->copyValueFrom(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(333)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Padding_obj,set_top,return )

::sx::properties::metric::Size Padding_obj::set_bottom( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.properties.metric.Padding","set_bottom",0x04156471,"sx.properties.metric.Padding.set_bottom","sx/properties/metric/Padding.hx",334,0xb37c82fa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(334)
	::sx::properties::metric::Size tmp = this->__bottom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(334)
	::sx::properties::metric::Size tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(334)
	::sx::properties::metric::Size tmp2 = tmp->copyValueFrom(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(334)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Padding_obj,set_bottom,return )


Padding_obj::Padding_obj()
{
}

void Padding_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Padding);
	HX_MARK_MEMBER_NAME(__left,"__left");
	HX_MARK_MEMBER_NAME(__right,"__right");
	HX_MARK_MEMBER_NAME(__top,"__top");
	HX_MARK_MEMBER_NAME(__bottom,"__bottom");
	HX_MARK_MEMBER_NAME(__horizontal,"__horizontal");
	HX_MARK_MEMBER_NAME(__vertical,"__vertical");
	HX_MARK_MEMBER_NAME(ownerWidth,"ownerWidth");
	HX_MARK_MEMBER_NAME(ownerHeight,"ownerHeight");
	HX_MARK_MEMBER_NAME(onComponentsChange,"onComponentsChange");
	HX_MARK_MEMBER_NAME(__batchChanges,"__batchChanges");
	::sx::properties::metric::Size_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Padding_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__left,"__left");
	HX_VISIT_MEMBER_NAME(__right,"__right");
	HX_VISIT_MEMBER_NAME(__top,"__top");
	HX_VISIT_MEMBER_NAME(__bottom,"__bottom");
	HX_VISIT_MEMBER_NAME(__horizontal,"__horizontal");
	HX_VISIT_MEMBER_NAME(__vertical,"__vertical");
	HX_VISIT_MEMBER_NAME(ownerWidth,"ownerWidth");
	HX_VISIT_MEMBER_NAME(ownerHeight,"ownerHeight");
	HX_VISIT_MEMBER_NAME(onComponentsChange,"onComponentsChange");
	HX_VISIT_MEMBER_NAME(__batchChanges,"__batchChanges");
	::sx::properties::metric::Size_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Padding_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return get_top(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return get_left(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return get_right(); }
		if (HX_FIELD_EQ(inName,"__top") ) { return __top; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__left") ) { return __left; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return get_bottom(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__right") ) { return __right; }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bottom") ) { return __bottom; }
		if (HX_FIELD_EQ(inName,"vertical") ) { if (inCallProp == hx::paccAlways) return get_vertical(); }
		if (HX_FIELD_EQ(inName,"__setAll") ) { return __setAll_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"horizontal") ) { if (inCallProp == hx::paccAlways) return get_horizontal(); }
		if (HX_FIELD_EQ(inName,"__vertical") ) { return __vertical; }
		if (HX_FIELD_EQ(inName,"ownerWidth") ) { return ownerWidth; }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ownerHeight") ) { return ownerHeight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__horizontal") ) { return __horizontal; }
		if (HX_FIELD_EQ(inName,"get_vertical") ) { return get_vertical_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vertical") ) { return set_vertical_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__sideChanged") ) { return __sideChanged_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__batchChanges") ) { return __batchChanges; }
		if (HX_FIELD_EQ(inName,"__setDimension") ) { return __setDimension_dyn(); }
		if (HX_FIELD_EQ(inName,"get_horizontal") ) { return get_horizontal_dyn(); }
		if (HX_FIELD_EQ(inName,"set_horizontal") ) { return set_horizontal_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onComponentsChange") ) { return onComponentsChange; }
		if (HX_FIELD_EQ(inName,"__dimensionChanged") ) { return __dimensionChanged_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__constraintChanged") ) { return __constraintChanged_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__ownerWidthProvider") ) { return __ownerWidthProvider_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__ownerHeightProvider") ) { return __ownerHeightProvider_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__invokeOnComponentsChange") ) { return __invokeOnComponentsChange_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"__verticalConstraintChanged") ) { return __verticalConstraintChanged_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"__horizontalConstraintChanged") ) { return __horizontalConstraintChanged_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Padding_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return set_left(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return set_right(inValue); }
		if (HX_FIELD_EQ(inName,"__top") ) { __top=inValue.Cast< ::sx::properties::metric::Size >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__left") ) { __left=inValue.Cast< ::sx::properties::metric::Size >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return set_bottom(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__right") ) { __right=inValue.Cast< ::sx::properties::metric::Size >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bottom") ) { __bottom=inValue.Cast< ::sx::properties::metric::Size >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertical") ) { if (inCallProp == hx::paccAlways) return set_vertical(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"horizontal") ) { if (inCallProp == hx::paccAlways) return set_horizontal(inValue); }
		if (HX_FIELD_EQ(inName,"__vertical") ) { __vertical=inValue.Cast< ::sx::properties::metric::SizeSetterProxy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ownerWidth") ) { ownerWidth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ownerHeight") ) { ownerHeight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__horizontal") ) { __horizontal=inValue.Cast< ::sx::properties::metric::SizeSetterProxy >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__batchChanges") ) { __batchChanges=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onComponentsChange") ) { onComponentsChange=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Padding_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Padding_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("__left","\x27","\x6b","\xa8","\xf6"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("__right","\xbc","\x64","\xc2","\x53"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("__top","\x75","\xc7","\x34","\xf2"));
	outFields->push(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	outFields->push(HX_HCSTRING("__bottom","\x0b","\x52","\xa8","\x0d"));
	outFields->push(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));
	outFields->push(HX_HCSTRING("__horizontal","\x04","\x78","\x57","\x4e"));
	outFields->push(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));
	outFields->push(HX_HCSTRING("__vertical","\x96","\x2f","\x4e","\x0d"));
	outFields->push(HX_HCSTRING("onComponentsChange","\x65","\x5a","\x87","\x48"));
	outFields->push(HX_HCSTRING("__batchChanges","\x89","\x3f","\x05","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sx::properties::metric::Size*/ ,(int)offsetof(Padding_obj,__left),HX_HCSTRING("__left","\x27","\x6b","\xa8","\xf6")},
	{hx::fsObject /*::sx::properties::metric::Size*/ ,(int)offsetof(Padding_obj,__right),HX_HCSTRING("__right","\xbc","\x64","\xc2","\x53")},
	{hx::fsObject /*::sx::properties::metric::Size*/ ,(int)offsetof(Padding_obj,__top),HX_HCSTRING("__top","\x75","\xc7","\x34","\xf2")},
	{hx::fsObject /*::sx::properties::metric::Size*/ ,(int)offsetof(Padding_obj,__bottom),HX_HCSTRING("__bottom","\x0b","\x52","\xa8","\x0d")},
	{hx::fsObject /*::sx::properties::metric::SizeSetterProxy*/ ,(int)offsetof(Padding_obj,__horizontal),HX_HCSTRING("__horizontal","\x04","\x78","\x57","\x4e")},
	{hx::fsObject /*::sx::properties::metric::SizeSetterProxy*/ ,(int)offsetof(Padding_obj,__vertical),HX_HCSTRING("__vertical","\x96","\x2f","\x4e","\x0d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Padding_obj,ownerWidth),HX_HCSTRING("ownerWidth","\xd3","\xf4","\x65","\x5c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Padding_obj,ownerHeight),HX_HCSTRING("ownerHeight","\x7a","\xbc","\x1f","\x33")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Padding_obj,onComponentsChange),HX_HCSTRING("onComponentsChange","\x65","\x5a","\x87","\x48")},
	{hx::fsBool,(int)offsetof(Padding_obj,__batchChanges),HX_HCSTRING("__batchChanges","\x89","\x3f","\x05","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__left","\x27","\x6b","\xa8","\xf6"),
	HX_HCSTRING("__right","\xbc","\x64","\xc2","\x53"),
	HX_HCSTRING("__top","\x75","\xc7","\x34","\xf2"),
	HX_HCSTRING("__bottom","\x0b","\x52","\xa8","\x0d"),
	HX_HCSTRING("__horizontal","\x04","\x78","\x57","\x4e"),
	HX_HCSTRING("__vertical","\x96","\x2f","\x4e","\x0d"),
	HX_HCSTRING("ownerWidth","\xd3","\xf4","\x65","\x5c"),
	HX_HCSTRING("ownerHeight","\x7a","\xbc","\x1f","\x33"),
	HX_HCSTRING("onComponentsChange","\x65","\x5a","\x87","\x48"),
	HX_HCSTRING("__batchChanges","\x89","\x3f","\x05","\xac"),
	HX_HCSTRING("__sideChanged","\xfd","\x7c","\x3f","\x9c"),
	HX_HCSTRING("__dimensionChanged","\x4e","\x09","\x81","\x65"),
	HX_HCSTRING("__setDimension","\x84","\x7e","\x24","\xda"),
	HX_HCSTRING("__setAll","\xbf","\xf1","\x90","\x17"),
	HX_HCSTRING("__invokeOnComponentsChange","\x1d","\xe7","\x7d","\xff"),
	HX_HCSTRING("__ownerWidthProvider","\x44","\xc8","\x92","\x9a"),
	HX_HCSTRING("__ownerHeightProvider","\xab","\x94","\x27","\x25"),
	HX_HCSTRING("__constraintChanged","\xf7","\x76","\x15","\xeb"),
	HX_HCSTRING("__verticalConstraintChanged","\xa1","\xf5","\x05","\x14"),
	HX_HCSTRING("__horizontalConstraintChanged","\x73","\x51","\xfc","\x1a"),
	HX_HCSTRING("get_horizontal","\x2d","\x85","\xb9","\x8b"),
	HX_HCSTRING("get_vertical","\x7f","\x70","\x2f","\x1f"),
	HX_HCSTRING("set_horizontal","\xa1","\x6d","\xd9","\xab"),
	HX_HCSTRING("set_vertical","\xf3","\x93","\x28","\x34"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_left","\x90","\xc3","\x6a","\xc7"),
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("get_top","\x2c","\x2f","\xcd","\x26"),
	HX_HCSTRING("get_bottom","\xb4","\x56","\x00","\x56"),
	HX_HCSTRING("set_left","\x04","\x1d","\xc8","\x75"),
	HX_HCSTRING("set_right","\x3f","\x54","\x5e","\x10"),
	HX_HCSTRING("set_top","\x38","\xc0","\xce","\x19"),
	HX_HCSTRING("set_bottom","\x28","\xf5","\x7d","\x59"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Padding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Padding_obj::__mClass,"__mClass");
};

#endif

hx::Class Padding_obj::__mClass;

void Padding_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.metric.Padding","\x85","\x0a","\x9c","\x0d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Padding_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Padding_obj >;
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
} // end namespace metric
