#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_hunit_warnings_Warning
#include <hunit/warnings/Warning.h>
#endif
namespace hunit{
namespace warnings{

Void Warning_obj::__construct(::String message)
{
HX_STACK_FRAME("hunit.warnings.Warning","new",0x48a27d99,"hunit.warnings.Warning.new","hunit/warnings/Warning.hx",22,0x3a3e07d7)
HX_STACK_THIS(this)
HX_STACK_ARG(message,"message")
{
	HX_STACK_LINE(23)
	bool tmp = (message == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	if ((tmp1)){
		HX_STACK_LINE(23)
		::String tmp3 = message;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		::String tmp5 = ::StringTools_obj::trim(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		int tmp7 = tmp6.length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(23)
		tmp2 = (tmp7 == (int)0);
	}
	else{
		HX_STACK_LINE(23)
		tmp2 = true;
	}
	HX_STACK_LINE(23)
	if ((tmp2)){
		HX_STACK_LINE(24)
		::String tmp3 = this->defaultMessage();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		message = tmp3;
	}
	HX_STACK_LINE(27)
	this->message = message;
}
;
	return null();
}

//Warning_obj::~Warning_obj() { }

Dynamic Warning_obj::__CreateEmpty() { return  new Warning_obj; }
hx::ObjectPtr< Warning_obj > Warning_obj::__new(::String message)
{  hx::ObjectPtr< Warning_obj > _result_ = new Warning_obj();
	_result_->__construct(message);
	return _result_;}

Dynamic Warning_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Warning_obj > _result_ = new Warning_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Warning_obj::defaultMessage( ){
	HX_STACK_FRAME("hunit.warnings.Warning","defaultMessage",0xe8776a6d,"hunit.warnings.Warning.defaultMessage","hunit/warnings/Warning.hx",35,0x3a3e07d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	::hx::Class tmp = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	::String tmp2 = tmp1.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"))->pop();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	::String className = tmp2;		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(38)
	Array< ::String > words = Array_obj< ::String >::__new();		HX_STACK_VAR(words,"words");
	HX_STACK_LINE(39)
	int wordStart = (int)-1;		HX_STACK_VAR(wordStart,"wordStart");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		int _g = className.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		while((true)){
			HX_STACK_LINE(40)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			if ((tmp4)){
				HX_STACK_LINE(40)
				break;
			}
			HX_STACK_LINE(40)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(41)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(41)
			::String tmp7 = className.charAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(41)
			::String _char = tmp7;		HX_STACK_VAR(_char,"char");
			HX_STACK_LINE(43)
			::String tmp8 = _char.toUpperCase();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(43)
			::String tmp9 = _char;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(43)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(43)
			if ((tmp10)){
				HX_STACK_LINE(44)
				bool tmp11 = (wordStart >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(44)
				if ((tmp11)){
					HX_STACK_LINE(45)
					int tmp12 = wordStart;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(45)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(45)
					::String tmp14 = className.substring(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(45)
					::String word = tmp14;		HX_STACK_VAR(word,"word");
					HX_STACK_LINE(46)
					bool tmp15 = (wordStart > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(46)
					if ((tmp15)){
						HX_STACK_LINE(47)
						::String tmp16 = word.toLowerCase();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(47)
						word = tmp16;
					}
					HX_STACK_LINE(50)
					::String tmp16 = word;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(50)
					words->push(tmp16);
				}
				HX_STACK_LINE(52)
				wordStart = i;
			}
		}
	}
	HX_STACK_LINE(55)
	bool tmp3 = (wordStart >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	if ((tmp3)){
		HX_STACK_LINE(56)
		int tmp4 = wordStart;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		::String tmp5 = className.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		::String tmp6 = tmp5.toLowerCase();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(56)
		words->push(tmp6);
	}
	HX_STACK_LINE(59)
	::String tmp4 = words->join(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Warning_obj,defaultMessage,return )


Warning_obj::Warning_obj()
{
}

void Warning_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Warning);
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_END_CLASS();
}

void Warning_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(message,"message");
}

Dynamic Warning_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return message; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultMessage") ) { return defaultMessage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Warning_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Warning_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Warning_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Warning_obj,message),HX_HCSTRING("message","\xc7","\x35","\x11","\x9a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"),
	HX_HCSTRING("defaultMessage","\x06","\x8f","\x51","\xc9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Warning_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Warning_obj::__mClass,"__mClass");
};

#endif

hx::Class Warning_obj::__mClass;

void Warning_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.warnings.Warning","\x27","\xbd","\x23","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Warning_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Warning_obj >;
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
} // end namespace warnings
