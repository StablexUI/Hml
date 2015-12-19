#include <hxcpp.h>

#ifndef INCLUDED_sx_properties_AutoSize
#include <sx/properties/AutoSize.h>
#endif
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
namespace sx{
namespace properties{

Void AutoSize_obj::__construct(hx::Null< bool >  __o_byDefault)
{
HX_STACK_FRAME("sx.properties.AutoSize","new",0x40c62b74,"sx.properties.AutoSize.new","sx/properties/AutoSize.hx",11,0x0a8f34dc)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_byDefault,"byDefault")
bool byDefault = __o_byDefault.Default(false);
{
	HX_STACK_LINE(30)
	this->weak = false;
	HX_STACK_LINE(19)
	this->__height = false;
	HX_STACK_LINE(16)
	this->__width = false;
	HX_STACK_LINE(38)
	this->__width = byDefault;
	HX_STACK_LINE(39)
	this->__height = byDefault;
	HX_STACK_LINE(41)
	::sx::signals::Signal tmp = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	this->onChange = tmp;
}
;
	return null();
}

//AutoSize_obj::~AutoSize_obj() { }

Dynamic AutoSize_obj::__CreateEmpty() { return  new AutoSize_obj; }
hx::ObjectPtr< AutoSize_obj > AutoSize_obj::__new(hx::Null< bool >  __o_byDefault)
{  hx::ObjectPtr< AutoSize_obj > _result_ = new AutoSize_obj();
	_result_->__construct(__o_byDefault);
	return _result_;}

Dynamic AutoSize_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AutoSize_obj > _result_ = new AutoSize_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool AutoSize_obj::either( ){
	HX_STACK_FRAME("sx.properties.AutoSize","either",0x6a8b26b1,"sx.properties.AutoSize.either","sx/properties/AutoSize.hx",49,0x0a8f34dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	bool tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	if ((tmp1)){
		HX_STACK_LINE(50)
		tmp2 = this->get_height();
	}
	else{
		HX_STACK_LINE(50)
		tmp2 = true;
	}
	HX_STACK_LINE(50)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(AutoSize_obj,either,return )

bool AutoSize_obj::neither( ){
	HX_STACK_FRAME("sx.properties.AutoSize","neither",0x5e92d947,"sx.properties.AutoSize.neither","sx/properties/AutoSize.hx",58,0x0a8f34dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	bool tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	if ((tmp2)){
		HX_STACK_LINE(59)
		bool tmp4 = this->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		tmp3 = !(tmp6);
	}
	else{
		HX_STACK_LINE(59)
		tmp3 = false;
	}
	HX_STACK_LINE(59)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(AutoSize_obj,neither,return )

bool AutoSize_obj::both( ){
	HX_STACK_FRAME("sx.properties.AutoSize","both",0x64b8deed,"sx.properties.AutoSize.both","sx/properties/AutoSize.hx",67,0x0a8f34dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	bool tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	if ((tmp)){
		HX_STACK_LINE(68)
		tmp1 = this->get_height();
	}
	else{
		HX_STACK_LINE(68)
		tmp1 = false;
	}
	HX_STACK_LINE(68)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AutoSize_obj,both,return )

Void AutoSize_obj::set( bool width,bool height){
{
		HX_STACK_FRAME("sx.properties.AutoSize","set",0x40c9f6b6,"sx.properties.AutoSize.set","sx/properties/AutoSize.hx",78,0x0a8f34dc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(79)
		bool tmp = this->__width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		bool tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		bool widthChanged = tmp2;		HX_STACK_VAR(widthChanged,"widthChanged");
		HX_STACK_LINE(80)
		bool tmp3 = this->__height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		bool tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		bool heightChanged = tmp5;		HX_STACK_VAR(heightChanged,"heightChanged");
		HX_STACK_LINE(82)
		this->__width = width;
		HX_STACK_LINE(83)
		this->__height = height;
		HX_STACK_LINE(85)
		bool tmp6 = widthChanged;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(85)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(85)
		if ((tmp7)){
			HX_STACK_LINE(85)
			tmp8 = heightChanged;
		}
		else{
			HX_STACK_LINE(85)
			tmp8 = true;
		}
		HX_STACK_LINE(85)
		if ((tmp8)){
			HX_STACK_LINE(86)
			::sx::signals::Signal tmp9 = this->onChange;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(86)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(86)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(86)
			if ((tmp10)){
				HX_STACK_LINE(86)
				::sx::signals::Signal tmp12 = this->onChange;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(86)
				::sx::signals::Signal tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(86)
				int tmp14 = tmp13->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(86)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(86)
				tmp11 = (tmp15 > (int)0);
			}
			else{
				HX_STACK_LINE(86)
				tmp11 = false;
			}
			HX_STACK_LINE(86)
			if ((tmp11)){
				HX_STACK_LINE(86)
				::sx::signals::Signal tmp12 = this->onChange;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(86)
				bool tmp13 = tmp12->__listenersInUse;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(86)
				if ((tmp13)){
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(86)
						::sx::signals::Signal tmp14 = this->onChange;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(86)
						cpp::ArrayBase _g1 = tmp14->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(86)
						while((true)){
							HX_STACK_LINE(86)
							bool tmp15 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(86)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(86)
							if ((tmp16)){
								HX_STACK_LINE(86)
								break;
							}
							HX_STACK_LINE(86)
							Dynamic tmp17 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(86)
							Dynamic listener = tmp17;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(86)
							++(_g);
							HX_STACK_LINE(86)
							bool tmp18 = widthChanged;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(86)
							bool tmp19 = heightChanged;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(86)
							listener(tmp18,tmp19).Cast< Void >();
						}
					}
					HX_STACK_LINE(86)
					false;
				}
				else{
					HX_STACK_LINE(86)
					::sx::signals::Signal tmp14 = this->onChange;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(86)
					tmp14->__listenersInUse = true;
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(86)
						::sx::signals::Signal tmp15 = this->onChange;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(86)
						cpp::ArrayBase _g1 = tmp15->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(86)
						while((true)){
							HX_STACK_LINE(86)
							bool tmp16 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(86)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(86)
							if ((tmp17)){
								HX_STACK_LINE(86)
								break;
							}
							HX_STACK_LINE(86)
							Dynamic tmp18 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(86)
							Dynamic listener = tmp18;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(86)
							++(_g);
							HX_STACK_LINE(86)
							bool tmp19 = widthChanged;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(86)
							bool tmp20 = heightChanged;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(86)
							listener(tmp19,tmp20).Cast< Void >();
						}
					}
					HX_STACK_LINE(86)
					::sx::signals::Signal tmp15 = this->onChange;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(86)
					tmp15->__listenersInUse = false;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AutoSize_obj,set,(void))

::sx::properties::AutoSize AutoSize_obj::copyValueFrom( ::sx::properties::AutoSize autoSize){
	HX_STACK_FRAME("sx.properties.AutoSize","copyValueFrom",0x167f5f1a,"sx.properties.AutoSize.copyValueFrom","sx/properties/AutoSize.hx",97,0x0a8f34dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(autoSize,"autoSize")
	HX_STACK_LINE(98)
	bool tmp = autoSize->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	bool tmp1 = autoSize->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	this->set(tmp,tmp1);
	HX_STACK_LINE(99)
	bool tmp2 = autoSize->weak;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	if ((tmp2)){
		HX_STACK_LINE(99)
		autoSize->dispose();
	}
	HX_STACK_LINE(101)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(AutoSize_obj,copyValueFrom,return )

Void AutoSize_obj::dispose( ){
{
		HX_STACK_FRAME("sx.properties.AutoSize","dispose",0x178bf5b3,"sx.properties.AutoSize.dispose","sx/properties/AutoSize.hx",109,0x0a8f34dc)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AutoSize_obj,dispose,(void))

Void AutoSize_obj::__invokeOnChange( bool horizontalChanged,bool verticalChanged){
{
		HX_STACK_FRAME("sx.properties.AutoSize","__invokeOnChange",0xf064c713,"sx.properties.AutoSize.__invokeOnChange","sx/properties/AutoSize.hx",118,0x0a8f34dc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(horizontalChanged,"horizontalChanged")
		HX_STACK_ARG(verticalChanged,"verticalChanged")
		HX_STACK_LINE(119)
		::sx::signals::Signal tmp = this->onChange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		if ((tmp1)){
			HX_STACK_LINE(119)
			::sx::signals::Signal tmp3 = this->onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(119)
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
			HX_STACK_LINE(119)
			::sx::signals::Signal tmp3 = this->onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			bool tmp4 = tmp3->__listenersInUse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			if ((tmp4)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(119)
					::sx::signals::Signal tmp5 = this->onChange;		HX_STACK_VAR(tmp5,"tmp5");
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
						HX_STACK_LINE(119)
						bool tmp9 = horizontalChanged;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(119)
						bool tmp10 = verticalChanged;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(148)
						listener(tmp9,tmp10).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(119)
				::sx::signals::Signal tmp5 = this->onChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				tmp5->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(119)
					::sx::signals::Signal tmp6 = this->onChange;		HX_STACK_VAR(tmp6,"tmp6");
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
						HX_STACK_LINE(119)
						bool tmp10 = horizontalChanged;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(119)
						bool tmp11 = verticalChanged;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(152)
						listener(tmp10,tmp11).Cast< Void >();
					}
				}
				HX_STACK_LINE(119)
				::sx::signals::Signal tmp6 = this->onChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				tmp6->__listenersInUse = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AutoSize_obj,__invokeOnChange,(void))

bool AutoSize_obj::set_width( bool value){
	HX_STACK_FRAME("sx.properties.AutoSize","set_width",0x7432e07d,"sx.properties.AutoSize.set_width","sx/properties/AutoSize.hx",127,0x0a8f34dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(128)
	bool tmp = this->__width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	if ((tmp2)){
		HX_STACK_LINE(129)
		this->__width = value;
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			::sx::signals::Signal tmp3 = this->onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(130)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(130)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(130)
			if ((tmp4)){
				HX_STACK_LINE(130)
				::sx::signals::Signal tmp6 = this->onChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(130)
				::sx::signals::Signal tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(130)
				int tmp8 = tmp7->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(130)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(130)
				tmp5 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(130)
				tmp5 = false;
			}
			HX_STACK_LINE(130)
			if ((tmp5)){
				HX_STACK_LINE(130)
				::sx::signals::Signal tmp6 = this->onChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(130)
				bool tmp7 = tmp6->__listenersInUse;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(130)
				if ((tmp7)){
					HX_STACK_LINE(130)
					{
						HX_STACK_LINE(130)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(130)
						::sx::signals::Signal tmp8 = this->onChange;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(130)
						cpp::ArrayBase _g1 = tmp8->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(130)
						while((true)){
							HX_STACK_LINE(130)
							bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(130)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(130)
							if ((tmp10)){
								HX_STACK_LINE(130)
								break;
							}
							HX_STACK_LINE(130)
							Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(130)
							Dynamic listener = tmp11;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(130)
							++(_g);
							HX_STACK_LINE(130)
							listener(true,false).Cast< Void >();
						}
					}
					HX_STACK_LINE(130)
					false;
				}
				else{
					HX_STACK_LINE(130)
					::sx::signals::Signal tmp8 = this->onChange;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(130)
					tmp8->__listenersInUse = true;
					HX_STACK_LINE(130)
					{
						HX_STACK_LINE(130)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(130)
						::sx::signals::Signal tmp9 = this->onChange;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(130)
						cpp::ArrayBase _g1 = tmp9->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(130)
						while((true)){
							HX_STACK_LINE(130)
							bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(130)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(130)
							if ((tmp11)){
								HX_STACK_LINE(130)
								break;
							}
							HX_STACK_LINE(130)
							Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(130)
							Dynamic listener = tmp12;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(130)
							++(_g);
							HX_STACK_LINE(130)
							listener(true,false).Cast< Void >();
						}
					}
					HX_STACK_LINE(130)
					::sx::signals::Signal tmp9 = this->onChange;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(130)
					tmp9->__listenersInUse = false;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(132)
		this->__width = value;
	}
	HX_STACK_LINE(136)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AutoSize_obj,set_width,return )

bool AutoSize_obj::set_height( bool value){
	HX_STACK_FRAME("sx.properties.AutoSize","set_height",0xeea10590,"sx.properties.AutoSize.set_height","sx/properties/AutoSize.hx",144,0x0a8f34dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(145)
	bool tmp = this->__height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	if ((tmp2)){
		HX_STACK_LINE(146)
		this->__height = value;
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			::sx::signals::Signal tmp3 = this->onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(147)
			if ((tmp4)){
				HX_STACK_LINE(147)
				::sx::signals::Signal tmp6 = this->onChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(147)
				::sx::signals::Signal tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(147)
				int tmp8 = tmp7->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(147)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(147)
				tmp5 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(147)
				tmp5 = false;
			}
			HX_STACK_LINE(147)
			if ((tmp5)){
				HX_STACK_LINE(147)
				::sx::signals::Signal tmp6 = this->onChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(147)
				bool tmp7 = tmp6->__listenersInUse;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(147)
				if ((tmp7)){
					HX_STACK_LINE(147)
					{
						HX_STACK_LINE(147)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(147)
						::sx::signals::Signal tmp8 = this->onChange;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(147)
						cpp::ArrayBase _g1 = tmp8->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(147)
						while((true)){
							HX_STACK_LINE(147)
							bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(147)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(147)
							if ((tmp10)){
								HX_STACK_LINE(147)
								break;
							}
							HX_STACK_LINE(147)
							Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(147)
							Dynamic listener = tmp11;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(147)
							++(_g);
							HX_STACK_LINE(147)
							listener(false,true).Cast< Void >();
						}
					}
					HX_STACK_LINE(147)
					false;
				}
				else{
					HX_STACK_LINE(147)
					::sx::signals::Signal tmp8 = this->onChange;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(147)
					tmp8->__listenersInUse = true;
					HX_STACK_LINE(147)
					{
						HX_STACK_LINE(147)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(147)
						::sx::signals::Signal tmp9 = this->onChange;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(147)
						cpp::ArrayBase _g1 = tmp9->__listeners;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(147)
						while((true)){
							HX_STACK_LINE(147)
							bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(147)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(147)
							if ((tmp11)){
								HX_STACK_LINE(147)
								break;
							}
							HX_STACK_LINE(147)
							Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(147)
							Dynamic listener = tmp12;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(147)
							++(_g);
							HX_STACK_LINE(147)
							listener(false,true).Cast< Void >();
						}
					}
					HX_STACK_LINE(147)
					::sx::signals::Signal tmp9 = this->onChange;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(147)
					tmp9->__listenersInUse = false;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(149)
		this->__height = value;
	}
	HX_STACK_LINE(152)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(152)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AutoSize_obj,set_height,return )

bool AutoSize_obj::get_width( ){
	HX_STACK_FRAME("sx.properties.AutoSize","get_width",0x90e1f471,"sx.properties.AutoSize.get_width","sx/properties/AutoSize.hx",157,0x0a8f34dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	bool tmp = this->__width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AutoSize_obj,get_width,return )

bool AutoSize_obj::get_height( ){
	HX_STACK_FRAME("sx.properties.AutoSize","get_height",0xeb23671c,"sx.properties.AutoSize.get_height","sx/properties/AutoSize.hx",158,0x0a8f34dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(158)
	bool tmp = this->__height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AutoSize_obj,get_height,return )


AutoSize_obj::AutoSize_obj()
{
}

void AutoSize_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AutoSize);
	HX_MARK_MEMBER_NAME(__width,"__width");
	HX_MARK_MEMBER_NAME(__height,"__height");
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_MEMBER_NAME(weak,"weak");
	HX_MARK_END_CLASS();
}

void AutoSize_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__width,"__width");
	HX_VISIT_MEMBER_NAME(__height,"__height");
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	HX_VISIT_MEMBER_NAME(weak,"weak");
}

Dynamic AutoSize_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { return weak; }
		if (HX_FIELD_EQ(inName,"both") ) { return both_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"either") ) { return either_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		if (HX_FIELD_EQ(inName,"neither") ) { return neither_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		if (HX_FIELD_EQ(inName,"onChange") ) { return onChange; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyValueFrom") ) { return copyValueFrom_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__invokeOnChange") ) { return __invokeOnChange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AutoSize_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { weak=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AutoSize_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AutoSize_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	outFields->push(HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"));
	outFields->push(HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(AutoSize_obj,__width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{hx::fsBool,(int)offsetof(AutoSize_obj,__height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(AutoSize_obj,onChange),HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97")},
	{hx::fsBool,(int)offsetof(AutoSize_obj,weak),HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e"),
	HX_HCSTRING("either","\x45","\x5d","\x1a","\x24"),
	HX_HCSTRING("neither","\x33","\x64","\x53","\x02"),
	HX_HCSTRING("both","\x81","\x88","\x1b","\x41"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("copyValueFrom","\x06","\xe3","\x0c","\xf2"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("__invokeOnChange","\xa7","\x7e","\xe9","\x3d"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AutoSize_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AutoSize_obj::__mClass,"__mClass");
};

#endif

hx::Class AutoSize_obj::__mClass;

void AutoSize_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.AutoSize","\x82","\xa1","\x8e","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &AutoSize_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AutoSize_obj >;
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
} // end namespace properties
