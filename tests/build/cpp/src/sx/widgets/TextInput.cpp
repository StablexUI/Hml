#include <hxcpp.h>

#ifndef INCLUDED_sx_Sx
#include <sx/Sx.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_BackendManager
#include <sx/backend/dummy/BackendManager.h>
#endif
#ifndef INCLUDED_sx_backend_dummy_TextInputRenderer
#include <sx/backend/dummy/TextInputRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IBackendManager
#include <sx/backend/interfaces/IBackendManager.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_IRenderer
#include <sx/backend/interfaces/IRenderer.h>
#endif
#ifndef INCLUDED_sx_backend_interfaces_ITextInputRenderer
#include <sx/backend/interfaces/ITextInputRenderer.h>
#endif
#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
#ifndef INCLUDED_sx_signals_Signal
#include <sx/signals/Signal.h>
#endif
#ifndef INCLUDED_sx_widgets_TextInput
#include <sx/widgets/TextInput.h>
#endif
#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
#ifndef INCLUDED_sx_widgets_base_RendererHolder
#include <sx/widgets/base/RendererHolder.h>
#endif
namespace sx{
namespace widgets{

Void TextInput_obj::__construct()
{
HX_STACK_FRAME("sx.widgets.TextInput","new",0x013fa867,"sx.widgets.TextInput.new","sx/widgets/TextInput.hx",15,0x619d84eb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	this->__hasCursor = false;
	HX_STACK_LINE(23)
	this->__invitation = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(20)
	this->__text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(40)
	super::__construct();
	HX_STACK_LINE(41)
	::sx::properties::metric::Size tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	tmp->set_dip((int)100);
	HX_STACK_LINE(42)
	::sx::backend::dummy::TextInputRenderer tmp1 = this->renderer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	Dynamic tmp2 = this->__rendererTextChanged_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	tmp1->onTextChange(tmp2);
	HX_STACK_LINE(43)
	::sx::backend::dummy::TextInputRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	Dynamic tmp4 = this->__rendererReceiveCursor_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	tmp3->onReceiveCursor(tmp4);
	HX_STACK_LINE(44)
	::sx::backend::dummy::TextInputRenderer tmp5 = this->renderer;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	Dynamic tmp6 = this->__rendererLoseCursor_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	tmp5->onLoseCursor(tmp6);
}
;
	return null();
}

//TextInput_obj::~TextInput_obj() { }

Dynamic TextInput_obj::__CreateEmpty() { return  new TextInput_obj; }
hx::ObjectPtr< TextInput_obj > TextInput_obj::__new()
{  hx::ObjectPtr< TextInput_obj > _result_ = new TextInput_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextInput_obj > _result_ = new TextInput_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextInput_obj::getTextFormat( ){
	HX_STACK_FRAME("sx.widgets.TextInput","getTextFormat",0x363032c1,"sx.widgets.TextInput.getTextFormat","sx/widgets/TextInput.hx",52,0x619d84eb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	::sx::backend::dummy::TextInputRenderer tmp = this->renderer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	Dynamic tmp1 = tmp->getFormat();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,getTextFormat,return )

Void TextInput_obj::setTextFormat( Dynamic format){
{
		HX_STACK_FRAME("sx.widgets.TextInput","setTextFormat",0x7b3614cd,"sx.widgets.TextInput.setTextFormat","sx/widgets/TextInput.hx",61,0x619d84eb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(62)
		::sx::backend::dummy::TextInputRenderer tmp = this->renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		Dynamic tmp1 = format;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		tmp->setFormat(tmp1);
		HX_STACK_LINE(62)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,setTextFormat,(void))

Void TextInput_obj::__createRenderer( ){
{
		HX_STACK_FRAME("sx.widgets.TextInput","__createRenderer",0x52a03f18,"sx.widgets.TextInput.__createRenderer","sx/widgets/TextInput.hx",70,0x619d84eb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		::sx::backend::dummy::BackendManager tmp = ::sx::Sx_obj::get_backendManager();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		::sx::backend::dummy::TextInputRenderer tmp1 = tmp->textInputRenderer(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		this->renderer = tmp1;
	}
return null();
}


::String TextInput_obj::set_text( ::String value){
	HX_STACK_FRAME("sx.widgets.TextInput","set_text",0x28b69043,"sx.widgets.TextInput.set_text","sx/widgets/TextInput.hx",79,0x619d84eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(80)
	this->__text = value;
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		bool tmp = this->__hasCursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		if ((tmp1)){
			HX_STACK_LINE(81)
			::String tmp3 = this->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			int tmp5 = tmp4.length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(81)
			tmp2 = (tmp5 > (int)0);
		}
		else{
			HX_STACK_LINE(81)
			tmp2 = true;
		}
		HX_STACK_LINE(81)
		if ((tmp2)){
			HX_STACK_LINE(81)
			::sx::backend::dummy::TextInputRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			::String tmp4 = this->get_text();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			tmp3->setText(tmp4);
		}
		else{
			HX_STACK_LINE(81)
			::sx::backend::dummy::TextInputRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			::String tmp4 = this->get_invitation();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			tmp3->setText(tmp4);
		}
	}
	HX_STACK_LINE(83)
	::sx::signals::Signal tmp = this->__onChange;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(146)
	if ((tmp1)){
		HX_STACK_LINE(83)
		::sx::signals::Signal tmp3 = this->__onChange;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
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
		HX_STACK_LINE(83)
		::sx::signals::Signal tmp3 = this->__onChange;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(147)
		bool tmp4 = tmp3->__listenersInUse;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(147)
		if ((tmp4)){
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(83)
				::sx::signals::Signal tmp5 = this->__onChange;		HX_STACK_VAR(tmp5,"tmp5");
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
					listener(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
			}
			HX_STACK_LINE(149)
			false;
		}
		else{
			HX_STACK_LINE(83)
			::sx::signals::Signal tmp5 = this->__onChange;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			tmp5->__listenersInUse = true;
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(83)
				::sx::signals::Signal tmp6 = this->__onChange;		HX_STACK_VAR(tmp6,"tmp6");
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
					listener(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
			}
			HX_STACK_LINE(83)
			::sx::signals::Signal tmp6 = this->__onChange;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(153)
			tmp6->__listenersInUse = false;
		}
	}
	HX_STACK_LINE(85)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_text,return )

Void TextInput_obj::__rendererTextChanged( ::String newText){
{
		HX_STACK_FRAME("sx.widgets.TextInput","__rendererTextChanged",0x980ad5eb,"sx.widgets.TextInput.__rendererTextChanged","sx/widgets/TextInput.hx",93,0x619d84eb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newText,"newText")
		HX_STACK_LINE(94)
		this->__text = newText;
		HX_STACK_LINE(95)
		::sx::signals::Signal tmp = this->__onChange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		if ((tmp1)){
			HX_STACK_LINE(95)
			::sx::signals::Signal tmp3 = this->__onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(95)
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
			HX_STACK_LINE(95)
			::sx::signals::Signal tmp3 = this->__onChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			bool tmp4 = tmp3->__listenersInUse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			if ((tmp4)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(95)
					::sx::signals::Signal tmp5 = this->__onChange;		HX_STACK_VAR(tmp5,"tmp5");
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
						listener(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
				HX_STACK_LINE(149)
				false;
			}
			else{
				HX_STACK_LINE(95)
				::sx::signals::Signal tmp5 = this->__onChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				tmp5->__listenersInUse = true;
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(95)
					::sx::signals::Signal tmp6 = this->__onChange;		HX_STACK_VAR(tmp6,"tmp6");
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
						listener(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
				HX_STACK_LINE(95)
				::sx::signals::Signal tmp6 = this->__onChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				tmp6->__listenersInUse = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,__rendererTextChanged,(void))

Void TextInput_obj::__rendererReceiveCursor( ){
{
		HX_STACK_FRAME("sx.widgets.TextInput","__rendererReceiveCursor",0x6c946c3d,"sx.widgets.TextInput.__rendererReceiveCursor","sx/widgets/TextInput.hx",103,0x619d84eb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		this->__hasCursor = true;
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			bool tmp = this->__hasCursor;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(105)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(105)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(105)
			if ((tmp1)){
				HX_STACK_LINE(105)
				::String tmp3 = this->get_text();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(105)
				::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				int tmp5 = tmp4.length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(105)
				tmp2 = (tmp5 > (int)0);
			}
			else{
				HX_STACK_LINE(105)
				tmp2 = true;
			}
			HX_STACK_LINE(105)
			if ((tmp2)){
				HX_STACK_LINE(105)
				::sx::backend::dummy::TextInputRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(105)
				::String tmp4 = this->get_text();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				tmp3->setText(tmp4);
			}
			else{
				HX_STACK_LINE(105)
				::sx::backend::dummy::TextInputRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(105)
				::String tmp4 = this->get_invitation();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				tmp3->setText(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,__rendererReceiveCursor,(void))

Void TextInput_obj::__rendererLoseCursor( ){
{
		HX_STACK_FRAME("sx.widgets.TextInput","__rendererLoseCursor",0xe770a0e7,"sx.widgets.TextInput.__rendererLoseCursor","sx/widgets/TextInput.hx",113,0x619d84eb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		this->__hasCursor = false;
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			bool tmp = this->__hasCursor;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(115)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(115)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(115)
			if ((tmp1)){
				HX_STACK_LINE(115)
				::String tmp3 = this->get_text();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(115)
				::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(115)
				int tmp5 = tmp4.length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(115)
				tmp2 = (tmp5 > (int)0);
			}
			else{
				HX_STACK_LINE(115)
				tmp2 = true;
			}
			HX_STACK_LINE(115)
			if ((tmp2)){
				HX_STACK_LINE(115)
				::sx::backend::dummy::TextInputRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(115)
				::String tmp4 = this->get_text();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(115)
				tmp3->setText(tmp4);
			}
			else{
				HX_STACK_LINE(115)
				::sx::backend::dummy::TextInputRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(115)
				::String tmp4 = this->get_invitation();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(115)
				tmp3->setText(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,__rendererLoseCursor,(void))

Void TextInput_obj::__updateRendererContent( ){
{
		HX_STACK_FRAME("sx.widgets.TextInput","__updateRendererContent",0x9b2fe094,"sx.widgets.TextInput.__updateRendererContent","sx/widgets/TextInput.hx",124,0x619d84eb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		bool tmp = this->__hasCursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		if ((tmp1)){
			HX_STACK_LINE(125)
			::String tmp3 = this->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			int tmp5 = tmp4.length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(125)
			tmp2 = (tmp5 > (int)0);
		}
		else{
			HX_STACK_LINE(125)
			tmp2 = true;
		}
		HX_STACK_LINE(125)
		if ((tmp2)){
			HX_STACK_LINE(126)
			::sx::backend::dummy::TextInputRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			::String tmp4 = this->get_text();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			tmp3->setText(tmp4);
		}
		else{
			HX_STACK_LINE(128)
			::sx::backend::dummy::TextInputRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			::String tmp4 = this->get_invitation();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			tmp3->setText(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,__updateRendererContent,(void))

::String TextInput_obj::set_invitation( ::String value){
	HX_STACK_FRAME("sx.widgets.TextInput","set_invitation",0xfdda1e2f,"sx.widgets.TextInput.set_invitation","sx/widgets/TextInput.hx",137,0x619d84eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(138)
	this->__invitation = value;
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		bool tmp = this->__hasCursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		if ((tmp1)){
			HX_STACK_LINE(139)
			::String tmp3 = this->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			int tmp5 = tmp4.length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			tmp2 = (tmp5 > (int)0);
		}
		else{
			HX_STACK_LINE(139)
			tmp2 = true;
		}
		HX_STACK_LINE(139)
		if ((tmp2)){
			HX_STACK_LINE(139)
			::sx::backend::dummy::TextInputRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			::String tmp4 = this->get_text();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			tmp3->setText(tmp4);
		}
		else{
			HX_STACK_LINE(139)
			::sx::backend::dummy::TextInputRenderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			::String tmp4 = this->get_invitation();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			tmp3->setText(tmp4);
		}
	}
	HX_STACK_LINE(141)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_invitation,return )

::String TextInput_obj::get_invitation( ){
	HX_STACK_FRAME("sx.widgets.TextInput","get_invitation",0xddba35bb,"sx.widgets.TextInput.get_invitation","sx/widgets/TextInput.hx",146,0x619d84eb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	::String tmp = this->__invitation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_invitation,return )

::String TextInput_obj::get_text( ){
	HX_STACK_FRAME("sx.widgets.TextInput","get_text",0x7a5936cf,"sx.widgets.TextInput.get_text","sx/widgets/TextInput.hx",147,0x619d84eb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	::String tmp = this->__text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_text,return )

::sx::backend::interfaces::IRenderer TextInput_obj::get___renderer( ){
	HX_STACK_FRAME("sx.widgets.TextInput","get___renderer",0xbdb8e805,"sx.widgets.TextInput.get___renderer","sx/widgets/TextInput.hx",148,0x619d84eb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	::sx::backend::dummy::TextInputRenderer tmp = this->renderer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	return tmp;
}


::sx::signals::Signal TextInput_obj::get_onChange( ){
	HX_STACK_FRAME("sx.widgets.TextInput","get_onChange",0x6d1bab11,"sx.widgets.TextInput.get_onChange","sx/widgets/TextInput.hx",149,0x619d84eb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	::sx::signals::Signal tmp = this->__onChange;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	::sx::signals::Signal tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(149)
	if ((tmp1)){
		HX_STACK_LINE(149)
		::sx::signals::Signal tmp3 = ::sx::signals::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		tmp2 = this->__onChange = tmp3;
	}
	else{
		HX_STACK_LINE(149)
		tmp2 = this->__onChange;
	}
	HX_STACK_LINE(149)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_onChange,return )


TextInput_obj::TextInput_obj()
{
}

void TextInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextInput);
	HX_MARK_MEMBER_NAME(__text,"__text");
	HX_MARK_MEMBER_NAME(__invitation,"__invitation");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(__onChange,"__onChange");
	HX_MARK_MEMBER_NAME(__hasCursor,"__hasCursor");
	::sx::widgets::base::RendererHolder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__text,"__text");
	HX_VISIT_MEMBER_NAME(__invitation,"__invitation");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(__onChange,"__onChange");
	HX_VISIT_MEMBER_NAME(__hasCursor,"__hasCursor");
	::sx::widgets::base::RendererHolder_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__text") ) { return __text; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"onChange") ) { if (inCallProp == hx::paccAlways) return get_onChange(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invitation") ) { if (inCallProp == hx::paccAlways) return get_invitation(); }
		if (HX_FIELD_EQ(inName,"__onChange") ) { return __onChange; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__hasCursor") ) { return __hasCursor; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__invitation") ) { return __invitation; }
		if (HX_FIELD_EQ(inName,"get_onChange") ) { return get_onChange_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTextFormat") ) { return getTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextFormat") ) { return setTextFormat_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_invitation") ) { return set_invitation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_invitation") ) { return get_invitation_dyn(); }
		if (HX_FIELD_EQ(inName,"get___renderer") ) { return get___renderer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__createRenderer") ) { return __createRenderer_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__rendererLoseCursor") ) { return __rendererLoseCursor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__rendererTextChanged") ) { return __rendererTextChanged_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__rendererReceiveCursor") ) { return __rendererReceiveCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateRendererContent") ) { return __updateRendererContent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__text") ) { __text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::sx::backend::dummy::TextInputRenderer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invitation") ) { if (inCallProp == hx::paccAlways) return set_invitation(inValue); }
		if (HX_FIELD_EQ(inName,"__onChange") ) { __onChange=inValue.Cast< ::sx::signals::Signal >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__hasCursor") ) { __hasCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__invitation") ) { __invitation=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextInput_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TextInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb"));
	outFields->push(HX_HCSTRING("invitation","\x19","\x86","\x15","\x76"));
	outFields->push(HX_HCSTRING("__invitation","\x39","\x01","\xa9","\xae"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"));
	outFields->push(HX_HCSTRING("__onChange","\x0f","\xfb","\x57","\x3a"));
	outFields->push(HX_HCSTRING("__hasCursor","\xb0","\x8a","\xfd","\xad"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TextInput_obj,__text),HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb")},
	{hx::fsString,(int)offsetof(TextInput_obj,__invitation),HX_HCSTRING("__invitation","\x39","\x01","\xa9","\xae")},
	{hx::fsObject /*::sx::backend::dummy::TextInputRenderer*/ ,(int)offsetof(TextInput_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*::sx::signals::Signal*/ ,(int)offsetof(TextInput_obj,__onChange),HX_HCSTRING("__onChange","\x0f","\xfb","\x57","\x3a")},
	{hx::fsBool,(int)offsetof(TextInput_obj,__hasCursor),HX_HCSTRING("__hasCursor","\xb0","\x8a","\xfd","\xad")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb"),
	HX_HCSTRING("__invitation","\x39","\x01","\xa9","\xae"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("__onChange","\x0f","\xfb","\x57","\x3a"),
	HX_HCSTRING("__hasCursor","\xb0","\x8a","\xfd","\xad"),
	HX_HCSTRING("getTextFormat","\xfa","\x6b","\xf1","\x90"),
	HX_HCSTRING("setTextFormat","\x06","\x4e","\xf7","\xd5"),
	HX_HCSTRING("__createRenderer","\x7f","\xcf","\x55","\x39"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("__rendererTextChanged","\x24","\x70","\xed","\xd3"),
	HX_HCSTRING("__rendererReceiveCursor","\xb6","\xc6","\xfc","\x59"),
	HX_HCSTRING("__rendererLoseCursor","\xce","\xf0","\x73","\xce"),
	HX_HCSTRING("__updateRendererContent","\x0d","\x3b","\x98","\x88"),
	HX_HCSTRING("set_invitation","\xd6","\xf6","\x2a","\x0c"),
	HX_HCSTRING("get_invitation","\x62","\x0e","\x0b","\xec"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("get___renderer","\xac","\xc0","\x09","\xcc"),
	HX_HCSTRING("get_onChange","\xf8","\x3b","\x39","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextInput_obj::__mClass,"__mClass");
};

#endif

hx::Class TextInput_obj::__mClass;

void TextInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.widgets.TextInput","\xf5","\xe8","\x43","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TextInput_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextInput_obj >;
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
