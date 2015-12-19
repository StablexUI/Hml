#include <hxcpp.h>

#ifndef INCLUDED_Child
#include <Child.h>
#endif
#ifndef INCLUDED_ChildWidgetNodeTest
#include <ChildWidgetNodeTest.h>
#endif
#ifndef INCLUDED_hunit_TestCase
#include <hunit/TestCase.h>
#endif
#ifndef INCLUDED_hunit_assert_AssertFactory
#include <hunit/assert/AssertFactory.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif

Void ChildWidgetNodeTest_obj::__construct()
{
HX_STACK_FRAME("ChildWidgetNodeTest","new",0x477670e6,"ChildWidgetNodeTest.new","ChildWidgetNodeTest.hx",12,0x8d85ad4a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	super::__construct();
}
;
	return null();
}

//ChildWidgetNodeTest_obj::~ChildWidgetNodeTest_obj() { }

Dynamic ChildWidgetNodeTest_obj::__CreateEmpty() { return  new ChildWidgetNodeTest_obj; }
hx::ObjectPtr< ChildWidgetNodeTest_obj > ChildWidgetNodeTest_obj::__new()
{  hx::ObjectPtr< ChildWidgetNodeTest_obj > _result_ = new ChildWidgetNodeTest_obj();
	_result_->__construct();
	return _result_;}

Dynamic ChildWidgetNodeTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ChildWidgetNodeTest_obj > _result_ = new ChildWidgetNodeTest_obj();
	_result_->__construct();
	return _result_;}

Void ChildWidgetNodeTest_obj::childWidgetNode( ){
{
		HX_STACK_FRAME("ChildWidgetNodeTest","childWidgetNode",0xf838b228,"ChildWidgetNodeTest.childWidgetNode","ChildWidgetNodeTest.hx",17,0x8d85ad4a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(18)
		::Child tmp = ::Child_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		::Child root = tmp;		HX_STACK_VAR(root,"root");
		HX_STACK_LINE(19)
		::sx::widgets::Widget tmp1 = root->get_level1();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		::sx::widgets::Widget level1 = tmp1;		HX_STACK_VAR(level1,"level1");
		HX_STACK_LINE(20)
		::sx::widgets::Widget tmp2 = root->get_level2();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		::sx::widgets::Widget level2 = tmp2;		HX_STACK_VAR(level2,"level2");
		HX_STACK_LINE(22)
		::hunit::_assert::AssertFactory tmp3 = this->_assert;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		::sx::widgets::Widget tmp4 = level1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		::sx::widgets::Widget tmp5 = level2->get_parent();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("ChildWidgetNodeTest.hx","\x4a","\xad","\x85","\x8d"),22,HX_HCSTRING("ChildWidgetNodeTest","\xf4","\xc5","\xae","\x4b"),HX_HCSTRING("childWidgetNode","\xa2","\x60","\xe4","\xb4"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(22)
		tmp3->__Field(HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"), hx::paccDynamic )(tmp4,tmp5,null(),tmp6);
		HX_STACK_LINE(23)
		::hunit::_assert::AssertFactory tmp7 = this->_assert;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(23)
		::sx::widgets::Widget tmp8 = ((::sx::widgets::Widget)(root));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(23)
		::sx::widgets::Widget tmp9 = level1->get_parent();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(23)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("ChildWidgetNodeTest.hx","\x4a","\xad","\x85","\x8d"),23,HX_HCSTRING("ChildWidgetNodeTest","\xf4","\xc5","\xae","\x4b"),HX_HCSTRING("childWidgetNode","\xa2","\x60","\xe4","\xb4"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(23)
		tmp7->__Field(HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"), hx::paccDynamic )(tmp8,tmp9,null(),tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ChildWidgetNodeTest_obj,childWidgetNode,(void))


ChildWidgetNodeTest_obj::ChildWidgetNodeTest_obj()
{
}

Dynamic ChildWidgetNodeTest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"childWidgetNode") ) { return childWidgetNode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("childWidgetNode","\xa2","\x60","\xe4","\xb4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ChildWidgetNodeTest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ChildWidgetNodeTest_obj::__mClass,"__mClass");
};

#endif

hx::Class ChildWidgetNodeTest_obj::__mClass;

void ChildWidgetNodeTest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ChildWidgetNodeTest","\xf4","\xc5","\xae","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ChildWidgetNodeTest_obj >;
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

void ChildWidgetNodeTest_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChildWidgetNodeTest.hx",12,0x8d85ad4a)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChildWidgetNodeTest.hx",12,0x8d85ad4a)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChildWidgetNodeTest.hx",12,0x8d85ad4a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("childWidgetNode","\xa2","\x60","\xe4","\xb4") , _Function_2_1::Block(),false);
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
	__mClass->__rtti__=HX_HCSTRING("<class path=\"ChildWidgetNodeTest\" params=\"\">\n\t<extends path=\"hunit.TestCase\"/>\n\t<childWidgetNode public=\"1\" set=\"method\" line=\"16\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</childWidgetNode>\n\t<new public=\"1\" set=\"method\" line=\"12\"><f a=\"\"><x path=\"Void\"/></f></new>\n\t<meta>\n\t\t<m n=\":directlyUsed\"/>\n\t\t<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t</meta>\n</class>","\x28","\x51","\x2a","\xe8");
}

