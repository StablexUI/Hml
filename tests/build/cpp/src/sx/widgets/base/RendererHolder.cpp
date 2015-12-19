#include <hxcpp.h>

#ifndef INCLUDED_sx_backend_interfaces_IRenderer
#include <sx/backend/interfaces/IRenderer.h>
#endif
#ifndef INCLUDED_sx_properties_AutoSize
#include <sx/properties/AutoSize.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Padding
#include <sx/properties/metric/Padding.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
#ifndef INCLUDED_sx_properties_metric_SizeSetterProxy
#include <sx/properties/metric/SizeSetterProxy.h>
#endif
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
#ifndef INCLUDED_sx_tools_PaddingTools
#include <sx/tools/PaddingTools.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
#ifndef INCLUDED_sx_widgets_base_RendererHolder
#include <sx/widgets/base/RendererHolder.h>
#endif
namespace sx{
namespace widgets{
namespace base{

Void RendererHolder_obj::__construct()
{
HX_STACK_FRAME("sx.widgets.base.RendererHolder","new",0xf6fe56d6,"sx.widgets.base.RendererHolder.new","sx/widgets/base/RendererHolder.hx",21,0xc8927ebb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(39)
	this->__adjustingSize = false;
	HX_STACK_LINE(37)
	this->__rendererOnResizeIsSet = false;
	HX_STACK_LINE(49)
	super::__construct();
	HX_STACK_LINE(51)
	::sx::properties::metric::Padding tmp = ::sx::properties::metric::Padding_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	this->__padding = tmp;
	HX_STACK_LINE(52)
	Dynamic tmp1 = this->__widthProviderForPadding_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	::sx::properties::metric::Padding tmp2 = this->__padding;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	tmp2->ownerWidth = tmp1;
	HX_STACK_LINE(53)
	Dynamic tmp3 = this->__heightProviderForPadding_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	::sx::properties::metric::Padding tmp4 = this->__padding;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	tmp4->ownerHeight = tmp3;
	HX_STACK_LINE(54)
	::sx::properties::metric::Padding tmp5 = this->__padding;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(54)
	Dynamic tmp6 = this->__paddingChanged_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(54)
	tmp5->onComponentsChange->add(tmp6);
	HX_STACK_LINE(56)
	::sx::properties::AutoSize tmp7 = ::sx::properties::AutoSize_obj::__new(true);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(56)
	this->set_autoSize(tmp7);
	HX_STACK_LINE(57)
	::sx::properties::AutoSize tmp8 = this->autoSize;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(57)
	Dynamic tmp9 = this->__autoSizeChanged_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(57)
	tmp8->onChange->add(tmp9);
	HX_STACK_LINE(59)
	this->__createRenderer();
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::sx::backend::interfaces::IRenderer tmp10 = this->get___renderer();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		Dynamic tmp11 = this->__rendererResized_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		tmp10->onResize(tmp11);
		HX_STACK_LINE(61)
		this->__rendererOnResizeIsSet = true;
	}
	HX_STACK_LINE(64)
	::sx::backend::interfaces::IRenderer tmp10 = this->get___renderer();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(64)
	Float tmp11 = tmp10->getWidth();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(64)
	Float rendererWidth = tmp11;		HX_STACK_VAR(rendererWidth,"rendererWidth");
	HX_STACK_LINE(65)
	::sx::backend::interfaces::IRenderer tmp12 = this->get___renderer();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(65)
	Float tmp13 = tmp12->getHeight();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(65)
	Float rendererHeight = tmp13;		HX_STACK_VAR(rendererHeight,"rendererHeight");
	HX_STACK_LINE(66)
	bool tmp14 = (rendererWidth != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(66)
	bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(66)
	bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(66)
	bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(66)
	if ((tmp16)){
		HX_STACK_LINE(66)
		tmp17 = (rendererHeight != (int)0);
	}
	else{
		HX_STACK_LINE(66)
		tmp17 = true;
	}
	HX_STACK_LINE(66)
	bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(66)
	bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(66)
	if ((tmp18)){
		HX_STACK_LINE(66)
		::sx::properties::metric::Padding tmp20 = this->get_padding();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(66)
		::sx::properties::metric::Padding tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(66)
		::sx::properties::metric::Padding tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(66)
		bool tmp23 = ::sx::tools::PaddingTools_obj::isZero(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(66)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(66)
		bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(66)
		tmp19 = !(tmp25);
	}
	else{
		HX_STACK_LINE(66)
		tmp19 = true;
	}
	HX_STACK_LINE(66)
	if ((tmp19)){
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			::sx::properties::metric::Size tmp20 = this->get_width();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(67)
			::sx::properties::metric::Size size = tmp20;		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(67)
			this->__adjustingSize = true;
			HX_STACK_LINE(67)
			Float tmp21 = rendererWidth;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(67)
			::sx::properties::metric::Padding tmp22 = this->get_padding();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(67)
			::String tmp23 = size->orientation;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(67)
			Float tmp24 = ::sx::tools::PaddingTools_obj::sumPx(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(67)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(67)
			size->set_px(tmp25);
			HX_STACK_LINE(67)
			this->__adjustingSize = false;
		}
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			::sx::properties::metric::Size tmp20 = this->get_height();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(68)
			::sx::properties::metric::Size size = tmp20;		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(68)
			this->__adjustingSize = true;
			HX_STACK_LINE(68)
			Float tmp21 = rendererHeight;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(68)
			::sx::properties::metric::Padding tmp22 = this->get_padding();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(68)
			::String tmp23 = size->orientation;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(68)
			Float tmp24 = ::sx::tools::PaddingTools_obj::sumPx(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(68)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(68)
			size->set_px(tmp25);
			HX_STACK_LINE(68)
			this->__adjustingSize = false;
		}
	}
}
;
	return null();
}

//RendererHolder_obj::~RendererHolder_obj() { }

Dynamic RendererHolder_obj::__CreateEmpty() { return  new RendererHolder_obj; }
hx::ObjectPtr< RendererHolder_obj > RendererHolder_obj::__new()
{  hx::ObjectPtr< RendererHolder_obj > _result_ = new RendererHolder_obj();
	_result_->__construct();
	return _result_;}

Dynamic RendererHolder_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RendererHolder_obj > _result_ = new RendererHolder_obj();
	_result_->__construct();
	return _result_;}

Void RendererHolder_obj::dispose( hx::Null< bool >  __o_disposeChildren){
bool disposeChildren = __o_disposeChildren.Default(true);
	HX_STACK_FRAME("sx.widgets.base.RendererHolder","dispose",0xf1fa7a15,"sx.widgets.base.RendererHolder.dispose","sx/widgets/base/RendererHolder.hx",77,0xc8927ebb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(disposeChildren,"disposeChildren")
{
		HX_STACK_LINE(78)
		bool tmp = disposeChildren;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		this->super::dispose(tmp);
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			::sx::backend::interfaces::IRenderer tmp1 = this->get___renderer();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(80)
			tmp1->onResize(null());
			HX_STACK_LINE(80)
			this->__rendererOnResizeIsSet = false;
		}
		HX_STACK_LINE(81)
		::sx::backend::interfaces::IRenderer tmp1 = this->get___renderer();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		tmp1->dispose();
	}
return null();
}


Void RendererHolder_obj::__createRenderer( ){
{
		HX_STACK_FRAME("sx.widgets.base.RendererHolder","__createRenderer",0x55f3f749,"sx.widgets.base.RendererHolder.__createRenderer","sx/widgets/base/RendererHolder.hx",91,0xc8927ebb)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RendererHolder_obj,__createRenderer,(void))

Void RendererHolder_obj::__autoSizeChanged( bool widthChanged,bool heightChanged){
{
		HX_STACK_FRAME("sx.widgets.base.RendererHolder","__autoSizeChanged",0x539fbcda,"sx.widgets.base.RendererHolder.__autoSizeChanged","sx/widgets/base/RendererHolder.hx",100,0xc8927ebb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widthChanged,"widthChanged")
		HX_STACK_ARG(heightChanged,"heightChanged")
		HX_STACK_LINE(101)
		bool tmp = this->__rendererOnResizeIsSet;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		if ((tmp)){
			HX_STACK_LINE(102)
			::sx::properties::AutoSize tmp1 = this->autoSize;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(102)
			bool tmp2 = tmp1->neither();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			if ((tmp2)){
				HX_STACK_LINE(102)
				::sx::backend::interfaces::IRenderer tmp3 = this->get___renderer();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(102)
				tmp3->onResize(null());
				HX_STACK_LINE(102)
				this->__rendererOnResizeIsSet = false;
			}
		}
		else{
			HX_STACK_LINE(104)
			::sx::properties::AutoSize tmp1 = this->autoSize;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(104)
			bool tmp2 = tmp1->either();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(104)
			if ((tmp2)){
				HX_STACK_LINE(104)
				::sx::backend::interfaces::IRenderer tmp3 = this->get___renderer();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(104)
				Dynamic tmp4 = this->__rendererResized_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(104)
				tmp3->onResize(tmp4);
				HX_STACK_LINE(104)
				this->__rendererOnResizeIsSet = true;
			}
		}
		HX_STACK_LINE(107)
		bool tmp1 = widthChanged;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		if ((tmp1)){
			HX_STACK_LINE(108)
			::sx::properties::AutoSize tmp2 = this->autoSize;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			bool tmp3 = tmp2->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			if ((tmp3)){
				HX_STACK_LINE(109)
				::sx::properties::metric::Size tmp4 = this->get_width();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(109)
				::sx::properties::metric::Size size = tmp4;		HX_STACK_VAR(size,"size");
				HX_STACK_LINE(109)
				::sx::backend::interfaces::IRenderer tmp5 = this->get___renderer();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(109)
				Float tmp6 = tmp5->getWidth();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(109)
				Float rendererSizePx = tmp6;		HX_STACK_VAR(rendererSizePx,"rendererSizePx");
				HX_STACK_LINE(109)
				this->__adjustingSize = true;
				HX_STACK_LINE(109)
				Float tmp7 = rendererSizePx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(109)
				::sx::properties::metric::Padding tmp8 = this->get_padding();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(109)
				::String tmp9 = size->orientation;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(109)
				Float tmp10 = ::sx::tools::PaddingTools_obj::sumPx(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(109)
				Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(109)
				size->set_px(tmp11);
				HX_STACK_LINE(109)
				this->__adjustingSize = false;
			}
			else{
				HX_STACK_LINE(111)
				::sx::backend::interfaces::IRenderer tmp4 = this->get___renderer();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(111)
				::sx::properties::metric::Size tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(111)
				Float tmp6 = tmp5->get_px();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(111)
				::sx::properties::metric::Padding tmp7 = this->get_padding();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(111)
				Float tmp8 = ::sx::tools::PaddingTools_obj::sumPx(tmp7,HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(111)
				Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(111)
				tmp4->setAvailableAreaWidth(tmp9);
			}
		}
		HX_STACK_LINE(114)
		bool tmp2 = heightChanged;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		if ((tmp2)){
			HX_STACK_LINE(115)
			::sx::properties::AutoSize tmp3 = this->autoSize;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(115)
			bool tmp4 = tmp3->get_height();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			if ((tmp4)){
				HX_STACK_LINE(116)
				::sx::properties::metric::Size tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(116)
				::sx::properties::metric::Size size = tmp5;		HX_STACK_VAR(size,"size");
				HX_STACK_LINE(116)
				::sx::backend::interfaces::IRenderer tmp6 = this->get___renderer();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(116)
				Float tmp7 = tmp6->getHeight();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(116)
				Float rendererSizePx = tmp7;		HX_STACK_VAR(rendererSizePx,"rendererSizePx");
				HX_STACK_LINE(116)
				this->__adjustingSize = true;
				HX_STACK_LINE(116)
				Float tmp8 = rendererSizePx;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(116)
				::sx::properties::metric::Padding tmp9 = this->get_padding();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(116)
				::String tmp10 = size->orientation;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(116)
				Float tmp11 = ::sx::tools::PaddingTools_obj::sumPx(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(116)
				Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(116)
				size->set_px(tmp12);
				HX_STACK_LINE(116)
				this->__adjustingSize = false;
			}
			else{
				HX_STACK_LINE(118)
				::sx::backend::interfaces::IRenderer tmp5 = this->get___renderer();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(118)
				::sx::properties::metric::Size tmp6 = this->get_height();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(118)
				Float tmp7 = tmp6->get_px();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(118)
				::sx::properties::metric::Padding tmp8 = this->get_padding();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(118)
				Float tmp9 = ::sx::tools::PaddingTools_obj::sumPx(tmp8,HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(118)
				Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(118)
				tmp5->setAvailableAreaHeight(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RendererHolder_obj,__autoSizeChanged,(void))

Void RendererHolder_obj::__disableRendererResizeListener( ){
{
		HX_STACK_FRAME("sx.widgets.base.RendererHolder","__disableRendererResizeListener",0x597f0389,"sx.widgets.base.RendererHolder.__disableRendererResizeListener","sx/widgets/base/RendererHolder.hx",128,0xc8927ebb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(129)
		::sx::backend::interfaces::IRenderer tmp = this->get___renderer();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		tmp->onResize(null());
		HX_STACK_LINE(130)
		this->__rendererOnResizeIsSet = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RendererHolder_obj,__disableRendererResizeListener,(void))

Void RendererHolder_obj::__enableRendererResizeListener( ){
{
		HX_STACK_FRAME("sx.widgets.base.RendererHolder","__enableRendererResizeListener",0x7651e878,"sx.widgets.base.RendererHolder.__enableRendererResizeListener","sx/widgets/base/RendererHolder.hx",138,0xc8927ebb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(139)
		::sx::backend::interfaces::IRenderer tmp = this->get___renderer();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		Dynamic tmp1 = this->__rendererResized_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		tmp->onResize(tmp1);
		HX_STACK_LINE(140)
		this->__rendererOnResizeIsSet = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RendererHolder_obj,__enableRendererResizeListener,(void))

Void RendererHolder_obj::__rendererResized( Float widthPx,Float heightPx){
{
		HX_STACK_FRAME("sx.widgets.base.RendererHolder","__rendererResized",0x9a6e16c3,"sx.widgets.base.RendererHolder.__rendererResized","sx/widgets/base/RendererHolder.hx",148,0xc8927ebb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widthPx,"widthPx")
		HX_STACK_ARG(heightPx,"heightPx")
		HX_STACK_LINE(149)
		::sx::properties::AutoSize tmp = this->autoSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		bool tmp1 = tmp->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		if ((tmp1)){
			HX_STACK_LINE(149)
			::sx::properties::metric::Size tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			::sx::properties::metric::Size size = tmp2;		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(149)
			this->__adjustingSize = true;
			HX_STACK_LINE(149)
			Float tmp3 = widthPx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			::sx::properties::metric::Padding tmp4 = this->get_padding();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			::String tmp5 = size->orientation;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			Float tmp6 = ::sx::tools::PaddingTools_obj::sumPx(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			size->set_px(tmp7);
			HX_STACK_LINE(149)
			this->__adjustingSize = false;
		}
		HX_STACK_LINE(150)
		::sx::properties::AutoSize tmp2 = this->autoSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		bool tmp3 = tmp2->get_height();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		if ((tmp3)){
			HX_STACK_LINE(150)
			::sx::properties::metric::Size tmp4 = this->get_height();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			::sx::properties::metric::Size size = tmp4;		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(150)
			this->__adjustingSize = true;
			HX_STACK_LINE(150)
			Float tmp5 = heightPx;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			::sx::properties::metric::Padding tmp6 = this->get_padding();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			::String tmp7 = size->orientation;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			Float tmp8 = ::sx::tools::PaddingTools_obj::sumPx(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(150)
			Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(150)
			size->set_px(tmp9);
			HX_STACK_LINE(150)
			this->__adjustingSize = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RendererHolder_obj,__rendererResized,(void))

Void RendererHolder_obj::__propertyResized( ::sx::properties::metric::Size changed,::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.widgets.base.RendererHolder","__propertyResized",0x9a83f9f1,"sx.widgets.base.RendererHolder.__propertyResized","sx/widgets/base/RendererHolder.hx",158,0xc8927ebb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changed,"changed")
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(159)
		bool tmp = this->__adjustingSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		if ((tmp1)){
			HX_STACK_LINE(160)
			bool tmp2 = (changed->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(160)
			if ((tmp2)){
				HX_STACK_LINE(161)
				::sx::properties::AutoSize tmp3 = this->autoSize;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(161)
				bool tmp4 = tmp3->get_width();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(161)
				if ((tmp4)){
					HX_STACK_LINE(163)
					::sx::properties::AutoSize tmp5 = this->autoSize;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(163)
					tmp5->set_width(false);
				}
				else{
					HX_STACK_LINE(165)
					::sx::backend::interfaces::IRenderer tmp5 = this->get___renderer();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(165)
					Float tmp6 = changed->get_px();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(165)
					::sx::properties::metric::Padding tmp7 = this->get_padding();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(165)
					Float tmp8 = ::sx::tools::PaddingTools_obj::sumPx(tmp7,HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(165)
					Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(165)
					tmp5->setAvailableAreaWidth(tmp9);
				}
			}
			else{
				HX_STACK_LINE(168)
				::sx::properties::AutoSize tmp3 = this->autoSize;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(168)
				bool tmp4 = tmp3->get_height();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(168)
				if ((tmp4)){
					HX_STACK_LINE(170)
					::sx::properties::AutoSize tmp5 = this->autoSize;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(170)
					tmp5->set_height(false);
				}
				else{
					HX_STACK_LINE(172)
					::sx::backend::interfaces::IRenderer tmp5 = this->get___renderer();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(172)
					Float tmp6 = changed->get_px();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(172)
					::sx::properties::metric::Padding tmp7 = this->get_padding();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(172)
					Float tmp8 = ::sx::tools::PaddingTools_obj::sumPx(tmp7,HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(172)
					Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(172)
					tmp5->setAvailableAreaHeight(tmp9);
				}
			}
		}
		HX_STACK_LINE(177)
		::sx::properties::metric::Size tmp2 = changed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		::String tmp3 = previousUnits;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		Float tmp4 = previousValue;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(177)
		this->super::__propertyResized(tmp2,tmp3,tmp4);
	}
return null();
}


Void RendererHolder_obj::__adjustSize( ::sx::properties::metric::Size size,Float rendererSizePx){
{
		HX_STACK_FRAME("sx.widgets.base.RendererHolder","__adjustSize",0xa92502da,"sx.widgets.base.RendererHolder.__adjustSize","sx/widgets/base/RendererHolder.hx",185,0xc8927ebb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(rendererSizePx,"rendererSizePx")
		HX_STACK_LINE(186)
		this->__adjustingSize = true;
		HX_STACK_LINE(187)
		Float tmp = rendererSizePx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		::sx::properties::metric::Padding tmp1 = this->get_padding();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		::String tmp2 = size->orientation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		Float tmp3 = ::sx::tools::PaddingTools_obj::sumPx(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		size->set_px(tmp4);
		HX_STACK_LINE(188)
		this->__adjustingSize = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RendererHolder_obj,__adjustSize,(void))

Void RendererHolder_obj::__paddingChanged( bool horizontal,bool vertical){
{
		HX_STACK_FRAME("sx.widgets.base.RendererHolder","__paddingChanged",0x0ffa7e0d,"sx.widgets.base.RendererHolder.__paddingChanged","sx/widgets/base/RendererHolder.hx",196,0xc8927ebb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(horizontal,"horizontal")
		HX_STACK_ARG(vertical,"vertical")
		HX_STACK_LINE(197)
		bool tmp = horizontal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		if ((tmp)){
			HX_STACK_LINE(198)
			::sx::properties::AutoSize tmp1 = this->autoSize;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(198)
			bool tmp2 = tmp1->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(198)
			if ((tmp2)){
				HX_STACK_LINE(199)
				::sx::properties::metric::Size tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(199)
				::sx::properties::metric::Size size = tmp3;		HX_STACK_VAR(size,"size");
				HX_STACK_LINE(199)
				::sx::backend::interfaces::IRenderer tmp4 = this->get___renderer();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(199)
				Float tmp5 = tmp4->getWidth();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(199)
				Float rendererSizePx = tmp5;		HX_STACK_VAR(rendererSizePx,"rendererSizePx");
				HX_STACK_LINE(199)
				this->__adjustingSize = true;
				HX_STACK_LINE(199)
				Float tmp6 = rendererSizePx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(199)
				::sx::properties::metric::Padding tmp7 = this->get_padding();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(199)
				::String tmp8 = size->orientation;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(199)
				Float tmp9 = ::sx::tools::PaddingTools_obj::sumPx(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(199)
				Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(199)
				size->set_px(tmp10);
				HX_STACK_LINE(199)
				this->__adjustingSize = false;
			}
			else{
				HX_STACK_LINE(201)
				::sx::backend::interfaces::IRenderer tmp3 = this->get___renderer();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(201)
				::sx::properties::metric::Size tmp4 = this->get_width();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(201)
				Float tmp5 = tmp4->get_px();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				::sx::properties::metric::Padding tmp6 = this->get_padding();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(201)
				Float tmp7 = ::sx::tools::PaddingTools_obj::sumPx(tmp6,HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(201)
				Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(201)
				tmp3->setAvailableAreaWidth(tmp8);
			}
		}
		HX_STACK_LINE(204)
		bool tmp1 = vertical;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		if ((tmp1)){
			HX_STACK_LINE(205)
			::sx::properties::AutoSize tmp2 = this->autoSize;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(205)
			bool tmp3 = tmp2->get_height();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(205)
			if ((tmp3)){
				HX_STACK_LINE(206)
				::sx::properties::metric::Size tmp4 = this->get_height();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(206)
				::sx::properties::metric::Size size = tmp4;		HX_STACK_VAR(size,"size");
				HX_STACK_LINE(206)
				::sx::backend::interfaces::IRenderer tmp5 = this->get___renderer();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(206)
				Float tmp6 = tmp5->getHeight();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(206)
				Float rendererSizePx = tmp6;		HX_STACK_VAR(rendererSizePx,"rendererSizePx");
				HX_STACK_LINE(206)
				this->__adjustingSize = true;
				HX_STACK_LINE(206)
				Float tmp7 = rendererSizePx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(206)
				::sx::properties::metric::Padding tmp8 = this->get_padding();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(206)
				::String tmp9 = size->orientation;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(206)
				Float tmp10 = ::sx::tools::PaddingTools_obj::sumPx(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(206)
				Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(206)
				size->set_px(tmp11);
				HX_STACK_LINE(206)
				this->__adjustingSize = false;
			}
			else{
				HX_STACK_LINE(208)
				::sx::backend::interfaces::IRenderer tmp4 = this->get___renderer();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(208)
				::sx::properties::metric::Size tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(208)
				Float tmp6 = tmp5->get_px();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(208)
				::sx::properties::metric::Padding tmp7 = this->get_padding();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(208)
				Float tmp8 = ::sx::tools::PaddingTools_obj::sumPx(tmp7,HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(208)
				Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(208)
				tmp4->setAvailableAreaHeight(tmp9);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RendererHolder_obj,__paddingChanged,(void))

::sx::properties::metric::Size RendererHolder_obj::__widthProviderForPadding( ){
	HX_STACK_FRAME("sx.widgets.base.RendererHolder","__widthProviderForPadding",0xd358cdd5,"sx.widgets.base.RendererHolder.__widthProviderForPadding","sx/widgets/base/RendererHolder.hx",218,0xc8927ebb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(219)
	::sx::properties::AutoSize tmp = this->autoSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	bool tmp1 = tmp->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(219)
	if ((tmp1)){
		HX_STACK_LINE(220)
		::sx::properties::metric::Size tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			::sx::properties::metric::Padding tmp3 = this->get_padding();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(220)
			::sx::properties::metric::Size tmp4 = tmp3->get_left();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(220)
			::sx::properties::metric::Size paddingSide1 = tmp4;		HX_STACK_VAR(paddingSide1,"paddingSide1");
			HX_STACK_LINE(220)
			::sx::properties::metric::Padding tmp5 = this->get_padding();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(220)
			::sx::properties::metric::Size tmp6 = tmp5->get_right();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(220)
			::sx::properties::metric::Size paddingSide2 = tmp6;		HX_STACK_VAR(paddingSide2,"paddingSide2");
			HX_STACK_LINE(220)
			::sx::backend::interfaces::IRenderer tmp7 = this->get___renderer();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(220)
			Float tmp8 = tmp7->getWidth();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(220)
			Float rendererSizePx = tmp8;		HX_STACK_VAR(rendererSizePx,"rendererSizePx");
			HX_STACK_LINE(220)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				::String _g = paddingSide1->units;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(220)
				::String tmp10 = _g;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(220)
				::String _switch_1 = (tmp10);
				if (  ( _switch_1==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
					HX_STACK_LINE(220)
					bool tmp11 = (paddingSide1->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(220)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(220)
					if ((tmp11)){
						HX_STACK_LINE(220)
						::sx::backend::interfaces::IRenderer tmp13 = this->get___renderer();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(220)
						tmp12 = tmp13->getWidth();
					}
					else{
						HX_STACK_LINE(220)
						::sx::backend::interfaces::IRenderer tmp13 = this->get___renderer();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(220)
						tmp12 = tmp13->getHeight();
					}
					HX_STACK_LINE(220)
					Float rendererSize = tmp12;		HX_STACK_VAR(rendererSize,"rendererSize");
					HX_STACK_LINE(220)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(220)
					{
						HX_STACK_LINE(220)
						::String _g1 = paddingSide2->units;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(220)
						::String tmp14 = _g1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(220)
						::String _switch_2 = (tmp14);
						if (  ( _switch_2==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
							HX_STACK_LINE(220)
							Float tmp15 = rendererSize;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(220)
							Float tmp16 = paddingSide1->get_pct();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(220)
							Float tmp17 = ((int)100 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(220)
							Float tmp18 = paddingSide2->get_pct();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(220)
							Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(220)
							Float tmp20 = (((Float)0.01) * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(220)
							tmp13 = (Float(tmp15) / Float(tmp20));
						}
						else  {
							HX_STACK_LINE(220)
							Float tmp15 = rendererSize;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(220)
							Float tmp16 = paddingSide2->get_px();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(220)
							Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(220)
							Float tmp18 = paddingSide1->get_pct();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(220)
							Float tmp19 = ((int)100 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(220)
							Float tmp20 = (((Float)0.01) * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(220)
							tmp13 = (Float(tmp17) / Float(tmp20));
						}
;
;
					}
					HX_STACK_LINE(220)
					Float holderSize = tmp13;		HX_STACK_VAR(holderSize,"holderSize");
					HX_STACK_LINE(220)
					Float tmp14 = paddingSide1->get_pct();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(220)
					Float tmp15 = (tmp14 * ((Float)0.01));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(220)
					Float tmp16 = holderSize;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(220)
					tmp9 = (tmp15 * tmp16);
				}
				else  {
					HX_STACK_LINE(220)
					tmp9 = paddingSide1->get_px();
				}
;
;
			}
			HX_STACK_LINE(220)
			Float paddingSide1Px = tmp9;		HX_STACK_VAR(paddingSide1Px,"paddingSide1Px");
			HX_STACK_LINE(220)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				::String _g = paddingSide2->units;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(220)
				::String tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(220)
				::String _switch_3 = (tmp11);
				if (  ( _switch_3==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
					HX_STACK_LINE(220)
					bool tmp12 = (paddingSide2->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(220)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(220)
					if ((tmp12)){
						HX_STACK_LINE(220)
						::sx::backend::interfaces::IRenderer tmp14 = this->get___renderer();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(220)
						tmp13 = tmp14->getWidth();
					}
					else{
						HX_STACK_LINE(220)
						::sx::backend::interfaces::IRenderer tmp14 = this->get___renderer();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(220)
						tmp13 = tmp14->getHeight();
					}
					HX_STACK_LINE(220)
					Float rendererSize = tmp13;		HX_STACK_VAR(rendererSize,"rendererSize");
					HX_STACK_LINE(220)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(220)
					{
						HX_STACK_LINE(220)
						::String _g1 = paddingSide1->units;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(220)
						::String tmp15 = _g1;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(220)
						::String _switch_4 = (tmp15);
						if (  ( _switch_4==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
							HX_STACK_LINE(220)
							Float tmp16 = rendererSize;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(220)
							Float tmp17 = paddingSide2->get_pct();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(220)
							Float tmp18 = ((int)100 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(220)
							Float tmp19 = paddingSide1->get_pct();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(220)
							Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(220)
							Float tmp21 = (((Float)0.01) * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(220)
							tmp14 = (Float(tmp16) / Float(tmp21));
						}
						else  {
							HX_STACK_LINE(220)
							Float tmp16 = rendererSize;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(220)
							Float tmp17 = paddingSide1->get_px();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(220)
							Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(220)
							Float tmp19 = paddingSide2->get_pct();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(220)
							Float tmp20 = ((int)100 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(220)
							Float tmp21 = (((Float)0.01) * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(220)
							tmp14 = (Float(tmp18) / Float(tmp21));
						}
;
;
					}
					HX_STACK_LINE(220)
					Float holderSize = tmp14;		HX_STACK_VAR(holderSize,"holderSize");
					HX_STACK_LINE(220)
					Float tmp15 = paddingSide2->get_pct();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(220)
					Float tmp16 = (tmp15 * ((Float)0.01));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(220)
					Float tmp17 = holderSize;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(220)
					tmp10 = (tmp16 * tmp17);
				}
				else  {
					HX_STACK_LINE(220)
					tmp10 = paddingSide2->get_px();
				}
;
;
			}
			HX_STACK_LINE(220)
			Float paddingSide2Px = tmp10;		HX_STACK_VAR(paddingSide2Px,"paddingSide2Px");
			HX_STACK_LINE(220)
			::sx::properties::metric::Size tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				::sx::properties::metric::Size tmp12 = this->__helperSize;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(220)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(220)
				if ((tmp13)){
					HX_STACK_LINE(220)
					::sx::properties::metric::Size tmp14 = ::sx::properties::metric::Size_obj::__new(null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(220)
					this->__helperSize = tmp14;
				}
				HX_STACK_LINE(220)
				tmp11 = this->__helperSize;
			}
			HX_STACK_LINE(220)
			::sx::properties::metric::Size helperSize = tmp11;		HX_STACK_VAR(helperSize,"helperSize");
			HX_STACK_LINE(220)
			Float tmp12 = (rendererSizePx + paddingSide1Px);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(220)
			Float tmp13 = paddingSide2Px;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(220)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(220)
			helperSize->set_px(tmp14);
			HX_STACK_LINE(220)
			tmp2 = this->__helperSize;
		}
		HX_STACK_LINE(220)
		::sx::properties::metric::Size helperSize = tmp2;		HX_STACK_VAR(helperSize,"helperSize");
		HX_STACK_LINE(222)
		::sx::properties::metric::Size tmp3 = helperSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(222)
		return tmp3;
	}
	else{
		HX_STACK_LINE(225)
		::sx::properties::metric::Size tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		return tmp2;
	}
	HX_STACK_LINE(219)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RendererHolder_obj,__widthProviderForPadding,return )

::sx::properties::metric::Size RendererHolder_obj::__heightProviderForPadding( ){
	HX_STACK_FRAME("sx.widgets.base.RendererHolder","__heightProviderForPadding",0x6f79c78a,"sx.widgets.base.RendererHolder.__heightProviderForPadding","sx/widgets/base/RendererHolder.hx",234,0xc8927ebb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	::sx::properties::AutoSize tmp = this->autoSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	bool tmp1 = tmp->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	if ((tmp1)){
		HX_STACK_LINE(236)
		::sx::properties::metric::Size tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(236)
			::sx::properties::metric::Padding tmp3 = this->get_padding();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(236)
			::sx::properties::metric::Size tmp4 = tmp3->get_top();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			::sx::properties::metric::Size paddingSide1 = tmp4;		HX_STACK_VAR(paddingSide1,"paddingSide1");
			HX_STACK_LINE(236)
			::sx::properties::metric::Padding tmp5 = this->get_padding();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(236)
			::sx::properties::metric::Size tmp6 = tmp5->get_bottom();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(236)
			::sx::properties::metric::Size paddingSide2 = tmp6;		HX_STACK_VAR(paddingSide2,"paddingSide2");
			HX_STACK_LINE(236)
			::sx::backend::interfaces::IRenderer tmp7 = this->get___renderer();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(236)
			Float tmp8 = tmp7->getHeight();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(236)
			Float rendererSizePx = tmp8;		HX_STACK_VAR(rendererSizePx,"rendererSizePx");
			HX_STACK_LINE(236)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(236)
			{
				HX_STACK_LINE(236)
				::String _g = paddingSide1->units;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(236)
				::String tmp10 = _g;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(236)
				::String _switch_5 = (tmp10);
				if (  ( _switch_5==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
					HX_STACK_LINE(236)
					bool tmp11 = (paddingSide1->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(236)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(236)
					if ((tmp11)){
						HX_STACK_LINE(236)
						::sx::backend::interfaces::IRenderer tmp13 = this->get___renderer();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(236)
						tmp12 = tmp13->getWidth();
					}
					else{
						HX_STACK_LINE(236)
						::sx::backend::interfaces::IRenderer tmp13 = this->get___renderer();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(236)
						tmp12 = tmp13->getHeight();
					}
					HX_STACK_LINE(236)
					Float rendererSize = tmp12;		HX_STACK_VAR(rendererSize,"rendererSize");
					HX_STACK_LINE(236)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(236)
					{
						HX_STACK_LINE(236)
						::String _g1 = paddingSide2->units;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(236)
						::String tmp14 = _g1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(236)
						::String _switch_6 = (tmp14);
						if (  ( _switch_6==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
							HX_STACK_LINE(236)
							Float tmp15 = rendererSize;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(236)
							Float tmp16 = paddingSide1->get_pct();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(236)
							Float tmp17 = ((int)100 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(236)
							Float tmp18 = paddingSide2->get_pct();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(236)
							Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(236)
							Float tmp20 = (((Float)0.01) * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(236)
							tmp13 = (Float(tmp15) / Float(tmp20));
						}
						else  {
							HX_STACK_LINE(236)
							Float tmp15 = rendererSize;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(236)
							Float tmp16 = paddingSide2->get_px();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(236)
							Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(236)
							Float tmp18 = paddingSide1->get_pct();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(236)
							Float tmp19 = ((int)100 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(236)
							Float tmp20 = (((Float)0.01) * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(236)
							tmp13 = (Float(tmp17) / Float(tmp20));
						}
;
;
					}
					HX_STACK_LINE(236)
					Float holderSize = tmp13;		HX_STACK_VAR(holderSize,"holderSize");
					HX_STACK_LINE(236)
					Float tmp14 = paddingSide1->get_pct();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(236)
					Float tmp15 = (tmp14 * ((Float)0.01));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(236)
					Float tmp16 = holderSize;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(236)
					tmp9 = (tmp15 * tmp16);
				}
				else  {
					HX_STACK_LINE(236)
					tmp9 = paddingSide1->get_px();
				}
;
;
			}
			HX_STACK_LINE(236)
			Float paddingSide1Px = tmp9;		HX_STACK_VAR(paddingSide1Px,"paddingSide1Px");
			HX_STACK_LINE(236)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(236)
			{
				HX_STACK_LINE(236)
				::String _g = paddingSide2->units;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(236)
				::String tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(236)
				::String _switch_7 = (tmp11);
				if (  ( _switch_7==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
					HX_STACK_LINE(236)
					bool tmp12 = (paddingSide2->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(236)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(236)
					if ((tmp12)){
						HX_STACK_LINE(236)
						::sx::backend::interfaces::IRenderer tmp14 = this->get___renderer();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(236)
						tmp13 = tmp14->getWidth();
					}
					else{
						HX_STACK_LINE(236)
						::sx::backend::interfaces::IRenderer tmp14 = this->get___renderer();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(236)
						tmp13 = tmp14->getHeight();
					}
					HX_STACK_LINE(236)
					Float rendererSize = tmp13;		HX_STACK_VAR(rendererSize,"rendererSize");
					HX_STACK_LINE(236)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(236)
					{
						HX_STACK_LINE(236)
						::String _g1 = paddingSide1->units;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(236)
						::String tmp15 = _g1;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(236)
						::String _switch_8 = (tmp15);
						if (  ( _switch_8==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
							HX_STACK_LINE(236)
							Float tmp16 = rendererSize;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(236)
							Float tmp17 = paddingSide2->get_pct();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(236)
							Float tmp18 = ((int)100 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(236)
							Float tmp19 = paddingSide1->get_pct();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(236)
							Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(236)
							Float tmp21 = (((Float)0.01) * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(236)
							tmp14 = (Float(tmp16) / Float(tmp21));
						}
						else  {
							HX_STACK_LINE(236)
							Float tmp16 = rendererSize;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(236)
							Float tmp17 = paddingSide1->get_px();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(236)
							Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(236)
							Float tmp19 = paddingSide2->get_pct();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(236)
							Float tmp20 = ((int)100 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(236)
							Float tmp21 = (((Float)0.01) * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(236)
							tmp14 = (Float(tmp18) / Float(tmp21));
						}
;
;
					}
					HX_STACK_LINE(236)
					Float holderSize = tmp14;		HX_STACK_VAR(holderSize,"holderSize");
					HX_STACK_LINE(236)
					Float tmp15 = paddingSide2->get_pct();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(236)
					Float tmp16 = (tmp15 * ((Float)0.01));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(236)
					Float tmp17 = holderSize;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(236)
					tmp10 = (tmp16 * tmp17);
				}
				else  {
					HX_STACK_LINE(236)
					tmp10 = paddingSide2->get_px();
				}
;
;
			}
			HX_STACK_LINE(236)
			Float paddingSide2Px = tmp10;		HX_STACK_VAR(paddingSide2Px,"paddingSide2Px");
			HX_STACK_LINE(236)
			::sx::properties::metric::Size tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(236)
			{
				HX_STACK_LINE(236)
				::sx::properties::metric::Size tmp12 = this->__helperSize;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(236)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(236)
				if ((tmp13)){
					HX_STACK_LINE(236)
					::sx::properties::metric::Size tmp14 = ::sx::properties::metric::Size_obj::__new(null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(236)
					this->__helperSize = tmp14;
				}
				HX_STACK_LINE(236)
				tmp11 = this->__helperSize;
			}
			HX_STACK_LINE(236)
			::sx::properties::metric::Size helperSize = tmp11;		HX_STACK_VAR(helperSize,"helperSize");
			HX_STACK_LINE(236)
			Float tmp12 = (rendererSizePx + paddingSide1Px);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(236)
			Float tmp13 = paddingSide2Px;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(236)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(236)
			helperSize->set_px(tmp14);
			HX_STACK_LINE(236)
			tmp2 = this->__helperSize;
		}
		HX_STACK_LINE(236)
		::sx::properties::metric::Size helperSize = tmp2;		HX_STACK_VAR(helperSize,"helperSize");
		HX_STACK_LINE(238)
		::sx::properties::metric::Size tmp3 = helperSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		return tmp3;
	}
	else{
		HX_STACK_LINE(241)
		::sx::properties::metric::Size tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(241)
		return tmp2;
	}
	HX_STACK_LINE(235)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RendererHolder_obj,__heightProviderForPadding,return )

::sx::properties::metric::Size RendererHolder_obj::__getPaddedRendererSize( ::sx::properties::metric::Size paddingSide1,::sx::properties::metric::Size paddingSide2,Float rendererSizePx){
	HX_STACK_FRAME("sx.widgets.base.RendererHolder","__getPaddedRendererSize",0xe7d612a0,"sx.widgets.base.RendererHolder.__getPaddedRendererSize","sx/widgets/base/RendererHolder.hx",250,0xc8927ebb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(paddingSide1,"paddingSide1")
	HX_STACK_ARG(paddingSide2,"paddingSide2")
	HX_STACK_ARG(rendererSizePx,"rendererSizePx")
	HX_STACK_LINE(251)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	{
		HX_STACK_LINE(251)
		::String _g = paddingSide1->units;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(251)
		::String tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(251)
		::String _switch_9 = (tmp1);
		if (  ( _switch_9==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
			HX_STACK_LINE(251)
			bool tmp2 = (paddingSide1->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(251)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(251)
			if ((tmp2)){
				HX_STACK_LINE(251)
				::sx::backend::interfaces::IRenderer tmp4 = this->get___renderer();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(251)
				tmp3 = tmp4->getWidth();
			}
			else{
				HX_STACK_LINE(251)
				::sx::backend::interfaces::IRenderer tmp4 = this->get___renderer();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(251)
				tmp3 = tmp4->getHeight();
			}
			HX_STACK_LINE(251)
			Float rendererSize = tmp3;		HX_STACK_VAR(rendererSize,"rendererSize");
			HX_STACK_LINE(251)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(251)
			{
				HX_STACK_LINE(251)
				::String _g1 = paddingSide2->units;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(251)
				::String tmp5 = _g1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(251)
				::String _switch_10 = (tmp5);
				if (  ( _switch_10==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
					HX_STACK_LINE(251)
					Float tmp6 = rendererSize;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(251)
					Float tmp7 = paddingSide1->get_pct();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(251)
					Float tmp8 = ((int)100 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(251)
					Float tmp9 = paddingSide2->get_pct();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(251)
					Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(251)
					Float tmp11 = (((Float)0.01) * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(251)
					tmp4 = (Float(tmp6) / Float(tmp11));
				}
				else  {
					HX_STACK_LINE(251)
					Float tmp6 = rendererSize;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(251)
					Float tmp7 = paddingSide2->get_px();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(251)
					Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(251)
					Float tmp9 = paddingSide1->get_pct();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(251)
					Float tmp10 = ((int)100 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(251)
					Float tmp11 = (((Float)0.01) * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(251)
					tmp4 = (Float(tmp8) / Float(tmp11));
				}
;
;
			}
			HX_STACK_LINE(251)
			Float holderSize = tmp4;		HX_STACK_VAR(holderSize,"holderSize");
			HX_STACK_LINE(251)
			Float tmp5 = paddingSide1->get_pct();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(251)
			Float tmp6 = (tmp5 * ((Float)0.01));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(251)
			Float tmp7 = holderSize;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(251)
			tmp = (tmp6 * tmp7);
		}
		else  {
			HX_STACK_LINE(251)
			tmp = paddingSide1->get_px();
		}
;
;
	}
	HX_STACK_LINE(251)
	Float paddingSide1Px = tmp;		HX_STACK_VAR(paddingSide1Px,"paddingSide1Px");
	HX_STACK_LINE(252)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(252)
	{
		HX_STACK_LINE(252)
		::String _g = paddingSide2->units;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(252)
		::String tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		::String _switch_11 = (tmp2);
		if (  ( _switch_11==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
			HX_STACK_LINE(252)
			bool tmp3 = (paddingSide2->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(252)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(252)
			if ((tmp3)){
				HX_STACK_LINE(252)
				::sx::backend::interfaces::IRenderer tmp5 = this->get___renderer();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(252)
				tmp4 = tmp5->getWidth();
			}
			else{
				HX_STACK_LINE(252)
				::sx::backend::interfaces::IRenderer tmp5 = this->get___renderer();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(252)
				tmp4 = tmp5->getHeight();
			}
			HX_STACK_LINE(252)
			Float rendererSize = tmp4;		HX_STACK_VAR(rendererSize,"rendererSize");
			HX_STACK_LINE(252)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(252)
			{
				HX_STACK_LINE(252)
				::String _g1 = paddingSide1->units;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(252)
				::String tmp6 = _g1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(252)
				::String _switch_12 = (tmp6);
				if (  ( _switch_12==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
					HX_STACK_LINE(252)
					Float tmp7 = rendererSize;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(252)
					Float tmp8 = paddingSide2->get_pct();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(252)
					Float tmp9 = ((int)100 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(252)
					Float tmp10 = paddingSide1->get_pct();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(252)
					Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(252)
					Float tmp12 = (((Float)0.01) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(252)
					tmp5 = (Float(tmp7) / Float(tmp12));
				}
				else  {
					HX_STACK_LINE(252)
					Float tmp7 = rendererSize;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(252)
					Float tmp8 = paddingSide1->get_px();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(252)
					Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(252)
					Float tmp10 = paddingSide2->get_pct();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(252)
					Float tmp11 = ((int)100 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(252)
					Float tmp12 = (((Float)0.01) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(252)
					tmp5 = (Float(tmp9) / Float(tmp12));
				}
;
;
			}
			HX_STACK_LINE(252)
			Float holderSize = tmp5;		HX_STACK_VAR(holderSize,"holderSize");
			HX_STACK_LINE(252)
			Float tmp6 = paddingSide2->get_pct();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(252)
			Float tmp7 = (tmp6 * ((Float)0.01));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(252)
			Float tmp8 = holderSize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(252)
			tmp1 = (tmp7 * tmp8);
		}
		else  {
			HX_STACK_LINE(252)
			tmp1 = paddingSide2->get_px();
		}
;
;
	}
	HX_STACK_LINE(252)
	Float paddingSide2Px = tmp1;		HX_STACK_VAR(paddingSide2Px,"paddingSide2Px");
	HX_STACK_LINE(254)
	::sx::properties::metric::Size tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(254)
	{
		HX_STACK_LINE(254)
		::sx::properties::metric::Size tmp3 = this->__helperSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(254)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(254)
		if ((tmp4)){
			HX_STACK_LINE(254)
			::sx::properties::metric::Size tmp5 = ::sx::properties::metric::Size_obj::__new(null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(254)
			this->__helperSize = tmp5;
		}
		HX_STACK_LINE(254)
		tmp2 = this->__helperSize;
	}
	HX_STACK_LINE(254)
	::sx::properties::metric::Size helperSize = tmp2;		HX_STACK_VAR(helperSize,"helperSize");
	HX_STACK_LINE(255)
	Float tmp3 = (rendererSizePx + paddingSide1Px);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(255)
	Float tmp4 = paddingSide2Px;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(255)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(255)
	helperSize->set_px(tmp5);
	HX_STACK_LINE(257)
	::sx::properties::metric::Size tmp6 = this->__helperSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(257)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC3(RendererHolder_obj,__getPaddedRendererSize,return )

Float RendererHolder_obj::__getPaddingPixels( ::sx::properties::metric::Size paddingSide,::sx::properties::metric::Size oppositeSide){
	HX_STACK_FRAME("sx.widgets.base.RendererHolder","__getPaddingPixels",0x6acadad2,"sx.widgets.base.RendererHolder.__getPaddingPixels","sx/widgets/base/RendererHolder.hx",266,0xc8927ebb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(paddingSide,"paddingSide")
	HX_STACK_ARG(oppositeSide,"oppositeSide")
	HX_STACK_LINE(266)
	::String _g = paddingSide->units;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(266)
	::String tmp = _g;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	::String _switch_13 = (tmp);
	if (  ( _switch_13==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
		HX_STACK_LINE(268)
		bool tmp1 = (paddingSide->orientation == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(268)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(268)
		if ((tmp1)){
			HX_STACK_LINE(268)
			::sx::backend::interfaces::IRenderer tmp3 = this->get___renderer();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(268)
			tmp2 = tmp3->getWidth();
		}
		else{
			HX_STACK_LINE(268)
			::sx::backend::interfaces::IRenderer tmp3 = this->get___renderer();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(268)
			tmp2 = tmp3->getHeight();
		}
		HX_STACK_LINE(268)
		Float rendererSize = tmp2;		HX_STACK_VAR(rendererSize,"rendererSize");
		HX_STACK_LINE(269)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(269)
		{
			HX_STACK_LINE(269)
			::String _g1 = oppositeSide->units;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(269)
			::String tmp4 = _g1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(269)
			::String _switch_14 = (tmp4);
			if (  ( _switch_14==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
				HX_STACK_LINE(270)
				Float tmp5 = rendererSize;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(270)
				Float tmp6 = paddingSide->get_pct();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(270)
				Float tmp7 = ((int)100 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(270)
				Float tmp8 = oppositeSide->get_pct();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(270)
				Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(270)
				Float tmp10 = (((Float)0.01) * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(270)
				tmp3 = (Float(tmp5) / Float(tmp10));
			}
			else  {
				HX_STACK_LINE(271)
				Float tmp5 = rendererSize;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(271)
				Float tmp6 = oppositeSide->get_px();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(271)
				Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(271)
				Float tmp8 = paddingSide->get_pct();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(271)
				Float tmp9 = ((int)100 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(271)
				Float tmp10 = (((Float)0.01) * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(271)
				tmp3 = (Float(tmp7) / Float(tmp10));
			}
;
;
		}
		HX_STACK_LINE(269)
		Float holderSize = tmp3;		HX_STACK_VAR(holderSize,"holderSize");
		HX_STACK_LINE(274)
		Float tmp4 = paddingSide->get_pct();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(274)
		Float tmp5 = (tmp4 * ((Float)0.01));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(274)
		Float tmp6 = holderSize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(274)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(274)
		return tmp7;
	}
	else  {
		HX_STACK_LINE(277)
		Float tmp1 = paddingSide->get_px();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(277)
		return tmp1;
	}
;
;
	HX_STACK_LINE(266)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC2(RendererHolder_obj,__getPaddingPixels,return )

::sx::properties::metric::Size RendererHolder_obj::__getHelperSize( ){
	HX_STACK_FRAME("sx.widgets.base.RendererHolder","__getHelperSize",0x014b8ddb,"sx.widgets.base.RendererHolder.__getHelperSize","sx/widgets/base/RendererHolder.hx",286,0xc8927ebb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(287)
	::sx::properties::metric::Size tmp = this->__helperSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(287)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(287)
	if ((tmp1)){
		HX_STACK_LINE(287)
		::sx::properties::metric::Size tmp2 = ::sx::properties::metric::Size_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(287)
		this->__helperSize = tmp2;
	}
	HX_STACK_LINE(289)
	::sx::properties::metric::Size tmp2 = this->__helperSize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(289)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererHolder_obj,__getHelperSize,return )

::sx::backend::interfaces::IRenderer RendererHolder_obj::get___renderer( ){
	HX_STACK_FRAME("sx.widgets.base.RendererHolder","get___renderer",0xe33d81f6,"sx.widgets.base.RendererHolder.get___renderer","sx/widgets/base/RendererHolder.hx",300,0xc8927ebb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(300)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RendererHolder_obj,get___renderer,return )

::sx::properties::AutoSize RendererHolder_obj::set_autoSize( ::sx::properties::AutoSize value){
	HX_STACK_FRAME("sx.widgets.base.RendererHolder","set_autoSize",0x7ab46217,"sx.widgets.base.RendererHolder.set_autoSize","sx/widgets/base/RendererHolder.hx",308,0xc8927ebb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(309)
	::sx::properties::AutoSize tmp = this->autoSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(309)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(309)
	if ((tmp1)){
		HX_STACK_LINE(310)
		this->autoSize = value;
	}
	else{
		HX_STACK_LINE(312)
		::sx::properties::AutoSize tmp2 = this->autoSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		::sx::properties::AutoSize tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(312)
		tmp2->copyValueFrom(tmp3);
	}
	HX_STACK_LINE(315)
	::sx::properties::AutoSize tmp2 = this->autoSize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(315)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererHolder_obj,set_autoSize,return )

::sx::properties::metric::Padding RendererHolder_obj::get_padding( ){
	HX_STACK_FRAME("sx.widgets.base.RendererHolder","get_padding",0x9f5ea65e,"sx.widgets.base.RendererHolder.get_padding","sx/widgets/base/RendererHolder.hx",320,0xc8927ebb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(320)
	::sx::properties::metric::Padding tmp = this->__padding;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererHolder_obj,get_padding,return )

::sx::properties::metric::Padding RendererHolder_obj::set_padding( ::sx::properties::metric::Size v){
	HX_STACK_FRAME("sx.widgets.base.RendererHolder","set_padding",0xa9cbad6a,"sx.widgets.base.RendererHolder.set_padding","sx/widgets/base/RendererHolder.hx",323,0xc8927ebb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(323)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(323)
	{
		HX_STACK_LINE(323)
		::sx::properties::metric::Padding tmp1 = this->__padding;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(323)
		::sx::properties::metric::Size tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(323)
		tmp1->copyValueFrom(tmp2);
		HX_STACK_LINE(323)
		::sx::properties::metric::Padding tmp3 = this->__padding;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(323)
		return tmp3;
	}
	HX_STACK_LINE(323)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererHolder_obj,set_padding,return )


RendererHolder_obj::RendererHolder_obj()
{
}

void RendererHolder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RendererHolder);
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(__padding,"__padding");
	HX_MARK_MEMBER_NAME(__rendererOnResizeIsSet,"__rendererOnResizeIsSet");
	HX_MARK_MEMBER_NAME(__adjustingSize,"__adjustingSize");
	HX_MARK_MEMBER_NAME(__helperSize,"__helperSize");
	::sx::widgets::Widget_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RendererHolder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(__padding,"__padding");
	HX_VISIT_MEMBER_NAME(__rendererOnResizeIsSet,"__rendererOnResizeIsSet");
	HX_VISIT_MEMBER_NAME(__adjustingSize,"__adjustingSize");
	HX_VISIT_MEMBER_NAME(__helperSize,"__helperSize");
	::sx::widgets::Widget_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RendererHolder_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == hx::paccAlways) return get_padding(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return autoSize; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__padding") ) { return __padding; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__renderer") ) { if (inCallProp == hx::paccAlways) return get___renderer(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_padding") ) { return get_padding_dyn(); }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return set_padding_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__helperSize") ) { return __helperSize; }
		if (HX_FIELD_EQ(inName,"__adjustSize") ) { return __adjustSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get___renderer") ) { return get___renderer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__adjustingSize") ) { return __adjustingSize; }
		if (HX_FIELD_EQ(inName,"__getHelperSize") ) { return __getHelperSize_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__createRenderer") ) { return __createRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"__paddingChanged") ) { return __paddingChanged_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__autoSizeChanged") ) { return __autoSizeChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"__rendererResized") ) { return __rendererResized_dyn(); }
		if (HX_FIELD_EQ(inName,"__propertyResized") ) { return __propertyResized_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__getPaddingPixels") ) { return __getPaddingPixels_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__rendererOnResizeIsSet") ) { return __rendererOnResizeIsSet; }
		if (HX_FIELD_EQ(inName,"__getPaddedRendererSize") ) { return __getPaddedRendererSize_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__widthProviderForPadding") ) { return __widthProviderForPadding_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__heightProviderForPadding") ) { return __heightProviderForPadding_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"__enableRendererResizeListener") ) { return __enableRendererResizeListener_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__disableRendererResizeListener") ) { return __disableRendererResizeListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RendererHolder_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == hx::paccAlways) return set_padding(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue);autoSize=inValue.Cast< ::sx::properties::AutoSize >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__padding") ) { __padding=inValue.Cast< ::sx::properties::metric::Padding >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__helperSize") ) { __helperSize=inValue.Cast< ::sx::properties::metric::Size >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__adjustingSize") ) { __adjustingSize=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__rendererOnResizeIsSet") ) { __rendererOnResizeIsSet=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RendererHolder_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void RendererHolder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	outFields->push(HX_HCSTRING("__padding","\xb1","\xaa","\xcb","\x51"));
	outFields->push(HX_HCSTRING("__renderer","\x63","\x38","\x14","\x56"));
	outFields->push(HX_HCSTRING("__rendererOnResizeIsSet","\x02","\xba","\xe3","\x4b"));
	outFields->push(HX_HCSTRING("__adjustingSize","\xf4","\x9e","\xd9","\x1e"));
	outFields->push(HX_HCSTRING("__helperSize","\x6f","\x14","\xa5","\x1f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sx::properties::AutoSize*/ ,(int)offsetof(RendererHolder_obj,autoSize),HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f")},
	{hx::fsObject /*::sx::properties::metric::Padding*/ ,(int)offsetof(RendererHolder_obj,__padding),HX_HCSTRING("__padding","\xb1","\xaa","\xcb","\x51")},
	{hx::fsBool,(int)offsetof(RendererHolder_obj,__rendererOnResizeIsSet),HX_HCSTRING("__rendererOnResizeIsSet","\x02","\xba","\xe3","\x4b")},
	{hx::fsBool,(int)offsetof(RendererHolder_obj,__adjustingSize),HX_HCSTRING("__adjustingSize","\xf4","\x9e","\xd9","\x1e")},
	{hx::fsObject /*::sx::properties::metric::Size*/ ,(int)offsetof(RendererHolder_obj,__helperSize),HX_HCSTRING("__helperSize","\x6f","\x14","\xa5","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"),
	HX_HCSTRING("__padding","\xb1","\xaa","\xcb","\x51"),
	HX_HCSTRING("__rendererOnResizeIsSet","\x02","\xba","\xe3","\x4b"),
	HX_HCSTRING("__adjustingSize","\xf4","\x9e","\xd9","\x1e"),
	HX_HCSTRING("__helperSize","\x6f","\x14","\xa5","\x1f"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("__createRenderer","\x7f","\xcf","\x55","\x39"),
	HX_HCSTRING("__autoSizeChanged","\xe4","\x13","\xdb","\x65"),
	HX_HCSTRING("__disableRendererResizeListener","\x13","\xd8","\x18","\x12"),
	HX_HCSTRING("__enableRendererResizeListener","\x2e","\x73","\x51","\xdd"),
	HX_HCSTRING("__rendererResized","\xcd","\x6d","\xa9","\xac"),
	HX_HCSTRING("__propertyResized","\xfb","\x50","\xbf","\xac"),
	HX_HCSTRING("__adjustSize","\x10","\x08","\xfd","\x27"),
	HX_HCSTRING("__paddingChanged","\x43","\x56","\x5c","\xf3"),
	HX_HCSTRING("__widthProviderForPadding","\xdf","\x3e","\xb1","\x60"),
	HX_HCSTRING("__heightProviderForPadding","\x40","\x3f","\x84","\x8f"),
	HX_HCSTRING("__getPaddedRendererSize","\x2a","\x4d","\x83","\x43"),
	HX_HCSTRING("__getPaddingPixels","\x88","\xac","\x7b","\x4c"),
	HX_HCSTRING("__getHelperSize","\x65","\x2e","\x36","\xcb"),
	HX_HCSTRING("get___renderer","\xac","\xc0","\x09","\xcc"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("get_padding","\xe8","\xb9","\x77","\x56"),
	HX_HCSTRING("set_padding","\xf4","\xc0","\xe4","\x60"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RendererHolder_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RendererHolder_obj::__mClass,"__mClass");
};

#endif

hx::Class RendererHolder_obj::__mClass;

void RendererHolder_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.widgets.base.RendererHolder","\xe4","\xf3","\xf0","\x79");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &RendererHolder_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RendererHolder_obj >;
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
} // end namespace widgets
} // end namespace base
