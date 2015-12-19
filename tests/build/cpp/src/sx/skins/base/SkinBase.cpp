#include <hxcpp.h>

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
#ifndef INCLUDED_sx_skins_base_SkinBase
#include <sx/skins/base/SkinBase.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
namespace sx{
namespace skins{
namespace base{

Void SkinBase_obj::__construct()
{
HX_STACK_FRAME("sx.skins.base.SkinBase","new",0xfd56b9dc,"sx.skins.base.SkinBase.new","sx/skins/base/SkinBase.hx",29,0x38423d75)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SkinBase_obj::~SkinBase_obj() { }

Dynamic SkinBase_obj::__CreateEmpty() { return  new SkinBase_obj; }
hx::ObjectPtr< SkinBase_obj > SkinBase_obj::__new()
{  hx::ObjectPtr< SkinBase_obj > _result_ = new SkinBase_obj();
	_result_->__construct();
	return _result_;}

Dynamic SkinBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SkinBase_obj > _result_ = new SkinBase_obj();
	_result_->__construct();
	return _result_;}

Void SkinBase_obj::refresh( ){
{
		HX_STACK_FRAME("sx.skins.base.SkinBase","refresh",0x55fc3157,"sx.skins.base.SkinBase.refresh","sx/skins/base/SkinBase.hx",38,0x38423d75)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SkinBase_obj,refresh,(void))

bool SkinBase_obj::hasPadding( ){
	HX_STACK_FRAME("sx.skins.base.SkinBase","hasPadding",0x80bcbf9b,"sx.skins.base.SkinBase.hasPadding","sx/skins/base/SkinBase.hx",47,0x38423d75)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	::sx::properties::metric::Padding tmp = this->__padding;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SkinBase_obj,hasPadding,return )

Void SkinBase_obj::usedBy( ::sx::widgets::Widget widget){
{
		HX_STACK_FRAME("sx.skins.base.SkinBase","usedBy",0x26cfc178,"sx.skins.base.SkinBase.usedBy","sx/skins/base/SkinBase.hx",58,0x38423d75)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widget,"widget")
		HX_STACK_LINE(59)
		::sx::widgets::Widget tmp = this->__widget;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		if ((tmp1)){
			HX_STACK_LINE(59)
			::sx::widgets::Widget tmp2 = this->__widget;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			tmp2->set_skin(null());
		}
		HX_STACK_LINE(61)
		this->__widget = widget;
		HX_STACK_LINE(62)
		::sx::widgets::Widget tmp2 = this->__widget;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		::sx::signals::Signal tmp3 = tmp2->get_onResize();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		Dynamic tmp4 = this->__widgetResized_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		tmp3->add(tmp4);
		HX_STACK_LINE(63)
		::sx::widgets::Widget tmp5 = this->__widget;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		bool tmp6 = tmp5->initialized;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		if ((tmp6)){
			HX_STACK_LINE(63)
			this->refresh();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkinBase_obj,usedBy,(void))

Void SkinBase_obj::removed( ){
{
		HX_STACK_FRAME("sx.skins.base.SkinBase","removed",0x5bdb771c,"sx.skins.base.SkinBase.removed","sx/skins/base/SkinBase.hx",72,0x38423d75)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::sx::widgets::Widget tmp = this->__widget;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		if ((tmp1)){
			HX_STACK_LINE(74)
			::sx::widgets::Widget tmp2 = this->__widget;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(74)
			::sx::signals::Signal tmp3 = tmp2->get_onResize();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			Dynamic tmp4 = this->__widgetResized_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			tmp3->remove(tmp4);
			HX_STACK_LINE(75)
			this->__widget = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SkinBase_obj,removed,(void))

Void SkinBase_obj::__widgetResized( ::sx::widgets::Widget widget,::sx::properties::metric::Size changed,::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.skins.base.SkinBase","__widgetResized",0x68e080e8,"sx.skins.base.SkinBase.__widgetResized","sx/skins/base/SkinBase.hx",84,0x38423d75)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widget,"widget")
		HX_STACK_ARG(changed,"changed")
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(85)
		::sx::widgets::Widget tmp = this->__widget;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		bool tmp1 = tmp->initialized;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		if ((tmp1)){
			HX_STACK_LINE(85)
			this->refresh();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(SkinBase_obj,__widgetResized,(void))

::sx::properties::metric::Size SkinBase_obj::__widgetWidthProvider( ){
	HX_STACK_FRAME("sx.skins.base.SkinBase","__widgetWidthProvider",0x2e48084f,"sx.skins.base.SkinBase.__widgetWidthProvider","sx/skins/base/SkinBase.hx",93,0x38423d75)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	::sx::widgets::Widget tmp = this->__widget;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	::sx::properties::metric::Size tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	if ((tmp1)){
		HX_STACK_LINE(94)
		tmp2 = ::sx::properties::metric::_Size::Size_Internal_ZeroSize_obj::instance;
	}
	else{
		HX_STACK_LINE(94)
		::sx::widgets::Widget tmp3 = this->__widget;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		tmp2 = tmp3->get_width();
	}
	HX_STACK_LINE(94)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(SkinBase_obj,__widgetWidthProvider,return )

::sx::properties::metric::Size SkinBase_obj::__widgetHeightProvider( ){
	HX_STACK_FRAME("sx.skins.base.SkinBase","__widgetHeightProvider",0xd00a5e40,"sx.skins.base.SkinBase.__widgetHeightProvider","sx/skins/base/SkinBase.hx",102,0x38423d75)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	::sx::widgets::Widget tmp = this->__widget;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	::sx::properties::metric::Size tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	if ((tmp1)){
		HX_STACK_LINE(103)
		tmp2 = ::sx::properties::metric::_Size::Size_Internal_ZeroSize_obj::instance;
	}
	else{
		HX_STACK_LINE(103)
		::sx::widgets::Widget tmp3 = this->__widget;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		tmp2 = tmp3->get_width();
	}
	HX_STACK_LINE(103)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(SkinBase_obj,__widgetHeightProvider,return )

::sx::properties::metric::Padding SkinBase_obj::get_padding( ){
	HX_STACK_FRAME("sx.skins.base.SkinBase","get_padding",0x0afa7f64,"sx.skins.base.SkinBase.get_padding","sx/skins/base/SkinBase.hx",111,0x38423d75)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	::sx::properties::metric::Padding tmp = this->__padding;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	if ((tmp1)){
		HX_STACK_LINE(113)
		::sx::properties::metric::Padding tmp2 = ::sx::properties::metric::Padding_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		this->__padding = tmp2;
		HX_STACK_LINE(114)
		Dynamic tmp3 = this->__widgetWidthProvider_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		::sx::properties::metric::Padding tmp4 = this->__padding;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(114)
		tmp4->ownerWidth = tmp3;
		HX_STACK_LINE(115)
		Dynamic tmp5 = this->__widgetHeightProvider_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		::sx::properties::metric::Padding tmp6 = this->__padding;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(115)
		tmp6->ownerWidth = tmp5;
	}
	HX_STACK_LINE(118)
	::sx::properties::metric::Padding tmp2 = this->__padding;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(118)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(SkinBase_obj,get_padding,return )

::sx::properties::metric::Padding SkinBase_obj::set_padding( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.skins.base.SkinBase","set_padding",0x15678670,"sx.skins.base.SkinBase.set_padding","sx/skins/base/SkinBase.hx",123,0x38423d75)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(123)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	{
		HX_STACK_LINE(123)
		::sx::properties::metric::Padding tmp1 = this->get_padding();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		::sx::properties::metric::Size tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		tmp1->copyValueFrom(tmp2);
		HX_STACK_LINE(123)
		::sx::properties::metric::Padding tmp3 = this->get_padding();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		return tmp3;
	}
	HX_STACK_LINE(123)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(SkinBase_obj,set_padding,return )


SkinBase_obj::SkinBase_obj()
{
}

void SkinBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkinBase);
	HX_MARK_MEMBER_NAME(__padding,"__padding");
	HX_MARK_MEMBER_NAME(__widget,"__widget");
	HX_MARK_END_CLASS();
}

void SkinBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__padding,"__padding");
	HX_VISIT_MEMBER_NAME(__widget,"__widget");
}

Dynamic SkinBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"usedBy") ) { return usedBy_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == hx::paccAlways) return get_padding(); }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"removed") ) { return removed_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__widget") ) { return __widget; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__padding") ) { return __padding; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hasPadding") ) { return hasPadding_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_padding") ) { return get_padding_dyn(); }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return set_padding_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__widgetResized") ) { return __widgetResized_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__widgetWidthProvider") ) { return __widgetWidthProvider_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__widgetHeightProvider") ) { return __widgetHeightProvider_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SkinBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == hx::paccAlways) return set_padding(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__widget") ) { __widget=inValue.Cast< ::sx::widgets::Widget >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__padding") ) { __padding=inValue.Cast< ::sx::properties::metric::Padding >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SkinBase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SkinBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	outFields->push(HX_HCSTRING("__padding","\xb1","\xaa","\xcb","\x51"));
	outFields->push(HX_HCSTRING("__widget","\xe4","\x1a","\x22","\xf4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sx::properties::metric::Padding*/ ,(int)offsetof(SkinBase_obj,__padding),HX_HCSTRING("__padding","\xb1","\xaa","\xcb","\x51")},
	{hx::fsObject /*::sx::widgets::Widget*/ ,(int)offsetof(SkinBase_obj,__widget),HX_HCSTRING("__widget","\xe4","\x1a","\x22","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__padding","\xb1","\xaa","\xcb","\x51"),
	HX_HCSTRING("__widget","\xe4","\x1a","\x22","\xf4"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("hasPadding","\x97","\x41","\x31","\x5b"),
	HX_HCSTRING("usedBy","\x74","\x95","\xe4","\x41"),
	HX_HCSTRING("removed","\xa0","\x1f","\x00","\xf3"),
	HX_HCSTRING("__widgetResized","\x6c","\x4d","\x67","\xf5"),
	HX_HCSTRING("__widgetWidthProvider","\xd3","\x0f","\x01","\x6f"),
	HX_HCSTRING("__widgetHeightProvider","\x3c","\xea","\x37","\x31"),
	HX_HCSTRING("get_padding","\xe8","\xb9","\x77","\x56"),
	HX_HCSTRING("set_padding","\xf4","\xc0","\xe4","\x60"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkinBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkinBase_obj::__mClass,"__mClass");
};

#endif

hx::Class SkinBase_obj::__mClass;

void SkinBase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.skins.base.SkinBase","\xea","\xdb","\x4d","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SkinBase_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SkinBase_obj >;
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
} // end namespace skins
} // end namespace base
