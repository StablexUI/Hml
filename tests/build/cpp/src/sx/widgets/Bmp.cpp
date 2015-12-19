#include <hxcpp.h>

#ifndef INCLUDED_sx_Sx
#include <sx/Sx.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_BackendManager
#include <sx/backend/dummy/BackendManager.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_BitmapRenderer
#include <sx/backend/dummy/BitmapRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IBackendManager
#include <sx/backend/interfaces/IBackendManager.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IBitmapRenderer
#include <sx/backend/interfaces/IBitmapRenderer.h>
#endif
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
#ifndef INCLUDED_sx_tools_PaddingTools
#include <sx/tools/PaddingTools.h>
#endif
#ifndef INCLUDED_sx_widgets_Bmp
#include <sx/widgets/Bmp.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
#ifndef INCLUDED_sx_widgets_base_RendererHolder
#include <sx/widgets/base/RendererHolder.h>
#endif
namespace sx{
namespace widgets{

Void Bmp_obj::__construct()
{
HX_STACK_FRAME("sx.widgets.Bmp","new",0x2927928f,"sx.widgets.Bmp.new","sx/widgets/Bmp.hx",18,0x665b4a43)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(40)
	this->__dontUpdateBitmapScaling = false;
	HX_STACK_LINE(37)
	this->smooth = false;
	HX_STACK_LINE(35)
	this->keepAspect = true;
	HX_STACK_LINE(18)
	super::__construct();
}
;
	return null();
}

//Bmp_obj::~Bmp_obj() { }

Dynamic Bmp_obj::__CreateEmpty() { return  new Bmp_obj; }
hx::ObjectPtr< Bmp_obj > Bmp_obj::__new()
{  hx::ObjectPtr< Bmp_obj > _result_ = new Bmp_obj();
	_result_->__construct();
	return _result_;}

Dynamic Bmp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bmp_obj > _result_ = new Bmp_obj();
	_result_->__construct();
	return _result_;}

Void Bmp_obj::__createRenderer( ){
{
		HX_STACK_FRAME("sx.widgets.Bmp","__createRenderer",0xdfa31bf0,"sx.widgets.Bmp.__createRenderer","sx/widgets/Bmp.hx",47,0x665b4a43)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		::sx::backend::dummy::BackendManager tmp = ::sx::Sx_obj::get_backendManager();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::sx::backend::dummy::BitmapRenderer tmp1 = tmp->bitmapRenderer(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		this->renderer = tmp1;
	}
return null();
}


Void Bmp_obj::__propertyResized( ::sx::properties::metric::Size changed,::String previousUnits,Float previousValue){
{
		HX_STACK_FRAME("sx.widgets.Bmp","__propertyResized",0x8a14e76a,"sx.widgets.Bmp.__propertyResized","sx/widgets/Bmp.hx",56,0x665b4a43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changed,"changed")
		HX_STACK_ARG(previousUnits,"previousUnits")
		HX_STACK_ARG(previousValue,"previousValue")
		HX_STACK_LINE(57)
		bool tmp = this->__dontUpdateBitmapScaling;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		if ((tmp)){
			HX_STACK_LINE(58)
			::sx::properties::metric::Size tmp1 = changed;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(58)
			::String tmp2 = previousUnits;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			Float tmp3 = previousValue;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(58)
			this->super::__propertyResized(tmp1,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(60)
			this->__dontUpdateBitmapScaling = true;
			HX_STACK_LINE(61)
			::sx::properties::metric::Size tmp1 = changed;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(61)
			::String tmp2 = previousUnits;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			Float tmp3 = previousValue;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			this->super::__propertyResized(tmp1,tmp2,tmp3);
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				::sx::properties::AutoSize tmp4 = this->autoSize;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(62)
				bool tmp5 = tmp4->both();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(62)
				if ((tmp5)){
					HX_STACK_LINE(62)
					::sx::backend::dummy::BitmapRenderer tmp6 = this->renderer;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(62)
					tmp6->setBitmapScale((int)1,(int)1);
				}
				else{
					HX_STACK_LINE(62)
					::sx::properties::AutoSize tmp6 = this->autoSize;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(62)
					bool tmp7 = tmp6->get_width();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(62)
					if ((tmp7)){
						HX_STACK_LINE(62)
						Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(62)
						{
							HX_STACK_LINE(62)
							::sx::backend::dummy::BitmapRenderer tmp9 = this->renderer;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(62)
							::sx::backend::dummy::BitmapRenderer _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(62)
							bool tmp10 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(62)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(62)
							bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(62)
							if ((tmp11)){
								HX_STACK_LINE(62)
								tmp12 = (_this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());
							}
							else{
								HX_STACK_LINE(62)
								tmp12 = true;
							}
							HX_STACK_LINE(62)
							if ((tmp12)){
								HX_STACK_LINE(62)
								tmp8 = (int)0;
							}
							else{
								HX_STACK_LINE(62)
								tmp8 = _this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
							}
						}
						HX_STACK_LINE(62)
						Float bitmapHeight = tmp8;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
						HX_STACK_LINE(62)
						bool tmp9 = (bitmapHeight <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(62)
						if ((tmp9)){
							HX_STACK_LINE(62)
							::sx::backend::dummy::BitmapRenderer tmp10 = this->renderer;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(62)
							tmp10->setBitmapScale((int)0,(int)0);
						}
						else{
							HX_STACK_LINE(62)
							bool tmp10 = this->keepAspect;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(62)
							if ((tmp10)){
								HX_STACK_LINE(62)
								::sx::backend::dummy::BitmapRenderer tmp11 = this->renderer;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(62)
								tmp11->setBitmapScale((int)1,(int)1);
							}
							else{
								HX_STACK_LINE(62)
								::sx::properties::metric::Size tmp11 = this->get_height();		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(62)
								Float tmp12 = tmp11->get_px();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(62)
								::sx::properties::metric::Padding tmp13 = this->get_padding();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(62)
								Float tmp14 = ::sx::tools::PaddingTools_obj::sumPx(tmp13,HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(62)
								Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(62)
								Float renderHeight = tmp15;		HX_STACK_VAR(renderHeight,"renderHeight");
								HX_STACK_LINE(62)
								bool tmp16 = (renderHeight <= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(62)
								if ((tmp16)){
									HX_STACK_LINE(62)
									::sx::backend::dummy::BitmapRenderer tmp17 = this->renderer;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(62)
									tmp17->setBitmapScale((int)0,(int)0);
								}
								else{
									HX_STACK_LINE(62)
									Float tmp17 = (Float(renderHeight) / Float(bitmapHeight));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(62)
									Float scaleY = tmp17;		HX_STACK_VAR(scaleY,"scaleY");
									HX_STACK_LINE(62)
									::sx::backend::dummy::BitmapRenderer tmp18 = this->renderer;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(62)
									Float tmp19 = scaleY;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(62)
									tmp18->setBitmapScale((int)1,tmp19);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(62)
						::sx::properties::AutoSize tmp8 = this->autoSize;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(62)
						bool tmp9 = tmp8->get_height();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(62)
						if ((tmp9)){
							HX_STACK_LINE(62)
							Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(62)
							{
								HX_STACK_LINE(62)
								::sx::backend::dummy::BitmapRenderer tmp11 = this->renderer;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(62)
								::sx::backend::dummy::BitmapRenderer _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(62)
								bool tmp12 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(62)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(62)
								bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(62)
								if ((tmp13)){
									HX_STACK_LINE(62)
									tmp14 = (_this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());
								}
								else{
									HX_STACK_LINE(62)
									tmp14 = true;
								}
								HX_STACK_LINE(62)
								if ((tmp14)){
									HX_STACK_LINE(62)
									tmp10 = (int)0;
								}
								else{
									HX_STACK_LINE(62)
									tmp10 = _this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
								}
							}
							HX_STACK_LINE(62)
							Float bitmapWidth = tmp10;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
							HX_STACK_LINE(62)
							bool tmp11 = (bitmapWidth <= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(62)
							if ((tmp11)){
								HX_STACK_LINE(62)
								::sx::backend::dummy::BitmapRenderer tmp12 = this->renderer;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(62)
								tmp12->setBitmapScale((int)0,(int)0);
							}
							else{
								HX_STACK_LINE(62)
								bool tmp12 = this->keepAspect;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(62)
								if ((tmp12)){
									HX_STACK_LINE(62)
									::sx::backend::dummy::BitmapRenderer tmp13 = this->renderer;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(62)
									tmp13->setBitmapScale((int)1,(int)1);
								}
								else{
									HX_STACK_LINE(62)
									::sx::properties::metric::Size tmp13 = this->get_width();		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(62)
									Float tmp14 = tmp13->get_px();		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(62)
									::sx::properties::metric::Padding tmp15 = this->get_padding();		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(62)
									Float tmp16 = ::sx::tools::PaddingTools_obj::sumPx(tmp15,HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(62)
									Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(62)
									Float renderWidth = tmp17;		HX_STACK_VAR(renderWidth,"renderWidth");
									HX_STACK_LINE(62)
									bool tmp18 = (renderWidth <= (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(62)
									if ((tmp18)){
										HX_STACK_LINE(62)
										::sx::backend::dummy::BitmapRenderer tmp19 = this->renderer;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(62)
										tmp19->setBitmapScale((int)0,(int)0);
									}
									else{
										HX_STACK_LINE(62)
										Float tmp19 = (Float(renderWidth) / Float(bitmapWidth));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(62)
										Float scaleX = tmp19;		HX_STACK_VAR(scaleX,"scaleX");
										HX_STACK_LINE(62)
										::sx::backend::dummy::BitmapRenderer tmp20 = this->renderer;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(62)
										Float tmp21 = scaleX;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(62)
										tmp20->setBitmapScale(tmp21,(int)1);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(62)
							Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(62)
							{
								HX_STACK_LINE(62)
								::sx::backend::dummy::BitmapRenderer tmp11 = this->renderer;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(62)
								::sx::backend::dummy::BitmapRenderer _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(62)
								bool tmp12 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(62)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(62)
								bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(62)
								if ((tmp13)){
									HX_STACK_LINE(62)
									tmp14 = (_this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());
								}
								else{
									HX_STACK_LINE(62)
									tmp14 = true;
								}
								HX_STACK_LINE(62)
								if ((tmp14)){
									HX_STACK_LINE(62)
									tmp10 = (int)0;
								}
								else{
									HX_STACK_LINE(62)
									tmp10 = _this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
								}
							}
							HX_STACK_LINE(62)
							Float bitmapWidth = tmp10;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
							HX_STACK_LINE(62)
							Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(62)
							{
								HX_STACK_LINE(62)
								::sx::backend::dummy::BitmapRenderer tmp12 = this->renderer;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(62)
								::sx::backend::dummy::BitmapRenderer _this = tmp12;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(62)
								bool tmp13 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(62)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(62)
								bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(62)
								if ((tmp14)){
									HX_STACK_LINE(62)
									tmp15 = (_this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());
								}
								else{
									HX_STACK_LINE(62)
									tmp15 = true;
								}
								HX_STACK_LINE(62)
								if ((tmp15)){
									HX_STACK_LINE(62)
									tmp11 = (int)0;
								}
								else{
									HX_STACK_LINE(62)
									tmp11 = _this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
								}
							}
							HX_STACK_LINE(62)
							Float bitmapHeight = tmp11;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
							HX_STACK_LINE(62)
							bool tmp12 = (bitmapWidth <= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(62)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(62)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(62)
							if ((tmp13)){
								HX_STACK_LINE(62)
								tmp14 = (bitmapHeight <= (int)0);
							}
							else{
								HX_STACK_LINE(62)
								tmp14 = true;
							}
							HX_STACK_LINE(62)
							if ((tmp14)){
								HX_STACK_LINE(62)
								::sx::backend::dummy::BitmapRenderer tmp15 = this->renderer;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(62)
								tmp15->setBitmapScale((int)0,(int)0);
							}
							else{
								HX_STACK_LINE(62)
								::sx::properties::metric::Size tmp15 = this->get_width();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(62)
								Float tmp16 = tmp15->get_px();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(62)
								::sx::properties::metric::Padding tmp17 = this->get_padding();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(62)
								::sx::properties::metric::Size tmp18 = tmp17->get_left();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(62)
								Float tmp19 = tmp18->get_px();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(62)
								Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(62)
								::sx::properties::metric::Padding tmp21 = this->get_padding();		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(62)
								::sx::properties::metric::Size tmp22 = tmp21->get_right();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(62)
								Float tmp23 = tmp22->get_px();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(62)
								Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(62)
								Float renderWidth = tmp24;		HX_STACK_VAR(renderWidth,"renderWidth");
								HX_STACK_LINE(62)
								::sx::properties::metric::Size tmp25 = this->get_height();		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(62)
								Float tmp26 = tmp25->get_px();		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(62)
								::sx::properties::metric::Padding tmp27 = this->get_padding();		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(62)
								::sx::properties::metric::Size tmp28 = tmp27->get_top();		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(62)
								Float tmp29 = tmp28->get_px();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(62)
								Float tmp30 = (tmp26 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(62)
								::sx::properties::metric::Padding tmp31 = this->get_padding();		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(62)
								::sx::properties::metric::Size tmp32 = tmp31->get_bottom();		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(62)
								Float tmp33 = tmp32->get_px();		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(62)
								Float tmp34 = (tmp30 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(62)
								Float renderHeight = tmp34;		HX_STACK_VAR(renderHeight,"renderHeight");
								HX_STACK_LINE(62)
								bool tmp35 = (renderWidth <= (int)0);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(62)
								bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(62)
								bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(62)
								if ((tmp36)){
									HX_STACK_LINE(62)
									tmp37 = (renderHeight <= (int)0);
								}
								else{
									HX_STACK_LINE(62)
									tmp37 = true;
								}
								HX_STACK_LINE(62)
								if ((tmp37)){
									HX_STACK_LINE(62)
									::sx::backend::dummy::BitmapRenderer tmp38 = this->renderer;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(62)
									tmp38->setBitmapScale((int)0,(int)0);
								}
								else{
									HX_STACK_LINE(62)
									Float tmp38 = (Float(renderWidth) / Float(bitmapWidth));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(62)
									Float scaleX = tmp38;		HX_STACK_VAR(scaleX,"scaleX");
									HX_STACK_LINE(62)
									Float tmp39 = (Float(renderHeight) / Float(bitmapHeight));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(62)
									Float scaleY = tmp39;		HX_STACK_VAR(scaleY,"scaleY");
									HX_STACK_LINE(62)
									bool tmp40 = this->keepAspect;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(62)
									if ((tmp40)){
										HX_STACK_LINE(62)
										bool tmp41 = (scaleX < scaleY);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(62)
										if ((tmp41)){
											HX_STACK_LINE(62)
											::sx::backend::dummy::BitmapRenderer tmp42 = this->renderer;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(62)
											Float tmp43 = scaleX;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(62)
											Float tmp44 = scaleX;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(62)
											tmp42->setBitmapScale(tmp43,tmp44);
										}
										else{
											HX_STACK_LINE(62)
											::sx::backend::dummy::BitmapRenderer tmp42 = this->renderer;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(62)
											Float tmp43 = scaleY;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(62)
											Float tmp44 = scaleY;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(62)
											tmp42->setBitmapScale(tmp43,tmp44);
										}
									}
									else{
										HX_STACK_LINE(62)
										::sx::backend::dummy::BitmapRenderer tmp41 = this->renderer;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(62)
										Float tmp42 = scaleX;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(62)
										Float tmp43 = scaleY;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(62)
										tmp41->setBitmapScale(tmp42,tmp43);
									}
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(63)
			this->__dontUpdateBitmapScaling = false;
		}
	}
return null();
}


Void Bmp_obj::__paddingChanged( bool horizontal,bool vertical){
{
		HX_STACK_FRAME("sx.widgets.Bmp","__paddingChanged",0x99a9a2b4,"sx.widgets.Bmp.__paddingChanged","sx/widgets/Bmp.hx",72,0x665b4a43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(horizontal,"horizontal")
		HX_STACK_ARG(vertical,"vertical")
		HX_STACK_LINE(73)
		bool tmp = this->__dontUpdateBitmapScaling;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		if ((tmp)){
			HX_STACK_LINE(74)
			bool tmp1 = horizontal;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(74)
			bool tmp2 = vertical;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(74)
			this->super::__paddingChanged(tmp1,tmp2);
		}
		else{
			HX_STACK_LINE(76)
			this->__dontUpdateBitmapScaling = true;
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				::sx::properties::AutoSize tmp1 = this->autoSize;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(77)
				bool tmp2 = tmp1->both();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(77)
				if ((tmp2)){
					HX_STACK_LINE(77)
					::sx::backend::dummy::BitmapRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(77)
					tmp3->setBitmapScale((int)1,(int)1);
				}
				else{
					HX_STACK_LINE(77)
					::sx::properties::AutoSize tmp3 = this->autoSize;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(77)
					bool tmp4 = tmp3->get_width();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(77)
					if ((tmp4)){
						HX_STACK_LINE(77)
						Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(77)
						{
							HX_STACK_LINE(77)
							::sx::backend::dummy::BitmapRenderer tmp6 = this->renderer;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(77)
							::sx::backend::dummy::BitmapRenderer _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(77)
							bool tmp7 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(77)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(77)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(77)
							if ((tmp8)){
								HX_STACK_LINE(77)
								tmp9 = (_this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());
							}
							else{
								HX_STACK_LINE(77)
								tmp9 = true;
							}
							HX_STACK_LINE(77)
							if ((tmp9)){
								HX_STACK_LINE(77)
								tmp5 = (int)0;
							}
							else{
								HX_STACK_LINE(77)
								tmp5 = _this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
							}
						}
						HX_STACK_LINE(77)
						Float bitmapHeight = tmp5;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
						HX_STACK_LINE(77)
						bool tmp6 = (bitmapHeight <= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(77)
						if ((tmp6)){
							HX_STACK_LINE(77)
							::sx::backend::dummy::BitmapRenderer tmp7 = this->renderer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(77)
							tmp7->setBitmapScale((int)0,(int)0);
						}
						else{
							HX_STACK_LINE(77)
							bool tmp7 = this->keepAspect;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(77)
							if ((tmp7)){
								HX_STACK_LINE(77)
								::sx::backend::dummy::BitmapRenderer tmp8 = this->renderer;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(77)
								tmp8->setBitmapScale((int)1,(int)1);
							}
							else{
								HX_STACK_LINE(77)
								::sx::properties::metric::Size tmp8 = this->get_height();		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(77)
								Float tmp9 = tmp8->get_px();		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(77)
								::sx::properties::metric::Padding tmp10 = this->get_padding();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(77)
								Float tmp11 = ::sx::tools::PaddingTools_obj::sumPx(tmp10,HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(77)
								Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(77)
								Float renderHeight = tmp12;		HX_STACK_VAR(renderHeight,"renderHeight");
								HX_STACK_LINE(77)
								bool tmp13 = (renderHeight <= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(77)
								if ((tmp13)){
									HX_STACK_LINE(77)
									::sx::backend::dummy::BitmapRenderer tmp14 = this->renderer;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(77)
									tmp14->setBitmapScale((int)0,(int)0);
								}
								else{
									HX_STACK_LINE(77)
									Float tmp14 = (Float(renderHeight) / Float(bitmapHeight));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(77)
									Float scaleY = tmp14;		HX_STACK_VAR(scaleY,"scaleY");
									HX_STACK_LINE(77)
									::sx::backend::dummy::BitmapRenderer tmp15 = this->renderer;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(77)
									Float tmp16 = scaleY;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(77)
									tmp15->setBitmapScale((int)1,tmp16);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(77)
						::sx::properties::AutoSize tmp5 = this->autoSize;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(77)
						bool tmp6 = tmp5->get_height();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(77)
						if ((tmp6)){
							HX_STACK_LINE(77)
							Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(77)
							{
								HX_STACK_LINE(77)
								::sx::backend::dummy::BitmapRenderer tmp8 = this->renderer;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(77)
								::sx::backend::dummy::BitmapRenderer _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(77)
								bool tmp9 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(77)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(77)
								bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(77)
								if ((tmp10)){
									HX_STACK_LINE(77)
									tmp11 = (_this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());
								}
								else{
									HX_STACK_LINE(77)
									tmp11 = true;
								}
								HX_STACK_LINE(77)
								if ((tmp11)){
									HX_STACK_LINE(77)
									tmp7 = (int)0;
								}
								else{
									HX_STACK_LINE(77)
									tmp7 = _this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
								}
							}
							HX_STACK_LINE(77)
							Float bitmapWidth = tmp7;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
							HX_STACK_LINE(77)
							bool tmp8 = (bitmapWidth <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(77)
							if ((tmp8)){
								HX_STACK_LINE(77)
								::sx::backend::dummy::BitmapRenderer tmp9 = this->renderer;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(77)
								tmp9->setBitmapScale((int)0,(int)0);
							}
							else{
								HX_STACK_LINE(77)
								bool tmp9 = this->keepAspect;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(77)
								if ((tmp9)){
									HX_STACK_LINE(77)
									::sx::backend::dummy::BitmapRenderer tmp10 = this->renderer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(77)
									tmp10->setBitmapScale((int)1,(int)1);
								}
								else{
									HX_STACK_LINE(77)
									::sx::properties::metric::Size tmp10 = this->get_width();		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(77)
									Float tmp11 = tmp10->get_px();		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(77)
									::sx::properties::metric::Padding tmp12 = this->get_padding();		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(77)
									Float tmp13 = ::sx::tools::PaddingTools_obj::sumPx(tmp12,HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(77)
									Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(77)
									Float renderWidth = tmp14;		HX_STACK_VAR(renderWidth,"renderWidth");
									HX_STACK_LINE(77)
									bool tmp15 = (renderWidth <= (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(77)
									if ((tmp15)){
										HX_STACK_LINE(77)
										::sx::backend::dummy::BitmapRenderer tmp16 = this->renderer;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(77)
										tmp16->setBitmapScale((int)0,(int)0);
									}
									else{
										HX_STACK_LINE(77)
										Float tmp16 = (Float(renderWidth) / Float(bitmapWidth));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(77)
										Float scaleX = tmp16;		HX_STACK_VAR(scaleX,"scaleX");
										HX_STACK_LINE(77)
										::sx::backend::dummy::BitmapRenderer tmp17 = this->renderer;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(77)
										Float tmp18 = scaleX;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(77)
										tmp17->setBitmapScale(tmp18,(int)1);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(77)
							Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(77)
							{
								HX_STACK_LINE(77)
								::sx::backend::dummy::BitmapRenderer tmp8 = this->renderer;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(77)
								::sx::backend::dummy::BitmapRenderer _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(77)
								bool tmp9 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(77)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(77)
								bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(77)
								if ((tmp10)){
									HX_STACK_LINE(77)
									tmp11 = (_this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());
								}
								else{
									HX_STACK_LINE(77)
									tmp11 = true;
								}
								HX_STACK_LINE(77)
								if ((tmp11)){
									HX_STACK_LINE(77)
									tmp7 = (int)0;
								}
								else{
									HX_STACK_LINE(77)
									tmp7 = _this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
								}
							}
							HX_STACK_LINE(77)
							Float bitmapWidth = tmp7;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
							HX_STACK_LINE(77)
							Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(77)
							{
								HX_STACK_LINE(77)
								::sx::backend::dummy::BitmapRenderer tmp9 = this->renderer;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(77)
								::sx::backend::dummy::BitmapRenderer _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(77)
								bool tmp10 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(77)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(77)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(77)
								if ((tmp11)){
									HX_STACK_LINE(77)
									tmp12 = (_this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());
								}
								else{
									HX_STACK_LINE(77)
									tmp12 = true;
								}
								HX_STACK_LINE(77)
								if ((tmp12)){
									HX_STACK_LINE(77)
									tmp8 = (int)0;
								}
								else{
									HX_STACK_LINE(77)
									tmp8 = _this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
								}
							}
							HX_STACK_LINE(77)
							Float bitmapHeight = tmp8;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
							HX_STACK_LINE(77)
							bool tmp9 = (bitmapWidth <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(77)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(77)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(77)
							if ((tmp10)){
								HX_STACK_LINE(77)
								tmp11 = (bitmapHeight <= (int)0);
							}
							else{
								HX_STACK_LINE(77)
								tmp11 = true;
							}
							HX_STACK_LINE(77)
							if ((tmp11)){
								HX_STACK_LINE(77)
								::sx::backend::dummy::BitmapRenderer tmp12 = this->renderer;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(77)
								tmp12->setBitmapScale((int)0,(int)0);
							}
							else{
								HX_STACK_LINE(77)
								::sx::properties::metric::Size tmp12 = this->get_width();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(77)
								Float tmp13 = tmp12->get_px();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(77)
								::sx::properties::metric::Padding tmp14 = this->get_padding();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(77)
								::sx::properties::metric::Size tmp15 = tmp14->get_left();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(77)
								Float tmp16 = tmp15->get_px();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(77)
								Float tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(77)
								::sx::properties::metric::Padding tmp18 = this->get_padding();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(77)
								::sx::properties::metric::Size tmp19 = tmp18->get_right();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(77)
								Float tmp20 = tmp19->get_px();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(77)
								Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(77)
								Float renderWidth = tmp21;		HX_STACK_VAR(renderWidth,"renderWidth");
								HX_STACK_LINE(77)
								::sx::properties::metric::Size tmp22 = this->get_height();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(77)
								Float tmp23 = tmp22->get_px();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(77)
								::sx::properties::metric::Padding tmp24 = this->get_padding();		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(77)
								::sx::properties::metric::Size tmp25 = tmp24->get_top();		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(77)
								Float tmp26 = tmp25->get_px();		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(77)
								Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(77)
								::sx::properties::metric::Padding tmp28 = this->get_padding();		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(77)
								::sx::properties::metric::Size tmp29 = tmp28->get_bottom();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(77)
								Float tmp30 = tmp29->get_px();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(77)
								Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(77)
								Float renderHeight = tmp31;		HX_STACK_VAR(renderHeight,"renderHeight");
								HX_STACK_LINE(77)
								bool tmp32 = (renderWidth <= (int)0);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(77)
								bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(77)
								bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(77)
								if ((tmp33)){
									HX_STACK_LINE(77)
									tmp34 = (renderHeight <= (int)0);
								}
								else{
									HX_STACK_LINE(77)
									tmp34 = true;
								}
								HX_STACK_LINE(77)
								if ((tmp34)){
									HX_STACK_LINE(77)
									::sx::backend::dummy::BitmapRenderer tmp35 = this->renderer;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(77)
									tmp35->setBitmapScale((int)0,(int)0);
								}
								else{
									HX_STACK_LINE(77)
									Float tmp35 = (Float(renderWidth) / Float(bitmapWidth));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(77)
									Float scaleX = tmp35;		HX_STACK_VAR(scaleX,"scaleX");
									HX_STACK_LINE(77)
									Float tmp36 = (Float(renderHeight) / Float(bitmapHeight));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(77)
									Float scaleY = tmp36;		HX_STACK_VAR(scaleY,"scaleY");
									HX_STACK_LINE(77)
									bool tmp37 = this->keepAspect;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(77)
									if ((tmp37)){
										HX_STACK_LINE(77)
										bool tmp38 = (scaleX < scaleY);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(77)
										if ((tmp38)){
											HX_STACK_LINE(77)
											::sx::backend::dummy::BitmapRenderer tmp39 = this->renderer;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(77)
											Float tmp40 = scaleX;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(77)
											Float tmp41 = scaleX;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(77)
											tmp39->setBitmapScale(tmp40,tmp41);
										}
										else{
											HX_STACK_LINE(77)
											::sx::backend::dummy::BitmapRenderer tmp39 = this->renderer;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(77)
											Float tmp40 = scaleY;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(77)
											Float tmp41 = scaleY;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(77)
											tmp39->setBitmapScale(tmp40,tmp41);
										}
									}
									else{
										HX_STACK_LINE(77)
										::sx::backend::dummy::BitmapRenderer tmp38 = this->renderer;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(77)
										Float tmp39 = scaleX;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(77)
										Float tmp40 = scaleY;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(77)
										tmp38->setBitmapScale(tmp39,tmp40);
									}
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(78)
			bool tmp1 = horizontal;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			bool tmp2 = vertical;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			this->super::__paddingChanged(tmp1,tmp2);
			HX_STACK_LINE(79)
			this->__dontUpdateBitmapScaling = false;
		}
	}
return null();
}


Void Bmp_obj::__autoSizeChanged( bool widthChanged,bool heightChanged){
{
		HX_STACK_FRAME("sx.widgets.Bmp","__autoSizeChanged",0x4330aa53,"sx.widgets.Bmp.__autoSizeChanged","sx/widgets/Bmp.hx",88,0x665b4a43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widthChanged,"widthChanged")
		HX_STACK_ARG(heightChanged,"heightChanged")
		HX_STACK_LINE(89)
		bool tmp = this->__dontUpdateBitmapScaling;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		if ((tmp)){
			HX_STACK_LINE(90)
			bool tmp1 = widthChanged;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(90)
			bool tmp2 = heightChanged;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			this->super::__paddingChanged(tmp1,tmp2);
		}
		else{
			HX_STACK_LINE(92)
			this->__dontUpdateBitmapScaling = true;
			HX_STACK_LINE(93)
			{
				HX_STACK_LINE(93)
				::sx::properties::AutoSize tmp1 = this->autoSize;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(93)
				bool tmp2 = tmp1->both();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(93)
				if ((tmp2)){
					HX_STACK_LINE(93)
					::sx::backend::dummy::BitmapRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(93)
					tmp3->setBitmapScale((int)1,(int)1);
				}
				else{
					HX_STACK_LINE(93)
					::sx::properties::AutoSize tmp3 = this->autoSize;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(93)
					bool tmp4 = tmp3->get_width();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(93)
					if ((tmp4)){
						HX_STACK_LINE(93)
						Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(93)
						{
							HX_STACK_LINE(93)
							::sx::backend::dummy::BitmapRenderer tmp6 = this->renderer;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(93)
							::sx::backend::dummy::BitmapRenderer _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(93)
							bool tmp7 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(93)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(93)
							if ((tmp8)){
								HX_STACK_LINE(93)
								tmp9 = (_this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());
							}
							else{
								HX_STACK_LINE(93)
								tmp9 = true;
							}
							HX_STACK_LINE(93)
							if ((tmp9)){
								HX_STACK_LINE(93)
								tmp5 = (int)0;
							}
							else{
								HX_STACK_LINE(93)
								tmp5 = _this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
							}
						}
						HX_STACK_LINE(93)
						Float bitmapHeight = tmp5;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
						HX_STACK_LINE(93)
						bool tmp6 = (bitmapHeight <= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(93)
						if ((tmp6)){
							HX_STACK_LINE(93)
							::sx::backend::dummy::BitmapRenderer tmp7 = this->renderer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(93)
							tmp7->setBitmapScale((int)0,(int)0);
						}
						else{
							HX_STACK_LINE(93)
							bool tmp7 = this->keepAspect;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(93)
							if ((tmp7)){
								HX_STACK_LINE(93)
								::sx::backend::dummy::BitmapRenderer tmp8 = this->renderer;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(93)
								tmp8->setBitmapScale((int)1,(int)1);
							}
							else{
								HX_STACK_LINE(93)
								::sx::properties::metric::Size tmp8 = this->get_height();		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(93)
								Float tmp9 = tmp8->get_px();		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								::sx::properties::metric::Padding tmp10 = this->get_padding();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(93)
								Float tmp11 = ::sx::tools::PaddingTools_obj::sumPx(tmp10,HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(93)
								Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(93)
								Float renderHeight = tmp12;		HX_STACK_VAR(renderHeight,"renderHeight");
								HX_STACK_LINE(93)
								bool tmp13 = (renderHeight <= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(93)
								if ((tmp13)){
									HX_STACK_LINE(93)
									::sx::backend::dummy::BitmapRenderer tmp14 = this->renderer;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									tmp14->setBitmapScale((int)0,(int)0);
								}
								else{
									HX_STACK_LINE(93)
									Float tmp14 = (Float(renderHeight) / Float(bitmapHeight));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									Float scaleY = tmp14;		HX_STACK_VAR(scaleY,"scaleY");
									HX_STACK_LINE(93)
									::sx::backend::dummy::BitmapRenderer tmp15 = this->renderer;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(93)
									Float tmp16 = scaleY;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(93)
									tmp15->setBitmapScale((int)1,tmp16);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(93)
						::sx::properties::AutoSize tmp5 = this->autoSize;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(93)
						bool tmp6 = tmp5->get_height();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(93)
						if ((tmp6)){
							HX_STACK_LINE(93)
							Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								::sx::backend::dummy::BitmapRenderer tmp8 = this->renderer;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(93)
								::sx::backend::dummy::BitmapRenderer _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(93)
								bool tmp9 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(93)
								bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(93)
								if ((tmp10)){
									HX_STACK_LINE(93)
									tmp11 = (_this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());
								}
								else{
									HX_STACK_LINE(93)
									tmp11 = true;
								}
								HX_STACK_LINE(93)
								if ((tmp11)){
									HX_STACK_LINE(93)
									tmp7 = (int)0;
								}
								else{
									HX_STACK_LINE(93)
									tmp7 = _this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
								}
							}
							HX_STACK_LINE(93)
							Float bitmapWidth = tmp7;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
							HX_STACK_LINE(93)
							bool tmp8 = (bitmapWidth <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							if ((tmp8)){
								HX_STACK_LINE(93)
								::sx::backend::dummy::BitmapRenderer tmp9 = this->renderer;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								tmp9->setBitmapScale((int)0,(int)0);
							}
							else{
								HX_STACK_LINE(93)
								bool tmp9 = this->keepAspect;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								if ((tmp9)){
									HX_STACK_LINE(93)
									::sx::backend::dummy::BitmapRenderer tmp10 = this->renderer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									tmp10->setBitmapScale((int)1,(int)1);
								}
								else{
									HX_STACK_LINE(93)
									::sx::properties::metric::Size tmp10 = this->get_width();		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									Float tmp11 = tmp10->get_px();		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(93)
									::sx::properties::metric::Padding tmp12 = this->get_padding();		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(93)
									Float tmp13 = ::sx::tools::PaddingTools_obj::sumPx(tmp12,HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									Float renderWidth = tmp14;		HX_STACK_VAR(renderWidth,"renderWidth");
									HX_STACK_LINE(93)
									bool tmp15 = (renderWidth <= (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(93)
									if ((tmp15)){
										HX_STACK_LINE(93)
										::sx::backend::dummy::BitmapRenderer tmp16 = this->renderer;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(93)
										tmp16->setBitmapScale((int)0,(int)0);
									}
									else{
										HX_STACK_LINE(93)
										Float tmp16 = (Float(renderWidth) / Float(bitmapWidth));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(93)
										Float scaleX = tmp16;		HX_STACK_VAR(scaleX,"scaleX");
										HX_STACK_LINE(93)
										::sx::backend::dummy::BitmapRenderer tmp17 = this->renderer;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(93)
										Float tmp18 = scaleX;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(93)
										tmp17->setBitmapScale(tmp18,(int)1);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(93)
							Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								::sx::backend::dummy::BitmapRenderer tmp8 = this->renderer;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(93)
								::sx::backend::dummy::BitmapRenderer _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(93)
								bool tmp9 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(93)
								bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(93)
								if ((tmp10)){
									HX_STACK_LINE(93)
									tmp11 = (_this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());
								}
								else{
									HX_STACK_LINE(93)
									tmp11 = true;
								}
								HX_STACK_LINE(93)
								if ((tmp11)){
									HX_STACK_LINE(93)
									tmp7 = (int)0;
								}
								else{
									HX_STACK_LINE(93)
									tmp7 = _this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
								}
							}
							HX_STACK_LINE(93)
							Float bitmapWidth = tmp7;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
							HX_STACK_LINE(93)
							Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								::sx::backend::dummy::BitmapRenderer tmp9 = this->renderer;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								::sx::backend::dummy::BitmapRenderer _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(93)
								bool tmp10 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(93)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(93)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(93)
								if ((tmp11)){
									HX_STACK_LINE(93)
									tmp12 = (_this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());
								}
								else{
									HX_STACK_LINE(93)
									tmp12 = true;
								}
								HX_STACK_LINE(93)
								if ((tmp12)){
									HX_STACK_LINE(93)
									tmp8 = (int)0;
								}
								else{
									HX_STACK_LINE(93)
									tmp8 = _this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
								}
							}
							HX_STACK_LINE(93)
							Float bitmapHeight = tmp8;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
							HX_STACK_LINE(93)
							bool tmp9 = (bitmapWidth <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(93)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(93)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(93)
							if ((tmp10)){
								HX_STACK_LINE(93)
								tmp11 = (bitmapHeight <= (int)0);
							}
							else{
								HX_STACK_LINE(93)
								tmp11 = true;
							}
							HX_STACK_LINE(93)
							if ((tmp11)){
								HX_STACK_LINE(93)
								::sx::backend::dummy::BitmapRenderer tmp12 = this->renderer;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(93)
								tmp12->setBitmapScale((int)0,(int)0);
							}
							else{
								HX_STACK_LINE(93)
								::sx::properties::metric::Size tmp12 = this->get_width();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(93)
								Float tmp13 = tmp12->get_px();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(93)
								::sx::properties::metric::Padding tmp14 = this->get_padding();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(93)
								::sx::properties::metric::Size tmp15 = tmp14->get_left();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(93)
								Float tmp16 = tmp15->get_px();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(93)
								Float tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(93)
								::sx::properties::metric::Padding tmp18 = this->get_padding();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(93)
								::sx::properties::metric::Size tmp19 = tmp18->get_right();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(93)
								Float tmp20 = tmp19->get_px();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(93)
								Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(93)
								Float renderWidth = tmp21;		HX_STACK_VAR(renderWidth,"renderWidth");
								HX_STACK_LINE(93)
								::sx::properties::metric::Size tmp22 = this->get_height();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(93)
								Float tmp23 = tmp22->get_px();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(93)
								::sx::properties::metric::Padding tmp24 = this->get_padding();		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(93)
								::sx::properties::metric::Size tmp25 = tmp24->get_top();		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(93)
								Float tmp26 = tmp25->get_px();		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(93)
								Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(93)
								::sx::properties::metric::Padding tmp28 = this->get_padding();		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(93)
								::sx::properties::metric::Size tmp29 = tmp28->get_bottom();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(93)
								Float tmp30 = tmp29->get_px();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(93)
								Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(93)
								Float renderHeight = tmp31;		HX_STACK_VAR(renderHeight,"renderHeight");
								HX_STACK_LINE(93)
								bool tmp32 = (renderWidth <= (int)0);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(93)
								bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(93)
								bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(93)
								if ((tmp33)){
									HX_STACK_LINE(93)
									tmp34 = (renderHeight <= (int)0);
								}
								else{
									HX_STACK_LINE(93)
									tmp34 = true;
								}
								HX_STACK_LINE(93)
								if ((tmp34)){
									HX_STACK_LINE(93)
									::sx::backend::dummy::BitmapRenderer tmp35 = this->renderer;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(93)
									tmp35->setBitmapScale((int)0,(int)0);
								}
								else{
									HX_STACK_LINE(93)
									Float tmp35 = (Float(renderWidth) / Float(bitmapWidth));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(93)
									Float scaleX = tmp35;		HX_STACK_VAR(scaleX,"scaleX");
									HX_STACK_LINE(93)
									Float tmp36 = (Float(renderHeight) / Float(bitmapHeight));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(93)
									Float scaleY = tmp36;		HX_STACK_VAR(scaleY,"scaleY");
									HX_STACK_LINE(93)
									bool tmp37 = this->keepAspect;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(93)
									if ((tmp37)){
										HX_STACK_LINE(93)
										bool tmp38 = (scaleX < scaleY);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(93)
										if ((tmp38)){
											HX_STACK_LINE(93)
											::sx::backend::dummy::BitmapRenderer tmp39 = this->renderer;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(93)
											Float tmp40 = scaleX;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(93)
											Float tmp41 = scaleX;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(93)
											tmp39->setBitmapScale(tmp40,tmp41);
										}
										else{
											HX_STACK_LINE(93)
											::sx::backend::dummy::BitmapRenderer tmp39 = this->renderer;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(93)
											Float tmp40 = scaleY;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(93)
											Float tmp41 = scaleY;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(93)
											tmp39->setBitmapScale(tmp40,tmp41);
										}
									}
									else{
										HX_STACK_LINE(93)
										::sx::backend::dummy::BitmapRenderer tmp38 = this->renderer;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(93)
										Float tmp39 = scaleX;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(93)
										Float tmp40 = scaleY;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(93)
										tmp38->setBitmapScale(tmp39,tmp40);
									}
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(94)
			bool tmp1 = widthChanged;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(94)
			bool tmp2 = heightChanged;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(94)
			this->super::__paddingChanged(tmp1,tmp2);
			HX_STACK_LINE(95)
			this->__dontUpdateBitmapScaling = false;
		}
	}
return null();
}


Void Bmp_obj::__updateBitmapScaling( ){
{
		HX_STACK_FRAME("sx.widgets.Bmp","__updateBitmapScaling",0xc766051e,"sx.widgets.Bmp.__updateBitmapScaling","sx/widgets/Bmp.hx",104,0x665b4a43)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		::sx::properties::AutoSize tmp = this->autoSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		bool tmp1 = tmp->both();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		if ((tmp1)){
			HX_STACK_LINE(106)
			::sx::backend::dummy::BitmapRenderer tmp2 = this->renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			tmp2->setBitmapScale((int)1,(int)1);
		}
		else{
			HX_STACK_LINE(107)
			::sx::properties::AutoSize tmp2 = this->autoSize;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(107)
			bool tmp3 = tmp2->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(107)
			if ((tmp3)){
				HX_STACK_LINE(108)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(108)
				{
					HX_STACK_LINE(108)
					::sx::backend::dummy::BitmapRenderer tmp5 = this->renderer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(108)
					::sx::backend::dummy::BitmapRenderer _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(108)
					bool tmp6 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(108)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(108)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(108)
					if ((tmp7)){
						HX_STACK_LINE(108)
						tmp8 = (_this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());
					}
					else{
						HX_STACK_LINE(108)
						tmp8 = true;
					}
					HX_STACK_LINE(108)
					if ((tmp8)){
						HX_STACK_LINE(108)
						tmp4 = (int)0;
					}
					else{
						HX_STACK_LINE(108)
						tmp4 = _this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
					}
				}
				HX_STACK_LINE(108)
				Float bitmapHeight = tmp4;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
				HX_STACK_LINE(108)
				bool tmp5 = (bitmapHeight <= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(108)
				if ((tmp5)){
					HX_STACK_LINE(108)
					::sx::backend::dummy::BitmapRenderer tmp6 = this->renderer;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(108)
					tmp6->setBitmapScale((int)0,(int)0);
				}
				else{
					HX_STACK_LINE(108)
					bool tmp6 = this->keepAspect;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(108)
					if ((tmp6)){
						HX_STACK_LINE(108)
						::sx::backend::dummy::BitmapRenderer tmp7 = this->renderer;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(108)
						tmp7->setBitmapScale((int)1,(int)1);
					}
					else{
						HX_STACK_LINE(108)
						::sx::properties::metric::Size tmp7 = this->get_height();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(108)
						Float tmp8 = tmp7->get_px();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(108)
						::sx::properties::metric::Padding tmp9 = this->get_padding();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(108)
						Float tmp10 = ::sx::tools::PaddingTools_obj::sumPx(tmp9,HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(108)
						Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(108)
						Float renderHeight = tmp11;		HX_STACK_VAR(renderHeight,"renderHeight");
						HX_STACK_LINE(108)
						bool tmp12 = (renderHeight <= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(108)
						if ((tmp12)){
							HX_STACK_LINE(108)
							::sx::backend::dummy::BitmapRenderer tmp13 = this->renderer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(108)
							tmp13->setBitmapScale((int)0,(int)0);
						}
						else{
							HX_STACK_LINE(108)
							Float tmp13 = (Float(renderHeight) / Float(bitmapHeight));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(108)
							Float scaleY = tmp13;		HX_STACK_VAR(scaleY,"scaleY");
							HX_STACK_LINE(108)
							::sx::backend::dummy::BitmapRenderer tmp14 = this->renderer;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(108)
							Float tmp15 = scaleY;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(108)
							tmp14->setBitmapScale((int)1,tmp15);
						}
					}
				}
			}
			else{
				HX_STACK_LINE(109)
				::sx::properties::AutoSize tmp4 = this->autoSize;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(109)
				bool tmp5 = tmp4->get_height();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(109)
				if ((tmp5)){
					HX_STACK_LINE(110)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(110)
					{
						HX_STACK_LINE(110)
						::sx::backend::dummy::BitmapRenderer tmp7 = this->renderer;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(110)
						::sx::backend::dummy::BitmapRenderer _this = tmp7;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(110)
						bool tmp8 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(110)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(110)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(110)
						if ((tmp9)){
							HX_STACK_LINE(110)
							tmp10 = (_this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());
						}
						else{
							HX_STACK_LINE(110)
							tmp10 = true;
						}
						HX_STACK_LINE(110)
						if ((tmp10)){
							HX_STACK_LINE(110)
							tmp6 = (int)0;
						}
						else{
							HX_STACK_LINE(110)
							tmp6 = _this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
						}
					}
					HX_STACK_LINE(110)
					Float bitmapWidth = tmp6;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
					HX_STACK_LINE(110)
					bool tmp7 = (bitmapWidth <= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(110)
					if ((tmp7)){
						HX_STACK_LINE(110)
						::sx::backend::dummy::BitmapRenderer tmp8 = this->renderer;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(110)
						tmp8->setBitmapScale((int)0,(int)0);
					}
					else{
						HX_STACK_LINE(110)
						bool tmp8 = this->keepAspect;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(110)
						if ((tmp8)){
							HX_STACK_LINE(110)
							::sx::backend::dummy::BitmapRenderer tmp9 = this->renderer;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(110)
							tmp9->setBitmapScale((int)1,(int)1);
						}
						else{
							HX_STACK_LINE(110)
							::sx::properties::metric::Size tmp9 = this->get_width();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(110)
							Float tmp10 = tmp9->get_px();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(110)
							::sx::properties::metric::Padding tmp11 = this->get_padding();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(110)
							Float tmp12 = ::sx::tools::PaddingTools_obj::sumPx(tmp11,HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(110)
							Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(110)
							Float renderWidth = tmp13;		HX_STACK_VAR(renderWidth,"renderWidth");
							HX_STACK_LINE(110)
							bool tmp14 = (renderWidth <= (int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(110)
							if ((tmp14)){
								HX_STACK_LINE(110)
								::sx::backend::dummy::BitmapRenderer tmp15 = this->renderer;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(110)
								tmp15->setBitmapScale((int)0,(int)0);
							}
							else{
								HX_STACK_LINE(110)
								Float tmp15 = (Float(renderWidth) / Float(bitmapWidth));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(110)
								Float scaleX = tmp15;		HX_STACK_VAR(scaleX,"scaleX");
								HX_STACK_LINE(110)
								::sx::backend::dummy::BitmapRenderer tmp16 = this->renderer;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(110)
								Float tmp17 = scaleX;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(110)
								tmp16->setBitmapScale(tmp17,(int)1);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(112)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(112)
					{
						HX_STACK_LINE(112)
						::sx::backend::dummy::BitmapRenderer tmp7 = this->renderer;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(112)
						::sx::backend::dummy::BitmapRenderer _this = tmp7;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(112)
						bool tmp8 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(112)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(112)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(112)
						if ((tmp9)){
							HX_STACK_LINE(112)
							tmp10 = (_this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());
						}
						else{
							HX_STACK_LINE(112)
							tmp10 = true;
						}
						HX_STACK_LINE(112)
						if ((tmp10)){
							HX_STACK_LINE(112)
							tmp6 = (int)0;
						}
						else{
							HX_STACK_LINE(112)
							tmp6 = _this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
						}
					}
					HX_STACK_LINE(112)
					Float bitmapWidth = tmp6;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
					HX_STACK_LINE(112)
					Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(112)
					{
						HX_STACK_LINE(112)
						::sx::backend::dummy::BitmapRenderer tmp8 = this->renderer;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(112)
						::sx::backend::dummy::BitmapRenderer _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(112)
						bool tmp9 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(112)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(112)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(112)
						if ((tmp10)){
							HX_STACK_LINE(112)
							tmp11 = (_this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());
						}
						else{
							HX_STACK_LINE(112)
							tmp11 = true;
						}
						HX_STACK_LINE(112)
						if ((tmp11)){
							HX_STACK_LINE(112)
							tmp7 = (int)0;
						}
						else{
							HX_STACK_LINE(112)
							tmp7 = _this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
						}
					}
					HX_STACK_LINE(112)
					Float bitmapHeight = tmp7;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
					HX_STACK_LINE(112)
					bool tmp8 = (bitmapWidth <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(112)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(112)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(112)
					if ((tmp9)){
						HX_STACK_LINE(112)
						tmp10 = (bitmapHeight <= (int)0);
					}
					else{
						HX_STACK_LINE(112)
						tmp10 = true;
					}
					HX_STACK_LINE(112)
					if ((tmp10)){
						HX_STACK_LINE(112)
						::sx::backend::dummy::BitmapRenderer tmp11 = this->renderer;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(112)
						tmp11->setBitmapScale((int)0,(int)0);
					}
					else{
						HX_STACK_LINE(112)
						::sx::properties::metric::Size tmp11 = this->get_width();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(112)
						Float tmp12 = tmp11->get_px();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(112)
						::sx::properties::metric::Padding tmp13 = this->get_padding();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(112)
						::sx::properties::metric::Size tmp14 = tmp13->get_left();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(112)
						Float tmp15 = tmp14->get_px();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(112)
						Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(112)
						::sx::properties::metric::Padding tmp17 = this->get_padding();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(112)
						::sx::properties::metric::Size tmp18 = tmp17->get_right();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(112)
						Float tmp19 = tmp18->get_px();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(112)
						Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(112)
						Float renderWidth = tmp20;		HX_STACK_VAR(renderWidth,"renderWidth");
						HX_STACK_LINE(112)
						::sx::properties::metric::Size tmp21 = this->get_height();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(112)
						Float tmp22 = tmp21->get_px();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(112)
						::sx::properties::metric::Padding tmp23 = this->get_padding();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(112)
						::sx::properties::metric::Size tmp24 = tmp23->get_top();		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(112)
						Float tmp25 = tmp24->get_px();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(112)
						Float tmp26 = (tmp22 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(112)
						::sx::properties::metric::Padding tmp27 = this->get_padding();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(112)
						::sx::properties::metric::Size tmp28 = tmp27->get_bottom();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(112)
						Float tmp29 = tmp28->get_px();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(112)
						Float tmp30 = (tmp26 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(112)
						Float renderHeight = tmp30;		HX_STACK_VAR(renderHeight,"renderHeight");
						HX_STACK_LINE(112)
						bool tmp31 = (renderWidth <= (int)0);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(112)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(112)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(112)
						if ((tmp32)){
							HX_STACK_LINE(112)
							tmp33 = (renderHeight <= (int)0);
						}
						else{
							HX_STACK_LINE(112)
							tmp33 = true;
						}
						HX_STACK_LINE(112)
						if ((tmp33)){
							HX_STACK_LINE(112)
							::sx::backend::dummy::BitmapRenderer tmp34 = this->renderer;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(112)
							tmp34->setBitmapScale((int)0,(int)0);
						}
						else{
							HX_STACK_LINE(112)
							Float tmp34 = (Float(renderWidth) / Float(bitmapWidth));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(112)
							Float scaleX = tmp34;		HX_STACK_VAR(scaleX,"scaleX");
							HX_STACK_LINE(112)
							Float tmp35 = (Float(renderHeight) / Float(bitmapHeight));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(112)
							Float scaleY = tmp35;		HX_STACK_VAR(scaleY,"scaleY");
							HX_STACK_LINE(112)
							bool tmp36 = this->keepAspect;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(112)
							if ((tmp36)){
								HX_STACK_LINE(112)
								bool tmp37 = (scaleX < scaleY);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(112)
								if ((tmp37)){
									HX_STACK_LINE(112)
									::sx::backend::dummy::BitmapRenderer tmp38 = this->renderer;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(112)
									Float tmp39 = scaleX;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(112)
									Float tmp40 = scaleX;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(112)
									tmp38->setBitmapScale(tmp39,tmp40);
								}
								else{
									HX_STACK_LINE(112)
									::sx::backend::dummy::BitmapRenderer tmp38 = this->renderer;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(112)
									Float tmp39 = scaleY;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(112)
									Float tmp40 = scaleY;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(112)
									tmp38->setBitmapScale(tmp39,tmp40);
								}
							}
							else{
								HX_STACK_LINE(112)
								::sx::backend::dummy::BitmapRenderer tmp37 = this->renderer;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(112)
								Float tmp38 = scaleX;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(112)
								Float tmp39 = scaleY;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(112)
								tmp37->setBitmapScale(tmp38,tmp39);
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bmp_obj,__updateBitmapScaling,(void))

Void Bmp_obj::__scaleBitmapHeight( ){
{
		HX_STACK_FRAME("sx.widgets.Bmp","__scaleBitmapHeight",0x8bb8e3ef,"sx.widgets.Bmp.__scaleBitmapHeight","sx/widgets/Bmp.hx",121,0x665b4a43)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			::sx::backend::dummy::BitmapRenderer tmp1 = this->renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(122)
			::sx::backend::dummy::BitmapRenderer _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(122)
			bool tmp2 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(122)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(122)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			if ((tmp3)){
				HX_STACK_LINE(122)
				tmp4 = (_this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());
			}
			else{
				HX_STACK_LINE(122)
				tmp4 = true;
			}
			HX_STACK_LINE(122)
			if ((tmp4)){
				HX_STACK_LINE(122)
				tmp = (int)0;
			}
			else{
				HX_STACK_LINE(122)
				tmp = _this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
			}
		}
		HX_STACK_LINE(122)
		Float bitmapHeight = tmp;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
		HX_STACK_LINE(124)
		bool tmp1 = (bitmapHeight <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		if ((tmp1)){
			HX_STACK_LINE(125)
			::sx::backend::dummy::BitmapRenderer tmp2 = this->renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(125)
			tmp2->setBitmapScale((int)0,(int)0);
		}
		else{
			HX_STACK_LINE(128)
			bool tmp2 = this->keepAspect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(128)
			if ((tmp2)){
				HX_STACK_LINE(129)
				::sx::backend::dummy::BitmapRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(129)
				tmp3->setBitmapScale((int)1,(int)1);
			}
			else{
				HX_STACK_LINE(132)
				::sx::properties::metric::Size tmp3 = this->get_height();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(132)
				Float tmp4 = tmp3->get_px();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(132)
				::sx::properties::metric::Padding tmp5 = this->get_padding();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(132)
				Float tmp6 = ::sx::tools::PaddingTools_obj::sumPx(tmp5,HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(132)
				Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(132)
				Float renderHeight = tmp7;		HX_STACK_VAR(renderHeight,"renderHeight");
				HX_STACK_LINE(133)
				bool tmp8 = (renderHeight <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(133)
				if ((tmp8)){
					HX_STACK_LINE(134)
					::sx::backend::dummy::BitmapRenderer tmp9 = this->renderer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(134)
					tmp9->setBitmapScale((int)0,(int)0);
				}
				else{
					HX_STACK_LINE(136)
					Float tmp9 = (Float(renderHeight) / Float(bitmapHeight));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(136)
					Float scaleY = tmp9;		HX_STACK_VAR(scaleY,"scaleY");
					HX_STACK_LINE(137)
					::sx::backend::dummy::BitmapRenderer tmp10 = this->renderer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(137)
					Float tmp11 = scaleY;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(137)
					tmp10->setBitmapScale((int)1,tmp11);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bmp_obj,__scaleBitmapHeight,(void))

Void Bmp_obj::__scaleBitmapWidth( ){
{
		HX_STACK_FRAME("sx.widgets.Bmp","__scaleBitmapWidth",0x616332fe,"sx.widgets.Bmp.__scaleBitmapWidth","sx/widgets/Bmp.hx",148,0x665b4a43)
		HX_STACK_THIS(this)
		HX_STACK_LINE(149)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			::sx::backend::dummy::BitmapRenderer tmp1 = this->renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(149)
			::sx::backend::dummy::BitmapRenderer _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(149)
			bool tmp2 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			if ((tmp3)){
				HX_STACK_LINE(149)
				tmp4 = (_this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());
			}
			else{
				HX_STACK_LINE(149)
				tmp4 = true;
			}
			HX_STACK_LINE(149)
			if ((tmp4)){
				HX_STACK_LINE(149)
				tmp = (int)0;
			}
			else{
				HX_STACK_LINE(149)
				tmp = _this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
			}
		}
		HX_STACK_LINE(149)
		Float bitmapWidth = tmp;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
		HX_STACK_LINE(151)
		bool tmp1 = (bitmapWidth <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		if ((tmp1)){
			HX_STACK_LINE(152)
			::sx::backend::dummy::BitmapRenderer tmp2 = this->renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			tmp2->setBitmapScale((int)0,(int)0);
		}
		else{
			HX_STACK_LINE(155)
			bool tmp2 = this->keepAspect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(155)
			if ((tmp2)){
				HX_STACK_LINE(156)
				::sx::backend::dummy::BitmapRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(156)
				tmp3->setBitmapScale((int)1,(int)1);
			}
			else{
				HX_STACK_LINE(159)
				::sx::properties::metric::Size tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(159)
				Float tmp4 = tmp3->get_px();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(159)
				::sx::properties::metric::Padding tmp5 = this->get_padding();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(159)
				Float tmp6 = ::sx::tools::PaddingTools_obj::sumPx(tmp5,HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(159)
				Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(159)
				Float renderWidth = tmp7;		HX_STACK_VAR(renderWidth,"renderWidth");
				HX_STACK_LINE(160)
				bool tmp8 = (renderWidth <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(160)
				if ((tmp8)){
					HX_STACK_LINE(161)
					::sx::backend::dummy::BitmapRenderer tmp9 = this->renderer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(161)
					tmp9->setBitmapScale((int)0,(int)0);
				}
				else{
					HX_STACK_LINE(163)
					Float tmp9 = (Float(renderWidth) / Float(bitmapWidth));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(163)
					Float scaleX = tmp9;		HX_STACK_VAR(scaleX,"scaleX");
					HX_STACK_LINE(164)
					::sx::backend::dummy::BitmapRenderer tmp10 = this->renderer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(164)
					Float tmp11 = scaleX;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(164)
					tmp10->setBitmapScale(tmp11,(int)1);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bmp_obj,__scaleBitmapWidth,(void))

Void Bmp_obj::__scaleBitmapBoth( ){
{
		HX_STACK_FRAME("sx.widgets.Bmp","__scaleBitmapBoth",0xc25bd289,"sx.widgets.Bmp.__scaleBitmapBoth","sx/widgets/Bmp.hx",175,0x665b4a43)
		HX_STACK_THIS(this)
		HX_STACK_LINE(176)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			::sx::backend::dummy::BitmapRenderer tmp1 = this->renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(176)
			::sx::backend::dummy::BitmapRenderer _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(176)
			bool tmp2 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(176)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			if ((tmp3)){
				HX_STACK_LINE(176)
				tmp4 = (_this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());
			}
			else{
				HX_STACK_LINE(176)
				tmp4 = true;
			}
			HX_STACK_LINE(176)
			if ((tmp4)){
				HX_STACK_LINE(176)
				tmp = (int)0;
			}
			else{
				HX_STACK_LINE(176)
				tmp = _this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
			}
		}
		HX_STACK_LINE(176)
		Float bitmapWidth = tmp;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
		HX_STACK_LINE(177)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			::sx::backend::dummy::BitmapRenderer tmp2 = this->renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(177)
			::sx::backend::dummy::BitmapRenderer _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(177)
			bool tmp3 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(177)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(177)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			if ((tmp4)){
				HX_STACK_LINE(177)
				tmp5 = (_this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());
			}
			else{
				HX_STACK_LINE(177)
				tmp5 = true;
			}
			HX_STACK_LINE(177)
			if ((tmp5)){
				HX_STACK_LINE(177)
				tmp1 = (int)0;
			}
			else{
				HX_STACK_LINE(177)
				tmp1 = _this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
			}
		}
		HX_STACK_LINE(177)
		Float bitmapHeight = tmp1;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
		HX_STACK_LINE(179)
		bool tmp2 = (bitmapWidth <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		if ((tmp3)){
			HX_STACK_LINE(179)
			tmp4 = (bitmapHeight <= (int)0);
		}
		else{
			HX_STACK_LINE(179)
			tmp4 = true;
		}
		HX_STACK_LINE(179)
		if ((tmp4)){
			HX_STACK_LINE(180)
			::sx::backend::dummy::BitmapRenderer tmp5 = this->renderer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(180)
			tmp5->setBitmapScale((int)0,(int)0);
		}
		else{
			HX_STACK_LINE(183)
			::sx::properties::metric::Size tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(183)
			Float tmp6 = tmp5->get_px();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(183)
			::sx::properties::metric::Padding tmp7 = this->get_padding();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(183)
			::sx::properties::metric::Size tmp8 = tmp7->get_left();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(183)
			Float tmp9 = tmp8->get_px();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(183)
			Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(183)
			::sx::properties::metric::Padding tmp11 = this->get_padding();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(183)
			::sx::properties::metric::Size tmp12 = tmp11->get_right();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(183)
			Float tmp13 = tmp12->get_px();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(183)
			Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(183)
			Float renderWidth = tmp14;		HX_STACK_VAR(renderWidth,"renderWidth");
			HX_STACK_LINE(184)
			::sx::properties::metric::Size tmp15 = this->get_height();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(184)
			Float tmp16 = tmp15->get_px();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(184)
			::sx::properties::metric::Padding tmp17 = this->get_padding();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(184)
			::sx::properties::metric::Size tmp18 = tmp17->get_top();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(184)
			Float tmp19 = tmp18->get_px();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(184)
			Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(184)
			::sx::properties::metric::Padding tmp21 = this->get_padding();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(184)
			::sx::properties::metric::Size tmp22 = tmp21->get_bottom();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(184)
			Float tmp23 = tmp22->get_px();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(184)
			Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(184)
			Float renderHeight = tmp24;		HX_STACK_VAR(renderHeight,"renderHeight");
			HX_STACK_LINE(186)
			bool tmp25 = (renderWidth <= (int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(186)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(186)
			bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(186)
			if ((tmp26)){
				HX_STACK_LINE(186)
				tmp27 = (renderHeight <= (int)0);
			}
			else{
				HX_STACK_LINE(186)
				tmp27 = true;
			}
			HX_STACK_LINE(186)
			if ((tmp27)){
				HX_STACK_LINE(187)
				::sx::backend::dummy::BitmapRenderer tmp28 = this->renderer;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(187)
				tmp28->setBitmapScale((int)0,(int)0);
			}
			else{
				HX_STACK_LINE(190)
				Float tmp28 = (Float(renderWidth) / Float(bitmapWidth));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(190)
				Float scaleX = tmp28;		HX_STACK_VAR(scaleX,"scaleX");
				HX_STACK_LINE(191)
				Float tmp29 = (Float(renderHeight) / Float(bitmapHeight));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(191)
				Float scaleY = tmp29;		HX_STACK_VAR(scaleY,"scaleY");
				HX_STACK_LINE(193)
				bool tmp30 = this->keepAspect;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(193)
				if ((tmp30)){
					HX_STACK_LINE(194)
					bool tmp31 = (scaleX < scaleY);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(194)
					if ((tmp31)){
						HX_STACK_LINE(195)
						::sx::backend::dummy::BitmapRenderer tmp32 = this->renderer;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(195)
						Float tmp33 = scaleX;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(195)
						Float tmp34 = scaleX;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(195)
						tmp32->setBitmapScale(tmp33,tmp34);
					}
					else{
						HX_STACK_LINE(197)
						::sx::backend::dummy::BitmapRenderer tmp32 = this->renderer;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(197)
						Float tmp33 = scaleY;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(197)
						Float tmp34 = scaleY;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(197)
						tmp32->setBitmapScale(tmp33,tmp34);
					}
				}
				else{
					HX_STACK_LINE(200)
					::sx::backend::dummy::BitmapRenderer tmp31 = this->renderer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(200)
					Float tmp32 = scaleX;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(200)
					Float tmp33 = scaleY;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(200)
					tmp31->setBitmapScale(tmp32,tmp33);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bmp_obj,__scaleBitmapBoth,(void))

Dynamic Bmp_obj::set_bitmapData( Dynamic value){
	HX_STACK_FRAME("sx.widgets.Bmp","set_bitmapData",0x1f1ac4a7,"sx.widgets.Bmp.set_bitmapData","sx/widgets/Bmp.hx",211,0x665b4a43)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(212)
	this->bitmapData = value;
	HX_STACK_LINE(213)
	::sx::backend::dummy::BitmapRenderer tmp = this->renderer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	Dynamic tmp1 = this->bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(213)
	tmp->setBitmapData(tmp1);
	HX_STACK_LINE(215)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Bmp_obj,set_bitmapData,return )

bool Bmp_obj::set_keepAspect( bool value){
	HX_STACK_FRAME("sx.widgets.Bmp","set_keepAspect",0xc49f9b2b,"sx.widgets.Bmp.set_keepAspect","sx/widgets/Bmp.hx",223,0x665b4a43)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(224)
	bool tmp = this->keepAspect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(224)
	if ((tmp2)){
		HX_STACK_LINE(225)
		this->keepAspect = value;
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			::sx::properties::AutoSize tmp3 = this->autoSize;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			bool tmp4 = tmp3->both();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(226)
			if ((tmp4)){
				HX_STACK_LINE(226)
				::sx::backend::dummy::BitmapRenderer tmp5 = this->renderer;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(226)
				tmp5->setBitmapScale((int)1,(int)1);
			}
			else{
				HX_STACK_LINE(226)
				::sx::properties::AutoSize tmp5 = this->autoSize;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(226)
				bool tmp6 = tmp5->get_width();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(226)
				if ((tmp6)){
					HX_STACK_LINE(226)
					Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(226)
					{
						HX_STACK_LINE(226)
						::sx::backend::dummy::BitmapRenderer tmp8 = this->renderer;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(226)
						::sx::backend::dummy::BitmapRenderer _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(226)
						bool tmp9 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(226)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(226)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(226)
						if ((tmp10)){
							HX_STACK_LINE(226)
							tmp11 = (_this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());
						}
						else{
							HX_STACK_LINE(226)
							tmp11 = true;
						}
						HX_STACK_LINE(226)
						if ((tmp11)){
							HX_STACK_LINE(226)
							tmp7 = (int)0;
						}
						else{
							HX_STACK_LINE(226)
							tmp7 = _this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
						}
					}
					HX_STACK_LINE(226)
					Float bitmapHeight = tmp7;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
					HX_STACK_LINE(226)
					bool tmp8 = (bitmapHeight <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(226)
					if ((tmp8)){
						HX_STACK_LINE(226)
						::sx::backend::dummy::BitmapRenderer tmp9 = this->renderer;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(226)
						tmp9->setBitmapScale((int)0,(int)0);
					}
					else{
						HX_STACK_LINE(226)
						bool tmp9 = this->keepAspect;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(226)
						if ((tmp9)){
							HX_STACK_LINE(226)
							::sx::backend::dummy::BitmapRenderer tmp10 = this->renderer;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(226)
							tmp10->setBitmapScale((int)1,(int)1);
						}
						else{
							HX_STACK_LINE(226)
							::sx::properties::metric::Size tmp10 = this->get_height();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(226)
							Float tmp11 = tmp10->get_px();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(226)
							::sx::properties::metric::Padding tmp12 = this->get_padding();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(226)
							Float tmp13 = ::sx::tools::PaddingTools_obj::sumPx(tmp12,HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(226)
							Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(226)
							Float renderHeight = tmp14;		HX_STACK_VAR(renderHeight,"renderHeight");
							HX_STACK_LINE(226)
							bool tmp15 = (renderHeight <= (int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(226)
							if ((tmp15)){
								HX_STACK_LINE(226)
								::sx::backend::dummy::BitmapRenderer tmp16 = this->renderer;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(226)
								tmp16->setBitmapScale((int)0,(int)0);
							}
							else{
								HX_STACK_LINE(226)
								Float tmp16 = (Float(renderHeight) / Float(bitmapHeight));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(226)
								Float scaleY = tmp16;		HX_STACK_VAR(scaleY,"scaleY");
								HX_STACK_LINE(226)
								::sx::backend::dummy::BitmapRenderer tmp17 = this->renderer;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(226)
								Float tmp18 = scaleY;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(226)
								tmp17->setBitmapScale((int)1,tmp18);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(226)
					::sx::properties::AutoSize tmp7 = this->autoSize;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(226)
					bool tmp8 = tmp7->get_height();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(226)
					if ((tmp8)){
						HX_STACK_LINE(226)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(226)
						{
							HX_STACK_LINE(226)
							::sx::backend::dummy::BitmapRenderer tmp10 = this->renderer;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(226)
							::sx::backend::dummy::BitmapRenderer _this = tmp10;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(226)
							bool tmp11 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(226)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(226)
							bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(226)
							if ((tmp12)){
								HX_STACK_LINE(226)
								tmp13 = (_this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());
							}
							else{
								HX_STACK_LINE(226)
								tmp13 = true;
							}
							HX_STACK_LINE(226)
							if ((tmp13)){
								HX_STACK_LINE(226)
								tmp9 = (int)0;
							}
							else{
								HX_STACK_LINE(226)
								tmp9 = _this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
							}
						}
						HX_STACK_LINE(226)
						Float bitmapWidth = tmp9;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
						HX_STACK_LINE(226)
						bool tmp10 = (bitmapWidth <= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(226)
						if ((tmp10)){
							HX_STACK_LINE(226)
							::sx::backend::dummy::BitmapRenderer tmp11 = this->renderer;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(226)
							tmp11->setBitmapScale((int)0,(int)0);
						}
						else{
							HX_STACK_LINE(226)
							bool tmp11 = this->keepAspect;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(226)
							if ((tmp11)){
								HX_STACK_LINE(226)
								::sx::backend::dummy::BitmapRenderer tmp12 = this->renderer;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(226)
								tmp12->setBitmapScale((int)1,(int)1);
							}
							else{
								HX_STACK_LINE(226)
								::sx::properties::metric::Size tmp12 = this->get_width();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(226)
								Float tmp13 = tmp12->get_px();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(226)
								::sx::properties::metric::Padding tmp14 = this->get_padding();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(226)
								Float tmp15 = ::sx::tools::PaddingTools_obj::sumPx(tmp14,HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(226)
								Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(226)
								Float renderWidth = tmp16;		HX_STACK_VAR(renderWidth,"renderWidth");
								HX_STACK_LINE(226)
								bool tmp17 = (renderWidth <= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(226)
								if ((tmp17)){
									HX_STACK_LINE(226)
									::sx::backend::dummy::BitmapRenderer tmp18 = this->renderer;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(226)
									tmp18->setBitmapScale((int)0,(int)0);
								}
								else{
									HX_STACK_LINE(226)
									Float tmp18 = (Float(renderWidth) / Float(bitmapWidth));		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(226)
									Float scaleX = tmp18;		HX_STACK_VAR(scaleX,"scaleX");
									HX_STACK_LINE(226)
									::sx::backend::dummy::BitmapRenderer tmp19 = this->renderer;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(226)
									Float tmp20 = scaleX;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(226)
									tmp19->setBitmapScale(tmp20,(int)1);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(226)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(226)
						{
							HX_STACK_LINE(226)
							::sx::backend::dummy::BitmapRenderer tmp10 = this->renderer;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(226)
							::sx::backend::dummy::BitmapRenderer _this = tmp10;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(226)
							bool tmp11 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(226)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(226)
							bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(226)
							if ((tmp12)){
								HX_STACK_LINE(226)
								tmp13 = (_this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());
							}
							else{
								HX_STACK_LINE(226)
								tmp13 = true;
							}
							HX_STACK_LINE(226)
							if ((tmp13)){
								HX_STACK_LINE(226)
								tmp9 = (int)0;
							}
							else{
								HX_STACK_LINE(226)
								tmp9 = _this->__bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
							}
						}
						HX_STACK_LINE(226)
						Float bitmapWidth = tmp9;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
						HX_STACK_LINE(226)
						Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(226)
						{
							HX_STACK_LINE(226)
							::sx::backend::dummy::BitmapRenderer tmp11 = this->renderer;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(226)
							::sx::backend::dummy::BitmapRenderer _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(226)
							bool tmp12 = (_this->__bitmapData == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(226)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(226)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(226)
							if ((tmp13)){
								HX_STACK_LINE(226)
								tmp14 = (_this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());
							}
							else{
								HX_STACK_LINE(226)
								tmp14 = true;
							}
							HX_STACK_LINE(226)
							if ((tmp14)){
								HX_STACK_LINE(226)
								tmp10 = (int)0;
							}
							else{
								HX_STACK_LINE(226)
								tmp10 = _this->__bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
							}
						}
						HX_STACK_LINE(226)
						Float bitmapHeight = tmp10;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
						HX_STACK_LINE(226)
						bool tmp11 = (bitmapWidth <= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(226)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(226)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(226)
						if ((tmp12)){
							HX_STACK_LINE(226)
							tmp13 = (bitmapHeight <= (int)0);
						}
						else{
							HX_STACK_LINE(226)
							tmp13 = true;
						}
						HX_STACK_LINE(226)
						if ((tmp13)){
							HX_STACK_LINE(226)
							::sx::backend::dummy::BitmapRenderer tmp14 = this->renderer;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(226)
							tmp14->setBitmapScale((int)0,(int)0);
						}
						else{
							HX_STACK_LINE(226)
							::sx::properties::metric::Size tmp14 = this->get_width();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(226)
							Float tmp15 = tmp14->get_px();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(226)
							::sx::properties::metric::Padding tmp16 = this->get_padding();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(226)
							::sx::properties::metric::Size tmp17 = tmp16->get_left();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(226)
							Float tmp18 = tmp17->get_px();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(226)
							Float tmp19 = (tmp15 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(226)
							::sx::properties::metric::Padding tmp20 = this->get_padding();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(226)
							::sx::properties::metric::Size tmp21 = tmp20->get_right();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(226)
							Float tmp22 = tmp21->get_px();		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(226)
							Float tmp23 = (tmp19 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(226)
							Float renderWidth = tmp23;		HX_STACK_VAR(renderWidth,"renderWidth");
							HX_STACK_LINE(226)
							::sx::properties::metric::Size tmp24 = this->get_height();		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(226)
							Float tmp25 = tmp24->get_px();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(226)
							::sx::properties::metric::Padding tmp26 = this->get_padding();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(226)
							::sx::properties::metric::Size tmp27 = tmp26->get_top();		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(226)
							Float tmp28 = tmp27->get_px();		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(226)
							Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(226)
							::sx::properties::metric::Padding tmp30 = this->get_padding();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(226)
							::sx::properties::metric::Size tmp31 = tmp30->get_bottom();		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(226)
							Float tmp32 = tmp31->get_px();		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(226)
							Float tmp33 = (tmp29 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(226)
							Float renderHeight = tmp33;		HX_STACK_VAR(renderHeight,"renderHeight");
							HX_STACK_LINE(226)
							bool tmp34 = (renderWidth <= (int)0);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(226)
							bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(226)
							bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(226)
							if ((tmp35)){
								HX_STACK_LINE(226)
								tmp36 = (renderHeight <= (int)0);
							}
							else{
								HX_STACK_LINE(226)
								tmp36 = true;
							}
							HX_STACK_LINE(226)
							if ((tmp36)){
								HX_STACK_LINE(226)
								::sx::backend::dummy::BitmapRenderer tmp37 = this->renderer;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(226)
								tmp37->setBitmapScale((int)0,(int)0);
							}
							else{
								HX_STACK_LINE(226)
								Float tmp37 = (Float(renderWidth) / Float(bitmapWidth));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(226)
								Float scaleX = tmp37;		HX_STACK_VAR(scaleX,"scaleX");
								HX_STACK_LINE(226)
								Float tmp38 = (Float(renderHeight) / Float(bitmapHeight));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(226)
								Float scaleY = tmp38;		HX_STACK_VAR(scaleY,"scaleY");
								HX_STACK_LINE(226)
								bool tmp39 = this->keepAspect;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(226)
								if ((tmp39)){
									HX_STACK_LINE(226)
									bool tmp40 = (scaleX < scaleY);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(226)
									if ((tmp40)){
										HX_STACK_LINE(226)
										::sx::backend::dummy::BitmapRenderer tmp41 = this->renderer;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(226)
										Float tmp42 = scaleX;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(226)
										Float tmp43 = scaleX;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(226)
										tmp41->setBitmapScale(tmp42,tmp43);
									}
									else{
										HX_STACK_LINE(226)
										::sx::backend::dummy::BitmapRenderer tmp41 = this->renderer;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(226)
										Float tmp42 = scaleY;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(226)
										Float tmp43 = scaleY;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(226)
										tmp41->setBitmapScale(tmp42,tmp43);
									}
								}
								else{
									HX_STACK_LINE(226)
									::sx::backend::dummy::BitmapRenderer tmp40 = this->renderer;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(226)
									Float tmp41 = scaleX;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(226)
									Float tmp42 = scaleY;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(226)
									tmp40->setBitmapScale(tmp41,tmp42);
								}
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(229)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(229)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Bmp_obj,set_keepAspect,return )

bool Bmp_obj::set_smooth( bool value){
	HX_STACK_FRAME("sx.widgets.Bmp","set_smooth",0x9dbb881c,"sx.widgets.Bmp.set_smooth","sx/widgets/Bmp.hx",237,0x665b4a43)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(238)
	bool tmp = this->smooth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(238)
	if ((tmp2)){
		HX_STACK_LINE(239)
		this->smooth = value;
		HX_STACK_LINE(240)
		::sx::backend::dummy::BitmapRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		bool tmp4 = this->smooth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		tmp3->setBitmapSmoothing(tmp4);
	}
	HX_STACK_LINE(243)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(243)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Bmp_obj,set_smooth,return )

::sx::backend::interfaces::IRenderer Bmp_obj::get___renderer( ){
	HX_STACK_FRAME("sx.widgets.Bmp","get___renderer",0x214e5edd,"sx.widgets.Bmp.get___renderer","sx/widgets/Bmp.hx",248,0x665b4a43)
	HX_STACK_THIS(this)
	HX_STACK_LINE(248)
	::sx::backend::dummy::BitmapRenderer tmp = this->renderer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(248)
	return tmp;
}



Bmp_obj::Bmp_obj()
{
}

void Bmp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bmp);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(keepAspect,"keepAspect");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(__dontUpdateBitmapScaling,"__dontUpdateBitmapScaling");
	::sx::widgets::base::RendererHolder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bmp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(keepAspect,"keepAspect");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(__dontUpdateBitmapScaling,"__dontUpdateBitmapScaling");
	::sx::widgets::base::RendererHolder_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bmp_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"keepAspect") ) { return keepAspect; }
		if (HX_FIELD_EQ(inName,"set_smooth") ) { return set_smooth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return set_bitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_keepAspect") ) { return set_keepAspect_dyn(); }
		if (HX_FIELD_EQ(inName,"get___renderer") ) { return get___renderer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__createRenderer") ) { return __createRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"__paddingChanged") ) { return __paddingChanged_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__propertyResized") ) { return __propertyResized_dyn(); }
		if (HX_FIELD_EQ(inName,"__autoSizeChanged") ) { return __autoSizeChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"__scaleBitmapBoth") ) { return __scaleBitmapBoth_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__scaleBitmapWidth") ) { return __scaleBitmapWidth_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__scaleBitmapHeight") ) { return __scaleBitmapHeight_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__updateBitmapScaling") ) { return __updateBitmapScaling_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__dontUpdateBitmapScaling") ) { return __dontUpdateBitmapScaling; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bmp_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { if (inCallProp == hx::paccAlways) return set_smooth(inValue);smooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::sx::backend::dummy::BitmapRenderer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return set_bitmapData(inValue);bitmapData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keepAspect") ) { if (inCallProp == hx::paccAlways) return set_keepAspect(inValue);keepAspect=inValue.Cast< bool >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__dontUpdateBitmapScaling") ) { __dontUpdateBitmapScaling=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Bmp_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Bmp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("keepAspect","\x3d","\x8c","\x45","\xd9"));
	outFields->push(HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"));
	outFields->push(HX_HCSTRING("__dontUpdateBitmapScaling","\x1e","\xc1","\xcb","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Bmp_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*::sx::backend::dummy::BitmapRenderer*/ ,(int)offsetof(Bmp_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsBool,(int)offsetof(Bmp_obj,keepAspect),HX_HCSTRING("keepAspect","\x3d","\x8c","\x45","\xd9")},
	{hx::fsBool,(int)offsetof(Bmp_obj,smooth),HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07")},
	{hx::fsBool,(int)offsetof(Bmp_obj,__dontUpdateBitmapScaling),HX_HCSTRING("__dontUpdateBitmapScaling","\x1e","\xc1","\xcb","\xba")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("keepAspect","\x3d","\x8c","\x45","\xd9"),
	HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"),
	HX_HCSTRING("__dontUpdateBitmapScaling","\x1e","\xc1","\xcb","\xba"),
	HX_HCSTRING("__createRenderer","\x7f","\xcf","\x55","\x39"),
	HX_HCSTRING("__propertyResized","\xfb","\x50","\xbf","\xac"),
	HX_HCSTRING("__paddingChanged","\x43","\x56","\x5c","\xf3"),
	HX_HCSTRING("__autoSizeChanged","\xe4","\x13","\xdb","\x65"),
	HX_HCSTRING("__updateBitmapScaling","\x2f","\x0b","\x13","\x17"),
	HX_HCSTRING("__scaleBitmapHeight","\xc0","\x93","\xfd","\x7c"),
	HX_HCSTRING("__scaleBitmapWidth","\x4d","\x28","\xd5","\x93"),
	HX_HCSTRING("__scaleBitmapBoth","\x1a","\x3c","\x06","\xe5"),
	HX_HCSTRING("set_bitmapData","\x76","\x26","\xd6","\xc9"),
	HX_HCSTRING("set_keepAspect","\xfa","\xfc","\x5a","\x6f"),
	HX_HCSTRING("set_smooth","\x6b","\x16","\x70","\xfb"),
	HX_HCSTRING("get___renderer","\xac","\xc0","\x09","\xcc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bmp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bmp_obj::__mClass,"__mClass");
};

#endif

hx::Class Bmp_obj::__mClass;

void Bmp_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.widgets.Bmp","\x1d","\x9f","\x11","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Bmp_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bmp_obj >;
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
