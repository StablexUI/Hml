#include <hxcpp.h>

#ifndef INCLUDED_sx_ds_ObjectPool
#include <sx/ds/ObjectPool.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__ACoordinate_ACoordinate_Impl_
#include <sx/properties/abstracts/_ACoordinate/ACoordinate_Impl_.h>
#endif
#ifndef INCLUDED_sx_properties_abstracts__ACoordinate_WeakCoordinate
#include <sx/properties/abstracts/_ACoordinate/WeakCoordinate.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Coordinate
#include <sx/properties/metric/Coordinate.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
namespace sx{
namespace properties{
namespace abstracts{
namespace _ACoordinate{

Void ACoordinate_Impl__obj::__construct()
{
	return null();
}

//ACoordinate_Impl__obj::~ACoordinate_Impl__obj() { }

Dynamic ACoordinate_Impl__obj::__CreateEmpty() { return  new ACoordinate_Impl__obj; }
hx::ObjectPtr< ACoordinate_Impl__obj > ACoordinate_Impl__obj::__new()
{  hx::ObjectPtr< ACoordinate_Impl__obj > _result_ = new ACoordinate_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ACoordinate_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ACoordinate_Impl__obj > _result_ = new ACoordinate_Impl__obj();
	_result_->__construct();
	return _result_;}

::sx::ds::ObjectPool ACoordinate_Impl__obj::__pool;

::sx::properties::metric::Coordinate ACoordinate_Impl__obj::fromFloat( Float v){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","fromFloat",0x9679a718,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.fromFloat","sx/properties/abstracts/ACoordinate.hx",26,0x4ad4bbb5)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(27)
	::sx::properties::abstracts::_ACoordinate::WeakCoordinate tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::sx::ds::ObjectPool tmp1 = ::sx::properties::abstracts::_ACoordinate::ACoordinate_Impl__obj::__pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::sx::ds::ObjectPool _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(27)
		bool tmp2 = (_this->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		if ((tmp2)){
			HX_STACK_LINE(27)
			(_this->length)--;
			HX_STACK_LINE(27)
			tmp = _this->__pool->__GetItem(_this->length);
		}
		else{
			HX_STACK_LINE(27)
			tmp = null();
		}
	}
	HX_STACK_LINE(27)
	::sx::properties::abstracts::_ACoordinate::WeakCoordinate weakCoordinate = tmp;		HX_STACK_VAR(weakCoordinate,"weakCoordinate");
	HX_STACK_LINE(28)
	bool tmp1 = (weakCoordinate == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	if ((tmp1)){
		HX_STACK_LINE(28)
		::sx::properties::abstracts::_ACoordinate::WeakCoordinate tmp2 = ::sx::properties::abstracts::_ACoordinate::WeakCoordinate_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		weakCoordinate = tmp2;
	}
	HX_STACK_LINE(29)
	weakCoordinate->weak = true;
	HX_STACK_LINE(30)
	Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	weakCoordinate->set_dip(tmp2);
	HX_STACK_LINE(32)
	::sx::properties::metric::Coordinate tmp3 = ((::sx::properties::metric::Coordinate)(weakCoordinate));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ACoordinate_Impl__obj,fromFloat,return )

::sx::properties::metric::Coordinate ACoordinate_Impl__obj::fromSize( ::sx::properties::metric::Size size){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","fromSize",0x06f682c5,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.fromSize","sx/properties/abstracts/ACoordinate.hx",40,0x4ad4bbb5)
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(41)
	Float tmp = size->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	::sx::properties::metric::Coordinate tmp1 = ::sx::properties::abstracts::_ACoordinate::ACoordinate_Impl__obj::fromFloat(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ACoordinate_Impl__obj,fromSize,return )

Float ACoordinate_Impl__obj::toFloat( ::sx::properties::metric::Coordinate this1){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","toFloat",0x9f4e8be7,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.toFloat","sx/properties/abstracts/ACoordinate.hx",46,0x4ad4bbb5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(46)
	Float tmp = this1->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ACoordinate_Impl__obj,toFloat,return )

::sx::properties::metric::Coordinate ACoordinate_Impl__obj::_new( ::sx::properties::metric::Coordinate coordinate){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","_new",0x5d5463db,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_._new","sx/properties/abstracts/ACoordinate.hx",51,0x4ad4bbb5)
	HX_STACK_ARG(coordinate,"coordinate")
	HX_STACK_LINE(51)
	::sx::properties::metric::Coordinate tmp = coordinate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ACoordinate_Impl__obj,_new,return )

Float ACoordinate_Impl__obj::AincB( ::sx::properties::metric::Coordinate a,::sx::properties::metric::Coordinate b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AincB",0x033646ab,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AincB","sx/properties/abstracts/ACoordinate.hx",58,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(58)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::sx::properties::metric::Coordinate _g = a;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		Float tmp1 = _g->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		Float tmp2 = b->get_dip();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		tmp = _g->set_dip(tmp3);
	}
	HX_STACK_LINE(58)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AincB,return )

Float ACoordinate_Impl__obj::AdecB( ::sx::properties::metric::Coordinate a,::sx::properties::metric::Coordinate b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AdecB",0xffe16147,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AdecB","sx/properties/abstracts/ACoordinate.hx",59,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(59)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::sx::properties::metric::Coordinate _g = a;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		Float tmp1 = _g->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		Float tmp2 = b->get_dip();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		tmp = _g->set_dip(tmp3);
	}
	HX_STACK_LINE(59)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AdecB,return )

Float ACoordinate_Impl__obj::AmulIncB( ::sx::properties::metric::Coordinate a,::sx::properties::metric::Coordinate b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AmulIncB",0xbee5dd21,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AmulIncB","sx/properties/abstracts/ACoordinate.hx",60,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(60)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::sx::properties::metric::Coordinate _g = a;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		Float tmp1 = _g->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		Float tmp2 = b->get_dip();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		tmp = _g->set_dip(tmp3);
	}
	HX_STACK_LINE(60)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AmulIncB,return )

Float ACoordinate_Impl__obj::AdevDecB( ::sx::properties::metric::Coordinate a,::sx::properties::metric::Coordinate b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AdevDecB",0xa19bd20e,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AdevDecB","sx/properties/abstracts/ACoordinate.hx",61,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(61)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::sx::properties::metric::Coordinate _g = a;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		Float tmp1 = _g->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		Float tmp2 = b->get_dip();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		tmp = _g->set_dip(tmp3);
	}
	HX_STACK_LINE(61)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AdevDecB,return )

Float ACoordinate_Impl__obj::AplusB( ::sx::properties::metric::Coordinate a,::sx::properties::metric::Coordinate b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AplusB",0xd2d104c1,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AplusB","sx/properties/abstracts/ACoordinate.hx",62,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(62)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Float tmp1 = b->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AplusB,return )

Float ACoordinate_Impl__obj::AminusB( ::sx::properties::metric::Coordinate a,::sx::properties::metric::Coordinate b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AminusB",0xb22e8299,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AminusB","sx/properties/abstracts/ACoordinate.hx",63,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(63)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	Float tmp1 = b->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AminusB,return )

Float ACoordinate_Impl__obj::AmulB( ::sx::properties::metric::Coordinate a,::sx::properties::metric::Coordinate b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AmulB",0x05e078c5,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AmulB","sx/properties/abstracts/ACoordinate.hx",64,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(64)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	Float tmp1 = b->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AmulB,return )

Float ACoordinate_Impl__obj::AdivB( ::sx::properties::metric::Coordinate a,::sx::properties::metric::Coordinate b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AdivB",0xffe47ad8,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AdivB","sx/properties/abstracts/ACoordinate.hx",65,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(65)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	Float tmp1 = b->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AdivB,return )

bool ACoordinate_Impl__obj::AltB( ::sx::properties::metric::Coordinate a,::sx::properties::metric::Coordinate b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AltB",0x497e8593,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AltB","sx/properties/abstracts/ACoordinate.hx",66,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(66)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	Float tmp1 = b->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AltB,return )

bool ACoordinate_Impl__obj::AlteB( ::sx::properties::metric::Coordinate a,::sx::properties::metric::Coordinate b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AlteB",0x053679cc,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AlteB","sx/properties/abstracts/ACoordinate.hx",67,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(67)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	Float tmp1 = b->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AlteB,return )

bool ACoordinate_Impl__obj::AneB( ::sx::properties::metric::Coordinate a,::sx::properties::metric::Coordinate b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AneB",0x497ffd04,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AneB","sx/properties/abstracts/ACoordinate.hx",68,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(68)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	Float tmp1 = b->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AneB,return )

bool ACoordinate_Impl__obj::AgteB( ::sx::properties::metric::Coordinate a,::sx::properties::metric::Coordinate b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AgteB",0x01e868b1,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AgteB","sx/properties/abstracts/ACoordinate.hx",69,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(69)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	Float tmp1 = b->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AgteB,return )

bool ACoordinate_Impl__obj::AgtB( ::sx::properties::metric::Coordinate a,::sx::properties::metric::Coordinate b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AgtB",0x497aba4e,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AgtB","sx/properties/abstracts/ACoordinate.hx",70,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(70)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	Float tmp1 = b->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AgtB,return )

bool ACoordinate_Impl__obj::AeqB( ::sx::properties::metric::Coordinate a,::sx::properties::metric::Coordinate b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AeqB",0x4979332f,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AeqB","sx/properties/abstracts/ACoordinate.hx",71,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(71)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	Float tmp1 = b->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AeqB,return )

Float ACoordinate_Impl__obj::minusA( ::sx::properties::metric::Coordinate a){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","minusA",0x640942cb,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.minusA","sx/properties/abstracts/ACoordinate.hx",72,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(72)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ACoordinate_Impl__obj,minusA,return )

Float ACoordinate_Impl__obj::Ainc( ::sx::properties::metric::Coordinate a){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","Ainc",0x497c39b7,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.Ainc","sx/properties/abstracts/ACoordinate.hx",74,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(74)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		::sx::properties::metric::Coordinate _g = a;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		Float tmp1 = _g->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		Float _g1 = tmp1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		Float tmp2 = (_g1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		_g->set_dip(tmp2);
		HX_STACK_LINE(74)
		tmp = _g1;
	}
	HX_STACK_LINE(74)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ACoordinate_Impl__obj,Ainc,return )

Float ACoordinate_Impl__obj::Bdec( ::sx::properties::metric::Coordinate a){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","Bdec",0x4a219d3a,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.Bdec","sx/properties/abstracts/ACoordinate.hx",75,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(75)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		::sx::properties::metric::Coordinate _g = a;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(75)
		Float tmp1 = _g->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		Float _g1 = tmp1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(75)
		Float tmp2 = (_g1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		_g->set_dip(tmp2);
		HX_STACK_LINE(75)
		tmp = _g1;
	}
	HX_STACK_LINE(75)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ACoordinate_Impl__obj,Bdec,return )

Float ACoordinate_Impl__obj::AincBf( ::sx::properties::metric::Coordinate a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AincBf",0xcc478f5b,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AincBf","sx/properties/abstracts/ACoordinate.hx",81,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(81)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		::sx::properties::metric::Coordinate _g = a;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		Float tmp1 = _g->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		Float tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		tmp = _g->set_dip(tmp3);
	}
	HX_STACK_LINE(81)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AincBf,return )

Float ACoordinate_Impl__obj::AdecBf( ::sx::properties::metric::Coordinate a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AdecBf",0xe553bd3f,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AdecBf","sx/properties/abstracts/ACoordinate.hx",82,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(82)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		::sx::properties::metric::Coordinate _g = a;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(82)
		Float tmp1 = _g->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		Float tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		tmp = _g->set_dip(tmp3);
	}
	HX_STACK_LINE(82)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AdecBf,return )

Float ACoordinate_Impl__obj::AmulIncBf( ::sx::properties::metric::Coordinate a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AmulIncBf",0x4a3ba025,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AmulIncBf","sx/properties/abstracts/ACoordinate.hx",83,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(83)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		::sx::properties::metric::Coordinate _g = a;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		Float tmp1 = _g->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		Float tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		tmp = _g->set_dip(tmp3);
	}
	HX_STACK_LINE(83)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AmulIncBf,return )

Float ACoordinate_Impl__obj::AdevDecBf( ::sx::properties::metric::Coordinate a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AdevDecBf",0xc6bbfa98,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AdevDecBf","sx/properties/abstracts/ACoordinate.hx",84,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(84)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		::sx::properties::metric::Coordinate _g = a;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		Float tmp1 = _g->get_dip();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		Float tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		tmp = _g->set_dip(tmp3);
	}
	HX_STACK_LINE(84)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AdevDecBf,return )

Float ACoordinate_Impl__obj::AplusBf( ::sx::properties::metric::Coordinate a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AplusBf",0xa4132485,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AplusBf","sx/properties/abstracts/ACoordinate.hx",85,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(85)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AplusBf,return )

Float ACoordinate_Impl__obj::AminusBf( ::sx::properties::metric::Coordinate a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AminusBf",0x3683c3ad,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AminusBf","sx/properties/abstracts/ACoordinate.hx",86,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(86)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AminusBf,return )

Float ACoordinate_Impl__obj::AmulBf( ::sx::properties::metric::Coordinate a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AmulBf",0x1e893401,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AmulBf","sx/properties/abstracts/ACoordinate.hx",87,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(87)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AmulBf,return )

Float ACoordinate_Impl__obj::AdivBf( ::sx::properties::metric::Coordinate a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AdivBf",0xe807028e,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AdivBf","sx/properties/abstracts/ACoordinate.hx",88,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(88)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AdivBf,return )

bool ACoordinate_Impl__obj::AltBf( ::sx::properties::metric::Coordinate a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AltBf",0x05365b73,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AltBf","sx/properties/abstracts/ACoordinate.hx",89,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(89)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AltBf,return )

bool ACoordinate_Impl__obj::AlteBf( ::sx::properties::metric::Coordinate a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AlteBf",0x8a74191a,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AlteBf","sx/properties/abstracts/ACoordinate.hx",90,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(90)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AlteBf,return )

bool ACoordinate_Impl__obj::AneBf( ::sx::properties::metric::Coordinate a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AneBf",0x067d66e2,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AneBf","sx/properties/abstracts/ACoordinate.hx",91,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(91)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AneBf,return )

bool ACoordinate_Impl__obj::AgteBf( ::sx::properties::metric::Coordinate a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AgteBf",0xa9733295,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AgteBf","sx/properties/abstracts/ACoordinate.hx",92,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(92)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AgteBf,return )

bool ACoordinate_Impl__obj::AgtBf( ::sx::properties::metric::Coordinate a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AgtBf",0x01e84a58,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AgtBf","sx/properties/abstracts/ACoordinate.hx",93,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(93)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AgtBf,return )

bool ACoordinate_Impl__obj::AeqBf( ::sx::properties::metric::Coordinate a,Float b){
	HX_STACK_FRAME("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","AeqBf",0x00939657,"sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.AeqBf","sx/properties/abstracts/ACoordinate.hx",94,0x4ad4bbb5)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(94)
	Float tmp = a->get_dip();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ACoordinate_Impl__obj,AeqBf,return )


ACoordinate_Impl__obj::ACoordinate_Impl__obj()
{
}

bool ACoordinate_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AltB") ) { outValue = AltB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AneB") ) { outValue = AneB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AgtB") ) { outValue = AgtB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AeqB") ) { outValue = AeqB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Ainc") ) { outValue = Ainc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Bdec") ) { outValue = Bdec_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"AincB") ) { outValue = AincB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AdecB") ) { outValue = AdecB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AmulB") ) { outValue = AmulB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AdivB") ) { outValue = AdivB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AlteB") ) { outValue = AlteB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AgteB") ) { outValue = AgteB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AltBf") ) { outValue = AltBf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AneBf") ) { outValue = AneBf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AgtBf") ) { outValue = AgtBf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AeqBf") ) { outValue = AeqBf_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"AplusB") ) { outValue = AplusB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"minusA") ) { outValue = minusA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AincBf") ) { outValue = AincBf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AdecBf") ) { outValue = AdecBf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AmulBf") ) { outValue = AmulBf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AdivBf") ) { outValue = AdivBf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AlteBf") ) { outValue = AlteBf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AgteBf") ) { outValue = AgteBf_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toFloat") ) { outValue = toFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AminusB") ) { outValue = AminusB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AplusBf") ) { outValue = AplusBf_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromSize") ) { outValue = fromSize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AmulIncB") ) { outValue = AmulIncB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AdevDecB") ) { outValue = AdevDecB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AminusBf") ) { outValue = AminusBf_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromFloat") ) { outValue = fromFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AmulIncBf") ) { outValue = AmulIncBf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AdevDecBf") ) { outValue = AdevDecBf_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::sx::ds::ObjectPool*/ ,(void *) &ACoordinate_Impl__obj::__pool,HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ACoordinate_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ACoordinate_Impl__obj::__pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ACoordinate_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ACoordinate_Impl__obj::__pool,"__pool");
};

#endif

hx::Class ACoordinate_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"),
	HX_HCSTRING("fromFloat","\xd2","\xaf","\x1f","\xb7"),
	HX_HCSTRING("fromSize","\x4b","\x6f","\x1f","\xaa"),
	HX_HCSTRING("toFloat","\x21","\x12","\x1b","\xcf"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("AincB","\x65","\xea","\xc6","\xb2"),
	HX_HCSTRING("AdecB","\x01","\x05","\x72","\xaf"),
	HX_HCSTRING("AmulIncB","\xa7","\xc9","\x0e","\x62"),
	HX_HCSTRING("AdevDecB","\x94","\xbe","\xc4","\x44"),
	HX_HCSTRING("AplusB","\xc7","\xa3","\xcf","\xc1"),
	HX_HCSTRING("AminusB","\xd3","\x08","\xfb","\xe1"),
	HX_HCSTRING("AmulB","\x7f","\x1c","\x71","\xb5"),
	HX_HCSTRING("AdivB","\x92","\x1e","\x75","\xaf"),
	HX_HCSTRING("AltB","\x19","\x37","\x49","\x2b"),
	HX_HCSTRING("AlteB","\x86","\x1d","\xc7","\xb4"),
	HX_HCSTRING("AneB","\x8a","\xae","\x4a","\x2b"),
	HX_HCSTRING("AgteB","\x6b","\x0c","\x79","\xb1"),
	HX_HCSTRING("AgtB","\xd4","\x6b","\x45","\x2b"),
	HX_HCSTRING("AeqB","\xb5","\xe4","\x43","\x2b"),
	HX_HCSTRING("minusA","\xd1","\xe1","\x07","\x53"),
	HX_HCSTRING("Ainc","\x3d","\xeb","\x46","\x2b"),
	HX_HCSTRING("Bdec","\xc0","\x4e","\xec","\x2b"),
	HX_HCSTRING("AincBf","\x61","\x2e","\x46","\xbb"),
	HX_HCSTRING("AdecBf","\x45","\x5c","\x52","\xd4"),
	HX_HCSTRING("AmulIncBf","\xdf","\xa8","\xe1","\x6a"),
	HX_HCSTRING("AdevDecBf","\x52","\x03","\x62","\xe7"),
	HX_HCSTRING("AplusBf","\xbf","\xaa","\xdf","\xd3"),
	HX_HCSTRING("AminusBf","\x33","\xb0","\xac","\xd9"),
	HX_HCSTRING("AmulBf","\x07","\xd3","\x87","\x0d"),
	HX_HCSTRING("AdivBf","\x94","\xa1","\x05","\xd7"),
	HX_HCSTRING("AltBf","\x2d","\xff","\xc6","\xb4"),
	HX_HCSTRING("AlteBf","\x20","\xb8","\x72","\x79"),
	HX_HCSTRING("AneBf","\x9c","\x0a","\x0e","\xb6"),
	HX_HCSTRING("AgteBf","\x9b","\xd1","\x71","\x98"),
	HX_HCSTRING("AgtBf","\x12","\xee","\x78","\xb1"),
	HX_HCSTRING("AeqBf","\x11","\x3a","\x24","\xb0"),
	::String(null()) };

void ACoordinate_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.abstracts._ACoordinate.ACoordinate_Impl_","\x34","\xa4","\xd5","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ACoordinate_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ACoordinate_Impl__obj >;
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

void ACoordinate_Impl__obj::__boot()
{
	__pool= ::sx::ds::ObjectPool_obj::__new();
}

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _ACoordinate
