#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_sx_Sx
#include <sx/Sx.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_Backend
#include <sx/backend/dummy/Backend.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_BackendManager
#include <sx/backend/dummy/BackendManager.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_Point
#include <sx/backend/dummy/Point.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IBackend
#include <sx/backend/interfaces/IBackend.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IBackendManager
#include <sx/backend/interfaces/IBackendManager.h>
#endif
#ifndef INCLUDED_sx_exceptions_LoopedResizeException
#include <sx/exceptions/LoopedResizeException.h>
#endif
#ifndef INCLUDED_sx_exceptions_NotChildException
#include <sx/exceptions/NotChildException.h>
#endif
#ifndef INCLUDED_sx_exceptions_OutOfBoundsException
#include <sx/exceptions/OutOfBoundsException.h>
#endif
#ifndef INCLUDED_sx_exceptions_SxException
#include <sx/exceptions/SxException.h>
#endif
#ifndef INCLUDED_sx_layout_Layout
#include <sx/layout/Layout.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Coordinate
#include <sx/properties/metric/Coordinate.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Offset
#include <sx/properties/metric/Offset.h>
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
#ifndef INCLUDED_sx_skins_base_SkinBase
#include <sx/skins/base/SkinBase.h>
#endif
#ifndef INCLUDED_sx_themes_Theme
#include <sx/themes/Theme.h>
#endif
#ifndef INCLUDED_sx_tools_WidgetTools
#include <sx/tools/WidgetTools.h>
#endif
#ifndef INCLUDED_sx_tween_Tweener
#include <sx/tween/Tweener.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
namespace sx{
namespace widgets{

Void Widget_obj::__construct()
{
HX_STACK_FRAME("sx.widgets.Widget","new",0x91052ade,"sx.widgets.Widget.new","sx/widgets/Widget.hx",36,0x5e3cc110)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(221)
	this->__resizeCounter = (int)0;
	HX_STACK_LINE(216)
	this->__listeningParentResize = false;
	HX_STACK_LINE(161)
	this->disposed = false;
	HX_STACK_LINE(158)
	this->initialized = false;
	HX_STACK_LINE(144)
	this->style = HX_HCSTRING("__DEFAULT__","\xe1","\x72","\x81","\x20");
	HX_STACK_LINE(130)
	this->enabled = true;
	HX_STACK_LINE(124)
	this->arrangeable = true;
	HX_STACK_LINE(102)
	this->overflow = true;
	HX_STACK_LINE(100)
	this->visible = true;
	HX_STACK_LINE(98)
	this->alpha = ((Float)1);
	HX_STACK_LINE(91)
	this->rotation = ((Float)0);
	HX_STACK_LINE(88)
	this->scaleY = ((Float)1);
	HX_STACK_LINE(86)
	this->scaleX = ((Float)1);
	HX_STACK_LINE(50)
	this->numChildren = (int)0;
	HX_STACK_LINE(229)
	this->__createBackend();
	HX_STACK_LINE(231)
	::sx::properties::metric::Size tmp = ::sx::properties::metric::Size_obj::__new(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	this->__width = tmp;
	HX_STACK_LINE(232)
	Dynamic tmp1 = this->__parentWidthProvider_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	::sx::properties::metric::Size tmp2 = this->__width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(232)
	tmp2->pctSource = tmp1;
	HX_STACK_LINE(233)
	::sx::properties::metric::Size tmp3 = this->__width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(233)
	Dynamic tmp4 = this->__propertyResized_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(233)
	tmp3->onChange->add(tmp4);
	HX_STACK_LINE(235)
	::sx::properties::metric::Size tmp5 = ::sx::properties::metric::Size_obj::__new(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(235)
	this->__height = tmp5;
	HX_STACK_LINE(236)
	Dynamic tmp6 = this->__parentHeightProvider_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(236)
	::sx::properties::metric::Size tmp7 = this->__height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(236)
	tmp7->pctSource = tmp6;
	HX_STACK_LINE(237)
	::sx::properties::metric::Size tmp8 = this->__height;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(237)
	Dynamic tmp9 = this->__propertyResized_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(237)
	tmp8->onChange->add(tmp9);
	HX_STACK_LINE(239)
	::sx::properties::metric::Coordinate tmp10 = ::sx::properties::metric::Coordinate_obj::__new(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(239)
	this->__left = tmp10;
	HX_STACK_LINE(240)
	Dynamic tmp11 = this->__parentWidthProvider_dyn();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(240)
	::sx::properties::metric::Coordinate tmp12 = this->__left;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(240)
	tmp12->pctSource = tmp11;
	HX_STACK_LINE(241)
	::sx::properties::metric::Coordinate tmp13 = this->__left;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(241)
	Dynamic tmp14 = this->__propertyMoved_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(241)
	tmp13->onChange->add(tmp14);
	HX_STACK_LINE(243)
	::sx::properties::metric::Coordinate tmp15 = ::sx::properties::metric::Coordinate_obj::__new(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(243)
	this->__right = tmp15;
	HX_STACK_LINE(244)
	Dynamic tmp16 = this->__parentWidthProvider_dyn();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(244)
	::sx::properties::metric::Coordinate tmp17 = this->__right;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(244)
	tmp17->pctSource = tmp16;
	HX_STACK_LINE(245)
	::sx::properties::metric::Coordinate tmp18 = this->__right;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(245)
	Dynamic tmp19 = this->__propertyMoved_dyn();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(245)
	tmp18->onChange->add(tmp19);
	HX_STACK_LINE(247)
	::sx::properties::metric::Coordinate tmp20 = ::sx::properties::metric::Coordinate_obj::__new(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(247)
	this->__top = tmp20;
	HX_STACK_LINE(248)
	Dynamic tmp21 = this->__parentHeightProvider_dyn();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(248)
	::sx::properties::metric::Coordinate tmp22 = this->__top;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(248)
	tmp22->pctSource = tmp21;
	HX_STACK_LINE(249)
	::sx::properties::metric::Coordinate tmp23 = this->__top;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(249)
	Dynamic tmp24 = this->__propertyMoved_dyn();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(249)
	tmp23->onChange->add(tmp24);
	HX_STACK_LINE(251)
	::sx::properties::metric::Coordinate tmp25 = ::sx::properties::metric::Coordinate_obj::__new(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(251)
	this->__bottom = tmp25;
	HX_STACK_LINE(252)
	Dynamic tmp26 = this->__parentHeightProvider_dyn();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(252)
	::sx::properties::metric::Coordinate tmp27 = this->__bottom;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(252)
	tmp27->pctSource = tmp26;
	HX_STACK_LINE(253)
	::sx::properties::metric::Coordinate tmp28 = this->__bottom;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(253)
	Dynamic tmp29 = this->__propertyMoved_dyn();		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(253)
	tmp28->onChange->add(tmp29);
	HX_STACK_LINE(255)
	Dynamic tmp30 = this->get_right_dyn();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(255)
	::sx::properties::metric::Coordinate tmp31 = this->__left;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(255)
	tmp31->pair = tmp30;
	HX_STACK_LINE(256)
	Dynamic tmp32 = this->get_left_dyn();		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(256)
	::sx::properties::metric::Coordinate tmp33 = this->__right;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(256)
	tmp33->pair = tmp32;
	HX_STACK_LINE(257)
	Dynamic tmp34 = this->get_bottom_dyn();		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(257)
	::sx::properties::metric::Coordinate tmp35 = this->__top;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(257)
	tmp35->pair = tmp34;
	HX_STACK_LINE(258)
	Dynamic tmp36 = this->get_top_dyn();		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(258)
	::sx::properties::metric::Coordinate tmp37 = this->__bottom;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(258)
	tmp37->pair = tmp36;
	HX_STACK_LINE(259)
	Dynamic tmp38 = this->get_width_dyn();		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(259)
	::sx::properties::metric::Coordinate tmp39 = this->__right;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(259)
	Dynamic tmp40 = tmp39->ownerSize = tmp38;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(259)
	::sx::properties::metric::Coordinate tmp41 = this->__left;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(259)
	tmp41->ownerSize = tmp40;
	HX_STACK_LINE(260)
	Dynamic tmp42 = this->get_height_dyn();		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(260)
	::sx::properties::metric::Coordinate tmp43 = this->__bottom;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(260)
	Dynamic tmp44 = tmp43->ownerSize = tmp42;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(260)
	::sx::properties::metric::Coordinate tmp45 = this->__top;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(260)
	tmp45->ownerSize = tmp44;
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(262)
		::sx::properties::metric::Coordinate tmp46 = this->__left;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(262)
		::sx::properties::metric::Coordinate _this = tmp46;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(262)
		bool tmp47 = _this->selected;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(262)
		bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(262)
		if ((tmp48)){
			HX_STACK_LINE(262)
			_this->selected = true;
			HX_STACK_LINE(262)
			::sx::properties::metric::Coordinate tmp49 = _this->pair();		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(262)
			tmp49->selected = false;
		}
	}
	HX_STACK_LINE(263)
	{
		HX_STACK_LINE(263)
		::sx::properties::metric::Coordinate tmp46 = this->__top;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(263)
		::sx::properties::metric::Coordinate _this = tmp46;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(263)
		bool tmp47 = _this->selected;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(263)
		bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(263)
		if ((tmp48)){
			HX_STACK_LINE(263)
			_this->selected = true;
			HX_STACK_LINE(263)
			::sx::properties::metric::Coordinate tmp49 = _this->pair();		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(263)
			tmp49->selected = false;
		}
	}
}
;
	return null();
}

//Widget_obj::~Widget_obj() { }

Dynamic Widget_obj::__CreateEmpty() { return  new Widget_obj; }
hx::ObjectPtr< Widget_obj > Widget_obj::__new()
{  hx::ObjectPtr< Widget_obj > _result_ = new Widget_obj();
	_result_->__construct();
	return _result_;}

Dynamic Widget_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Widget_obj > _result_ = new Widget_obj();
	_result_->__construct();
	return _result_;}

Void Widget_obj::initialize( ){
{
		HX_STACK_FRAME("sx.widgets.Widget","initialize",0x271d4292,"sx.widgets.Widget.initialize","sx/widgets/Widget.hx",271,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_LINE(272)
		bool tmp = this->initialized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		if ((tmp)){
			HX_STACK_LINE(272)
			return null();
		}
		HX_STACK_LINE(274)
		::String tmp1 = this->style;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(274)
		bool tmp2 = (tmp1 == HX_HCSTRING("__DEFAULT__","\xe1","\x72","\x81","\x20"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(274)
		if ((tmp2)){
			HX_STACK_LINE(275)
			::String tmp3 = this->style;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(275)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(275)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(275)
			if ((tmp4)){
				HX_STACK_LINE(275)
				::sx::themes::Theme tmp6 = ::sx::Sx_obj::theme;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(275)
				::sx::themes::Theme tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(275)
				tmp5 = (tmp7 != null());
			}
			else{
				HX_STACK_LINE(275)
				tmp5 = false;
			}
			HX_STACK_LINE(275)
			if ((tmp5)){
				HX_STACK_LINE(275)
				::sx::themes::Theme tmp6 = ::sx::Sx_obj::theme;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(275)
				tmp6->apply(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(278)
		this->initialized = true;
		HX_STACK_LINE(280)
		this->__initializeSelf();
		HX_STACK_LINE(281)
		::sx::signals::Signal tmp3 = this->__onInitialize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(146)
		if ((tmp4)){
			HX_STACK_LINE(281)
			::sx::signals::Signal tmp6 = this->__onInitialize;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(281)
			::sx::signals::Signal tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(146)
			int tmp8 = tmp7->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			tmp5 = (tmp9 > (int)0);
		}
		else{
			HX_STACK_LINE(146)
			tmp5 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp5)){
			HX_STACK_LINE(281)
			::sx::signals::Signal tmp6 = this->__onInitialize;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			bool tmp7 = tmp6->__listenersInUse;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			if ((tmp7)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(281)
					::sx::signals::Signal tmp8 = this->__onInitialize;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(148)
					cpp::ArrayBase _g1 = tmp8->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(148)
					while((true)){
						HX_STACK_LINE(148)
						bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(148)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(148)
						if ((tmp10)){
							HX_STACK_LINE(148)
							break;
						}
						HX_STACK_LINE(148)
						Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(148)
						Dynamic listener = tmp11;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(148)
						++(_g);
						HX_STACK_LINE(148)
						listener(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(281)
				::sx::signals::Signal tmp8 = this->__onInitialize;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(151)
				tmp8->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(281)
					::sx::signals::Signal tmp9 = this->__onInitialize;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(152)
					cpp::ArrayBase _g1 = tmp9->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(152)
					while((true)){
						HX_STACK_LINE(152)
						bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(152)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(152)
						if ((tmp11)){
							HX_STACK_LINE(152)
							break;
						}
						HX_STACK_LINE(152)
						Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(152)
						Dynamic listener = tmp12;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(152)
						++(_g);
						HX_STACK_LINE(152)
						listener(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
				HX_STACK_LINE(281)
				::sx::signals::Signal tmp9 = this->__onInitialize;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(153)
				tmp9->__listenersInUse = false;
			}
		}
		HX_STACK_LINE(282)
		this->__initializeChildren();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,initialize,(void))

::sx::widgets::Widget Widget_obj::addChild( ::sx::widgets::Widget child){
	HX_STACK_FRAME("sx.widgets.Widget","addChild",0x8c36ac7d,"sx.widgets.Widget.addChild","sx/widgets/Widget.hx",292,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(293)
	::sx::widgets::Widget tmp = child->get_parent();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(293)
	if ((tmp1)){
		HX_STACK_LINE(293)
		::sx::widgets::Widget tmp2 = child->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(293)
		::sx::widgets::Widget tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(293)
		tmp2->removeChild(tmp3);
	}
	HX_STACK_LINE(295)
	::sx::backend::dummy::Backend tmp2 = this->backend;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(295)
	::sx::widgets::Widget tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(295)
	tmp2->addWidget(tmp3);
	HX_STACK_LINE(296)
	(this->numChildren)++;
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(297)
		bool tmp4 = child->__listeningParentResize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(297)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(297)
		if ((tmp4)){
			HX_STACK_LINE(297)
			::sx::widgets::Widget tmp6 = child->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(297)
			::sx::widgets::Widget tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(297)
			tmp5 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(297)
			tmp5 = false;
		}
		HX_STACK_LINE(297)
		if ((tmp5)){
			HX_STACK_LINE(297)
			child->__listeningParentResize = false;
			HX_STACK_LINE(297)
			::sx::widgets::Widget tmp6 = child->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(297)
			::sx::signals::Signal tmp7 = tmp6->get_onResize();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(297)
			Dynamic tmp8 = child->__parentResized_dyn();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(297)
			tmp7->remove(tmp8);
		}
		HX_STACK_LINE(297)
		child->__parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(297)
		bool tmp6 = (child->__parent != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(297)
		if ((tmp6)){
			HX_STACK_LINE(297)
			child->__updateParentResizeListener();
			HX_STACK_LINE(297)
			bool tmp7 = child->__parent->initialized;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(297)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(297)
			if ((tmp7)){
				HX_STACK_LINE(297)
				bool tmp9 = child->initialized;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(297)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(297)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(297)
				tmp8 = false;
			}
			HX_STACK_LINE(297)
			if ((tmp8)){
				HX_STACK_LINE(297)
				child->initialize();
			}
		}
		HX_STACK_LINE(297)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(299)
	::sx::signals::Signal tmp4 = this->__onChildAdded;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(146)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(146)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(146)
	if ((tmp5)){
		HX_STACK_LINE(299)
		::sx::signals::Signal tmp7 = this->__onChildAdded;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(299)
		::sx::signals::Signal tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(146)
		int tmp9 = tmp8->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(146)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(146)
		tmp6 = (tmp10 > (int)0);
	}
	else{
		HX_STACK_LINE(146)
		tmp6 = false;
	}
	HX_STACK_LINE(146)
	if ((tmp6)){
		HX_STACK_LINE(299)
		::sx::signals::Signal tmp7 = this->__onChildAdded;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		bool tmp8 = tmp7->__listenersInUse;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(147)
		if ((tmp8)){
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(299)
				::sx::signals::Signal tmp9 = this->__onChildAdded;		HX_STACK_VAR(tmp9,"tmp9");
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
					HX_STACK_LINE(299)
					::sx::widgets::Widget tmp13 = child;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(148)
					listener(hx::ObjectPtr<OBJ_>(this),tmp13).Cast< Void >();
				}
			}
			HX_STACK_LINE(149)
			false;
		}
		else{
			HX_STACK_LINE(299)
			::sx::signals::Signal tmp9 = this->__onChildAdded;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(151)
			tmp9->__listenersInUse = true;
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(299)
				::sx::signals::Signal tmp10 = this->__onChildAdded;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(152)
				cpp::ArrayBase _g1 = tmp10->__listeners;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(152)
				while((true)){
					HX_STACK_LINE(152)
					bool tmp11 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(152)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(152)
					if ((tmp12)){
						HX_STACK_LINE(152)
						break;
					}
					HX_STACK_LINE(152)
					Dynamic tmp13 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(152)
					Dynamic listener = tmp13;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(152)
					++(_g);
					HX_STACK_LINE(299)
					::sx::widgets::Widget tmp14 = child;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(152)
					listener(hx::ObjectPtr<OBJ_>(this),tmp14).Cast< Void >();
				}
			}
			HX_STACK_LINE(299)
			::sx::signals::Signal tmp10 = this->__onChildAdded;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(153)
			tmp10->__listenersInUse = false;
		}
	}
	HX_STACK_LINE(146)
	bool tmp7 = (child->__onParentChanged != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(146)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(146)
	if ((tmp7)){
		HX_STACK_LINE(146)
		int tmp9 = child->__onParentChanged->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(146)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(146)
		tmp8 = (tmp10 > (int)0);
	}
	else{
		HX_STACK_LINE(146)
		tmp8 = false;
	}
	HX_STACK_LINE(146)
	if ((tmp8)){
		HX_STACK_LINE(147)
		bool tmp9 = child->__onParentChanged->__listenersInUse;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(147)
		if ((tmp9)){
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(148)
				cpp::ArrayBase _g1 = child->__onParentChanged->__listeners;		HX_STACK_VAR(_g1,"_g1");
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
					HX_STACK_LINE(300)
					::sx::widgets::Widget tmp13 = child;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(148)
					listener(hx::ObjectPtr<OBJ_>(this),tmp13).Cast< Void >();
				}
			}
			HX_STACK_LINE(149)
			false;
		}
		else{
			HX_STACK_LINE(151)
			child->__onParentChanged->__listenersInUse = true;
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(152)
				cpp::ArrayBase _g1 = child->__onParentChanged->__listeners;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(152)
				while((true)){
					HX_STACK_LINE(152)
					bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(152)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(152)
					if ((tmp11)){
						HX_STACK_LINE(152)
						break;
					}
					HX_STACK_LINE(152)
					Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(152)
					Dynamic listener = tmp12;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(152)
					++(_g);
					HX_STACK_LINE(300)
					::sx::widgets::Widget tmp13 = child;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(152)
					listener(hx::ObjectPtr<OBJ_>(this),tmp13).Cast< Void >();
				}
			}
			HX_STACK_LINE(153)
			child->__onParentChanged->__listenersInUse = false;
		}
	}
	HX_STACK_LINE(302)
	::sx::widgets::Widget tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(302)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,addChild,return )

::sx::widgets::Widget Widget_obj::addChildAt( ::sx::widgets::Widget child,int index){
	HX_STACK_FRAME("sx.widgets.Widget","addChildAt",0x0898bed0,"sx.widgets.Widget.addChildAt","sx/widgets/Widget.hx",316,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(317)
	::sx::widgets::Widget tmp = child->get_parent();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(317)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(317)
	if ((tmp1)){
		HX_STACK_LINE(317)
		::sx::widgets::Widget tmp2 = child->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(317)
		::sx::widgets::Widget tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(317)
		tmp2->removeChild(tmp3);
	}
	HX_STACK_LINE(319)
	::sx::backend::dummy::Backend tmp2 = this->backend;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(319)
	::sx::widgets::Widget tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(319)
	int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(319)
	tmp2->addWidgetAt(tmp3,tmp4);
	HX_STACK_LINE(320)
	(this->numChildren)++;
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(321)
		bool tmp5 = child->__listeningParentResize;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(321)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(321)
		if ((tmp5)){
			HX_STACK_LINE(321)
			::sx::widgets::Widget tmp7 = child->get_parent();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(321)
			::sx::widgets::Widget tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(321)
			tmp6 = (tmp8 != null());
		}
		else{
			HX_STACK_LINE(321)
			tmp6 = false;
		}
		HX_STACK_LINE(321)
		if ((tmp6)){
			HX_STACK_LINE(321)
			child->__listeningParentResize = false;
			HX_STACK_LINE(321)
			::sx::widgets::Widget tmp7 = child->get_parent();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(321)
			::sx::signals::Signal tmp8 = tmp7->get_onResize();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(321)
			Dynamic tmp9 = child->__parentResized_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(321)
			tmp8->remove(tmp9);
		}
		HX_STACK_LINE(321)
		child->__parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(321)
		bool tmp7 = (child->__parent != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(321)
		if ((tmp7)){
			HX_STACK_LINE(321)
			child->__updateParentResizeListener();
			HX_STACK_LINE(321)
			bool tmp8 = child->__parent->initialized;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(321)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(321)
			if ((tmp8)){
				HX_STACK_LINE(321)
				bool tmp10 = child->initialized;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(321)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(321)
				tmp9 = !(tmp11);
			}
			else{
				HX_STACK_LINE(321)
				tmp9 = false;
			}
			HX_STACK_LINE(321)
			if ((tmp9)){
				HX_STACK_LINE(321)
				child->initialize();
			}
		}
		HX_STACK_LINE(321)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(323)
	::sx::signals::Signal tmp5 = this->__onChildAdded;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(323)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(323)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(323)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(323)
	if ((tmp7)){
		HX_STACK_LINE(323)
		tmp8 = (child->__onParentChanged != null());
	}
	else{
		HX_STACK_LINE(323)
		tmp8 = true;
	}
	HX_STACK_LINE(323)
	if ((tmp8)){
		HX_STACK_LINE(324)
		::sx::signals::Signal tmp9 = this->__onChildAdded;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(146)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(146)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(146)
		if ((tmp10)){
			HX_STACK_LINE(324)
			::sx::signals::Signal tmp12 = this->__onChildAdded;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(324)
			::sx::signals::Signal tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(146)
			int tmp14 = tmp13->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(146)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(146)
			tmp11 = (tmp15 > (int)0);
		}
		else{
			HX_STACK_LINE(146)
			tmp11 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp11)){
			HX_STACK_LINE(324)
			::sx::signals::Signal tmp12 = this->__onChildAdded;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(147)
			bool tmp13 = tmp12->__listenersInUse;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(147)
			if ((tmp13)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(324)
					::sx::signals::Signal tmp14 = this->__onChildAdded;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(148)
					cpp::ArrayBase _g1 = tmp14->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(148)
					while((true)){
						HX_STACK_LINE(148)
						bool tmp15 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(148)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(148)
						if ((tmp16)){
							HX_STACK_LINE(148)
							break;
						}
						HX_STACK_LINE(148)
						Dynamic tmp17 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(148)
						Dynamic listener = tmp17;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(148)
						++(_g);
						HX_STACK_LINE(324)
						::sx::widgets::Widget tmp18 = child;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(148)
						listener(hx::ObjectPtr<OBJ_>(this),tmp18).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(324)
				::sx::signals::Signal tmp14 = this->__onChildAdded;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(151)
				tmp14->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(324)
					::sx::signals::Signal tmp15 = this->__onChildAdded;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(152)
					cpp::ArrayBase _g1 = tmp15->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(152)
					while((true)){
						HX_STACK_LINE(152)
						bool tmp16 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(152)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(152)
						if ((tmp17)){
							HX_STACK_LINE(152)
							break;
						}
						HX_STACK_LINE(152)
						Dynamic tmp18 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(152)
						Dynamic listener = tmp18;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(152)
						++(_g);
						HX_STACK_LINE(324)
						::sx::widgets::Widget tmp19 = child;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(152)
						listener(hx::ObjectPtr<OBJ_>(this),tmp19).Cast< Void >();
					}
				}
				HX_STACK_LINE(324)
				::sx::signals::Signal tmp15 = this->__onChildAdded;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(153)
				tmp15->__listenersInUse = false;
			}
		}
		HX_STACK_LINE(146)
		bool tmp12 = (child->__onParentChanged != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(146)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(146)
		if ((tmp12)){
			HX_STACK_LINE(146)
			int tmp14 = child->__onParentChanged->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(146)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(146)
			tmp13 = (tmp15 > (int)0);
		}
		else{
			HX_STACK_LINE(146)
			tmp13 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp13)){
			HX_STACK_LINE(147)
			bool tmp14 = child->__onParentChanged->__listenersInUse;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(147)
			if ((tmp14)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(148)
					cpp::ArrayBase _g1 = child->__onParentChanged->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(148)
					while((true)){
						HX_STACK_LINE(148)
						bool tmp15 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(148)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(148)
						if ((tmp16)){
							HX_STACK_LINE(148)
							break;
						}
						HX_STACK_LINE(148)
						Dynamic tmp17 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(148)
						Dynamic listener = tmp17;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(148)
						++(_g);
						HX_STACK_LINE(325)
						::sx::widgets::Widget tmp18 = child;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(148)
						listener(hx::ObjectPtr<OBJ_>(this),tmp18).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(151)
				child->__onParentChanged->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(152)
					cpp::ArrayBase _g1 = child->__onParentChanged->__listeners;		HX_STACK_VAR(_g1,"_g1");
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
						HX_STACK_LINE(325)
						::sx::widgets::Widget tmp18 = child;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(152)
						listener(hx::ObjectPtr<OBJ_>(this),tmp18).Cast< Void >();
					}
				}
				HX_STACK_LINE(153)
				child->__onParentChanged->__listenersInUse = false;
			}
		}
	}
	HX_STACK_LINE(328)
	::sx::widgets::Widget tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(328)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC2(Widget_obj,addChildAt,return )

::sx::widgets::Widget Widget_obj::removeChild( ::sx::widgets::Widget child){
	HX_STACK_FRAME("sx.widgets.Widget","removeChild",0x1f5a8f36,"sx.widgets.Widget.removeChild","sx/widgets/Widget.hx",339,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(340)
	::sx::widgets::Widget tmp = child->get_parent();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(340)
	bool tmp1 = (tmp == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(340)
	if ((tmp1)){
		HX_STACK_LINE(341)
		::sx::backend::dummy::Backend tmp2 = this->backend;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(341)
		::sx::widgets::Widget tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(341)
		tmp2->removeWidget(tmp3);
		HX_STACK_LINE(342)
		(this->numChildren)--;
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(343)
			bool tmp4 = child->__listeningParentResize;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(343)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(343)
			if ((tmp4)){
				HX_STACK_LINE(343)
				::sx::widgets::Widget tmp6 = child->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(343)
				::sx::widgets::Widget tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(343)
				tmp5 = (tmp7 != null());
			}
			else{
				HX_STACK_LINE(343)
				tmp5 = false;
			}
			HX_STACK_LINE(343)
			if ((tmp5)){
				HX_STACK_LINE(343)
				child->__listeningParentResize = false;
				HX_STACK_LINE(343)
				::sx::widgets::Widget tmp6 = child->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(343)
				::sx::signals::Signal tmp7 = tmp6->get_onResize();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(343)
				Dynamic tmp8 = child->__parentResized_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(343)
				tmp7->remove(tmp8);
			}
			HX_STACK_LINE(343)
			child->__parent = null();
			HX_STACK_LINE(343)
			bool tmp6 = (child->__parent != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(343)
			if ((tmp6)){
				HX_STACK_LINE(343)
				child->__updateParentResizeListener();
				HX_STACK_LINE(343)
				bool tmp7 = child->__parent->initialized;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(343)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(343)
				if ((tmp7)){
					HX_STACK_LINE(343)
					bool tmp9 = child->initialized;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(343)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(343)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(343)
					tmp8 = false;
				}
				HX_STACK_LINE(343)
				if ((tmp8)){
					HX_STACK_LINE(343)
					child->initialize();
				}
			}
			HX_STACK_LINE(343)
			Dynamic();
		}
		HX_STACK_LINE(345)
		::sx::signals::Signal tmp4 = this->__onChildRemoved;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(146)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(146)
		if ((tmp5)){
			HX_STACK_LINE(345)
			::sx::signals::Signal tmp7 = this->__onChildRemoved;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(345)
			::sx::signals::Signal tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			int tmp9 = tmp8->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(146)
			tmp6 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(146)
			tmp6 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp6)){
			HX_STACK_LINE(345)
			::sx::signals::Signal tmp7 = this->__onChildRemoved;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			bool tmp8 = tmp7->__listenersInUse;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(147)
			if ((tmp8)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(345)
					::sx::signals::Signal tmp9 = this->__onChildRemoved;		HX_STACK_VAR(tmp9,"tmp9");
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
						HX_STACK_LINE(345)
						::sx::widgets::Widget tmp13 = child;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(148)
						listener(hx::ObjectPtr<OBJ_>(this),tmp13).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(345)
				::sx::signals::Signal tmp9 = this->__onChildRemoved;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(151)
				tmp9->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(345)
					::sx::signals::Signal tmp10 = this->__onChildRemoved;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(152)
					cpp::ArrayBase _g1 = tmp10->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(152)
					while((true)){
						HX_STACK_LINE(152)
						bool tmp11 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(152)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(152)
						if ((tmp12)){
							HX_STACK_LINE(152)
							break;
						}
						HX_STACK_LINE(152)
						Dynamic tmp13 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(152)
						Dynamic listener = tmp13;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(152)
						++(_g);
						HX_STACK_LINE(345)
						::sx::widgets::Widget tmp14 = child;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(152)
						listener(hx::ObjectPtr<OBJ_>(this),tmp14).Cast< Void >();
					}
				}
				HX_STACK_LINE(345)
				::sx::signals::Signal tmp10 = this->__onChildRemoved;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(153)
				tmp10->__listenersInUse = false;
			}
		}
		HX_STACK_LINE(146)
		bool tmp7 = (child->__onParentChanged != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(146)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(146)
		if ((tmp7)){
			HX_STACK_LINE(146)
			int tmp9 = child->__onParentChanged->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(146)
			tmp8 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(146)
			tmp8 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp8)){
			HX_STACK_LINE(147)
			bool tmp9 = child->__onParentChanged->__listenersInUse;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(147)
			if ((tmp9)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(148)
					cpp::ArrayBase _g1 = child->__onParentChanged->__listeners;		HX_STACK_VAR(_g1,"_g1");
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
						HX_STACK_LINE(346)
						::sx::widgets::Widget tmp13 = child;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(148)
						listener(null(),tmp13).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(151)
				child->__onParentChanged->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(152)
					cpp::ArrayBase _g1 = child->__onParentChanged->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(152)
					while((true)){
						HX_STACK_LINE(152)
						bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(152)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(152)
						if ((tmp11)){
							HX_STACK_LINE(152)
							break;
						}
						HX_STACK_LINE(152)
						Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(152)
						Dynamic listener = tmp12;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(152)
						++(_g);
						HX_STACK_LINE(346)
						::sx::widgets::Widget tmp13 = child;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(152)
						listener(null(),tmp13).Cast< Void >();
					}
				}
				HX_STACK_LINE(153)
				child->__onParentChanged->__listenersInUse = false;
			}
		}
		HX_STACK_LINE(348)
		::sx::widgets::Widget tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(348)
		return tmp9;
	}
	else{
		HX_STACK_LINE(350)
		return null();
	}
	HX_STACK_LINE(340)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,removeChild,return )

::sx::widgets::Widget Widget_obj::removeChildAt( int index){
	HX_STACK_FRAME("sx.widgets.Widget","removeChildAt",0x968581c9,"sx.widgets.Widget.removeChildAt","sx/widgets/Widget.hx",363,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(364)
	::sx::backend::dummy::Backend tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(364)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(364)
	::sx::widgets::Widget tmp2 = tmp->removeWidgetAt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(364)
	::sx::widgets::Widget removed = tmp2;		HX_STACK_VAR(removed,"removed");
	HX_STACK_LINE(365)
	bool tmp3 = (removed != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(365)
	if ((tmp3)){
		HX_STACK_LINE(366)
		(this->numChildren)--;
		HX_STACK_LINE(367)
		{
			HX_STACK_LINE(367)
			bool tmp4 = removed->__listeningParentResize;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(367)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(367)
			if ((tmp4)){
				HX_STACK_LINE(367)
				::sx::widgets::Widget tmp6 = removed->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(367)
				::sx::widgets::Widget tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(367)
				tmp5 = (tmp7 != null());
			}
			else{
				HX_STACK_LINE(367)
				tmp5 = false;
			}
			HX_STACK_LINE(367)
			if ((tmp5)){
				HX_STACK_LINE(367)
				removed->__listeningParentResize = false;
				HX_STACK_LINE(367)
				::sx::widgets::Widget tmp6 = removed->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(367)
				::sx::signals::Signal tmp7 = tmp6->get_onResize();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(367)
				Dynamic tmp8 = removed->__parentResized_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(367)
				tmp7->remove(tmp8);
			}
			HX_STACK_LINE(367)
			removed->__parent = null();
			HX_STACK_LINE(367)
			bool tmp6 = (removed->__parent != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(367)
			if ((tmp6)){
				HX_STACK_LINE(367)
				removed->__updateParentResizeListener();
				HX_STACK_LINE(367)
				bool tmp7 = removed->__parent->initialized;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(367)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(367)
				if ((tmp7)){
					HX_STACK_LINE(367)
					bool tmp9 = removed->initialized;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(367)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(367)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(367)
					tmp8 = false;
				}
				HX_STACK_LINE(367)
				if ((tmp8)){
					HX_STACK_LINE(367)
					removed->initialize();
				}
			}
			HX_STACK_LINE(367)
			Dynamic();
		}
		HX_STACK_LINE(369)
		::sx::signals::Signal tmp4 = this->__onChildRemoved;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(146)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(146)
		if ((tmp5)){
			HX_STACK_LINE(369)
			::sx::signals::Signal tmp7 = this->__onChildRemoved;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(369)
			::sx::signals::Signal tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			int tmp9 = tmp8->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(146)
			tmp6 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(146)
			tmp6 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp6)){
			HX_STACK_LINE(369)
			::sx::signals::Signal tmp7 = this->__onChildRemoved;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			bool tmp8 = tmp7->__listenersInUse;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(147)
			if ((tmp8)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(369)
					::sx::signals::Signal tmp9 = this->__onChildRemoved;		HX_STACK_VAR(tmp9,"tmp9");
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
						HX_STACK_LINE(369)
						::sx::widgets::Widget tmp13 = removed;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(148)
						listener(hx::ObjectPtr<OBJ_>(this),tmp13).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(369)
				::sx::signals::Signal tmp9 = this->__onChildRemoved;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(151)
				tmp9->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(369)
					::sx::signals::Signal tmp10 = this->__onChildRemoved;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(152)
					cpp::ArrayBase _g1 = tmp10->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(152)
					while((true)){
						HX_STACK_LINE(152)
						bool tmp11 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(152)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(152)
						if ((tmp12)){
							HX_STACK_LINE(152)
							break;
						}
						HX_STACK_LINE(152)
						Dynamic tmp13 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(152)
						Dynamic listener = tmp13;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(152)
						++(_g);
						HX_STACK_LINE(369)
						::sx::widgets::Widget tmp14 = removed;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(152)
						listener(hx::ObjectPtr<OBJ_>(this),tmp14).Cast< Void >();
					}
				}
				HX_STACK_LINE(369)
				::sx::signals::Signal tmp10 = this->__onChildRemoved;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(153)
				tmp10->__listenersInUse = false;
			}
		}
		HX_STACK_LINE(146)
		bool tmp7 = (removed->__onParentChanged != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(146)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(146)
		if ((tmp7)){
			HX_STACK_LINE(146)
			int tmp9 = removed->__onParentChanged->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(146)
			tmp8 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(146)
			tmp8 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp8)){
			HX_STACK_LINE(147)
			bool tmp9 = removed->__onParentChanged->__listenersInUse;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(147)
			if ((tmp9)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(148)
					cpp::ArrayBase _g1 = removed->__onParentChanged->__listeners;		HX_STACK_VAR(_g1,"_g1");
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
						HX_STACK_LINE(370)
						::sx::widgets::Widget tmp13 = removed;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(148)
						listener(null(),tmp13).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(151)
				removed->__onParentChanged->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(152)
					cpp::ArrayBase _g1 = removed->__onParentChanged->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(152)
					while((true)){
						HX_STACK_LINE(152)
						bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(152)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(152)
						if ((tmp11)){
							HX_STACK_LINE(152)
							break;
						}
						HX_STACK_LINE(152)
						Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(152)
						Dynamic listener = tmp12;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(152)
						++(_g);
						HX_STACK_LINE(370)
						::sx::widgets::Widget tmp13 = removed;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(152)
						listener(null(),tmp13).Cast< Void >();
					}
				}
				HX_STACK_LINE(153)
				removed->__onParentChanged->__listenersInUse = false;
			}
		}
	}
	HX_STACK_LINE(373)
	::sx::widgets::Widget tmp4 = removed;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(373)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,removeChildAt,return )

int Widget_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(-1);
	HX_STACK_FRAME("sx.widgets.Widget","removeChildren",0x1e712fe5,"sx.widgets.Widget.removeChildren","sx/widgets/Widget.hx",385,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(386)
		bool tmp = (beginIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(386)
		if ((tmp)){
			HX_STACK_LINE(386)
			int tmp1 = this->numChildren;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(386)
			int tmp2 = beginIndex;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(386)
			int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(386)
			beginIndex = tmp3;
		}
		HX_STACK_LINE(387)
		bool tmp1 = (beginIndex < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(387)
		if ((tmp1)){
			HX_STACK_LINE(387)
			beginIndex = (int)0;
		}
		HX_STACK_LINE(388)
		bool tmp2 = (endIndex < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(388)
		if ((tmp2)){
			HX_STACK_LINE(389)
			int tmp3 = this->numChildren;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(389)
			int tmp4 = endIndex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(389)
			int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(389)
			endIndex = tmp5;
		}
		else{
			HX_STACK_LINE(390)
			int tmp3 = endIndex;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(390)
			int tmp4 = this->numChildren;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(390)
			bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(390)
			if ((tmp5)){
				HX_STACK_LINE(391)
				int tmp6 = this->numChildren;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(391)
				int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(391)
				endIndex = tmp7;
			}
		}
		HX_STACK_LINE(394)
		int tmp3 = beginIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(394)
		int tmp4 = this->numChildren;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(394)
		bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(394)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(394)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(394)
		if ((tmp6)){
			HX_STACK_LINE(394)
			tmp7 = (endIndex < beginIndex);
		}
		else{
			HX_STACK_LINE(394)
			tmp7 = true;
		}
		HX_STACK_LINE(394)
		if ((tmp7)){
			HX_STACK_LINE(394)
			return (int)0;
		}
		HX_STACK_LINE(396)
		int tmp8 = (endIndex - beginIndex);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(396)
		int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(396)
		int removed = tmp9;		HX_STACK_VAR(removed,"removed");
		HX_STACK_LINE(397)
		while((true)){
			HX_STACK_LINE(397)
			bool tmp10 = (beginIndex <= endIndex);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(397)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(397)
			if ((tmp11)){
				HX_STACK_LINE(397)
				break;
			}
			HX_STACK_LINE(398)
			int tmp12 = beginIndex;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(398)
			this->removeChildAt(tmp12);
			HX_STACK_LINE(399)
			(endIndex)--;
		}
		HX_STACK_LINE(402)
		int tmp10 = removed;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(402)
		return tmp10;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Widget_obj,removeChildren,return )

bool Widget_obj::contains( ::sx::widgets::Widget child){
	HX_STACK_FRAME("sx.widgets.Widget","contains",0xf99b36e1,"sx.widgets.Widget.contains","sx/widgets/Widget.hx",410,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(411)
	while((true)){
		HX_STACK_LINE(411)
		bool tmp = (child != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(411)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(411)
		if ((tmp1)){
			HX_STACK_LINE(411)
			break;
		}
		HX_STACK_LINE(412)
		bool tmp2 = (child == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(412)
		if ((tmp2)){
			HX_STACK_LINE(412)
			return true;
		}
		HX_STACK_LINE(413)
		::sx::widgets::Widget tmp3 = child->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(413)
		child = tmp3;
	}
	HX_STACK_LINE(416)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,contains,return )

int Widget_obj::getChildIndex( ::sx::widgets::Widget child){
	HX_STACK_FRAME("sx.widgets.Widget","getChildIndex",0x10210c0a,"sx.widgets.Widget.getChildIndex","sx/widgets/Widget.hx",426,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(427)
	::sx::widgets::Widget tmp = child->get_parent();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(427)
	bool tmp1 = (tmp != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(427)
	if ((tmp1)){
		HX_STACK_LINE(427)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Widget.hx","\x5a","\xa5","\x28","\x07"),427,HX_HCSTRING("sx.widgets.Widget","\xec","\x23","\xeb","\xb7"),HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(427)
		::sx::exceptions::NotChildException tmp3 = ::sx::exceptions::NotChildException_obj::__new(null(),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(427)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(429)
	::sx::backend::dummy::Backend tmp2 = this->backend;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(429)
	::sx::widgets::Widget tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(429)
	int tmp4 = tmp2->getWidgetIndex(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(429)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,getChildIndex,return )

int Widget_obj::setChildIndex( ::sx::widgets::Widget child,int index){
	HX_STACK_FRAME("sx.widgets.Widget","setChildIndex",0x5526ee16,"sx.widgets.Widget.setChildIndex","sx/widgets/Widget.hx",445,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(446)
	::sx::widgets::Widget tmp = child->get_parent();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(446)
	bool tmp1 = (tmp != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(446)
	if ((tmp1)){
		HX_STACK_LINE(446)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Widget.hx","\x5a","\xa5","\x28","\x07"),446,HX_HCSTRING("sx.widgets.Widget","\xec","\x23","\xeb","\xb7"),HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(446)
		::sx::exceptions::NotChildException tmp3 = ::sx::exceptions::NotChildException_obj::__new(null(),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(446)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(448)
	::sx::backend::dummy::Backend tmp2 = this->backend;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(448)
	::sx::widgets::Widget tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(448)
	int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(448)
	int tmp5 = tmp2->setWidgetIndex(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(448)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(Widget_obj,setChildIndex,return )

::sx::widgets::Widget Widget_obj::getChildAt( int index){
	HX_STACK_FRAME("sx.widgets.Widget","getChildAt",0xf07018fb,"sx.widgets.Widget.getChildAt","sx/widgets/Widget.hx",460,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(461)
	::sx::backend::dummy::Backend tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(461)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(461)
	::sx::widgets::Widget tmp2 = tmp->getWidgetAt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(461)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,getChildAt,return )

Void Widget_obj::swapChildren( ::sx::widgets::Widget child1,::sx::widgets::Widget child2){
{
		HX_STACK_FRAME("sx.widgets.Widget","swapChildren",0x044db0b4,"sx.widgets.Widget.swapChildren","sx/widgets/Widget.hx",471,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(472)
		::sx::widgets::Widget tmp = child1->get_parent();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(472)
		bool tmp1 = (tmp != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(472)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(472)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(472)
		if ((tmp2)){
			HX_STACK_LINE(472)
			::sx::widgets::Widget tmp4 = child2->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(472)
			::sx::widgets::Widget tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(472)
			tmp3 = (tmp5 != hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(472)
			tmp3 = true;
		}
		HX_STACK_LINE(472)
		if ((tmp3)){
			HX_STACK_LINE(472)
			Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Widget.hx","\x5a","\xa5","\x28","\x07"),472,HX_HCSTRING("sx.widgets.Widget","\xec","\x23","\xeb","\xb7"),HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(472)
			::sx::exceptions::NotChildException tmp5 = ::sx::exceptions::NotChildException_obj::__new(null(),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(472)
			HX_STACK_DO_THROW(tmp5);
		}
		HX_STACK_LINE(473)
		::sx::backend::dummy::Backend tmp4 = this->backend;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(473)
		::sx::widgets::Widget tmp5 = child1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(473)
		::sx::widgets::Widget tmp6 = child2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(473)
		tmp4->swapWidgets(tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Widget_obj,swapChildren,(void))

Void Widget_obj::swapChildrenAt( int index1,int index2){
{
		HX_STACK_FRAME("sx.widgets.Widget","swapChildrenAt",0xf7a27ec7,"sx.widgets.Widget.swapChildrenAt","sx/widgets/Widget.hx",485,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index1,"index1")
		HX_STACK_ARG(index2,"index2")
		HX_STACK_LINE(486)
		bool tmp = (index1 < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(486)
		if ((tmp)){
			HX_STACK_LINE(486)
			int tmp1 = this->numChildren;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(486)
			hx::AddEq(index1,tmp1);
		}
		HX_STACK_LINE(487)
		bool tmp1 = (index2 < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(487)
		if ((tmp1)){
			HX_STACK_LINE(487)
			int tmp2 = this->numChildren;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(487)
			hx::AddEq(index2,tmp2);
		}
		HX_STACK_LINE(489)
		bool tmp2 = (index1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(489)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(489)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(489)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(489)
		if ((tmp4)){
			HX_STACK_LINE(489)
			int tmp6 = index1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(489)
			int tmp7 = this->numChildren;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(489)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(489)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(489)
			tmp5 = (tmp6 >= tmp9);
		}
		else{
			HX_STACK_LINE(489)
			tmp5 = true;
		}
		HX_STACK_LINE(489)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(489)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(489)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(489)
		if ((tmp7)){
			HX_STACK_LINE(489)
			tmp8 = (index2 < (int)0);
		}
		else{
			HX_STACK_LINE(489)
			tmp8 = true;
		}
		HX_STACK_LINE(489)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(489)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(489)
		if ((tmp9)){
			HX_STACK_LINE(489)
			int tmp11 = index2;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(489)
			int tmp12 = this->numChildren;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(489)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(489)
			tmp10 = (tmp11 > tmp13);
		}
		else{
			HX_STACK_LINE(489)
			tmp10 = true;
		}
		HX_STACK_LINE(489)
		if ((tmp10)){
			HX_STACK_LINE(490)
			Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Widget.hx","\x5a","\xa5","\x28","\x07"),490,HX_HCSTRING("sx.widgets.Widget","\xec","\x23","\xeb","\xb7"),HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(490)
			::sx::exceptions::OutOfBoundsException tmp12 = ::sx::exceptions::OutOfBoundsException_obj::__new(HX_HCSTRING("Provided index does not exist in display list of this widget.","\xb6","\xd3","\xa1","\x10"),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(490)
			HX_STACK_DO_THROW(tmp12);
		}
		HX_STACK_LINE(493)
		::sx::backend::dummy::Backend tmp11 = this->backend;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(493)
		int tmp12 = index1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(493)
		int tmp13 = index2;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(493)
		tmp11->swapWidgetsAt(tmp12,tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Widget_obj,swapChildrenAt,(void))

::sx::widgets::Widget Widget_obj::getChild( ::String name){
	HX_STACK_FRAME("sx.widgets.Widget","getChild",0x72b095e8,"sx.widgets.Widget.getChild","sx/widgets/Widget.hx",501,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(502)
	::sx::widgets::Widget child = null();		HX_STACK_VAR(child,"child");
	HX_STACK_LINE(503)
	{
		HX_STACK_LINE(503)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(503)
		int tmp = this->numChildren;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(503)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(503)
		while((true)){
			HX_STACK_LINE(503)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(503)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(503)
			if ((tmp2)){
				HX_STACK_LINE(503)
				break;
			}
			HX_STACK_LINE(503)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(503)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(504)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(504)
			::sx::widgets::Widget tmp5 = this->getChildAt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(504)
			child = tmp5;
			HX_STACK_LINE(505)
			bool tmp6 = (child->name == name);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(505)
			if ((tmp6)){
				HX_STACK_LINE(506)
				::sx::widgets::Widget tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(506)
				return tmp7;
			}
			HX_STACK_LINE(509)
			::String tmp7 = name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(509)
			::sx::widgets::Widget tmp8 = child->getChild(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(509)
			child = tmp8;
			HX_STACK_LINE(510)
			bool tmp9 = (child != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(510)
			if ((tmp9)){
				HX_STACK_LINE(511)
				::sx::widgets::Widget tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(511)
				return tmp10;
			}
		}
	}
	HX_STACK_LINE(515)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,getChild,return )

Dynamic Widget_obj::getChildAs( ::String name,::hx::Class cls){
	HX_STACK_FRAME("sx.widgets.Widget","getChildAs",0xf07018fa,"sx.widgets.Widget.getChildAs","sx/widgets/Widget.hx",525,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(cls,"cls")
	HX_STACK_LINE(526)
	::sx::widgets::Widget child = null();		HX_STACK_VAR(child,"child");
	HX_STACK_LINE(527)
	{
		HX_STACK_LINE(527)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(527)
		int tmp = this->numChildren;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(527)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(527)
		while((true)){
			HX_STACK_LINE(527)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(527)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(527)
			if ((tmp2)){
				HX_STACK_LINE(527)
				break;
			}
			HX_STACK_LINE(527)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(527)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(528)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(528)
			::sx::widgets::Widget tmp5 = this->getChildAt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(528)
			child = tmp5;
			HX_STACK_LINE(529)
			bool tmp6 = (child->name == name);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(529)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(529)
			if ((tmp6)){
				HX_STACK_LINE(529)
				::sx::widgets::Widget tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(529)
				::hx::Class tmp9 = cls;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(529)
				::sx::widgets::Widget tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(529)
				::hx::Class tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(529)
				tmp7 = ::Std_obj::is(tmp10,tmp11);
			}
			else{
				HX_STACK_LINE(529)
				tmp7 = false;
			}
			HX_STACK_LINE(529)
			if ((tmp7)){
				HX_STACK_LINE(530)
				Dynamic tmp8 = ((Dynamic)(child));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(530)
				return tmp8;
			}
			HX_STACK_LINE(533)
			::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(533)
			::hx::Class tmp9 = cls;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(533)
			Dynamic tmp10 = child->getChildAs(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(533)
			child = tmp10;
			HX_STACK_LINE(534)
			bool tmp11 = (child != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(534)
			if ((tmp11)){
				HX_STACK_LINE(535)
				Dynamic tmp12 = ((Dynamic)(child));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(535)
				return tmp12;
			}
		}
	}
	HX_STACK_LINE(539)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Widget_obj,getChildAs,return )

::sx::widgets::Widget Widget_obj::getDirectChild( ::String name){
	HX_STACK_FRAME("sx.widgets.Widget","getDirectChild",0x703de6ff,"sx.widgets.Widget.getDirectChild","sx/widgets/Widget.hx",547,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(548)
	::sx::widgets::Widget child = null();		HX_STACK_VAR(child,"child");
	HX_STACK_LINE(549)
	{
		HX_STACK_LINE(549)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(549)
		int tmp = this->numChildren;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(549)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(549)
		while((true)){
			HX_STACK_LINE(549)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(549)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(549)
			if ((tmp2)){
				HX_STACK_LINE(549)
				break;
			}
			HX_STACK_LINE(549)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(549)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(550)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(550)
			::sx::widgets::Widget tmp5 = this->getChildAt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(550)
			child = tmp5;
			HX_STACK_LINE(551)
			bool tmp6 = (child->name == name);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(551)
			if ((tmp6)){
				HX_STACK_LINE(552)
				::sx::widgets::Widget tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(552)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(556)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,getDirectChild,return )

::sx::widgets::Widget Widget_obj::getParent( ::String name){
	HX_STACK_FRAME("sx.widgets.Widget","getParent",0x1895db5e,"sx.widgets.Widget.getParent","sx/widgets/Widget.hx",564,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(565)
	::sx::widgets::Widget tmp = this->get_parent();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(565)
	::sx::widgets::Widget parent = tmp;		HX_STACK_VAR(parent,"parent");
	HX_STACK_LINE(566)
	while((true)){
		HX_STACK_LINE(566)
		bool tmp1 = (parent != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(566)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(566)
		if ((tmp1)){
			HX_STACK_LINE(566)
			tmp2 = (parent->name != name);
		}
		else{
			HX_STACK_LINE(566)
			tmp2 = false;
		}
		HX_STACK_LINE(566)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(566)
		if ((tmp3)){
			HX_STACK_LINE(566)
			break;
		}
		HX_STACK_LINE(567)
		::sx::widgets::Widget tmp4 = parent->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(567)
		parent = tmp4;
	}
	HX_STACK_LINE(570)
	::sx::widgets::Widget tmp1 = parent;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(570)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,getParent,return )

Dynamic Widget_obj::getParentAs( ::String name,::hx::Class cls){
	HX_STACK_FRAME("sx.widgets.Widget","getParentAs",0xce4a27f0,"sx.widgets.Widget.getParentAs","sx/widgets/Widget.hx",578,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(cls,"cls")
	HX_STACK_LINE(579)
	::sx::widgets::Widget tmp = this->get_parent();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(579)
	::sx::widgets::Widget parent = tmp;		HX_STACK_VAR(parent,"parent");
	HX_STACK_LINE(580)
	while((true)){
		HX_STACK_LINE(580)
		bool tmp1 = (parent != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(580)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(580)
		if ((tmp1)){
			HX_STACK_LINE(580)
			bool tmp3 = (parent->name != name);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(580)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(580)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(580)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(580)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(580)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(580)
			if ((tmp8)){
				HX_STACK_LINE(580)
				::sx::widgets::Widget tmp9 = parent;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(580)
				::hx::Class tmp10 = cls;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(580)
				::sx::widgets::Widget tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(580)
				::hx::Class tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(580)
				::sx::widgets::Widget tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(580)
				::hx::Class tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(580)
				bool tmp15 = ::Std_obj::is(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(580)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(580)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(580)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(580)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(580)
				tmp2 = !(tmp19);
			}
			else{
				HX_STACK_LINE(580)
				tmp2 = true;
			}
		}
		else{
			HX_STACK_LINE(580)
			tmp2 = false;
		}
		HX_STACK_LINE(580)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(580)
		if ((tmp3)){
			HX_STACK_LINE(580)
			break;
		}
		HX_STACK_LINE(581)
		::sx::widgets::Widget tmp4 = parent->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(581)
		parent = tmp4;
	}
	HX_STACK_LINE(584)
	bool tmp1 = (parent == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(584)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(584)
	if ((tmp1)){
		HX_STACK_LINE(584)
		tmp2 = null();
	}
	else{
		HX_STACK_LINE(584)
		tmp2 = ((Dynamic)(parent));
	}
	HX_STACK_LINE(584)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Widget_obj,getParentAs,return )

bool Widget_obj::isEnabled( ){
	HX_STACK_FRAME("sx.widgets.Widget","isEnabled",0x30f0ceb5,"sx.widgets.Widget.isEnabled","sx/widgets/Widget.hx",592,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(593)
	::sx::widgets::Widget current = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(current,"current");
	HX_STACK_LINE(594)
	while((true)){
		HX_STACK_LINE(595)
		bool tmp = current->enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(595)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(595)
		if ((tmp1)){
			HX_STACK_LINE(595)
			return false;
		}
		HX_STACK_LINE(596)
		::sx::widgets::Widget tmp2 = current->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(596)
		current = tmp2;
		HX_STACK_LINE(597)
		bool tmp3 = (current != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(597)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(594)
		if ((tmp4)){
			HX_STACK_LINE(594)
			break;
		}
	}
	HX_STACK_LINE(599)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,isEnabled,return )

::sx::backend::dummy::Point Widget_obj::globalToLocal( ::sx::backend::dummy::Point point){
	HX_STACK_FRAME("sx.widgets.Widget","globalToLocal",0xc2ccf2cb,"sx.widgets.Widget.globalToLocal","sx/widgets/Widget.hx",608,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(609)
	::sx::backend::dummy::Backend tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(609)
	::sx::backend::dummy::Point tmp1 = point;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(609)
	::sx::backend::dummy::Point tmp2 = tmp->widgetGlobalToLocal(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(609)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,globalToLocal,return )

::sx::backend::dummy::Point Widget_obj::localToGlobal( ::sx::backend::dummy::Point point){
	HX_STACK_FRAME("sx.widgets.Widget","localToGlobal",0x9f09e5c7,"sx.widgets.Widget.localToGlobal","sx/widgets/Widget.hx",618,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(619)
	::sx::backend::dummy::Backend tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(619)
	::sx::backend::dummy::Point tmp1 = point;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(619)
	::sx::backend::dummy::Point tmp2 = tmp->widgetLocalToGlobal(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(619)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,localToGlobal,return )

Void Widget_obj::dispose( hx::Null< bool >  __o_disposeChildren){
bool disposeChildren = __o_disposeChildren.Default(true);
	HX_STACK_FRAME("sx.widgets.Widget","dispose",0x952ff21d,"sx.widgets.Widget.dispose","sx/widgets/Widget.hx",627,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(disposeChildren,"disposeChildren")
{
		HX_STACK_LINE(628)
		::sx::signals::Signal tmp = this->__onDispose;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		if ((tmp1)){
			HX_STACK_LINE(628)
			::sx::signals::Signal tmp3 = this->__onDispose;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(628)
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
			HX_STACK_LINE(628)
			::sx::signals::Signal tmp3 = this->__onDispose;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			bool tmp4 = tmp3->__listenersInUse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			if ((tmp4)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(628)
					::sx::signals::Signal tmp5 = this->__onDispose;		HX_STACK_VAR(tmp5,"tmp5");
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
						HX_STACK_LINE(148)
						listener(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(628)
				::sx::signals::Signal tmp5 = this->__onDispose;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				tmp5->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(628)
					::sx::signals::Signal tmp6 = this->__onDispose;		HX_STACK_VAR(tmp6,"tmp6");
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
						HX_STACK_LINE(152)
						listener(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
				HX_STACK_LINE(628)
				::sx::signals::Signal tmp6 = this->__onDispose;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				tmp6->__listenersInUse = false;
			}
		}
		HX_STACK_LINE(629)
		this->disposed = true;
		HX_STACK_LINE(631)
		::sx::widgets::Widget tmp3 = this->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(631)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(631)
		if ((tmp4)){
			HX_STACK_LINE(632)
			::sx::widgets::Widget tmp5 = this->get_parent();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(632)
			tmp5->removeChild(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(635)
		::sx::skins::base::SkinBase tmp5 = this->get_skin();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(635)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(635)
		if ((tmp6)){
			HX_STACK_LINE(635)
			this->set_skin(null());
		}
		HX_STACK_LINE(636)
		::sx::layout::Layout tmp7 = this->get_layout();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(636)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(636)
		if ((tmp8)){
			HX_STACK_LINE(636)
			this->set_layout(null());
		}
		HX_STACK_LINE(638)
		bool tmp9 = disposeChildren;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(638)
		if ((tmp9)){
			HX_STACK_LINE(639)
			while((true)){
				HX_STACK_LINE(639)
				int tmp10 = this->numChildren;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(639)
				bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(639)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(639)
				if ((tmp12)){
					HX_STACK_LINE(639)
					break;
				}
				HX_STACK_LINE(639)
				::sx::widgets::Widget tmp13 = this->getChildAt((int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(639)
				tmp13->dispose(true);
			}
		}
		else{
			HX_STACK_LINE(641)
			this->removeChildren(null(),null());
		}
		HX_STACK_LINE(644)
		::sx::tween::Tweener tmp10 = this->__tween;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(644)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(644)
		if ((tmp11)){
			HX_STACK_LINE(644)
			::sx::tween::Tweener tmp12 = this->__tween;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(644)
			tmp12->stop();
		}
		HX_STACK_LINE(646)
		::sx::backend::dummy::Backend tmp12 = this->backend;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(646)
		tmp12->widgetDisposed();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,dispose,(void))

Void Widget_obj::applyStyle( ){
{
		HX_STACK_FRAME("sx.widgets.Widget","applyStyle",0x69d13225,"sx.widgets.Widget.applyStyle","sx/widgets/Widget.hx",654,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_LINE(655)
		::String tmp = this->style;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(655)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(655)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(655)
		if ((tmp1)){
			HX_STACK_LINE(655)
			::sx::themes::Theme tmp3 = ::sx::Sx_obj::theme;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(655)
			::sx::themes::Theme tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(655)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(655)
			tmp2 = false;
		}
		HX_STACK_LINE(655)
		if ((tmp2)){
			HX_STACK_LINE(656)
			::sx::themes::Theme tmp3 = ::sx::Sx_obj::theme;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(656)
			tmp3->apply(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,applyStyle,(void))

Void Widget_obj::__createBackend( ){
{
		HX_STACK_FRAME("sx.widgets.Widget","__createBackend",0xc28aecd6,"sx.widgets.Widget.__createBackend","sx/widgets/Widget.hx",665,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_LINE(666)
		::sx::backend::dummy::BackendManager tmp = ::sx::Sx_obj::get_backendManager();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(666)
		::sx::backend::dummy::Backend tmp1 = tmp->widgetBackend(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(666)
		this->backend = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,__createBackend,(void))

Void Widget_obj::__propertyResized( ::sx::properties::metric::Size changed,::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.widgets.Widget","__propertyResized",0x7b32cbf9,"sx.widgets.Widget.__propertyResized","sx/widgets/Widget.hx",674,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changed,"changed")
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(675)
		{
			HX_STACK_LINE(675)
			::sx::widgets::Widget tmp = this->get_parent();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(675)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(675)
			if ((tmp1)){
				HX_STACK_LINE(675)
				bool tmp2 = this->__listeningParentResize;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(675)
				if ((tmp2)){
					HX_STACK_LINE(675)
					::sx::properties::metric::Size tmp3 = changed;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(675)
					::sx::properties::metric::Coordinate tmp4 = this->__right;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(675)
					bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(675)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(675)
					if ((tmp5)){
						HX_STACK_LINE(675)
						::sx::properties::metric::Size tmp7 = changed;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(675)
						::sx::properties::metric::Coordinate tmp8 = this->__top;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(675)
						::sx::properties::metric::Coordinate tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(675)
						tmp6 = (tmp7 != tmp9);
					}
					else{
						HX_STACK_LINE(675)
						tmp6 = false;
					}
					HX_STACK_LINE(675)
					if ((tmp6)){
						HX_STACK_LINE(675)
						bool tmp7 = (previousUnits == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(675)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(675)
						if ((tmp7)){
							HX_STACK_LINE(675)
							tmp8 = (previousUnits != changed->units);
						}
						else{
							HX_STACK_LINE(675)
							tmp8 = false;
						}
						HX_STACK_LINE(675)
						if ((tmp8)){
							HX_STACK_LINE(675)
							this->__updateParentResizeListener();
						}
					}
				}
				else{
					HX_STACK_LINE(675)
					bool tmp3 = (changed->units == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(675)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(675)
					bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(675)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(675)
					if ((tmp5)){
						HX_STACK_LINE(675)
						::sx::properties::metric::Size tmp7 = changed;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(675)
						::sx::properties::metric::Coordinate tmp8 = this->__right;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(675)
						::sx::properties::metric::Coordinate tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(675)
						::sx::properties::metric::Coordinate tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(675)
						tmp6 = (tmp7 == tmp10);
					}
					else{
						HX_STACK_LINE(675)
						tmp6 = true;
					}
					HX_STACK_LINE(675)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(675)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(675)
					if ((tmp7)){
						HX_STACK_LINE(675)
						::sx::properties::metric::Size tmp9 = changed;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(675)
						::sx::properties::metric::Coordinate tmp10 = this->__bottom;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(675)
						::sx::properties::metric::Coordinate tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(675)
						tmp8 = (tmp9 == tmp11);
					}
					else{
						HX_STACK_LINE(675)
						tmp8 = true;
					}
					HX_STACK_LINE(675)
					if ((tmp8)){
						HX_STACK_LINE(675)
						this->__listeningParentResize = true;
						HX_STACK_LINE(675)
						::sx::widgets::Widget tmp9 = this->get_parent();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(675)
						::sx::signals::Signal tmp10 = tmp9->get_onResize();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(675)
						Dynamic tmp11 = this->__parentResized_dyn();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(675)
						tmp10->add(tmp11);
					}
				}
			}
		}
		HX_STACK_LINE(676)
		{
			HX_STACK_LINE(676)
			(this->__resizeCounter)++;
			HX_STACK_LINE(676)
			int tmp = this->__resizeCounter;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(676)
			bool tmp1 = (tmp > (int)5);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(676)
			if ((tmp1)){
				HX_STACK_LINE(676)
				Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Widget.hx","\x5a","\xa5","\x28","\x07"),686,HX_HCSTRING("sx.widgets.Widget","\xec","\x23","\xeb","\xb7"),HX_HCSTRING("__resized","\xd0","\xac","\xc1","\xe4"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(676)
				::sx::exceptions::LoopedResizeException tmp3 = ::sx::exceptions::LoopedResizeException_obj::__new(null(),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(676)
				HX_STACK_DO_THROW(tmp3);
			}
			HX_STACK_LINE(676)
			bool tmp2 = this->initialized;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(676)
			if ((tmp2)){
				HX_STACK_LINE(676)
				::sx::backend::dummy::Backend tmp3 = this->backend;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(676)
				tmp3->widgetResized();
			}
			HX_STACK_LINE(676)
			::sx::signals::Signal tmp3 = this->__onResize;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(676)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(676)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(676)
			if ((tmp4)){
				HX_STACK_LINE(676)
				::sx::signals::Signal tmp6 = this->__onResize;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(676)
				::sx::signals::Signal tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(676)
				int tmp8 = tmp7->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(676)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(676)
				tmp5 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(676)
				tmp5 = false;
			}
			HX_STACK_LINE(676)
			if ((tmp5)){
				HX_STACK_LINE(676)
				::sx::signals::Signal tmp6 = this->__onResize;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(676)
				bool tmp7 = tmp6->__listenersInUse;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(676)
				if ((tmp7)){
					HX_STACK_LINE(676)
					{
						HX_STACK_LINE(676)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(676)
						::sx::signals::Signal tmp8 = this->__onResize;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(676)
						cpp::ArrayBase _g1 = tmp8->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(676)
						while((true)){
							HX_STACK_LINE(676)
							bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(676)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(676)
							if ((tmp10)){
								HX_STACK_LINE(676)
								break;
							}
							HX_STACK_LINE(676)
							Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(676)
							Dynamic listener = tmp11;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(676)
							++(_g);
							HX_STACK_LINE(676)
							::sx::properties::metric::Size tmp12 = changed;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(676)
							::String tmp13 = previousUnits;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(676)
							Float tmp14 = previousValue;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(676)
							listener(hx::ObjectPtr<OBJ_>(this),tmp12,tmp13,tmp14).Cast< Void >();
						}
					}
					HX_STACK_LINE(676)
					false;
				}
				else{
					HX_STACK_LINE(676)
					::sx::signals::Signal tmp8 = this->__onResize;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(676)
					tmp8->__listenersInUse = true;
					HX_STACK_LINE(676)
					{
						HX_STACK_LINE(676)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(676)
						::sx::signals::Signal tmp9 = this->__onResize;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(676)
						cpp::ArrayBase _g1 = tmp9->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(676)
						while((true)){
							HX_STACK_LINE(676)
							bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(676)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(676)
							if ((tmp11)){
								HX_STACK_LINE(676)
								break;
							}
							HX_STACK_LINE(676)
							Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(676)
							Dynamic listener = tmp12;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(676)
							++(_g);
							HX_STACK_LINE(676)
							::sx::properties::metric::Size tmp13 = changed;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(676)
							::String tmp14 = previousUnits;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(676)
							Float tmp15 = previousValue;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(676)
							listener(hx::ObjectPtr<OBJ_>(this),tmp13,tmp14,tmp15).Cast< Void >();
						}
					}
					HX_STACK_LINE(676)
					::sx::signals::Signal tmp9 = this->__onResize;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(676)
					tmp9->__listenersInUse = false;
				}
			}
			HX_STACK_LINE(676)
			bool tmp6 = (changed->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(676)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(676)
			if ((tmp6)){
				HX_STACK_LINE(676)
				::sx::properties::metric::Coordinate tmp8 = this->get_right();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(676)
				::sx::properties::metric::Coordinate tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(676)
				tmp7 = tmp9->selected;
			}
			else{
				HX_STACK_LINE(676)
				tmp7 = false;
			}
			HX_STACK_LINE(676)
			if ((tmp7)){
				HX_STACK_LINE(676)
				bool tmp8 = this->initialized;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(676)
				if ((tmp8)){
					HX_STACK_LINE(676)
					::sx::backend::dummy::Backend tmp9 = this->backend;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(676)
					tmp9->widgetMoved();
				}
			}
			HX_STACK_LINE(676)
			bool tmp8 = (changed->orientation == HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(676)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(676)
			if ((tmp8)){
				HX_STACK_LINE(676)
				::sx::properties::metric::Coordinate tmp10 = this->get_bottom();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(676)
				::sx::properties::metric::Coordinate tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(676)
				tmp9 = tmp11->selected;
			}
			else{
				HX_STACK_LINE(676)
				tmp9 = false;
			}
			HX_STACK_LINE(676)
			if ((tmp9)){
				HX_STACK_LINE(676)
				bool tmp10 = this->initialized;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(676)
				if ((tmp10)){
					HX_STACK_LINE(676)
					::sx::backend::dummy::Backend tmp11 = this->backend;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(676)
					tmp11->widgetMoved();
				}
			}
			HX_STACK_LINE(676)
			(this->__resizeCounter)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Widget_obj,__propertyResized,(void))

Void Widget_obj::__resized( ::sx::properties::metric::Size changed,::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.widgets.Widget","__resized",0x9382f9ce,"sx.widgets.Widget.__resized","sx/widgets/Widget.hx",684,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changed,"changed")
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(685)
		(this->__resizeCounter)++;
		HX_STACK_LINE(686)
		int tmp = this->__resizeCounter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(686)
		bool tmp1 = (tmp > (int)5);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(686)
		if ((tmp1)){
			HX_STACK_LINE(686)
			Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Widget.hx","\x5a","\xa5","\x28","\x07"),686,HX_HCSTRING("sx.widgets.Widget","\xec","\x23","\xeb","\xb7"),HX_HCSTRING("__resized","\xd0","\xac","\xc1","\xe4"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(686)
			::sx::exceptions::LoopedResizeException tmp3 = ::sx::exceptions::LoopedResizeException_obj::__new(null(),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(686)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(688)
		bool tmp2 = this->initialized;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(688)
		if ((tmp2)){
			HX_STACK_LINE(688)
			::sx::backend::dummy::Backend tmp3 = this->backend;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(688)
			tmp3->widgetResized();
		}
		HX_STACK_LINE(690)
		::sx::signals::Signal tmp3 = this->__onResize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(146)
		if ((tmp4)){
			HX_STACK_LINE(690)
			::sx::signals::Signal tmp6 = this->__onResize;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(690)
			::sx::signals::Signal tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(146)
			int tmp8 = tmp7->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			tmp5 = (tmp9 > (int)0);
		}
		else{
			HX_STACK_LINE(146)
			tmp5 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp5)){
			HX_STACK_LINE(690)
			::sx::signals::Signal tmp6 = this->__onResize;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			bool tmp7 = tmp6->__listenersInUse;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			if ((tmp7)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(690)
					::sx::signals::Signal tmp8 = this->__onResize;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(148)
					cpp::ArrayBase _g1 = tmp8->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(148)
					while((true)){
						HX_STACK_LINE(148)
						bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(148)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(148)
						if ((tmp10)){
							HX_STACK_LINE(148)
							break;
						}
						HX_STACK_LINE(148)
						Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(148)
						Dynamic listener = tmp11;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(148)
						++(_g);
						HX_STACK_LINE(690)
						::sx::properties::metric::Size tmp12 = changed;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(690)
						::String tmp13 = previousUnits;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(690)
						Float tmp14 = previousValue;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(148)
						listener(hx::ObjectPtr<OBJ_>(this),tmp12,tmp13,tmp14).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(690)
				::sx::signals::Signal tmp8 = this->__onResize;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(151)
				tmp8->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(690)
					::sx::signals::Signal tmp9 = this->__onResize;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(152)
					cpp::ArrayBase _g1 = tmp9->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(152)
					while((true)){
						HX_STACK_LINE(152)
						bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(152)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(152)
						if ((tmp11)){
							HX_STACK_LINE(152)
							break;
						}
						HX_STACK_LINE(152)
						Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(152)
						Dynamic listener = tmp12;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(152)
						++(_g);
						HX_STACK_LINE(690)
						::sx::properties::metric::Size tmp13 = changed;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(690)
						::String tmp14 = previousUnits;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(690)
						Float tmp15 = previousValue;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(152)
						listener(hx::ObjectPtr<OBJ_>(this),tmp13,tmp14,tmp15).Cast< Void >();
					}
				}
				HX_STACK_LINE(690)
				::sx::signals::Signal tmp9 = this->__onResize;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(153)
				tmp9->__listenersInUse = false;
			}
		}
		HX_STACK_LINE(693)
		bool tmp6 = (changed->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(693)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(693)
		if ((tmp6)){
			HX_STACK_LINE(693)
			::sx::properties::metric::Coordinate tmp8 = this->get_right();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(693)
			::sx::properties::metric::Coordinate tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(693)
			tmp7 = tmp9->selected;
		}
		else{
			HX_STACK_LINE(693)
			tmp7 = false;
		}
		HX_STACK_LINE(693)
		if ((tmp7)){
			HX_STACK_LINE(693)
			bool tmp8 = this->initialized;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(693)
			if ((tmp8)){
				HX_STACK_LINE(693)
				::sx::backend::dummy::Backend tmp9 = this->backend;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(693)
				tmp9->widgetMoved();
			}
		}
		HX_STACK_LINE(694)
		bool tmp8 = (changed->orientation == HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(694)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(694)
		if ((tmp8)){
			HX_STACK_LINE(694)
			::sx::properties::metric::Coordinate tmp10 = this->get_bottom();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(694)
			::sx::properties::metric::Coordinate tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(694)
			tmp9 = tmp11->selected;
		}
		else{
			HX_STACK_LINE(694)
			tmp9 = false;
		}
		HX_STACK_LINE(694)
		if ((tmp9)){
			HX_STACK_LINE(694)
			bool tmp10 = this->initialized;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(694)
			if ((tmp10)){
				HX_STACK_LINE(694)
				::sx::backend::dummy::Backend tmp11 = this->backend;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(694)
				tmp11->widgetMoved();
			}
		}
		HX_STACK_LINE(696)
		(this->__resizeCounter)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Widget_obj,__resized,(void))

Void Widget_obj::__propertyMoved( ::sx::properties::metric::Size changed,::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.widgets.Widget","__propertyMoved",0x356bf7fc,"sx.widgets.Widget.__propertyMoved","sx/widgets/Widget.hx",704,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changed,"changed")
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(705)
		{
			HX_STACK_LINE(705)
			::sx::widgets::Widget tmp = this->get_parent();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(705)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(705)
			if ((tmp1)){
				HX_STACK_LINE(705)
				bool tmp2 = this->__listeningParentResize;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(705)
				if ((tmp2)){
					HX_STACK_LINE(705)
					::sx::properties::metric::Size tmp3 = changed;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(705)
					::sx::properties::metric::Coordinate tmp4 = this->__right;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(705)
					bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(705)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(705)
					if ((tmp5)){
						HX_STACK_LINE(705)
						::sx::properties::metric::Size tmp7 = changed;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(705)
						::sx::properties::metric::Coordinate tmp8 = this->__top;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(705)
						::sx::properties::metric::Coordinate tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(705)
						tmp6 = (tmp7 != tmp9);
					}
					else{
						HX_STACK_LINE(705)
						tmp6 = false;
					}
					HX_STACK_LINE(705)
					if ((tmp6)){
						HX_STACK_LINE(705)
						bool tmp7 = (previousUnits == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(705)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(705)
						if ((tmp7)){
							HX_STACK_LINE(705)
							tmp8 = (previousUnits != changed->units);
						}
						else{
							HX_STACK_LINE(705)
							tmp8 = false;
						}
						HX_STACK_LINE(705)
						if ((tmp8)){
							HX_STACK_LINE(705)
							this->__updateParentResizeListener();
						}
					}
				}
				else{
					HX_STACK_LINE(705)
					bool tmp3 = (changed->units == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(705)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(705)
					bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(705)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(705)
					if ((tmp5)){
						HX_STACK_LINE(705)
						::sx::properties::metric::Size tmp7 = changed;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(705)
						::sx::properties::metric::Coordinate tmp8 = this->__right;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(705)
						::sx::properties::metric::Coordinate tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(705)
						::sx::properties::metric::Coordinate tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(705)
						tmp6 = (tmp7 == tmp10);
					}
					else{
						HX_STACK_LINE(705)
						tmp6 = true;
					}
					HX_STACK_LINE(705)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(705)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(705)
					if ((tmp7)){
						HX_STACK_LINE(705)
						::sx::properties::metric::Size tmp9 = changed;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(705)
						::sx::properties::metric::Coordinate tmp10 = this->__bottom;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(705)
						::sx::properties::metric::Coordinate tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(705)
						tmp8 = (tmp9 == tmp11);
					}
					else{
						HX_STACK_LINE(705)
						tmp8 = true;
					}
					HX_STACK_LINE(705)
					if ((tmp8)){
						HX_STACK_LINE(705)
						this->__listeningParentResize = true;
						HX_STACK_LINE(705)
						::sx::widgets::Widget tmp9 = this->get_parent();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(705)
						::sx::signals::Signal tmp10 = tmp9->get_onResize();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(705)
						Dynamic tmp11 = this->__parentResized_dyn();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(705)
						tmp10->add(tmp11);
					}
				}
			}
		}
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			bool tmp = this->initialized;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(706)
			if ((tmp)){
				HX_STACK_LINE(706)
				::sx::backend::dummy::Backend tmp1 = this->backend;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(706)
				tmp1->widgetMoved();
			}
		}
		HX_STACK_LINE(707)
		::sx::signals::Signal tmp = this->__onMove;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		if ((tmp1)){
			HX_STACK_LINE(707)
			::sx::signals::Signal tmp3 = this->__onMove;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(707)
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
			HX_STACK_LINE(707)
			::sx::signals::Signal tmp3 = this->__onMove;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			bool tmp4 = tmp3->__listenersInUse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			if ((tmp4)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(707)
					::sx::signals::Signal tmp5 = this->__onMove;		HX_STACK_VAR(tmp5,"tmp5");
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
						HX_STACK_LINE(707)
						::sx::properties::metric::Size tmp9 = changed;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(707)
						::String tmp10 = previousUnits;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(707)
						Float tmp11 = previousValue;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(148)
						listener(hx::ObjectPtr<OBJ_>(this),tmp9,tmp10,tmp11).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(707)
				::sx::signals::Signal tmp5 = this->__onMove;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				tmp5->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(707)
					::sx::signals::Signal tmp6 = this->__onMove;		HX_STACK_VAR(tmp6,"tmp6");
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
						HX_STACK_LINE(707)
						::sx::properties::metric::Size tmp10 = changed;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(707)
						::String tmp11 = previousUnits;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(707)
						Float tmp12 = previousValue;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(152)
						listener(hx::ObjectPtr<OBJ_>(this),tmp10,tmp11,tmp12).Cast< Void >();
					}
				}
				HX_STACK_LINE(707)
				::sx::signals::Signal tmp6 = this->__onMove;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				tmp6->__listenersInUse = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Widget_obj,__propertyMoved,(void))

Void Widget_obj::__moved( ){
{
		HX_STACK_FRAME("sx.widgets.Widget","__moved",0x50a79691,"sx.widgets.Widget.__moved","sx/widgets/Widget.hx",715,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_LINE(716)
		bool tmp = this->initialized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(716)
		if ((tmp)){
			HX_STACK_LINE(716)
			::sx::backend::dummy::Backend tmp1 = this->backend;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(716)
			tmp1->widgetMoved();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,__moved,(void))

Void Widget_obj::__originChanged( ){
{
		HX_STACK_FRAME("sx.widgets.Widget","__originChanged",0x5074c00c,"sx.widgets.Widget.__originChanged","sx/widgets/Widget.hx",724,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_LINE(725)
		bool tmp = this->initialized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(725)
		if ((tmp)){
			HX_STACK_LINE(725)
			::sx::backend::dummy::Backend tmp1 = this->backend;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(725)
			tmp1->widgetOriginChanged();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,__originChanged,(void))

Void Widget_obj::__offsetChanged( ){
{
		HX_STACK_FRAME("sx.widgets.Widget","__offsetChanged",0xc7c701ff,"sx.widgets.Widget.__offsetChanged","sx/widgets/Widget.hx",733,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_LINE(734)
		bool tmp = this->initialized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(734)
		if ((tmp)){
			HX_STACK_LINE(734)
			::sx::backend::dummy::Backend tmp1 = this->backend;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(734)
			tmp1->widgetOffsetChanged();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,__offsetChanged,(void))

::sx::properties::metric::Size Widget_obj::__parentWidthProvider( ){
	HX_STACK_FRAME("sx.widgets.Widget","__parentWidthProvider",0x36d3a4ab,"sx.widgets.Widget.__parentWidthProvider","sx/widgets/Widget.hx",742,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(743)
	::sx::widgets::Widget tmp = this->get_parent();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(743)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(743)
	::sx::properties::metric::Size tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(743)
	if ((tmp1)){
		HX_STACK_LINE(743)
		tmp2 = ::sx::properties::metric::_Size::Size_Internal_ZeroSize_obj::instance;
	}
	else{
		HX_STACK_LINE(743)
		::sx::widgets::Widget tmp3 = this->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(743)
		tmp2 = tmp3->get_width();
	}
	HX_STACK_LINE(743)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,__parentWidthProvider,return )

::sx::properties::metric::Size Widget_obj::__parentHeightProvider( ){
	HX_STACK_FRAME("sx.widgets.Widget","__parentHeightProvider",0x41a79264,"sx.widgets.Widget.__parentHeightProvider","sx/widgets/Widget.hx",751,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(752)
	::sx::widgets::Widget tmp = this->get_parent();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(752)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(752)
	::sx::properties::metric::Size tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(752)
	if ((tmp1)){
		HX_STACK_LINE(752)
		tmp2 = ::sx::properties::metric::_Size::Size_Internal_ZeroSize_obj::instance;
	}
	else{
		HX_STACK_LINE(752)
		::sx::widgets::Widget tmp3 = this->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(752)
		tmp2 = tmp3->get_height();
	}
	HX_STACK_LINE(752)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,__parentHeightProvider,return )

Void Widget_obj::__parentResized( ::sx::widgets::Widget parent,::sx::properties::metric::Size changed,::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.widgets.Widget","__parentResized",0x4c483044,"sx.widgets.Widget.__parentResized","sx/widgets/Widget.hx",760,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_ARG(parent,"parent")
		HX_STACK_ARG(changed,"changed")
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(762)
		bool tmp = (changed->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(762)
		if ((tmp)){
			HX_STACK_LINE(763)
			::sx::properties::metric::Coordinate tmp1 = this->get_left();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(763)
			::sx::properties::metric::Coordinate position = tmp1;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(763)
			::sx::properties::metric::Size tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(763)
			::sx::properties::metric::Size size = tmp2;		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(763)
			bool tmp3 = (size->units == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(763)
			if ((tmp3)){
				HX_STACK_LINE(763)
				::String previousUnits1 = HX_HCSTRING("pct","\x21","\x53","\x55","\x00");		HX_STACK_VAR(previousUnits1,"previousUnits1");
				HX_STACK_LINE(763)
				Float tmp4 = size->get_pct();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(763)
				Float previousValue1 = tmp4;		HX_STACK_VAR(previousValue1,"previousValue1");
				HX_STACK_LINE(763)
				(this->__resizeCounter)++;
				HX_STACK_LINE(763)
				int tmp5 = this->__resizeCounter;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(763)
				bool tmp6 = (tmp5 > (int)5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(763)
				if ((tmp6)){
					HX_STACK_LINE(763)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Widget.hx","\x5a","\xa5","\x28","\x07"),686,HX_HCSTRING("sx.widgets.Widget","\xec","\x23","\xeb","\xb7"),HX_HCSTRING("__resized","\xd0","\xac","\xc1","\xe4"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(763)
					::sx::exceptions::LoopedResizeException tmp8 = ::sx::exceptions::LoopedResizeException_obj::__new(null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(763)
					HX_STACK_DO_THROW(tmp8);
				}
				HX_STACK_LINE(763)
				bool tmp7 = this->initialized;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(763)
				if ((tmp7)){
					HX_STACK_LINE(763)
					::sx::backend::dummy::Backend tmp8 = this->backend;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(763)
					tmp8->widgetResized();
				}
				HX_STACK_LINE(763)
				::sx::signals::Signal tmp8 = this->__onResize;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(763)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(763)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(763)
				if ((tmp9)){
					HX_STACK_LINE(763)
					::sx::signals::Signal tmp11 = this->__onResize;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(763)
					::sx::signals::Signal tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(763)
					int tmp13 = tmp12->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(763)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(763)
					tmp10 = (tmp14 > (int)0);
				}
				else{
					HX_STACK_LINE(763)
					tmp10 = false;
				}
				HX_STACK_LINE(763)
				if ((tmp10)){
					HX_STACK_LINE(763)
					::sx::signals::Signal tmp11 = this->__onResize;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(763)
					bool tmp12 = tmp11->__listenersInUse;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(763)
					if ((tmp12)){
						HX_STACK_LINE(763)
						{
							HX_STACK_LINE(763)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(763)
							::sx::signals::Signal tmp13 = this->__onResize;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(763)
							cpp::ArrayBase _g1 = tmp13->__listeners;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(763)
							while((true)){
								HX_STACK_LINE(763)
								bool tmp14 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(763)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(763)
								if ((tmp15)){
									HX_STACK_LINE(763)
									break;
								}
								HX_STACK_LINE(763)
								Dynamic tmp16 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(763)
								Dynamic listener = tmp16;		HX_STACK_VAR(listener,"listener");
								HX_STACK_LINE(763)
								++(_g);
								HX_STACK_LINE(763)
								::sx::properties::metric::Size tmp17 = size;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(763)
								::String tmp18 = previousUnits1;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(763)
								Float tmp19 = previousValue1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(763)
								listener(hx::ObjectPtr<OBJ_>(this),tmp17,tmp18,tmp19).Cast< Void >();
							}
						}
						HX_STACK_LINE(763)
						false;
					}
					else{
						HX_STACK_LINE(763)
						::sx::signals::Signal tmp13 = this->__onResize;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(763)
						tmp13->__listenersInUse = true;
						HX_STACK_LINE(763)
						{
							HX_STACK_LINE(763)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(763)
							::sx::signals::Signal tmp14 = this->__onResize;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(763)
							cpp::ArrayBase _g1 = tmp14->__listeners;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(763)
							while((true)){
								HX_STACK_LINE(763)
								bool tmp15 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(763)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(763)
								if ((tmp16)){
									HX_STACK_LINE(763)
									break;
								}
								HX_STACK_LINE(763)
								Dynamic tmp17 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(763)
								Dynamic listener = tmp17;		HX_STACK_VAR(listener,"listener");
								HX_STACK_LINE(763)
								++(_g);
								HX_STACK_LINE(763)
								::sx::properties::metric::Size tmp18 = size;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(763)
								::String tmp19 = previousUnits1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(763)
								Float tmp20 = previousValue1;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(763)
								listener(hx::ObjectPtr<OBJ_>(this),tmp18,tmp19,tmp20).Cast< Void >();
							}
						}
						HX_STACK_LINE(763)
						::sx::signals::Signal tmp14 = this->__onResize;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(763)
						tmp14->__listenersInUse = false;
					}
				}
				HX_STACK_LINE(763)
				bool tmp11 = (size->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(763)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(763)
				if ((tmp11)){
					HX_STACK_LINE(763)
					::sx::properties::metric::Coordinate tmp13 = this->get_right();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(763)
					::sx::properties::metric::Coordinate tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(763)
					tmp12 = tmp14->selected;
				}
				else{
					HX_STACK_LINE(763)
					tmp12 = false;
				}
				HX_STACK_LINE(763)
				if ((tmp12)){
					HX_STACK_LINE(763)
					bool tmp13 = this->initialized;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(763)
					if ((tmp13)){
						HX_STACK_LINE(763)
						::sx::backend::dummy::Backend tmp14 = this->backend;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(763)
						tmp14->widgetMoved();
					}
				}
				HX_STACK_LINE(763)
				bool tmp13 = (size->orientation == HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(763)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(763)
				if ((tmp13)){
					HX_STACK_LINE(763)
					::sx::properties::metric::Coordinate tmp15 = this->get_bottom();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(763)
					::sx::properties::metric::Coordinate tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(763)
					tmp14 = tmp16->selected;
				}
				else{
					HX_STACK_LINE(763)
					tmp14 = false;
				}
				HX_STACK_LINE(763)
				if ((tmp14)){
					HX_STACK_LINE(763)
					bool tmp15 = this->initialized;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(763)
					if ((tmp15)){
						HX_STACK_LINE(763)
						::sx::backend::dummy::Backend tmp16 = this->backend;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(763)
						tmp16->widgetMoved();
					}
				}
				HX_STACK_LINE(763)
				(this->__resizeCounter)--;
			}
			HX_STACK_LINE(763)
			bool tmp4 = position->selected;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(763)
			if ((tmp4)){
				HX_STACK_LINE(763)
				bool tmp5 = (position->units == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(763)
				if ((tmp5)){
					HX_STACK_LINE(763)
					bool tmp6 = this->initialized;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(763)
					if ((tmp6)){
						HX_STACK_LINE(763)
						::sx::backend::dummy::Backend tmp7 = this->backend;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(763)
						tmp7->widgetMoved();
					}
				}
			}
			else{
				HX_STACK_LINE(763)
				bool tmp5 = this->initialized;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(763)
				if ((tmp5)){
					HX_STACK_LINE(763)
					::sx::backend::dummy::Backend tmp6 = this->backend;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(763)
					tmp6->widgetMoved();
				}
			}
		}
		else{
			HX_STACK_LINE(767)
			::sx::properties::metric::Coordinate tmp1 = this->get_top();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(767)
			::sx::properties::metric::Coordinate position = tmp1;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(767)
			::sx::properties::metric::Size tmp2 = this->get_height();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(767)
			::sx::properties::metric::Size size = tmp2;		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(767)
			bool tmp3 = (size->units == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(767)
			if ((tmp3)){
				HX_STACK_LINE(767)
				::String previousUnits1 = HX_HCSTRING("pct","\x21","\x53","\x55","\x00");		HX_STACK_VAR(previousUnits1,"previousUnits1");
				HX_STACK_LINE(767)
				Float tmp4 = size->get_pct();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(767)
				Float previousValue1 = tmp4;		HX_STACK_VAR(previousValue1,"previousValue1");
				HX_STACK_LINE(767)
				(this->__resizeCounter)++;
				HX_STACK_LINE(767)
				int tmp5 = this->__resizeCounter;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(767)
				bool tmp6 = (tmp5 > (int)5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(767)
				if ((tmp6)){
					HX_STACK_LINE(767)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Widget.hx","\x5a","\xa5","\x28","\x07"),686,HX_HCSTRING("sx.widgets.Widget","\xec","\x23","\xeb","\xb7"),HX_HCSTRING("__resized","\xd0","\xac","\xc1","\xe4"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(767)
					::sx::exceptions::LoopedResizeException tmp8 = ::sx::exceptions::LoopedResizeException_obj::__new(null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(767)
					HX_STACK_DO_THROW(tmp8);
				}
				HX_STACK_LINE(767)
				bool tmp7 = this->initialized;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(767)
				if ((tmp7)){
					HX_STACK_LINE(767)
					::sx::backend::dummy::Backend tmp8 = this->backend;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(767)
					tmp8->widgetResized();
				}
				HX_STACK_LINE(767)
				::sx::signals::Signal tmp8 = this->__onResize;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(767)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(767)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(767)
				if ((tmp9)){
					HX_STACK_LINE(767)
					::sx::signals::Signal tmp11 = this->__onResize;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(767)
					::sx::signals::Signal tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(767)
					int tmp13 = tmp12->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(767)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(767)
					tmp10 = (tmp14 > (int)0);
				}
				else{
					HX_STACK_LINE(767)
					tmp10 = false;
				}
				HX_STACK_LINE(767)
				if ((tmp10)){
					HX_STACK_LINE(767)
					::sx::signals::Signal tmp11 = this->__onResize;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(767)
					bool tmp12 = tmp11->__listenersInUse;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(767)
					if ((tmp12)){
						HX_STACK_LINE(767)
						{
							HX_STACK_LINE(767)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(767)
							::sx::signals::Signal tmp13 = this->__onResize;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(767)
							cpp::ArrayBase _g1 = tmp13->__listeners;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(767)
							while((true)){
								HX_STACK_LINE(767)
								bool tmp14 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(767)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(767)
								if ((tmp15)){
									HX_STACK_LINE(767)
									break;
								}
								HX_STACK_LINE(767)
								Dynamic tmp16 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(767)
								Dynamic listener = tmp16;		HX_STACK_VAR(listener,"listener");
								HX_STACK_LINE(767)
								++(_g);
								HX_STACK_LINE(767)
								::sx::properties::metric::Size tmp17 = size;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(767)
								::String tmp18 = previousUnits1;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(767)
								Float tmp19 = previousValue1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(767)
								listener(hx::ObjectPtr<OBJ_>(this),tmp17,tmp18,tmp19).Cast< Void >();
							}
						}
						HX_STACK_LINE(767)
						false;
					}
					else{
						HX_STACK_LINE(767)
						::sx::signals::Signal tmp13 = this->__onResize;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(767)
						tmp13->__listenersInUse = true;
						HX_STACK_LINE(767)
						{
							HX_STACK_LINE(767)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(767)
							::sx::signals::Signal tmp14 = this->__onResize;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(767)
							cpp::ArrayBase _g1 = tmp14->__listeners;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(767)
							while((true)){
								HX_STACK_LINE(767)
								bool tmp15 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(767)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(767)
								if ((tmp16)){
									HX_STACK_LINE(767)
									break;
								}
								HX_STACK_LINE(767)
								Dynamic tmp17 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(767)
								Dynamic listener = tmp17;		HX_STACK_VAR(listener,"listener");
								HX_STACK_LINE(767)
								++(_g);
								HX_STACK_LINE(767)
								::sx::properties::metric::Size tmp18 = size;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(767)
								::String tmp19 = previousUnits1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(767)
								Float tmp20 = previousValue1;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(767)
								listener(hx::ObjectPtr<OBJ_>(this),tmp18,tmp19,tmp20).Cast< Void >();
							}
						}
						HX_STACK_LINE(767)
						::sx::signals::Signal tmp14 = this->__onResize;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(767)
						tmp14->__listenersInUse = false;
					}
				}
				HX_STACK_LINE(767)
				bool tmp11 = (size->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(767)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(767)
				if ((tmp11)){
					HX_STACK_LINE(767)
					::sx::properties::metric::Coordinate tmp13 = this->get_right();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(767)
					::sx::properties::metric::Coordinate tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(767)
					tmp12 = tmp14->selected;
				}
				else{
					HX_STACK_LINE(767)
					tmp12 = false;
				}
				HX_STACK_LINE(767)
				if ((tmp12)){
					HX_STACK_LINE(767)
					bool tmp13 = this->initialized;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(767)
					if ((tmp13)){
						HX_STACK_LINE(767)
						::sx::backend::dummy::Backend tmp14 = this->backend;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(767)
						tmp14->widgetMoved();
					}
				}
				HX_STACK_LINE(767)
				bool tmp13 = (size->orientation == HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(767)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(767)
				if ((tmp13)){
					HX_STACK_LINE(767)
					::sx::properties::metric::Coordinate tmp15 = this->get_bottom();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(767)
					::sx::properties::metric::Coordinate tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(767)
					tmp14 = tmp16->selected;
				}
				else{
					HX_STACK_LINE(767)
					tmp14 = false;
				}
				HX_STACK_LINE(767)
				if ((tmp14)){
					HX_STACK_LINE(767)
					bool tmp15 = this->initialized;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(767)
					if ((tmp15)){
						HX_STACK_LINE(767)
						::sx::backend::dummy::Backend tmp16 = this->backend;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(767)
						tmp16->widgetMoved();
					}
				}
				HX_STACK_LINE(767)
				(this->__resizeCounter)--;
			}
			HX_STACK_LINE(767)
			bool tmp4 = position->selected;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(767)
			if ((tmp4)){
				HX_STACK_LINE(767)
				bool tmp5 = (position->units == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(767)
				if ((tmp5)){
					HX_STACK_LINE(767)
					bool tmp6 = this->initialized;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(767)
					if ((tmp6)){
						HX_STACK_LINE(767)
						::sx::backend::dummy::Backend tmp7 = this->backend;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(767)
						tmp7->widgetMoved();
					}
				}
			}
			else{
				HX_STACK_LINE(767)
				bool tmp5 = this->initialized;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(767)
				if ((tmp5)){
					HX_STACK_LINE(767)
					::sx::backend::dummy::Backend tmp6 = this->backend;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(767)
					tmp6->widgetMoved();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Widget_obj,__parentResized,(void))

Void Widget_obj::__reactParentResize( ::sx::properties::metric::Coordinate position,::sx::properties::metric::Size size){
{
		HX_STACK_FRAME("sx.widgets.Widget","__reactParentResize",0xc2999c3b,"sx.widgets.Widget.__reactParentResize","sx/widgets/Widget.hx",779,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(781)
		bool tmp = (size->units == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(781)
		if ((tmp)){
			HX_STACK_LINE(782)
			::String previousUnits = HX_HCSTRING("pct","\x21","\x53","\x55","\x00");		HX_STACK_VAR(previousUnits,"previousUnits");
			HX_STACK_LINE(782)
			Float tmp1 = size->get_pct();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(782)
			Float previousValue = tmp1;		HX_STACK_VAR(previousValue,"previousValue");
			HX_STACK_LINE(782)
			(this->__resizeCounter)++;
			HX_STACK_LINE(782)
			int tmp2 = this->__resizeCounter;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(782)
			bool tmp3 = (tmp2 > (int)5);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(782)
			if ((tmp3)){
				HX_STACK_LINE(782)
				Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Widget.hx","\x5a","\xa5","\x28","\x07"),686,HX_HCSTRING("sx.widgets.Widget","\xec","\x23","\xeb","\xb7"),HX_HCSTRING("__resized","\xd0","\xac","\xc1","\xe4"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(782)
				::sx::exceptions::LoopedResizeException tmp5 = ::sx::exceptions::LoopedResizeException_obj::__new(null(),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(782)
				HX_STACK_DO_THROW(tmp5);
			}
			HX_STACK_LINE(782)
			bool tmp4 = this->initialized;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(782)
			if ((tmp4)){
				HX_STACK_LINE(782)
				::sx::backend::dummy::Backend tmp5 = this->backend;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(782)
				tmp5->widgetResized();
			}
			HX_STACK_LINE(782)
			::sx::signals::Signal tmp5 = this->__onResize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(782)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(782)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(782)
			if ((tmp6)){
				HX_STACK_LINE(782)
				::sx::signals::Signal tmp8 = this->__onResize;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(782)
				::sx::signals::Signal tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(782)
				int tmp10 = tmp9->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(782)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(782)
				tmp7 = (tmp11 > (int)0);
			}
			else{
				HX_STACK_LINE(782)
				tmp7 = false;
			}
			HX_STACK_LINE(782)
			if ((tmp7)){
				HX_STACK_LINE(782)
				::sx::signals::Signal tmp8 = this->__onResize;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(782)
				bool tmp9 = tmp8->__listenersInUse;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(782)
				if ((tmp9)){
					HX_STACK_LINE(782)
					{
						HX_STACK_LINE(782)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(782)
						::sx::signals::Signal tmp10 = this->__onResize;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(782)
						cpp::ArrayBase _g1 = tmp10->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(782)
						while((true)){
							HX_STACK_LINE(782)
							bool tmp11 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(782)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(782)
							if ((tmp12)){
								HX_STACK_LINE(782)
								break;
							}
							HX_STACK_LINE(782)
							Dynamic tmp13 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(782)
							Dynamic listener = tmp13;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(782)
							++(_g);
							HX_STACK_LINE(782)
							::sx::properties::metric::Size tmp14 = size;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(782)
							::String tmp15 = previousUnits;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(782)
							Float tmp16 = previousValue;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(782)
							listener(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16).Cast< Void >();
						}
					}
					HX_STACK_LINE(782)
					false;
				}
				else{
					HX_STACK_LINE(782)
					::sx::signals::Signal tmp10 = this->__onResize;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(782)
					tmp10->__listenersInUse = true;
					HX_STACK_LINE(782)
					{
						HX_STACK_LINE(782)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(782)
						::sx::signals::Signal tmp11 = this->__onResize;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(782)
						cpp::ArrayBase _g1 = tmp11->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(782)
						while((true)){
							HX_STACK_LINE(782)
							bool tmp12 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(782)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(782)
							if ((tmp13)){
								HX_STACK_LINE(782)
								break;
							}
							HX_STACK_LINE(782)
							Dynamic tmp14 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(782)
							Dynamic listener = tmp14;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(782)
							++(_g);
							HX_STACK_LINE(782)
							::sx::properties::metric::Size tmp15 = size;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(782)
							::String tmp16 = previousUnits;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(782)
							Float tmp17 = previousValue;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(782)
							listener(hx::ObjectPtr<OBJ_>(this),tmp15,tmp16,tmp17).Cast< Void >();
						}
					}
					HX_STACK_LINE(782)
					::sx::signals::Signal tmp11 = this->__onResize;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(782)
					tmp11->__listenersInUse = false;
				}
			}
			HX_STACK_LINE(782)
			bool tmp8 = (size->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(782)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(782)
			if ((tmp8)){
				HX_STACK_LINE(782)
				::sx::properties::metric::Coordinate tmp10 = this->get_right();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(782)
				::sx::properties::metric::Coordinate tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(782)
				tmp9 = tmp11->selected;
			}
			else{
				HX_STACK_LINE(782)
				tmp9 = false;
			}
			HX_STACK_LINE(782)
			if ((tmp9)){
				HX_STACK_LINE(782)
				bool tmp10 = this->initialized;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(782)
				if ((tmp10)){
					HX_STACK_LINE(782)
					::sx::backend::dummy::Backend tmp11 = this->backend;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(782)
					tmp11->widgetMoved();
				}
			}
			HX_STACK_LINE(782)
			bool tmp10 = (size->orientation == HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(782)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(782)
			if ((tmp10)){
				HX_STACK_LINE(782)
				::sx::properties::metric::Coordinate tmp12 = this->get_bottom();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(782)
				::sx::properties::metric::Coordinate tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(782)
				tmp11 = tmp13->selected;
			}
			else{
				HX_STACK_LINE(782)
				tmp11 = false;
			}
			HX_STACK_LINE(782)
			if ((tmp11)){
				HX_STACK_LINE(782)
				bool tmp12 = this->initialized;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(782)
				if ((tmp12)){
					HX_STACK_LINE(782)
					::sx::backend::dummy::Backend tmp13 = this->backend;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(782)
					tmp13->widgetMoved();
				}
			}
			HX_STACK_LINE(782)
			(this->__resizeCounter)--;
		}
		HX_STACK_LINE(786)
		bool tmp1 = position->selected;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(786)
		if ((tmp1)){
			HX_STACK_LINE(787)
			bool tmp2 = (position->units == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(787)
			if ((tmp2)){
				HX_STACK_LINE(787)
				bool tmp3 = this->initialized;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(787)
				if ((tmp3)){
					HX_STACK_LINE(787)
					::sx::backend::dummy::Backend tmp4 = this->backend;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(787)
					tmp4->widgetMoved();
				}
			}
		}
		else{
			HX_STACK_LINE(790)
			bool tmp2 = this->initialized;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(790)
			if ((tmp2)){
				HX_STACK_LINE(790)
				::sx::backend::dummy::Backend tmp3 = this->backend;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(790)
				tmp3->widgetMoved();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Widget_obj,__reactParentResize,(void))

Void Widget_obj::__affectParentResizeListener( ::sx::properties::metric::Size changed,::String previousUnits){
{
		HX_STACK_FRAME("sx.widgets.Widget","__affectParentResizeListener",0x9cbb3be9,"sx.widgets.Widget.__affectParentResizeListener","sx/widgets/Widget.hx",799,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changed,"changed")
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_LINE(800)
		::sx::widgets::Widget tmp = this->get_parent();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(800)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(800)
		if ((tmp1)){
			HX_STACK_LINE(801)
			bool tmp2 = this->__listeningParentResize;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(801)
			if ((tmp2)){
				HX_STACK_LINE(803)
				::sx::properties::metric::Size tmp3 = changed;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(803)
				::sx::properties::metric::Coordinate tmp4 = this->__right;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(803)
				bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(803)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(803)
				if ((tmp5)){
					HX_STACK_LINE(803)
					::sx::properties::metric::Size tmp7 = changed;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(803)
					::sx::properties::metric::Coordinate tmp8 = this->__top;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(803)
					::sx::properties::metric::Coordinate tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(803)
					tmp6 = (tmp7 != tmp9);
				}
				else{
					HX_STACK_LINE(803)
					tmp6 = false;
				}
				HX_STACK_LINE(803)
				if ((tmp6)){
					HX_STACK_LINE(805)
					bool tmp7 = (previousUnits == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(805)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(805)
					if ((tmp7)){
						HX_STACK_LINE(805)
						tmp8 = (previousUnits != changed->units);
					}
					else{
						HX_STACK_LINE(805)
						tmp8 = false;
					}
					HX_STACK_LINE(805)
					if ((tmp8)){
						HX_STACK_LINE(806)
						this->__updateParentResizeListener();
					}
				}
			}
			else{
				HX_STACK_LINE(810)
				bool tmp3 = (changed->units == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(810)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(810)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(810)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(810)
				if ((tmp5)){
					HX_STACK_LINE(810)
					::sx::properties::metric::Size tmp7 = changed;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(810)
					::sx::properties::metric::Coordinate tmp8 = this->__right;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(810)
					::sx::properties::metric::Coordinate tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(810)
					::sx::properties::metric::Coordinate tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(810)
					tmp6 = (tmp7 == tmp10);
				}
				else{
					HX_STACK_LINE(810)
					tmp6 = true;
				}
				HX_STACK_LINE(810)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(810)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(810)
				if ((tmp7)){
					HX_STACK_LINE(810)
					::sx::properties::metric::Size tmp9 = changed;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(810)
					::sx::properties::metric::Coordinate tmp10 = this->__bottom;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(810)
					::sx::properties::metric::Coordinate tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(810)
					tmp8 = (tmp9 == tmp11);
				}
				else{
					HX_STACK_LINE(810)
					tmp8 = true;
				}
				HX_STACK_LINE(810)
				if ((tmp8)){
					HX_STACK_LINE(811)
					this->__listeningParentResize = true;
					HX_STACK_LINE(812)
					::sx::widgets::Widget tmp9 = this->get_parent();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(812)
					::sx::signals::Signal tmp10 = tmp9->get_onResize();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(812)
					Dynamic tmp11 = this->__parentResized_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(812)
					tmp10->add(tmp11);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Widget_obj,__affectParentResizeListener,(void))

Void Widget_obj::__updateParentResizeListener( ){
{
		HX_STACK_FRAME("sx.widgets.Widget","__updateParentResizeListener",0x87de8add,"sx.widgets.Widget.__updateParentResizeListener","sx/widgets/Widget.hx",823,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_LINE(824)
		::sx::properties::metric::Size tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(824)
		::String tmp1 = tmp->units;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(824)
		bool tmp2 = (tmp1 == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(824)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(824)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(824)
		if ((tmp3)){
			HX_STACK_LINE(824)
			::sx::properties::metric::Size tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(824)
			::sx::properties::metric::Size tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(824)
			::String tmp7 = tmp6->units;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(824)
			tmp4 = (tmp7 == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));
		}
		else{
			HX_STACK_LINE(824)
			tmp4 = true;
		}
		HX_STACK_LINE(824)
		bool size = tmp4;		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(825)
		bool tmp5 = ::sx::tools::WidgetTools_obj::positionDependsOnParent(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(825)
		bool position = tmp5;		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(827)
		bool tmp6 = size;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(827)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(827)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(827)
		if ((tmp7)){
			HX_STACK_LINE(827)
			tmp8 = position;
		}
		else{
			HX_STACK_LINE(827)
			tmp8 = true;
		}
		HX_STACK_LINE(827)
		if ((tmp8)){
			HX_STACK_LINE(828)
			this->__listeningParentResize = true;
			HX_STACK_LINE(829)
			::sx::widgets::Widget tmp9 = this->get_parent();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(829)
			::sx::signals::Signal tmp10 = tmp9->get_onResize();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(829)
			Dynamic tmp11 = this->__parentResized_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(829)
			tmp10->add(tmp11);
		}
		else{
			HX_STACK_LINE(830)
			bool tmp9 = size;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(830)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(830)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(830)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(830)
			if ((tmp11)){
				HX_STACK_LINE(830)
				bool tmp13 = position;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(830)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(830)
				tmp12 = !(tmp14);
			}
			else{
				HX_STACK_LINE(830)
				tmp12 = false;
			}
			HX_STACK_LINE(830)
			if ((tmp12)){
				HX_STACK_LINE(831)
				this->__listeningParentResize = false;
				HX_STACK_LINE(832)
				::sx::widgets::Widget tmp13 = this->get_parent();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(832)
				::sx::signals::Signal tmp14 = tmp13->get_onResize();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(832)
				Dynamic tmp15 = this->__parentResized_dyn();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(832)
				tmp14->remove(tmp15);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,__updateParentResizeListener,(void))

Void Widget_obj::__initializeSelf( ){
{
		HX_STACK_FRAME("sx.widgets.Widget","__initializeSelf",0x596ccade,"sx.widgets.Widget.__initializeSelf","sx/widgets/Widget.hx",841,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_LINE(842)
		::sx::properties::metric::Offset tmp = this->__offset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(842)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(842)
		if ((tmp1)){
			HX_STACK_LINE(842)
			::sx::backend::dummy::Backend tmp2 = this->backend;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(842)
			tmp2->widgetOffsetChanged();
		}
		HX_STACK_LINE(843)
		::sx::properties::metric::Offset tmp2 = this->__origin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(843)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(843)
		if ((tmp3)){
			HX_STACK_LINE(843)
			::sx::backend::dummy::Backend tmp4 = this->backend;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(843)
			tmp4->widgetOriginChanged();
		}
		HX_STACK_LINE(844)
		::sx::properties::metric::Size tmp4 = this->__width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(844)
		Float tmp5 = tmp4->__value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(844)
		bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(844)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(844)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(844)
		if ((tmp7)){
			HX_STACK_LINE(844)
			::sx::properties::metric::Size tmp9 = this->__height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(844)
			::sx::properties::metric::Size tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(844)
			Float tmp11 = tmp10->__value;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(844)
			bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(844)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(844)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(844)
			tmp8 = !(tmp14);
		}
		else{
			HX_STACK_LINE(844)
			tmp8 = true;
		}
		HX_STACK_LINE(844)
		if ((tmp8)){
			HX_STACK_LINE(845)
			::sx::backend::dummy::Backend tmp9 = this->backend;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(845)
			tmp9->widgetResized();
		}
		HX_STACK_LINE(847)
		::sx::properties::metric::Coordinate tmp9 = this->__left;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(847)
		Float tmp10 = tmp9->__value;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(847)
		bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(847)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(847)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(847)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(847)
		if ((tmp13)){
			HX_STACK_LINE(847)
			::sx::properties::metric::Coordinate tmp15 = this->__right;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(847)
			::sx::properties::metric::Coordinate tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(847)
			::sx::properties::metric::Coordinate tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(847)
			tmp14 = tmp17->selected;
		}
		else{
			HX_STACK_LINE(847)
			tmp14 = true;
		}
		HX_STACK_LINE(847)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(847)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(847)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(847)
		if ((tmp16)){
			HX_STACK_LINE(847)
			::sx::properties::metric::Coordinate tmp18 = this->__top;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(847)
			::sx::properties::metric::Coordinate tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(847)
			::sx::properties::metric::Coordinate tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(847)
			Float tmp21 = tmp20->__value;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(847)
			tmp17 = (tmp21 != (int)0);
		}
		else{
			HX_STACK_LINE(847)
			tmp17 = true;
		}
		HX_STACK_LINE(847)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(847)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(847)
		if ((tmp18)){
			HX_STACK_LINE(847)
			::sx::properties::metric::Coordinate tmp20 = this->__bottom;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(847)
			::sx::properties::metric::Coordinate tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(847)
			tmp19 = tmp21->selected;
		}
		else{
			HX_STACK_LINE(847)
			tmp19 = true;
		}
		HX_STACK_LINE(847)
		if ((tmp19)){
			HX_STACK_LINE(848)
			::sx::backend::dummy::Backend tmp20 = this->backend;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(848)
			tmp20->widgetMoved();
		}
		HX_STACK_LINE(850)
		Float tmp20 = this->rotation;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(850)
		bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(850)
		if ((tmp21)){
			HX_STACK_LINE(850)
			::sx::backend::dummy::Backend tmp22 = this->backend;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(850)
			tmp22->widgetRotated();
		}
		HX_STACK_LINE(851)
		Float tmp22 = this->scaleX;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(851)
		bool tmp23 = (tmp22 != (int)1);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(851)
		if ((tmp23)){
			HX_STACK_LINE(851)
			::sx::backend::dummy::Backend tmp24 = this->backend;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(851)
			tmp24->widgetScaledX();
		}
		HX_STACK_LINE(852)
		Float tmp24 = this->scaleY;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(852)
		bool tmp25 = (tmp24 != (int)1);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(852)
		if ((tmp25)){
			HX_STACK_LINE(852)
			::sx::backend::dummy::Backend tmp26 = this->backend;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(852)
			tmp26->widgetScaledY();
		}
		HX_STACK_LINE(853)
		Float tmp26 = this->alpha;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(853)
		bool tmp27 = (tmp26 != (int)1);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(853)
		if ((tmp27)){
			HX_STACK_LINE(853)
			::sx::backend::dummy::Backend tmp28 = this->backend;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(853)
			tmp28->widgetAlphaChanged();
		}
		HX_STACK_LINE(854)
		bool tmp28 = this->visible;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(854)
		bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(854)
		if ((tmp29)){
			HX_STACK_LINE(854)
			::sx::backend::dummy::Backend tmp30 = this->backend;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(854)
			tmp30->widgetVisibilityChanged();
		}
		HX_STACK_LINE(855)
		bool tmp30 = this->overflow;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(855)
		bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(855)
		if ((tmp31)){
			HX_STACK_LINE(855)
			::sx::backend::dummy::Backend tmp32 = this->backend;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(855)
			tmp32->widgetOverflowChanged();
		}
		HX_STACK_LINE(856)
		::sx::skins::base::SkinBase tmp32 = this->__skin;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(856)
		bool tmp33 = (tmp32 != null());		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(856)
		if ((tmp33)){
			HX_STACK_LINE(857)
			::sx::skins::base::SkinBase tmp34 = this->get_skin();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(857)
			tmp34->refresh();
			HX_STACK_LINE(858)
			::sx::backend::dummy::Backend tmp35 = this->backend;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(858)
			tmp35->widgetSkinChanged();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,__initializeSelf,(void))

Void Widget_obj::__initializeChildren( ){
{
		HX_STACK_FRAME("sx.widgets.Widget","__initializeChildren",0xb0ed6991,"sx.widgets.Widget.__initializeChildren","sx/widgets/Widget.hx",869,0x5e3cc110)
		HX_STACK_THIS(this)
		HX_STACK_LINE(869)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(869)
		int tmp = this->numChildren;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(869)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(869)
		while((true)){
			HX_STACK_LINE(869)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(869)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(869)
			if ((tmp2)){
				HX_STACK_LINE(869)
				break;
			}
			HX_STACK_LINE(869)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(869)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(870)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(870)
			::sx::widgets::Widget tmp5 = this->getChildAt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(870)
			tmp5->initialize();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,__initializeChildren,(void))

Float Widget_obj::set_rotation( Float rotation){
	HX_STACK_FRAME("sx.widgets.Widget","set_rotation",0xf6937a7d,"sx.widgets.Widget.set_rotation","sx/widgets/Widget.hx",879,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_LINE(880)
	this->rotation = rotation;
	HX_STACK_LINE(881)
	bool tmp = this->initialized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(881)
	if ((tmp)){
		HX_STACK_LINE(881)
		::sx::backend::dummy::Backend tmp1 = this->backend;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(881)
		tmp1->widgetRotated();
	}
	HX_STACK_LINE(883)
	Float tmp1 = rotation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(883)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_rotation,return )

Float Widget_obj::set_scaleX( Float scaleX){
	HX_STACK_FRAME("sx.widgets.Widget","set_scaleX",0x6a8d0a0d,"sx.widgets.Widget.set_scaleX","sx/widgets/Widget.hx",891,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scaleX,"scaleX")
	HX_STACK_LINE(892)
	this->scaleX = scaleX;
	HX_STACK_LINE(893)
	bool tmp = this->initialized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(893)
	if ((tmp)){
		HX_STACK_LINE(893)
		::sx::backend::dummy::Backend tmp1 = this->backend;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(893)
		tmp1->widgetScaledX();
	}
	HX_STACK_LINE(895)
	Float tmp1 = scaleX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(895)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_scaleX,return )

Float Widget_obj::set_scaleY( Float scaleY){
	HX_STACK_FRAME("sx.widgets.Widget","set_scaleY",0x6a8d0a0e,"sx.widgets.Widget.set_scaleY","sx/widgets/Widget.hx",903,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scaleY,"scaleY")
	HX_STACK_LINE(904)
	this->scaleY = scaleY;
	HX_STACK_LINE(905)
	bool tmp = this->initialized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(905)
	if ((tmp)){
		HX_STACK_LINE(905)
		::sx::backend::dummy::Backend tmp1 = this->backend;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(905)
		tmp1->widgetScaledY();
	}
	HX_STACK_LINE(907)
	Float tmp1 = scaleY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(907)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_scaleY,return )

Float Widget_obj::set_alpha( Float alpha){
	HX_STACK_FRAME("sx.widgets.Widget","set_alpha",0xf7523cbf,"sx.widgets.Widget.set_alpha","sx/widgets/Widget.hx",915,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_LINE(916)
	this->alpha = alpha;
	HX_STACK_LINE(917)
	bool tmp = this->initialized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(917)
	if ((tmp)){
		HX_STACK_LINE(917)
		::sx::backend::dummy::Backend tmp1 = this->backend;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(917)
		tmp1->widgetAlphaChanged();
	}
	HX_STACK_LINE(919)
	Float tmp1 = alpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(919)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_alpha,return )

bool Widget_obj::set_visible( bool value){
	HX_STACK_FRAME("sx.widgets.Widget","set_visible",0x0ef8e813,"sx.widgets.Widget.set_visible","sx/widgets/Widget.hx",927,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(928)
	bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(928)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(928)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(928)
	if ((tmp2)){
		HX_STACK_LINE(929)
		this->visible = value;
		HX_STACK_LINE(930)
		bool tmp3 = this->initialized;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(930)
		if ((tmp3)){
			HX_STACK_LINE(930)
			::sx::backend::dummy::Backend tmp4 = this->backend;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(930)
			tmp4->widgetVisibilityChanged();
		}
		HX_STACK_LINE(932)
		::sx::widgets::Widget tmp4 = this->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(932)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(932)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(932)
		if ((tmp5)){
			HX_STACK_LINE(932)
			::sx::widgets::Widget tmp7 = this->get_parent();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(932)
			::sx::widgets::Widget tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(932)
			tmp6 = tmp8->initialized;
		}
		else{
			HX_STACK_LINE(932)
			tmp6 = false;
		}
		HX_STACK_LINE(932)
		if ((tmp6)){
			HX_STACK_LINE(933)
			::sx::widgets::Widget tmp7 = this->get_parent();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(933)
			::sx::layout::Layout tmp8 = tmp7->get_layout();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(933)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(933)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(933)
			if ((tmp9)){
				HX_STACK_LINE(933)
				::sx::widgets::Widget tmp11 = this->get_parent();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(933)
				::sx::widgets::Widget tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(933)
				::sx::layout::Layout tmp13 = tmp12->get_layout();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(933)
				::sx::layout::Layout tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(933)
				tmp10 = tmp14->autoArrange;
			}
			else{
				HX_STACK_LINE(933)
				tmp10 = false;
			}
			HX_STACK_LINE(933)
			if ((tmp10)){
				HX_STACK_LINE(934)
				::sx::widgets::Widget tmp11 = this->get_parent();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(934)
				::sx::layout::Layout tmp12 = tmp11->get_layout();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(934)
				tmp12->arrangeChildren();
			}
		}
	}
	HX_STACK_LINE(939)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(939)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_visible,return )

::sx::skins::base::SkinBase Widget_obj::set_skin( ::sx::skins::base::SkinBase value){
	HX_STACK_FRAME("sx.widgets.Widget","set_skin",0x478d083c,"sx.widgets.Widget.set_skin","sx/widgets/Widget.hx",947,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(948)
	::sx::skins::base::SkinBase tmp = this->__skin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(948)
	::sx::skins::base::SkinBase tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(948)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(948)
	if ((tmp2)){
		HX_STACK_LINE(948)
		::sx::skins::base::SkinBase tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(948)
		return tmp3;
	}
	HX_STACK_LINE(950)
	::sx::skins::base::SkinBase tmp3 = this->__skin;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(950)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(950)
	if ((tmp4)){
		HX_STACK_LINE(951)
		::sx::skins::base::SkinBase tmp5 = this->__skin;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(951)
		tmp5->removed();
		HX_STACK_LINE(952)
		bool tmp6 = this->initialized;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(952)
		if ((tmp6)){
			HX_STACK_LINE(952)
			::sx::backend::dummy::Backend tmp7 = this->backend;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(952)
			tmp7->widgetSkinChanged();
		}
	}
	HX_STACK_LINE(955)
	this->__skin = value;
	HX_STACK_LINE(956)
	::sx::skins::base::SkinBase tmp5 = this->__skin;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(956)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(956)
	if ((tmp6)){
		HX_STACK_LINE(957)
		::sx::skins::base::SkinBase tmp7 = this->__skin;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(957)
		tmp7->usedBy(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(958)
		bool tmp8 = this->initialized;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(958)
		if ((tmp8)){
			HX_STACK_LINE(958)
			::sx::backend::dummy::Backend tmp9 = this->backend;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(958)
			tmp9->widgetSkinChanged();
		}
	}
	HX_STACK_LINE(961)
	::sx::skins::base::SkinBase tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(961)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_skin,return )

::sx::layout::Layout Widget_obj::set_layout( ::sx::layout::Layout value){
	HX_STACK_FRAME("sx.widgets.Widget","set_layout",0x871fce29,"sx.widgets.Widget.set_layout","sx/widgets/Widget.hx",969,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(970)
	::sx::layout::Layout tmp = this->__layout;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(970)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(970)
	if ((tmp1)){
		HX_STACK_LINE(970)
		::sx::layout::Layout tmp2 = this->__layout;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(970)
		tmp2->removed();
	}
	HX_STACK_LINE(971)
	this->__layout = value;
	HX_STACK_LINE(972)
	::sx::layout::Layout tmp2 = this->__layout;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(972)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(972)
	if ((tmp3)){
		HX_STACK_LINE(972)
		::sx::layout::Layout tmp4 = this->__layout;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(972)
		tmp4->usedBy(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(974)
	::sx::layout::Layout tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(974)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_layout,return )

::String Widget_obj::set_style( ::String value){
	HX_STACK_FRAME("sx.widgets.Widget","set_style",0x59d93a92,"sx.widgets.Widget.set_style","sx/widgets/Widget.hx",982,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(983)
	this->style = value;
	HX_STACK_LINE(984)
	{
		HX_STACK_LINE(984)
		::String tmp = this->style;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(984)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(984)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(984)
		if ((tmp1)){
			HX_STACK_LINE(984)
			::sx::themes::Theme tmp3 = ::sx::Sx_obj::theme;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(984)
			::sx::themes::Theme tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(984)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(984)
			tmp2 = false;
		}
		HX_STACK_LINE(984)
		if ((tmp2)){
			HX_STACK_LINE(984)
			::sx::themes::Theme tmp3 = ::sx::Sx_obj::theme;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(984)
			tmp3->apply(hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(986)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(986)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_style,return )

::sx::properties::metric::Offset Widget_obj::get_origin( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_origin",0x75ea9af1,"sx.widgets.Widget.get_origin","sx/widgets/Widget.hx",994,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(995)
	::sx::properties::metric::Offset tmp = this->__origin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(995)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(995)
	if ((tmp1)){
		HX_STACK_LINE(996)
		Dynamic tmp2 = this->get_width_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(996)
		Dynamic tmp3 = this->get_height_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(996)
		::sx::properties::metric::Offset tmp4 = ::sx::properties::metric::Offset_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(996)
		this->__origin = tmp4;
		HX_STACK_LINE(997)
		::sx::properties::metric::Offset tmp5 = this->__origin;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(997)
		Dynamic tmp6 = this->__originChanged_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(997)
		tmp5->onChange->add(tmp6);
	}
	HX_STACK_LINE(1000)
	::sx::properties::metric::Offset tmp2 = this->__origin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1000)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_origin,return )

::sx::properties::metric::Offset Widget_obj::get_offset( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_offset",0x8b29189e,"sx.widgets.Widget.get_offset","sx/widgets/Widget.hx",1008,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1009)
	::sx::properties::metric::Offset tmp = this->__offset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1009)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1009)
	if ((tmp1)){
		HX_STACK_LINE(1010)
		Dynamic tmp2 = this->get_width_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1010)
		Dynamic tmp3 = this->get_height_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1010)
		::sx::properties::metric::Offset tmp4 = ::sx::properties::metric::Offset_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1010)
		this->__offset = tmp4;
		HX_STACK_LINE(1011)
		::sx::properties::metric::Offset tmp5 = this->__offset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1011)
		Dynamic tmp6 = this->__offsetChanged_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1011)
		tmp5->onChange->add(tmp6);
	}
	HX_STACK_LINE(1014)
	::sx::properties::metric::Offset tmp2 = this->__offset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1014)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_offset,return )

::sx::widgets::Widget Widget_obj::set___parent( ::sx::widgets::Widget value){
	HX_STACK_FRAME("sx.widgets.Widget","set___parent",0x83baad89,"sx.widgets.Widget.set___parent","sx/widgets/Widget.hx",1022,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1023)
	bool tmp = this->__listeningParentResize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1023)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1023)
	if ((tmp)){
		HX_STACK_LINE(1023)
		::sx::widgets::Widget tmp2 = this->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1023)
		::sx::widgets::Widget tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1023)
		tmp1 = (tmp3 != null());
	}
	else{
		HX_STACK_LINE(1023)
		tmp1 = false;
	}
	HX_STACK_LINE(1023)
	if ((tmp1)){
		HX_STACK_LINE(1024)
		this->__listeningParentResize = false;
		HX_STACK_LINE(1025)
		::sx::widgets::Widget tmp2 = this->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1025)
		::sx::signals::Signal tmp3 = tmp2->get_onResize();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1025)
		Dynamic tmp4 = this->__parentResized_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1025)
		tmp3->remove(tmp4);
	}
	HX_STACK_LINE(1028)
	this->__parent = value;
	HX_STACK_LINE(1029)
	::sx::widgets::Widget tmp2 = this->__parent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1029)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1029)
	if ((tmp3)){
		HX_STACK_LINE(1030)
		this->__updateParentResizeListener();
		HX_STACK_LINE(1031)
		::sx::widgets::Widget tmp4 = this->__parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1031)
		bool tmp5 = tmp4->initialized;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1031)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1031)
		if ((tmp5)){
			HX_STACK_LINE(1031)
			bool tmp7 = this->initialized;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1031)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1031)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1031)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(1031)
			tmp6 = false;
		}
		HX_STACK_LINE(1031)
		if ((tmp6)){
			HX_STACK_LINE(1032)
			this->initialize();
		}
	}
	HX_STACK_LINE(1036)
	::sx::widgets::Widget tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1036)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set___parent,return )

bool Widget_obj::set_enabled( bool value){
	HX_STACK_FRAME("sx.widgets.Widget","set_enabled",0xea057422,"sx.widgets.Widget.set_enabled","sx/widgets/Widget.hx",1044,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1045)
	bool tmp = this->enabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1045)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1045)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1045)
	if ((tmp2)){
		HX_STACK_LINE(1046)
		this->enabled = value;
		HX_STACK_LINE(1047)
		bool tmp3 = this->enabled;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1047)
		if ((tmp3)){
			HX_STACK_LINE(1048)
			::sx::signals::Signal tmp4 = this->__onEnable;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(146)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(146)
			if ((tmp5)){
				HX_STACK_LINE(1048)
				::sx::signals::Signal tmp7 = this->__onEnable;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1048)
				::sx::signals::Signal tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(146)
				int tmp9 = tmp8->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(146)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(146)
				tmp6 = (tmp10 > (int)0);
			}
			else{
				HX_STACK_LINE(146)
				tmp6 = false;
			}
			HX_STACK_LINE(146)
			if ((tmp6)){
				HX_STACK_LINE(1048)
				::sx::signals::Signal tmp7 = this->__onEnable;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(147)
				bool tmp8 = tmp7->__listenersInUse;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(147)
				if ((tmp8)){
					HX_STACK_LINE(148)
					{
						HX_STACK_LINE(148)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1048)
						::sx::signals::Signal tmp9 = this->__onEnable;		HX_STACK_VAR(tmp9,"tmp9");
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
							HX_STACK_LINE(148)
							listener(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
						}
					}
					HX_STACK_LINE(149)
					false;
				}
				else{
					HX_STACK_LINE(1048)
					::sx::signals::Signal tmp9 = this->__onEnable;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(151)
					tmp9->__listenersInUse = true;
					HX_STACK_LINE(152)
					{
						HX_STACK_LINE(152)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1048)
						::sx::signals::Signal tmp10 = this->__onEnable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(152)
						cpp::ArrayBase _g1 = tmp10->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(152)
						while((true)){
							HX_STACK_LINE(152)
							bool tmp11 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(152)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(152)
							if ((tmp12)){
								HX_STACK_LINE(152)
								break;
							}
							HX_STACK_LINE(152)
							Dynamic tmp13 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(152)
							Dynamic listener = tmp13;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(152)
							++(_g);
							HX_STACK_LINE(152)
							listener(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
						}
					}
					HX_STACK_LINE(1048)
					::sx::signals::Signal tmp10 = this->__onEnable;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(153)
					tmp10->__listenersInUse = false;
				}
			}
		}
		else{
			HX_STACK_LINE(1050)
			::sx::signals::Signal tmp4 = this->__onDisable;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(146)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(146)
			if ((tmp5)){
				HX_STACK_LINE(1050)
				::sx::signals::Signal tmp7 = this->__onDisable;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1050)
				::sx::signals::Signal tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(146)
				int tmp9 = tmp8->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(146)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(146)
				tmp6 = (tmp10 > (int)0);
			}
			else{
				HX_STACK_LINE(146)
				tmp6 = false;
			}
			HX_STACK_LINE(146)
			if ((tmp6)){
				HX_STACK_LINE(1050)
				::sx::signals::Signal tmp7 = this->__onDisable;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(147)
				bool tmp8 = tmp7->__listenersInUse;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(147)
				if ((tmp8)){
					HX_STACK_LINE(148)
					{
						HX_STACK_LINE(148)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1050)
						::sx::signals::Signal tmp9 = this->__onDisable;		HX_STACK_VAR(tmp9,"tmp9");
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
							HX_STACK_LINE(148)
							listener(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
						}
					}
					HX_STACK_LINE(149)
					false;
				}
				else{
					HX_STACK_LINE(1050)
					::sx::signals::Signal tmp9 = this->__onDisable;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(151)
					tmp9->__listenersInUse = true;
					HX_STACK_LINE(152)
					{
						HX_STACK_LINE(152)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1050)
						::sx::signals::Signal tmp10 = this->__onDisable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(152)
						cpp::ArrayBase _g1 = tmp10->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(152)
						while((true)){
							HX_STACK_LINE(152)
							bool tmp11 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(152)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(152)
							if ((tmp12)){
								HX_STACK_LINE(152)
								break;
							}
							HX_STACK_LINE(152)
							Dynamic tmp13 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(152)
							Dynamic listener = tmp13;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(152)
							++(_g);
							HX_STACK_LINE(152)
							listener(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
						}
					}
					HX_STACK_LINE(1050)
					::sx::signals::Signal tmp10 = this->__onDisable;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(153)
					tmp10->__listenersInUse = false;
				}
			}
		}
	}
	HX_STACK_LINE(1054)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1054)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_enabled,return )

::sx::tween::Tweener Widget_obj::get_tween( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_tween",0x0bdb53c0,"sx.widgets.Widget.get_tween","sx/widgets/Widget.hx",1062,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1063)
	::sx::tween::Tweener tmp = this->__tween;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1063)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1063)
	if ((tmp1)){
		HX_STACK_LINE(1064)
		::sx::tween::Tweener tmp2 = ::sx::tween::Tweener_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1064)
		this->__tween = tmp2;
	}
	HX_STACK_LINE(1067)
	::sx::tween::Tweener tmp2 = this->__tween;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1067)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_tween,return )

bool Widget_obj::set_overflow( bool value){
	HX_STACK_FRAME("sx.widgets.Widget","set_overflow",0x2f492081,"sx.widgets.Widget.set_overflow","sx/widgets/Widget.hx",1075,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1076)
	bool tmp = this->overflow;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1076)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1076)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1076)
	if ((tmp2)){
		HX_STACK_LINE(1077)
		this->overflow = value;
		HX_STACK_LINE(1078)
		bool tmp3 = this->initialized;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1078)
		if ((tmp3)){
			HX_STACK_LINE(1078)
			::sx::backend::dummy::Backend tmp4 = this->backend;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1078)
			tmp4->widgetOverflowChanged();
		}
	}
	HX_STACK_LINE(1081)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1081)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_overflow,return )

bool Widget_obj::set_arrangeable( bool value){
	HX_STACK_FRAME("sx.widgets.Widget","set_arrangeable",0x99a58ee7,"sx.widgets.Widget.set_arrangeable","sx/widgets/Widget.hx",1089,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1090)
	bool tmp = this->arrangeable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1090)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1090)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1090)
	if ((tmp2)){
		HX_STACK_LINE(1091)
		this->arrangeable = value;
		HX_STACK_LINE(1092)
		::sx::widgets::Widget tmp3 = this->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1092)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1092)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1092)
		if ((tmp4)){
			HX_STACK_LINE(1092)
			::sx::widgets::Widget tmp6 = this->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1092)
			::sx::widgets::Widget tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1092)
			tmp5 = tmp7->initialized;
		}
		else{
			HX_STACK_LINE(1092)
			tmp5 = false;
		}
		HX_STACK_LINE(1092)
		if ((tmp5)){
			HX_STACK_LINE(1093)
			::sx::widgets::Widget tmp6 = this->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1093)
			::sx::layout::Layout tmp7 = tmp6->get_layout();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1093)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1093)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1093)
			if ((tmp8)){
				HX_STACK_LINE(1093)
				::sx::widgets::Widget tmp10 = this->get_parent();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1093)
				::sx::widgets::Widget tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1093)
				::sx::layout::Layout tmp12 = tmp11->get_layout();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1093)
				::sx::layout::Layout tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1093)
				tmp9 = tmp13->autoArrange;
			}
			else{
				HX_STACK_LINE(1093)
				tmp9 = false;
			}
			HX_STACK_LINE(1093)
			if ((tmp9)){
				HX_STACK_LINE(1094)
				::sx::widgets::Widget tmp10 = this->get_parent();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1094)
				::sx::layout::Layout tmp11 = tmp10->get_layout();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1094)
				tmp11->arrangeChildren();
			}
		}
	}
	HX_STACK_LINE(1099)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1099)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_arrangeable,return )

::sx::widgets::Widget Widget_obj::get_parent( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_parent",0x18678635,"sx.widgets.Widget.get_parent","sx/widgets/Widget.hx",1104,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1104)
	::sx::widgets::Widget tmp = this->__parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1104)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_parent,return )

::sx::properties::metric::Size Widget_obj::get_width( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_width",0xbccd5f5b,"sx.widgets.Widget.get_width","sx/widgets/Widget.hx",1105,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1105)
	::sx::properties::metric::Size tmp = this->__width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1105)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_width,return )

::sx::properties::metric::Size Widget_obj::get_height( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_height",0x2d3588f2,"sx.widgets.Widget.get_height","sx/widgets/Widget.hx",1106,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1106)
	::sx::properties::metric::Size tmp = this->__height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1106)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_height,return )

::sx::properties::metric::Coordinate Widget_obj::get_left( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_left",0x948aa052,"sx.widgets.Widget.get_left","sx/widgets/Widget.hx",1107,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1107)
	::sx::properties::metric::Coordinate tmp = this->__left;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1107)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_left,return )

::sx::properties::metric::Coordinate Widget_obj::get_right( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_right",0xdbceb531,"sx.widgets.Widget.get_right","sx/widgets/Widget.hx",1108,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1108)
	::sx::properties::metric::Coordinate tmp = this->__right;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1108)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_right,return )

::sx::properties::metric::Coordinate Widget_obj::get_top( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_top",0x00b0a0aa,"sx.widgets.Widget.get_top","sx/widgets/Widget.hx",1109,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1109)
	::sx::properties::metric::Coordinate tmp = this->__top;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1109)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_top,return )

::sx::properties::metric::Coordinate Widget_obj::get_bottom( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_bottom",0x906267f6,"sx.widgets.Widget.get_bottom","sx/widgets/Widget.hx",1110,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1110)
	::sx::properties::metric::Coordinate tmp = this->__bottom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1110)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_bottom,return )

::sx::skins::base::SkinBase Widget_obj::get_skin( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_skin",0x992faec8,"sx.widgets.Widget.get_skin","sx/widgets/Widget.hx",1111,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1111)
	::sx::skins::base::SkinBase tmp = this->__skin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1111)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_skin,return )

::sx::layout::Layout Widget_obj::get_layout( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_layout",0x83a22fb5,"sx.widgets.Widget.get_layout","sx/widgets/Widget.hx",1112,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1112)
	::sx::layout::Layout tmp = this->__layout;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1112)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_layout,return )

::sx::properties::metric::Coordinate Widget_obj::set_left( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.widgets.Widget","set_left",0x42e7f9c6,"sx.widgets.Widget.set_left","sx/widgets/Widget.hx",1115,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(1115)
	::sx::properties::metric::Coordinate tmp = this->__left;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1115)
	::sx::properties::metric::Size tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1115)
	tmp->copyValueFrom(tmp1);
	HX_STACK_LINE(1115)
	::sx::properties::metric::Coordinate tmp2 = this->__left;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1115)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_left,return )

::sx::properties::metric::Coordinate Widget_obj::set_right( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.widgets.Widget","set_right",0xbf1fa13d,"sx.widgets.Widget.set_right","sx/widgets/Widget.hx",1116,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(1116)
	::sx::properties::metric::Coordinate tmp = this->__right;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1116)
	::sx::properties::metric::Size tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1116)
	tmp->copyValueFrom(tmp1);
	HX_STACK_LINE(1116)
	::sx::properties::metric::Coordinate tmp2 = this->__right;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1116)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_right,return )

::sx::properties::metric::Coordinate Widget_obj::set_top( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.widgets.Widget","set_top",0xf3b231b6,"sx.widgets.Widget.set_top","sx/widgets/Widget.hx",1117,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(1117)
	::sx::properties::metric::Coordinate tmp = this->__top;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1117)
	::sx::properties::metric::Size tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1117)
	tmp->copyValueFrom(tmp1);
	HX_STACK_LINE(1117)
	::sx::properties::metric::Coordinate tmp2 = this->__top;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1117)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_top,return )

::sx::properties::metric::Coordinate Widget_obj::set_bottom( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.widgets.Widget","set_bottom",0x93e0066a,"sx.widgets.Widget.set_bottom","sx/widgets/Widget.hx",1118,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(1118)
	::sx::properties::metric::Coordinate tmp = this->__bottom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1118)
	::sx::properties::metric::Size tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1118)
	tmp->copyValueFrom(tmp1);
	HX_STACK_LINE(1118)
	::sx::properties::metric::Coordinate tmp2 = this->__bottom;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1118)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_bottom,return )

::sx::properties::metric::Size Widget_obj::set_width( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.widgets.Widget","set_width",0xa01e4b67,"sx.widgets.Widget.set_width","sx/widgets/Widget.hx",1119,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(1119)
	::sx::properties::metric::Size tmp = this->__width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1119)
	::sx::properties::metric::Size tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1119)
	::sx::properties::metric::Size tmp2 = tmp->copyValueFrom(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1119)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_width,return )

::sx::properties::metric::Size Widget_obj::set_height( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.widgets.Widget","set_height",0x30b32766,"sx.widgets.Widget.set_height","sx/widgets/Widget.hx",1120,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(1120)
	::sx::properties::metric::Size tmp = this->__height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1120)
	::sx::properties::metric::Size tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1120)
	::sx::properties::metric::Size tmp2 = tmp->copyValueFrom(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1120)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_height,return )

::sx::signals::Signal Widget_obj::get_onResize( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onResize",0xc13c6a3e,"sx.widgets.Widget.get_onResize","sx/widgets/Widget.hx",1123,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1123)
	::sx::signals::Signal tmp = this->__onResize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1123)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1123)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1123)
	if ((tmp1)){
		HX_STACK_LINE(1123)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1123)
		tmp2 = this->__onResize = tmp3;
	}
	else{
		HX_STACK_LINE(1123)
		tmp2 = this->__onResize;
	}
	HX_STACK_LINE(1123)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onResize,return )

::sx::signals::Signal Widget_obj::get_onMove( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onMove",0x15d46cdb,"sx.widgets.Widget.get_onMove","sx/widgets/Widget.hx",1124,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1124)
	::sx::signals::Signal tmp = this->__onMove;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1124)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1124)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1124)
	if ((tmp1)){
		HX_STACK_LINE(1124)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1124)
		tmp2 = this->__onMove = tmp3;
	}
	else{
		HX_STACK_LINE(1124)
		tmp2 = this->__onMove;
	}
	HX_STACK_LINE(1124)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onMove,return )

::sx::signals::Signal Widget_obj::get_onInitialize( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onInitialize",0x9eeb2e9a,"sx.widgets.Widget.get_onInitialize","sx/widgets/Widget.hx",1125,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1125)
	::sx::signals::Signal tmp = this->__onInitialize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1125)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1125)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1125)
	if ((tmp1)){
		HX_STACK_LINE(1125)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1125)
		tmp2 = this->__onInitialize = tmp3;
	}
	else{
		HX_STACK_LINE(1125)
		tmp2 = this->__onInitialize;
	}
	HX_STACK_LINE(1125)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onInitialize,return )

::sx::signals::Signal Widget_obj::get_onDispose( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onDispose",0xab79b115,"sx.widgets.Widget.get_onDispose","sx/widgets/Widget.hx",1126,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1126)
	::sx::signals::Signal tmp = this->__onDispose;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1126)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1126)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1126)
	if ((tmp1)){
		HX_STACK_LINE(1126)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1126)
		tmp2 = this->__onDispose = tmp3;
	}
	else{
		HX_STACK_LINE(1126)
		tmp2 = this->__onDispose;
	}
	HX_STACK_LINE(1126)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onDispose,return )

::sx::signals::Signal Widget_obj::get_onChildAdded( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onChildAdded",0x6cef42ce,"sx.widgets.Widget.get_onChildAdded","sx/widgets/Widget.hx",1127,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1127)
	::sx::signals::Signal tmp = this->__onChildAdded;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1127)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1127)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1127)
	if ((tmp1)){
		HX_STACK_LINE(1127)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1127)
		tmp2 = this->__onChildAdded = tmp3;
	}
	else{
		HX_STACK_LINE(1127)
		tmp2 = this->__onChildAdded;
	}
	HX_STACK_LINE(1127)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onChildAdded,return )

::sx::signals::Signal Widget_obj::get_onChildRemoved( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onChildRemoved",0x57edad2e,"sx.widgets.Widget.get_onChildRemoved","sx/widgets/Widget.hx",1128,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1128)
	::sx::signals::Signal tmp = this->__onChildRemoved;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1128)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1128)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1128)
	if ((tmp1)){
		HX_STACK_LINE(1128)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1128)
		tmp2 = this->__onChildRemoved = tmp3;
	}
	else{
		HX_STACK_LINE(1128)
		tmp2 = this->__onChildRemoved;
	}
	HX_STACK_LINE(1128)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onChildRemoved,return )

::sx::signals::Signal Widget_obj::get_onEnable( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onEnable",0xb148becd,"sx.widgets.Widget.get_onEnable","sx/widgets/Widget.hx",1129,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1129)
	::sx::signals::Signal tmp = this->__onEnable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1129)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1129)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1129)
	if ((tmp1)){
		HX_STACK_LINE(1129)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1129)
		tmp2 = this->__onEnable = tmp3;
	}
	else{
		HX_STACK_LINE(1129)
		tmp2 = this->__onEnable;
	}
	HX_STACK_LINE(1129)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onEnable,return )

::sx::signals::Signal Widget_obj::get_onDisable( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onDisable",0xa1859a5e,"sx.widgets.Widget.get_onDisable","sx/widgets/Widget.hx",1130,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1130)
	::sx::signals::Signal tmp = this->__onDisable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1130)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1130)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1130)
	if ((tmp1)){
		HX_STACK_LINE(1130)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1130)
		tmp2 = this->__onDisable = tmp3;
	}
	else{
		HX_STACK_LINE(1130)
		tmp2 = this->__onDisable;
	}
	HX_STACK_LINE(1130)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onDisable,return )

::sx::signals::Signal Widget_obj::get_onParentChanged( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onParentChanged",0xd7f719e0,"sx.widgets.Widget.get_onParentChanged","sx/widgets/Widget.hx",1131,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1131)
	::sx::signals::Signal tmp = this->__onParentChanged;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1131)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1131)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1131)
	if ((tmp1)){
		HX_STACK_LINE(1131)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1131)
		tmp2 = this->__onParentChanged = tmp3;
	}
	else{
		HX_STACK_LINE(1131)
		tmp2 = this->__onParentChanged;
	}
	HX_STACK_LINE(1131)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onParentChanged,return )

::sx::signals::Signal Widget_obj::get_onPointerPress( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onPointerPress",0x05d09950,"sx.widgets.Widget.get_onPointerPress","sx/widgets/Widget.hx",1132,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1132)
	::sx::signals::Signal tmp = this->__onPointerPress;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1132)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1132)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1132)
	if ((tmp1)){
		HX_STACK_LINE(1132)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1132)
		tmp2 = this->__onPointerPress = tmp3;
	}
	else{
		HX_STACK_LINE(1132)
		tmp2 = this->__onPointerPress;
	}
	HX_STACK_LINE(1132)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onPointerPress,return )

::sx::signals::Signal Widget_obj::get_onPointerRelease( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onPointerRelease",0xad2c98d4,"sx.widgets.Widget.get_onPointerRelease","sx/widgets/Widget.hx",1133,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1133)
	::sx::signals::Signal tmp = this->__onPointerRelease;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1133)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1133)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1133)
	if ((tmp1)){
		HX_STACK_LINE(1133)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1133)
		tmp2 = this->__onPointerRelease = tmp3;
	}
	else{
		HX_STACK_LINE(1133)
		tmp2 = this->__onPointerRelease;
	}
	HX_STACK_LINE(1133)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onPointerRelease,return )

::sx::signals::Signal Widget_obj::get_onPointerTap( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onPointerTap",0x71d3a2f0,"sx.widgets.Widget.get_onPointerTap","sx/widgets/Widget.hx",1134,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1134)
	::sx::signals::Signal tmp = this->__onPointerTap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1134)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1134)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1134)
	if ((tmp1)){
		HX_STACK_LINE(1134)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1134)
		tmp2 = this->__onPointerTap = tmp3;
	}
	else{
		HX_STACK_LINE(1134)
		tmp2 = this->__onPointerTap;
	}
	HX_STACK_LINE(1134)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onPointerTap,return )

::sx::signals::Signal Widget_obj::get_onClick( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onClick",0x4003833e,"sx.widgets.Widget.get_onClick","sx/widgets/Widget.hx",1135,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1135)
	::sx::signals::Signal tmp = this->__onPointerTap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1135)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1135)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1135)
	if ((tmp1)){
		HX_STACK_LINE(1135)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1135)
		tmp2 = this->__onPointerTap = tmp3;
	}
	else{
		HX_STACK_LINE(1135)
		tmp2 = this->__onPointerTap;
	}
	HX_STACK_LINE(1135)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onClick,return )

::sx::signals::Signal Widget_obj::get_onPointerMove( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onPointerMove",0x22c515e4,"sx.widgets.Widget.get_onPointerMove","sx/widgets/Widget.hx",1136,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1136)
	::sx::signals::Signal tmp = this->__onPointerMove;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1136)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1136)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1136)
	if ((tmp1)){
		HX_STACK_LINE(1136)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1136)
		tmp2 = this->__onPointerMove = tmp3;
	}
	else{
		HX_STACK_LINE(1136)
		tmp2 = this->__onPointerMove;
	}
	HX_STACK_LINE(1136)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onPointerMove,return )

::sx::signals::Signal Widget_obj::get_onPointerOver( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onPointerOver",0x241cc427,"sx.widgets.Widget.get_onPointerOver","sx/widgets/Widget.hx",1137,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1137)
	::sx::signals::Signal tmp = this->__onPointerOver;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1137)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1137)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1137)
	if ((tmp1)){
		HX_STACK_LINE(1137)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1137)
		tmp2 = this->__onPointerOver = tmp3;
	}
	else{
		HX_STACK_LINE(1137)
		tmp2 = this->__onPointerOver;
	}
	HX_STACK_LINE(1137)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onPointerOver,return )

::sx::signals::Signal Widget_obj::get_onPointerOut( ){
	HX_STACK_FRAME("sx.widgets.Widget","get_onPointerOut",0x71cfe91b,"sx.widgets.Widget.get_onPointerOut","sx/widgets/Widget.hx",1138,0x5e3cc110)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1138)
	::sx::signals::Signal tmp = this->__onPointerOut;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1138)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1138)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1138)
	if ((tmp1)){
		HX_STACK_LINE(1138)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1138)
		tmp2 = this->__onPointerOut = tmp3;
	}
	else{
		HX_STACK_LINE(1138)
		tmp2 = this->__onPointerOut;
	}
	HX_STACK_LINE(1138)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_onPointerOut,return )

int Widget_obj::MAX_RESIZE_DEPTH;


Widget_obj::Widget_obj()
{
}

void Widget_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Widget);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(__parent,"__parent");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(__left,"__left");
	HX_MARK_MEMBER_NAME(__right,"__right");
	HX_MARK_MEMBER_NAME(__top,"__top");
	HX_MARK_MEMBER_NAME(__bottom,"__bottom");
	HX_MARK_MEMBER_NAME(__origin,"__origin");
	HX_MARK_MEMBER_NAME(__offset,"__offset");
	HX_MARK_MEMBER_NAME(__width,"__width");
	HX_MARK_MEMBER_NAME(__height,"__height");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(overflow,"overflow");
	HX_MARK_MEMBER_NAME(__skin,"__skin");
	HX_MARK_MEMBER_NAME(__layout,"__layout");
	HX_MARK_MEMBER_NAME(arrangeable,"arrangeable");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(disposed,"disposed");
	HX_MARK_MEMBER_NAME(__tween,"__tween");
	HX_MARK_MEMBER_NAME(__onResize,"__onResize");
	HX_MARK_MEMBER_NAME(__onMove,"__onMove");
	HX_MARK_MEMBER_NAME(__onChildAdded,"__onChildAdded");
	HX_MARK_MEMBER_NAME(__onChildRemoved,"__onChildRemoved");
	HX_MARK_MEMBER_NAME(__onParentChanged,"__onParentChanged");
	HX_MARK_MEMBER_NAME(__onEnable,"__onEnable");
	HX_MARK_MEMBER_NAME(__onDisable,"__onDisable");
	HX_MARK_MEMBER_NAME(__onPointerPress,"__onPointerPress");
	HX_MARK_MEMBER_NAME(__onPointerRelease,"__onPointerRelease");
	HX_MARK_MEMBER_NAME(__onPointerTap,"__onPointerTap");
	HX_MARK_MEMBER_NAME(__onPointerMove,"__onPointerMove");
	HX_MARK_MEMBER_NAME(__onPointerOver,"__onPointerOver");
	HX_MARK_MEMBER_NAME(__onPointerOut,"__onPointerOut");
	HX_MARK_MEMBER_NAME(__onInitialize,"__onInitialize");
	HX_MARK_MEMBER_NAME(__onDispose,"__onDispose");
	HX_MARK_MEMBER_NAME(__listeningParentResize,"__listeningParentResize");
	HX_MARK_MEMBER_NAME(__resizeCounter,"__resizeCounter");
	HX_MARK_END_CLASS();
}

void Widget_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(__parent,"__parent");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(__left,"__left");
	HX_VISIT_MEMBER_NAME(__right,"__right");
	HX_VISIT_MEMBER_NAME(__top,"__top");
	HX_VISIT_MEMBER_NAME(__bottom,"__bottom");
	HX_VISIT_MEMBER_NAME(__origin,"__origin");
	HX_VISIT_MEMBER_NAME(__offset,"__offset");
	HX_VISIT_MEMBER_NAME(__width,"__width");
	HX_VISIT_MEMBER_NAME(__height,"__height");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(overflow,"overflow");
	HX_VISIT_MEMBER_NAME(__skin,"__skin");
	HX_VISIT_MEMBER_NAME(__layout,"__layout");
	HX_VISIT_MEMBER_NAME(arrangeable,"arrangeable");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(backend,"backend");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(disposed,"disposed");
	HX_VISIT_MEMBER_NAME(__tween,"__tween");
	HX_VISIT_MEMBER_NAME(__onResize,"__onResize");
	HX_VISIT_MEMBER_NAME(__onMove,"__onMove");
	HX_VISIT_MEMBER_NAME(__onChildAdded,"__onChildAdded");
	HX_VISIT_MEMBER_NAME(__onChildRemoved,"__onChildRemoved");
	HX_VISIT_MEMBER_NAME(__onParentChanged,"__onParentChanged");
	HX_VISIT_MEMBER_NAME(__onEnable,"__onEnable");
	HX_VISIT_MEMBER_NAME(__onDisable,"__onDisable");
	HX_VISIT_MEMBER_NAME(__onPointerPress,"__onPointerPress");
	HX_VISIT_MEMBER_NAME(__onPointerRelease,"__onPointerRelease");
	HX_VISIT_MEMBER_NAME(__onPointerTap,"__onPointerTap");
	HX_VISIT_MEMBER_NAME(__onPointerMove,"__onPointerMove");
	HX_VISIT_MEMBER_NAME(__onPointerOver,"__onPointerOver");
	HX_VISIT_MEMBER_NAME(__onPointerOut,"__onPointerOut");
	HX_VISIT_MEMBER_NAME(__onInitialize,"__onInitialize");
	HX_VISIT_MEMBER_NAME(__onDispose,"__onDispose");
	HX_VISIT_MEMBER_NAME(__listeningParentResize,"__listeningParentResize");
	HX_VISIT_MEMBER_NAME(__resizeCounter,"__resizeCounter");
}

Dynamic Widget_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return get_top(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return get_left(); }
		if (HX_FIELD_EQ(inName,"skin") ) { if (inCallProp == hx::paccAlways) return get_skin(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return get_right(); }
		if (HX_FIELD_EQ(inName,"__top") ) { return __top; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"tween") ) { if (inCallProp == hx::paccAlways) return get_tween(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == hx::paccAlways) return get_parent(); }
		if (HX_FIELD_EQ(inName,"__left") ) { return __left; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return get_bottom(); }
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp == hx::paccAlways) return get_origin(); }
		if (HX_FIELD_EQ(inName,"offset") ) { if (inCallProp == hx::paccAlways) return get_offset(); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"__skin") ) { return __skin; }
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == hx::paccAlways) return get_layout(); }
		if (HX_FIELD_EQ(inName,"onMove") ) { if (inCallProp == hx::paccAlways) return get_onMove(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__right") ) { return __right; }
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		if (HX_FIELD_EQ(inName,"__tween") ) { return __tween; }
		if (HX_FIELD_EQ(inName,"onClick") ) { if (inCallProp == hx::paccAlways) return get_onClick(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"__moved") ) { return __moved_dyn(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__parent") ) { return __parent; }
		if (HX_FIELD_EQ(inName,"__bottom") ) { return __bottom; }
		if (HX_FIELD_EQ(inName,"__origin") ) { return __origin; }
		if (HX_FIELD_EQ(inName,"__offset") ) { return __offset; }
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		if (HX_FIELD_EQ(inName,"overflow") ) { return overflow; }
		if (HX_FIELD_EQ(inName,"__layout") ) { return __layout; }
		if (HX_FIELD_EQ(inName,"disposed") ) { return disposed; }
		if (HX_FIELD_EQ(inName,"onResize") ) { if (inCallProp == hx::paccAlways) return get_onResize(); }
		if (HX_FIELD_EQ(inName,"__onMove") ) { return __onMove; }
		if (HX_FIELD_EQ(inName,"onEnable") ) { if (inCallProp == hx::paccAlways) return get_onEnable(); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"getChild") ) { return getChild_dyn(); }
		if (HX_FIELD_EQ(inName,"set_skin") ) { return set_skin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"get_skin") ) { return get_skin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onDisable") ) { if (inCallProp == hx::paccAlways) return get_onDisable(); }
		if (HX_FIELD_EQ(inName,"onDispose") ) { if (inCallProp == hx::paccAlways) return get_onDispose(); }
		if (HX_FIELD_EQ(inName,"getParent") ) { return getParent_dyn(); }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"__resized") ) { return __resized_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_style") ) { return set_style_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tween") ) { return get_tween_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__onResize") ) { return __onResize; }
		if (HX_FIELD_EQ(inName,"__onEnable") ) { return __onEnable; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAs") ) { return getChildAs_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_layout") ) { return set_layout_dyn(); }
		if (HX_FIELD_EQ(inName,"get_origin") ) { return get_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_offset") ) { return get_offset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layout") ) { return get_layout_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onMove") ) { return get_onMove_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { return numChildren; }
		if (HX_FIELD_EQ(inName,"arrangeable") ) { return arrangeable; }
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"__onDisable") ) { return __onDisable; }
		if (HX_FIELD_EQ(inName,"__onDispose") ) { return __onDispose; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"getParentAs") ) { return getParentAs_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return set_enabled_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onClick") ) { return get_onClick_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onChildAdded") ) { if (inCallProp == hx::paccAlways) return get_onChildAdded(); }
		if (HX_FIELD_EQ(inName,"onPointerTap") ) { if (inCallProp == hx::paccAlways) return get_onPointerTap(); }
		if (HX_FIELD_EQ(inName,"onPointerOut") ) { if (inCallProp == hx::paccAlways) return get_onPointerOut(); }
		if (HX_FIELD_EQ(inName,"onInitialize") ) { if (inCallProp == hx::paccAlways) return get_onInitialize(); }
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set___parent") ) { return set___parent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_overflow") ) { return set_overflow_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onResize") ) { return get_onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onEnable") ) { return get_onEnable_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onPointerMove") ) { if (inCallProp == hx::paccAlways) return get_onPointerMove(); }
		if (HX_FIELD_EQ(inName,"onPointerOver") ) { if (inCallProp == hx::paccAlways) return get_onPointerOver(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onDispose") ) { return get_onDispose_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onDisable") ) { return get_onDisable_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__onChildAdded") ) { return __onChildAdded; }
		if (HX_FIELD_EQ(inName,"onChildRemoved") ) { if (inCallProp == hx::paccAlways) return get_onChildRemoved(); }
		if (HX_FIELD_EQ(inName,"onPointerPress") ) { if (inCallProp == hx::paccAlways) return get_onPointerPress(); }
		if (HX_FIELD_EQ(inName,"__onPointerTap") ) { return __onPointerTap; }
		if (HX_FIELD_EQ(inName,"__onPointerOut") ) { return __onPointerOut; }
		if (HX_FIELD_EQ(inName,"__onInitialize") ) { return __onInitialize; }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getDirectChild") ) { return getDirectChild_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onParentChanged") ) { if (inCallProp == hx::paccAlways) return get_onParentChanged(); }
		if (HX_FIELD_EQ(inName,"__onPointerMove") ) { return __onPointerMove; }
		if (HX_FIELD_EQ(inName,"__onPointerOver") ) { return __onPointerOver; }
		if (HX_FIELD_EQ(inName,"__resizeCounter") ) { return __resizeCounter; }
		if (HX_FIELD_EQ(inName,"__createBackend") ) { return __createBackend_dyn(); }
		if (HX_FIELD_EQ(inName,"__propertyMoved") ) { return __propertyMoved_dyn(); }
		if (HX_FIELD_EQ(inName,"__originChanged") ) { return __originChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"__offsetChanged") ) { return __offsetChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"__parentResized") ) { return __parentResized_dyn(); }
		if (HX_FIELD_EQ(inName,"set_arrangeable") ) { return set_arrangeable_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__onChildRemoved") ) { return __onChildRemoved; }
		if (HX_FIELD_EQ(inName,"__onPointerPress") ) { return __onPointerPress; }
		if (HX_FIELD_EQ(inName,"onPointerRelease") ) { if (inCallProp == hx::paccAlways) return get_onPointerRelease(); }
		if (HX_FIELD_EQ(inName,"__initializeSelf") ) { return __initializeSelf_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onInitialize") ) { return get_onInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onChildAdded") ) { return get_onChildAdded_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onPointerTap") ) { return get_onPointerTap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onPointerOut") ) { return get_onPointerOut_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__onParentChanged") ) { return __onParentChanged; }
		if (HX_FIELD_EQ(inName,"__propertyResized") ) { return __propertyResized_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onPointerMove") ) { return get_onPointerMove_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onPointerOver") ) { return get_onPointerOver_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__onPointerRelease") ) { return __onPointerRelease; }
		if (HX_FIELD_EQ(inName,"get_onChildRemoved") ) { return get_onChildRemoved_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onPointerPress") ) { return get_onPointerPress_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__reactParentResize") ) { return __reactParentResize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onParentChanged") ) { return get_onParentChanged_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__initializeChildren") ) { return __initializeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onPointerRelease") ) { return get_onPointerRelease_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__parentWidthProvider") ) { return __parentWidthProvider_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__parentHeightProvider") ) { return __parentHeightProvider_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__listeningParentResize") ) { return __listeningParentResize; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__affectParentResizeListener") ) { return __affectParentResizeListener_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateParentResizeListener") ) { return __updateParentResizeListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Widget_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return set_left(inValue); }
		if (HX_FIELD_EQ(inName,"skin") ) { if (inCallProp == hx::paccAlways) return set_skin(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return set_right(inValue); }
		if (HX_FIELD_EQ(inName,"__top") ) { __top=inValue.Cast< ::sx::properties::metric::Coordinate >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"style") ) { if (inCallProp == hx::paccAlways) return set_style(inValue);style=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__left") ) { __left=inValue.Cast< ::sx::properties::metric::Coordinate >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return set_bottom(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return set_scaleX(inValue);scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return set_scaleY(inValue);scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__skin") ) { __skin=inValue.Cast< ::sx::skins::base::SkinBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == hx::paccAlways) return set_layout(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__right") ) { __right=inValue.Cast< ::sx::properties::metric::Coordinate >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< ::sx::properties::metric::Size >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return set_enabled(inValue);enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::sx::backend::dummy::Backend >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tween") ) { __tween=inValue.Cast< ::sx::tween::Tweener >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__parent") ) { if (inCallProp == hx::paccAlways) return set___parent(inValue);__parent=inValue.Cast< ::sx::widgets::Widget >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bottom") ) { __bottom=inValue.Cast< ::sx::properties::metric::Coordinate >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__origin") ) { __origin=inValue.Cast< ::sx::properties::metric::Offset >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__offset") ) { __offset=inValue.Cast< ::sx::properties::metric::Offset >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< ::sx::properties::metric::Size >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue);rotation=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overflow") ) { if (inCallProp == hx::paccAlways) return set_overflow(inValue);overflow=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__layout") ) { __layout=inValue.Cast< ::sx::layout::Layout >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disposed") ) { disposed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__onMove") ) { __onMove=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__onResize") ) { __onResize=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__onEnable") ) { __onEnable=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrangeable") ) { if (inCallProp == hx::paccAlways) return set_arrangeable(inValue);arrangeable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__onDisable") ) { __onDisable=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__onDispose") ) { __onDispose=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__onChildAdded") ) { __onChildAdded=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__onPointerTap") ) { __onPointerTap=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__onPointerOut") ) { __onPointerOut=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__onInitialize") ) { __onInitialize=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__onPointerMove") ) { __onPointerMove=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__onPointerOver") ) { __onPointerOver=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__resizeCounter") ) { __resizeCounter=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__onChildRemoved") ) { __onChildRemoved=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__onPointerPress") ) { __onPointerPress=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__onParentChanged") ) { __onParentChanged=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__onPointerRelease") ) { __onPointerRelease=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__listeningParentResize") ) { __listeningParentResize=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Widget_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Widget_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("__parent","\x4a","\x70","\xad","\x95"));
	outFields->push(HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"));
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("__left","\x27","\x6b","\xa8","\xf6"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("__right","\xbc","\x64","\xc2","\x53"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("__top","\x75","\xc7","\x34","\xf2"));
	outFields->push(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	outFields->push(HX_HCSTRING("__bottom","\x0b","\x52","\xa8","\x0d"));
	outFields->push(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"));
	outFields->push(HX_HCSTRING("__origin","\x06","\x85","\x30","\xf3"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("__offset","\xb3","\x02","\x6f","\x08"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("overflow","\x42","\xe3","\x3b","\x41"));
	outFields->push(HX_HCSTRING("skin","\x7d","\x16","\x55","\x4c"));
	outFields->push(HX_HCSTRING("__skin","\x9d","\x79","\x4d","\xfb"));
	outFields->push(HX_HCSTRING("layout","\xaa","\xae","\xb8","\x58"));
	outFields->push(HX_HCSTRING("__layout","\xca","\x19","\xe8","\x00"));
	outFields->push(HX_HCSTRING("arrangeable","\xc6","\x3a","\xea","\x85"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));
	outFields->push(HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"));
	outFields->push(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"));
	outFields->push(HX_HCSTRING("disposed","\xe5","\x0a","\xa4","\x27"));
	outFields->push(HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"));
	outFields->push(HX_HCSTRING("__tween","\x4b","\x03","\xcf","\x83"));
	outFields->push(HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"));
	outFields->push(HX_HCSTRING("__onResize","\x93","\xc3","\x60","\x8b"));
	outFields->push(HX_HCSTRING("onMove","\xd0","\xeb","\xea","\xea"));
	outFields->push(HX_HCSTRING("__onMove","\xf0","\x56","\x1a","\x93"));
	outFields->push(HX_HCSTRING("onChildAdded","\x83","\xe7","\x02","\x93"));
	outFields->push(HX_HCSTRING("__onChildAdded","\xa3","\x6a","\xc3","\xb3"));
	outFields->push(HX_HCSTRING("onChildRemoved","\x23","\xa9","\xbb","\xe5"));
	outFields->push(HX_HCSTRING("__onChildRemoved","\x43","\x34","\xfb","\x19"));
	outFields->push(HX_HCSTRING("onParentChanged","\x4b","\x94","\x65","\x5e"));
	outFields->push(HX_HCSTRING("__onParentChanged","\x2b","\xc5","\xbf","\xe1"));
	outFields->push(HX_HCSTRING("onEnable","\x02","\xa5","\x34","\xd8"));
	outFields->push(HX_HCSTRING("__onEnable","\x22","\x18","\x6d","\x7b"));
	outFields->push(HX_HCSTRING("onDisable","\x89","\x22","\x03","\x89"));
	outFields->push(HX_HCSTRING("__onDisable","\x69","\x6b","\x2f","\xb7"));
	outFields->push(HX_HCSTRING("onPointerPress","\x45","\x95","\x9e","\x93"));
	outFields->push(HX_HCSTRING("__onPointerPress","\x65","\x20","\xde","\xc7"));
	outFields->push(HX_HCSTRING("onPointerRelease","\x09","\x3c","\x69","\xc7"));
	outFields->push(HX_HCSTRING("__onPointerRelease","\x29","\xcf","\xf9","\x32"));
	outFields->push(HX_HCSTRING("onPointerTap","\xa5","\x47","\xe7","\x97"));
	outFields->push(HX_HCSTRING("__onPointerTap","\xc5","\xca","\xa7","\xb8"));
	outFields->push(HX_HCSTRING("onClick","\xa9","\x1a","\x9c","\xde"));
	outFields->push(HX_HCSTRING("onPointerMove","\x8f","\x8f","\xe1","\x4d"));
	outFields->push(HX_HCSTRING("__onPointerMove","\x6f","\xc8","\x93","\xd5"));
	outFields->push(HX_HCSTRING("onPointerOver","\xd2","\x3d","\x39","\x4f"));
	outFields->push(HX_HCSTRING("__onPointerOver","\xb2","\x76","\xeb","\xd6"));
	outFields->push(HX_HCSTRING("onPointerOut","\xd0","\x8d","\xe3","\x97"));
	outFields->push(HX_HCSTRING("__onPointerOut","\xf0","\x10","\xa4","\xb8"));
	outFields->push(HX_HCSTRING("onInitialize","\x4f","\xd3","\xfe","\xc4"));
	outFields->push(HX_HCSTRING("__onInitialize","\x6f","\x56","\xbf","\xe5"));
	outFields->push(HX_HCSTRING("onDispose","\x40","\x39","\xf7","\x92"));
	outFields->push(HX_HCSTRING("__onDispose","\x20","\x82","\x23","\xc1"));
	outFields->push(HX_HCSTRING("__listeningParentResize","\x39","\xeb","\xa0","\x6f"));
	outFields->push(HX_HCSTRING("__resizeCounter","\x48","\x9c","\x03","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Widget_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::sx::widgets::Widget*/ ,(int)offsetof(Widget_obj,__parent),HX_HCSTRING("__parent","\x4a","\x70","\xad","\x95")},
	{hx::fsInt,(int)offsetof(Widget_obj,numChildren),HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c")},
	{hx::fsObject /*::sx::properties::metric::Coordinate*/ ,(int)offsetof(Widget_obj,__left),HX_HCSTRING("__left","\x27","\x6b","\xa8","\xf6")},
	{hx::fsObject /*::sx::properties::metric::Coordinate*/ ,(int)offsetof(Widget_obj,__right),HX_HCSTRING("__right","\xbc","\x64","\xc2","\x53")},
	{hx::fsObject /*::sx::properties::metric::Coordinate*/ ,(int)offsetof(Widget_obj,__top),HX_HCSTRING("__top","\x75","\xc7","\x34","\xf2")},
	{hx::fsObject /*::sx::properties::metric::Coordinate*/ ,(int)offsetof(Widget_obj,__bottom),HX_HCSTRING("__bottom","\x0b","\x52","\xa8","\x0d")},
	{hx::fsObject /*::sx::properties::metric::Offset*/ ,(int)offsetof(Widget_obj,__origin),HX_HCSTRING("__origin","\x06","\x85","\x30","\xf3")},
	{hx::fsObject /*::sx::properties::metric::Offset*/ ,(int)offsetof(Widget_obj,__offset),HX_HCSTRING("__offset","\xb3","\x02","\x6f","\x08")},
	{hx::fsObject /*::sx::properties::metric::Size*/ ,(int)offsetof(Widget_obj,__width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{hx::fsObject /*::sx::properties::metric::Size*/ ,(int)offsetof(Widget_obj,__height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{hx::fsFloat,(int)offsetof(Widget_obj,scaleX),HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c")},
	{hx::fsFloat,(int)offsetof(Widget_obj,scaleY),HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c")},
	{hx::fsFloat,(int)offsetof(Widget_obj,rotation),HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")},
	{hx::fsFloat,(int)offsetof(Widget_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsBool,(int)offsetof(Widget_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsBool,(int)offsetof(Widget_obj,overflow),HX_HCSTRING("overflow","\x42","\xe3","\x3b","\x41")},
	{hx::fsObject /*::sx::skins::base::SkinBase*/ ,(int)offsetof(Widget_obj,__skin),HX_HCSTRING("__skin","\x9d","\x79","\x4d","\xfb")},
	{hx::fsObject /*::sx::layout::Layout*/ ,(int)offsetof(Widget_obj,__layout),HX_HCSTRING("__layout","\xca","\x19","\xe8","\x00")},
	{hx::fsBool,(int)offsetof(Widget_obj,arrangeable),HX_HCSTRING("arrangeable","\xc6","\x3a","\xea","\x85")},
	{hx::fsBool,(int)offsetof(Widget_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsString,(int)offsetof(Widget_obj,style),HX_HCSTRING("style","\x31","\xa5","\x1d","\x84")},
	{hx::fsObject /*::sx::backend::dummy::Backend*/ ,(int)offsetof(Widget_obj,backend),HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb")},
	{hx::fsBool,(int)offsetof(Widget_obj,initialized),HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{hx::fsBool,(int)offsetof(Widget_obj,disposed),HX_HCSTRING("disposed","\xe5","\x0a","\xa4","\x27")},
	{hx::fsObject /*::sx::tween::Tweener*/ ,(int)offsetof(Widget_obj,__tween),HX_HCSTRING("__tween","\x4b","\x03","\xcf","\x83")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Widget_obj,__onResize),HX_HCSTRING("__onResize","\x93","\xc3","\x60","\x8b")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Widget_obj,__onMove),HX_HCSTRING("__onMove","\xf0","\x56","\x1a","\x93")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Widget_obj,__onChildAdded),HX_HCSTRING("__onChildAdded","\xa3","\x6a","\xc3","\xb3")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Widget_obj,__onChildRemoved),HX_HCSTRING("__onChildRemoved","\x43","\x34","\xfb","\x19")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Widget_obj,__onParentChanged),HX_HCSTRING("__onParentChanged","\x2b","\xc5","\xbf","\xe1")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Widget_obj,__onEnable),HX_HCSTRING("__onEnable","\x22","\x18","\x6d","\x7b")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Widget_obj,__onDisable),HX_HCSTRING("__onDisable","\x69","\x6b","\x2f","\xb7")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Widget_obj,__onPointerPress),HX_HCSTRING("__onPointerPress","\x65","\x20","\xde","\xc7")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Widget_obj,__onPointerRelease),HX_HCSTRING("__onPointerRelease","\x29","\xcf","\xf9","\x32")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Widget_obj,__onPointerTap),HX_HCSTRING("__onPointerTap","\xc5","\xca","\xa7","\xb8")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Widget_obj,__onPointerMove),HX_HCSTRING("__onPointerMove","\x6f","\xc8","\x93","\xd5")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Widget_obj,__onPointerOver),HX_HCSTRING("__onPointerOver","\xb2","\x76","\xeb","\xd6")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Widget_obj,__onPointerOut),HX_HCSTRING("__onPointerOut","\xf0","\x10","\xa4","\xb8")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Widget_obj,__onInitialize),HX_HCSTRING("__onInitialize","\x6f","\x56","\xbf","\xe5")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(Widget_obj,__onDispose),HX_HCSTRING("__onDispose","\x20","\x82","\x23","\xc1")},
	{hx::fsBool,(int)offsetof(Widget_obj,__listeningParentResize),HX_HCSTRING("__listeningParentResize","\x39","\xeb","\xa0","\x6f")},
	{hx::fsInt,(int)offsetof(Widget_obj,__resizeCounter),HX_HCSTRING("__resizeCounter","\x48","\x9c","\x03","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Widget_obj::MAX_RESIZE_DEPTH,HX_HCSTRING("MAX_RESIZE_DEPTH","\xf3","\x8e","\xa7","\x77")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("__parent","\x4a","\x70","\xad","\x95"),
	HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"),
	HX_HCSTRING("__left","\x27","\x6b","\xa8","\xf6"),
	HX_HCSTRING("__right","\xbc","\x64","\xc2","\x53"),
	HX_HCSTRING("__top","\x75","\xc7","\x34","\xf2"),
	HX_HCSTRING("__bottom","\x0b","\x52","\xa8","\x0d"),
	HX_HCSTRING("__origin","\x06","\x85","\x30","\xf3"),
	HX_HCSTRING("__offset","\xb3","\x02","\x6f","\x08"),
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"),
	HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("overflow","\x42","\xe3","\x3b","\x41"),
	HX_HCSTRING("__skin","\x9d","\x79","\x4d","\xfb"),
	HX_HCSTRING("__layout","\xca","\x19","\xe8","\x00"),
	HX_HCSTRING("arrangeable","\xc6","\x3a","\xea","\x85"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"),
	HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("disposed","\xe5","\x0a","\xa4","\x27"),
	HX_HCSTRING("__tween","\x4b","\x03","\xcf","\x83"),
	HX_HCSTRING("__onResize","\x93","\xc3","\x60","\x8b"),
	HX_HCSTRING("__onMove","\xf0","\x56","\x1a","\x93"),
	HX_HCSTRING("__onChildAdded","\xa3","\x6a","\xc3","\xb3"),
	HX_HCSTRING("__onChildRemoved","\x43","\x34","\xfb","\x19"),
	HX_HCSTRING("__onParentChanged","\x2b","\xc5","\xbf","\xe1"),
	HX_HCSTRING("__onEnable","\x22","\x18","\x6d","\x7b"),
	HX_HCSTRING("__onDisable","\x69","\x6b","\x2f","\xb7"),
	HX_HCSTRING("__onPointerPress","\x65","\x20","\xde","\xc7"),
	HX_HCSTRING("__onPointerRelease","\x29","\xcf","\xf9","\x32"),
	HX_HCSTRING("__onPointerTap","\xc5","\xca","\xa7","\xb8"),
	HX_HCSTRING("__onPointerMove","\x6f","\xc8","\x93","\xd5"),
	HX_HCSTRING("__onPointerOver","\xb2","\x76","\xeb","\xd6"),
	HX_HCSTRING("__onPointerOut","\xf0","\x10","\xa4","\xb8"),
	HX_HCSTRING("__onInitialize","\x6f","\x56","\xbf","\xe5"),
	HX_HCSTRING("__onDispose","\x20","\x82","\x23","\xc1"),
	HX_HCSTRING("__listeningParentResize","\x39","\xeb","\xa0","\x6f"),
	HX_HCSTRING("__resizeCounter","\x48","\x9c","\x03","\x4d"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("removeChildren","\xa3","\x55","\xc0","\x3a"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"),
	HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"),
	HX_HCSTRING("getChildAt","\xb9","\x07","\x0e","\xb6"),
	HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"),
	HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"),
	HX_HCSTRING("getChild","\x26","\xb9","\x90","\xa5"),
	HX_HCSTRING("getChildAs","\xb8","\x07","\x0e","\xb6"),
	HX_HCSTRING("getDirectChild","\xbd","\x0c","\x8d","\x8c"),
	HX_HCSTRING("getParent","\x60","\x8e","\xd4","\x69"),
	HX_HCSTRING("getParentAs","\x72","\x1f","\xdd","\xf2"),
	HX_HCSTRING("isEnabled","\xb7","\x81","\x2f","\x82"),
	HX_HCSTRING("globalToLocal","\xcd","\x4e","\xae","\x6b"),
	HX_HCSTRING("localToGlobal","\xc9","\x41","\xeb","\x47"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("__createBackend","\x58","\xcd","\x7c","\x6b"),
	HX_HCSTRING("__propertyResized","\xfb","\x50","\xbf","\xac"),
	HX_HCSTRING("__resized","\xd0","\xac","\xc1","\xe4"),
	HX_HCSTRING("__propertyMoved","\x7e","\xd8","\x5d","\xde"),
	HX_HCSTRING("__moved","\x13","\x25","\xc4","\x76"),
	HX_HCSTRING("__originChanged","\x8e","\xa0","\x66","\xf9"),
	HX_HCSTRING("__offsetChanged","\x81","\xe2","\xb8","\x70"),
	HX_HCSTRING("__parentWidthProvider","\xad","\xd2","\x53","\x90"),
	HX_HCSTRING("__parentHeightProvider","\x22","\xa6","\x4f","\x38"),
	HX_HCSTRING("__parentResized","\xc6","\x10","\x3a","\xf5"),
	HX_HCSTRING("__reactParentResize","\xbd","\xe5","\x12","\xd4"),
	HX_HCSTRING("__affectParentResizeListener","\x27","\xb2","\x21","\xf6"),
	HX_HCSTRING("__updateParentResizeListener","\x1b","\x01","\x45","\xe1"),
	HX_HCSTRING("__initializeSelf","\x1c","\x5c","\x1f","\x84"),
	HX_HCSTRING("__initializeChildren","\xcf","\x71","\x94","\xe9"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("set_scaleX","\xcb","\xf8","\x2a","\x30"),
	HX_HCSTRING("set_scaleY","\xcc","\xf8","\x2a","\x30"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("set_skin","\x7a","\x2b","\x6d","\x7a"),
	HX_HCSTRING("set_layout","\xe7","\xbc","\xbd","\x4c"),
	HX_HCSTRING("set_style","\x94","\xed","\x17","\xab"),
	HX_HCSTRING("get_origin","\xaf","\x89","\x88","\x3b"),
	HX_HCSTRING("get_offset","\x5c","\x07","\xc7","\x50"),
	HX_HCSTRING("set___parent","\xc7","\x47","\xc0","\x5f"),
	HX_HCSTRING("set_enabled","\xa4","\x6b","\x98","\x0e"),
	HX_HCSTRING("get_tween","\xc2","\x06","\x1a","\x5d"),
	HX_HCSTRING("set_overflow","\xbf","\xba","\x4e","\x0b"),
	HX_HCSTRING("set_arrangeable","\x69","\x6f","\x97","\x42"),
	HX_HCSTRING("get_parent","\xf3","\x74","\x05","\xde"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_left","\x90","\xc3","\x6a","\xc7"),
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("get_top","\x2c","\x2f","\xcd","\x26"),
	HX_HCSTRING("get_bottom","\xb4","\x56","\x00","\x56"),
	HX_HCSTRING("get_skin","\x06","\xd2","\x0f","\xcc"),
	HX_HCSTRING("get_layout","\x73","\x1e","\x40","\x49"),
	HX_HCSTRING("set_left","\x04","\x1d","\xc8","\x75"),
	HX_HCSTRING("set_right","\x3f","\x54","\x5e","\x10"),
	HX_HCSTRING("set_top","\x38","\xc0","\xce","\x19"),
	HX_HCSTRING("set_bottom","\x28","\xf5","\x7d","\x59"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_onResize","\x7c","\x04","\x42","\x9d"),
	HX_HCSTRING("get_onMove","\x99","\x5b","\x72","\xdb"),
	HX_HCSTRING("get_onInitialize","\xd8","\xbf","\x9d","\xc9"),
	HX_HCSTRING("get_onDispose","\x17","\x0d","\x5b","\x54"),
	HX_HCSTRING("get_onChildAdded","\x0c","\xd4","\xa1","\x97"),
	HX_HCSTRING("get_onChildRemoved","\xec","\x89","\x55","\x81"),
	HX_HCSTRING("get_onEnable","\x0b","\x59","\x4e","\x8d"),
	HX_HCSTRING("get_onDisable","\x60","\xf6","\x66","\x4a"),
	HX_HCSTRING("get_onParentChanged","\x62","\x63","\x70","\xe9"),
	HX_HCSTRING("get_onPointerPress","\x0e","\x76","\x38","\x2f"),
	HX_HCSTRING("get_onPointerRelease","\x12","\xa1","\xd3","\xe5"),
	HX_HCSTRING("get_onPointerTap","\x2e","\x34","\x86","\x9c"),
	HX_HCSTRING("get_onClick","\xc0","\x7a","\x96","\x64"),
	HX_HCSTRING("get_onPointerMove","\xe6","\x9a","\x51","\x54"),
	HX_HCSTRING("get_onPointerOver","\x29","\x49","\xa9","\x55"),
	HX_HCSTRING("get_onPointerOut","\x59","\x7a","\x82","\x9c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Widget_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Widget_obj::MAX_RESIZE_DEPTH,"MAX_RESIZE_DEPTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Widget_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Widget_obj::MAX_RESIZE_DEPTH,"MAX_RESIZE_DEPTH");
};

#endif

hx::Class Widget_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MAX_RESIZE_DEPTH","\xf3","\x8e","\xa7","\x77"),
	::String(null()) };

void Widget_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.widgets.Widget","\xec","\x23","\xeb","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Widget_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Widget_obj >;
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

void Widget_obj::__boot()
{
	MAX_RESIZE_DEPTH= (int)5;
}

} // end namespace sx
} // end namespace widgets
