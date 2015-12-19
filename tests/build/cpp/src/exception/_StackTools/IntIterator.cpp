#include <hxcpp.h>

#ifndef INCLUDED_exception__StackTools_IntIterator
#include <exception/_StackTools/IntIterator.h>
#endif
namespace exception{
namespace _StackTools{

Void IntIterator_obj::__construct(int from,int till)
{
HX_STACK_FRAME("exception._StackTools.IntIterator","new",0x52550334,"exception._StackTools.IntIterator.new","exception/StackTools.hx",232,0x021559cb)
HX_STACK_THIS(this)
HX_STACK_ARG(from,"from")
HX_STACK_ARG(till,"till")
{
	HX_STACK_LINE(234)
	this->till = (int)0;
	HX_STACK_LINE(233)
	this->current = (int)0;
	HX_STACK_LINE(238)
	this->current = from;
	HX_STACK_LINE(239)
	this->till = till;
}
;
	return null();
}

//IntIterator_obj::~IntIterator_obj() { }

Dynamic IntIterator_obj::__CreateEmpty() { return  new IntIterator_obj; }
hx::ObjectPtr< IntIterator_obj > IntIterator_obj::__new(int from,int till)
{  hx::ObjectPtr< IntIterator_obj > _result_ = new IntIterator_obj();
	_result_->__construct(from,till);
	return _result_;}

Dynamic IntIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntIterator_obj > _result_ = new IntIterator_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool IntIterator_obj::hasNext( ){
	HX_STACK_FRAME("exception._StackTools.IntIterator","hasNext",0x18bbd241,"exception._StackTools.IntIterator.hasNext","exception/StackTools.hx",243,0x021559cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(244)
	int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	int tmp1 = this->till;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(IntIterator_obj,hasNext,return )

int IntIterator_obj::next( ){
	HX_STACK_FRAME("exception._StackTools.IntIterator","next",0xb80dcb9f,"exception._StackTools.IntIterator.next","exception/StackTools.hx",248,0x021559cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(249)
	int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	int tmp1 = this->till;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(249)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(249)
	if ((tmp2)){
		HX_STACK_LINE(249)
		tmp3 = (this->current)++;
	}
	else{
		HX_STACK_LINE(249)
		tmp3 = (this->current)--;
	}
	HX_STACK_LINE(249)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(IntIterator_obj,next,return )


IntIterator_obj::IntIterator_obj()
{
}

Dynamic IntIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"till") ) { return till; }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"till") ) { till=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool IntIterator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void IntIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"));
	outFields->push(HX_HCSTRING("till","\x35","\xcb","\xfc","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IntIterator_obj,current),HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsInt,(int)offsetof(IntIterator_obj,till),HX_HCSTRING("till","\x35","\xcb","\xfc","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("till","\x35","\xcb","\xfc","\x4c"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntIterator_obj::__mClass,"__mClass");
};

#endif

hx::Class IntIterator_obj::__mClass;

void IntIterator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("exception._StackTools.IntIterator","\x42","\x99","\x66","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &IntIterator_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IntIterator_obj >;
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

} // end namespace exception
} // end namespace _StackTools
