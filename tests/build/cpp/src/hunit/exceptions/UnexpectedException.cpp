#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_hunit_exceptions_UnexpectedException
#include <hunit/exceptions/UnexpectedException.h>
#endif
namespace hunit{
namespace exceptions{

Void UnexpectedException_obj::__construct(Dynamic e,Array< ::Dynamic > exceptionStack,Dynamic pos)
{
HX_STACK_FRAME("hunit.exceptions.UnexpectedException","new",0x9349eb28,"hunit.exceptions.UnexpectedException.new","hunit/exceptions/UnexpectedException.hx",24,0x33ec56e8)
HX_STACK_THIS(this)
HX_STACK_ARG(e,"e")
HX_STACK_ARG(exceptionStack,"exceptionStack")
HX_STACK_ARG(pos,"pos")
{
	HX_STACK_LINE(26)
	this->originalExceptionStack = exceptionStack;
	HX_STACK_LINE(27)
	this->original = e;
	HX_STACK_LINE(29)
	Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	Dynamic tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	super::__construct(tmp1,tmp2);
}
;
	return null();
}

//UnexpectedException_obj::~UnexpectedException_obj() { }

Dynamic UnexpectedException_obj::__CreateEmpty() { return  new UnexpectedException_obj; }
hx::ObjectPtr< UnexpectedException_obj > UnexpectedException_obj::__new(Dynamic e,Array< ::Dynamic > exceptionStack,Dynamic pos)
{  hx::ObjectPtr< UnexpectedException_obj > _result_ = new UnexpectedException_obj();
	_result_->__construct(e,exceptionStack,pos);
	return _result_;}

Dynamic UnexpectedException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UnexpectedException_obj > _result_ = new UnexpectedException_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::String UnexpectedException_obj::toString( ){
	HX_STACK_FRAME("hunit.exceptions.UnexpectedException","toString",0x687aa0e4,"hunit.exceptions.UnexpectedException.toString","hunit/exceptions/UnexpectedException.hx",38,0x33ec56e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	Dynamic tmp = this->original;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::Exception >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	if ((tmp1)){
		HX_STACK_LINE(40)
		::hx::Class tmp2 = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		::String tmp3 = ::Type_obj::getClassName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		::String className = tmp3;		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(41)
		::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + className);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		::String tmp5 = (tmp4 + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		Dynamic tmp6 = this->original;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		::Exception tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		tmp7 = hx::TCast< ::Exception >::cast(tmp6);
		HX_STACK_LINE(41)
		::String tmp8 = tmp7->toString();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(41)
		::String tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(41)
		return tmp9;
	}
	else{
		HX_STACK_LINE(43)
		::String tmp2 = this->super::toString();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		return tmp2;
	}
	HX_STACK_LINE(39)
	return null();
}


Array< ::Dynamic > UnexpectedException_obj::buildStack( Array< ::Dynamic > stack){
	HX_STACK_FRAME("hunit.exceptions.UnexpectedException","buildStack",0x3f490372,"hunit.exceptions.UnexpectedException.buildStack","hunit/exceptions/UnexpectedException.hx",53,0x33ec56e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stack,"stack")
	HX_STACK_LINE(54)
	Array< ::Dynamic > exceptionStack = this->originalExceptionStack;		HX_STACK_VAR(exceptionStack,"exceptionStack");
	HX_STACK_LINE(57)
	Dynamic tmp = this->original;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::Exception >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	if ((tmp1)){
		HX_STACK_LINE(58)
		Dynamic tmp2 = this->original;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		::Exception tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		tmp3 = hx::TCast< ::Exception >::cast(tmp2);
		HX_STACK_LINE(58)
		this->pos = tmp3->pos;
		HX_STACK_LINE(59)
		Dynamic tmp4 = this->original;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		::Exception tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		tmp5 = hx::TCast< ::Exception >::cast(tmp4);
		HX_STACK_LINE(59)
		exceptionStack = tmp5->stack->copy();
	}
	else{
		HX_STACK_LINE(64)
		bool tmp2 = (exceptionStack->length == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		if ((tmp2)){
			HX_STACK_LINE(65)
			exceptionStack = stack;
		}
		else{
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				::haxe::StackItem tmp3 = exceptionStack->__get((int)0).StaticCast< ::haxe::StackItem >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(69)
				::haxe::StackItem _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(69)
				switch( (int)(_g->__Index())){
					case (int)2: {
						HX_STACK_LINE(69)
						::haxe::StackItem tmp4 = (::haxe::StackItem(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(69)
						bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(69)
						if ((tmp5)){
							HX_STACK_LINE(69)
							int tmp6 = (::haxe::StackItem(_g))->__Param(2);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(69)
							int line = tmp6;		HX_STACK_VAR(line,"line");
							HX_STACK_LINE(69)
							::String tmp7 = (::haxe::StackItem(_g))->__Param(1);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(69)
							::String file = tmp7;		HX_STACK_VAR(file,"file");
							HX_STACK_LINE(70)
							{
								HX_STACK_LINE(71)
								Dynamic tmp8 = this->pos;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(71)
								tmp8->__FieldRef(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62")) = file;
								HX_STACK_LINE(72)
								Dynamic tmp9 = this->pos;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(72)
								tmp9->__FieldRef(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76")) = line;
							}
						}
						else{
							HX_STACK_LINE(69)
							::haxe::StackItem tmp6 = (::haxe::StackItem(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(69)
							switch( (int)(tmp6->__Index())){
								case (int)3: {
									HX_STACK_LINE(69)
									int tmp7 = (::haxe::StackItem(_g))->__Param(2);		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(69)
									int line = tmp7;		HX_STACK_VAR(line,"line");
									HX_STACK_LINE(69)
									::String tmp8 = (::haxe::StackItem(_g))->__Param(1);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(69)
									::String file = tmp8;		HX_STACK_VAR(file,"file");
									HX_STACK_LINE(69)
									::String tmp9 = (::haxe::StackItem((::haxe::StackItem(_g))->__Param(0)))->__Param(1);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(69)
									::String methodName = tmp9;		HX_STACK_VAR(methodName,"methodName");
									HX_STACK_LINE(69)
									::String tmp10 = (::haxe::StackItem((::haxe::StackItem(_g))->__Param(0)))->__Param(0);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(69)
									::String className = tmp10;		HX_STACK_VAR(className,"className");
									HX_STACK_LINE(73)
									{
										HX_STACK_LINE(74)
										Dynamic tmp11 = this->pos;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(74)
										tmp11->__FieldRef(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")) = className;
										HX_STACK_LINE(75)
										Dynamic tmp12 = this->pos;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(75)
										tmp12->__FieldRef(HX_HCSTRING("methodName","\xcc","\x19","\x0f","\x12")) = methodName;
										HX_STACK_LINE(76)
										Dynamic tmp13 = this->pos;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(76)
										tmp13->__FieldRef(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62")) = file;
										HX_STACK_LINE(77)
										Dynamic tmp14 = this->pos;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(77)
										tmp14->__FieldRef(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76")) = line;
									}
								}
								;break;
								default: {
								}
							}
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(69)
						::String tmp4 = (::haxe::StackItem(_g))->__Param(1);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(69)
						::String methodName = tmp4;		HX_STACK_VAR(methodName,"methodName");
						HX_STACK_LINE(69)
						::String tmp5 = (::haxe::StackItem(_g))->__Param(0);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(69)
						::String className = tmp5;		HX_STACK_VAR(className,"className");
						HX_STACK_LINE(78)
						{
							HX_STACK_LINE(79)
							Dynamic tmp6 = this->pos;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(79)
							tmp6->__FieldRef(HX_HCSTRING("methodName","\xcc","\x19","\x0f","\x12")) = methodName;
							HX_STACK_LINE(80)
							Dynamic tmp7 = this->pos;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(80)
							tmp7->__FieldRef(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")) = className;
						}
					}
					;break;
					default: {
					}
				}
			}
		}
	}
	HX_STACK_LINE(86)
	return this->super::buildStack(exceptionStack);
}



UnexpectedException_obj::UnexpectedException_obj()
{
}

void UnexpectedException_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UnexpectedException);
	HX_MARK_MEMBER_NAME(original,"original");
	HX_MARK_MEMBER_NAME(originalExceptionStack,"originalExceptionStack");
	::Exception_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UnexpectedException_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(original,"original");
	HX_VISIT_MEMBER_NAME(originalExceptionStack,"originalExceptionStack");
	::Exception_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UnexpectedException_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"original") ) { return original; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buildStack") ) { return buildStack_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"originalExceptionStack") ) { return originalExceptionStack; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UnexpectedException_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"original") ) { original=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"originalExceptionStack") ) { originalExceptionStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UnexpectedException_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void UnexpectedException_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("original","\x51","\x34","\xe8","\xe0"));
	outFields->push(HX_HCSTRING("originalExceptionStack","\xaa","\x9c","\xa4","\x9c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UnexpectedException_obj,original),HX_HCSTRING("original","\x51","\x34","\xe8","\xe0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UnexpectedException_obj,originalExceptionStack),HX_HCSTRING("originalExceptionStack","\xaa","\x9c","\xa4","\x9c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("original","\x51","\x34","\xe8","\xe0"),
	HX_HCSTRING("originalExceptionStack","\xaa","\x9c","\xa4","\x9c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("buildStack","\x3a","\xb5","\x7e","\x18"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UnexpectedException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UnexpectedException_obj::__mClass,"__mClass");
};

#endif

hx::Class UnexpectedException_obj::__mClass;

void UnexpectedException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.exceptions.UnexpectedException","\x36","\x77","\x63","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &UnexpectedException_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UnexpectedException_obj >;
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
} // end namespace exceptions
