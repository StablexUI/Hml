#include <hxcpp.h>

#ifndef INCLUDED_sx_tween_Actuator
#include <sx/tween/Actuator.h>
#endif
namespace sx{
namespace tween{

Void Actuator_obj::__construct(Float startTime,Float duration,Dynamic setValuesFn,Dynamic setEndValuesFn)
{
HX_STACK_FRAME("sx.tween.Actuator","new",0xb20ad0d7,"sx.tween.Actuator.new","sx/tween/Actuator.hx",11,0x72c8b2f7)
HX_STACK_THIS(this)
HX_STACK_ARG(startTime,"startTime")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(setValuesFn,"setValuesFn")
HX_STACK_ARG(setEndValuesFn,"setEndValuesFn")
{
	HX_STACK_LINE(16)
	this->done = false;
	HX_STACK_LINE(35)
	this->__duration = duration;
	HX_STACK_LINE(37)
	this->startTime = startTime;
	HX_STACK_LINE(38)
	this->__setValuesFn = setValuesFn;
	HX_STACK_LINE(39)
	this->__setEndValuesFn = setEndValuesFn;
}
;
	return null();
}

//Actuator_obj::~Actuator_obj() { }

Dynamic Actuator_obj::__CreateEmpty() { return  new Actuator_obj; }
hx::ObjectPtr< Actuator_obj > Actuator_obj::__new(Float startTime,Float duration,Dynamic setValuesFn,Dynamic setEndValuesFn)
{  hx::ObjectPtr< Actuator_obj > _result_ = new Actuator_obj();
	_result_->__construct(startTime,duration,setValuesFn,setEndValuesFn);
	return _result_;}

Dynamic Actuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Actuator_obj > _result_ = new Actuator_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::sx::tween::Actuator Actuator_obj::delay( Float offset){
	HX_STACK_FRAME("sx.tween.Actuator","delay",0xa4f823ba,"sx.tween.Actuator.delay","sx/tween/Actuator.hx",47,0x72c8b2f7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(offset,"offset")
	HX_STACK_LINE(48)
	hx::AddEq(this->startTime,offset);
	HX_STACK_LINE(50)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Actuator_obj,delay,return )

::sx::tween::Actuator Actuator_obj::ease( Dynamic fn){
	HX_STACK_FRAME("sx.tween.Actuator","ease",0x1175f397,"sx.tween.Actuator.ease","sx/tween/Actuator.hx",58,0x72c8b2f7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(59)
	this->__ease = fn;
	HX_STACK_LINE(61)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Actuator_obj,ease,return )

Void Actuator_obj::stop( ){
{
		HX_STACK_FRAME("sx.tween.Actuator","stop",0x1ac557ab,"sx.tween.Actuator.stop","sx/tween/Actuator.hx",73,0x72c8b2f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		this->done = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,stop,(void))

Void Actuator_obj::complete( ){
{
		HX_STACK_FRAME("sx.tween.Actuator","complete",0xcb28f0e2,"sx.tween.Actuator.complete","sx/tween/Actuator.hx",81,0x72c8b2f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		this->__setEndValuesFn();
		HX_STACK_LINE(83)
		this->done = true;
		HX_STACK_LINE(84)
		Dynamic tmp = this->__onComplete_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		if ((tmp1)){
			HX_STACK_LINE(85)
			this->__onComplete();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,complete,(void))

::sx::tween::Actuator Actuator_obj::onUpdate( Dynamic fn){
	HX_STACK_FRAME("sx.tween.Actuator","onUpdate",0xb2136cb1,"sx.tween.Actuator.onUpdate","sx/tween/Actuator.hx",94,0x72c8b2f7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(95)
	this->__onUpdate = fn;
	HX_STACK_LINE(97)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Actuator_obj,onUpdate,return )

::sx::tween::Actuator Actuator_obj::onComplete( Dynamic fn){
	HX_STACK_FRAME("sx.tween.Actuator","onComplete",0xf71ae161,"sx.tween.Actuator.onComplete","sx/tween/Actuator.hx",105,0x72c8b2f7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(106)
	this->__onComplete = fn;
	HX_STACK_LINE(108)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Actuator_obj,onComplete,return )

Void Actuator_obj::__update( Float currentTime){
{
		HX_STACK_FRAME("sx.tween.Actuator","__update",0x7a95e152,"sx.tween.Actuator.__update","sx/tween/Actuator.hx",116,0x72c8b2f7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(117)
		bool tmp = this->done;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		if ((tmp)){
			HX_STACK_LINE(117)
			return null();
		}
		HX_STACK_LINE(119)
		Float tmp1 = currentTime;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		Float tmp2 = this->startTime;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		Float time = tmp3;		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(120)
		bool tmp4 = (time < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(120)
		if ((tmp4)){
			HX_STACK_LINE(120)
			return null();
		}
		HX_STACK_LINE(122)
		Float tmp5 = time;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(122)
		Float tmp6 = this->__duration;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(122)
		bool tmp7 = (tmp5 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(122)
		if ((tmp7)){
			HX_STACK_LINE(123)
			Float tmp8 = this->__duration;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(123)
			time = tmp8;
			HX_STACK_LINE(124)
			this->done = true;
			HX_STACK_LINE(125)
			this->__setEndValuesFn();
		}
		else{
			HX_STACK_LINE(127)
			Float tmp8 = time;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(127)
			Float tmp9 = this->__duration;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(127)
			Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(127)
			Float tmp11 = this->__ease(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(127)
			Float value = tmp11;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(128)
			Float tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(128)
			this->__setValuesFn(tmp12);
		}
		HX_STACK_LINE(131)
		Dynamic tmp8 = this->__onUpdate_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(131)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(131)
		if ((tmp9)){
			HX_STACK_LINE(131)
			this->__onUpdate();
		}
		HX_STACK_LINE(132)
		bool tmp10 = this->done;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(132)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(132)
		if ((tmp10)){
			HX_STACK_LINE(132)
			Dynamic tmp12 = this->__onComplete_dyn();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(132)
			Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(132)
			tmp11 = (tmp13 != null());
		}
		else{
			HX_STACK_LINE(132)
			tmp11 = false;
		}
		HX_STACK_LINE(132)
		if ((tmp11)){
			HX_STACK_LINE(132)
			this->__onComplete();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actuator_obj,__update,(void))

HX_BEGIN_DEFAULT_FUNC(__default___ease,Actuator_obj)
Float run(Float t){
	HX_STACK_FRAME("sx.tween.Actuator","__ease",0x3b5652f7,"sx.tween.Actuator.__ease","sx/tween/Actuator.hx",140,0x72c8b2f7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(141)
	Float tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	return tmp;
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC


Actuator_obj::Actuator_obj()
{
	__ease = new __default___ease(this);
}

void Actuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Actuator);
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(done,"done");
	HX_MARK_MEMBER_NAME(__duration,"__duration");
	HX_MARK_MEMBER_NAME(__setValuesFn,"__setValuesFn");
	HX_MARK_MEMBER_NAME(__setEndValuesFn,"__setEndValuesFn");
	HX_MARK_MEMBER_NAME(__onUpdate,"__onUpdate");
	HX_MARK_MEMBER_NAME(__onComplete,"__onComplete");
	HX_MARK_MEMBER_NAME(__ease,"__ease");
	HX_MARK_END_CLASS();
}

void Actuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(done,"done");
	HX_VISIT_MEMBER_NAME(__duration,"__duration");
	HX_VISIT_MEMBER_NAME(__setValuesFn,"__setValuesFn");
	HX_VISIT_MEMBER_NAME(__setEndValuesFn,"__setEndValuesFn");
	HX_VISIT_MEMBER_NAME(__onUpdate,"__onUpdate");
	HX_VISIT_MEMBER_NAME(__onComplete,"__onComplete");
	HX_VISIT_MEMBER_NAME(__ease,"__ease");
}

Dynamic Actuator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { return done; }
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__ease") ) { return __ease; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { return startTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__duration") ) { return __duration; }
		if (HX_FIELD_EQ(inName,"__onUpdate") ) { return __onUpdate; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__onComplete") ) { return __onComplete; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__setValuesFn") ) { return __setValuesFn; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__setEndValuesFn") ) { return __setEndValuesFn; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Actuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { done=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__ease") ) { __ease=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__duration") ) { __duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__onUpdate") ) { __onUpdate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__onComplete") ) { __onComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__setValuesFn") ) { __setValuesFn=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__setEndValuesFn") ) { __setEndValuesFn=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Actuator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Actuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"));
	outFields->push(HX_HCSTRING("done","\x82","\xf0","\x6d","\x42"));
	outFields->push(HX_HCSTRING("__duration","\x74","\x82","\xc6","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Actuator_obj,startTime),HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05")},
	{hx::fsBool,(int)offsetof(Actuator_obj,done),HX_HCSTRING("done","\x82","\xf0","\x6d","\x42")},
	{hx::fsFloat,(int)offsetof(Actuator_obj,__duration),HX_HCSTRING("__duration","\x74","\x82","\xc6","\xb7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Actuator_obj,__setValuesFn),HX_HCSTRING("__setValuesFn","\x6c","\x88","\x42","\x67")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Actuator_obj,__setEndValuesFn),HX_HCSTRING("__setEndValuesFn","\x63","\xd7","\x25","\x82")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Actuator_obj,__onUpdate),HX_HCSTRING("__onUpdate","\xa8","\xef","\xea","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Actuator_obj,__onComplete),HX_HCSTRING("__onComplete","\x18","\x50","\x12","\x96")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Actuator_obj,__ease),HX_HCSTRING("__ease","\x0e","\xef","\x04","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"),
	HX_HCSTRING("done","\x82","\xf0","\x6d","\x42"),
	HX_HCSTRING("__duration","\x74","\x82","\xc6","\xb7"),
	HX_HCSTRING("__setValuesFn","\x6c","\x88","\x42","\x67"),
	HX_HCSTRING("__setEndValuesFn","\x63","\xd7","\x25","\x82"),
	HX_HCSTRING("__onUpdate","\xa8","\xef","\xea","\x09"),
	HX_HCSTRING("__onComplete","\x18","\x50","\x12","\x96"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__ease","\x0e","\xef","\x04","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Actuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Actuator_obj::__mClass,"__mClass");
};

#endif

hx::Class Actuator_obj::__mClass;

void Actuator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.tween.Actuator","\x65","\x19","\x56","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Actuator_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Actuator_obj >;
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
} // end namespace tween
