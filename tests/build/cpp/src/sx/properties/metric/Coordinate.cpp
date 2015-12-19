#include <hxcpp.h>

#ifndef INCLUDED_sx_properties_metric_Coordinate
#include <sx/properties/metric/Coordinate.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
#ifndef INCLUDED_sx_properties_metric__Size_Size_Internal_ZeroSize
#include <sx/properties/metric/_Size/Size_Internal_ZeroSize.h>
#endif
namespace sx{
namespace properties{
namespace metric{

Void Coordinate_obj::__construct(::String __o_orientation)
{
HX_STACK_FRAME("sx.properties.metric.Coordinate","new",0xb41d8136,"sx.properties.metric.Coordinate.new","sx/properties/metric/Coordinate.hx",12,0x774c67f9)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_orientation,"orientation")
::String orientation = __o_orientation.Default(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));
{
	HX_STACK_LINE(22)
	this->selected = false;
	HX_STACK_LINE(12)
	::String tmp = orientation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	super::__construct(tmp);
}
;
	return null();
}

//Coordinate_obj::~Coordinate_obj() { }

Dynamic Coordinate_obj::__CreateEmpty() { return  new Coordinate_obj; }
hx::ObjectPtr< Coordinate_obj > Coordinate_obj::__new(::String __o_orientation)
{  hx::ObjectPtr< Coordinate_obj > _result_ = new Coordinate_obj();
	_result_->__construct(__o_orientation);
	return _result_;}

Dynamic Coordinate_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Coordinate_obj > _result_ = new Coordinate_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Coordinate_obj::select( ){
{
		HX_STACK_FRAME("sx.properties.metric.Coordinate","select",0x5d0b13e6,"sx.properties.metric.Coordinate.select","sx/properties/metric/Coordinate.hx",29,0x774c67f9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		bool tmp = this->selected;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		if ((tmp1)){
			HX_STACK_LINE(31)
			this->selected = true;
			HX_STACK_LINE(32)
			::sx::properties::metric::Coordinate tmp2 = this->pair();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			tmp2->selected = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Coordinate_obj,select,(void))

::sx::properties::metric::Size Coordinate_obj::__ownerSize( ){
	HX_STACK_FRAME("sx.properties.metric.Coordinate","__ownerSize",0xc932ba4a,"sx.properties.metric.Coordinate.__ownerSize","sx/properties/metric/Coordinate.hx",41,0x774c67f9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	Dynamic tmp = this->ownerSize_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	::sx::properties::metric::Size tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	if ((tmp1)){
		HX_STACK_LINE(42)
		tmp2 = ::sx::properties::metric::_Size::Size_Internal_ZeroSize_obj::instance;
	}
	else{
		HX_STACK_LINE(42)
		tmp2 = this->ownerSize();
	}
	HX_STACK_LINE(42)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Coordinate_obj,__ownerSize,return )

Float Coordinate_obj::get_px( ){
	HX_STACK_FRAME("sx.properties.metric.Coordinate","get_px",0x9607f23b,"sx.properties.metric.Coordinate.get_px","sx/properties/metric/Coordinate.hx",49,0x774c67f9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	bool tmp = this->selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	if ((tmp)){
		HX_STACK_LINE(50)
		Float tmp1 = this->super::get_px();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		return tmp1;
	}
	HX_STACK_LINE(51)
	::sx::properties::metric::Size tmp1 = this->__pctSource();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	Float tmp2 = tmp1->get_px();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	::sx::properties::metric::Coordinate tmp3 = this->pair();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	Float tmp4 = tmp3->get_px();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	::sx::properties::metric::Size tmp6 = this->__ownerSize();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(51)
	Float tmp7 = tmp6->get_px();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(51)
	Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(51)
	return tmp8;
}


Float Coordinate_obj::get_pct( ){
	HX_STACK_FRAME("sx.properties.metric.Coordinate","get_pct",0xb0ebef8e,"sx.properties.metric.Coordinate.get_pct","sx/properties/metric/Coordinate.hx",58,0x774c67f9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	bool tmp = this->selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	if ((tmp)){
		HX_STACK_LINE(59)
		Float tmp1 = this->super::get_pct();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		return tmp1;
	}
	HX_STACK_LINE(60)
	::sx::properties::metric::Size tmp1 = this->__pctSource();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	Float tmp2 = tmp1->get_pct();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	::sx::properties::metric::Coordinate tmp3 = this->pair();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	Float tmp4 = tmp3->get_pct();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	::sx::properties::metric::Size tmp6 = this->__ownerSize();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(60)
	Float tmp7 = tmp6->get_pct();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(60)
	Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(60)
	return tmp8;
}


Float Coordinate_obj::get_dip( ){
	HX_STACK_FRAME("sx.properties.metric.Coordinate","get_dip",0xb0e2d9b8,"sx.properties.metric.Coordinate.get_dip","sx/properties/metric/Coordinate.hx",67,0x774c67f9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	bool tmp = this->selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	if ((tmp)){
		HX_STACK_LINE(68)
		Float tmp1 = this->super::get_dip();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		return tmp1;
	}
	HX_STACK_LINE(69)
	::sx::properties::metric::Size tmp1 = this->__pctSource();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	Float tmp2 = tmp1->get_dip();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	::sx::properties::metric::Coordinate tmp3 = this->pair();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	Float tmp4 = tmp3->get_dip();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(69)
	Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(69)
	::sx::properties::metric::Size tmp6 = this->__ownerSize();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(69)
	Float tmp7 = tmp6->get_dip();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(69)
	Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(69)
	return tmp8;
}


Void Coordinate_obj::__invokeOnChange( ::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.properties.metric.Coordinate","__invokeOnChange",0x06b58011,"sx.properties.metric.Coordinate.__invokeOnChange","sx/properties/metric/Coordinate.hx",77,0x774c67f9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			bool tmp = this->selected;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(78)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			if ((tmp1)){
				HX_STACK_LINE(78)
				this->selected = true;
				HX_STACK_LINE(78)
				::sx::properties::metric::Coordinate tmp2 = this->pair();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(78)
				tmp2->selected = false;
			}
		}
		HX_STACK_LINE(79)
		::String tmp = previousUnits;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		Float tmp1 = previousValue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		this->super::__invokeOnChange(tmp,tmp1);
	}
return null();
}



Coordinate_obj::Coordinate_obj()
{
}

void Coordinate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Coordinate);
	HX_MARK_MEMBER_NAME(ownerSize,"ownerSize");
	HX_MARK_MEMBER_NAME(pair,"pair");
	HX_MARK_MEMBER_NAME(selected,"selected");
	::sx::properties::metric::Size_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Coordinate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ownerSize,"ownerSize");
	HX_VISIT_MEMBER_NAME(pair,"pair");
	HX_VISIT_MEMBER_NAME(selected,"selected");
	::sx::properties::metric::Size_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Coordinate_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pair") ) { return pair; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"select") ) { return select_dyn(); }
		if (HX_FIELD_EQ(inName,"get_px") ) { return get_px_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_pct") ) { return get_pct_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dip") ) { return get_dip_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { return selected; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ownerSize") ) { return ownerSize; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__ownerSize") ) { return __ownerSize_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__invokeOnChange") ) { return __invokeOnChange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Coordinate_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pair") ) { pair=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { selected=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ownerSize") ) { ownerSize=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Coordinate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Coordinate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Coordinate_obj,ownerSize),HX_HCSTRING("ownerSize","\x94","\xfa","\x3e","\x28")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Coordinate_obj,pair),HX_HCSTRING("pair","\x1a","\xdc","\x51","\x4a")},
	{hx::fsBool,(int)offsetof(Coordinate_obj,selected),HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ownerSize","\x94","\xfa","\x3e","\x28"),
	HX_HCSTRING("pair","\x1a","\xdc","\x51","\x4a"),
	HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"),
	HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a"),
	HX_HCSTRING("__ownerSize","\x74","\x43","\x6b","\x56"),
	HX_HCSTRING("get_px","\x51","\xf9","\x2f","\xa3"),
	HX_HCSTRING("get_pct","\xb8","\x1b","\xca","\x26"),
	HX_HCSTRING("get_dip","\xe2","\x05","\xc1","\x26"),
	HX_HCSTRING("__invokeOnChange","\xa7","\x7e","\xe9","\x3d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Coordinate_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Coordinate_obj::__mClass,"__mClass");
};

#endif

hx::Class Coordinate_obj::__mClass;

void Coordinate_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.metric.Coordinate","\x44","\x6e","\xd3","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Coordinate_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Coordinate_obj >;
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
