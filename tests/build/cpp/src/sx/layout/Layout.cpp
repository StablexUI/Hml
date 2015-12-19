#include <hxcpp.h>

#ifndef INCLUDED_sx_layout_Layout
#include <sx/layout/Layout.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
namespace sx{
namespace layout{

Void Layout_obj::__construct()
{
HX_STACK_FRAME("sx.layout.Layout","new",0xd05f71f7,"sx.layout.Layout.new","sx/layout/Layout.hx",17,0x6b358339)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	this->autoArrange = true;
}
;
	return null();
}

//Layout_obj::~Layout_obj() { }

Dynamic Layout_obj::__CreateEmpty() { return  new Layout_obj; }
hx::ObjectPtr< Layout_obj > Layout_obj::__new()
{  hx::ObjectPtr< Layout_obj > _result_ = new Layout_obj();
	_result_->__construct();
	return _result_;}

Dynamic Layout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Layout_obj > _result_ = new Layout_obj();
	_result_->__construct();
	return _result_;}

Void Layout_obj::arrangeChildren( ){
{
		HX_STACK_FRAME("sx.layout.Layout","arrangeChildren",0xc6acd0a2,"sx.layout.Layout.arrangeChildren","sx/layout/Layout.hx",41,0x6b358339)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,arrangeChildren,(void))

Void Layout_obj::usedBy( ::sx::widgets::Widget widget){
{
		HX_STACK_FRAME("sx.layout.Layout","usedBy",0x99e2cc3d,"sx.layout.Layout.usedBy","sx/layout/Layout.hx",51,0x6b358339)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widget,"widget")
		HX_STACK_LINE(52)
		::sx::widgets::Widget tmp = this->__widget;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		if ((tmp1)){
			HX_STACK_LINE(52)
			::sx::widgets::Widget tmp2 = this->__widget;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			tmp2->set_layout(null());
		}
		HX_STACK_LINE(53)
		this->__widget = widget;
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::sx::widgets::Widget tmp2 = this->__widget;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(55)
			::sx::signals::Signal tmp3 = tmp2->get_onResize();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			Dynamic tmp4 = this->__widgetResized_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			tmp3->add(tmp4);
			HX_STACK_LINE(55)
			::sx::widgets::Widget tmp5 = this->__widget;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(55)
			::sx::signals::Signal tmp6 = tmp5->get_onChildAdded();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(55)
			Dynamic tmp7 = this->__childAdded_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(55)
			tmp6->add(tmp7);
			HX_STACK_LINE(55)
			::sx::widgets::Widget tmp8 = this->__widget;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(55)
			::sx::signals::Signal tmp9 = tmp8->get_onChildRemoved();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(55)
			Dynamic tmp10 = this->__childRemoved_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(55)
			tmp9->add(tmp10);
		}
		HX_STACK_LINE(56)
		bool tmp2 = widget->initialized;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		if ((tmp2)){
			HX_STACK_LINE(57)
			this->arrangeChildren();
		}
		else{
			HX_STACK_LINE(59)
			::sx::signals::Signal tmp3 = widget->get_onInitialize();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(59)
			Dynamic tmp4 = this->__widgetInitialized_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(59)
			tmp3->add(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,usedBy,(void))

Void Layout_obj::removed( ){
{
		HX_STACK_FRAME("sx.layout.Layout","removed",0x9971d8b7,"sx.layout.Layout.removed","sx/layout/Layout.hx",69,0x6b358339)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		::sx::widgets::Widget tmp = this->__widget;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		if ((tmp1)){
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				::sx::widgets::Widget tmp2 = this->__widget;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(71)
				::sx::widgets::Widget widget = tmp2;		HX_STACK_VAR(widget,"widget");
				HX_STACK_LINE(71)
				bool tmp3 = widget->initialized;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(71)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(71)
				if ((tmp4)){
					HX_STACK_LINE(71)
					::sx::signals::Signal tmp5 = widget->get_onInitialize();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(71)
					Dynamic tmp6 = this->__widgetInitialized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(71)
					tmp5->remove(tmp6);
				}
				HX_STACK_LINE(71)
				::sx::signals::Signal tmp5 = widget->get_onResize();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(71)
				Dynamic tmp6 = this->__widgetResized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(71)
				tmp5->remove(tmp6);
				HX_STACK_LINE(71)
				::sx::signals::Signal tmp7 = widget->get_onChildAdded();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(71)
				Dynamic tmp8 = this->__childAdded_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(71)
				tmp7->remove(tmp8);
				HX_STACK_LINE(71)
				::sx::signals::Signal tmp9 = widget->get_onChildRemoved();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(71)
				Dynamic tmp10 = this->__childRemoved_dyn();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(71)
				tmp9->remove(tmp10);
			}
			HX_STACK_LINE(72)
			this->__widget = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,removed,(void))

bool Layout_obj::__isChildArrangeable( ::sx::widgets::Widget child){
	HX_STACK_FRAME("sx.layout.Layout","__isChildArrangeable",0x6a7c823d,"sx.layout.Layout.__isChildArrangeable","sx/layout/Layout.hx",81,0x6b358339)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(82)
	bool tmp = child->arrangeable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	if ((tmp)){
		HX_STACK_LINE(82)
		tmp1 = child->visible;
	}
	else{
		HX_STACK_LINE(82)
		tmp1 = false;
	}
	HX_STACK_LINE(82)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,__isChildArrangeable,return )

Void Layout_obj::__hookWidget( ::sx::widgets::Widget widget){
{
		HX_STACK_FRAME("sx.layout.Layout","__hookWidget",0x1444eab0,"sx.layout.Layout.__hookWidget","sx/layout/Layout.hx",90,0x6b358339)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widget,"widget")
		HX_STACK_LINE(91)
		::sx::widgets::Widget tmp = this->__widget;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		::sx::signals::Signal tmp1 = tmp->get_onResize();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		Dynamic tmp2 = this->__widgetResized_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		tmp1->add(tmp2);
		HX_STACK_LINE(92)
		::sx::widgets::Widget tmp3 = this->__widget;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		::sx::signals::Signal tmp4 = tmp3->get_onChildAdded();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		Dynamic tmp5 = this->__childAdded_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(92)
		tmp4->add(tmp5);
		HX_STACK_LINE(93)
		::sx::widgets::Widget tmp6 = this->__widget;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		::sx::signals::Signal tmp7 = tmp6->get_onChildRemoved();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(93)
		Dynamic tmp8 = this->__childRemoved_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		tmp7->add(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,__hookWidget,(void))

Void Layout_obj::__releaseWidget( ::sx::widgets::Widget widget){
{
		HX_STACK_FRAME("sx.layout.Layout","__releaseWidget",0xb2cb19e2,"sx.layout.Layout.__releaseWidget","sx/layout/Layout.hx",101,0x6b358339)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widget,"widget")
		HX_STACK_LINE(102)
		bool tmp = widget->initialized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		if ((tmp1)){
			HX_STACK_LINE(103)
			::sx::signals::Signal tmp2 = widget->get_onInitialize();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			Dynamic tmp3 = this->__widgetInitialized_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(103)
			tmp2->remove(tmp3);
		}
		HX_STACK_LINE(106)
		::sx::signals::Signal tmp2 = widget->get_onResize();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		Dynamic tmp3 = this->__widgetResized_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		tmp2->remove(tmp3);
		HX_STACK_LINE(107)
		::sx::signals::Signal tmp4 = widget->get_onChildAdded();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		Dynamic tmp5 = this->__childAdded_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		tmp4->remove(tmp5);
		HX_STACK_LINE(108)
		::sx::signals::Signal tmp6 = widget->get_onChildRemoved();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(108)
		Dynamic tmp7 = this->__childRemoved_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(108)
		tmp6->remove(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,__releaseWidget,(void))

Void Layout_obj::__widgetInitialized( ::sx::widgets::Widget widget){
{
		HX_STACK_FRAME("sx.layout.Layout","__widgetInitialized",0xa0eed427,"sx.layout.Layout.__widgetInitialized","sx/layout/Layout.hx",116,0x6b358339)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widget,"widget")
		HX_STACK_LINE(117)
		::sx::signals::Signal tmp = widget->get_onInitialize();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		Dynamic tmp1 = this->__widgetInitialized_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		tmp->remove(tmp1);
		HX_STACK_LINE(118)
		bool tmp2 = this->autoArrange;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		if ((tmp2)){
			HX_STACK_LINE(118)
			::sx::widgets::Widget tmp4 = this->__widget;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(118)
			::sx::widgets::Widget tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(118)
			::sx::widgets::Widget tmp6 = widget;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(118)
			tmp3 = (tmp5 == tmp6);
		}
		else{
			HX_STACK_LINE(118)
			tmp3 = false;
		}
		HX_STACK_LINE(118)
		if ((tmp3)){
			HX_STACK_LINE(119)
			this->arrangeChildren();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,__widgetInitialized,(void))

Void Layout_obj::__childAdded( ::sx::widgets::Widget parent,::sx::widgets::Widget child){
{
		HX_STACK_FRAME("sx.layout.Layout","__childAdded",0x8b37b42d,"sx.layout.Layout.__childAdded","sx/layout/Layout.hx",128,0x6b358339)
		HX_STACK_THIS(this)
		HX_STACK_ARG(parent,"parent")
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(129)
		bool tmp = this->autoArrange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		if ((tmp1)){
			HX_STACK_LINE(129)
			::sx::widgets::Widget tmp3 = this->__widget;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(129)
			::sx::widgets::Widget tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(129)
			::sx::widgets::Widget tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(129)
			tmp2 = tmp5->initialized;
		}
		else{
			HX_STACK_LINE(129)
			tmp2 = false;
		}
		HX_STACK_LINE(129)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		if ((tmp2)){
			HX_STACK_LINE(129)
			::sx::widgets::Widget tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(129)
			::sx::widgets::Widget tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(129)
			tmp3 = this->__isChildArrangeable(tmp5);
		}
		else{
			HX_STACK_LINE(129)
			tmp3 = false;
		}
		HX_STACK_LINE(129)
		if ((tmp3)){
			HX_STACK_LINE(130)
			this->arrangeChildren();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Layout_obj,__childAdded,(void))

Void Layout_obj::__childRemoved( ::sx::widgets::Widget parent,::sx::widgets::Widget child){
{
		HX_STACK_FRAME("sx.layout.Layout","__childRemoved",0xee3c744d,"sx.layout.Layout.__childRemoved","sx/layout/Layout.hx",139,0x6b358339)
		HX_STACK_THIS(this)
		HX_STACK_ARG(parent,"parent")
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(140)
		bool tmp = this->autoArrange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		if ((tmp1)){
			HX_STACK_LINE(140)
			::sx::widgets::Widget tmp3 = this->__widget;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			::sx::widgets::Widget tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			::sx::widgets::Widget tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			tmp2 = tmp5->initialized;
		}
		else{
			HX_STACK_LINE(140)
			tmp2 = false;
		}
		HX_STACK_LINE(140)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		if ((tmp2)){
			HX_STACK_LINE(140)
			::sx::widgets::Widget tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			::sx::widgets::Widget tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			tmp3 = this->__isChildArrangeable(tmp5);
		}
		else{
			HX_STACK_LINE(140)
			tmp3 = false;
		}
		HX_STACK_LINE(140)
		if ((tmp3)){
			HX_STACK_LINE(141)
			this->arrangeChildren();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Layout_obj,__childRemoved,(void))

Void Layout_obj::__widgetResized( ::sx::widgets::Widget widget,::sx::properties::metric::Size changed,::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.layout.Layout","__widgetResized",0x5d6a7583,"sx.layout.Layout.__widgetResized","sx/layout/Layout.hx",150,0x6b358339)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widget,"widget")
		HX_STACK_ARG(changed,"changed")
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(151)
		bool tmp = this->autoArrange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		if ((tmp)){
			HX_STACK_LINE(151)
			::sx::widgets::Widget tmp2 = this->__widget;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			::sx::widgets::Widget tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(151)
			tmp1 = tmp3->initialized;
		}
		else{
			HX_STACK_LINE(151)
			tmp1 = false;
		}
		HX_STACK_LINE(151)
		if ((tmp1)){
			HX_STACK_LINE(152)
			this->arrangeChildren();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Layout_obj,__widgetResized,(void))


Layout_obj::Layout_obj()
{
}

void Layout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Layout);
	HX_MARK_MEMBER_NAME(autoArrange,"autoArrange");
	HX_MARK_MEMBER_NAME(__widget,"__widget");
	HX_MARK_END_CLASS();
}

void Layout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(autoArrange,"autoArrange");
	HX_VISIT_MEMBER_NAME(__widget,"__widget");
}

Dynamic Layout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"usedBy") ) { return usedBy_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"removed") ) { return removed_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__widget") ) { return __widget; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoArrange") ) { return autoArrange; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__hookWidget") ) { return __hookWidget_dyn(); }
		if (HX_FIELD_EQ(inName,"__childAdded") ) { return __childAdded_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__childRemoved") ) { return __childRemoved_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"arrangeChildren") ) { return arrangeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"__releaseWidget") ) { return __releaseWidget_dyn(); }
		if (HX_FIELD_EQ(inName,"__widgetResized") ) { return __widgetResized_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__widgetInitialized") ) { return __widgetInitialized_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__isChildArrangeable") ) { return __isChildArrangeable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Layout_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__widget") ) { __widget=inValue.Cast< ::sx::widgets::Widget >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoArrange") ) { autoArrange=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Layout_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Layout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("autoArrange","\x7d","\x6b","\x54","\x20"));
	outFields->push(HX_HCSTRING("__widget","\xe4","\x1a","\x22","\xf4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Layout_obj,autoArrange),HX_HCSTRING("autoArrange","\x7d","\x6b","\x54","\x20")},
	{hx::fsObject /*::sx::widgets::Widget*/ ,(int)offsetof(Layout_obj,__widget),HX_HCSTRING("__widget","\xe4","\x1a","\x22","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("autoArrange","\x7d","\x6b","\x54","\x20"),
	HX_HCSTRING("__widget","\xe4","\x1a","\x22","\xf4"),
	HX_HCSTRING("arrangeChildren","\x8b","\xa8","\xa9","\x5e"),
	HX_HCSTRING("usedBy","\x74","\x95","\xe4","\x41"),
	HX_HCSTRING("removed","\xa0","\x1f","\x00","\xf3"),
	HX_HCSTRING("__isChildArrangeable","\xb4","\x5d","\xbb","\x44"),
	HX_HCSTRING("__hookWidget","\x27","\xf7","\x5f","\x7c"),
	HX_HCSTRING("__releaseWidget","\xcb","\xf1","\xc7","\x4a"),
	HX_HCSTRING("__widgetInitialized","\x90","\x54","\x00","\x36"),
	HX_HCSTRING("__childAdded","\xa4","\xc0","\x52","\xf3"),
	HX_HCSTRING("__childRemoved","\x84","\xcc","\x8c","\xdc"),
	HX_HCSTRING("__widgetResized","\x6c","\x4d","\x67","\xf5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Layout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Layout_obj::__mClass,"__mClass");
};

#endif

hx::Class Layout_obj::__mClass;

void Layout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.layout.Layout","\x85","\xaa","\x3b","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Layout_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Layout_obj >;
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
} // end namespace layout
