#include <hxcpp.h>

#ifndef INCLUDED_Signal
#include <Signal.h>
#endif
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif

Void Signal_obj::__construct()
{
HX_STACK_FRAME("Signal","new",0xd54e277a,"Signal.new","Signal.hx",9,0xb1bee536)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(31)
	this->closureSingleExpr_initialized = false;
	HX_STACK_LINE(27)
	this->closureBlockBody_initialized = false;
	HX_STACK_LINE(23)
	this->simple_initialized = false;
	HX_STACK_LINE(19)
	this->closureSingleExprClicked_initialized = false;
	HX_STACK_LINE(15)
	this->closureBlockClicked_initialized = false;
	HX_STACK_LINE(11)
	this->simpleClicked_initialized = false;
	HX_STACK_LINE(138)
	super::__construct();
	HX_STACK_LINE(139)
	::sx::widgets::Widget tmp = this->get_simple();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	this->addChild(tmp);
	HX_STACK_LINE(140)
	::sx::widgets::Widget tmp1 = this->get_closureBlockBody();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	this->addChild(tmp1);
	HX_STACK_LINE(141)
	::sx::widgets::Widget tmp2 = this->get_closureSingleExpr();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	this->addChild(tmp2);
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

Void Signal_obj::destroyHml( ){
{
		HX_STACK_FRAME("Signal","destroyHml",0xc041cd13,"Signal.destroyHml","Signal.hx",35,0xb1bee536)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Signal_obj,destroyHml,(void))

bool Signal_obj::set_simpleClicked( bool value){
	HX_STACK_FRAME("Signal","set_simpleClicked",0x47b21892,"Signal.set_simpleClicked","Signal.hx",40,0xb1bee536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(41)
	this->simpleClicked_initialized = true;
	HX_STACK_LINE(42)
	bool tmp = this->simpleClicked = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Signal_obj,set_simpleClicked,return )

bool Signal_obj::get_simpleClicked( ){
	HX_STACK_FRAME("Signal","get_simpleClicked",0x24444086,"Signal.get_simpleClicked","Signal.hx",45,0xb1bee536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	bool tmp = this->simpleClicked_initialized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	if ((tmp)){
		HX_STACK_LINE(47)
		bool tmp1 = this->simpleClicked;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		return tmp1;
	}
	HX_STACK_LINE(48)
	this->simpleClicked_initialized = true;
	HX_STACK_LINE(49)
	this->set_simpleClicked(false);
	HX_STACK_LINE(50)
	bool tmp1 = this->simpleClicked;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	bool res = tmp1;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(51)
	bool tmp2 = res;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Signal_obj,get_simpleClicked,return )

bool Signal_obj::set_closureBlockClicked( bool value){
	HX_STACK_FRAME("Signal","set_closureBlockClicked",0x7e0a82b2,"Signal.set_closureBlockClicked","Signal.hx",54,0xb1bee536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(55)
	this->closureBlockClicked_initialized = true;
	HX_STACK_LINE(56)
	bool tmp = this->closureBlockClicked = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Signal_obj,set_closureBlockClicked,return )

bool Signal_obj::get_closureBlockClicked( ){
	HX_STACK_FRAME("Signal","get_closureBlockClicked",0x7ba919a6,"Signal.get_closureBlockClicked","Signal.hx",59,0xb1bee536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	bool tmp = this->closureBlockClicked_initialized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	if ((tmp)){
		HX_STACK_LINE(61)
		bool tmp1 = this->closureBlockClicked;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		return tmp1;
	}
	HX_STACK_LINE(62)
	this->closureBlockClicked_initialized = true;
	HX_STACK_LINE(63)
	this->set_closureBlockClicked(false);
	HX_STACK_LINE(64)
	bool tmp1 = this->closureBlockClicked;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	bool res = tmp1;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(65)
	bool tmp2 = res;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Signal_obj,get_closureBlockClicked,return )

bool Signal_obj::set_closureSingleExprClicked( bool value){
	HX_STACK_FRAME("Signal","set_closureSingleExprClicked",0x0e9f7b72,"Signal.set_closureSingleExprClicked","Signal.hx",68,0xb1bee536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(69)
	this->closureSingleExprClicked_initialized = true;
	HX_STACK_LINE(70)
	bool tmp = this->closureSingleExprClicked = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Signal_obj,set_closureSingleExprClicked,return )

bool Signal_obj::get_closureSingleExprClicked( ){
	HX_STACK_FRAME("Signal","get_closureSingleExprClicked",0x0b752ffe,"Signal.get_closureSingleExprClicked","Signal.hx",73,0xb1bee536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	bool tmp = this->closureSingleExprClicked_initialized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	if ((tmp)){
		HX_STACK_LINE(75)
		bool tmp1 = this->closureSingleExprClicked;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		return tmp1;
	}
	HX_STACK_LINE(76)
	this->closureSingleExprClicked_initialized = true;
	HX_STACK_LINE(77)
	this->set_closureSingleExprClicked(false);
	HX_STACK_LINE(78)
	bool tmp1 = this->closureSingleExprClicked;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	bool res = tmp1;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(79)
	bool tmp2 = res;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Signal_obj,get_closureSingleExprClicked,return )

::sx::widgets::Widget Signal_obj::set_simple( ::sx::widgets::Widget value){
	HX_STACK_FRAME("Signal","set_simple",0xbeb23295,"Signal.set_simple","Signal.hx",82,0xb1bee536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(83)
	this->simple_initialized = true;
	HX_STACK_LINE(84)
	::sx::widgets::Widget tmp = this->simple = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Signal_obj,set_simple,return )

::sx::widgets::Widget Signal_obj::get_simple( ){
	HX_STACK_FRAME("Signal","get_simple",0xbb349421,"Signal.get_simple","Signal.hx",87,0xb1bee536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	::Signal _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(89)
	bool tmp = this->simple_initialized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	if ((tmp)){
		HX_STACK_LINE(89)
		::sx::widgets::Widget tmp1 = this->simple;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		return tmp1;
	}
	HX_STACK_LINE(90)
	this->simple_initialized = true;
	HX_STACK_LINE(91)
	::sx::widgets::Widget tmp1 = ::sx::widgets::Widget_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	this->set_simple(tmp1);
	HX_STACK_LINE(92)
	::sx::widgets::Widget tmp2 = this->simple;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	::sx::widgets::Widget res = tmp2;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(94)
	::sx::signals::Signal tmp3 = res->get_onClick();		HX_STACK_VAR(tmp3,"tmp3");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::Signal,_g)
	int __ArgCount() const { return 3; }
	Void run(::sx::widgets::Widget __0,::sx::widgets::Widget __1,int __2){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Signal.hx",95,0xb1bee536)
		HX_STACK_ARG(__0,"__0")
		HX_STACK_ARG(__1,"__1")
		HX_STACK_ARG(__2,"__2")
		{
			HX_STACK_LINE(95)
			_g->set_simpleClicked(true);
		}
		return null();
	}
	HX_END_LOCAL_FUNC3((void))

	HX_STACK_LINE(94)
	tmp3->add( Dynamic(new _Function_1_1(_g)));
	HX_STACK_LINE(97)
	::sx::widgets::Widget tmp4 = res;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Signal_obj,get_simple,return )

::sx::widgets::Widget Signal_obj::set_closureBlockBody( ::sx::widgets::Widget value){
	HX_STACK_FRAME("Signal","set_closureBlockBody",0x870a49b7,"Signal.set_closureBlockBody","Signal.hx",100,0xb1bee536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(101)
	this->closureBlockBody_initialized = true;
	HX_STACK_LINE(102)
	::sx::widgets::Widget tmp = this->closureBlockBody = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Signal_obj,set_closureBlockBody,return )

::sx::widgets::Widget Signal_obj::get_closureBlockBody( ){
	HX_STACK_FRAME("Signal","get_closureBlockBody",0xba529243,"Signal.get_closureBlockBody","Signal.hx",105,0xb1bee536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	::Signal _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(107)
	bool tmp = this->closureBlockBody_initialized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	if ((tmp)){
		HX_STACK_LINE(107)
		::sx::widgets::Widget tmp1 = this->closureBlockBody;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		return tmp1;
	}
	HX_STACK_LINE(108)
	this->closureBlockBody_initialized = true;
	HX_STACK_LINE(109)
	::sx::widgets::Widget tmp1 = ::sx::widgets::Widget_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	this->set_closureBlockBody(tmp1);
	HX_STACK_LINE(110)
	::sx::widgets::Widget tmp2 = this->closureBlockBody;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(110)
	::sx::widgets::Widget res = tmp2;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(112)
	::sx::signals::Signal tmp3 = res->get_onClick();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(112)
	Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::Signal,_g)
	int __ArgCount() const { return 3; }
	Void run(::sx::widgets::Widget processor,::sx::widgets::Widget dispatcher,int touchId){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Signal.hx",113,0xb1bee536)
		HX_STACK_ARG(processor,"processor")
		HX_STACK_ARG(dispatcher,"dispatcher")
		HX_STACK_ARG(touchId,"touchId")
		{
			HX_STACK_LINE(113)
			_g->set_closureBlockClicked(true);
		}
		return null();
	}
	HX_END_LOCAL_FUNC3((void))

	HX_STACK_LINE(113)
	tmp4 =  Dynamic(new _Function_1_1(_g));
	HX_STACK_LINE(112)
	tmp3->add(tmp4);
	HX_STACK_LINE(115)
	::sx::widgets::Widget tmp5 = res;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(115)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Signal_obj,get_closureBlockBody,return )

::sx::widgets::Widget Signal_obj::set_closureSingleExpr( ::sx::widgets::Widget value){
	HX_STACK_FRAME("Signal","set_closureSingleExpr",0xcce533b5,"Signal.set_closureSingleExpr","Signal.hx",118,0xb1bee536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(119)
	this->closureSingleExpr_initialized = true;
	HX_STACK_LINE(120)
	::sx::widgets::Widget tmp = this->closureSingleExpr = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Signal_obj,set_closureSingleExpr,return )

::sx::widgets::Widget Signal_obj::get_closureSingleExpr( ){
	HX_STACK_FRAME("Signal","get_closureSingleExpr",0x78dc65a9,"Signal.get_closureSingleExpr","Signal.hx",123,0xb1bee536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(123)
	::Signal _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(125)
	bool tmp = this->closureSingleExpr_initialized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	if ((tmp)){
		HX_STACK_LINE(125)
		::sx::widgets::Widget tmp1 = this->closureSingleExpr;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		return tmp1;
	}
	HX_STACK_LINE(126)
	this->closureSingleExpr_initialized = true;
	HX_STACK_LINE(127)
	::sx::widgets::Widget tmp1 = ::sx::widgets::Widget_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	this->set_closureSingleExpr(tmp1);
	HX_STACK_LINE(128)
	::sx::widgets::Widget tmp2 = this->closureSingleExpr;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	::sx::widgets::Widget res = tmp2;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(130)
	::sx::signals::Signal tmp3 = res->get_onClick();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(130)
	Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::Signal,_g)
	int __ArgCount() const { return 3; }
	Void run(::sx::widgets::Widget processor,::sx::widgets::Widget dispatcher,int touchId){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Signal.hx",131,0xb1bee536)
		HX_STACK_ARG(processor,"processor")
		HX_STACK_ARG(dispatcher,"dispatcher")
		HX_STACK_ARG(touchId,"touchId")
		{
			HX_STACK_LINE(131)
			_g->set_closureSingleExprClicked(true);
		}
		return null();
	}
	HX_END_LOCAL_FUNC3((void))

	HX_STACK_LINE(131)
	tmp4 =  Dynamic(new _Function_1_1(_g));
	HX_STACK_LINE(130)
	tmp3->add(tmp4);
	HX_STACK_LINE(133)
	::sx::widgets::Widget tmp5 = res;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(133)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Signal_obj,get_closureSingleExpr,return )


Signal_obj::Signal_obj()
{
}

void Signal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Signal);
	HX_MARK_MEMBER_NAME(simpleClicked_initialized,"simpleClicked_initialized");
	HX_MARK_MEMBER_NAME(simpleClicked,"simpleClicked");
	HX_MARK_MEMBER_NAME(closureBlockClicked_initialized,"closureBlockClicked_initialized");
	HX_MARK_MEMBER_NAME(closureBlockClicked,"closureBlockClicked");
	HX_MARK_MEMBER_NAME(closureSingleExprClicked_initialized,"closureSingleExprClicked_initialized");
	HX_MARK_MEMBER_NAME(closureSingleExprClicked,"closureSingleExprClicked");
	HX_MARK_MEMBER_NAME(simple_initialized,"simple_initialized");
	HX_MARK_MEMBER_NAME(simple,"simple");
	HX_MARK_MEMBER_NAME(closureBlockBody_initialized,"closureBlockBody_initialized");
	HX_MARK_MEMBER_NAME(closureBlockBody,"closureBlockBody");
	HX_MARK_MEMBER_NAME(closureSingleExpr_initialized,"closureSingleExpr_initialized");
	HX_MARK_MEMBER_NAME(closureSingleExpr,"closureSingleExpr");
	::sx::widgets::Widget_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Signal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(simpleClicked_initialized,"simpleClicked_initialized");
	HX_VISIT_MEMBER_NAME(simpleClicked,"simpleClicked");
	HX_VISIT_MEMBER_NAME(closureBlockClicked_initialized,"closureBlockClicked_initialized");
	HX_VISIT_MEMBER_NAME(closureBlockClicked,"closureBlockClicked");
	HX_VISIT_MEMBER_NAME(closureSingleExprClicked_initialized,"closureSingleExprClicked_initialized");
	HX_VISIT_MEMBER_NAME(closureSingleExprClicked,"closureSingleExprClicked");
	HX_VISIT_MEMBER_NAME(simple_initialized,"simple_initialized");
	HX_VISIT_MEMBER_NAME(simple,"simple");
	HX_VISIT_MEMBER_NAME(closureBlockBody_initialized,"closureBlockBody_initialized");
	HX_VISIT_MEMBER_NAME(closureBlockBody,"closureBlockBody");
	HX_VISIT_MEMBER_NAME(closureSingleExpr_initialized,"closureSingleExpr_initialized");
	HX_VISIT_MEMBER_NAME(closureSingleExpr,"closureSingleExpr");
	::sx::widgets::Widget_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Signal_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"simple") ) { return inCallProp == hx::paccAlways ? get_simple() : simple; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"destroyHml") ) { return destroyHml_dyn(); }
		if (HX_FIELD_EQ(inName,"set_simple") ) { return set_simple_dyn(); }
		if (HX_FIELD_EQ(inName,"get_simple") ) { return get_simple_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"simpleClicked") ) { return inCallProp == hx::paccAlways ? get_simpleClicked() : simpleClicked; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"closureBlockBody") ) { return inCallProp == hx::paccAlways ? get_closureBlockBody() : closureBlockBody; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"closureSingleExpr") ) { return inCallProp == hx::paccAlways ? get_closureSingleExpr() : closureSingleExpr; }
		if (HX_FIELD_EQ(inName,"set_simpleClicked") ) { return set_simpleClicked_dyn(); }
		if (HX_FIELD_EQ(inName,"get_simpleClicked") ) { return get_simpleClicked_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"simple_initialized") ) { return simple_initialized; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"closureBlockClicked") ) { return inCallProp == hx::paccAlways ? get_closureBlockClicked() : closureBlockClicked; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_closureBlockBody") ) { return set_closureBlockBody_dyn(); }
		if (HX_FIELD_EQ(inName,"get_closureBlockBody") ) { return get_closureBlockBody_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"set_closureSingleExpr") ) { return set_closureSingleExpr_dyn(); }
		if (HX_FIELD_EQ(inName,"get_closureSingleExpr") ) { return get_closureSingleExpr_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_closureBlockClicked") ) { return set_closureBlockClicked_dyn(); }
		if (HX_FIELD_EQ(inName,"get_closureBlockClicked") ) { return get_closureBlockClicked_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"closureSingleExprClicked") ) { return inCallProp == hx::paccAlways ? get_closureSingleExprClicked() : closureSingleExprClicked; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"simpleClicked_initialized") ) { return simpleClicked_initialized; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"closureBlockBody_initialized") ) { return closureBlockBody_initialized; }
		if (HX_FIELD_EQ(inName,"set_closureSingleExprClicked") ) { return set_closureSingleExprClicked_dyn(); }
		if (HX_FIELD_EQ(inName,"get_closureSingleExprClicked") ) { return get_closureSingleExprClicked_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"closureSingleExpr_initialized") ) { return closureSingleExpr_initialized; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"closureBlockClicked_initialized") ) { return closureBlockClicked_initialized; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"closureSingleExprClicked_initialized") ) { return closureSingleExprClicked_initialized; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Signal_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"simple") ) { if (inCallProp == hx::paccAlways) return set_simple(inValue);simple=inValue.Cast< ::sx::widgets::Widget >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"simpleClicked") ) { if (inCallProp == hx::paccAlways) return set_simpleClicked(inValue);simpleClicked=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"closureBlockBody") ) { if (inCallProp == hx::paccAlways) return set_closureBlockBody(inValue);closureBlockBody=inValue.Cast< ::sx::widgets::Widget >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"closureSingleExpr") ) { if (inCallProp == hx::paccAlways) return set_closureSingleExpr(inValue);closureSingleExpr=inValue.Cast< ::sx::widgets::Widget >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"simple_initialized") ) { simple_initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"closureBlockClicked") ) { if (inCallProp == hx::paccAlways) return set_closureBlockClicked(inValue);closureBlockClicked=inValue.Cast< bool >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"closureSingleExprClicked") ) { if (inCallProp == hx::paccAlways) return set_closureSingleExprClicked(inValue);closureSingleExprClicked=inValue.Cast< bool >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"simpleClicked_initialized") ) { simpleClicked_initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"closureBlockBody_initialized") ) { closureBlockBody_initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"closureSingleExpr_initialized") ) { closureSingleExpr_initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"closureBlockClicked_initialized") ) { closureBlockClicked_initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"closureSingleExprClicked_initialized") ) { closureSingleExprClicked_initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Signal_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Signal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("simpleClicked_initialized","\x2a","\x13","\x2a","\x47"));
	outFields->push(HX_HCSTRING("simpleClicked","\x95","\x64","\x81","\xa2"));
	outFields->push(HX_HCSTRING("closureBlockClicked_initialized","\x8a","\xf1","\x6f","\x6d"));
	outFields->push(HX_HCSTRING("closureBlockClicked","\xf5","\x32","\x1b","\x3a"));
	outFields->push(HX_HCSTRING("closureSingleExprClicked_initialized","\xe4","\x55","\x8e","\x60"));
	outFields->push(HX_HCSTRING("closureSingleExprClicked","\x4f","\xf8","\xf9","\x31"));
	outFields->push(HX_HCSTRING("simple_initialized","\x47","\x2a","\xa7","\x39"));
	outFields->push(HX_HCSTRING("simple","\x32","\x04","\x7f","\xb8"));
	outFields->push(HX_HCSTRING("closureBlockBody_initialized","\xa9","\xd2","\x5d","\x13"));
	outFields->push(HX_HCSTRING("closureBlockBody","\x94","\x21","\xce","\xd5"));
	outFields->push(HX_HCSTRING("closureSingleExpr_initialized","\x4d","\xd4","\x9a","\x6b"));
	outFields->push(HX_HCSTRING("closureSingleExpr","\x38","\x3d","\x7e","\x69"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Signal_obj,simpleClicked_initialized),HX_HCSTRING("simpleClicked_initialized","\x2a","\x13","\x2a","\x47")},
	{hx::fsBool,(int)offsetof(Signal_obj,simpleClicked),HX_HCSTRING("simpleClicked","\x95","\x64","\x81","\xa2")},
	{hx::fsBool,(int)offsetof(Signal_obj,closureBlockClicked_initialized),HX_HCSTRING("closureBlockClicked_initialized","\x8a","\xf1","\x6f","\x6d")},
	{hx::fsBool,(int)offsetof(Signal_obj,closureBlockClicked),HX_HCSTRING("closureBlockClicked","\xf5","\x32","\x1b","\x3a")},
	{hx::fsBool,(int)offsetof(Signal_obj,closureSingleExprClicked_initialized),HX_HCSTRING("closureSingleExprClicked_initialized","\xe4","\x55","\x8e","\x60")},
	{hx::fsBool,(int)offsetof(Signal_obj,closureSingleExprClicked),HX_HCSTRING("closureSingleExprClicked","\x4f","\xf8","\xf9","\x31")},
	{hx::fsBool,(int)offsetof(Signal_obj,simple_initialized),HX_HCSTRING("simple_initialized","\x47","\x2a","\xa7","\x39")},
	{hx::fsObject /*::sx::widgets::Widget*/ ,(int)offsetof(Signal_obj,simple),HX_HCSTRING("simple","\x32","\x04","\x7f","\xb8")},
	{hx::fsBool,(int)offsetof(Signal_obj,closureBlockBody_initialized),HX_HCSTRING("closureBlockBody_initialized","\xa9","\xd2","\x5d","\x13")},
	{hx::fsObject /*::sx::widgets::Widget*/ ,(int)offsetof(Signal_obj,closureBlockBody),HX_HCSTRING("closureBlockBody","\x94","\x21","\xce","\xd5")},
	{hx::fsBool,(int)offsetof(Signal_obj,closureSingleExpr_initialized),HX_HCSTRING("closureSingleExpr_initialized","\x4d","\xd4","\x9a","\x6b")},
	{hx::fsObject /*::sx::widgets::Widget*/ ,(int)offsetof(Signal_obj,closureSingleExpr),HX_HCSTRING("closureSingleExpr","\x38","\x3d","\x7e","\x69")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("simpleClicked_initialized","\x2a","\x13","\x2a","\x47"),
	HX_HCSTRING("simpleClicked","\x95","\x64","\x81","\xa2"),
	HX_HCSTRING("closureBlockClicked_initialized","\x8a","\xf1","\x6f","\x6d"),
	HX_HCSTRING("closureBlockClicked","\xf5","\x32","\x1b","\x3a"),
	HX_HCSTRING("closureSingleExprClicked_initialized","\xe4","\x55","\x8e","\x60"),
	HX_HCSTRING("closureSingleExprClicked","\x4f","\xf8","\xf9","\x31"),
	HX_HCSTRING("simple_initialized","\x47","\x2a","\xa7","\x39"),
	HX_HCSTRING("simple","\x32","\x04","\x7f","\xb8"),
	HX_HCSTRING("closureBlockBody_initialized","\xa9","\xd2","\x5d","\x13"),
	HX_HCSTRING("closureBlockBody","\x94","\x21","\xce","\xd5"),
	HX_HCSTRING("closureSingleExpr_initialized","\x4d","\xd4","\x9a","\x6b"),
	HX_HCSTRING("closureSingleExpr","\x38","\x3d","\x7e","\x69"),
	HX_HCSTRING("destroyHml","\xed","\xac","\x13","\xae"),
	HX_HCSTRING("set_simpleClicked","\xf8","\x47","\x5f","\xcc"),
	HX_HCSTRING("get_simpleClicked","\xec","\x6f","\xf1","\xa8"),
	HX_HCSTRING("set_closureBlockClicked","\x98","\x42","\xd2","\x44"),
	HX_HCSTRING("get_closureBlockClicked","\x8c","\xd9","\x70","\x42"),
	HX_HCSTRING("set_closureSingleExprClicked","\xcc","\x59","\x78","\x76"),
	HX_HCSTRING("get_closureSingleExprClicked","\x58","\x0e","\x4e","\x73"),
	HX_HCSTRING("set_simple","\x6f","\x12","\x84","\xac"),
	HX_HCSTRING("get_simple","\xfb","\x73","\x06","\xa9"),
	HX_HCSTRING("set_closureBlockBody","\x11","\x3e","\xf0","\xc0"),
	HX_HCSTRING("get_closureBlockBody","\x9d","\x86","\x38","\xf4"),
	HX_HCSTRING("set_closureSingleExpr","\x1b","\x0e","\x35","\x3c"),
	HX_HCSTRING("get_closureSingleExpr","\x0f","\x40","\x2c","\xe8"),
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
	__mClass->mName = HX_HCSTRING("Signal","\x88","\xa2","\x1a","\xe9");
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

