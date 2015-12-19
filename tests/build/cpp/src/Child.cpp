#include <hxcpp.h>

#ifndef INCLUDED_Child
#include <Child.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif

Void Child_obj::__construct()
{
HX_STACK_FRAME("Child","new",0x6153286e,"Child.new","Child.hx",9,0x49e83ec2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	this->level2_initialized = false;
	HX_STACK_LINE(11)
	this->level1_initialized = false;
	HX_STACK_LINE(55)
	super::__construct();
	HX_STACK_LINE(56)
	::sx::widgets::Widget tmp = this->get_level1();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	this->addChild(tmp);
}
;
	return null();
}

//Child_obj::~Child_obj() { }

Dynamic Child_obj::__CreateEmpty() { return  new Child_obj; }
hx::ObjectPtr< Child_obj > Child_obj::__new()
{  hx::ObjectPtr< Child_obj > _result_ = new Child_obj();
	_result_->__construct();
	return _result_;}

Dynamic Child_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Child_obj > _result_ = new Child_obj();
	_result_->__construct();
	return _result_;}

Void Child_obj::destroyHml( ){
{
		HX_STACK_FRAME("Child","destroyHml",0x72f1929f,"Child.destroyHml","Child.hx",19,0x49e83ec2)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Child_obj,destroyHml,(void))

::sx::widgets::Widget Child_obj::set_level1( ::sx::widgets::Widget value){
	HX_STACK_FRAME("Child","set_level1",0x5d32b21c,"Child.set_level1","Child.hx",24,0x49e83ec2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(25)
	this->level1_initialized = true;
	HX_STACK_LINE(26)
	::sx::widgets::Widget tmp = this->level1 = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Child_obj,set_level1,return )

::sx::widgets::Widget Child_obj::set_level2( ::sx::widgets::Widget value){
	HX_STACK_FRAME("Child","set_level2",0x5d32b21d,"Child.set_level2","Child.hx",29,0x49e83ec2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(30)
	this->level2_initialized = true;
	HX_STACK_LINE(31)
	::sx::widgets::Widget tmp = this->level2 = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Child_obj,set_level2,return )

::sx::widgets::Widget Child_obj::get_level2( ){
	HX_STACK_FRAME("Child","get_level2",0x59b513a9,"Child.get_level2","Child.hx",34,0x49e83ec2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	bool tmp = this->level2_initialized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	if ((tmp)){
		HX_STACK_LINE(36)
		::sx::widgets::Widget tmp1 = this->level2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		return tmp1;
	}
	HX_STACK_LINE(37)
	this->level2_initialized = true;
	HX_STACK_LINE(38)
	::sx::widgets::Widget tmp1 = ::sx::widgets::Widget_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	this->set_level2(tmp1);
	HX_STACK_LINE(39)
	::sx::widgets::Widget tmp2 = this->level2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	::sx::widgets::Widget res = tmp2;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(40)
	::sx::widgets::Widget tmp3 = res;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Child_obj,get_level2,return )

::sx::widgets::Widget Child_obj::get_level1( ){
	HX_STACK_FRAME("Child","get_level1",0x59b513a8,"Child.get_level1","Child.hx",43,0x49e83ec2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	bool tmp = this->level1_initialized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	if ((tmp)){
		HX_STACK_LINE(45)
		::sx::widgets::Widget tmp1 = this->level1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		return tmp1;
	}
	HX_STACK_LINE(46)
	this->level1_initialized = true;
	HX_STACK_LINE(47)
	::sx::widgets::Widget tmp1 = ::sx::widgets::Widget_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	this->set_level1(tmp1);
	HX_STACK_LINE(48)
	::sx::widgets::Widget tmp2 = this->level1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	::sx::widgets::Widget res = tmp2;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(49)
	::sx::widgets::Widget tmp3 = this->get_level2();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	res->addChild(tmp3);
	HX_STACK_LINE(50)
	::sx::widgets::Widget tmp4 = res;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Child_obj,get_level1,return )


Child_obj::Child_obj()
{
}

void Child_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Child);
	HX_MARK_MEMBER_NAME(level1_initialized,"level1_initialized");
	HX_MARK_MEMBER_NAME(level1,"level1");
	HX_MARK_MEMBER_NAME(level2_initialized,"level2_initialized");
	HX_MARK_MEMBER_NAME(level2,"level2");
	::sx::widgets::Widget_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Child_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(level1_initialized,"level1_initialized");
	HX_VISIT_MEMBER_NAME(level1,"level1");
	HX_VISIT_MEMBER_NAME(level2_initialized,"level2_initialized");
	HX_VISIT_MEMBER_NAME(level2,"level2");
	::sx::widgets::Widget_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Child_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"level1") ) { return inCallProp == hx::paccAlways ? get_level1() : level1; }
		if (HX_FIELD_EQ(inName,"level2") ) { return inCallProp == hx::paccAlways ? get_level2() : level2; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"destroyHml") ) { return destroyHml_dyn(); }
		if (HX_FIELD_EQ(inName,"set_level1") ) { return set_level1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_level2") ) { return set_level2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_level2") ) { return get_level2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_level1") ) { return get_level1_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"level1_initialized") ) { return level1_initialized; }
		if (HX_FIELD_EQ(inName,"level2_initialized") ) { return level2_initialized; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Child_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"level1") ) { if (inCallProp == hx::paccAlways) return set_level1(inValue);level1=inValue.Cast< ::sx::widgets::Widget >(); return inValue; }
		if (HX_FIELD_EQ(inName,"level2") ) { if (inCallProp == hx::paccAlways) return set_level2(inValue);level2=inValue.Cast< ::sx::widgets::Widget >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"level1_initialized") ) { level1_initialized=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"level2_initialized") ) { level2_initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Child_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Child_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("level1_initialized","\xc2","\x70","\xe4","\x1b"));
	outFields->push(HX_HCSTRING("level1","\x2d","\xbe","\x4f","\xa4"));
	outFields->push(HX_HCSTRING("level2_initialized","\x43","\xee","\xa4","\x61"));
	outFields->push(HX_HCSTRING("level2","\x2e","\xbe","\x4f","\xa4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Child_obj,level1_initialized),HX_HCSTRING("level1_initialized","\xc2","\x70","\xe4","\x1b")},
	{hx::fsObject /*::sx::widgets::Widget*/ ,(int)offsetof(Child_obj,level1),HX_HCSTRING("level1","\x2d","\xbe","\x4f","\xa4")},
	{hx::fsBool,(int)offsetof(Child_obj,level2_initialized),HX_HCSTRING("level2_initialized","\x43","\xee","\xa4","\x61")},
	{hx::fsObject /*::sx::widgets::Widget*/ ,(int)offsetof(Child_obj,level2),HX_HCSTRING("level2","\x2e","\xbe","\x4f","\xa4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("level1_initialized","\xc2","\x70","\xe4","\x1b"),
	HX_HCSTRING("level1","\x2d","\xbe","\x4f","\xa4"),
	HX_HCSTRING("level2_initialized","\x43","\xee","\xa4","\x61"),
	HX_HCSTRING("level2","\x2e","\xbe","\x4f","\xa4"),
	HX_HCSTRING("destroyHml","\xed","\xac","\x13","\xae"),
	HX_HCSTRING("set_level1","\x6a","\xcc","\x54","\x98"),
	HX_HCSTRING("set_level2","\x6b","\xcc","\x54","\x98"),
	HX_HCSTRING("get_level2","\xf7","\x2d","\xd7","\x94"),
	HX_HCSTRING("get_level1","\xf6","\x2d","\xd7","\x94"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Child_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Child_obj::__mClass,"__mClass");
};

#endif

hx::Class Child_obj::__mClass;

void Child_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Child","\x7c","\x19","\xe7","\xd8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Child_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Child_obj >;
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

