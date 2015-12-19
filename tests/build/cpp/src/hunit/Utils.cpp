#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_hunit_TestCase
#include <hunit/TestCase.h>
#endif
#ifndef INCLUDED_hunit_Utils
#include <hunit/Utils.h>
#endif
namespace hunit{

Void Utils_obj::__construct()
{
	return null();
}

//Utils_obj::~Utils_obj() { }

Dynamic Utils_obj::__CreateEmpty() { return  new Utils_obj; }
hx::ObjectPtr< Utils_obj > Utils_obj::__new()
{  hx::ObjectPtr< Utils_obj > _result_ = new Utils_obj();
	_result_->__construct();
	return _result_;}

Dynamic Utils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utils_obj > _result_ = new Utils_obj();
	_result_->__construct();
	return _result_;}

::String Utils_obj::META_TEST;

bool Utils_obj::isObject( Dynamic value){
	HX_STACK_FRAME("hunit.Utils","isObject",0xd674d388,"hunit.Utils.isObject","hunit/Utils.hx",66,0x3b4ef410)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(67)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		::ValueType tmp2 = ::Type_obj::_typeof(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		::ValueType _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		switch( (int)(_g->__Index())){
			case (int)6: {
				HX_STACK_LINE(67)
				::hx::Class tmp3 = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(67)
				::hx::Class _switch_1 = (tmp3);
				if (  ( _switch_1==hx::ClassOf< ::String >())){
					HX_STACK_LINE(68)
					tmp = false;
				}
				else  {
					HX_STACK_LINE(69)
					tmp = true;
				}
;
;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(70)
				tmp = true;
			}
			;break;
			default: {
				HX_STACK_LINE(71)
				tmp = false;
			}
		}
	}
	HX_STACK_LINE(67)
	return tmp;
	HX_STACK_LINE(67)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,isObject,return )

::String Utils_obj::shortenString( ::String str){
	HX_STACK_FRAME("hunit.Utils","shortenString",0xe4b06cf7,"hunit.Utils.shortenString","hunit/Utils.hx",81,0x3b4ef410)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(82)
	bool tmp = (str.length > (int)70);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	if ((tmp)){
		HX_STACK_LINE(82)
		::String tmp2 = str.substr((int)0,(int)65);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		tmp1 = (tmp2 + HX_HCSTRING("<...>","\xcc","\xae","\x95","\xaa"));
	}
	else{
		HX_STACK_LINE(82)
		tmp1 = str;
	}
	HX_STACK_LINE(82)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,shortenString,return )

bool Utils_obj::hasToString( Dynamic value){
	HX_STACK_FRAME("hunit.Utils","hasToString",0x65580e47,"hunit.Utils.hasToString","hunit/Utils.hx",91,0x3b4ef410)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(92)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	if ((tmp1)){
		HX_STACK_LINE(92)
		return true;
	}
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		::ValueType tmp3 = ::Type_obj::_typeof(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		::ValueType _g = tmp3;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		switch( (int)(_g->__Index())){
			case (int)6: {
				HX_STACK_LINE(94)
				::hx::Class tmp4 = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(94)
				::hx::Class cls = tmp4;		HX_STACK_VAR(cls,"cls");
				HX_STACK_LINE(95)
				{
					HX_STACK_LINE(96)
					::hx::Class tmp5 = cls;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(96)
					int tmp6 = ::Type_obj::getInstanceFields(tmp5)->indexOf(HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(96)
					bool tmp7 = (tmp6 >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(96)
					return tmp7;
				}
			}
			;break;
			default: {
				HX_STACK_LINE(98)
				return false;
			}
		}
	}
	HX_STACK_LINE(94)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,hasToString,return )

::String Utils_obj::safeToString( Dynamic value){
	HX_STACK_FRAME("hunit.Utils","safeToString",0xd82a63d8,"hunit.Utils.safeToString","hunit/Utils.hx",108,0x3b4ef410)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(110)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(110)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,safeToString,return )

::String Utils_obj::shortenQuote( Dynamic value){
	HX_STACK_FRAME("hunit.Utils","shortenQuote",0x043425d6,"hunit.Utils.shortenQuote","hunit/Utils.hx",130,0x3b4ef410)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(131)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	::String tmp1 = ::hunit::Utils_obj::safeToString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	::String tmp2 = ::hunit::Utils_obj::shortenString(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(131)
	::String str = tmp2;		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(133)
	Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(133)
	bool tmp4 = ::hunit::Utils_obj::hasToString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(133)
	::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(133)
	if ((tmp4)){
		HX_STACK_LINE(133)
		::String tmp6 = (HX_HCSTRING("\"","\x22","\x00","\x00","\x00") + str);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(133)
		tmp5 = (tmp6 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(133)
		tmp5 = str;
	}
	HX_STACK_LINE(133)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,shortenQuote,return )

Void Utils_obj::printTrace( Dynamic printer,Dynamic value,Dynamic pos){
{
		HX_STACK_FRAME("hunit.Utils","printTrace",0x6ccdaa17,"hunit.Utils.printTrace","hunit/Utils.hx",142,0x3b4ef410)
		HX_STACK_ARG(printer,"printer")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(143)
		::String file = pos->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic );		HX_STACK_VAR(file,"file");
		HX_STACK_LINE(144)
		int line = pos->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(145)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		::String tmp1 = ::hunit::Utils_obj::safeToString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		::String msg = tmp1;		HX_STACK_VAR(msg,"msg");
		HX_STACK_LINE(147)
		::String tmp2 = (HX_HCSTRING("HUnit: ","\x92","\x80","\x32","\x4a") + file);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		::String tmp3 = (tmp2 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(147)
		int tmp4 = line;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(147)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(147)
		::String tmp6 = (tmp5 + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(147)
		::String tmp7 = msg;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(147)
		::String tmp9 = (tmp8 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(147)
		printer(tmp9).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,printTrace,(void))

Void Utils_obj::print( Dynamic value){
{
		HX_STACK_FRAME("hunit.Utils","print",0xf1e2f18e,"hunit.Utils.print","hunit/Utils.hx",154,0x3b4ef410)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(162)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		::cpp::Lib_obj::print(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,print,(void))

::String Utils_obj::buffer;

Void Utils_obj::bufferedPrint( ::String value,Dynamic printer){
{
		HX_STACK_FRAME("hunit.Utils","bufferedPrint",0x351efcaf,"hunit.Utils.bufferedPrint","hunit/Utils.hx",207,0x3b4ef410)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(printer,"printer")
		HX_STACK_LINE(208)
		hx::AddEq(::hunit::Utils_obj::buffer,value);
		HX_STACK_LINE(209)
		::String tmp = ::hunit::Utils_obj::buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		int tmp1 = tmp.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		if ((tmp2)){
			HX_STACK_LINE(210)
			::String tmp3 = ::hunit::Utils_obj::buffer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(210)
			Array< ::String > lines = tmp3.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(lines,"lines");
			HX_STACK_LINE(211)
			{
				HX_STACK_LINE(211)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(211)
				int tmp4 = (lines->length - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(211)
				int _g = tmp4;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(211)
				while((true)){
					HX_STACK_LINE(211)
					bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(211)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(211)
					if ((tmp6)){
						HX_STACK_LINE(211)
						break;
					}
					HX_STACK_LINE(211)
					int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(211)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(212)
					::String tmp8 = lines->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(212)
					printer(tmp8).Cast< Void >();
				}
			}
			HX_STACK_LINE(214)
			int tmp4 = (lines->length - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(214)
			::String tmp5 = lines->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(214)
			::hunit::Utils_obj::buffer = tmp5;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,bufferedPrint,(void))

Array< ::Dynamic > Utils_obj::filterCases( Array< ::Dynamic > cases,Array< ::String > excludes){
	HX_STACK_FRAME("hunit.Utils","filterCases",0x4b05690c,"hunit.Utils.filterCases","hunit/Utils.hx",225,0x3b4ef410)
	HX_STACK_ARG(cases,"cases")
	HX_STACK_ARG(excludes,"excludes")

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::String >,excludes)
	int __ArgCount() const { return 1; }
	bool run(::hunit::TestCase c){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","hunit/Utils.hx",225,0x3b4ef410)
		HX_STACK_ARG(c,"c")
		{
			HX_STACK_LINE(226)
			::hunit::TestCase tmp = c;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(226)
			::hx::Class tmp1 = ::Type_obj::getClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(226)
			::String tmp2 = ::Type_obj::getClassName(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			::String className = tmp2;		HX_STACK_VAR(className,"className");
			HX_STACK_LINE(228)
			{
				HX_STACK_LINE(228)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(228)
				while((true)){
					HX_STACK_LINE(228)
					bool tmp3 = (_g < excludes->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(228)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(228)
					if ((tmp4)){
						HX_STACK_LINE(228)
						break;
					}
					HX_STACK_LINE(228)
					::String tmp5 = excludes->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(228)
					::String e = tmp5;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(228)
					++(_g);
					HX_STACK_LINE(229)
					::String tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(229)
					int tmp7 = className.indexOf(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(229)
					bool tmp8 = (tmp7 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(229)
					if ((tmp8)){
						HX_STACK_LINE(229)
						return false;
					}
				}
			}
			HX_STACK_LINE(232)
			return true;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(225)
	return cases->filter( Dynamic(new _Function_1_1(excludes)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,filterCases,return )


Utils_obj::Utils_obj()
{
}

bool Utils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { outValue = buffer; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isObject") ) { outValue = isObject_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"printTrace") ) { outValue = printTrace_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasToString") ) { outValue = hasToString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"filterCases") ) { outValue = filterCases_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"safeToString") ) { outValue = safeToString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"shortenQuote") ) { outValue = shortenQuote_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shortenString") ) { outValue = shortenString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferedPrint") ) { outValue = bufferedPrint_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Utils_obj::META_TEST,HX_HCSTRING("META_TEST","\x4c","\x6f","\x3e","\x6a")},
	{hx::fsString,(void *) &Utils_obj::buffer,HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utils_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Utils_obj::META_TEST,"META_TEST");
	HX_MARK_MEMBER_NAME(Utils_obj::buffer,"buffer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utils_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Utils_obj::META_TEST,"META_TEST");
	HX_VISIT_MEMBER_NAME(Utils_obj::buffer,"buffer");
};

#endif

hx::Class Utils_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("META_TEST","\x4c","\x6f","\x3e","\x6a"),
	HX_HCSTRING("isObject","\x49","\x1a","\xa9","\x6d"),
	HX_HCSTRING("shortenString","\x96","\x0a","\x1f","\xd7"),
	HX_HCSTRING("hasToString","\x26","\xb6","\x25","\x0b"),
	HX_HCSTRING("safeToString","\x19","\x9f","\x4f","\x46"),
	HX_HCSTRING("shortenQuote","\x17","\x61","\x59","\x72"),
	HX_HCSTRING("printTrace","\x18","\xe3","\xb1","\x6e"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("bufferedPrint","\x4e","\x9a","\x8d","\x27"),
	HX_HCSTRING("filterCases","\xeb","\x10","\xd3","\xf0"),
	::String(null()) };

void Utils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.Utils","\x0f","\xcb","\x00","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utils_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Utils_obj >;
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

void Utils_obj::__boot()
{
	META_TEST= HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c");
	buffer= HX_HCSTRING("","\x00","\x00","\x00","\x00");
}

} // end namespace hunit
