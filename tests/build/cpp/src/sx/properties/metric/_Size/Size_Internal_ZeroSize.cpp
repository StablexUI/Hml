#include <hxcpp.h>

#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
#ifndef INCLUDED_sx_properties_metric__Size_Size_Internal_ZeroSize
#include <sx/properties/metric/_Size/Size_Internal_ZeroSize.h>
#endif
namespace sx{
namespace properties{
namespace metric{
namespace _Size{

Void Size_Internal_ZeroSize_obj::__construct(::String __o_orientation)
{
HX_STACK_FRAME("sx.properties.metric._Size.Size_Internal_ZeroSize","new",0x3e930b79,"sx.properties.metric._Size.Size_Internal_ZeroSize.new","sx/properties/metric/Size.hx",409,0x13fef910)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_orientation,"orientation")
::String orientation = __o_orientation.Default(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));
{
	HX_STACK_LINE(409)
	::String tmp = orientation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(409)
	super::__construct(tmp);
}
;
	return null();
}

//Size_Internal_ZeroSize_obj::~Size_Internal_ZeroSize_obj() { }

Dynamic Size_Internal_ZeroSize_obj::__CreateEmpty() { return  new Size_Internal_ZeroSize_obj; }
hx::ObjectPtr< Size_Internal_ZeroSize_obj > Size_Internal_ZeroSize_obj::__new(::String __o_orientation)
{  hx::ObjectPtr< Size_Internal_ZeroSize_obj > _result_ = new Size_Internal_ZeroSize_obj();
	_result_->__construct(__o_orientation);
	return _result_;}

Dynamic Size_Internal_ZeroSize_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Size_Internal_ZeroSize_obj > _result_ = new Size_Internal_ZeroSize_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Float Size_Internal_ZeroSize_obj::get_px( ){
	HX_STACK_FRAME("sx.properties.metric._Size.Size_Internal_ZeroSize","get_px",0xa66df3d8,"sx.properties.metric._Size.Size_Internal_ZeroSize.get_px","sx/properties/metric/Size.hx",417,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_LINE(417)
	return (int)0;
}


Float Size_Internal_ZeroSize_obj::get_pct( ){
	HX_STACK_FRAME("sx.properties.metric._Size.Size_Internal_ZeroSize","get_pct",0xf9c75751,"sx.properties.metric._Size.Size_Internal_ZeroSize.get_pct","sx/properties/metric/Size.hx",418,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_LINE(418)
	return (int)0;
}


Float Size_Internal_ZeroSize_obj::get_dip( ){
	HX_STACK_FRAME("sx.properties.metric._Size.Size_Internal_ZeroSize","get_dip",0xf9be417b,"sx.properties.metric._Size.Size_Internal_ZeroSize.get_dip","sx/properties/metric/Size.hx",419,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_LINE(419)
	return (int)0;
}


Float Size_Internal_ZeroSize_obj::set_px( Float v){
	HX_STACK_FRAME("sx.properties.metric._Size.Size_Internal_ZeroSize","set_px",0x72b6484c,"sx.properties.metric._Size.Size_Internal_ZeroSize.set_px","sx/properties/metric/Size.hx",420,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(420)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(420)
	return tmp;
}


Float Size_Internal_ZeroSize_obj::set_pct( Float v){
	HX_STACK_FRAME("sx.properties.metric._Size.Size_Internal_ZeroSize","set_pct",0xecc8e85d,"sx.properties.metric._Size.Size_Internal_ZeroSize.set_pct","sx/properties/metric/Size.hx",421,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(421)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(421)
	return tmp;
}


Float Size_Internal_ZeroSize_obj::set_dip( Float v){
	HX_STACK_FRAME("sx.properties.metric._Size.Size_Internal_ZeroSize","set_dip",0xecbfd287,"sx.properties.metric._Size.Size_Internal_ZeroSize.set_dip","sx/properties/metric/Size.hx",422,0x13fef910)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(422)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(422)
	return tmp;
}


::sx::properties::metric::Size Size_Internal_ZeroSize_obj::instance;


Size_Internal_ZeroSize_obj::Size_Internal_ZeroSize_obj()
{
}

Dynamic Size_Internal_ZeroSize_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"get_px") ) { return get_px_dyn(); }
		if (HX_FIELD_EQ(inName,"set_px") ) { return set_px_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_pct") ) { return get_pct_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dip") ) { return get_dip_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pct") ) { return set_pct_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dip") ) { return set_dip_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Size_Internal_ZeroSize_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::sx::properties::metric::Size*/ ,(void *) &Size_Internal_ZeroSize_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_px","\x51","\xf9","\x2f","\xa3"),
	HX_HCSTRING("get_pct","\xb8","\x1b","\xca","\x26"),
	HX_HCSTRING("get_dip","\xe2","\x05","\xc1","\x26"),
	HX_HCSTRING("set_px","\xc5","\x4d","\x78","\x6f"),
	HX_HCSTRING("set_pct","\xc4","\xac","\xcb","\x19"),
	HX_HCSTRING("set_dip","\xee","\x96","\xc2","\x19"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Size_Internal_ZeroSize_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Size_Internal_ZeroSize_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Size_Internal_ZeroSize_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Size_Internal_ZeroSize_obj::instance,"instance");
};

#endif

hx::Class Size_Internal_ZeroSize_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	::String(null()) };

void Size_Internal_ZeroSize_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.metric._Size.Size_Internal_ZeroSize","\x07","\xdb","\x7f","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Size_Internal_ZeroSize_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Size_Internal_ZeroSize_obj >;
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

void Size_Internal_ZeroSize_obj::__boot()
{
struct _Function_0_1{
	inline static ::sx::properties::metric::Size Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/properties/metric/Size.hx",411,0x13fef910)
		{
			HX_STACK_LINE(411)
			::sx::properties::metric::_Size::Size_Internal_ZeroSize tmp = ::sx::properties::metric::_Size::Size_Internal_ZeroSize_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(411)
			return ((::sx::properties::metric::Size)(tmp));
		}
		return null();
	}
};
	instance= _Function_0_1::Block();
}

} // end namespace sx
} // end namespace properties
} // end namespace metric
} // end namespace _Size
