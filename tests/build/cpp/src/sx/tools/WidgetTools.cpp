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
#ifndef INCLUDED_sx_tools_WidgetTools
#include <sx/tools/WidgetTools.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
namespace sx{
namespace tools{

Void WidgetTools_obj::__construct()
{
	return null();
}

//WidgetTools_obj::~WidgetTools_obj() { }

Dynamic WidgetTools_obj::__CreateEmpty() { return  new WidgetTools_obj; }
hx::ObjectPtr< WidgetTools_obj > WidgetTools_obj::__new()
{  hx::ObjectPtr< WidgetTools_obj > _result_ = new WidgetTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic WidgetTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WidgetTools_obj > _result_ = new WidgetTools_obj();
	_result_->__construct();
	return _result_;}

bool WidgetTools_obj::sizeDependsOnParent( ::sx::widgets::Widget widget){
	HX_STACK_FRAME("sx.tools.WidgetTools","sizeDependsOnParent",0xf8983f5c,"sx.tools.WidgetTools.sizeDependsOnParent","sx/tools/WidgetTools.hx",22,0xc6914d25)
	HX_STACK_ARG(widget,"widget")
	HX_STACK_LINE(23)
	::sx::properties::metric::Size tmp = widget->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1 = tmp->units;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	bool tmp2 = (tmp1 == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	if ((tmp3)){
		HX_STACK_LINE(23)
		::sx::properties::metric::Size tmp5 = widget->get_height();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		::sx::properties::metric::Size tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		::String tmp7 = tmp6->units;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(23)
		tmp4 = (tmp7 == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));
	}
	else{
		HX_STACK_LINE(23)
		tmp4 = true;
	}
	HX_STACK_LINE(23)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WidgetTools_obj,sizeDependsOnParent,return )

bool WidgetTools_obj::positionDependsOnParent( ::sx::widgets::Widget widget){
	HX_STACK_FRAME("sx.tools.WidgetTools","positionDependsOnParent",0x6ef54ef4,"sx.tools.WidgetTools.positionDependsOnParent","sx/tools/WidgetTools.hx",31,0xc6914d25)
	HX_STACK_ARG(widget,"widget")
	HX_STACK_LINE(32)
	::sx::properties::metric::Coordinate tmp = widget->get_left();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::sx::properties::metric::Coordinate left = tmp;		HX_STACK_VAR(left,"left");
	HX_STACK_LINE(33)
	bool tmp1 = left->selected;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	if ((tmp1)){
		HX_STACK_LINE(33)
		tmp2 = (left->units == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));
	}
	else{
		HX_STACK_LINE(33)
		tmp2 = false;
	}
	HX_STACK_LINE(33)
	if ((tmp2)){
		HX_STACK_LINE(33)
		return true;
	}
	HX_STACK_LINE(34)
	::sx::properties::metric::Coordinate tmp3 = widget->get_right();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	bool tmp4 = tmp3->selected;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	if ((tmp4)){
		HX_STACK_LINE(34)
		return true;
	}
	HX_STACK_LINE(36)
	::sx::properties::metric::Coordinate tmp5 = widget->get_top();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(36)
	::sx::properties::metric::Coordinate top = tmp5;		HX_STACK_VAR(top,"top");
	HX_STACK_LINE(37)
	bool tmp6 = top->selected;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(37)
	if ((tmp6)){
		HX_STACK_LINE(37)
		tmp7 = (top->units == HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));
	}
	else{
		HX_STACK_LINE(37)
		tmp7 = false;
	}
	HX_STACK_LINE(37)
	if ((tmp7)){
		HX_STACK_LINE(37)
		return true;
	}
	HX_STACK_LINE(38)
	::sx::properties::metric::Coordinate tmp8 = widget->get_bottom();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(38)
	bool tmp9 = tmp8->selected;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(38)
	if ((tmp9)){
		HX_STACK_LINE(38)
		return true;
	}
	HX_STACK_LINE(40)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WidgetTools_obj,positionDependsOnParent,return )

bool WidgetTools_obj::positionDependsOnSize( ::sx::widgets::Widget widget){
	HX_STACK_FRAME("sx.tools.WidgetTools","positionDependsOnSize",0xba74040b,"sx.tools.WidgetTools.positionDependsOnSize","sx/tools/WidgetTools.hx",48,0xc6914d25)
	HX_STACK_ARG(widget,"widget")
	HX_STACK_LINE(49)
	::sx::properties::metric::Coordinate tmp = widget->get_bottom();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	bool tmp1 = tmp->selected;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	if ((tmp2)){
		HX_STACK_LINE(49)
		::sx::properties::metric::Coordinate tmp4 = widget->get_right();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		::sx::properties::metric::Coordinate tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		tmp3 = tmp5->selected;
	}
	else{
		HX_STACK_LINE(49)
		tmp3 = true;
	}
	HX_STACK_LINE(49)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WidgetTools_obj,positionDependsOnSize,return )

::sx::properties::metric::Coordinate WidgetTools_obj::coordinate( ::sx::widgets::Widget widget,::String side){
	HX_STACK_FRAME("sx.tools.WidgetTools","coordinate",0xe7f02d4b,"sx.tools.WidgetTools.coordinate","sx/tools/WidgetTools.hx",57,0xc6914d25)
	HX_STACK_ARG(widget,"widget")
	HX_STACK_ARG(side,"side")
	HX_STACK_LINE(58)
	::String tmp = side;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::sx::properties::metric::Coordinate tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
		HX_STACK_LINE(59)
		tmp1 = widget->get_left();
	}
	else if (  ( _switch_1==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
		HX_STACK_LINE(60)
		tmp1 = widget->get_right();
	}
	else if (  ( _switch_1==HX_HCSTRING("top","\x95","\x66","\x58","\x00"))){
		HX_STACK_LINE(61)
		tmp1 = widget->get_top();
	}
	else if (  ( _switch_1==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"))){
		HX_STACK_LINE(62)
		tmp1 = widget->get_bottom();
	}
	HX_STACK_LINE(58)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(WidgetTools_obj,coordinate,return )

::sx::properties::metric::Coordinate WidgetTools_obj::selectedCoordinate( ::sx::widgets::Widget widget,::String orientation){
	HX_STACK_FRAME("sx.tools.WidgetTools","selectedCoordinate",0xa0568686,"sx.tools.WidgetTools.selectedCoordinate","sx/tools/WidgetTools.hx",71,0xc6914d25)
	HX_STACK_ARG(widget,"widget")
	HX_STACK_ARG(orientation,"orientation")
	HX_STACK_LINE(72)
	::String tmp = orientation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	::sx::properties::metric::Coordinate tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	::String _switch_2 = (tmp);
	if (  ( _switch_2==HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"))){
		HX_STACK_LINE(73)
		::sx::properties::metric::Coordinate tmp2 = widget->get_left();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		bool tmp3 = tmp2->selected;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		if ((tmp3)){
			HX_STACK_LINE(73)
			tmp1 = widget->get_left();
		}
		else{
			HX_STACK_LINE(73)
			tmp1 = widget->get_right();
		}
	}
	else if (  ( _switch_2==HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"))){
		HX_STACK_LINE(74)
		::sx::properties::metric::Coordinate tmp2 = widget->get_top();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		bool tmp3 = tmp2->selected;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		if ((tmp3)){
			HX_STACK_LINE(74)
			tmp1 = widget->get_top();
		}
		else{
			HX_STACK_LINE(74)
			tmp1 = widget->get_bottom();
		}
	}
	HX_STACK_LINE(72)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(WidgetTools_obj,selectedCoordinate,return )

::String WidgetTools_obj::selectedSide( ::sx::widgets::Widget widget,::String orientation){
	HX_STACK_FRAME("sx.tools.WidgetTools","selectedSide",0x9dddbf25,"sx.tools.WidgetTools.selectedSide","sx/tools/WidgetTools.hx",83,0xc6914d25)
	HX_STACK_ARG(widget,"widget")
	HX_STACK_ARG(orientation,"orientation")
	HX_STACK_LINE(84)
	::String tmp = orientation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	::String _switch_3 = (tmp);
	if (  ( _switch_3==HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"))){
		HX_STACK_LINE(85)
		::sx::properties::metric::Coordinate tmp2 = widget->get_left();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		bool tmp3 = tmp2->selected;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		if ((tmp3)){
			HX_STACK_LINE(85)
			tmp1 = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
		}
		else{
			HX_STACK_LINE(85)
			tmp1 = HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9");
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"))){
		HX_STACK_LINE(86)
		::sx::properties::metric::Coordinate tmp2 = widget->get_top();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		bool tmp3 = tmp2->selected;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		if ((tmp3)){
			HX_STACK_LINE(86)
			tmp1 = HX_HCSTRING("top","\x95","\x66","\x58","\x00");
		}
		else{
			HX_STACK_LINE(86)
			tmp1 = HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65");
		}
	}
	HX_STACK_LINE(84)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(WidgetTools_obj,selectedSide,return )

::sx::properties::metric::Size WidgetTools_obj::size( ::sx::widgets::Widget widget,::String orientation){
	HX_STACK_FRAME("sx.tools.WidgetTools","size",0x8b6e6754,"sx.tools.WidgetTools.size","sx/tools/WidgetTools.hx",95,0xc6914d25)
	HX_STACK_ARG(widget,"widget")
	HX_STACK_ARG(orientation,"orientation")
	HX_STACK_LINE(96)
	::String tmp = orientation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	::sx::properties::metric::Size tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	::String _switch_4 = (tmp);
	if (  ( _switch_4==HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"))){
		HX_STACK_LINE(97)
		tmp1 = widget->get_width();
	}
	else if (  ( _switch_4==HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"))){
		HX_STACK_LINE(98)
		tmp1 = widget->get_height();
	}
	HX_STACK_LINE(96)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(WidgetTools_obj,size,return )

::sx::widgets::Widget WidgetTools_obj::findEnabled( ::sx::widgets::Widget widget){
	HX_STACK_FRAME("sx.tools.WidgetTools","findEnabled",0x927d4715,"sx.tools.WidgetTools.findEnabled","sx/tools/WidgetTools.hx",107,0xc6914d25)
	HX_STACK_ARG(widget,"widget")
	HX_STACK_LINE(108)
	::sx::widgets::Widget current = widget;		HX_STACK_VAR(current,"current");
	HX_STACK_LINE(109)
	bool useNextEnabled = false;		HX_STACK_VAR(useNextEnabled,"useNextEnabled");
	HX_STACK_LINE(111)
	while((true)){
		HX_STACK_LINE(111)
		bool tmp = (current != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		if ((tmp1)){
			HX_STACK_LINE(111)
			break;
		}
		HX_STACK_LINE(112)
		bool tmp2 = useNextEnabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		if ((tmp2)){
			HX_STACK_LINE(113)
			bool tmp3 = current->enabled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			if ((tmp3)){
				HX_STACK_LINE(114)
				widget = current;
				HX_STACK_LINE(115)
				useNextEnabled = false;
				HX_STACK_LINE(116)
				break;
			}
		}
		else{
			HX_STACK_LINE(119)
			bool tmp3 = current->enabled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(119)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(119)
			if ((tmp4)){
				HX_STACK_LINE(120)
				useNextEnabled = true;
			}
		}
		HX_STACK_LINE(124)
		::sx::widgets::Widget tmp3 = current->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		current = tmp3;
	}
	HX_STACK_LINE(127)
	bool tmp = useNextEnabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	if ((tmp)){
		HX_STACK_LINE(128)
		widget = null();
	}
	HX_STACK_LINE(131)
	::sx::widgets::Widget tmp1 = widget;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WidgetTools_obj,findEnabled,return )

bool WidgetTools_obj::hasOrigin( ::sx::widgets::Widget widget){
	HX_STACK_FRAME("sx.tools.WidgetTools","hasOrigin",0xbe77516d,"sx.tools.WidgetTools.hasOrigin","sx/tools/WidgetTools.hx",140,0xc6914d25)
	HX_STACK_ARG(widget,"widget")
	HX_STACK_LINE(141)
	bool tmp = (widget->__origin != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WidgetTools_obj,hasOrigin,return )

bool WidgetTools_obj::hasOffset( ::sx::widgets::Widget widget){
	HX_STACK_FRAME("sx.tools.WidgetTools","hasOffset",0xd3b5cf1a,"sx.tools.WidgetTools.hasOffset","sx/tools/WidgetTools.hx",150,0xc6914d25)
	HX_STACK_ARG(widget,"widget")
	HX_STACK_LINE(151)
	bool tmp = (widget->__offset != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WidgetTools_obj,hasOffset,return )

bool WidgetTools_obj::isArrangeable( ::sx::widgets::Widget widget){
	HX_STACK_FRAME("sx.tools.WidgetTools","isArrangeable",0xa02dda09,"sx.tools.WidgetTools.isArrangeable","sx/tools/WidgetTools.hx",159,0xc6914d25)
	HX_STACK_ARG(widget,"widget")
	HX_STACK_LINE(160)
	bool tmp = widget->arrangeable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	if ((tmp)){
		HX_STACK_LINE(160)
		tmp1 = widget->visible;
	}
	else{
		HX_STACK_LINE(160)
		tmp1 = false;
	}
	HX_STACK_LINE(160)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WidgetTools_obj,isArrangeable,return )


WidgetTools_obj::WidgetTools_obj()
{
}

bool WidgetTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { outValue = size_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasOrigin") ) { outValue = hasOrigin_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hasOffset") ) { outValue = hasOffset_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"coordinate") ) { outValue = coordinate_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"findEnabled") ) { outValue = findEnabled_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedSide") ) { outValue = selectedSide_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isArrangeable") ) { outValue = isArrangeable_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"selectedCoordinate") ) { outValue = selectedCoordinate_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sizeDependsOnParent") ) { outValue = sizeDependsOnParent_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"positionDependsOnSize") ) { outValue = positionDependsOnSize_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"positionDependsOnParent") ) { outValue = positionDependsOnParent_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WidgetTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WidgetTools_obj::__mClass,"__mClass");
};

#endif

hx::Class WidgetTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sizeDependsOnParent","\x8f","\xa8","\xfc","\x89"),
	HX_HCSTRING("positionDependsOnParent","\xa7","\xcd","\xb1","\xf2"),
	HX_HCSTRING("positionDependsOnSize","\xfe","\x5f","\xab","\xbc"),
	HX_HCSTRING("coordinate","\x78","\xb6","\xa9","\xde"),
	HX_HCSTRING("selectedCoordinate","\xb3","\x84","\xb0","\xbd"),
	HX_HCSTRING("selectedSide","\x92","\xad","\xed","\xdc"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("findEnabled","\x48","\xc5","\x1b","\x7e"),
	HX_HCSTRING("hasOrigin","\xe0","\xcc","\xe9","\x8b"),
	HX_HCSTRING("hasOffset","\x8d","\x4a","\x28","\xa1"),
	HX_HCSTRING("isArrangeable","\xfc","\x8a","\x0e","\x8f"),
	::String(null()) };

void WidgetTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.tools.WidgetTools","\xbb","\x22","\x35","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WidgetTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< WidgetTools_obj >;
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
} // end namespace tools
