#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_rtti_Rtti
#include <haxe/rtti/Rtti.h>
#endif
#ifndef INCLUDED_hunit_TestCase
#include <hunit/TestCase.h>
#endif
#ifndef INCLUDED_hunit_exceptions_CircularTestDependencyException
#include <hunit/exceptions/CircularTestDependencyException.h>
#endif
#ifndef INCLUDED_hunit_exceptions_InvalidTestException
#include <hunit/exceptions/InvalidTestException.h>
#endif
#ifndef INCLUDED_hunit_utils_CTypeClassFieldsUtils
#include <hunit/utils/CTypeClassFieldsUtils.h>
#endif
#ifndef INCLUDED_hunit_utils_TestCaseData
#include <hunit/utils/TestCaseData.h>
#endif
namespace hunit{
namespace utils{

Void TestCaseData_obj::__construct(::hunit::TestCase testCase)
{
HX_STACK_FRAME("hunit.utils.TestCaseData","new",0xb7225e9d,"hunit.utils.TestCaseData.new","hunit/utils/TestCaseData.hx",115,0x795f96f1)
HX_STACK_THIS(this)
HX_STACK_ARG(testCase,"testCase")
{
	HX_STACK_LINE(116)
	this->tests = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(117)
	this->defaultGroups = Array_obj< ::String >::__new();
	HX_STACK_LINE(118)
	::hunit::TestCase tmp = testCase;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	this->set_testCase(tmp);
	HX_STACK_LINE(120)
	this->processTestCaseRttiMeta();
	HX_STACK_LINE(122)
	this->gatherTestData();
}
;
	return null();
}

//TestCaseData_obj::~TestCaseData_obj() { }

Dynamic TestCaseData_obj::__CreateEmpty() { return  new TestCaseData_obj; }
hx::ObjectPtr< TestCaseData_obj > TestCaseData_obj::__new(::hunit::TestCase testCase)
{  hx::ObjectPtr< TestCaseData_obj > _result_ = new TestCaseData_obj();
	_result_->__construct(testCase);
	return _result_;}

Dynamic TestCaseData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestCaseData_obj > _result_ = new TestCaseData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

cpp::ArrayBase TestCaseData_obj::getTests( Array< ::String > groups,Array< ::String > excludeGroups){
	HX_STACK_FRAME("hunit.utils.TestCaseData","getTests",0x5ce0440e,"hunit.utils.TestCaseData.getTests","hunit/utils/TestCaseData.hx",132,0x795f96f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(groups,"groups")
	HX_STACK_ARG(excludeGroups,"excludeGroups")
	HX_STACK_LINE(131)
	::hunit::utils::TestCaseData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(134)
	bool tmp = (groups == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	if ((tmp1)){
		HX_STACK_LINE(134)
		tmp2 = (groups->length == (int)0);
	}
	else{
		HX_STACK_LINE(134)
		tmp2 = true;
	}
	HX_STACK_LINE(133)
	cpp::ArrayBase result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(133)
	if ((tmp2)){
		HX_STACK_LINE(135)
		result = this->tests->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();
	}
	else{

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::hunit::utils::TestCaseData,_g,Array< ::String >,groups)
		int __ArgCount() const { return 1; }
		bool run(Dynamic t){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","hunit/utils/TestCaseData.hx",136,0x795f96f1)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(136)
				Dynamic tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(136)
				bool tmp4 = _g->testIsInGroups(tmp3,groups);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(136)
				return tmp4;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(136)
		result = this->tests->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic )( Dynamic(new _Function_2_1(_g,groups)));
	}
	HX_STACK_LINE(138)
	bool tmp3 = (excludeGroups != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(138)
	if ((tmp3)){

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::hunit::utils::TestCaseData,_g,Array< ::String >,excludeGroups)
		int __ArgCount() const { return 1; }
		bool run(Dynamic t){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","hunit/utils/TestCaseData.hx",139,0x795f96f1)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(139)
				Dynamic tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(139)
				bool tmp5 = _g->testIsInGroups(tmp4,excludeGroups);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(139)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(139)
				return tmp6;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(139)
		result = result->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic )( Dynamic(new _Function_2_1(_g,excludeGroups)));
	}
	HX_STACK_LINE(142)
	return ::hunit::utils::TestCaseData_obj::sortByDependencies(result);
}


HX_DEFINE_DYNAMIC_FUNC2(TestCaseData_obj,getTests,return )

Void TestCaseData_obj::processTestCaseRttiMeta( ){
{
		HX_STACK_FRAME("hunit.utils.TestCaseData","processTestCaseRttiMeta",0xdc30b5aa,"hunit.utils.TestCaseData.processTestCaseRttiMeta","hunit/utils/TestCaseData.hx",151,0x795f96f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(151)
		Dynamic tmp = this->rtti;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		cpp::ArrayBase _g1 = tmp->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(151)
		while((true)){
			HX_STACK_LINE(151)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(151)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			if ((tmp2)){
				HX_STACK_LINE(151)
				break;
			}
			HX_STACK_LINE(151)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(151)
			Dynamic meta = tmp3;		HX_STACK_VAR(meta,"meta");
			HX_STACK_LINE(151)
			++(_g);
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				::String _g2 = meta->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(152)
				::String tmp4 = _g2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(152)
				::String _switch_1 = (tmp4);
				if (  ( _switch_1==HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"))){
					HX_STACK_LINE(154)
					Dynamic tmp5 = ::StringTools_obj::replace_dyn();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(154)
					Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(154)
					{
						HX_STACK_LINE(154)
						Dynamic f = tmp5;		HX_STACK_VAR(f,"f");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_1,Dynamic,f)
						int __ArgCount() const { return 1; }
						::String run(::String s){
							HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","hunit/utils/TestCaseData.hx",154,0x795f96f1)
							HX_STACK_ARG(s,"s")
							{
								HX_STACK_LINE(154)
								::String tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(154)
								::String tmp8 = HX_HCSTRING("\"","\x22","\x00","\x00","\x00");		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(154)
								::String tmp9 = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(154)
								::String tmp10 = f(tmp7,tmp8,tmp9).Cast< ::String >();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(154)
								return tmp10;
							}
							return null();
						}
						HX_END_LOCAL_FUNC1(return)

						HX_STACK_LINE(154)
						tmp6 =  Dynamic(new _Function_5_1(f));
					}
					HX_STACK_LINE(154)
					Array< ::String > mGroups = meta->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp6).StaticCast< Array< ::String > >();		HX_STACK_VAR(mGroups,"mGroups");
					HX_STACK_LINE(155)
					this->defaultGroups = this->defaultGroups->concat(mGroups);
				}
				else  {
				}
;
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestCaseData_obj,processTestCaseRttiMeta,(void))

Void TestCaseData_obj::gatherTestData( ){
{
		HX_STACK_FRAME("hunit.utils.TestCaseData","gatherTestData",0xec4c4d9a,"hunit.utils.TestCaseData.gatherTestData","hunit/utils/TestCaseData.hx",168,0x795f96f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(168)
		Dynamic tmp = this->rtti;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		::_List::ListIterator tmp1 = ::_List::ListIterator_obj::__new(tmp->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		::_List::ListIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(168)
		while((true)){
			HX_STACK_LINE(168)
			bool tmp2 = (_g->head != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(168)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(168)
			if ((tmp3)){
				HX_STACK_LINE(168)
				break;
			}
			HX_STACK_LINE(168)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(168)
			{
				HX_STACK_LINE(168)
				Dynamic tmp5 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(168)
				_g->val = tmp5;
				HX_STACK_LINE(168)
				Dynamic tmp6 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(168)
				_g->head = tmp6;
				HX_STACK_LINE(168)
				tmp4 = _g->val;
			}
			HX_STACK_LINE(168)
			Dynamic field = tmp4;		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(169)
			Dynamic tmp5 = field;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			bool tmp6 = ::hunit::utils::CTypeClassFieldsUtils_obj::isTest(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			if ((tmp7)){
				HX_STACK_LINE(169)
				continue;
			}
			HX_STACK_LINE(172)
			::hunit::TestCase tmp8 = this->testCase;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(172)
			::String tmp9 = field->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(172)
			Dynamic tmp10 = ::Reflect_obj::field(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(172)
			bool tmp11 = ::Reflect_obj::isFunction(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(172)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(172)
			if ((tmp12)){
				HX_STACK_LINE(172)
				continue;
			}
			HX_STACK_LINE(174)
			Dynamic tmp13 = field;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(174)
			Dynamic tmp14 = this->getTestData(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(174)
			this->tests->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestCaseData_obj,gatherTestData,(void))

Dynamic TestCaseData_obj::getTestData( Dynamic field){
	HX_STACK_FRAME("hunit.utils.TestCaseData","getTestData",0xcc1c318f,"hunit.utils.TestCaseData.getTestData","hunit/utils/TestCaseData.hx",184,0x795f96f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(185)
	::hunit::TestCase tmp = this->testCase;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	::String tmp1 = field->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	Dynamic tmp2 = ::Reflect_obj::field(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	Dynamic callback = tmp2;		HX_STACK_VAR(callback,"callback");
	HX_STACK_LINE(186)
	bool isIncomplete = false;		HX_STACK_VAR(isIncomplete,"isIncomplete");
	HX_STACK_LINE(187)
	Array< ::String > groups = this->defaultGroups->copy();		HX_STACK_VAR(groups,"groups");
	HX_STACK_LINE(188)
	::String incompleteMsg = null();		HX_STACK_VAR(incompleteMsg,"incompleteMsg");
	HX_STACK_LINE(189)
	Array< ::String > depends = Array_obj< ::String >::__new();		HX_STACK_VAR(depends,"depends");
	HX_STACK_LINE(191)
	{
		HX_STACK_LINE(191)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(191)
		cpp::ArrayBase _g1 = field->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(191)
		while((true)){
			HX_STACK_LINE(191)
			bool tmp3 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(191)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(191)
			if ((tmp4)){
				HX_STACK_LINE(191)
				break;
			}
			HX_STACK_LINE(191)
			Dynamic tmp5 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(191)
			Dynamic meta = tmp5;		HX_STACK_VAR(meta,"meta");
			HX_STACK_LINE(191)
			++(_g);
			HX_STACK_LINE(192)
			{
				HX_STACK_LINE(192)
				::String _g2 = meta->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(192)
				::String tmp6 = _g2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(192)
				::String _switch_2 = (tmp6);
				if (  ( _switch_2==HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"))){
					HX_STACK_LINE(194)
					Dynamic tmp7 = ::StringTools_obj::replace_dyn();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(194)
					Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(194)
					{
						HX_STACK_LINE(194)
						Dynamic f = tmp7;		HX_STACK_VAR(f,"f");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_6_1,Dynamic,f)
						int __ArgCount() const { return 1; }
						::String run(::String s){
							HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","hunit/utils/TestCaseData.hx",194,0x795f96f1)
							HX_STACK_ARG(s,"s")
							{
								HX_STACK_LINE(194)
								::String tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(194)
								::String tmp10 = HX_HCSTRING("\"","\x22","\x00","\x00","\x00");		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(194)
								::String tmp11 = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(194)
								::String tmp12 = f(tmp9,tmp10,tmp11).Cast< ::String >();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(194)
								return tmp12;
							}
							return null();
						}
						HX_END_LOCAL_FUNC1(return)

						HX_STACK_LINE(194)
						tmp8 =  Dynamic(new _Function_6_1(f));
					}
					HX_STACK_LINE(194)
					Array< ::String > mGroups = meta->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp8).StaticCast< Array< ::String > >();		HX_STACK_VAR(mGroups,"mGroups");
					HX_STACK_LINE(195)
					groups = groups->concat(mGroups);
				}
				else if (  ( _switch_2==HX_HCSTRING("incomplete","\x9e","\x49","\x0e","\x02"))){
					HX_STACK_LINE(197)
					isIncomplete = true;
					HX_STACK_LINE(198)
					Dynamic tmp7 = ::StringTools_obj::replace_dyn();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(198)
					Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(198)
					{
						HX_STACK_LINE(198)
						Dynamic f = tmp7;		HX_STACK_VAR(f,"f");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_6_1,Dynamic,f)
						int __ArgCount() const { return 1; }
						::String run(::String s){
							HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","hunit/utils/TestCaseData.hx",198,0x795f96f1)
							HX_STACK_ARG(s,"s")
							{
								HX_STACK_LINE(198)
								::String tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(198)
								::String tmp10 = HX_HCSTRING("\"","\x22","\x00","\x00","\x00");		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(198)
								::String tmp11 = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(198)
								::String tmp12 = f(tmp9,tmp10,tmp11).Cast< ::String >();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(198)
								return tmp12;
							}
							return null();
						}
						HX_END_LOCAL_FUNC1(return)

						HX_STACK_LINE(198)
						tmp8 =  Dynamic(new _Function_6_1(f));
					}
					HX_STACK_LINE(198)
					::String tmp9 = meta->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp8).StaticCast< Array< ::String > >()->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING("; ","\x85","\x33","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(198)
					incompleteMsg = tmp9;
				}
				else if (  ( _switch_2==HX_HCSTRING("depends","\x87","\x29","\x65","\x60"))){
					HX_STACK_LINE(200)
					Dynamic tmp7 = ::StringTools_obj::replace_dyn();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(200)
					Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						Dynamic f = tmp7;		HX_STACK_VAR(f,"f");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_6_1,Dynamic,f)
						int __ArgCount() const { return 1; }
						::String run(::String s){
							HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","hunit/utils/TestCaseData.hx",200,0x795f96f1)
							HX_STACK_ARG(s,"s")
							{
								HX_STACK_LINE(200)
								::String tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(200)
								::String tmp10 = HX_HCSTRING("\"","\x22","\x00","\x00","\x00");		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(200)
								::String tmp11 = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(200)
								::String tmp12 = f(tmp9,tmp10,tmp11).Cast< ::String >();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(200)
								return tmp12;
							}
							return null();
						}
						HX_END_LOCAL_FUNC1(return)

						HX_STACK_LINE(200)
						tmp8 =  Dynamic(new _Function_6_1(f));
					}
					HX_STACK_LINE(200)
					depends = meta->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp8).StaticCast< Array< ::String > >();
				}
				else  {
				}
;
;
			}
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &callback,::String &incompleteMsg,Array< ::String > &depends,bool &isIncomplete,Array< ::String > &groups,Dynamic &field){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hunit/utils/TestCaseData.hx",205,0x795f96f1)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , field->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f") , callback,false);
				__result->Add(HX_HCSTRING("isIncomplete","\x28","\x72","\x2d","\xd4") , isIncomplete,false);
				__result->Add(HX_HCSTRING("incompleteMsg","\x43","\xdf","\xef","\xe3") , incompleteMsg,false);
				__result->Add(HX_HCSTRING("groups","\x54","\x24","\x28","\x1c") , groups,false);
				__result->Add(HX_HCSTRING("depends","\x87","\x29","\x65","\x60") , depends,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(205)
	Dynamic tmp3 = _Function_1_1::Block(callback,incompleteMsg,depends,isIncomplete,groups,field);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(205)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TestCaseData_obj,getTestData,return )

bool TestCaseData_obj::testIsInGroups( Dynamic test,Array< ::String > groups){
	HX_STACK_FRAME("hunit.utils.TestCaseData","testIsInGroups",0xd8a5f7f8,"hunit.utils.TestCaseData.testIsInGroups","hunit/utils/TestCaseData.hx",221,0x795f96f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(test,"test")
	HX_STACK_ARG(groups,"groups")
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(222)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(222)
		while((true)){
			HX_STACK_LINE(222)
			bool tmp = (_g < groups->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(222)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(222)
			if ((tmp1)){
				HX_STACK_LINE(222)
				break;
			}
			HX_STACK_LINE(222)
			::String tmp2 = groups->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(222)
			::String group = tmp2;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(222)
			++(_g);
			HX_STACK_LINE(223)
			::String tmp3 = group;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(223)
			int tmp4 = test->__Field(HX_HCSTRING("groups","\x54","\x24","\x28","\x1c"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(223)
			bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(223)
			if ((tmp5)){
				HX_STACK_LINE(224)
				return true;
			}
		}
	}
	HX_STACK_LINE(228)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(TestCaseData_obj,testIsInGroups,return )

::String TestCaseData_obj::get_className( ){
	HX_STACK_FRAME("hunit.utils.TestCaseData","get_className",0x366d02f7,"hunit.utils.TestCaseData.get_className","hunit/utils/TestCaseData.hx",236,0x795f96f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	::hunit::TestCase tmp = this->testCase;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	::hx::Class tmp1 = ::Type_obj::getClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	::String tmp2 = ::Type_obj::getClassName(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(236)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TestCaseData_obj,get_className,return )

::String TestCaseData_obj::get_file( ){
	HX_STACK_FRAME("hunit.utils.TestCaseData","get_file",0xb2ea3ea8,"hunit.utils.TestCaseData.get_file","hunit/utils/TestCaseData.hx",237,0x795f96f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(237)
	Dynamic tmp = this->rtti;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(237)
	::String tmp1 = tmp->__Field(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(237)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TestCaseData_obj,get_file,return )

int TestCaseData_obj::get_totalTestCount( ){
	HX_STACK_FRAME("hunit.utils.TestCaseData","get_totalTestCount",0xd27c55e5,"hunit.utils.TestCaseData.get_totalTestCount","hunit/utils/TestCaseData.hx",238,0x795f96f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(238)
	int tmp = this->tests->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TestCaseData_obj,get_totalTestCount,return )

::hunit::TestCase TestCaseData_obj::set_testCase( ::hunit::TestCase value){
	HX_STACK_FRAME("hunit.utils.TestCaseData","set_testCase",0x2eadbdc2,"hunit.utils.TestCaseData.set_testCase","hunit/utils/TestCaseData.hx",246,0x795f96f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(247)
	::hunit::TestCase tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	::hx::Class tmp1 = ::Type_obj::getClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	Dynamic tmp2 = ::haxe::rtti::Rtti_obj::getRtti(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(247)
	this->rtti = tmp2;
	HX_STACK_LINE(249)
	::hunit::TestCase tmp3 = this->testCase = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(249)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TestCaseData_obj,set_testCase,return )

cpp::ArrayBase TestCaseData_obj::getDependent( Dynamic test,cpp::ArrayBase list,cpp::ArrayBase dependencyStack){
	HX_STACK_FRAME("hunit.utils.TestCaseData","getDependent",0x522278ac,"hunit.utils.TestCaseData.getDependent","hunit/utils/TestCaseData.hx",53,0x795f96f1)
	HX_STACK_ARG(test,"test")
	HX_STACK_ARG(list,"list")
	HX_STACK_ARG(dependencyStack,"dependencyStack")
	HX_STACK_LINE(54)
	cpp::ArrayBase dependent = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(dependent,"dependent");
	HX_STACK_LINE(56)
	bool tmp = (dependencyStack != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	if ((tmp)){
		HX_STACK_LINE(57)
		Dynamic tmp1 = test;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		int tmp2 = dependencyStack->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		bool tmp3 = (tmp2 >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		if ((tmp3)){
			HX_STACK_LINE(58)
			Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("TestCaseData.hx","\xb2","\xd6","\xfc","\x99"),58,HX_HCSTRING("hunit.utils.TestCaseData","\x2b","\xcc","\x55","\x49"),HX_HCSTRING("getDependent","\x89","\x36","\x74","\x32"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			::hunit::exceptions::CircularTestDependencyException tmp5 = ::hunit::exceptions::CircularTestDependencyException_obj::__new(HX_HCSTRING("Tests with circular dependancies detected. Check @depends() metas.","\x1f","\x24","\xa8","\x21"),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			HX_STACK_DO_THROW(tmp5);
		}
		HX_STACK_LINE(60)
		Dynamic tmp4 = test;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		dependencyStack->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
	}
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		while((true)){
			HX_STACK_LINE(63)
			bool tmp1 = (_g < list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(63)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(63)
			if ((tmp2)){
				HX_STACK_LINE(63)
				break;
			}
			HX_STACK_LINE(63)
			Dynamic tmp3 = list->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(63)
			Dynamic t = tmp3;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(63)
			++(_g);
			HX_STACK_LINE(64)
			bool tmp4 = (t == test);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			if ((tmp4)){
				HX_STACK_LINE(64)
				continue;
			}
			HX_STACK_LINE(66)
			::String tmp5 = test->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			int tmp6 = t->__Field(HX_HCSTRING("depends","\x87","\x29","\x65","\x60"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			bool tmp7 = (tmp6 >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(66)
			if ((tmp7)){
				HX_STACK_LINE(67)
				Dynamic tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(67)
				dependent->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
				HX_STACK_LINE(68)
				bool tmp9 = (dependencyStack == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(68)
				cpp::ArrayBase subStack;		HX_STACK_VAR(subStack,"subStack");
				HX_STACK_LINE(68)
				if ((tmp9)){
					HX_STACK_LINE(68)
					subStack = null();
				}
				else{
					HX_STACK_LINE(68)
					subStack = dependencyStack->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();
				}
				HX_STACK_LINE(69)
				Dynamic tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(69)
				dependent = dependent->__Field(HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"), hx::paccDynamic )(::hunit::utils::TestCaseData_obj::getDependent(tmp10,list,subStack));
			}
		}
	}
	HX_STACK_LINE(73)
	return dependent;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TestCaseData_obj,getDependent,return )

cpp::ArrayBase TestCaseData_obj::sortByDependencies( cpp::ArrayBase list){
	HX_STACK_FRAME("hunit.utils.TestCaseData","sortByDependencies",0x2b53fec1,"hunit.utils.TestCaseData.sortByDependencies","hunit/utils/TestCaseData.hx",82,0x795f96f1)
	HX_STACK_ARG(list,"list")
	HX_STACK_LINE(83)
	bool tmp = (list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	if ((tmp)){
		HX_STACK_LINE(83)
		return cpp::ArrayBase_obj::__new();
	}
	HX_STACK_LINE(85)
	cpp::ArrayBase result = list->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();		HX_STACK_VAR(result,"result");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 2; }
	int run(Dynamic a,Dynamic b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","hunit/utils/TestCaseData.hx",86,0x795f96f1)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(86)
			int tmp1 = a->__Field(HX_HCSTRING("depends","\x87","\x29","\x65","\x60"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			int tmp2 = b->__Field(HX_HCSTRING("depends","\x87","\x29","\x65","\x60"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(86)
			return tmp3;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(86)
	result->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(87)
	Dynamic tmp1 = result->__GetItem((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	int tmp2 = tmp1->__Field(HX_HCSTRING("depends","\x87","\x29","\x65","\x60"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(87)
	if ((tmp3)){
		HX_STACK_LINE(88)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("TestCaseData.hx","\xb2","\xd6","\xfc","\x99"),88,HX_HCSTRING("hunit.utils.TestCaseData","\x2b","\xcc","\x55","\x49"),HX_HCSTRING("sortByDependencies","\x5e","\x00","\x19","\xdd"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		::hunit::exceptions::CircularTestDependencyException tmp5 = ::hunit::exceptions::CircularTestDependencyException_obj::__new(HX_HCSTRING("Can't find tests without dependencies.","\x8a","\x6b","\xeb","\x49"),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(88)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(91)
	int idx = (int)0;		HX_STACK_VAR(idx,"idx");
	HX_STACK_LINE(93)
	cpp::ArrayBase dependent;		HX_STACK_VAR(dependent,"dependent");
	HX_STACK_LINE(94)
	while((true)){
		HX_STACK_LINE(94)
		bool tmp4 = (idx < list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		if ((tmp5)){
			HX_STACK_LINE(94)
			break;
		}
		HX_STACK_LINE(95)
		Dynamic tmp6 = result->__GetItem(idx);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		dependent = ::hunit::utils::TestCaseData_obj::getDependent(tmp6,result,cpp::ArrayBase_obj::__new());
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(98)
			while((true)){
				HX_STACK_LINE(98)
				bool tmp7 = (_g < dependent->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(98)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(98)
				if ((tmp8)){
					HX_STACK_LINE(98)
					break;
				}
				HX_STACK_LINE(98)
				Dynamic tmp9 = dependent->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(98)
				Dynamic test = tmp9;		HX_STACK_VAR(test,"test");
				HX_STACK_LINE(98)
				++(_g);
				HX_STACK_LINE(99)
				Dynamic tmp10 = test;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(99)
				result->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp10);
				HX_STACK_LINE(100)
				Dynamic tmp11 = test;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(100)
				result->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
			}
		}
		HX_STACK_LINE(103)
		(idx)++;
	}
	HX_STACK_LINE(106)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TestCaseData_obj,sortByDependencies,return )


TestCaseData_obj::TestCaseData_obj()
{
}

void TestCaseData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestCaseData);
	HX_MARK_MEMBER_NAME(testCase,"testCase");
	HX_MARK_MEMBER_NAME(rtti,"rtti");
	HX_MARK_MEMBER_NAME(tests,"tests");
	HX_MARK_MEMBER_NAME(defaultGroups,"defaultGroups");
	HX_MARK_END_CLASS();
}

void TestCaseData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(testCase,"testCase");
	HX_VISIT_MEMBER_NAME(rtti,"rtti");
	HX_VISIT_MEMBER_NAME(tests,"tests");
	HX_VISIT_MEMBER_NAME(defaultGroups,"defaultGroups");
}

Dynamic TestCaseData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { if (inCallProp == hx::paccAlways) return get_file(); }
		if (HX_FIELD_EQ(inName,"rtti") ) { return rtti; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tests") ) { return tests; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testCase") ) { return testCase; }
		if (HX_FIELD_EQ(inName,"getTests") ) { return getTests_dyn(); }
		if (HX_FIELD_EQ(inName,"get_file") ) { return get_file_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { if (inCallProp == hx::paccAlways) return get_className(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getTestData") ) { return getTestData_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_testCase") ) { return set_testCase_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultGroups") ) { return defaultGroups; }
		if (HX_FIELD_EQ(inName,"get_className") ) { return get_className_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"totalTestCount") ) { if (inCallProp == hx::paccAlways) return get_totalTestCount(); }
		if (HX_FIELD_EQ(inName,"gatherTestData") ) { return gatherTestData_dyn(); }
		if (HX_FIELD_EQ(inName,"testIsInGroups") ) { return testIsInGroups_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_totalTestCount") ) { return get_totalTestCount_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"processTestCaseRttiMeta") ) { return processTestCaseRttiMeta_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TestCaseData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"getDependent") ) { outValue = getDependent_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"sortByDependencies") ) { outValue = sortByDependencies_dyn(); return true;  }
	}
	return false;
}

Dynamic TestCaseData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rtti") ) { rtti=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tests") ) { tests=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testCase") ) { if (inCallProp == hx::paccAlways) return set_testCase(inValue);testCase=inValue.Cast< ::hunit::TestCase >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultGroups") ) { defaultGroups=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TestCaseData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TestCaseData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	outFields->push(HX_HCSTRING("totalTestCount","\xb9","\x76","\xa7","\xe8"));
	outFields->push(HX_HCSTRING("testCase","\x22","\xa4","\xec","\x44"));
	outFields->push(HX_HCSTRING("rtti","\xb7","\xbd","\xb2","\x4b"));
	outFields->push(HX_HCSTRING("tests","\xe1","\x7f","\x95","\x0d"));
	outFields->push(HX_HCSTRING("defaultGroups","\xf5","\xf7","\xa0","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hunit::TestCase*/ ,(int)offsetof(TestCaseData_obj,testCase),HX_HCSTRING("testCase","\x22","\xa4","\xec","\x44")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestCaseData_obj,rtti),HX_HCSTRING("rtti","\xb7","\xbd","\xb2","\x4b")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(TestCaseData_obj,tests),HX_HCSTRING("tests","\xe1","\x7f","\x95","\x0d")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TestCaseData_obj,defaultGroups),HX_HCSTRING("defaultGroups","\xf5","\xf7","\xa0","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("testCase","\x22","\xa4","\xec","\x44"),
	HX_HCSTRING("rtti","\xb7","\xbd","\xb2","\x4b"),
	HX_HCSTRING("tests","\xe1","\x7f","\x95","\x0d"),
	HX_HCSTRING("defaultGroups","\xf5","\xf7","\xa0","\x16"),
	HX_HCSTRING("getTests","\x6b","\x8f","\x6c","\x6d"),
	HX_HCSTRING("processTestCaseRttiMeta","\xed","\xba","\xaf","\xc1"),
	HX_HCSTRING("gatherTestData","\xb7","\xfc","\xee","\xd2"),
	HX_HCSTRING("getTestData","\x52","\x9e","\x89","\x6b"),
	HX_HCSTRING("testIsInGroups","\x15","\xa7","\x48","\xbf"),
	HX_HCSTRING("get_className","\x7a","\x66","\xa1","\x9d"),
	HX_HCSTRING("get_file","\x05","\x8a","\x76","\xc3"),
	HX_HCSTRING("get_totalTestCount","\x82","\x57","\x41","\x84"),
	HX_HCSTRING("set_testCase","\x9f","\x7b","\xff","\x0e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestCaseData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestCaseData_obj::__mClass,"__mClass");
};

#endif

hx::Class TestCaseData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getDependent","\x89","\x36","\x74","\x32"),
	HX_HCSTRING("sortByDependencies","\x5e","\x00","\x19","\xdd"),
	::String(null()) };

void TestCaseData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.utils.TestCaseData","\x2b","\xcc","\x55","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TestCaseData_obj::__GetStatic;
	__mClass->mSetStaticField = &TestCaseData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestCaseData_obj >;
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

} // end namespace hunit
} // end namespace utils
