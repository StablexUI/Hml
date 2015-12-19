#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_sx_themes_Theme
#include <sx/themes/Theme.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
namespace sx{
namespace themes{

Void Theme_obj::__construct()
{
HX_STACK_FRAME("sx.themes.Theme","new",0xcd83da20,"sx.themes.Theme.new","sx/themes/Theme.hx",26,0x57525b70)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		tmp = tmp2;
	}
	HX_STACK_LINE(27)
	this->__styles = tmp;
	HX_STACK_LINE(29)
	this->initialize();
}
;
	return null();
}

//Theme_obj::~Theme_obj() { }

Dynamic Theme_obj::__CreateEmpty() { return  new Theme_obj; }
hx::ObjectPtr< Theme_obj > Theme_obj::__new()
{  hx::ObjectPtr< Theme_obj > _result_ = new Theme_obj();
	_result_->__construct();
	return _result_;}

Dynamic Theme_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Theme_obj > _result_ = new Theme_obj();
	_result_->__construct();
	return _result_;}

Void Theme_obj::initialize( ){
{
		HX_STACK_FRAME("sx.themes.Theme","initialize",0xd163df90,"sx.themes.Theme.initialize","sx/themes/Theme.hx",37,0x57525b70)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_obj,initialize,(void))

::haxe::ds::StringMap Theme_obj::styles( ::hx::Class cls){
	HX_STACK_FRAME("sx.themes.Theme","styles",0x18777462,"sx.themes.Theme.styles","sx/themes/Theme.hx",49,0x57525b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cls,"cls")
	HX_STACK_LINE(50)
	::hx::Class tmp = cls;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	::String className = tmp1;		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(51)
	::haxe::ds::StringMap tmp2 = this->__styles;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	::String tmp3 = className;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	::haxe::ds::StringMap tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	::haxe::ds::StringMap styles = tmp4;		HX_STACK_VAR(styles,"styles");
	HX_STACK_LINE(53)
	bool tmp5 = (styles == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	if ((tmp5)){
		HX_STACK_LINE(54)
		::haxe::ds::StringMap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			::haxe::ds::StringMap tmp7 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			::haxe::ds::StringMap tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(54)
			tmp6 = tmp8;
		}
		HX_STACK_LINE(54)
		styles = tmp6;
		HX_STACK_LINE(55)
		::haxe::ds::StringMap tmp7 = this->__styles;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(55)
		::String tmp8 = className;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(55)
		::haxe::ds::StringMap tmp9 = styles;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(55)
		tmp7->set(tmp8,tmp9);
	}
	HX_STACK_LINE(58)
	::haxe::ds::StringMap tmp6 = styles;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(58)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Theme_obj,styles,return )

Void Theme_obj::apply( ::sx::widgets::Widget widget){
{
		HX_STACK_FRAME("sx.themes.Theme","apply",0xa4d17f2e,"sx.themes.Theme.apply","sx/themes/Theme.hx",68,0x57525b70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widget,"widget")
		HX_STACK_LINE(69)
		bool tmp = (widget->style == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		if ((tmp)){
			HX_STACK_LINE(69)
			return null();
		}
		HX_STACK_LINE(71)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			::sx::widgets::Widget tmp2 = widget;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			::hx::Class tmp3 = ::Type_obj::getClass(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			::haxe::ds::StringMap tmp4 = this->styles(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(71)
			::haxe::IMap this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(71)
			::String tmp5 = widget->style;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(71)
			tmp1 = this1->get(tmp5);
		}
		HX_STACK_LINE(71)
		Dynamic fn = tmp1;		HX_STACK_VAR(fn,"fn");
		HX_STACK_LINE(72)
		bool tmp2 = (fn == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		if ((tmp2)){
			HX_STACK_LINE(72)
			return null();
		}
		HX_STACK_LINE(74)
		::sx::widgets::Widget tmp3 = widget;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		fn(tmp3).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Theme_obj,apply,(void))

::String Theme_obj::DEFAULT_STYLE;


Theme_obj::Theme_obj()
{
}

void Theme_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Theme);
	HX_MARK_MEMBER_NAME(__styles,"__styles");
	HX_MARK_END_CLASS();
}

void Theme_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__styles,"__styles");
}

Dynamic Theme_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"styles") ) { return styles_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__styles") ) { return __styles; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Theme_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__styles") ) { __styles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Theme_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Theme_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__styles","\x42","\x51","\x02","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Theme_obj,__styles),HX_HCSTRING("__styles","\x42","\x51","\x02","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Theme_obj::DEFAULT_STYLE,HX_HCSTRING("DEFAULT_STYLE","\xb3","\x7f","\x93","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__styles","\x42","\x51","\x02","\xbe"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("styles","\x22","\xe6","\xd2","\x15"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Theme_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Theme_obj::DEFAULT_STYLE,"DEFAULT_STYLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Theme_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Theme_obj::DEFAULT_STYLE,"DEFAULT_STYLE");
};

#endif

hx::Class Theme_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEFAULT_STYLE","\xb3","\x7f","\x93","\xf7"),
	::String(null()) };

void Theme_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.themes.Theme","\x2e","\x8a","\x4c","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Theme_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Theme_obj >;
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

void Theme_obj::__boot()
{
	DEFAULT_STYLE= HX_HCSTRING("__DEFAULT__","\xe1","\x72","\x81","\x20");
}

} // end namespace sx
} // end namespace themes
