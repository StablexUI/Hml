#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_sx_tween_Actuator
#include <sx/tween/Actuator.h>
#endif
#ifndef INCLUDED_sx_tween_Tweener
#include <sx/tween/Tweener.h>
#endif
namespace sx{
namespace tween{

Void Tweener_obj::__construct()
{
HX_STACK_FRAME("sx.tween.Tweener","new",0x705ac7de,"sx.tween.Tweener.new","sx/tween/Tweener.hx",19,0x3b6d9a94)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(36)
	this->active = false;
	HX_STACK_LINE(128)
	this->__actuators = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Tweener_obj::~Tweener_obj() { }

Dynamic Tweener_obj::__CreateEmpty() { return  new Tweener_obj; }
hx::ObjectPtr< Tweener_obj > Tweener_obj::__new()
{  hx::ObjectPtr< Tweener_obj > _result_ = new Tweener_obj();
	_result_->__construct();
	return _result_;}

Dynamic Tweener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tweener_obj > _result_ = new Tweener_obj();
	_result_->__construct();
	return _result_;}

Void Tweener_obj::stop( ){
{
		HX_STACK_FRAME("sx.tween.Tweener","stop",0xe26d86c4,"sx.tween.Tweener.stop","sx/tween/Tweener.hx",136,0x3b6d9a94)
		HX_STACK_THIS(this)
		HX_STACK_LINE(137)
		this->active = false;
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(138)
			Array< ::Dynamic > _g1 = this->__actuators;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(138)
			while((true)){
				HX_STACK_LINE(138)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(138)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(138)
				if ((tmp1)){
					HX_STACK_LINE(138)
					break;
				}
				HX_STACK_LINE(138)
				::sx::tween::Actuator tmp2 = _g1->__get(_g).StaticCast< ::sx::tween::Actuator >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(138)
				::sx::tween::Actuator actuator = tmp2;		HX_STACK_VAR(actuator,"actuator");
				HX_STACK_LINE(138)
				++(_g);
				HX_STACK_LINE(139)
				actuator->stop();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,stop,(void))

Void Tweener_obj::__update( Float currentTime){
{
		HX_STACK_FRAME("sx.tween.Tweener","__update",0x708610eb,"sx.tween.Tweener.__update","sx/tween/Tweener.hx",149,0x3b6d9a94)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(150)
		bool needRemoval = false;		HX_STACK_VAR(needRemoval,"needRemoval");
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(151)
			Array< ::Dynamic > _g1 = this->__actuators;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(151)
			while((true)){
				HX_STACK_LINE(151)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(151)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(151)
				if ((tmp1)){
					HX_STACK_LINE(151)
					break;
				}
				HX_STACK_LINE(151)
				::sx::tween::Actuator tmp2 = _g1->__get(_g).StaticCast< ::sx::tween::Actuator >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(151)
				::sx::tween::Actuator actuator = tmp2;		HX_STACK_VAR(actuator,"actuator");
				HX_STACK_LINE(151)
				++(_g);
				HX_STACK_LINE(152)
				bool tmp3 = (actuator->startTime < currentTime);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(152)
				if ((tmp3)){
					HX_STACK_LINE(153)
					Float tmp4 = currentTime;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(153)
					actuator->__update(tmp4);
					HX_STACK_LINE(154)
					bool tmp5 = actuator->done;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(154)
					if ((tmp5)){
						HX_STACK_LINE(155)
						needRemoval = true;
					}
				}
			}
		}
		HX_STACK_LINE(161)
		bool tmp = needRemoval;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		if ((tmp)){
			HX_STACK_LINE(162)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(163)
			while((true)){
				HX_STACK_LINE(163)
				int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(163)
				int tmp2 = this->__actuators->length;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(163)
				if ((tmp4)){
					HX_STACK_LINE(163)
					break;
				}
				HX_STACK_LINE(164)
				::sx::tween::Actuator tmp5 = this->__actuators->__get(i).StaticCast< ::sx::tween::Actuator >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(164)
				bool tmp6 = tmp5->done;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(164)
				if ((tmp6)){
					HX_STACK_LINE(165)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(165)
					this->__actuators->splice(tmp7,(int)1);
				}
				else{
					HX_STACK_LINE(167)
					(i)++;
				}
			}
			HX_STACK_LINE(171)
			int tmp1 = this->__actuators->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(171)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(171)
			this->active = tmp2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tweener_obj,__update,(void))

::sx::tween::Actuator Tweener_obj::__createActuator( Float duration,Dynamic setValuesFn,Dynamic setEndValuesFn){
	HX_STACK_FRAME("sx.tween.Tweener","__createActuator",0xd81bb937,"sx.tween.Tweener.__createActuator","sx/tween/Tweener.hx",180,0x3b6d9a94)
	HX_STACK_THIS(this)
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(setValuesFn,"setValuesFn")
	HX_STACK_ARG(setEndValuesFn,"setEndValuesFn")
	HX_STACK_LINE(181)
	Float tmp = ::sx::tween::Tweener_obj::__time;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	Dynamic tmp2 = setValuesFn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(181)
	Dynamic tmp3 = setEndValuesFn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(181)
	::sx::tween::Actuator tmp4 = ::sx::tween::Actuator_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(181)
	::sx::tween::Actuator actuator = tmp4;		HX_STACK_VAR(actuator,"actuator");
	HX_STACK_LINE(183)
	::sx::tween::Actuator tmp5 = actuator;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(183)
	this->__actuators->push(tmp5);
	HX_STACK_LINE(185)
	bool tmp6 = this->active;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(185)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(185)
	if ((tmp7)){
		HX_STACK_LINE(186)
		this->active = true;
		HX_STACK_LINE(187)
		::sx::tween::Tweener_obj::__tweeners->push(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(190)
	::sx::tween::Actuator tmp8 = actuator;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(190)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC3(Tweener_obj,__createActuator,return )

Float Tweener_obj::__time;

Array< ::Dynamic > Tweener_obj::__tweeners;

bool Tweener_obj::__pausedAll;

Float Tweener_obj::__pausedAllTime;

Float Tweener_obj::__totalPausedTime;

HX_BEGIN_DEFAULT_FUNC(__default_getTime,Tweener_obj)
Float run(){
	HX_STACK_FRAME("sx.tween.Tweener","getTime",0x904b0a41,"sx.tween.Tweener.getTime","sx/tween/Tweener.hx",48,0x3b6d9a94)
	HX_STACK_LINE(49)
	Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

Dynamic Tweener_obj::getTime;

Void Tweener_obj::pauseAll( ){
{
		HX_STACK_FRAME("sx.tween.Tweener","pauseAll",0x4acf378d,"sx.tween.Tweener.pauseAll","sx/tween/Tweener.hx",57,0x3b6d9a94)
		HX_STACK_LINE(58)
		bool tmp = ::sx::tween::Tweener_obj::__pausedAll;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		if ((tmp)){
			HX_STACK_LINE(58)
			return null();
		}
		HX_STACK_LINE(59)
		::sx::tween::Tweener_obj::__pausedAll = true;
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			Float tmp1 = ::sx::tween::Tweener_obj::getTime();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(61)
			Float tmp2 = ::sx::tween::Tweener_obj::__totalPausedTime;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			::sx::tween::Tweener_obj::__time = tmp3;
		}
		HX_STACK_LINE(62)
		Float tmp1 = ::sx::tween::Tweener_obj::__time;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		::sx::tween::Tweener_obj::__pausedAllTime = tmp1;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,pauseAll,(void))

Void Tweener_obj::resumeAll( ){
{
		HX_STACK_FRAME("sx.tween.Tweener","resumeAll",0xe1997b72,"sx.tween.Tweener.resumeAll","sx/tween/Tweener.hx",70,0x3b6d9a94)
		HX_STACK_LINE(71)
		bool tmp = ::sx::tween::Tweener_obj::__pausedAll;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		if ((tmp1)){
			HX_STACK_LINE(71)
			return null();
		}
		HX_STACK_LINE(72)
		::sx::tween::Tweener_obj::__pausedAll = false;
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			Float tmp2 = ::sx::tween::Tweener_obj::getTime();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(74)
			Float tmp3 = ::sx::tween::Tweener_obj::__totalPausedTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			::sx::tween::Tweener_obj::__time = tmp4;
		}
		HX_STACK_LINE(76)
		Float tmp2 = ::sx::tween::Tweener_obj::__time;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		Float tmp3 = ::sx::tween::Tweener_obj::__pausedAllTime;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(76)
		hx::AddEq(::sx::tween::Tweener_obj::__totalPausedTime,tmp4);
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			Float tmp5 = ::sx::tween::Tweener_obj::getTime();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			Float tmp6 = ::sx::tween::Tweener_obj::__totalPausedTime;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			::sx::tween::Tweener_obj::__time = tmp7;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,resumeAll,(void))

Void Tweener_obj::stopAll( ){
{
		HX_STACK_FRAME("sx.tween.Tweener","stopAll",0xb409bcbd,"sx.tween.Tweener.stopAll","sx/tween/Tweener.hx",86,0x3b6d9a94)
		HX_STACK_LINE(86)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		Array< ::Dynamic > _g1 = ::sx::tween::Tweener_obj::__tweeners;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(86)
		while((true)){
			HX_STACK_LINE(86)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(86)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			if ((tmp1)){
				HX_STACK_LINE(86)
				break;
			}
			HX_STACK_LINE(86)
			::sx::tween::Tweener tmp2 = _g1->__get(_g).StaticCast< ::sx::tween::Tweener >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			::sx::tween::Tweener tweener = tmp2;		HX_STACK_VAR(tweener,"tweener");
			HX_STACK_LINE(86)
			++(_g);
			HX_STACK_LINE(87)
			tweener->stop();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,stopAll,(void))

Void Tweener_obj::update( ){
{
		HX_STACK_FRAME("sx.tween.Tweener","update",0xf5bbd14b,"sx.tween.Tweener.update","sx/tween/Tweener.hx",96,0x3b6d9a94)
		HX_STACK_LINE(97)
		bool tmp = ::sx::tween::Tweener_obj::__pausedAll;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		if ((tmp)){
			HX_STACK_LINE(97)
			return null();
		}
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			Float tmp1 = ::sx::tween::Tweener_obj::getTime();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(98)
			Float tmp2 = ::sx::tween::Tweener_obj::__totalPausedTime;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(98)
			::sx::tween::Tweener_obj::__time = tmp3;
		}
		HX_STACK_LINE(99)
		int tmp1 = ::sx::tween::Tweener_obj::__tweeners->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		if ((tmp2)){
			HX_STACK_LINE(99)
			return null();
		}
		HX_STACK_LINE(101)
		bool needRemoval = false;		HX_STACK_VAR(needRemoval,"needRemoval");
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(102)
			Array< ::Dynamic > _g1 = ::sx::tween::Tweener_obj::__tweeners;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(102)
			while((true)){
				HX_STACK_LINE(102)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(102)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(102)
				if ((tmp4)){
					HX_STACK_LINE(102)
					break;
				}
				HX_STACK_LINE(102)
				::sx::tween::Tweener tmp5 = _g1->__get(_g).StaticCast< ::sx::tween::Tweener >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(102)
				::sx::tween::Tweener tweener = tmp5;		HX_STACK_VAR(tweener,"tweener");
				HX_STACK_LINE(102)
				++(_g);
				HX_STACK_LINE(103)
				{
					HX_STACK_LINE(103)
					Float tmp6 = ::sx::tween::Tweener_obj::__time;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(103)
					Float currentTime = tmp6;		HX_STACK_VAR(currentTime,"currentTime");
					HX_STACK_LINE(103)
					bool needRemoval1 = false;		HX_STACK_VAR(needRemoval1,"needRemoval1");
					HX_STACK_LINE(103)
					{
						HX_STACK_LINE(103)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(103)
						Array< ::Dynamic > _g11 = tweener->__actuators;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(103)
						while((true)){
							HX_STACK_LINE(103)
							bool tmp7 = (_g2 < _g11->length);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(103)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(103)
							if ((tmp8)){
								HX_STACK_LINE(103)
								break;
							}
							HX_STACK_LINE(103)
							::sx::tween::Actuator tmp9 = _g11->__get(_g2).StaticCast< ::sx::tween::Actuator >();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(103)
							::sx::tween::Actuator actuator = tmp9;		HX_STACK_VAR(actuator,"actuator");
							HX_STACK_LINE(103)
							++(_g2);
							HX_STACK_LINE(103)
							bool tmp10 = (actuator->startTime < currentTime);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							if ((tmp10)){
								HX_STACK_LINE(103)
								Float tmp11 = currentTime;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								actuator->__update(tmp11);
								HX_STACK_LINE(103)
								bool tmp12 = actuator->done;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(103)
								if ((tmp12)){
									HX_STACK_LINE(103)
									needRemoval1 = true;
								}
							}
						}
					}
					HX_STACK_LINE(103)
					bool tmp7 = needRemoval1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(103)
					if ((tmp7)){
						HX_STACK_LINE(103)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(103)
						while((true)){
							HX_STACK_LINE(103)
							int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(103)
							int tmp9 = tweener->__actuators->length;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(103)
							bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(103)
							if ((tmp11)){
								HX_STACK_LINE(103)
								break;
							}
							HX_STACK_LINE(103)
							::sx::tween::Actuator tmp12 = tweener->__actuators->__get(i).StaticCast< ::sx::tween::Actuator >();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(103)
							bool tmp13 = tmp12->done;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(103)
							if ((tmp13)){
								HX_STACK_LINE(103)
								int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(103)
								tweener->__actuators->splice(tmp14,(int)1);
							}
							else{
								HX_STACK_LINE(103)
								(i)++;
							}
						}
						HX_STACK_LINE(103)
						int tmp8 = tweener->__actuators->length;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(103)
						bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						tweener->active = tmp9;
					}
				}
				HX_STACK_LINE(104)
				bool tmp6 = tweener->active;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(104)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(104)
				if ((tmp7)){
					HX_STACK_LINE(105)
					needRemoval = true;
				}
			}
		}
		HX_STACK_LINE(110)
		bool tmp3 = needRemoval;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		if ((tmp3)){
			HX_STACK_LINE(111)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(112)
			while((true)){
				HX_STACK_LINE(112)
				int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(112)
				int tmp5 = ::sx::tween::Tweener_obj::__tweeners->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(112)
				bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(112)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(112)
				if ((tmp7)){
					HX_STACK_LINE(112)
					break;
				}
				HX_STACK_LINE(113)
				::sx::tween::Tweener tmp8 = ::sx::tween::Tweener_obj::__tweeners->__get(i).StaticCast< ::sx::tween::Tweener >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(113)
				bool tmp9 = tmp8->active;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(113)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(113)
				if ((tmp10)){
					HX_STACK_LINE(114)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(114)
					::sx::tween::Tweener_obj::__tweeners->splice(tmp11,(int)1);
				}
				else{
					HX_STACK_LINE(116)
					(i)++;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,update,(void))

Void Tweener_obj::initialize( ){
{
		HX_STACK_FRAME("sx.tween.Tweener","initialize",0xfc654592,"sx.tween.Tweener.initialize","sx/tween/Tweener.hx",199,0x3b6d9a94)
		HX_STACK_LINE(199)
		Float tmp = ::sx::tween::Tweener_obj::getTime();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		Float tmp1 = ::sx::tween::Tweener_obj::__totalPausedTime;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		::sx::tween::Tweener_obj::__time = tmp2;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,initialize,(void))

Void Tweener_obj::__updateTime( ){
{
		HX_STACK_FRAME("sx.tween.Tweener","__updateTime",0x1bce5a98,"sx.tween.Tweener.__updateTime","sx/tween/Tweener.hx",207,0x3b6d9a94)
		HX_STACK_LINE(208)
		Float tmp = ::sx::tween::Tweener_obj::getTime();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		Float tmp1 = ::sx::tween::Tweener_obj::__totalPausedTime;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		::sx::tween::Tweener_obj::__time = tmp2;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,__updateTime,(void))

bool Tweener_obj::get_pausedAll( ){
	HX_STACK_FRAME("sx.tween.Tweener","get_pausedAll",0x17b6e5e8,"sx.tween.Tweener.get_pausedAll","sx/tween/Tweener.hx",213,0x3b6d9a94)
	HX_STACK_LINE(213)
	bool tmp = ::sx::tween::Tweener_obj::__pausedAll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,get_pausedAll,return )


Tweener_obj::Tweener_obj()
{
}

void Tweener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tweener);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(__actuators,"__actuators");
	HX_MARK_END_CLASS();
}

void Tweener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(__actuators,"__actuators");
}

Dynamic Tweener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__actuators") ) { return __actuators; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__createActuator") ) { return __createActuator_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Tweener_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__time") ) { outValue = __time; return true;  }
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getTime") ) { outValue = getTime; return true;  }
		if (HX_FIELD_EQ(inName,"stopAll") ) { outValue = stopAll_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pauseAll") ) { outValue = pauseAll_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pausedAll") ) { if (inCallProp == hx::paccAlways) { outValue = get_pausedAll(); return true; } }
		if (HX_FIELD_EQ(inName,"resumeAll") ) { outValue = resumeAll_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__tweeners") ) { outValue = __tweeners; return true;  }
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__pausedAll") ) { outValue = __pausedAll; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__updateTime") ) { outValue = __updateTime_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_pausedAll") ) { outValue = get_pausedAll_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__pausedAllTime") ) { outValue = __pausedAllTime; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__totalPausedTime") ) { outValue = __totalPausedTime; return true;  }
	}
	return false;
}

Dynamic Tweener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__actuators") ) { __actuators=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tweener_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__time") ) { __time=ioValue.Cast< Float >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getTime") ) { getTime=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__tweeners") ) { __tweeners=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__pausedAll") ) { __pausedAll=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__pausedAllTime") ) { __pausedAllTime=ioValue.Cast< Float >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__totalPausedTime") ) { __totalPausedTime=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void Tweener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("__actuators","\xfa","\xdd","\x81","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Tweener_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tweener_obj,__actuators),HX_HCSTRING("__actuators","\xfa","\xdd","\x81","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Tweener_obj::__time,HX_HCSTRING("__time","\x2d","\x2f","\xf5","\xfb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Tweener_obj::__tweeners,HX_HCSTRING("__tweeners","\xfb","\xe4","\x14","\xb5")},
	{hx::fsBool,(void *) &Tweener_obj::__pausedAll,HX_HCSTRING("__pausedAll","\xf3","\xd9","\x04","\x8a")},
	{hx::fsFloat,(void *) &Tweener_obj::__pausedAllTime,HX_HCSTRING("__pausedAllTime","\xa0","\x47","\x1a","\xf2")},
	{hx::fsFloat,(void *) &Tweener_obj::__totalPausedTime,HX_HCSTRING("__totalPausedTime","\x9f","\x8d","\x00","\x56")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Tweener_obj::getTime,HX_HCSTRING("getTime","\xc3","\x7b","\x7f","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("__actuators","\xfa","\xdd","\x81","\x00"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__createActuator","\x75","\x07","\x22","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tweener_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tweener_obj::__time,"__time");
	HX_MARK_MEMBER_NAME(Tweener_obj::__tweeners,"__tweeners");
	HX_MARK_MEMBER_NAME(Tweener_obj::__pausedAll,"__pausedAll");
	HX_MARK_MEMBER_NAME(Tweener_obj::__pausedAllTime,"__pausedAllTime");
	HX_MARK_MEMBER_NAME(Tweener_obj::__totalPausedTime,"__totalPausedTime");
	HX_MARK_MEMBER_NAME(Tweener_obj::getTime,"getTime");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tweener_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tweener_obj::__time,"__time");
	HX_VISIT_MEMBER_NAME(Tweener_obj::__tweeners,"__tweeners");
	HX_VISIT_MEMBER_NAME(Tweener_obj::__pausedAll,"__pausedAll");
	HX_VISIT_MEMBER_NAME(Tweener_obj::__pausedAllTime,"__pausedAllTime");
	HX_VISIT_MEMBER_NAME(Tweener_obj::__totalPausedTime,"__totalPausedTime");
	HX_VISIT_MEMBER_NAME(Tweener_obj::getTime,"getTime");
};

#endif

hx::Class Tweener_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__time","\x2d","\x2f","\xf5","\xfb"),
	HX_HCSTRING("__tweeners","\xfb","\xe4","\x14","\xb5"),
	HX_HCSTRING("__pausedAll","\xf3","\xd9","\x04","\x8a"),
	HX_HCSTRING("__pausedAllTime","\xa0","\x47","\x1a","\xf2"),
	HX_HCSTRING("__totalPausedTime","\x9f","\x8d","\x00","\x56"),
	HX_HCSTRING("getTime","\xc3","\x7b","\x7f","\x1f"),
	HX_HCSTRING("pauseAll","\xcb","\x17","\x7e","\x09"),
	HX_HCSTRING("resumeAll","\x74","\xd1","\xee","\xfb"),
	HX_HCSTRING("stopAll","\x3f","\x2e","\x3e","\x43"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("__updateTime","\xd6","\x31","\x45","\x3e"),
	HX_HCSTRING("get_pausedAll","\xea","\x64","\x3c","\x1d"),
	::String(null()) };

void Tweener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.tween.Tweener","\xec","\x40","\xee","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tweener_obj::__GetStatic;
	__mClass->mSetStaticField = &Tweener_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tweener_obj >;
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

void Tweener_obj::__boot()
{
	__time= ((Float)0);
	__tweeners= Array_obj< ::Dynamic >::__new();
	__pausedAll= false;
	__pausedAllTime= ((Float)0);
	__totalPausedTime= ((Float)0);
	getTime = new __default_getTime;

}

} // end namespace sx
} // end namespace tween
