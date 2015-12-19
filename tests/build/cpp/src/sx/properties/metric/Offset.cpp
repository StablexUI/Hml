#include <hxcpp.h>

#ifndef INCLUDED_sx_properties_metric_Coordinate
#include <sx/properties/metric/Coordinate.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Offset
#include <sx/properties/metric/Offset.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
namespace sx{
namespace properties{
namespace metric{

Void Offset_obj::__construct(Dynamic widthProvider,Dynamic heightProvider)
{
HX_STACK_FRAME("sx.properties.metric.Offset","new",0x4623b5d1,"sx.properties.metric.Offset.new","sx/properties/metric/Offset.hx",15,0x6130d43e)
HX_STACK_THIS(this)
HX_STACK_ARG(widthProvider,"widthProvider")
HX_STACK_ARG(heightProvider,"heightProvider")
{
	HX_STACK_LINE(35)
	this->__silentChanges = false;
	HX_STACK_LINE(43)
	::sx::properties::metric::Coordinate tmp = ::sx::properties::metric::Coordinate_obj::__new(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	this->__left = tmp;
	HX_STACK_LINE(44)
	::sx::properties::metric::Coordinate tmp1 = this->__left;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	tmp1->pctSource = widthProvider;
	HX_STACK_LINE(45)
	::sx::properties::metric::Coordinate tmp2 = this->__left;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	tmp2->ownerSize = widthProvider;
	HX_STACK_LINE(46)
	::sx::properties::metric::Coordinate tmp3 = this->__left;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	Dynamic tmp4 = this->__changed_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	tmp3->onChange->add(tmp4);
	HX_STACK_LINE(48)
	::sx::properties::metric::Coordinate tmp5 = ::sx::properties::metric::Coordinate_obj::__new(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(48)
	this->__right = tmp5;
	HX_STACK_LINE(49)
	::sx::properties::metric::Coordinate tmp6 = this->__right;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(49)
	tmp6->pctSource = widthProvider;
	HX_STACK_LINE(50)
	::sx::properties::metric::Coordinate tmp7 = this->__right;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(50)
	tmp7->ownerSize = widthProvider;
	HX_STACK_LINE(51)
	::sx::properties::metric::Coordinate tmp8 = this->__right;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(51)
	Dynamic tmp9 = this->__changed_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(51)
	tmp8->onChange->add(tmp9);
	HX_STACK_LINE(53)
	::sx::properties::metric::Coordinate tmp10 = ::sx::properties::metric::Coordinate_obj::__new(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(53)
	this->__top = tmp10;
	HX_STACK_LINE(54)
	::sx::properties::metric::Coordinate tmp11 = this->__top;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(54)
	tmp11->pctSource = heightProvider;
	HX_STACK_LINE(55)
	::sx::properties::metric::Coordinate tmp12 = this->__top;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(55)
	tmp12->ownerSize = heightProvider;
	HX_STACK_LINE(56)
	::sx::properties::metric::Coordinate tmp13 = this->__top;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(56)
	Dynamic tmp14 = this->__changed_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(56)
	tmp13->onChange->add(tmp14);
	HX_STACK_LINE(58)
	::sx::properties::metric::Coordinate tmp15 = ::sx::properties::metric::Coordinate_obj::__new(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(58)
	this->__bottom = tmp15;
	HX_STACK_LINE(59)
	::sx::properties::metric::Coordinate tmp16 = this->__bottom;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(59)
	tmp16->pctSource = heightProvider;
	HX_STACK_LINE(60)
	::sx::properties::metric::Coordinate tmp17 = this->__bottom;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(60)
	tmp17->ownerSize = heightProvider;
	HX_STACK_LINE(61)
	::sx::properties::metric::Coordinate tmp18 = this->__bottom;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(61)
	Dynamic tmp19 = this->__changed_dyn();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(61)
	tmp18->onChange->add(tmp19);
	HX_STACK_LINE(63)
	Dynamic tmp20 = this->get_right_dyn();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(63)
	::sx::properties::metric::Coordinate tmp21 = this->__left;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(63)
	tmp21->pair = tmp20;
	HX_STACK_LINE(64)
	Dynamic tmp22 = this->get_left_dyn();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(64)
	::sx::properties::metric::Coordinate tmp23 = this->__right;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(64)
	tmp23->pair = tmp22;
	HX_STACK_LINE(65)
	Dynamic tmp24 = this->get_bottom_dyn();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(65)
	::sx::properties::metric::Coordinate tmp25 = this->__top;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(65)
	tmp25->pair = tmp24;
	HX_STACK_LINE(66)
	Dynamic tmp26 = this->get_top_dyn();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(66)
	::sx::properties::metric::Coordinate tmp27 = this->__bottom;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(66)
	tmp27->pair = tmp26;
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		::sx::properties::metric::Coordinate tmp28 = this->__left;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(68)
		::sx::properties::metric::Coordinate _this = tmp28;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(68)
		bool tmp29 = _this->selected;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(68)
		bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(68)
		if ((tmp30)){
			HX_STACK_LINE(68)
			_this->selected = true;
			HX_STACK_LINE(68)
			::sx::properties::metric::Coordinate tmp31 = _this->pair();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(68)
			tmp31->selected = false;
		}
	}
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		::sx::properties::metric::Coordinate tmp28 = this->__top;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(69)
		::sx::properties::metric::Coordinate _this = tmp28;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(69)
		bool tmp29 = _this->selected;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(69)
		bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(69)
		if ((tmp30)){
			HX_STACK_LINE(69)
			_this->selected = true;
			HX_STACK_LINE(69)
			::sx::properties::metric::Coordinate tmp31 = _this->pair();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(69)
			tmp31->selected = false;
		}
	}
	HX_STACK_LINE(71)
	::sx::signals::Signal tmp28 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(71)
	this->onChange = tmp28;
}
;
	return null();
}

//Offset_obj::~Offset_obj() { }

Dynamic Offset_obj::__CreateEmpty() { return  new Offset_obj; }
hx::ObjectPtr< Offset_obj > Offset_obj::__new(Dynamic widthProvider,Dynamic heightProvider)
{  hx::ObjectPtr< Offset_obj > _result_ = new Offset_obj();
	_result_->__construct(widthProvider,heightProvider);
	return _result_;}

Dynamic Offset_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Offset_obj > _result_ = new Offset_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Offset_obj::set( Float x,Float y){
{
		HX_STACK_FRAME("sx.properties.metric.Offset","set",0x46278113,"sx.properties.metric.Offset.set","sx/properties/metric/Offset.hx",88,0x6130d43e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(89)
		this->__silentChanges = true;
		HX_STACK_LINE(91)
		int tmp = (int)-1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		if ((tmp2)){
			HX_STACK_LINE(91)
			tmp3 = (x <= (int)1);
		}
		else{
			HX_STACK_LINE(91)
			tmp3 = false;
		}
		HX_STACK_LINE(91)
		if ((tmp3)){
			HX_STACK_LINE(92)
			::sx::properties::metric::Coordinate tmp4 = this->get_left();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(92)
			Float tmp5 = (x * (int)100);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			tmp4->set_pct(tmp5);
		}
		else{
			HX_STACK_LINE(94)
			::sx::properties::metric::Coordinate tmp4 = this->get_left();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			tmp4->set_dip(tmp5);
		}
		HX_STACK_LINE(96)
		int tmp4 = (int)-1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		if ((tmp6)){
			HX_STACK_LINE(96)
			tmp7 = (y <= (int)1);
		}
		else{
			HX_STACK_LINE(96)
			tmp7 = false;
		}
		HX_STACK_LINE(96)
		if ((tmp7)){
			HX_STACK_LINE(97)
			::sx::properties::metric::Coordinate tmp8 = this->get_top();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(97)
			Float tmp9 = (y * (int)100);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(97)
			tmp8->set_pct(tmp9);
		}
		else{
			HX_STACK_LINE(99)
			::sx::properties::metric::Coordinate tmp8 = this->get_top();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(99)
			Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(99)
			tmp8->set_dip(tmp9);
		}
		HX_STACK_LINE(102)
		this->__silentChanges = false;
		HX_STACK_LINE(103)
		::sx::signals::Signal tmp8 = this->onChange;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(146)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(146)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(146)
		if ((tmp9)){
			HX_STACK_LINE(103)
			::sx::signals::Signal tmp11 = this->onChange;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(103)
			::sx::signals::Signal tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(146)
			int tmp13 = tmp12->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(146)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(146)
			tmp10 = (tmp14 > (int)0);
		}
		else{
			HX_STACK_LINE(146)
			tmp10 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp10)){
			HX_STACK_LINE(103)
			::sx::signals::Signal tmp11 = this->onChange;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(147)
			bool tmp12 = tmp11->__listenersInUse;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(147)
			if ((tmp12)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(103)
					::sx::signals::Signal tmp13 = this->onChange;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(148)
					cpp::ArrayBase _g1 = tmp13->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(148)
					while((true)){
						HX_STACK_LINE(148)
						bool tmp14 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(148)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(148)
						if ((tmp15)){
							HX_STACK_LINE(148)
							break;
						}
						HX_STACK_LINE(148)
						Dynamic tmp16 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(148)
						Dynamic listener = tmp16;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(148)
						++(_g);
						HX_STACK_LINE(148)
						listener().Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(103)
				::sx::signals::Signal tmp13 = this->onChange;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(151)
				tmp13->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(103)
					::sx::signals::Signal tmp14 = this->onChange;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(152)
					cpp::ArrayBase _g1 = tmp14->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(152)
					while((true)){
						HX_STACK_LINE(152)
						bool tmp15 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(152)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(152)
						if ((tmp16)){
							HX_STACK_LINE(152)
							break;
						}
						HX_STACK_LINE(152)
						Dynamic tmp17 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(152)
						Dynamic listener = tmp17;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(152)
						++(_g);
						HX_STACK_LINE(152)
						listener().Cast< Void >();
					}
				}
				HX_STACK_LINE(103)
				::sx::signals::Signal tmp14 = this->onChange;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(153)
				tmp14->__listenersInUse = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Offset_obj,set,(void))

Void Offset_obj::__changed( ::sx::properties::metric::Size property,::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.properties.metric.Offset","__changed",0x675e1205,"sx.properties.metric.Offset.__changed","sx/properties/metric/Offset.hx",111,0x6130d43e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(property,"property")
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(112)
		bool tmp = this->__silentChanges;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		if ((tmp1)){
			HX_STACK_LINE(112)
			::sx::signals::Signal tmp2 = this->onChange;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(146)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(146)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			if ((tmp3)){
				HX_STACK_LINE(112)
				::sx::signals::Signal tmp5 = this->onChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(112)
				::sx::signals::Signal tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(146)
				int tmp7 = tmp6->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(146)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(146)
				tmp4 = (tmp8 > (int)0);
			}
			else{
				HX_STACK_LINE(146)
				tmp4 = false;
			}
			HX_STACK_LINE(146)
			if ((tmp4)){
				HX_STACK_LINE(112)
				::sx::signals::Signal tmp5 = this->onChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(147)
				bool tmp6 = tmp5->__listenersInUse;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(147)
				if ((tmp6)){
					HX_STACK_LINE(148)
					{
						HX_STACK_LINE(148)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(112)
						::sx::signals::Signal tmp7 = this->onChange;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(148)
						cpp::ArrayBase _g1 = tmp7->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(148)
						while((true)){
							HX_STACK_LINE(148)
							bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(148)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(148)
							if ((tmp9)){
								HX_STACK_LINE(148)
								break;
							}
							HX_STACK_LINE(148)
							Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(148)
							Dynamic listener = tmp10;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(148)
							++(_g);
							HX_STACK_LINE(148)
							listener().Cast< Void >();
						}
					}
					HX_STACK_LINE(149)
					false;
				}
				else{
					HX_STACK_LINE(112)
					::sx::signals::Signal tmp7 = this->onChange;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(151)
					tmp7->__listenersInUse = true;
					HX_STACK_LINE(152)
					{
						HX_STACK_LINE(152)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(112)
						::sx::signals::Signal tmp8 = this->onChange;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(152)
						cpp::ArrayBase _g1 = tmp8->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(152)
						while((true)){
							HX_STACK_LINE(152)
							bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(152)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(152)
							if ((tmp10)){
								HX_STACK_LINE(152)
								break;
							}
							HX_STACK_LINE(152)
							Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(152)
							Dynamic listener = tmp11;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(152)
							++(_g);
							HX_STACK_LINE(152)
							listener().Cast< Void >();
						}
					}
					HX_STACK_LINE(112)
					::sx::signals::Signal tmp8 = this->onChange;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(153)
					tmp8->__listenersInUse = false;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Offset_obj,__changed,(void))

::sx::properties::metric::Coordinate Offset_obj::get_left( ){
	HX_STACK_FRAME("sx.properties.metric.Offset","get_left",0xfb30847f,"sx.properties.metric.Offset.get_left","sx/properties/metric/Offset.hx",117,0x6130d43e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	::sx::properties::metric::Coordinate tmp = this->__left;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Offset_obj,get_left,return )

::sx::properties::metric::Coordinate Offset_obj::get_right( ){
	HX_STACK_FRAME("sx.properties.metric.Offset","get_right",0x46507864,"sx.properties.metric.Offset.get_right","sx/properties/metric/Offset.hx",118,0x6130d43e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	::sx::properties::metric::Coordinate tmp = this->__right;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Offset_obj,get_right,return )

::sx::properties::metric::Coordinate Offset_obj::get_top( ){
	HX_STACK_FRAME("sx.properties.metric.Offset","get_top",0xd33b211d,"sx.properties.metric.Offset.get_top","sx/properties/metric/Offset.hx",119,0x6130d43e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	::sx::properties::metric::Coordinate tmp = this->__top;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Offset_obj,get_top,return )

::sx::properties::metric::Coordinate Offset_obj::get_bottom( ){
	HX_STACK_FRAME("sx.properties.metric.Offset","get_bottom",0x576b7163,"sx.properties.metric.Offset.get_bottom","sx/properties/metric/Offset.hx",120,0x6130d43e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	::sx::properties::metric::Coordinate tmp = this->__bottom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Offset_obj,get_bottom,return )

::sx::properties::metric::Coordinate Offset_obj::set_left( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.properties.metric.Offset","set_left",0xa98dddf3,"sx.properties.metric.Offset.set_left","sx/properties/metric/Offset.hx",123,0x6130d43e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(123)
	::sx::properties::metric::Coordinate tmp = this->__left;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	::sx::properties::metric::Size tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	tmp->copyValueFrom(tmp1);
	HX_STACK_LINE(123)
	::sx::properties::metric::Coordinate tmp2 = this->__left;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Offset_obj,set_left,return )

::sx::properties::metric::Coordinate Offset_obj::set_right( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.properties.metric.Offset","set_right",0x29a16470,"sx.properties.metric.Offset.set_right","sx/properties/metric/Offset.hx",124,0x6130d43e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(124)
	::sx::properties::metric::Coordinate tmp = this->__right;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	::sx::properties::metric::Size tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	tmp->copyValueFrom(tmp1);
	HX_STACK_LINE(124)
	::sx::properties::metric::Coordinate tmp2 = this->__right;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(124)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Offset_obj,set_right,return )

::sx::properties::metric::Coordinate Offset_obj::set_top( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.properties.metric.Offset","set_top",0xc63cb229,"sx.properties.metric.Offset.set_top","sx/properties/metric/Offset.hx",125,0x6130d43e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(125)
	::sx::properties::metric::Coordinate tmp = this->__top;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	::sx::properties::metric::Size tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	tmp->copyValueFrom(tmp1);
	HX_STACK_LINE(125)
	::sx::properties::metric::Coordinate tmp2 = this->__top;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Offset_obj,set_top,return )

::sx::properties::metric::Coordinate Offset_obj::set_bottom( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.properties.metric.Offset","set_bottom",0x5ae90fd7,"sx.properties.metric.Offset.set_bottom","sx/properties/metric/Offset.hx",126,0x6130d43e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(126)
	::sx::properties::metric::Coordinate tmp = this->__bottom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	::sx::properties::metric::Size tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	tmp->copyValueFrom(tmp1);
	HX_STACK_LINE(126)
	::sx::properties::metric::Coordinate tmp2 = this->__bottom;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(126)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Offset_obj,set_bottom,return )


Offset_obj::Offset_obj()
{
}

void Offset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Offset);
	HX_MARK_MEMBER_NAME(__left,"__left");
	HX_MARK_MEMBER_NAME(__right,"__right");
	HX_MARK_MEMBER_NAME(__top,"__top");
	HX_MARK_MEMBER_NAME(__bottom,"__bottom");
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_MEMBER_NAME(__silentChanges,"__silentChanges");
	HX_MARK_END_CLASS();
}

void Offset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__left,"__left");
	HX_VISIT_MEMBER_NAME(__right,"__right");
	HX_VISIT_MEMBER_NAME(__top,"__top");
	HX_VISIT_MEMBER_NAME(__bottom,"__bottom");
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	HX_VISIT_MEMBER_NAME(__silentChanges,"__silentChanges");
}

Dynamic Offset_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return get_top(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
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
		if (HX_FIELD_EQ(inName,"onChange") ) { return onChange; }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__changed") ) { return __changed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__silentChanges") ) { return __silentChanges; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Offset_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"__top") ) { __top=inValue.Cast< ::sx::properties::metric::Coordinate >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__left") ) { __left=inValue.Cast< ::sx::properties::metric::Coordinate >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return set_bottom(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__right") ) { __right=inValue.Cast< ::sx::properties::metric::Coordinate >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bottom") ) { __bottom=inValue.Cast< ::sx::properties::metric::Coordinate >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__silentChanges") ) { __silentChanges=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Offset_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Offset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("__left","\x27","\x6b","\xa8","\xf6"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("__right","\xbc","\x64","\xc2","\x53"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("__top","\x75","\xc7","\x34","\xf2"));
	outFields->push(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	outFields->push(HX_HCSTRING("__bottom","\x0b","\x52","\xa8","\x0d"));
	outFields->push(HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"));
	outFields->push(HX_HCSTRING("__silentChanges","\xce","\xc7","\x99","\x38"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sx::properties::metric::Coordinate*/ ,(int)offsetof(Offset_obj,__left),HX_HCSTRING("__left","\x27","\x6b","\xa8","\xf6")},
	{hx::fsObject /*::sx::properties::metric::Coordinate*/ ,(int)offsetof(Offset_obj,__right),HX_HCSTRING("__right","\xbc","\x64","\xc2","\x53")},
	{hx::fsObject /*::sx::properties::metric::Coordinate*/ ,(int)offsetof(Offset_obj,__top),HX_HCSTRING("__top","\x75","\xc7","\x34","\xf2")},
	{hx::fsObject /*::sx::properties::metric::Coordinate*/ ,(int)offsetof(Offset_obj,__bottom),HX_HCSTRING("__bottom","\x0b","\x52","\xa8","\x0d")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Offset_obj,onChange),HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97")},
	{hx::fsBool,(int)offsetof(Offset_obj,__silentChanges),HX_HCSTRING("__silentChanges","\xce","\xc7","\x99","\x38")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__left","\x27","\x6b","\xa8","\xf6"),
	HX_HCSTRING("__right","\xbc","\x64","\xc2","\x53"),
	HX_HCSTRING("__top","\x75","\xc7","\x34","\xf2"),
	HX_HCSTRING("__bottom","\x0b","\x52","\xa8","\x0d"),
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("__silentChanges","\xce","\xc7","\x99","\x38"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("__changed","\xd4","\x01","\x1b","\x4e"),
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
	HX_MARK_MEMBER_NAME(Offset_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Offset_obj::__mClass,"__mClass");
};

#endif

hx::Class Offset_obj::__mClass;

void Offset_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.metric.Offset","\x5f","\x79","\x26","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Offset_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Offset_obj >;
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
