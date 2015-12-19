#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_sx_Sx
#include <sx/Sx.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
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

Void Size_obj::__construct(::String __o_orientation)
{
HX_STACK_FRAME("sx.properties.metric.Size","new",0x0b7122ff,"sx.properties.metric.Size.new","sx/properties/metric/Size.hx",18,0x13fef910)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_orientation,"orientation")
::String orientation = __o_orientation.Default(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));
{
	HX_STACK_LINE(71)
	this->__value = ((Float)0);
	HX_STACK_LINE(68)
	this->weak = false;
	HX_STACK_LINE(46)
	this->units = HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00");
	HX_STACK_LINE(80)
	this->orientation = orientation;
	HX_STACK_LINE(81)
	::sx::signals::Signal tmp = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	this->onChange = tmp;
}
;
	return null();
}

//Size_obj::~Size_obj() { }

Dynamic Size_obj::__CreateEmpty() { return  new Size_obj; }
hx::ObjectPtr< Size_obj > Size_obj::__new(::String __o_orientation)
{  hx::ObjectPtr< Size_obj > _result_ = new Size_obj();
	_result_->__construct(__o_orientation);
	return _result_;}

Dynamic Size_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Size_obj > _result_ = new Size_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool Size_obj::isVertical( ){
	HX_STACK_FRAME("sx.properties.metric.Size","isVertical",0xd62a9dc1,"sx.properties.metric.Size.isVertical","sx/properties/metric/Size.hx",89,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	::String tmp = this->orientation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	bool tmp1 = (tmp == HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,isVertical,return )

bool Size_obj::isHorizontal( ){
	HX_STACK_FRAME("sx.properties.metric.Size","isHorizontal",0x59cc06ef,"sx.properties.metric.Size.isHorizontal","sx/properties/metric/Size.hx",98,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	::String tmp = this->orientation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	bool tmp1 = (tmp == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,isHorizontal,return )

::String Size_obj::toString( ){
	HX_STACK_FRAME("sx.properties.metric.Size","toString",0x9a869dad,"sx.properties.metric.Size.toString","sx/properties/metric/Size.hx",108,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	{
		HX_STACK_LINE(109)
		::String tmp1 = this->units;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		::String _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(109)
		::String tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		::String _switch_1 = (tmp2);
		if (  ( _switch_1==HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"))){
			HX_STACK_LINE(110)
			tmp = this->get_dip();
		}
		else if (  ( _switch_1==HX_HCSTRING("px","\x08","\x62","\x00","\x00"))){
			HX_STACK_LINE(111)
			tmp = this->get_px();
		}
		else if (  ( _switch_1==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
			HX_STACK_LINE(112)
			tmp = this->get_pct();
		}
	}
	HX_STACK_LINE(109)
	Float value = tmp;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(115)
	::String tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + value);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	::String tmp2 = this->units;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,toString,return )

::sx::properties::metric::Size Size_obj::copyValueFrom( ::sx::properties::metric::Size size){
	HX_STACK_FRAME("sx.properties.metric.Size","copyValueFrom",0x2be95265,"sx.properties.metric.Size.copyValueFrom","sx/properties/metric/Size.hx",125,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(126)
	::String tmp = this->units;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	::String previousUnits = tmp;		HX_STACK_VAR(previousUnits,"previousUnits");
	HX_STACK_LINE(127)
	Float tmp1 = this->__value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	Float previousValue = tmp1;		HX_STACK_VAR(previousValue,"previousValue");
	HX_STACK_LINE(129)
	this->units = size->units;
	HX_STACK_LINE(130)
	this->__value = size->__value;
	HX_STACK_LINE(132)
	bool tmp2 = size->weak;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	if ((tmp2)){
		HX_STACK_LINE(132)
		size->dispose();
	}
	HX_STACK_LINE(134)
	::String tmp3 = previousUnits;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	Float tmp4 = previousValue;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(134)
	this->__invokeOnChange(tmp3,tmp4);
	HX_STACK_LINE(136)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Size_obj,copyValueFrom,return )

bool Size_obj::hasMin( ){
	HX_STACK_FRAME("sx.properties.metric.Size","hasMin",0x5cd4f919,"sx.properties.metric.Size.hasMin","sx/properties/metric/Size.hx",144,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	::sx::properties::metric::Size tmp = this->__min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,hasMin,return )

Void Size_obj::dispose( ){
{
		HX_STACK_FRAME("sx.properties.metric.Size","dispose",0x81310ebe,"sx.properties.metric.Size.dispose","sx/properties/metric/Size.hx",153,0x13fef910)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,dispose,(void))

::sx::properties::metric::Size Size_obj::__pctSource( ){
	HX_STACK_FRAME("sx.properties.metric.Size","__pctSource",0x1c7bd95b,"sx.properties.metric.Size.__pctSource","sx/properties/metric/Size.hx",162,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_LINE(163)
	Dynamic tmp = this->pctSource_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	::sx::properties::metric::Size tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	if ((tmp1)){
		HX_STACK_LINE(163)
		tmp2 = ::sx::properties::metric::_Size::Size_Internal_ZeroSize_obj::instance;
	}
	else{
		HX_STACK_LINE(163)
		tmp2 = this->pctSource();
	}
	HX_STACK_LINE(163)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,__pctSource,return )

Void Size_obj::__invokeOnChange( ::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.properties.metric.Size","__invokeOnChange",0x3307b4a8,"sx.properties.metric.Size.__invokeOnChange","sx/properties/metric/Size.hx",171,0x13fef910)
		HX_STACK_THIS(this)
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(172)
		::sx::signals::Signal tmp = this->onChange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		if ((tmp1)){
			HX_STACK_LINE(172)
			::sx::signals::Signal tmp3 = this->onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(172)
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
			HX_STACK_LINE(172)
			::sx::signals::Signal tmp3 = this->onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			bool tmp4 = tmp3->__listenersInUse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			if ((tmp4)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(172)
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
						HX_STACK_LINE(172)
						::String tmp9 = previousUnits;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(172)
						Float tmp10 = previousValue;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(148)
						listener(hx::ObjectPtr<OBJ_>(this),tmp9,tmp10).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(172)
				::sx::signals::Signal tmp5 = this->onChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				tmp5->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(172)
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
						HX_STACK_LINE(172)
						::String tmp10 = previousUnits;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(172)
						Float tmp11 = previousValue;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(152)
						listener(hx::ObjectPtr<OBJ_>(this),tmp10,tmp11).Cast< Void >();
					}
				}
				HX_STACK_LINE(172)
				::sx::signals::Signal tmp6 = this->onChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				tmp6->__listenersInUse = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Size_obj,__invokeOnChange,(void))

Void Size_obj::__constraintChanged( ::sx::properties::metric::Size constraint,::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.properties.metric.Size","__constraintChanged",0x2ee63796,"sx.properties.metric.Size.__constraintChanged","sx/properties/metric/Size.hx",180,0x13fef910)
		HX_STACK_THIS(this)
		HX_STACK_ARG(constraint,"constraint")
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(181)
		::sx::properties::metric::Size tmp = constraint;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		::sx::properties::metric::Size tmp1 = this->__min;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		if ((tmp2)){
			HX_STACK_LINE(182)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				::sx::properties::metric::Size tmp4 = this->__min;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(182)
				::sx::properties::metric::Size size = tmp4;		HX_STACK_VAR(size,"size");
				HX_STACK_LINE(182)
				::String tmp5 = this->units;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(182)
				::String _switch_2 = (tmp5);
				if (  ( _switch_2==HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"))){
					HX_STACK_LINE(182)
					tmp3 = size->get_dip();
				}
				else if (  ( _switch_2==HX_HCSTRING("px","\x08","\x62","\x00","\x00"))){
					HX_STACK_LINE(182)
					tmp3 = size->get_px();
				}
				else if (  ( _switch_2==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
					HX_STACK_LINE(182)
					tmp3 = size->get_pct();
				}
			}
			HX_STACK_LINE(182)
			Float minValue = tmp3;		HX_STACK_VAR(minValue,"minValue");
			HX_STACK_LINE(183)
			Float tmp4 = this->__value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(183)
			Float tmp5 = minValue;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(183)
			bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(183)
			if ((tmp6)){
				HX_STACK_LINE(184)
				Float tmp7 = this->__value;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(184)
				Float previous = tmp7;		HX_STACK_VAR(previous,"previous");
				HX_STACK_LINE(185)
				this->__value = minValue;
				HX_STACK_LINE(186)
				::String tmp8 = this->units;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(186)
				Float tmp9 = previous;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(186)
				this->__invokeOnChange(tmp8,tmp9);
			}
			HX_STACK_LINE(189)
			return null();
		}
		HX_STACK_LINE(192)
		::sx::properties::metric::Size tmp3 = constraint;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		::sx::properties::metric::Size tmp4 = this->__max;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(192)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(192)
		if ((tmp5)){
			HX_STACK_LINE(193)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				::sx::properties::metric::Size tmp7 = this->__max;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(193)
				::sx::properties::metric::Size size = tmp7;		HX_STACK_VAR(size,"size");
				HX_STACK_LINE(193)
				::String tmp8 = this->units;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(193)
				::String _switch_3 = (tmp8);
				if (  ( _switch_3==HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"))){
					HX_STACK_LINE(193)
					tmp6 = size->get_dip();
				}
				else if (  ( _switch_3==HX_HCSTRING("px","\x08","\x62","\x00","\x00"))){
					HX_STACK_LINE(193)
					tmp6 = size->get_px();
				}
				else if (  ( _switch_3==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
					HX_STACK_LINE(193)
					tmp6 = size->get_pct();
				}
			}
			HX_STACK_LINE(193)
			Float maxValue = tmp6;		HX_STACK_VAR(maxValue,"maxValue");
			HX_STACK_LINE(194)
			Float tmp7 = this->__value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(194)
			Float tmp8 = maxValue;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(194)
			bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(194)
			if ((tmp9)){
				HX_STACK_LINE(195)
				Float tmp10 = this->__value;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(195)
				Float previous = tmp10;		HX_STACK_VAR(previous,"previous");
				HX_STACK_LINE(196)
				this->__value = maxValue;
				HX_STACK_LINE(197)
				::String tmp11 = this->units;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(197)
				Float tmp12 = previous;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(197)
				this->__invokeOnChange(tmp11,tmp12);
			}
			HX_STACK_LINE(200)
			return null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Size_obj,__constraintChanged,(void))

Float Size_obj::get_dip( ){
	HX_STACK_FRAME("sx.properties.metric.Size","get_dip",0xeca59401,"sx.properties.metric.Size.get_dip","sx/properties/metric/Size.hx",210,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	{
		HX_STACK_LINE(211)
		::String tmp1 = this->units;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		::String _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(211)
		::String tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(211)
		::String _switch_4 = (tmp2);
		if (  ( _switch_4==HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"))){
			HX_STACK_LINE(212)
			tmp = this->__value;
		}
		else if (  ( _switch_4==HX_HCSTRING("px","\x08","\x62","\x00","\x00"))){
			HX_STACK_LINE(213)
			Float tmp3 = this->__value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(213)
			Float tmp4 = ::sx::Sx_obj::dipFactor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(213)
			tmp = (Float(tmp3) / Float(tmp4));
		}
		else if (  ( _switch_4==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
			HX_STACK_LINE(214)
			::sx::properties::metric::Size tmp3 = this->__pctSource();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			Float tmp4 = tmp3->get_dip();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(214)
			Float tmp5 = this->__value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(214)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(214)
			tmp = (tmp6 * ((Float)0.01));
		}
	}
	HX_STACK_LINE(211)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,get_dip,return )

Float Size_obj::get_px( ){
	HX_STACK_FRAME("sx.properties.metric.Size","get_px",0x44cad412,"sx.properties.metric.Size.get_px","sx/properties/metric/Size.hx",224,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		::String tmp1 = this->units;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		::String _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(225)
		::String tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		::String _switch_5 = (tmp2);
		if (  ( _switch_5==HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"))){
			HX_STACK_LINE(226)
			Float tmp3 = this->__value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			Float tmp4 = ::sx::Sx_obj::dipFactor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(226)
			tmp = (tmp3 * tmp4);
		}
		else if (  ( _switch_5==HX_HCSTRING("px","\x08","\x62","\x00","\x00"))){
			HX_STACK_LINE(227)
			tmp = this->__value;
		}
		else if (  ( _switch_5==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
			HX_STACK_LINE(228)
			::sx::properties::metric::Size tmp3 = this->__pctSource();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(228)
			Float tmp4 = tmp3->get_px();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(228)
			Float tmp5 = this->__value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(228)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(228)
			tmp = (tmp6 * ((Float)0.01));
		}
	}
	HX_STACK_LINE(225)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,get_px,return )

Float Size_obj::get_pct( ){
	HX_STACK_FRAME("sx.properties.metric.Size","get_pct",0xecaea9d7,"sx.properties.metric.Size.get_pct","sx/properties/metric/Size.hx",238,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_LINE(239)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	{
		HX_STACK_LINE(239)
		::String tmp1 = this->units;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		::String _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		::String tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		::String _switch_6 = (tmp2);
		if (  ( _switch_6==HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"))){
			HX_STACK_LINE(241)
			::sx::properties::metric::Size tmp3 = this->__pctSource();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(241)
			Float tmp4 = tmp3->get_dip();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(241)
			Float dip = tmp4;		HX_STACK_VAR(dip,"dip");
			HX_STACK_LINE(242)
			bool tmp5 = (dip == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(242)
			if ((tmp5)){
				HX_STACK_LINE(242)
				tmp = (int)100;
			}
			else{
				HX_STACK_LINE(242)
				Float tmp6 = this->__value;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(242)
				Float tmp7 = dip;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(242)
				Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(242)
				tmp = (tmp8 * (int)100);
			}
		}
		else if (  ( _switch_6==HX_HCSTRING("px","\x08","\x62","\x00","\x00"))){
			HX_STACK_LINE(244)
			::sx::properties::metric::Size tmp3 = this->__pctSource();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(244)
			Float tmp4 = tmp3->get_px();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(244)
			Float px = tmp4;		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(245)
			bool tmp5 = (px == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(245)
			if ((tmp5)){
				HX_STACK_LINE(245)
				tmp = (int)100;
			}
			else{
				HX_STACK_LINE(245)
				Float tmp6 = this->__value;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(245)
				Float tmp7 = px;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(245)
				Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(245)
				tmp = (tmp8 * (int)100);
			}
		}
		else if (  ( _switch_6==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
			HX_STACK_LINE(247)
			tmp = this->__value;
		}
	}
	HX_STACK_LINE(239)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,get_pct,return )

Float Size_obj::set_dip( Float value){
	HX_STACK_FRAME("sx.properties.metric.Size","set_dip",0xdfa7250d,"sx.properties.metric.Size.set_dip","sx/properties/metric/Size.hx",257,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(258)
	::String tmp = this->units;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	::String previousUnits = tmp;		HX_STACK_VAR(previousUnits,"previousUnits");
	HX_STACK_LINE(259)
	Float tmp1 = this->__value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	Float previousValue = tmp1;		HX_STACK_VAR(previousValue,"previousValue");
	HX_STACK_LINE(261)
	this->units = HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00");
	HX_STACK_LINE(262)
	::sx::properties::metric::Size tmp2 = this->__min;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(262)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(262)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(262)
	if ((tmp3)){
		HX_STACK_LINE(262)
		::sx::properties::metric::Size tmp5 = this->__min;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(262)
		::sx::properties::metric::Size tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(262)
		Float tmp7 = tmp6->get_dip();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(262)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(262)
		Float tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(262)
		tmp4 = (tmp8 > tmp9);
	}
	else{
		HX_STACK_LINE(262)
		tmp4 = false;
	}
	HX_STACK_LINE(262)
	if ((tmp4)){
		HX_STACK_LINE(263)
		::sx::properties::metric::Size tmp5 = this->__min;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(263)
		Float tmp6 = tmp5->get_dip();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(263)
		this->__value = tmp6;
	}
	else{
		HX_STACK_LINE(264)
		::sx::properties::metric::Size tmp5 = this->__max;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(264)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(264)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(264)
		if ((tmp6)){
			HX_STACK_LINE(264)
			::sx::properties::metric::Size tmp8 = this->__max;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(264)
			::sx::properties::metric::Size tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(264)
			Float tmp10 = tmp9->get_dip();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(264)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(264)
			Float tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(264)
			tmp7 = (tmp11 < tmp12);
		}
		else{
			HX_STACK_LINE(264)
			tmp7 = false;
		}
		HX_STACK_LINE(264)
		if ((tmp7)){
			HX_STACK_LINE(265)
			::sx::properties::metric::Size tmp8 = this->__max;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(265)
			Float tmp9 = tmp8->get_dip();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(265)
			this->__value = tmp9;
		}
		else{
			HX_STACK_LINE(267)
			this->__value = value;
		}
	}
	HX_STACK_LINE(270)
	::String tmp5 = previousUnits;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(270)
	Float tmp6 = previousValue;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(270)
	this->__invokeOnChange(tmp5,tmp6);
	HX_STACK_LINE(272)
	Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(272)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Size_obj,set_dip,return )

Float Size_obj::set_px( Float value){
	HX_STACK_FRAME("sx.properties.metric.Size","set_px",0x11132886,"sx.properties.metric.Size.set_px","sx/properties/metric/Size.hx",281,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(282)
	::String tmp = this->units;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	::String previousUnits = tmp;		HX_STACK_VAR(previousUnits,"previousUnits");
	HX_STACK_LINE(283)
	Float tmp1 = this->__value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	Float previousValue = tmp1;		HX_STACK_VAR(previousValue,"previousValue");
	HX_STACK_LINE(285)
	this->units = HX_HCSTRING("px","\x08","\x62","\x00","\x00");
	HX_STACK_LINE(286)
	::sx::properties::metric::Size tmp2 = this->__min;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(286)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(286)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(286)
	if ((tmp3)){
		HX_STACK_LINE(286)
		::sx::properties::metric::Size tmp5 = this->__min;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(286)
		::sx::properties::metric::Size tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(286)
		Float tmp7 = tmp6->get_px();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(286)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(286)
		Float tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(286)
		tmp4 = (tmp8 > tmp9);
	}
	else{
		HX_STACK_LINE(286)
		tmp4 = false;
	}
	HX_STACK_LINE(286)
	if ((tmp4)){
		HX_STACK_LINE(287)
		::sx::properties::metric::Size tmp5 = this->__min;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(287)
		Float tmp6 = tmp5->get_px();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		this->__value = tmp6;
	}
	else{
		HX_STACK_LINE(288)
		::sx::properties::metric::Size tmp5 = this->__max;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(288)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(288)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(288)
		if ((tmp6)){
			HX_STACK_LINE(288)
			::sx::properties::metric::Size tmp8 = this->__max;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(288)
			::sx::properties::metric::Size tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(288)
			Float tmp10 = tmp9->get_px();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(288)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(288)
			Float tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(288)
			tmp7 = (tmp11 < tmp12);
		}
		else{
			HX_STACK_LINE(288)
			tmp7 = false;
		}
		HX_STACK_LINE(288)
		if ((tmp7)){
			HX_STACK_LINE(289)
			::sx::properties::metric::Size tmp8 = this->__max;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(289)
			Float tmp9 = tmp8->get_px();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(289)
			this->__value = tmp9;
		}
		else{
			HX_STACK_LINE(291)
			this->__value = value;
		}
	}
	HX_STACK_LINE(294)
	::String tmp5 = previousUnits;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(294)
	Float tmp6 = previousValue;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(294)
	this->__invokeOnChange(tmp5,tmp6);
	HX_STACK_LINE(296)
	Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(296)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Size_obj,set_px,return )

Float Size_obj::set_pct( Float value){
	HX_STACK_FRAME("sx.properties.metric.Size","set_pct",0xdfb03ae3,"sx.properties.metric.Size.set_pct","sx/properties/metric/Size.hx",305,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(306)
	::String tmp = this->units;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	::String previousUnits = tmp;		HX_STACK_VAR(previousUnits,"previousUnits");
	HX_STACK_LINE(307)
	Float tmp1 = this->__value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(307)
	Float previousValue = tmp1;		HX_STACK_VAR(previousValue,"previousValue");
	HX_STACK_LINE(309)
	this->units = HX_HCSTRING("pct","\x21","\x53","\x55","\x00");
	HX_STACK_LINE(310)
	::sx::properties::metric::Size tmp2 = this->__min;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(310)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(310)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(310)
	if ((tmp3)){
		HX_STACK_LINE(310)
		::sx::properties::metric::Size tmp5 = this->__min;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(310)
		::sx::properties::metric::Size tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(310)
		Float tmp7 = tmp6->get_pct();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(310)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(310)
		Float tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(310)
		tmp4 = (tmp8 > tmp9);
	}
	else{
		HX_STACK_LINE(310)
		tmp4 = false;
	}
	HX_STACK_LINE(310)
	if ((tmp4)){
		HX_STACK_LINE(311)
		::sx::properties::metric::Size tmp5 = this->__min;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(311)
		Float tmp6 = tmp5->get_pct();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(311)
		this->__value = tmp6;
	}
	else{
		HX_STACK_LINE(312)
		::sx::properties::metric::Size tmp5 = this->__max;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(312)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(312)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(312)
		if ((tmp6)){
			HX_STACK_LINE(312)
			::sx::properties::metric::Size tmp8 = this->__max;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(312)
			::sx::properties::metric::Size tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(312)
			Float tmp10 = tmp9->get_pct();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(312)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(312)
			Float tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(312)
			tmp7 = (tmp11 < tmp12);
		}
		else{
			HX_STACK_LINE(312)
			tmp7 = false;
		}
		HX_STACK_LINE(312)
		if ((tmp7)){
			HX_STACK_LINE(313)
			::sx::properties::metric::Size tmp8 = this->__max;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(313)
			Float tmp9 = tmp8->get_pct();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(313)
			this->__value = tmp9;
		}
		else{
			HX_STACK_LINE(315)
			this->__value = value;
		}
	}
	HX_STACK_LINE(318)
	::String tmp5 = previousUnits;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(318)
	Float tmp6 = previousValue;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(318)
	this->__invokeOnChange(tmp5,tmp6);
	HX_STACK_LINE(320)
	Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(320)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Size_obj,set_pct,return )

::sx::properties::metric::Size Size_obj::get_min( ){
	HX_STACK_FRAME("sx.properties.metric.Size","get_min",0xecac6848,"sx.properties.metric.Size.get_min","sx/properties/metric/Size.hx",328,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_LINE(329)
	::sx::properties::metric::Size tmp = this->__min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(329)
	if ((tmp1)){
		HX_STACK_LINE(330)
		::String tmp2 = this->orientation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(330)
		::sx::properties::metric::Size tmp3 = ::sx::properties::metric::Size_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(330)
		this->__min = tmp3;
		HX_STACK_LINE(331)
		Dynamic tmp4 = this->__pctSource_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(331)
		::sx::properties::metric::Size tmp5 = this->__min;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(331)
		tmp5->pctSource = tmp4;
		HX_STACK_LINE(332)
		Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(332)
		::sx::properties::metric::Size tmp7 = this->__min;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(332)
		tmp7->__value = tmp6;
		HX_STACK_LINE(333)
		::sx::properties::metric::Size tmp8 = this->__min;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(333)
		Dynamic tmp9 = this->__constraintChanged_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(333)
		tmp8->onChange->add(tmp9);
	}
	HX_STACK_LINE(336)
	::sx::properties::metric::Size tmp2 = this->__min;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(336)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,get_min,return )

::sx::properties::metric::Size Size_obj::set_min( ::sx::properties::metric::Size value){
	HX_STACK_FRAME("sx.properties.metric.Size","set_min",0xdfadf954,"sx.properties.metric.Size.set_min","sx/properties/metric/Size.hx",344,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(345)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(345)
	if ((tmp)){
		HX_STACK_LINE(346)
		::sx::properties::metric::Size tmp1 = this->__min;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(346)
		if ((tmp2)){
			HX_STACK_LINE(347)
			::sx::properties::metric::Size tmp3 = this->__min;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(347)
			::String _g = tmp3->units;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(347)
			::String tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(347)
			::String _switch_7 = (tmp4);
			if (  ( _switch_7==HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"))){
				HX_STACK_LINE(348)
				::sx::properties::metric::Size tmp5 = this->__min;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(348)
				Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(348)
				tmp5->set_dip(tmp6);
			}
			else if (  ( _switch_7==HX_HCSTRING("px","\x08","\x62","\x00","\x00"))){
				HX_STACK_LINE(349)
				::sx::properties::metric::Size tmp5 = this->__min;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(349)
				Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(349)
				tmp5->set_px(tmp6);
			}
			else if (  ( _switch_7==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
				HX_STACK_LINE(350)
				::sx::properties::metric::Size tmp5 = this->__min;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(350)
				Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(350)
				tmp5->set_pct(tmp6);
			}
		}
	}
	else{
		HX_STACK_LINE(354)
		::sx::properties::metric::Size tmp1 = this->get_min();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(354)
		::sx::properties::metric::Size tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(354)
		tmp1->copyValueFrom(tmp2);
	}
	HX_STACK_LINE(357)
	::sx::properties::metric::Size tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(357)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Size_obj,set_min,return )

::sx::properties::metric::Size Size_obj::get_max( ){
	HX_STACK_FRAME("sx.properties.metric.Size","get_max",0xecac615a,"sx.properties.metric.Size.get_max","sx/properties/metric/Size.hx",365,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_LINE(366)
	::sx::properties::metric::Size tmp = this->__max;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(366)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(366)
	if ((tmp1)){
		HX_STACK_LINE(367)
		::String tmp2 = this->orientation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(367)
		::sx::properties::metric::Size tmp3 = ::sx::properties::metric::Size_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(367)
		this->__max = tmp3;
		HX_STACK_LINE(368)
		Dynamic tmp4 = this->__pctSource_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(368)
		::sx::properties::metric::Size tmp5 = this->__max;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(368)
		tmp5->pctSource = tmp4;
		HX_STACK_LINE(369)
		Float tmp6 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(369)
		::sx::properties::metric::Size tmp7 = this->__max;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(369)
		tmp7->__value = tmp6;
		HX_STACK_LINE(370)
		::sx::properties::metric::Size tmp8 = this->__max;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(370)
		Dynamic tmp9 = this->__constraintChanged_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(370)
		tmp8->onChange->add(tmp9);
	}
	HX_STACK_LINE(373)
	::sx::properties::metric::Size tmp2 = this->__max;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(373)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,get_max,return )

::sx::properties::metric::Size Size_obj::set_max( ::sx::properties::metric::Size value){
	HX_STACK_FRAME("sx.properties.metric.Size","set_max",0xdfadf266,"sx.properties.metric.Size.set_max","sx/properties/metric/Size.hx",381,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(382)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(382)
	if ((tmp)){
		HX_STACK_LINE(383)
		::sx::properties::metric::Size tmp1 = this->__max;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(383)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(383)
		if ((tmp2)){
			HX_STACK_LINE(384)
			::sx::properties::metric::Size tmp3 = this->__max;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(384)
			::String _g = tmp3->units;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(384)
			::String tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(384)
			::String _switch_8 = (tmp4);
			if (  ( _switch_8==HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"))){
				HX_STACK_LINE(385)
				::sx::properties::metric::Size tmp5 = this->__max;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(385)
				Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(385)
				tmp5->set_dip(tmp6);
			}
			else if (  ( _switch_8==HX_HCSTRING("px","\x08","\x62","\x00","\x00"))){
				HX_STACK_LINE(386)
				::sx::properties::metric::Size tmp5 = this->__max;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(386)
				Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(386)
				tmp5->set_px(tmp6);
			}
			else if (  ( _switch_8==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
				HX_STACK_LINE(387)
				::sx::properties::metric::Size tmp5 = this->__max;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(387)
				Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(387)
				tmp5->set_pct(tmp6);
			}
		}
	}
	else{
		HX_STACK_LINE(391)
		::sx::properties::metric::Size tmp1 = this->get_max();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(391)
		::sx::properties::metric::Size tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(391)
		tmp1->copyValueFrom(tmp2);
	}
	HX_STACK_LINE(394)
	::sx::properties::metric::Size tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(394)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Size_obj,set_max,return )

::sx::properties::metric::Size Size_obj::get_zeroProperty( ){
	HX_STACK_FRAME("sx.properties.metric.Size","get_zeroProperty",0xc4779e27,"sx.properties.metric.Size.get_zeroProperty","sx/properties/metric/Size.hx",399,0x13fef910)
	HX_STACK_LINE(399)
	::sx::properties::metric::Size tmp = ::sx::properties::metric::_Size::Size_Internal_ZeroSize_obj::instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(399)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Size_obj,get_zeroProperty,return )


Size_obj::Size_obj()
{
}

void Size_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Size);
	HX_MARK_MEMBER_NAME(__min,"__min");
	HX_MARK_MEMBER_NAME(__max,"__max");
	HX_MARK_MEMBER_NAME(units,"units");
	HX_MARK_MEMBER_NAME(orientation,"orientation");
	HX_MARK_MEMBER_NAME(pctSource,"pctSource");
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_MEMBER_NAME(weak,"weak");
	HX_MARK_MEMBER_NAME(__value,"__value");
	HX_MARK_END_CLASS();
}

void Size_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__min,"__min");
	HX_VISIT_MEMBER_NAME(__max,"__max");
	HX_VISIT_MEMBER_NAME(units,"units");
	HX_VISIT_MEMBER_NAME(orientation,"orientation");
	HX_VISIT_MEMBER_NAME(pctSource,"pctSource");
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	HX_VISIT_MEMBER_NAME(weak,"weak");
	HX_VISIT_MEMBER_NAME(__value,"__value");
}

Dynamic Size_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"px") ) { if (inCallProp == hx::paccAlways) return get_px(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dip") ) { if (inCallProp == hx::paccAlways) return get_dip(); }
		if (HX_FIELD_EQ(inName,"pct") ) { if (inCallProp == hx::paccAlways) return get_pct(); }
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return get_min(); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return get_max(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { return weak; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__min") ) { return __min; }
		if (HX_FIELD_EQ(inName,"__max") ) { return __max; }
		if (HX_FIELD_EQ(inName,"units") ) { return units; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hasMin") ) { return hasMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_px") ) { return get_px_dyn(); }
		if (HX_FIELD_EQ(inName,"set_px") ) { return set_px_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__value") ) { return __value; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dip") ) { return get_dip_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pct") ) { return get_pct_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dip") ) { return set_dip_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pct") ) { return set_pct_dyn(); }
		if (HX_FIELD_EQ(inName,"get_min") ) { return get_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return set_min_dyn(); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return get_max_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return set_max_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { return onChange; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pctSource") ) { return pctSource; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isVertical") ) { return isVertical_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { return orientation; }
		if (HX_FIELD_EQ(inName,"__pctSource") ) { return __pctSource_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isHorizontal") ) { return isHorizontal_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyValueFrom") ) { return copyValueFrom_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__invokeOnChange") ) { return __invokeOnChange_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__constraintChanged") ) { return __constraintChanged_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Size_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"zeroProperty") ) { if (inCallProp == hx::paccAlways) { outValue = get_zeroProperty(); return true; } }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_zeroProperty") ) { outValue = get_zeroProperty_dyn(); return true;  }
	}
	return false;
}

Dynamic Size_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"px") ) { if (inCallProp == hx::paccAlways) return set_px(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dip") ) { if (inCallProp == hx::paccAlways) return set_dip(inValue); }
		if (HX_FIELD_EQ(inName,"pct") ) { if (inCallProp == hx::paccAlways) return set_pct(inValue); }
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return set_min(inValue); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return set_max(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { weak=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__min") ) { __min=inValue.Cast< ::sx::properties::metric::Size >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__max") ) { __max=inValue.Cast< ::sx::properties::metric::Size >(); return inValue; }
		if (HX_FIELD_EQ(inName,"units") ) { units=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__value") ) { __value=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pctSource") ) { pctSource=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { orientation=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Size_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Size_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"));
	outFields->push(HX_HCSTRING("px","\x08","\x62","\x00","\x00"));
	outFields->push(HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("__min","\x72","\x72","\x2f","\xf2"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("__max","\x84","\x6b","\x2f","\xf2"));
	outFields->push(HX_HCSTRING("units","\x6f","\x69","\xe7","\xa6"));
	outFields->push(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"));
	outFields->push(HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"));
	outFields->push(HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e"));
	outFields->push(HX_HCSTRING("__value","\x51","\xd8","\x16","\x9c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sx::properties::metric::Size*/ ,(int)offsetof(Size_obj,__min),HX_HCSTRING("__min","\x72","\x72","\x2f","\xf2")},
	{hx::fsObject /*::sx::properties::metric::Size*/ ,(int)offsetof(Size_obj,__max),HX_HCSTRING("__max","\x84","\x6b","\x2f","\xf2")},
	{hx::fsString,(int)offsetof(Size_obj,units),HX_HCSTRING("units","\x6f","\x69","\xe7","\xa6")},
	{hx::fsString,(int)offsetof(Size_obj,orientation),HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Size_obj,pctSource),HX_HCSTRING("pctSource","\xdc","\x06","\xa0","\xa6")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Size_obj,onChange),HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97")},
	{hx::fsBool,(int)offsetof(Size_obj,weak),HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e")},
	{hx::fsFloat,(int)offsetof(Size_obj,__value),HX_HCSTRING("__value","\x51","\xd8","\x16","\x9c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__min","\x72","\x72","\x2f","\xf2"),
	HX_HCSTRING("__max","\x84","\x6b","\x2f","\xf2"),
	HX_HCSTRING("units","\x6f","\x69","\xe7","\xa6"),
	HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"),
	HX_HCSTRING("pctSource","\xdc","\x06","\xa0","\xa6"),
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e"),
	HX_HCSTRING("__value","\x51","\xd8","\x16","\x9c"),
	HX_HCSTRING("isVertical","\x80","\xce","\xc4","\xe4"),
	HX_HCSTRING("isHorizontal","\x6e","\x25","\xe3","\xe7"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("copyValueFrom","\x06","\xe3","\x0c","\xf2"),
	HX_HCSTRING("hasMin","\x58","\x1e","\x3a","\xbb"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("__pctSource","\xbc","\x4f","\xcc","\xd4"),
	HX_HCSTRING("__invokeOnChange","\xa7","\x7e","\xe9","\x3d"),
	HX_HCSTRING("__constraintChanged","\xf7","\x76","\x15","\xeb"),
	HX_HCSTRING("get_dip","\xe2","\x05","\xc1","\x26"),
	HX_HCSTRING("get_px","\x51","\xf9","\x2f","\xa3"),
	HX_HCSTRING("get_pct","\xb8","\x1b","\xca","\x26"),
	HX_HCSTRING("set_dip","\xee","\x96","\xc2","\x19"),
	HX_HCSTRING("set_px","\xc5","\x4d","\x78","\x6f"),
	HX_HCSTRING("set_pct","\xc4","\xac","\xcb","\x19"),
	HX_HCSTRING("get_min","\x29","\xda","\xc7","\x26"),
	HX_HCSTRING("set_min","\x35","\x6b","\xc9","\x19"),
	HX_HCSTRING("get_max","\x3b","\xd3","\xc7","\x26"),
	HX_HCSTRING("set_max","\x47","\x64","\xc9","\x19"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Size_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Size_obj::__mClass,"__mClass");
};

#endif

hx::Class Size_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_zeroProperty","\x26","\x68","\x59","\xcf"),
	::String(null()) };

void Size_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.metric.Size","\x8d","\x37","\x4e","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Size_obj::__GetStatic;
	__mClass->mSetStaticField = &Size_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Size_obj >;
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
