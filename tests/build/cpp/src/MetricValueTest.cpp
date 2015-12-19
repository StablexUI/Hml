#include <hxcpp.h>

#ifndef INCLUDED_Metric
#include <Metric.h>
#endif
#ifndef INCLUDED_MetricValueTest
#include <MetricValueTest.h>
#endif
#ifndef INCLUDED_hunit_TestCase
#include <hunit/TestCase.h>
#endif
#ifndef INCLUDED_hunit_assert_AssertFactory
#include <hunit/assert/AssertFactory.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Coordinate
#include <sx/properties/metric/Coordinate.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif

Void MetricValueTest_obj::__construct()
{
HX_STACK_FRAME("MetricValueTest","new",0x169b7065,"MetricValueTest.new","MetricValueTest.hx",11,0x2cdf62ab)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	super::__construct();
}
;
	return null();
}

//MetricValueTest_obj::~MetricValueTest_obj() { }

Dynamic MetricValueTest_obj::__CreateEmpty() { return  new MetricValueTest_obj; }
hx::ObjectPtr< MetricValueTest_obj > MetricValueTest_obj::__new()
{  hx::ObjectPtr< MetricValueTest_obj > _result_ = new MetricValueTest_obj();
	_result_->__construct();
	return _result_;}

Dynamic MetricValueTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MetricValueTest_obj > _result_ = new MetricValueTest_obj();
	_result_->__construct();
	return _result_;}

Void MetricValueTest_obj::dip( ){
{
		HX_STACK_FRAME("MetricValueTest","dip",0x1693dd50,"MetricValueTest.dip","MetricValueTest.hx",16,0x2cdf62ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		::Metric tmp = ::Metric_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		::Metric ui = tmp;		HX_STACK_VAR(ui,"ui");
		HX_STACK_LINE(19)
		::hunit::_assert::AssertFactory tmp1 = this->_assert;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		::sx::widgets::Widget tmp2 = ui->get_dips();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		::sx::properties::metric::Coordinate tmp3 = tmp2->get_left();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		::String tmp4 = tmp3->units;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(19)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("MetricValueTest.hx","\xab","\x62","\xdf","\x2c"),19,HX_HCSTRING("MetricValueTest","\xf3","\x59","\xe0","\xf3"),HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(19)
		tmp1->__Field(HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"), hx::paccDynamic )(HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"),tmp4,null(),tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MetricValueTest_obj,dip,(void))

Void MetricValueTest_obj::pixel( ){
{
		HX_STACK_FRAME("MetricValueTest","pixel",0xb21731cb,"MetricValueTest.pixel","MetricValueTest.hx",25,0x2cdf62ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		::Metric tmp = ::Metric_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		::Metric ui = tmp;		HX_STACK_VAR(ui,"ui");
		HX_STACK_LINE(28)
		::hunit::_assert::AssertFactory tmp1 = this->_assert;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		::sx::widgets::Widget tmp2 = ui->get_pixels();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		::sx::properties::metric::Coordinate tmp3 = tmp2->get_left();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		::String tmp4 = tmp3->units;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("MetricValueTest.hx","\xab","\x62","\xdf","\x2c"),28,HX_HCSTRING("MetricValueTest","\xf3","\x59","\xe0","\xf3"),HX_HCSTRING("pixel","\x86","\xc6","\xa3","\xc2"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		tmp1->__Field(HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"), hx::paccDynamic )(HX_HCSTRING("px","\x08","\x62","\x00","\x00"),tmp4,null(),tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MetricValueTest_obj,pixel,(void))

Void MetricValueTest_obj::pct( ){
{
		HX_STACK_FRAME("MetricValueTest","pct",0x169cf326,"MetricValueTest.pct","MetricValueTest.hx",34,0x2cdf62ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		::Metric tmp = ::Metric_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		::Metric ui = tmp;		HX_STACK_VAR(ui,"ui");
		HX_STACK_LINE(37)
		::hunit::_assert::AssertFactory tmp1 = this->_assert;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		::sx::widgets::Widget tmp2 = ui->get_percents();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		::sx::properties::metric::Coordinate tmp3 = tmp2->get_left();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		::String tmp4 = tmp3->units;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("MetricValueTest.hx","\xab","\x62","\xdf","\x2c"),37,HX_HCSTRING("MetricValueTest","\xf3","\x59","\xe0","\xf3"),HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		tmp1->__Field(HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"), hx::paccDynamic )(HX_HCSTRING("pct","\x21","\x53","\x55","\x00"),tmp4,null(),tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MetricValueTest_obj,pct,(void))


MetricValueTest_obj::MetricValueTest_obj()
{
}

Dynamic MetricValueTest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dip") ) { return dip_dyn(); }
		if (HX_FIELD_EQ(inName,"pct") ) { return pct_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pixel") ) { return pixel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"),
	HX_HCSTRING("pixel","\x86","\xc6","\xa3","\xc2"),
	HX_HCSTRING("pct","\x21","\x53","\x55","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MetricValueTest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MetricValueTest_obj::__mClass,"__mClass");
};

#endif

hx::Class MetricValueTest_obj::__mClass;

void MetricValueTest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MetricValueTest","\xf3","\x59","\xe0","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MetricValueTest_obj >;
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

void MetricValueTest_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MetricValueTest.hx",11,0x2cdf62ab)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MetricValueTest.hx",11,0x2cdf62ab)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MetricValueTest.hx",11,0x2cdf62ab)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MetricValueTest.hx",11,0x2cdf62ab)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("pixel","\x86","\xc6","\xa3","\xc2") , _Function_2_2::Block(),false);
						struct _Function_2_3{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MetricValueTest.hx",11,0x2cdf62ab)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("pct","\x21","\x53","\x55","\x00") , _Function_2_3::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
	__mClass->__rtti__=HX_HCSTRING("<class path=\"MetricValueTest\" params=\"\">\n\t<extends path=\"hunit.TestCase\"/>\n\t<dip public=\"1\" set=\"method\" line=\"15\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</dip>\n\t<pixel public=\"1\" set=\"method\" line=\"24\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</pixel>\n\t<pct public=\"1\" set=\"method\" line=\"33\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</pct>\n\t<new public=\"1\" set=\"method\" line=\"11\"><f a=\"\"><x path=\"Void\"/></f></new>\n\t<meta>\n\t\t<m n=\":directlyUsed\"/>\n\t\t<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t</meta>\n</class>","\xdf","\x00","\x64","\xdc");
}

