#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_sx_exceptions_NoReadException
#include <sx/exceptions/NoReadException.h>
#endif
#ifndef INCLUDED_sx_exceptions_SxException
#include <sx/exceptions/SxException.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
#ifndef INCLUDED_sx_properties_metric_SizeSetterProxy
#include <sx/properties/metric/SizeSetterProxy.h>
#endif
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
namespace sx{
namespace properties{
namespace metric{

Void SizeSetterProxy_obj::__construct(::String __o_orientation)
{
HX_STACK_FRAME("sx.properties.metric.SizeSetterProxy","new",0xcd6679d4,"sx.properties.metric.SizeSetterProxy.new","sx/properties/metric/SizeSetterProxy.hx",17,0x88f44ebd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_orientation,"orientation")
::String orientation = __o_orientation.Default(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));
{
	HX_STACK_LINE(17)
	::String tmp = orientation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	super::__construct(tmp);
}
;
	return null();
}

//SizeSetterProxy_obj::~SizeSetterProxy_obj() { }

Dynamic SizeSetterProxy_obj::__CreateEmpty() { return  new SizeSetterProxy_obj; }
hx::ObjectPtr< SizeSetterProxy_obj > SizeSetterProxy_obj::__new(::String __o_orientation)
{  hx::ObjectPtr< SizeSetterProxy_obj > _result_ = new SizeSetterProxy_obj();
	_result_->__construct(__o_orientation);
	return _result_;}

Dynamic SizeSetterProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SizeSetterProxy_obj > _result_ = new SizeSetterProxy_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void SizeSetterProxy_obj::__invokeOnChange( ::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.properties.metric.SizeSetterProxy","__invokeOnChange",0xd02afcb3,"sx.properties.metric.SizeSetterProxy.__invokeOnChange","sx/properties/metric/SizeSetterProxy.hx",24,0x88f44ebd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(25)
		::sx::signals::Signal tmp = this->onChange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		if ((tmp1)){
			HX_STACK_LINE(25)
			::sx::signals::Signal tmp3 = this->onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(25)
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
			HX_STACK_LINE(25)
			::sx::signals::Signal tmp3 = this->onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			bool tmp4 = tmp3->__listenersInUse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			if ((tmp4)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(25)
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
						HX_STACK_LINE(25)
						::String tmp9 = this->units;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(25)
						Float tmp10 = this->__value;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(148)
						listener(hx::ObjectPtr<OBJ_>(this),tmp9,tmp10).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(25)
				::sx::signals::Signal tmp5 = this->onChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				tmp5->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(25)
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
						HX_STACK_LINE(25)
						::String tmp10 = this->units;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(25)
						Float tmp11 = this->__value;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(152)
						listener(hx::ObjectPtr<OBJ_>(this),tmp10,tmp11).Cast< Void >();
					}
				}
				HX_STACK_LINE(25)
				::sx::signals::Signal tmp6 = this->onChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				tmp6->__listenersInUse = false;
			}
		}
	}
return null();
}


Float SizeSetterProxy_obj::get_dip( ){
	HX_STACK_FRAME("sx.properties.metric.SizeSetterProxy","get_dip",0x67577956,"sx.properties.metric.SizeSetterProxy.get_dip","sx/properties/metric/SizeSetterProxy.hx",30,0x88f44ebd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	Dynamic tmp = hx::SourceInfo(HX_HCSTRING("SizeSetterProxy.hx","\x70","\x5c","\x50","\x2e"),30,HX_HCSTRING("sx.properties.metric.SizeSetterProxy","\xe2","\x3f","\x90","\x47"),HX_HCSTRING("get_dip","\xe2","\x05","\xc1","\x26"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	::sx::exceptions::NoReadException tmp1 = ::sx::exceptions::NoReadException_obj::__new(null(),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	HX_STACK_DO_THROW(tmp1);
	HX_STACK_LINE(30)
	return ((Float)0.);
}


Float SizeSetterProxy_obj::get_px( ){
	HX_STACK_FRAME("sx.properties.metric.SizeSetterProxy","get_px",0xcf19b05d,"sx.properties.metric.SizeSetterProxy.get_px","sx/properties/metric/SizeSetterProxy.hx",31,0x88f44ebd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	Dynamic tmp = hx::SourceInfo(HX_HCSTRING("SizeSetterProxy.hx","\x70","\x5c","\x50","\x2e"),31,HX_HCSTRING("sx.properties.metric.SizeSetterProxy","\xe2","\x3f","\x90","\x47"),HX_HCSTRING("get_px","\x51","\xf9","\x2f","\xa3"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	::sx::exceptions::NoReadException tmp1 = ::sx::exceptions::NoReadException_obj::__new(null(),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	HX_STACK_DO_THROW(tmp1);
	HX_STACK_LINE(31)
	return ((Float)0.);
}


Float SizeSetterProxy_obj::get_pct( ){
	HX_STACK_FRAME("sx.properties.metric.SizeSetterProxy","get_pct",0x67608f2c,"sx.properties.metric.SizeSetterProxy.get_pct","sx/properties/metric/SizeSetterProxy.hx",32,0x88f44ebd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	Dynamic tmp = hx::SourceInfo(HX_HCSTRING("SizeSetterProxy.hx","\x70","\x5c","\x50","\x2e"),32,HX_HCSTRING("sx.properties.metric.SizeSetterProxy","\xe2","\x3f","\x90","\x47"),HX_HCSTRING("get_pct","\xb8","\x1b","\xca","\x26"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::sx::exceptions::NoReadException tmp1 = ::sx::exceptions::NoReadException_obj::__new(null(),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	HX_STACK_DO_THROW(tmp1);
	HX_STACK_LINE(32)
	return ((Float)0.);
}



SizeSetterProxy_obj::SizeSetterProxy_obj()
{
}

Dynamic SizeSetterProxy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"get_px") ) { return get_px_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_dip") ) { return get_dip_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pct") ) { return get_pct_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__invokeOnChange") ) { return __invokeOnChange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__invokeOnChange","\xa7","\x7e","\xe9","\x3d"),
	HX_HCSTRING("get_dip","\xe2","\x05","\xc1","\x26"),
	HX_HCSTRING("get_px","\x51","\xf9","\x2f","\xa3"),
	HX_HCSTRING("get_pct","\xb8","\x1b","\xca","\x26"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SizeSetterProxy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SizeSetterProxy_obj::__mClass,"__mClass");
};

#endif

hx::Class SizeSetterProxy_obj::__mClass;

void SizeSetterProxy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.metric.SizeSetterProxy","\xe2","\x3f","\x90","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SizeSetterProxy_obj >;
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
