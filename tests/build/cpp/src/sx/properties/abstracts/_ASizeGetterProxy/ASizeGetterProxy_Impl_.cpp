#include <hxcpp.h>

#ifndef INCLUDED_sx_properties_abstracts__ASizeGetterProxy_ASizeGetterProxy_Impl_
#include <sx/properties/abstracts/_ASizeGetterProxy/ASizeGetterProxy_Impl_.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
namespace sx{
namespace properties{
namespace abstracts{
namespace _ASizeGetterProxy{

Void ASizeGetterProxy_Impl__obj::__construct()
{
	return null();
}

//ASizeGetterProxy_Impl__obj::~ASizeGetterProxy_Impl__obj() { }

Dynamic ASizeGetterProxy_Impl__obj::__CreateEmpty() { return  new ASizeGetterProxy_Impl__obj; }
hx::ObjectPtr< ASizeGetterProxy_Impl__obj > ASizeGetterProxy_Impl__obj::__new()
{  hx::ObjectPtr< ASizeGetterProxy_Impl__obj > _result_ = new ASizeGetterProxy_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ASizeGetterProxy_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ASizeGetterProxy_Impl__obj > _result_ = new ASizeGetterProxy_Impl__obj();
	_result_->__construct();
	return _result_;}

Float ASizeGetterProxy_Impl__obj::get_dip( ::sx::properties::metric::Size this1){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_","get_dip",0xecc5dff2,"sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_.get_dip","sx/properties/abstracts/ASizeGetterProxy.hx",23,0x9257090d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(23)
	Float tmp = this1->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASizeGetterProxy_Impl__obj,get_dip,return )

Float ASizeGetterProxy_Impl__obj::get_px( ::sx::properties::metric::Size this1){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_","get_px",0xeb401141,"sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_.get_px","sx/properties/abstracts/ASizeGetterProxy.hx",24,0x9257090d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(24)
	Float tmp = this1->get_px();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASizeGetterProxy_Impl__obj,get_px,return )

Float ASizeGetterProxy_Impl__obj::get_pct( ::sx::properties::metric::Size this1){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_","get_pct",0xeccef5c8,"sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_.get_pct","sx/properties/abstracts/ASizeGetterProxy.hx",25,0x9257090d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(25)
	Float tmp = this1->get_pct();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASizeGetterProxy_Impl__obj,get_pct,return )

Float ASizeGetterProxy_Impl__obj::AplusBf( ::sx::properties::metric::Size a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_","AplusBf",0x99e484cf,"sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_.AplusBf","sx/properties/abstracts/ASizeGetterProxy.hx",31,0x9257090d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(31)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASizeGetterProxy_Impl__obj,AplusBf,return )

Float ASizeGetterProxy_Impl__obj::AminusBf( ::sx::properties::metric::Size a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_","AminusBf",0x57e6a423,"sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_.AminusBf","sx/properties/abstracts/ASizeGetterProxy.hx",32,0x9257090d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(32)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASizeGetterProxy_Impl__obj,AminusBf,return )

Float ASizeGetterProxy_Impl__obj::AmulBf( ::sx::properties::metric::Size a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_","AmulBf",0x5597eaf7,"sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_.AmulBf","sx/properties/abstracts/ASizeGetterProxy.hx",33,0x9257090d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(33)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASizeGetterProxy_Impl__obj,AmulBf,return )

Float ASizeGetterProxy_Impl__obj::AdivBf( ::sx::properties::metric::Size a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_","AdivBf",0x1f15b984,"sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_.AdivBf","sx/properties/abstracts/ASizeGetterProxy.hx",34,0x9257090d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(34)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASizeGetterProxy_Impl__obj,AdivBf,return )

bool ASizeGetterProxy_Impl__obj::AltBf( ::sx::properties::metric::Size a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_","AltBf",0xc406353d,"sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_.AltBf","sx/properties/abstracts/ASizeGetterProxy.hx",35,0x9257090d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(35)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASizeGetterProxy_Impl__obj,AltBf,return )

bool ASizeGetterProxy_Impl__obj::AlteBf( ::sx::properties::metric::Size a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_","AlteBf",0xc182d010,"sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_.AlteBf","sx/properties/abstracts/ASizeGetterProxy.hx",36,0x9257090d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(36)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASizeGetterProxy_Impl__obj,AlteBf,return )

bool ASizeGetterProxy_Impl__obj::AneBf( ::sx::properties::metric::Size a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_","AneBf",0xc54d40ac,"sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_.AneBf","sx/properties/abstracts/ASizeGetterProxy.hx",37,0x9257090d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(37)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASizeGetterProxy_Impl__obj,AneBf,return )

bool ASizeGetterProxy_Impl__obj::AgteBf( ::sx::properties::metric::Size a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_","AgteBf",0xe081e98b,"sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_.AgteBf","sx/properties/abstracts/ASizeGetterProxy.hx",38,0x9257090d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(38)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASizeGetterProxy_Impl__obj,AgteBf,return )

bool ASizeGetterProxy_Impl__obj::AgtBf( ::sx::properties::metric::Size a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_","AgtBf",0xc0b82422,"sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_.AgtBf","sx/properties/abstracts/ASizeGetterProxy.hx",39,0x9257090d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(39)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASizeGetterProxy_Impl__obj,AgtBf,return )

bool ASizeGetterProxy_Impl__obj::AeqBf( ::sx::properties::metric::Size a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_","AeqBf",0xbf637021,"sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_.AeqBf","sx/properties/abstracts/ASizeGetterProxy.hx",40,0x9257090d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(40)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASizeGetterProxy_Impl__obj,AeqBf,return )


ASizeGetterProxy_Impl__obj::ASizeGetterProxy_Impl__obj()
{
}

bool ASizeGetterProxy_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"AltBf") ) { outValue = AltBf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AneBf") ) { outValue = AneBf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AgtBf") ) { outValue = AgtBf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AeqBf") ) { outValue = AeqBf_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_px") ) { outValue = get_px_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AmulBf") ) { outValue = AmulBf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AdivBf") ) { outValue = AdivBf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AlteBf") ) { outValue = AlteBf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AgteBf") ) { outValue = AgteBf_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_dip") ) { outValue = get_dip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_pct") ) { outValue = get_pct_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AplusBf") ) { outValue = AplusBf_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"AminusBf") ) { outValue = AminusBf_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ASizeGetterProxy_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ASizeGetterProxy_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class ASizeGetterProxy_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_dip","\xe2","\x05","\xc1","\x26"),
	HX_HCSTRING("get_px","\x51","\xf9","\x2f","\xa3"),
	HX_HCSTRING("get_pct","\xb8","\x1b","\xca","\x26"),
	HX_HCSTRING("AplusBf","\xbf","\xaa","\xdf","\xd3"),
	HX_HCSTRING("AminusBf","\x33","\xb0","\xac","\xd9"),
	HX_HCSTRING("AmulBf","\x07","\xd3","\x87","\x0d"),
	HX_HCSTRING("AdivBf","\x94","\xa1","\x05","\xd7"),
	HX_HCSTRING("AltBf","\x2d","\xff","\xc6","\xb4"),
	HX_HCSTRING("AlteBf","\x20","\xb8","\x72","\x79"),
	HX_HCSTRING("AneBf","\x9c","\x0a","\x0e","\xb6"),
	HX_HCSTRING("AgteBf","\x9b","\xd1","\x71","\x98"),
	HX_HCSTRING("AgtBf","\x12","\xee","\x78","\xb1"),
	HX_HCSTRING("AeqBf","\x11","\x3a","\x24","\xb0"),
	::String(null()) };

void ASizeGetterProxy_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_","\x7e","\xaa","\x68","\xb4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ASizeGetterProxy_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ASizeGetterProxy_Impl__obj >;
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
} // end namespace abstracts
} // end namespace _ASizeGetterProxy
