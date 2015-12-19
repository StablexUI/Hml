#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_exception_StackTools
#include <exception/StackTools.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif

Void Exception_obj::__construct(::String message,Dynamic pos)
{
HX_STACK_FRAME("Exception","new",0x6b35d4a1,"Exception.new","Exception.hx",70,0xc27d59ef)
HX_STACK_THIS(this)
HX_STACK_ARG(message,"message")
HX_STACK_ARG(pos,"pos")
{
	HX_STACK_LINE(73)
	this->message = message;
	HX_STACK_LINE(74)
	this->pos = pos;
	HX_STACK_LINE(77)
	this->stack = this->buildStack(::haxe::CallStack_obj::callStack());
}
;
	return null();
}

//Exception_obj::~Exception_obj() { }

Dynamic Exception_obj::__CreateEmpty() { return  new Exception_obj; }
hx::ObjectPtr< Exception_obj > Exception_obj::__new(::String message,Dynamic pos)
{  hx::ObjectPtr< Exception_obj > _result_ = new Exception_obj();
	_result_->__construct(message,pos);
	return _result_;}

Dynamic Exception_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Exception_obj > _result_ = new Exception_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Exception_obj::truncateStack( Dynamic pos,hx::Null< int >  __o_count){
int count = __o_count.Default(0);
	HX_STACK_FRAME("Exception","truncateStack",0xc41d6683,"Exception.truncateStack","Exception.hx",89,0xc27d59ef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(94)
		bool tmp = (pos != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		if ((tmp)){
			HX_STACK_LINE(95)
			bool fromTop = false;		HX_STACK_VAR(fromTop,"fromTop");
			HX_STACK_LINE(95)
			Dynamic tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(95)
			bool tmp2 = fromTop;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			this->stack = ::exception::StackTools_obj::cppTruncate(this->stack,tmp1,tmp2);
		}
		HX_STACK_LINE(98)
		bool tmp1 = (count > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		if ((tmp1)){
			HX_STACK_LINE(99)
			int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			this->stack = this->stack->slice(tmp2,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Exception_obj,truncateStack,(void))

::String Exception_obj::stringStack( ){
	HX_STACK_FRAME("Exception","stringStack",0x00dfc5f8,"Exception.stringStack","Exception.hx",110,0xc27d59ef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	::String tmp = ::haxe::CallStack_obj::toString(this->stack);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,stringStack,return )

::String Exception_obj::toString( ){
	HX_STACK_FRAME("Exception","toString",0x84f0c0cb,"Exception.toString","Exception.hx",120,0xc27d59ef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	::hx::Class tmp = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	::String className = tmp1;		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(122)
	Dynamic tmp2 = this->pos;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(122)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(122)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(122)
	if ((tmp3)){
		HX_STACK_LINE(122)
		tmp4 = HX_HCSTRING("unknown position","\xff","\xdb","\xd4","\x96");
	}
	else{
		HX_STACK_LINE(122)
		Dynamic tmp5 = this->pos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(122)
		::String tmp6 = tmp5->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(122)
		::String tmp7 = (tmp6 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(122)
		Dynamic tmp8 = this->pos;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(122)
		int tmp9 = tmp8->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(122)
		tmp4 = (tmp7 + tmp9);
	}
	HX_STACK_LINE(122)
	::String position = tmp4;		HX_STACK_VAR(position,"position");
	HX_STACK_LINE(124)
	::String tmp5 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + className);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(124)
	::String tmp6 = (tmp5 + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(124)
	::String tmp7 = this->message;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(124)
	::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(124)
	::String tmp9 = (tmp8 + HX_HCSTRING("\n\tCreated at ","\x16","\xf7","\x42","\x2d"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(124)
	::String tmp10 = position;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(124)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(124)
	::String msg = tmp11;		HX_STACK_VAR(msg,"msg");
	HX_STACK_LINE(125)
	::String tmp12 = ::haxe::CallStack_obj::toString(this->stack);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(125)
	::String tmp13 = ::StringTools_obj::replace(tmp12,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),HX_HCSTRING("\n\t","\xbf","\x08","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(125)
	hx::AddEq(msg,tmp13);
	HX_STACK_LINE(127)
	::String tmp14 = msg;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(127)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,toString,return )

Array< ::Dynamic > Exception_obj::buildStack( Array< ::Dynamic > stack){
	HX_STACK_FRAME("Exception","buildStack",0xfd742b19,"Exception.buildStack","Exception.hx",136,0xc27d59ef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stack,"stack")
	HX_STACK_LINE(137)
	Array< ::Dynamic > stack1;		HX_STACK_VAR(stack1,"stack1");
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		bool fromTop = false;		HX_STACK_VAR(fromTop,"fromTop");
		HX_STACK_LINE(137)
		Dynamic tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		bool tmp1 = fromTop;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		stack1 = ::exception::StackTools_obj::cppTruncate(stack,tmp,tmp1);
	}
	HX_STACK_LINE(139)
	return ::Exception_obj::processCallStackOnCreation(stack1);
}


HX_DEFINE_DYNAMIC_FUNC1(Exception_obj,buildStack,return )

::Exception Exception_obj::wrap( Dynamic e,Dynamic pos){
	HX_STACK_FRAME("Exception","wrap",0x69e0ee69,"Exception.wrap","Exception.hx",39,0xc27d59ef)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(40)
	Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::Exception >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	if ((tmp1)){
		HX_STACK_LINE(40)
		Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		return tmp2;
	}
	HX_STACK_LINE(42)
	Array< ::Dynamic > exceptionStack = ::haxe::CallStack_obj::exceptionStack();		HX_STACK_VAR(exceptionStack,"exceptionStack");
	HX_STACK_LINE(43)
	Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	Dynamic tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	::Exception tmp5 = ::Exception_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	::Exception exception = tmp5;		HX_STACK_VAR(exception,"exception");
	HX_STACK_LINE(46)
	bool tmp6 = (exceptionStack->length > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	if ((tmp6)){
		HX_STACK_LINE(47)
		exception->stack = exceptionStack;
	}
	HX_STACK_LINE(50)
	::Exception tmp7 = exception;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(50)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Exception_obj,wrap,return )

HX_BEGIN_DEFAULT_FUNC(__default_processCallStackOnCreation,Exception_obj)
Array< ::Dynamic > run(Array< ::Dynamic > stack){
	HX_STACK_FRAME("Exception","processCallStackOnCreation",0x88fcdd78,"Exception.processCallStackOnCreation","Exception.hx",60,0xc27d59ef)
	HX_STACK_ARG(stack,"stack")
	HX_STACK_LINE(60)
	return stack;
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

Dynamic Exception_obj::processCallStackOnCreation;


Exception_obj::Exception_obj()
{
}

void Exception_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Exception);
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(stack,"stack");
	HX_MARK_END_CLASS();
}

void Exception_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(stack,"stack");
}

Dynamic Exception_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { return stack; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return message; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buildStack") ) { return buildStack_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stringStack") ) { return stringStack_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"truncateStack") ) { return truncateStack_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Exception_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { outValue = wrap_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"processCallStackOnCreation") ) { outValue = processCallStackOnCreation; return true;  }
	}
	return false;
}

Dynamic Exception_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { stack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Exception_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"processCallStackOnCreation") ) { processCallStackOnCreation=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Exception_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Exception_obj,message),HX_HCSTRING("message","\xc7","\x35","\x11","\x9a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Exception_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Exception_obj,stack),HX_HCSTRING("stack","\x48","\x67","\x0b","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Exception_obj::processCallStackOnCreation,HX_HCSTRING("processCallStackOnCreation","\x99","\x79","\xa9","\x28")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"),
	HX_HCSTRING("truncateStack","\x02","\x27","\x95","\xf8"),
	HX_HCSTRING("stringStack","\xb7","\x18","\x0e","\x8f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("buildStack","\x3a","\xb5","\x7e","\x18"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Exception_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Exception_obj::processCallStackOnCreation,"processCallStackOnCreation");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Exception_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Exception_obj::processCallStackOnCreation,"processCallStackOnCreation");
};

#endif

hx::Class Exception_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"),
	HX_HCSTRING("processCallStackOnCreation","\x99","\x79","\xa9","\x28"),
	::String(null()) };

void Exception_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Exception","\x2f","\xf0","\x6c","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Exception_obj::__GetStatic;
	__mClass->mSetStaticField = &Exception_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Exception_obj >;
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

void Exception_obj::__boot()
{
	processCallStackOnCreation = new __default_processCallStackOnCreation;

}

