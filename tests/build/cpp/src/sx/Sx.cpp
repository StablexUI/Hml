#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_sx_Sx
#include <sx/Sx.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_BackendManager
#include <sx/backend/dummy/BackendManager.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IBackendManager
#include <sx/backend/interfaces/IBackendManager.h>
#endif
#ifndef INCLUDED_sx_exceptions_InvalidBackendException
#include <sx/exceptions/InvalidBackendException.h>
#endif
#ifndef INCLUDED_sx_exceptions_SxException
#include <sx/exceptions/SxException.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
#ifndef INCLUDED_sx_skins_base_SkinBase
#include <sx/skins/base/SkinBase.h>
#endif
#ifndef INCLUDED_sx_themes_Theme
#include <sx/themes/Theme.h>
#endif
#ifndef INCLUDED_sx_tween_Tweener
#include <sx/tween/Tweener.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
namespace sx{

Void Sx_obj::__construct()
{
HX_STACK_FRAME("sx.Sx","new",0x716330e0,"sx.Sx.new","sx/Sx.hx",251,0x1435e6ef)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Sx_obj::~Sx_obj() { }

Dynamic Sx_obj::__CreateEmpty() { return  new Sx_obj; }
hx::ObjectPtr< Sx_obj > Sx_obj::__new()
{  hx::ObjectPtr< Sx_obj > _result_ = new Sx_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sx_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sx_obj > _result_ = new Sx_obj();
	_result_->__construct();
	return _result_;}

Float Sx_obj::dipFactor;

bool Sx_obj::pixelSnapping;

::sx::backend::dummy::BackendManager Sx_obj::__backendManager;

::sx::themes::Theme Sx_obj::theme;

::sx::widgets::Widget Sx_obj::__root;

::sx::signals::Signal Sx_obj::__onFrame;

::haxe::ds::StringMap Sx_obj::__skins;

cpp::ArrayBase Sx_obj::__initTasks;

Dynamic Sx_obj::__readyCallback;

Float Sx_obj::toDip( Float px){
	HX_STACK_FRAME("sx.Sx","toDip",0x70166f10,"sx.Sx.toDip","sx/Sx.hx",64,0x1435e6ef)
	HX_STACK_ARG(px,"px")
	HX_STACK_LINE(65)
	Float tmp = px;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	Float tmp1 = ::sx::Sx_obj::dipFactor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sx_obj,toDip,return )

Float Sx_obj::toPx( Float dip){
	HX_STACK_FRAME("sx.Sx","toPx",0xc9664fe3,"sx.Sx.toPx","sx/Sx.hx",73,0x1435e6ef)
	HX_STACK_ARG(dip,"dip")
	HX_STACK_LINE(74)
	Float tmp = dip;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	Float tmp1 = ::sx::Sx_obj::dipFactor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sx_obj,toPx,return )

Float Sx_obj::snap( Float value){
	HX_STACK_FRAME("sx.Sx","snap",0xc8bc65ca,"sx.Sx.snap","sx/Sx.hx",83,0x1435e6ef)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(84)
	bool tmp = ::sx::Sx_obj::pixelSnapping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	if ((tmp)){
		HX_STACK_LINE(84)
		Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		value = tmp2;
	}
	HX_STACK_LINE(86)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sx_obj,snap,return )

Void Sx_obj::setBackendManger( ::sx::backend::dummy::BackendManager manager){
{
		HX_STACK_FRAME("sx.Sx","setBackendManger",0xb1e7efec,"sx.Sx.setBackendManger","sx/Sx.hx",95,0x1435e6ef)
		HX_STACK_ARG(manager,"manager")
		HX_STACK_LINE(96)
		::sx::backend::dummy::BackendManager tmp = ::sx::Sx_obj::__backendManager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		if ((tmp1)){
			HX_STACK_LINE(97)
			Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Sx.hx","\x19","\x03","\xb7","\x19"),97,HX_HCSTRING("sx.Sx","\xee","\x80","\x89","\x86"),HX_HCSTRING("setBackendManger","\x6c","\xa0","\x69","\x8a"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			::sx::exceptions::InvalidBackendException tmp3 = ::sx::exceptions::InvalidBackendException_obj::__new(HX_HCSTRING("Backend manager is already set.","\xeb","\xf1","\xbc","\xa5"),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(97)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(100)
		::sx::Sx_obj::__backendManager = manager;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sx_obj,setBackendManger,(void))

Void Sx_obj::registerSkin( ::String name,Dynamic factory){
{
		HX_STACK_FRAME("sx.Sx","registerSkin",0x4f84e600,"sx.Sx.registerSkin","sx/Sx.hx",108,0x1435e6ef)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(factory,"factory")
		HX_STACK_LINE(109)
		::haxe::ds::StringMap tmp = ::sx::Sx_obj::__skins;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		Dynamic tmp2 = factory;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		tmp->set(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Sx_obj,registerSkin,(void))

Void Sx_obj::addInitTask( Dynamic task){
{
		HX_STACK_FRAME("sx.Sx","addInitTask",0x1b2e0636,"sx.Sx.addInitTask","sx/Sx.hx",119,0x1435e6ef)
		HX_STACK_ARG(task,"task")
		HX_STACK_LINE(120)
		Dynamic tmp = task;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		::sx::Sx_obj::__initTasks->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sx_obj,addInitTask,(void))

Void Sx_obj::init( Dynamic readyCallback){
{
		HX_STACK_FRAME("sx.Sx","init",0xc2204a90,"sx.Sx.init","sx/Sx.hx",130,0x1435e6ef)
		HX_STACK_ARG(readyCallback,"readyCallback")
		HX_STACK_LINE(131)
		::sx::Sx_obj::__readyCallback = readyCallback;
		HX_STACK_LINE(133)
		::sx::backend::dummy::BackendManager tmp = ::sx::Sx_obj::__backendManager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		if ((tmp1)){
			HX_STACK_LINE(134)
			::sx::backend::dummy::BackendManager tmp2 = ::sx::backend::dummy::BackendManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(134)
			::sx::Sx_obj::__backendManager = tmp2;
		}
		HX_STACK_LINE(137)
		int tmp2 = ::sx::Sx_obj::__initTasks->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		if ((tmp3)){
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				Float tmp4 = ::sx::tween::Tweener_obj::getTime();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(138)
				Float tmp5 = ::sx::tween::Tweener_obj::__totalPausedTime;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(138)
				Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(138)
				::sx::tween::Tweener_obj::__time = tmp6;
			}
			HX_STACK_LINE(138)
			::sx::backend::dummy::BackendManager tmp4 = ::sx::Sx_obj::__backendManager;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			tmp4->setupPointerDevices();
			HX_STACK_LINE(138)
			::sx::backend::dummy::BackendManager tmp5 = ::sx::Sx_obj::__backendManager;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(138)
			tmp5->setupFrames();
			HX_STACK_LINE(138)
			::sx::Sx_obj::__readyCallback();
		}
		else{
			HX_STACK_LINE(140)
			cpp::ArrayBase tasks = ::sx::Sx_obj::__initTasks->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();		HX_STACK_VAR(tasks,"tasks");
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(141)
				while((true)){
					HX_STACK_LINE(141)
					bool tmp4 = (_g < tasks->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(141)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(141)
					if ((tmp5)){
						HX_STACK_LINE(141)
						break;
					}
					HX_STACK_LINE(141)
					Dynamic tmp6 = tasks->__GetItem(_g);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(141)
					Dynamic task = tmp6;		HX_STACK_VAR(task,"task");
					HX_STACK_LINE(141)
					++(_g);
					HX_STACK_LINE(142)
					Dynamic tmp7 = ::sx::Sx_obj::__doneInitTask_dyn();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(142)
					Dynamic tmp8 = task;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(142)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(142)
					{
						HX_STACK_LINE(142)
						Dynamic f = tmp7;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(142)
						Dynamic a1 = tmp8;		HX_STACK_VAR(a1,"a1");

						HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Dynamic,a1,Dynamic,f)
						int __ArgCount() const { return 0; }
						Void run(){
							HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","sx/Sx.hx",142,0x1435e6ef)
							{
								HX_STACK_LINE(142)
								Dynamic tmp10 = a1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(142)
								f(tmp10).Cast< Void >();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0((void))

						HX_STACK_LINE(142)
						tmp9 =  Dynamic(new _Function_5_1(a1,f));
					}
					HX_STACK_LINE(142)
					task(tmp9).Cast< Void >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sx_obj,init,(void))

::sx::skins::base::SkinBase Sx_obj::skin( ::String name){
	HX_STACK_FRAME("sx.Sx","skin",0xc8ba25fd,"sx.Sx.skin","sx/Sx.hx",154,0x1435e6ef)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(155)
	::haxe::ds::StringMap tmp = ::sx::Sx_obj::__skins;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(155)
	Dynamic factory = tmp2;		HX_STACK_VAR(factory,"factory");
	HX_STACK_LINE(157)
	bool tmp3 = (factory == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	::sx::skins::base::SkinBase tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(157)
	if ((tmp3)){
		HX_STACK_LINE(157)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(157)
		tmp4 = factory().Cast< ::sx::skins::base::SkinBase >();
	}
	HX_STACK_LINE(157)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sx_obj,skin,return )

Void Sx_obj::dropSkins( ){
{
		HX_STACK_FRAME("sx.Sx","dropSkins",0xbd698527,"sx.Sx.dropSkins","sx/Sx.hx",165,0x1435e6ef)
		HX_STACK_LINE(166)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(166)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(166)
			tmp = tmp2;
		}
		HX_STACK_LINE(166)
		::sx::Sx_obj::__skins = tmp;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sx_obj,dropSkins,(void))

Void Sx_obj::frame( ){
{
		HX_STACK_FRAME("sx.Sx","frame",0x628bf8ad,"sx.Sx.frame","sx/Sx.hx",174,0x1435e6ef)
		HX_STACK_LINE(175)
		::sx::signals::Signal tmp = ::sx::Sx_obj::__onFrame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		if ((tmp1)){
			HX_STACK_LINE(175)
			::sx::signals::Signal tmp3 = ::sx::Sx_obj::__onFrame;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(175)
			::sx::signals::Signal tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			int tmp5 = tmp4->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(146)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(146)
			tmp2 = (tmp6 > (int)0);
		}
		else{
			HX_STACK_LINE(146)
			tmp2 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp2)){
			HX_STACK_LINE(175)
			::sx::signals::Signal tmp3 = ::sx::Sx_obj::__onFrame;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			bool tmp4 = tmp3->__listenersInUse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			if ((tmp4)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(175)
					::sx::signals::Signal tmp5 = ::sx::Sx_obj::__onFrame;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(148)
					cpp::ArrayBase _g1 = tmp5->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(148)
					while((true)){
						HX_STACK_LINE(148)
						bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(148)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(148)
						if ((tmp7)){
							HX_STACK_LINE(148)
							break;
						}
						HX_STACK_LINE(148)
						Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(148)
						Dynamic listener = tmp8;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(148)
						++(_g);
						HX_STACK_LINE(148)
						listener().Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(175)
				::sx::signals::Signal tmp5 = ::sx::Sx_obj::__onFrame;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				tmp5->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(175)
					::sx::signals::Signal tmp6 = ::sx::Sx_obj::__onFrame;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(152)
					cpp::ArrayBase _g1 = tmp6->__listeners;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(152)
					while((true)){
						HX_STACK_LINE(152)
						bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(152)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(152)
						if ((tmp8)){
							HX_STACK_LINE(152)
							break;
						}
						HX_STACK_LINE(152)
						Dynamic tmp9 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(152)
						Dynamic listener = tmp9;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(152)
						++(_g);
						HX_STACK_LINE(152)
						listener().Cast< Void >();
					}
				}
				HX_STACK_LINE(175)
				::sx::signals::Signal tmp6 = ::sx::Sx_obj::__onFrame;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				tmp6->__listenersInUse = false;
			}
		}
		HX_STACK_LINE(177)
		::sx::tween::Tweener_obj::update();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sx_obj,frame,(void))

Void Sx_obj::__doneInitTask( Dynamic task){
{
		HX_STACK_FRAME("sx.Sx","__doneInitTask",0xf8b8dfb7,"sx.Sx.__doneInitTask","sx/Sx.hx",185,0x1435e6ef)
		HX_STACK_ARG(task,"task")
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(186)
			int tmp = ::sx::Sx_obj::__initTasks->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(186)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(186)
			while((true)){
				HX_STACK_LINE(186)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(186)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(186)
				if ((tmp2)){
					HX_STACK_LINE(186)
					break;
				}
				HX_STACK_LINE(186)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(186)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(187)
				Dynamic tmp4 = ::sx::Sx_obj::__initTasks->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(187)
				Dynamic tmp5 = task;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(187)
				bool tmp6 = ::Reflect_obj::compareMethods(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(187)
				if ((tmp6)){
					HX_STACK_LINE(188)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(188)
					::sx::Sx_obj::__initTasks->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp7,(int)1);
					HX_STACK_LINE(189)
					break;
				}
			}
		}
		HX_STACK_LINE(193)
		int tmp = ::sx::Sx_obj::__initTasks->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		if ((tmp1)){
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				Float tmp2 = ::sx::tween::Tweener_obj::getTime();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(194)
				Float tmp3 = ::sx::tween::Tweener_obj::__totalPausedTime;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(194)
				Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(194)
				::sx::tween::Tweener_obj::__time = tmp4;
			}
			HX_STACK_LINE(194)
			::sx::backend::dummy::BackendManager tmp2 = ::sx::Sx_obj::__backendManager;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(194)
			tmp2->setupPointerDevices();
			HX_STACK_LINE(194)
			::sx::backend::dummy::BackendManager tmp3 = ::sx::Sx_obj::__backendManager;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(194)
			tmp3->setupFrames();
			HX_STACK_LINE(194)
			::sx::Sx_obj::__readyCallback();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sx_obj,__doneInitTask,(void))

Void Sx_obj::__initializationFinished( ){
{
		HX_STACK_FRAME("sx.Sx","__initializationFinished",0x8a2c7f52,"sx.Sx.__initializationFinished","sx/Sx.hx",204,0x1435e6ef)
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(205)
			Float tmp = ::sx::tween::Tweener_obj::getTime();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(205)
			Float tmp1 = ::sx::tween::Tweener_obj::__totalPausedTime;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(205)
			Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(205)
			::sx::tween::Tweener_obj::__time = tmp2;
		}
		HX_STACK_LINE(206)
		::sx::backend::dummy::BackendManager tmp = ::sx::Sx_obj::__backendManager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		tmp->setupPointerDevices();
		HX_STACK_LINE(207)
		::sx::backend::dummy::BackendManager tmp1 = ::sx::Sx_obj::__backendManager;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		tmp1->setupFrames();
		HX_STACK_LINE(209)
		::sx::Sx_obj::__readyCallback();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sx_obj,__initializationFinished,(void))

::sx::backend::dummy::BackendManager Sx_obj::get_backendManager( ){
	HX_STACK_FRAME("sx.Sx","get_backendManager",0x53167902,"sx.Sx.get_backendManager","sx/Sx.hx",217,0x1435e6ef)
	HX_STACK_LINE(218)
	::sx::backend::dummy::BackendManager tmp = ::sx::Sx_obj::__backendManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	if ((tmp1)){
		HX_STACK_LINE(219)
		::sx::backend::dummy::BackendManager tmp2 = ::sx::backend::dummy::BackendManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		::sx::Sx_obj::__backendManager = tmp2;
	}
	HX_STACK_LINE(222)
	::sx::backend::dummy::BackendManager tmp2 = ::sx::Sx_obj::__backendManager;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sx_obj,get_backendManager,return )

::sx::widgets::Widget Sx_obj::get_root( ){
	HX_STACK_FRAME("sx.Sx","get_root",0x944c792b,"sx.Sx.get_root","sx/Sx.hx",230,0x1435e6ef)
	HX_STACK_LINE(231)
	::sx::widgets::Widget tmp = ::sx::Sx_obj::__root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(231)
	::sx::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(231)
	if ((tmp1)){
		HX_STACK_LINE(231)
		::sx::backend::dummy::BackendManager tmp3 = ::sx::Sx_obj::get_backendManager();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		tmp2 = tmp3->getRoot();
	}
	else{
		HX_STACK_LINE(231)
		tmp2 = ::sx::Sx_obj::__root;
	}
	HX_STACK_LINE(231)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sx_obj,get_root,return )

::sx::widgets::Widget Sx_obj::set_root( ::sx::widgets::Widget value){
	HX_STACK_FRAME("sx.Sx","set_root",0x42a9d29f,"sx.Sx.set_root","sx/Sx.hx",239,0x1435e6ef)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(240)
	::sx::widgets::Widget tmp = ::sx::Sx_obj::__root = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sx_obj,set_root,return )

::sx::properties::metric::Size Sx_obj::get_stageWidth( ){
	HX_STACK_FRAME("sx.Sx","get_stageWidth",0xd7cc0231,"sx.Sx.get_stageWidth","sx/Sx.hx",245,0x1435e6ef)
	HX_STACK_LINE(245)
	::sx::backend::dummy::BackendManager tmp = ::sx::Sx_obj::get_backendManager();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	::sx::widgets::Widget tmp1 = tmp->getRoot();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(245)
	::sx::properties::metric::Size tmp2 = tmp1->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(245)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sx_obj,get_stageWidth,return )

::sx::properties::metric::Size Sx_obj::get_stageHeight( ){
	HX_STACK_FRAME("sx.Sx","get_stageHeight",0xb105615c,"sx.Sx.get_stageHeight","sx/Sx.hx",246,0x1435e6ef)
	HX_STACK_LINE(246)
	::sx::backend::dummy::BackendManager tmp = ::sx::Sx_obj::get_backendManager();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	::sx::widgets::Widget tmp1 = tmp->getRoot();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(246)
	::sx::properties::metric::Size tmp2 = tmp1->get_height();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sx_obj,get_stageHeight,return )

::sx::signals::Signal Sx_obj::get_onFrame( ){
	HX_STACK_FRAME("sx.Sx","get_onFrame",0xbadf5725,"sx.Sx.get_onFrame","sx/Sx.hx",249,0x1435e6ef)
	HX_STACK_LINE(249)
	::sx::signals::Signal tmp = ::sx::Sx_obj::__onFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(249)
	if ((tmp1)){
		HX_STACK_LINE(249)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		tmp2 = ::sx::Sx_obj::__onFrame = tmp3;
	}
	else{
		HX_STACK_LINE(249)
		tmp2 = ::sx::Sx_obj::__onFrame;
	}
	HX_STACK_LINE(249)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sx_obj,get_onFrame,return )


Sx_obj::Sx_obj()
{
}

bool Sx_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { if (inCallProp == hx::paccAlways) { outValue = get_root(); return true; } }
		if (HX_FIELD_EQ(inName,"toPx") ) { outValue = toPx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snap") ) { outValue = snap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"skin") ) { outValue = skin_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"theme") ) { outValue = theme; return true;  }
		if (HX_FIELD_EQ(inName,"toDip") ) { outValue = toDip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"frame") ) { outValue = frame_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__root") ) { outValue = __root; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFrame") ) { if (inCallProp == hx::paccAlways) { outValue = get_onFrame(); return true; } }
		if (HX_FIELD_EQ(inName,"__skins") ) { outValue = __skins; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_root") ) { outValue = get_root_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_root") ) { outValue = set_root_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dipFactor") ) { outValue = dipFactor; return true;  }
		if (HX_FIELD_EQ(inName,"__onFrame") ) { outValue = __onFrame; return true;  }
		if (HX_FIELD_EQ(inName,"dropSkins") ) { outValue = dropSkins_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { if (inCallProp == hx::paccAlways) { outValue = get_stageWidth(); return true; } }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageHeight") ) { if (inCallProp == hx::paccAlways) { outValue = get_stageHeight(); return true; } }
		if (HX_FIELD_EQ(inName,"__initTasks") ) { outValue = __initTasks; return true;  }
		if (HX_FIELD_EQ(inName,"addInitTask") ) { outValue = addInitTask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_onFrame") ) { outValue = get_onFrame_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"registerSkin") ) { outValue = registerSkin_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { outValue = pixelSnapping; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"backendManager") ) { if (inCallProp == hx::paccAlways) { outValue = get_backendManager(); return true; } }
		if (HX_FIELD_EQ(inName,"__doneInitTask") ) { outValue = __doneInitTask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_stageWidth") ) { outValue = get_stageWidth_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__readyCallback") ) { outValue = __readyCallback; return true;  }
		if (HX_FIELD_EQ(inName,"get_stageHeight") ) { outValue = get_stageHeight_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__backendManager") ) { outValue = __backendManager; return true;  }
		if (HX_FIELD_EQ(inName,"setBackendManger") ) { outValue = setBackendManger_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_backendManager") ) { outValue = get_backendManager_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__initializationFinished") ) { outValue = __initializationFinished_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Sx_obj::dipFactor,HX_HCSTRING("dipFactor","\x7a","\xd4","\x03","\x26")},
	{hx::fsBool,(void *) &Sx_obj::pixelSnapping,HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8")},
	{hx::fsObject /*::sx::backend::dummy::BackendManager*/ ,(void *) &Sx_obj::__backendManager,HX_HCSTRING("__backendManager","\xd9","\xf3","\x6a","\x2c")},
	{hx::fsObject /*::sx::themes::Theme*/ ,(void *) &Sx_obj::theme,HX_HCSTRING("theme","\x09","\x7e","\x86","\x0f")},
	{hx::fsObject /*::sx::widgets::Widget*/ ,(void *) &Sx_obj::__root,HX_HCSTRING("__root","\x42","\x51","\xa7","\xfa")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(void *) &Sx_obj::__onFrame,HX_HCSTRING("__onFrame","\x6e","\x67","\x0f","\x1e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Sx_obj::__skins,HX_HCSTRING("__skins","\x36","\xf0","\x7c","\xe8")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Sx_obj::__initTasks,HX_HCSTRING("__initTasks","\x3e","\x01","\xaf","\x54")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sx_obj::__readyCallback,HX_HCSTRING("__readyCallback","\x28","\xca","\x20","\x86")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sx_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sx_obj::dipFactor,"dipFactor");
	HX_MARK_MEMBER_NAME(Sx_obj::pixelSnapping,"pixelSnapping");
	HX_MARK_MEMBER_NAME(Sx_obj::__backendManager,"__backendManager");
	HX_MARK_MEMBER_NAME(Sx_obj::theme,"theme");
	HX_MARK_MEMBER_NAME(Sx_obj::__root,"__root");
	HX_MARK_MEMBER_NAME(Sx_obj::__onFrame,"__onFrame");
	HX_MARK_MEMBER_NAME(Sx_obj::__skins,"__skins");
	HX_MARK_MEMBER_NAME(Sx_obj::__initTasks,"__initTasks");
	HX_MARK_MEMBER_NAME(Sx_obj::__readyCallback,"__readyCallback");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sx_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sx_obj::dipFactor,"dipFactor");
	HX_VISIT_MEMBER_NAME(Sx_obj::pixelSnapping,"pixelSnapping");
	HX_VISIT_MEMBER_NAME(Sx_obj::__backendManager,"__backendManager");
	HX_VISIT_MEMBER_NAME(Sx_obj::theme,"theme");
	HX_VISIT_MEMBER_NAME(Sx_obj::__root,"__root");
	HX_VISIT_MEMBER_NAME(Sx_obj::__onFrame,"__onFrame");
	HX_VISIT_MEMBER_NAME(Sx_obj::__skins,"__skins");
	HX_VISIT_MEMBER_NAME(Sx_obj::__initTasks,"__initTasks");
	HX_VISIT_MEMBER_NAME(Sx_obj::__readyCallback,"__readyCallback");
};

#endif

hx::Class Sx_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("dipFactor","\x7a","\xd4","\x03","\x26"),
	HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"),
	HX_HCSTRING("__backendManager","\xd9","\xf3","\x6a","\x2c"),
	HX_HCSTRING("theme","\x09","\x7e","\x86","\x0f"),
	HX_HCSTRING("__root","\x42","\x51","\xa7","\xfa"),
	HX_HCSTRING("__onFrame","\x6e","\x67","\x0f","\x1e"),
	HX_HCSTRING("__skins","\x36","\xf0","\x7c","\xe8"),
	HX_HCSTRING("__initTasks","\x3e","\x01","\xaf","\x54"),
	HX_HCSTRING("__readyCallback","\x28","\xca","\x20","\x86"),
	HX_HCSTRING("toDip","\x90","\xee","\x0d","\x14"),
	HX_HCSTRING("toPx","\x63","\x40","\x01","\x4d"),
	HX_HCSTRING("snap","\x4a","\x56","\x57","\x4c"),
	HX_HCSTRING("setBackendManger","\x6c","\xa0","\x69","\x8a"),
	HX_HCSTRING("registerSkin","\x80","\x56","\x44","\xc8"),
	HX_HCSTRING("addInitTask","\xb6","\x25","\x0a","\x83"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("skin","\x7d","\x16","\x55","\x4c"),
	HX_HCSTRING("dropSkins","\xa7","\xc4","\xd6","\xbf"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("__doneInitTask","\x37","\x70","\x95","\xb4"),
	HX_HCSTRING("__initializationFinished","\xd2","\xaf","\x92","\xbc"),
	HX_HCSTRING("get_backendManager","\x82","\x49","\xc5","\x93"),
	HX_HCSTRING("get_root","\xab","\xa9","\x69","\xcb"),
	HX_HCSTRING("set_root","\x1f","\x03","\xc7","\x79"),
	HX_HCSTRING("get_stageWidth","\xb1","\x92","\xa8","\x93"),
	HX_HCSTRING("get_stageHeight","\xdc","\x40","\x27","\x56"),
	HX_HCSTRING("get_onFrame","\xa5","\x76","\xbb","\x22"),
	::String(null()) };

void Sx_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.Sx","\xee","\x80","\x89","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sx_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sx_obj >;
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

void Sx_obj::__boot()
{
	dipFactor= ((Float)1);
	pixelSnapping= false;
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/Sx.hx",53,0x1435e6ef)
		{
			HX_STACK_LINE(53)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(53)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			return tmp1;
		}
		return null();
	}
};
	__skins= _Function_0_1::Block();
	__initTasks= cpp::ArrayBase_obj::__new();
}

} // end namespace sx
