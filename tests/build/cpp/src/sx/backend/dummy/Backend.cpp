#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_Backend
#include <sx/backend/dummy/Backend.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_Point
#include <sx/backend/dummy/Point.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IBackend
#include <sx/backend/interfaces/IBackend.h>
#endif
#ifndef INCLUDED_sx_exceptions_NotChildException
#include <sx/exceptions/NotChildException.h>
#endif
#ifndef INCLUDED_sx_exceptions_OutOfBoundsException
#include <sx/exceptions/OutOfBoundsException.h>
#endif
#ifndef INCLUDED_sx_exceptions_SxException
#include <sx/exceptions/SxException.h>
#endif
#ifndef INCLUDED_sx_properties_displaylist_ArrayDisplayList
#include <sx/properties/displaylist/ArrayDisplayList.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
namespace sx{
namespace backend{
namespace dummy{

Void Backend_obj::__construct(::sx::widgets::Widget widget)
{
HX_STACK_FRAME("sx.backend.dummy.Backend","new",0xbb17d5bd,"sx.backend.dummy.Backend.new","sx/backend/dummy/Backend.hx",24,0xd0d86896)
HX_STACK_THIS(this)
HX_STACK_ARG(widget,"widget")
{
	HX_STACK_LINE(25)
	::sx::properties::displaylist::ArrayDisplayList tmp = ::sx::properties::displaylist::ArrayDisplayList_obj::__new(widget);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	this->__node = tmp;
}
;
	return null();
}

//Backend_obj::~Backend_obj() { }

Dynamic Backend_obj::__CreateEmpty() { return  new Backend_obj; }
hx::ObjectPtr< Backend_obj > Backend_obj::__new(::sx::widgets::Widget widget)
{  hx::ObjectPtr< Backend_obj > _result_ = new Backend_obj();
	_result_->__construct(widget);
	return _result_;}

Dynamic Backend_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Backend_obj > _result_ = new Backend_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Backend_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::sx::backend::interfaces::IBackend_obj)) return operator ::sx::backend::interfaces::IBackend_obj *();
	return super::__ToInterface(inType);
}

Backend_obj::operator ::sx::backend::interfaces::IBackend_obj *()
	{ return new ::sx::backend::interfaces::IBackend_delegate_< Backend_obj >(this); }
Void Backend_obj::addWidget( ::sx::widgets::Widget child){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","addWidget",0x3078cde2,"sx.backend.dummy.Backend.addWidget","sx/backend/dummy/Backend.hx",34,0xd0d86896)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(34)
		::sx::properties::displaylist::ArrayDisplayList tmp = this->__node;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		::sx::properties::displaylist::ArrayDisplayList _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(34)
		::sx::properties::displaylist::ArrayDisplayList tmp1 = child->backend->__node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		::sx::properties::displaylist::ArrayDisplayList child1 = tmp1;		HX_STACK_VAR(child1,"child1");
		HX_STACK_LINE(34)
		bool tmp2 = (child1->parent != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		if ((tmp2)){
			HX_STACK_LINE(34)
			::sx::properties::displaylist::ArrayDisplayList _this1 = child1->parent;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(34)
			bool tmp3 = (child1->parent == _this1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			if ((tmp3)){
				HX_STACK_LINE(34)
				::sx::properties::displaylist::ArrayDisplayList tmp4 = child1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(34)
				_this1->children->remove(tmp4);
				HX_STACK_LINE(34)
				child1->parent = null();
				HX_STACK_LINE(34)
				child1;
			}
			else{
				HX_STACK_LINE(34)
				Dynamic();
			}
		}
		HX_STACK_LINE(34)
		::sx::properties::displaylist::ArrayDisplayList tmp3 = child1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		_this->children->push(tmp3);
		HX_STACK_LINE(34)
		child1->parent = _this;
		HX_STACK_LINE(34)
		child1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Backend_obj,addWidget,(void))

Void Backend_obj::addWidgetAt( ::sx::widgets::Widget child,int index){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","addWidgetAt",0xdab1c375,"sx.backend.dummy.Backend.addWidgetAt","sx/backend/dummy/Backend.hx",47,0xd0d86896)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(47)
		::sx::properties::displaylist::ArrayDisplayList tmp = this->__node;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		::sx::properties::displaylist::ArrayDisplayList _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(47)
		::sx::properties::displaylist::ArrayDisplayList tmp1 = child->backend->__node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		::sx::properties::displaylist::ArrayDisplayList child1 = tmp1;		HX_STACK_VAR(child1,"child1");
		HX_STACK_LINE(47)
		bool tmp2 = (child1->parent != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		if ((tmp2)){
			HX_STACK_LINE(47)
			::sx::properties::displaylist::ArrayDisplayList _this1 = child1->parent;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(47)
			bool tmp3 = (child1->parent == _this1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(47)
			if ((tmp3)){
				HX_STACK_LINE(47)
				::sx::properties::displaylist::ArrayDisplayList tmp4 = child1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(47)
				_this1->children->remove(tmp4);
				HX_STACK_LINE(47)
				child1->parent = null();
				HX_STACK_LINE(47)
				child1;
			}
			else{
				HX_STACK_LINE(47)
				Dynamic();
			}
		}
		HX_STACK_LINE(47)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		::sx::properties::displaylist::ArrayDisplayList tmp4 = child1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		_this->children->insert(tmp3,tmp4);
		HX_STACK_LINE(47)
		child1->parent = _this;
		HX_STACK_LINE(47)
		child1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Backend_obj,addWidgetAt,(void))

Void Backend_obj::removeWidget( ::sx::widgets::Widget child){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","removeWidget",0xd741322b,"sx.backend.dummy.Backend.removeWidget","sx/backend/dummy/Backend.hx",56,0xd0d86896)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(56)
		::sx::properties::displaylist::ArrayDisplayList tmp = this->__node;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		::sx::properties::displaylist::ArrayDisplayList _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(56)
		::sx::properties::displaylist::ArrayDisplayList tmp1 = child->backend->__node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		::sx::properties::displaylist::ArrayDisplayList child1 = tmp1;		HX_STACK_VAR(child1,"child1");
		HX_STACK_LINE(56)
		bool tmp2 = (child1->parent == _this);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		if ((tmp2)){
			HX_STACK_LINE(56)
			::sx::properties::displaylist::ArrayDisplayList tmp3 = child1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			_this->children->remove(tmp3);
			HX_STACK_LINE(56)
			child1->parent = null();
			HX_STACK_LINE(56)
			child1;
		}
		else{
			HX_STACK_LINE(56)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Backend_obj,removeWidget,(void))

::sx::widgets::Widget Backend_obj::removeWidgetAt( int index){
	HX_STACK_FRAME("sx.backend.dummy.Backend","removeWidgetAt",0x0f928bfe,"sx.backend.dummy.Backend.removeWidgetAt","sx/backend/dummy/Backend.hx",68,0xd0d86896)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(69)
	::sx::properties::displaylist::ArrayDisplayList tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		::sx::properties::displaylist::ArrayDisplayList tmp1 = this->__node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		::sx::properties::displaylist::ArrayDisplayList _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(69)
		int index1 = index;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(69)
		bool tmp2 = (index1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		if ((tmp2)){
			HX_STACK_LINE(69)
			int tmp3 = _this->children->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			int tmp4 = index1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			index1 = tmp5;
		}
		HX_STACK_LINE(69)
		bool tmp3 = (index1 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		if ((tmp4)){
			HX_STACK_LINE(69)
			int tmp6 = index1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(69)
			int tmp7 = _this->children->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(69)
			tmp5 = (tmp6 >= tmp8);
		}
		else{
			HX_STACK_LINE(69)
			tmp5 = true;
		}
		HX_STACK_LINE(69)
		if ((tmp5)){
			HX_STACK_LINE(69)
			tmp = null();
		}
		else{
			HX_STACK_LINE(69)
			int tmp6 = index1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(69)
			::sx::properties::displaylist::ArrayDisplayList tmp7 = _this->children->splice(tmp6,(int)1)->__get((int)0).StaticCast< ::sx::properties::displaylist::ArrayDisplayList >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			::sx::properties::displaylist::ArrayDisplayList removed = tmp7;		HX_STACK_VAR(removed,"removed");
			HX_STACK_LINE(69)
			removed->parent = null();
			HX_STACK_LINE(69)
			tmp = removed;
		}
	}
	HX_STACK_LINE(69)
	::sx::properties::displaylist::ArrayDisplayList removed = tmp;		HX_STACK_VAR(removed,"removed");
	HX_STACK_LINE(71)
	bool tmp1 = (removed == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	::sx::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	if ((tmp1)){
		HX_STACK_LINE(71)
		tmp2 = null();
	}
	else{
		HX_STACK_LINE(71)
		tmp2 = removed->widget;
	}
	HX_STACK_LINE(71)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Backend_obj,removeWidgetAt,return )

int Backend_obj::getWidgetIndex( ::sx::widgets::Widget child){
	HX_STACK_FRAME("sx.backend.dummy.Backend","getWidgetIndex",0xe530f57b,"sx.backend.dummy.Backend.getWidgetIndex","sx/backend/dummy/Backend.hx",79,0xd0d86896)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(80)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		::sx::properties::displaylist::ArrayDisplayList tmp1 = this->__node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		::sx::properties::displaylist::ArrayDisplayList tmp2 = child->backend->__node;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		int tmp3 = tmp1->children->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		int index = tmp3;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(80)
		bool tmp4 = (index < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		if ((tmp4)){
			HX_STACK_LINE(80)
			Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("ArrayDisplayList.hx","\x57","\x12","\x57","\xd7"),166,HX_HCSTRING("sx.properties.displaylist.ArrayDisplayList","\xe7","\x49","\xcd","\x5c"),HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(80)
			::sx::exceptions::NotChildException tmp6 = ::sx::exceptions::NotChildException_obj::__new(null(),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(80)
			HX_STACK_DO_THROW(tmp6);
		}
		HX_STACK_LINE(80)
		tmp = index;
	}
	HX_STACK_LINE(80)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Backend_obj,getWidgetIndex,return )

int Backend_obj::setWidgetIndex( ::sx::widgets::Widget child,int index){
	HX_STACK_FRAME("sx.backend.dummy.Backend","setWidgetIndex",0x0550ddef,"sx.backend.dummy.Backend.setWidgetIndex","sx/backend/dummy/Backend.hx",94,0xd0d86896)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(95)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		::sx::properties::displaylist::ArrayDisplayList tmp1 = this->__node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		::sx::properties::displaylist::ArrayDisplayList _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(95)
		::sx::properties::displaylist::ArrayDisplayList tmp2 = child->backend->__node;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		::sx::properties::displaylist::ArrayDisplayList child1 = tmp2;		HX_STACK_VAR(child1,"child1");
		HX_STACK_LINE(95)
		int index1 = index;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(95)
		::sx::properties::displaylist::ArrayDisplayList tmp3 = child1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		int tmp4 = _this->children->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		int currentIndex = tmp4;		HX_STACK_VAR(currentIndex,"currentIndex");
		HX_STACK_LINE(95)
		bool tmp5 = (currentIndex < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		if ((tmp5)){
			HX_STACK_LINE(95)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("ArrayDisplayList.hx","\x57","\x12","\x57","\xd7"),186,HX_HCSTRING("sx.properties.displaylist.ArrayDisplayList","\xe7","\x49","\xcd","\x5c"),HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(95)
			::sx::exceptions::NotChildException tmp7 = ::sx::exceptions::NotChildException_obj::__new(null(),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(95)
			HX_STACK_DO_THROW(tmp7);
		}
		HX_STACK_LINE(95)
		bool tmp6 = (index1 < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		if ((tmp6)){
			HX_STACK_LINE(95)
			int tmp7 = _this->children->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(95)
			int tmp8 = index1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(95)
			int tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(95)
			index1 = tmp9;
		}
		HX_STACK_LINE(95)
		bool tmp7 = (index1 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(95)
		if ((tmp7)){
			HX_STACK_LINE(95)
			index1 = (int)0;
		}
		else{
			HX_STACK_LINE(95)
			int tmp8 = index1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(95)
			int tmp9 = _this->children->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(95)
			bool tmp10 = (tmp8 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(95)
			if ((tmp10)){
				HX_STACK_LINE(95)
				int tmp11 = _this->children->length;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(95)
				int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(95)
				index1 = tmp12;
			}
		}
		HX_STACK_LINE(95)
		bool tmp8 = (index1 != currentIndex);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(95)
		if ((tmp8)){
			HX_STACK_LINE(95)
			::sx::properties::displaylist::ArrayDisplayList tmp9 = child1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(95)
			_this->children->remove(tmp9);
			HX_STACK_LINE(95)
			int tmp10 = index1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(95)
			::sx::properties::displaylist::ArrayDisplayList tmp11 = child1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(95)
			_this->children->insert(tmp10,tmp11);
			HX_STACK_LINE(95)
			tmp = index1;
		}
		else{
			HX_STACK_LINE(95)
			tmp = currentIndex;
		}
	}
	HX_STACK_LINE(95)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(Backend_obj,setWidgetIndex,return )

::sx::widgets::Widget Backend_obj::getWidgetAt( int index){
	HX_STACK_FRAME("sx.backend.dummy.Backend","getWidgetAt",0xcf494eea,"sx.backend.dummy.Backend.getWidgetAt","sx/backend/dummy/Backend.hx",107,0xd0d86896)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(108)
	::sx::properties::displaylist::ArrayDisplayList tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		::sx::properties::displaylist::ArrayDisplayList tmp1 = this->__node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		::sx::properties::displaylist::ArrayDisplayList _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(108)
		int index1 = index;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(108)
		bool tmp2 = (index1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		if ((tmp2)){
			HX_STACK_LINE(108)
			int tmp3 = _this->children->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			int tmp4 = index1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(108)
			int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(108)
			index1 = tmp5;
		}
		HX_STACK_LINE(108)
		bool tmp3 = (index1 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		if ((tmp4)){
			HX_STACK_LINE(108)
			int tmp6 = index1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(108)
			int tmp7 = _this->children->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(108)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(108)
			tmp5 = (tmp6 >= tmp8);
		}
		else{
			HX_STACK_LINE(108)
			tmp5 = true;
		}
		HX_STACK_LINE(108)
		if ((tmp5)){
			HX_STACK_LINE(108)
			tmp = null();
		}
		else{
			HX_STACK_LINE(108)
			tmp = _this->children->__get(index1).StaticCast< ::sx::properties::displaylist::ArrayDisplayList >();
		}
	}
	HX_STACK_LINE(108)
	::sx::properties::displaylist::ArrayDisplayList childNode = tmp;		HX_STACK_VAR(childNode,"childNode");
	HX_STACK_LINE(110)
	bool tmp1 = (childNode == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(110)
	::sx::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(110)
	if ((tmp1)){
		HX_STACK_LINE(110)
		tmp2 = null();
	}
	else{
		HX_STACK_LINE(110)
		tmp2 = childNode->widget;
	}
	HX_STACK_LINE(110)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Backend_obj,getWidgetAt,return )

Void Backend_obj::swapWidgets( ::sx::widgets::Widget child1,::sx::widgets::Widget child2){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","swapWidgets",0xa74f0c39,"sx.backend.dummy.Backend.swapWidgets","sx/backend/dummy/Backend.hx",119,0xd0d86896)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(119)
		::sx::properties::displaylist::ArrayDisplayList tmp = this->__node;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		::sx::properties::displaylist::ArrayDisplayList _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(119)
		::sx::properties::displaylist::ArrayDisplayList tmp1 = child1->backend->__node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		::sx::properties::displaylist::ArrayDisplayList child11 = tmp1;		HX_STACK_VAR(child11,"child11");
		HX_STACK_LINE(119)
		::sx::properties::displaylist::ArrayDisplayList tmp2 = child2->backend->__node;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		::sx::properties::displaylist::ArrayDisplayList child21 = tmp2;		HX_STACK_VAR(child21,"child21");
		HX_STACK_LINE(119)
		::sx::properties::displaylist::ArrayDisplayList tmp3 = child11;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		int tmp4 = _this->children->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		int index1 = tmp4;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(119)
		::sx::properties::displaylist::ArrayDisplayList tmp5 = child21;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(119)
		int tmp6 = _this->children->indexOf(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(119)
		int index2 = tmp6;		HX_STACK_VAR(index2,"index2");
		HX_STACK_LINE(119)
		bool tmp7 = (index1 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(119)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(119)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(119)
		if ((tmp8)){
			HX_STACK_LINE(119)
			tmp9 = (index2 < (int)0);
		}
		else{
			HX_STACK_LINE(119)
			tmp9 = true;
		}
		HX_STACK_LINE(119)
		if ((tmp9)){
			HX_STACK_LINE(119)
			Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("ArrayDisplayList.hx","\x57","\x12","\x57","\xd7"),235,HX_HCSTRING("sx.properties.displaylist.ArrayDisplayList","\xe7","\x49","\xcd","\x5c"),HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(119)
			::sx::exceptions::NotChildException tmp11 = ::sx::exceptions::NotChildException_obj::__new(null(),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(119)
			HX_STACK_DO_THROW(tmp11);
		}
		HX_STACK_LINE(119)
		::sx::properties::displaylist::ArrayDisplayList tmp10 = child21;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(119)
		_this->children[index1] = tmp10;
		HX_STACK_LINE(119)
		::sx::properties::displaylist::ArrayDisplayList tmp11 = child11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(119)
		_this->children[index2] = tmp11;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Backend_obj,swapWidgets,(void))

Void Backend_obj::swapWidgetsAt( int index1,int index2){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","swapWidgetsAt",0x6255858c,"sx.backend.dummy.Backend.swapWidgetsAt","sx/backend/dummy/Backend.hx",130,0xd0d86896)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index1,"index1")
		HX_STACK_ARG(index2,"index2")
		HX_STACK_LINE(130)
		::sx::properties::displaylist::ArrayDisplayList tmp = this->__node;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		::sx::properties::displaylist::ArrayDisplayList _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(130)
		int index11 = index1;		HX_STACK_VAR(index11,"index11");
		HX_STACK_LINE(130)
		int index21 = index2;		HX_STACK_VAR(index21,"index21");
		HX_STACK_LINE(130)
		bool tmp1 = (index11 < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		if ((tmp1)){
			HX_STACK_LINE(130)
			int tmp2 = _this->children->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(130)
			int tmp3 = index11;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(130)
			int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(130)
			index11 = tmp4;
		}
		HX_STACK_LINE(130)
		bool tmp2 = (index21 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		if ((tmp2)){
			HX_STACK_LINE(130)
			int tmp3 = _this->children->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(130)
			int tmp4 = index21;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(130)
			int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(130)
			index21 = tmp5;
		}
		HX_STACK_LINE(130)
		bool tmp3 = (index11 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(130)
		if ((tmp5)){
			HX_STACK_LINE(130)
			int tmp7 = index11;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(130)
			int tmp8 = _this->children->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(130)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(130)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(130)
			tmp6 = (tmp7 >= tmp10);
		}
		else{
			HX_STACK_LINE(130)
			tmp6 = true;
		}
		HX_STACK_LINE(130)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(130)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(130)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(130)
		if ((tmp8)){
			HX_STACK_LINE(130)
			tmp9 = (index21 < (int)0);
		}
		else{
			HX_STACK_LINE(130)
			tmp9 = true;
		}
		HX_STACK_LINE(130)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(130)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(130)
		if ((tmp10)){
			HX_STACK_LINE(130)
			int tmp12 = index21;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(130)
			int tmp13 = _this->children->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(130)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(130)
			tmp11 = (tmp12 > tmp14);
		}
		else{
			HX_STACK_LINE(130)
			tmp11 = true;
		}
		HX_STACK_LINE(130)
		if ((tmp11)){
			HX_STACK_LINE(130)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("ArrayDisplayList.hx","\x57","\x12","\x57","\xd7"),255,HX_HCSTRING("sx.properties.displaylist.ArrayDisplayList","\xe7","\x49","\xcd","\x5c"),HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(130)
			::sx::exceptions::OutOfBoundsException tmp13 = ::sx::exceptions::OutOfBoundsException_obj::__new(HX_HCSTRING("Provided index does not exist in display list of this widget.","\xb6","\xd3","\xa1","\x10"),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(130)
			HX_STACK_DO_THROW(tmp13);
		}
		HX_STACK_LINE(130)
		::sx::properties::displaylist::ArrayDisplayList tmp12 = _this->children->__get(index11).StaticCast< ::sx::properties::displaylist::ArrayDisplayList >();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(130)
		::sx::properties::displaylist::ArrayDisplayList child = tmp12;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(130)
		::sx::properties::displaylist::ArrayDisplayList tmp13 = _this->children->__get(index21).StaticCast< ::sx::properties::displaylist::ArrayDisplayList >();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(130)
		_this->children[index11] = tmp13;
		HX_STACK_LINE(130)
		::sx::properties::displaylist::ArrayDisplayList tmp14 = child;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(130)
		_this->children[index21] = tmp14;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Backend_obj,swapWidgetsAt,(void))

::sx::backend::dummy::Point Backend_obj::widgetGlobalToLocal( ::sx::backend::dummy::Point point){
	HX_STACK_FRAME("sx.backend.dummy.Backend","widgetGlobalToLocal",0xb98fb3c6,"sx.backend.dummy.Backend.widgetGlobalToLocal","sx/backend/dummy/Backend.hx",138,0xd0d86896)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(139)
	::sx::backend::dummy::Point tmp = ::sx::backend::dummy::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Backend_obj,widgetGlobalToLocal,return )

::sx::backend::dummy::Point Backend_obj::widgetLocalToGlobal( ::sx::backend::dummy::Point point){
	HX_STACK_FRAME("sx.backend.dummy.Backend","widgetLocalToGlobal",0x95cca6c2,"sx.backend.dummy.Backend.widgetLocalToGlobal","sx/backend/dummy/Backend.hx",147,0xd0d86896)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(148)
	::sx::backend::dummy::Point tmp = ::sx::backend::dummy::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Backend_obj,widgetLocalToGlobal,return )

Void Backend_obj::widgetOriginChanged( ){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","widgetOriginChanged",0xbf95cca7,"sx.backend.dummy.Backend.widgetOriginChanged","sx/backend/dummy/Backend.hx",156,0xd0d86896)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Backend_obj,widgetOriginChanged,(void))

Void Backend_obj::widgetOffsetChanged( ){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","widgetOffsetChanged",0x36e80e9a,"sx.backend.dummy.Backend.widgetOffsetChanged","sx/backend/dummy/Backend.hx",165,0xd0d86896)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Backend_obj,widgetOffsetChanged,(void))

Void Backend_obj::widgetResized( ){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","widgetResized",0xee5e5029,"sx.backend.dummy.Backend.widgetResized","sx/backend/dummy/Backend.hx",174,0xd0d86896)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Backend_obj,widgetResized,(void))

Void Backend_obj::widgetMoved( ){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","widgetMoved",0x0ffd102c,"sx.backend.dummy.Backend.widgetMoved","sx/backend/dummy/Backend.hx",183,0xd0d86896)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Backend_obj,widgetMoved,(void))

Void Backend_obj::widgetRotated( ){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","widgetRotated",0x7c083de2,"sx.backend.dummy.Backend.widgetRotated","sx/backend/dummy/Backend.hx",192,0xd0d86896)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Backend_obj,widgetRotated,(void))

Void Backend_obj::widgetScaledX( ){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","widgetScaledX",0xeff250b7,"sx.backend.dummy.Backend.widgetScaledX","sx/backend/dummy/Backend.hx",200,0xd0d86896)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Backend_obj,widgetScaledX,(void))

Void Backend_obj::widgetScaledY( ){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","widgetScaledY",0xeff250b8,"sx.backend.dummy.Backend.widgetScaledY","sx/backend/dummy/Backend.hx",209,0xd0d86896)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Backend_obj,widgetScaledY,(void))

Void Backend_obj::widgetAlphaChanged( ){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","widgetAlphaChanged",0xe378165d,"sx.backend.dummy.Backend.widgetAlphaChanged","sx/backend/dummy/Backend.hx",218,0xd0d86896)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Backend_obj,widgetAlphaChanged,(void))

Void Backend_obj::widgetVisibilityChanged( ){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","widgetVisibilityChanged",0xb85b3ebb,"sx.backend.dummy.Backend.widgetVisibilityChanged","sx/backend/dummy/Backend.hx",227,0xd0d86896)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Backend_obj,widgetVisibilityChanged,(void))

Void Backend_obj::widgetOverflowChanged( ){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","widgetOverflowChanged",0xd535170b,"sx.backend.dummy.Backend.widgetOverflowChanged","sx/backend/dummy/Backend.hx",236,0xd0d86896)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Backend_obj,widgetOverflowChanged,(void))

Void Backend_obj::widgetSkinChanged( ){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","widgetSkinChanged",0xd52540b0,"sx.backend.dummy.Backend.widgetSkinChanged","sx/backend/dummy/Backend.hx",245,0xd0d86896)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Backend_obj,widgetSkinChanged,(void))

Void Backend_obj::widgetDisposed( ){
{
		HX_STACK_FRAME("sx.backend.dummy.Backend","widgetDisposed",0x2a4ec88c,"sx.backend.dummy.Backend.widgetDisposed","sx/backend/dummy/Backend.hx",255,0xd0d86896)
		HX_STACK_THIS(this)
		HX_STACK_LINE(255)
		this->__node = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Backend_obj,widgetDisposed,(void))


Backend_obj::Backend_obj()
{
}

void Backend_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Backend);
	HX_MARK_MEMBER_NAME(__node,"__node");
	HX_MARK_END_CLASS();
}

void Backend_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__node,"__node");
}

Dynamic Backend_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__node") ) { return __node; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addWidget") ) { return addWidget_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addWidgetAt") ) { return addWidgetAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidgetAt") ) { return getWidgetAt_dyn(); }
		if (HX_FIELD_EQ(inName,"swapWidgets") ) { return swapWidgets_dyn(); }
		if (HX_FIELD_EQ(inName,"widgetMoved") ) { return widgetMoved_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeWidget") ) { return removeWidget_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"swapWidgetsAt") ) { return swapWidgetsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"widgetResized") ) { return widgetResized_dyn(); }
		if (HX_FIELD_EQ(inName,"widgetRotated") ) { return widgetRotated_dyn(); }
		if (HX_FIELD_EQ(inName,"widgetScaledX") ) { return widgetScaledX_dyn(); }
		if (HX_FIELD_EQ(inName,"widgetScaledY") ) { return widgetScaledY_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"removeWidgetAt") ) { return removeWidgetAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidgetIndex") ) { return getWidgetIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"setWidgetIndex") ) { return setWidgetIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"widgetDisposed") ) { return widgetDisposed_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"widgetSkinChanged") ) { return widgetSkinChanged_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"widgetAlphaChanged") ) { return widgetAlphaChanged_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"widgetGlobalToLocal") ) { return widgetGlobalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"widgetLocalToGlobal") ) { return widgetLocalToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"widgetOriginChanged") ) { return widgetOriginChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"widgetOffsetChanged") ) { return widgetOffsetChanged_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"widgetOverflowChanged") ) { return widgetOverflowChanged_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"widgetVisibilityChanged") ) { return widgetVisibilityChanged_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Backend_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__node") ) { __node=inValue.Cast< ::sx::properties::displaylist::ArrayDisplayList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Backend_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Backend_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__node","\x22","\x6d","\x02","\xf8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sx::properties::displaylist::ArrayDisplayList*/ ,(int)offsetof(Backend_obj,__node),HX_HCSTRING("__node","\x22","\x6d","\x02","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__node","\x22","\x6d","\x02","\xf8"),
	HX_HCSTRING("addWidget","\xc5","\xe4","\x16","\x04"),
	HX_HCSTRING("addWidgetAt","\x18","\x99","\x2d","\x63"),
	HX_HCSTRING("removeWidget","\x28","\x4b","\x20","\xbb"),
	HX_HCSTRING("removeWidgetAt","\x3b","\x9e","\x27","\xfc"),
	HX_HCSTRING("getWidgetIndex","\xb8","\x07","\xc6","\xd1"),
	HX_HCSTRING("setWidgetIndex","\x2c","\xf0","\xe5","\xf1"),
	HX_HCSTRING("getWidgetAt","\x8d","\x24","\xc5","\x57"),
	HX_HCSTRING("swapWidgets","\xdc","\xe1","\xca","\x2f"),
	HX_HCSTRING("swapWidgetsAt","\xef","\x49","\xac","\xe1"),
	HX_HCSTRING("widgetGlobalToLocal","\x69","\x64","\x1e","\xe1"),
	HX_HCSTRING("widgetLocalToGlobal","\x65","\x57","\x5b","\xbd"),
	HX_HCSTRING("widgetOriginChanged","\x4a","\x7d","\x24","\xe7"),
	HX_HCSTRING("widgetOffsetChanged","\x3d","\xbf","\x76","\x5e"),
	HX_HCSTRING("widgetResized","\x8c","\x14","\xb5","\x6d"),
	HX_HCSTRING("widgetMoved","\xcf","\xe5","\x78","\x98"),
	HX_HCSTRING("widgetRotated","\x45","\x02","\x5f","\xfb"),
	HX_HCSTRING("widgetScaledX","\x1a","\x15","\x49","\x6f"),
	HX_HCSTRING("widgetScaledY","\x1b","\x15","\x49","\x6f"),
	HX_HCSTRING("widgetAlphaChanged","\x1a","\x8b","\x6f","\x94"),
	HX_HCSTRING("widgetVisibilityChanged","\xde","\x7c","\x52","\x1f"),
	HX_HCSTRING("widgetOverflowChanged","\x6e","\x76","\x4b","\x02"),
	HX_HCSTRING("widgetSkinChanged","\x93","\x72","\xd9","\x41"),
	HX_HCSTRING("widgetDisposed","\xc9","\xda","\xe3","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Backend_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Backend_obj::__mClass,"__mClass");
};

#endif

hx::Class Backend_obj::__mClass;

void Backend_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.backend.dummy.Backend","\x4b","\x33","\x39","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Backend_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Backend_obj >;
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
} // end namespace backend
} // end namespace dummy
