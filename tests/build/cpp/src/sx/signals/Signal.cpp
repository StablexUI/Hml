#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
namespace sx{
namespace signals{

Void Signal_obj::__construct()
{
HX_STACK_FRAME("sx.signals.Signal","new",0x100fb026,"sx.signals.Signal.new","sx/signals/Signal.hx",18,0xe9b67cc8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	this->__listenersInUse = false;
	HX_STACK_LINE(37)
	this->__listeners = cpp::ArrayBase_obj::__new();
}
;
	return null();
}

//Signal_obj::~Signal_obj() { }

Dynamic Signal_obj::__CreateEmpty() { return  new Signal_obj; }
hx::ObjectPtr< Signal_obj > Signal_obj::__new()
{  hx::ObjectPtr< Signal_obj > _result_ = new Signal_obj();
	_result_->__construct();
	return _result_;}

Dynamic Signal_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Signal_obj > _result_ = new Signal_obj();
	_result_->__construct();
	return _result_;}

Void Signal_obj::add( Dynamic listener){
{
		HX_STACK_FRAME("sx.signals.Signal","add",0x1005d1e7,"sx.signals.Signal.add","sx/signals/Signal.hx",45,0xe9b67cc8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			bool tmp = this->__listenersInUse;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(46)
			if ((tmp)){
				HX_STACK_LINE(46)
				this->__listeners = this->__listeners->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();
				HX_STACK_LINE(46)
				this->__listenersInUse = false;
			}
		}
		HX_STACK_LINE(47)
		Dynamic tmp = listener;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		this->__listeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Signal_obj,add,(void))

bool Signal_obj::unique( Dynamic listener){
	HX_STACK_FRAME("sx.signals.Signal","unique",0x842c530b,"sx.signals.Signal.unique","sx/signals/Signal.hx",58,0xe9b67cc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(59)
	Dynamic tmp = listener;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	int tmp1 = this->__indexOf(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	if ((tmp2)){
		HX_STACK_LINE(59)
		return false;
	}
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		bool tmp3 = this->__listenersInUse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		if ((tmp3)){
			HX_STACK_LINE(61)
			this->__listeners = this->__listeners->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();
			HX_STACK_LINE(61)
			this->__listenersInUse = false;
		}
	}
	HX_STACK_LINE(62)
	Dynamic tmp3 = listener;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	this->__listeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	HX_STACK_LINE(64)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Signal_obj,unique,return )

bool Signal_obj::remove( Dynamic listener){
	HX_STACK_FRAME("sx.signals.Signal","remove",0x25225c3e,"sx.signals.Signal.remove","sx/signals/Signal.hx",75,0xe9b67cc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(76)
	Dynamic tmp = listener;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	int tmp1 = this->__indexOf(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(77)
	bool tmp2 = (index < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	if ((tmp2)){
		HX_STACK_LINE(77)
		return false;
	}
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		bool tmp3 = this->__listenersInUse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		if ((tmp3)){
			HX_STACK_LINE(79)
			this->__listeners = this->__listeners->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();
			HX_STACK_LINE(79)
			this->__listenersInUse = false;
		}
	}
	HX_STACK_LINE(80)
	int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	this->__listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp3,(int)1);
	HX_STACK_LINE(82)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Signal_obj,remove,return )

bool Signal_obj::will( Dynamic listener){
	HX_STACK_FRAME("sx.signals.Signal","will",0x03a05c8c,"sx.signals.Signal.will","sx/signals/Signal.hx",99,0xe9b67cc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(100)
	Dynamic tmp = listener;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	int tmp1 = this->__indexOf(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Signal_obj,will,return )

int Signal_obj::__indexOf( Dynamic listener){
	HX_STACK_FRAME("sx.signals.Signal","__indexOf",0xcc1491ef,"sx.signals.Signal.__indexOf","sx/signals/Signal.hx",108,0xe9b67cc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(109)
	int index = (int)-1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(111)
	{
		HX_STACK_LINE(111)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(111)
		int tmp = this->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(111)
		while((true)){
			HX_STACK_LINE(111)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(111)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			if ((tmp2)){
				HX_STACK_LINE(111)
				break;
			}
			HX_STACK_LINE(111)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(112)
			Dynamic tmp4 = this->__listeners->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(112)
			Dynamic tmp5 = listener;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(112)
			bool tmp6 = ::Reflect_obj::compareMethods(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(112)
			if ((tmp6)){
				HX_STACK_LINE(113)
				index = i;
				HX_STACK_LINE(114)
				break;
			}
		}
	}
	HX_STACK_LINE(118)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Signal_obj,__indexOf,return )

Void Signal_obj::__cloneListenersInUse( ){
{
		HX_STACK_FRAME("sx.signals.Signal","__cloneListenersInUse",0x691b5dc6,"sx.signals.Signal.__cloneListenersInUse","sx/signals/Signal.hx",126,0xe9b67cc8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		bool tmp = this->__listenersInUse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		if ((tmp)){
			HX_STACK_LINE(128)
			this->__listeners = this->__listeners->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();
			HX_STACK_LINE(129)
			this->__listenersInUse = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Signal_obj,__cloneListenersInUse,(void))

int Signal_obj::get_listenersCount( ){
	HX_STACK_FRAME("sx.signals.Signal","get_listenersCount",0x9357b293,"sx.signals.Signal.get_listenersCount","sx/signals/Signal.hx",135,0xe9b67cc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(135)
	int tmp = this->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Signal_obj,get_listenersCount,return )


Signal_obj::Signal_obj()
{
}

void Signal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Signal);
	HX_MARK_MEMBER_NAME(__listeners,"__listeners");
	HX_MARK_MEMBER_NAME(__listenersInUse,"__listenersInUse");
	HX_MARK_END_CLASS();
}

void Signal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__listeners,"__listeners");
	HX_VISIT_MEMBER_NAME(__listenersInUse,"__listenersInUse");
}

Dynamic Signal_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"will") ) { return will_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unique") ) { return unique_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__indexOf") ) { return __indexOf_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__listeners") ) { return __listeners; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"listenersCount") ) { if (inCallProp == hx::paccAlways) return get_listenersCount(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__listenersInUse") ) { return __listenersInUse; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_listenersCount") ) { return get_listenersCount_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__cloneListenersInUse") ) { return __cloneListenersInUse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Signal_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__listeners") ) { __listeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__listenersInUse") ) { __listenersInUse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Signal_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Signal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("listenersCount","\xd0","\x02","\x07","\x1a"));
	outFields->push(HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21"));
	outFields->push(HX_HCSTRING("__listenersInUse","\x83","\x8e","\xec","\xc1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Signal_obj,__listeners),HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21")},
	{hx::fsBool,(int)offsetof(Signal_obj,__listenersInUse),HX_HCSTRING("__listenersInUse","\x83","\x8e","\xec","\xc1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21"),
	HX_HCSTRING("__listenersInUse","\x83","\x8e","\xec","\xc1"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("unique","\x11","\x93","\x92","\x63"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("will","\x12","\x6f","\xf8","\x4e"),
	HX_HCSTRING("__indexOf","\xa9","\x99","\x0d","\x62"),
	HX_HCSTRING("__cloneListenersInUse","\x80","\x14","\xde","\x81"),
	HX_HCSTRING("get_listenersCount","\x99","\xe3","\xa0","\xb5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Signal_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Signal_obj::__mClass,"__mClass");
};

#endif

hx::Class Signal_obj::__mClass;

void Signal_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.signals.Signal","\x34","\x65","\x67","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Signal_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Signal_obj >;
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

} // end namespace sx
} // end namespace signals
