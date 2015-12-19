#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
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
namespace properties{
namespace displaylist{

Void ArrayDisplayList_obj::__construct(::sx::widgets::Widget widget)
{
HX_STACK_FRAME("sx.properties.displaylist.ArrayDisplayList","new",0xa7f16a59,"sx.properties.displaylist.ArrayDisplayList.new","sx/properties/displaylist/ArrayDisplayList.hx",30,0x0ff62e36)
HX_STACK_THIS(this)
HX_STACK_ARG(widget,"widget")
{
	HX_STACK_LINE(31)
	this->widget = widget;
	HX_STACK_LINE(32)
	this->children = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//ArrayDisplayList_obj::~ArrayDisplayList_obj() { }

Dynamic ArrayDisplayList_obj::__CreateEmpty() { return  new ArrayDisplayList_obj; }
hx::ObjectPtr< ArrayDisplayList_obj > ArrayDisplayList_obj::__new(::sx::widgets::Widget widget)
{  hx::ObjectPtr< ArrayDisplayList_obj > _result_ = new ArrayDisplayList_obj();
	_result_->__construct(widget);
	return _result_;}

Dynamic ArrayDisplayList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayDisplayList_obj > _result_ = new ArrayDisplayList_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::sx::properties::displaylist::ArrayDisplayList ArrayDisplayList_obj::addChild( ::sx::properties::displaylist::ArrayDisplayList child){
	HX_STACK_FRAME("sx.properties.displaylist.ArrayDisplayList","addChild",0x876b6f22,"sx.properties.displaylist.ArrayDisplayList.addChild","sx/properties/displaylist/ArrayDisplayList.hx",42,0x0ff62e36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(43)
	bool tmp = (child->parent != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	if ((tmp)){
		HX_STACK_LINE(43)
		::sx::properties::displaylist::ArrayDisplayList _this = child->parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(43)
		bool tmp1 = (child->parent == _this);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		if ((tmp1)){
			HX_STACK_LINE(43)
			::sx::properties::displaylist::ArrayDisplayList tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			_this->children->remove(tmp2);
			HX_STACK_LINE(43)
			child->parent = null();
			HX_STACK_LINE(43)
			child;
		}
		else{
			HX_STACK_LINE(43)
			Dynamic();
		}
	}
	HX_STACK_LINE(45)
	::sx::properties::displaylist::ArrayDisplayList tmp1 = child;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	this->children->push(tmp1);
	HX_STACK_LINE(46)
	child->parent = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(48)
	::sx::properties::displaylist::ArrayDisplayList tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayDisplayList_obj,addChild,return )

::sx::properties::displaylist::ArrayDisplayList ArrayDisplayList_obj::addChildAt( ::sx::properties::displaylist::ArrayDisplayList child,int index){
	HX_STACK_FRAME("sx.properties.displaylist.ArrayDisplayList","addChildAt",0xcc7f34b5,"sx.properties.displaylist.ArrayDisplayList.addChildAt","sx/properties/displaylist/ArrayDisplayList.hx",62,0x0ff62e36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(63)
	bool tmp = (child->parent != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	if ((tmp)){
		HX_STACK_LINE(63)
		::sx::properties::displaylist::ArrayDisplayList _this = child->parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(63)
		bool tmp1 = (child->parent == _this);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		if ((tmp1)){
			HX_STACK_LINE(63)
			::sx::properties::displaylist::ArrayDisplayList tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(63)
			_this->children->remove(tmp2);
			HX_STACK_LINE(63)
			child->parent = null();
			HX_STACK_LINE(63)
			child;
		}
		else{
			HX_STACK_LINE(63)
			Dynamic();
		}
	}
	HX_STACK_LINE(65)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	::sx::properties::displaylist::ArrayDisplayList tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	this->children->insert(tmp1,tmp2);
	HX_STACK_LINE(66)
	child->parent = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(68)
	::sx::properties::displaylist::ArrayDisplayList tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayDisplayList_obj,addChildAt,return )

::sx::properties::displaylist::ArrayDisplayList ArrayDisplayList_obj::removeChild( ::sx::properties::displaylist::ArrayDisplayList child){
	HX_STACK_FRAME("sx.properties.displaylist.ArrayDisplayList","removeChild",0xc51b41b1,"sx.properties.displaylist.ArrayDisplayList.removeChild","sx/properties/displaylist/ArrayDisplayList.hx",79,0x0ff62e36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(80)
	bool tmp = (child->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	if ((tmp)){
		HX_STACK_LINE(81)
		::sx::properties::displaylist::ArrayDisplayList tmp1 = child;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		this->children->remove(tmp1);
		HX_STACK_LINE(82)
		child->parent = null();
		HX_STACK_LINE(84)
		::sx::properties::displaylist::ArrayDisplayList tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		return tmp2;
	}
	else{
		HX_STACK_LINE(86)
		return null();
	}
	HX_STACK_LINE(80)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayDisplayList_obj,removeChild,return )

::sx::properties::displaylist::ArrayDisplayList ArrayDisplayList_obj::removeChildAt( int index){
	HX_STACK_FRAME("sx.properties.displaylist.ArrayDisplayList","removeChildAt",0xb3b40904,"sx.properties.displaylist.ArrayDisplayList.removeChildAt","sx/properties/displaylist/ArrayDisplayList.hx",99,0x0ff62e36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(100)
	bool tmp = (index < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	if ((tmp)){
		HX_STACK_LINE(100)
		int tmp1 = this->children->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		index = tmp3;
	}
	HX_STACK_LINE(102)
	bool tmp1 = (index < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(102)
	if ((tmp2)){
		HX_STACK_LINE(102)
		int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(102)
		int tmp5 = this->children->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(102)
		tmp3 = (tmp4 >= tmp6);
	}
	else{
		HX_STACK_LINE(102)
		tmp3 = true;
	}
	HX_STACK_LINE(102)
	if ((tmp3)){
		HX_STACK_LINE(104)
		return null();
	}
	else{
		HX_STACK_LINE(107)
		int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		::sx::properties::displaylist::ArrayDisplayList tmp5 = this->children->splice(tmp4,(int)1)->__get((int)0).StaticCast< ::sx::properties::displaylist::ArrayDisplayList >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		::sx::properties::displaylist::ArrayDisplayList removed = tmp5;		HX_STACK_VAR(removed,"removed");
		HX_STACK_LINE(108)
		removed->parent = null();
		HX_STACK_LINE(110)
		::sx::properties::displaylist::ArrayDisplayList tmp6 = removed;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(110)
		return tmp6;
	}
	HX_STACK_LINE(102)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayDisplayList_obj,removeChildAt,return )

int ArrayDisplayList_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(-1);
	HX_STACK_FRAME("sx.properties.displaylist.ArrayDisplayList","removeChildren",0x89f8fc4a,"sx.properties.displaylist.ArrayDisplayList.removeChildren","sx/properties/displaylist/ArrayDisplayList.hx",123,0x0ff62e36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(124)
		bool tmp = (beginIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		if ((tmp)){
			HX_STACK_LINE(124)
			int tmp1 = this->children->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(124)
			int tmp2 = beginIndex;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			beginIndex = tmp3;
		}
		HX_STACK_LINE(125)
		bool tmp1 = (beginIndex < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		if ((tmp1)){
			HX_STACK_LINE(125)
			beginIndex = (int)0;
		}
		HX_STACK_LINE(126)
		bool tmp2 = (endIndex < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		if ((tmp2)){
			HX_STACK_LINE(126)
			int tmp3 = this->children->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			int tmp4 = endIndex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			endIndex = tmp5;
		}
		HX_STACK_LINE(128)
		int tmp3 = beginIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		int tmp4 = this->children->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(128)
		bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(128)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(128)
		if ((tmp6)){
			HX_STACK_LINE(128)
			tmp7 = (endIndex < beginIndex);
		}
		else{
			HX_STACK_LINE(128)
			tmp7 = true;
		}
		HX_STACK_LINE(128)
		if ((tmp7)){
			HX_STACK_LINE(128)
			return (int)0;
		}
		HX_STACK_LINE(130)
		int tmp8 = beginIndex;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(130)
		int tmp9 = (endIndex - beginIndex);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(130)
		int tmp10 = (tmp9 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(130)
		Array< ::Dynamic > removed = this->children->splice(tmp8,tmp10);		HX_STACK_VAR(removed,"removed");
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(131)
			while((true)){
				HX_STACK_LINE(131)
				bool tmp11 = (_g < removed->length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(131)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(131)
				if ((tmp12)){
					HX_STACK_LINE(131)
					break;
				}
				HX_STACK_LINE(131)
				::sx::properties::displaylist::ArrayDisplayList tmp13 = removed->__get(_g).StaticCast< ::sx::properties::displaylist::ArrayDisplayList >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(131)
				::sx::properties::displaylist::ArrayDisplayList node = tmp13;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(131)
				++(_g);
				HX_STACK_LINE(132)
				node->parent = null();
			}
		}
		HX_STACK_LINE(135)
		int tmp11 = removed->length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(135)
		return tmp11;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayDisplayList_obj,removeChildren,return )

bool ArrayDisplayList_obj::contains( ::sx::properties::displaylist::ArrayDisplayList child){
	HX_STACK_FRAME("sx.properties.displaylist.ArrayDisplayList","contains",0xf4cff986,"sx.properties.displaylist.ArrayDisplayList.contains","sx/properties/displaylist/ArrayDisplayList.hx",143,0x0ff62e36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(144)
	bool found = false;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(146)
	while((true)){
		HX_STACK_LINE(146)
		bool tmp = (child != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		if ((tmp1)){
			HX_STACK_LINE(146)
			break;
		}
		HX_STACK_LINE(147)
		bool tmp2 = (child == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		if ((tmp2)){
			HX_STACK_LINE(148)
			found = true;
			HX_STACK_LINE(149)
			break;
		}
		HX_STACK_LINE(151)
		child = child->parent;
	}
	HX_STACK_LINE(154)
	bool tmp = found;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayDisplayList_obj,contains,return )

int ArrayDisplayList_obj::getChildIndex( ::sx::properties::displaylist::ArrayDisplayList child){
	HX_STACK_FRAME("sx.properties.displaylist.ArrayDisplayList","getChildIndex",0x2d4f9345,"sx.properties.displaylist.ArrayDisplayList.getChildIndex","sx/properties/displaylist/ArrayDisplayList.hx",164,0x0ff62e36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(165)
	::sx::properties::displaylist::ArrayDisplayList tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	int tmp1 = this->children->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(166)
	bool tmp2 = (index < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	if ((tmp2)){
		HX_STACK_LINE(166)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("ArrayDisplayList.hx","\x57","\x12","\x57","\xd7"),166,HX_HCSTRING("sx.properties.displaylist.ArrayDisplayList","\xe7","\x49","\xcd","\x5c"),HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		::sx::exceptions::NotChildException tmp4 = ::sx::exceptions::NotChildException_obj::__new(null(),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(168)
	int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(168)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayDisplayList_obj,getChildIndex,return )

int ArrayDisplayList_obj::setChildIndex( ::sx::properties::displaylist::ArrayDisplayList child,int index){
	HX_STACK_FRAME("sx.properties.displaylist.ArrayDisplayList","setChildIndex",0x72557551,"sx.properties.displaylist.ArrayDisplayList.setChildIndex","sx/properties/displaylist/ArrayDisplayList.hx",184,0x0ff62e36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(185)
	::sx::properties::displaylist::ArrayDisplayList tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	int tmp1 = this->children->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	int currentIndex = tmp1;		HX_STACK_VAR(currentIndex,"currentIndex");
	HX_STACK_LINE(186)
	bool tmp2 = (currentIndex < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(186)
	if ((tmp2)){
		HX_STACK_LINE(186)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("ArrayDisplayList.hx","\x57","\x12","\x57","\xd7"),186,HX_HCSTRING("sx.properties.displaylist.ArrayDisplayList","\xe7","\x49","\xcd","\x5c"),HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(186)
		::sx::exceptions::NotChildException tmp4 = ::sx::exceptions::NotChildException_obj::__new(null(),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(186)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(188)
	bool tmp3 = (index < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(188)
	if ((tmp3)){
		HX_STACK_LINE(188)
		int tmp4 = this->children->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(188)
		int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(188)
		int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(188)
		index = tmp6;
	}
	HX_STACK_LINE(189)
	bool tmp4 = (index < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(189)
	if ((tmp4)){
		HX_STACK_LINE(190)
		index = (int)0;
	}
	else{
		HX_STACK_LINE(191)
		int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		int tmp6 = this->children->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		bool tmp7 = (tmp5 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(191)
		if ((tmp7)){
			HX_STACK_LINE(192)
			int tmp8 = this->children->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(192)
			int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(192)
			index = tmp9;
		}
	}
	HX_STACK_LINE(195)
	bool tmp5 = (index != currentIndex);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(195)
	if ((tmp5)){
		HX_STACK_LINE(196)
		::sx::properties::displaylist::ArrayDisplayList tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(196)
		this->children->remove(tmp6);
		HX_STACK_LINE(197)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		::sx::properties::displaylist::ArrayDisplayList tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(197)
		this->children->insert(tmp7,tmp8);
		HX_STACK_LINE(199)
		int tmp9 = index;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(199)
		return tmp9;
	}
	else{
		HX_STACK_LINE(201)
		int tmp6 = currentIndex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(201)
		return tmp6;
	}
	HX_STACK_LINE(195)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayDisplayList_obj,setChildIndex,return )

::sx::properties::displaylist::ArrayDisplayList ArrayDisplayList_obj::getChildAt( int index){
	HX_STACK_FRAME("sx.properties.displaylist.ArrayDisplayList","getChildAt",0xb4568ee0,"sx.properties.displaylist.ArrayDisplayList.getChildAt","sx/properties/displaylist/ArrayDisplayList.hx",214,0x0ff62e36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(215)
	bool tmp = (index < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	if ((tmp)){
		HX_STACK_LINE(215)
		int tmp1 = this->children->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		index = tmp3;
	}
	HX_STACK_LINE(217)
	bool tmp1 = (index < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(217)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(217)
	if ((tmp2)){
		HX_STACK_LINE(217)
		int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		int tmp5 = this->children->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		tmp3 = (tmp4 >= tmp6);
	}
	else{
		HX_STACK_LINE(217)
		tmp3 = true;
	}
	HX_STACK_LINE(217)
	if ((tmp3)){
		HX_STACK_LINE(218)
		return null();
	}
	else{
		HX_STACK_LINE(220)
		::sx::properties::displaylist::ArrayDisplayList tmp4 = this->children->__get(index).StaticCast< ::sx::properties::displaylist::ArrayDisplayList >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		return tmp4;
	}
	HX_STACK_LINE(217)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayDisplayList_obj,getChildAt,return )

Void ArrayDisplayList_obj::swapChildren( ::sx::properties::displaylist::ArrayDisplayList child1,::sx::properties::displaylist::ArrayDisplayList child2){
{
		HX_STACK_FRAME("sx.properties.displaylist.ArrayDisplayList","swapChildren",0x672929d9,"sx.properties.displaylist.ArrayDisplayList.swapChildren","sx/properties/displaylist/ArrayDisplayList.hx",231,0x0ff62e36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(232)
		::sx::properties::displaylist::ArrayDisplayList tmp = child1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		int tmp1 = this->children->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		int index1 = tmp1;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(233)
		::sx::properties::displaylist::ArrayDisplayList tmp2 = child2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(233)
		int tmp3 = this->children->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(233)
		int index2 = tmp3;		HX_STACK_VAR(index2,"index2");
		HX_STACK_LINE(235)
		bool tmp4 = (index1 < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(235)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(235)
		if ((tmp5)){
			HX_STACK_LINE(235)
			tmp6 = (index2 < (int)0);
		}
		else{
			HX_STACK_LINE(235)
			tmp6 = true;
		}
		HX_STACK_LINE(235)
		if ((tmp6)){
			HX_STACK_LINE(235)
			Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("ArrayDisplayList.hx","\x57","\x12","\x57","\xd7"),235,HX_HCSTRING("sx.properties.displaylist.ArrayDisplayList","\xe7","\x49","\xcd","\x5c"),HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(235)
			::sx::exceptions::NotChildException tmp8 = ::sx::exceptions::NotChildException_obj::__new(null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(235)
			HX_STACK_DO_THROW(tmp8);
		}
		HX_STACK_LINE(237)
		::sx::properties::displaylist::ArrayDisplayList tmp7 = child2;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(237)
		this->children[index1] = tmp7;
		HX_STACK_LINE(238)
		::sx::properties::displaylist::ArrayDisplayList tmp8 = child1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(238)
		this->children[index2] = tmp8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayDisplayList_obj,swapChildren,(void))

Void ArrayDisplayList_obj::swapChildrenAt( int index1,int index2){
{
		HX_STACK_FRAME("sx.properties.displaylist.ArrayDisplayList","swapChildrenAt",0x632a4b2c,"sx.properties.displaylist.ArrayDisplayList.swapChildrenAt","sx/properties/displaylist/ArrayDisplayList.hx",250,0x0ff62e36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index1,"index1")
		HX_STACK_ARG(index2,"index2")
		HX_STACK_LINE(251)
		bool tmp = (index1 < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		if ((tmp)){
			HX_STACK_LINE(251)
			int tmp1 = this->children->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(251)
			int tmp2 = index1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(251)
			int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(251)
			index1 = tmp3;
		}
		HX_STACK_LINE(252)
		bool tmp1 = (index2 < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		if ((tmp1)){
			HX_STACK_LINE(252)
			int tmp2 = this->children->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(252)
			int tmp3 = index2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(252)
			int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(252)
			index2 = tmp4;
		}
		HX_STACK_LINE(254)
		bool tmp2 = (index1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(254)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(254)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(254)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(254)
		if ((tmp4)){
			HX_STACK_LINE(254)
			int tmp6 = index1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(254)
			int tmp7 = this->children->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(254)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(254)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(254)
			tmp5 = (tmp6 >= tmp9);
		}
		else{
			HX_STACK_LINE(254)
			tmp5 = true;
		}
		HX_STACK_LINE(254)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(254)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(254)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(254)
		if ((tmp7)){
			HX_STACK_LINE(254)
			tmp8 = (index2 < (int)0);
		}
		else{
			HX_STACK_LINE(254)
			tmp8 = true;
		}
		HX_STACK_LINE(254)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(254)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(254)
		if ((tmp9)){
			HX_STACK_LINE(254)
			int tmp11 = index2;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(254)
			int tmp12 = this->children->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(254)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(254)
			tmp10 = (tmp11 > tmp13);
		}
		else{
			HX_STACK_LINE(254)
			tmp10 = true;
		}
		HX_STACK_LINE(254)
		if ((tmp10)){
			HX_STACK_LINE(255)
			Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("ArrayDisplayList.hx","\x57","\x12","\x57","\xd7"),255,HX_HCSTRING("sx.properties.displaylist.ArrayDisplayList","\xe7","\x49","\xcd","\x5c"),HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(255)
			::sx::exceptions::OutOfBoundsException tmp12 = ::sx::exceptions::OutOfBoundsException_obj::__new(HX_HCSTRING("Provided index does not exist in display list of this widget.","\xb6","\xd3","\xa1","\x10"),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(255)
			HX_STACK_DO_THROW(tmp12);
		}
		HX_STACK_LINE(258)
		::sx::properties::displaylist::ArrayDisplayList tmp11 = this->children->__get(index1).StaticCast< ::sx::properties::displaylist::ArrayDisplayList >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(258)
		::sx::properties::displaylist::ArrayDisplayList child = tmp11;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(259)
		::sx::properties::displaylist::ArrayDisplayList tmp12 = this->children->__get(index2).StaticCast< ::sx::properties::displaylist::ArrayDisplayList >();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(259)
		this->children[index1] = tmp12;
		HX_STACK_LINE(260)
		::sx::properties::displaylist::ArrayDisplayList tmp13 = child;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(260)
		this->children[index2] = tmp13;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayDisplayList_obj,swapChildrenAt,(void))

int ArrayDisplayList_obj::get_numChildren( ){
	HX_STACK_FRAME("sx.properties.displaylist.ArrayDisplayList","get_numChildren",0x1fbb4cb5,"sx.properties.displaylist.ArrayDisplayList.get_numChildren","sx/properties/displaylist/ArrayDisplayList.hx",265,0x0ff62e36)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	int tmp = this->children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayDisplayList_obj,get_numChildren,return )


ArrayDisplayList_obj::ArrayDisplayList_obj()
{
}

void ArrayDisplayList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayDisplayList);
	HX_MARK_MEMBER_NAME(widget,"widget");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_END_CLASS();
}

void ArrayDisplayList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(widget,"widget");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(children,"children");
}

Dynamic ArrayDisplayList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"widget") ) { return widget; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { if (inCallProp == hx::paccAlways) return get_numChildren(); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayDisplayList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"widget") ) { widget=inValue.Cast< ::sx::widgets::Widget >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::sx::properties::displaylist::ArrayDisplayList >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ArrayDisplayList_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ArrayDisplayList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("widget","\xc4","\xaf","\xf2","\x4b"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"));
	outFields->push(HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sx::widgets::Widget*/ ,(int)offsetof(ArrayDisplayList_obj,widget),HX_HCSTRING("widget","\xc4","\xaf","\xf2","\x4b")},
	{hx::fsObject /*::sx::properties::displaylist::ArrayDisplayList*/ ,(int)offsetof(ArrayDisplayList_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ArrayDisplayList_obj,children),HX_HCSTRING("children","\x3f","\x19","\x6a","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("widget","\xc4","\xaf","\xf2","\x4b"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("removeChildren","\xa3","\x55","\xc0","\x3a"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"),
	HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"),
	HX_HCSTRING("getChildAt","\xb9","\x07","\x0e","\xb6"),
	HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"),
	HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"),
	HX_HCSTRING("get_numChildren","\x3c","\x21","\x62","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayDisplayList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayDisplayList_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayDisplayList_obj::__mClass;

void ArrayDisplayList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.properties.displaylist.ArrayDisplayList","\xe7","\x49","\xcd","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ArrayDisplayList_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayDisplayList_obj >;
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
} // end namespace displaylist
