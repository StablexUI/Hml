#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_rtti_CType
#include <haxe/rtti/CType.h>
#endif
#ifndef INCLUDED_haxe_rtti_Rights
#include <haxe/rtti/Rights.h>
#endif
#ifndef INCLUDED_haxe_rtti_TypeTree
#include <haxe/rtti/TypeTree.h>
#endif
#ifndef INCLUDED_haxe_rtti_XmlParser
#include <haxe/rtti/XmlParser.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace haxe{
namespace rtti{

Void XmlParser_obj::__construct()
{
HX_STACK_FRAME("haxe.rtti.XmlParser","new",0x122ab839,"haxe.rtti.XmlParser.new","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",32,0x53c9a498)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	this->root = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//XmlParser_obj::~XmlParser_obj() { }

Dynamic XmlParser_obj::__CreateEmpty() { return  new XmlParser_obj; }
hx::ObjectPtr< XmlParser_obj > XmlParser_obj::__new()
{  hx::ObjectPtr< XmlParser_obj > _result_ = new XmlParser_obj();
	_result_->__construct();
	return _result_;}

Dynamic XmlParser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XmlParser_obj > _result_ = new XmlParser_obj();
	_result_->__construct();
	return _result_;}

::String XmlParser_obj::mkPath( ::String p){
	HX_STACK_FRAME("haxe.rtti.XmlParser","mkPath",0xdd943dea,"haxe.rtti.XmlParser.mkPath","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",284,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(285)
	::String tmp = p;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,mkPath,return )

Array< ::String > XmlParser_obj::mkTypeParams( ::String p){
	HX_STACK_FRAME("haxe.rtti.XmlParser","mkTypeParams",0x6ccf83a5,"haxe.rtti.XmlParser.mkTypeParams","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",288,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(289)
	Array< ::String > pl = p.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(pl,"pl");
	HX_STACK_LINE(290)
	::String tmp = pl->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(290)
	bool tmp1 = (tmp == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(290)
	if ((tmp1)){
		HX_STACK_LINE(291)
		return Array_obj< ::String >::__new();
	}
	HX_STACK_LINE(292)
	return pl;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,mkTypeParams,return )

::haxe::rtti::Rights XmlParser_obj::mkRights( ::String r){
	HX_STACK_FRAME("haxe.rtti.XmlParser","mkRights",0xf8e3089c,"haxe.rtti.XmlParser.mkRights","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",295,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(296)
	::String tmp = r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	::haxe::rtti::Rights tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(296)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("null","\x87","\x9e","\x0e","\x49"))){
		HX_STACK_LINE(297)
		tmp1 = ::haxe::rtti::Rights_obj::RNo;
	}
	else if (  ( _switch_1==HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"))){
		HX_STACK_LINE(298)
		tmp1 = ::haxe::rtti::Rights_obj::RMethod;
	}
	else if (  ( _switch_1==HX_HCSTRING("dynamic","\x7f","\x9f","\x15","\x36"))){
		HX_STACK_LINE(299)
		tmp1 = ::haxe::rtti::Rights_obj::RDynamic;
	}
	else if (  ( _switch_1==HX_HCSTRING("inline","\x59","\xca","\x3f","\x99"))){
		HX_STACK_LINE(300)
		tmp1 = ::haxe::rtti::Rights_obj::RInline;
	}
	else  {
		HX_STACK_LINE(301)
		::String tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		tmp1 = ::haxe::rtti::Rights_obj::RCall(tmp2);
	}
;
;
	HX_STACK_LINE(296)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,mkRights,return )

Dynamic XmlParser_obj::xerror( ::haxe::xml::Fast c){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xerror",0xe59fde17,"haxe.rtti.XmlParser.xerror","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",305,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(306)
	::String tmp = c->get_name();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	::String tmp1 = (HX_HCSTRING("Invalid ","\x69","\x79","\x49","\x7d") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	HX_STACK_DO_THROW(tmp1);
	HX_STACK_LINE(306)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xerror,return )

::haxe::rtti::TypeTree XmlParser_obj::processElement( ::Xml x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","processElement",0x61cb54d4,"haxe.rtti.XmlParser.processElement","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",315,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(316)
	::haxe::xml::Fast tmp = ::haxe::xml::Fast_obj::__new(x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(316)
	::haxe::xml::Fast c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(317)
	::haxe::rtti::TypeTree tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(317)
	{
		HX_STACK_LINE(317)
		::String tmp2 = c->get_name();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(317)
		::String _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(317)
		::String tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(317)
		::String _switch_2 = (tmp3);
		if (  ( _switch_2==HX_HCSTRING("class","\x38","\x78","\x58","\x48"))){
			HX_STACK_LINE(318)
			::haxe::xml::Fast tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(318)
			Dynamic tmp5 = this->xclass(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(318)
			tmp1 = ::haxe::rtti::TypeTree_obj::TClassdecl(tmp5);
		}
		else if (  ( _switch_2==HX_HCSTRING("enum","\x01","\x6b","\x16","\x43"))){
			HX_STACK_LINE(319)
			::haxe::xml::Fast tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(319)
			Dynamic tmp5 = this->xenum(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(319)
			tmp1 = ::haxe::rtti::TypeTree_obj::TEnumdecl(tmp5);
		}
		else if (  ( _switch_2==HX_HCSTRING("typedef","\x4b","\x37","\xd8","\xf8"))){
			HX_STACK_LINE(320)
			::haxe::xml::Fast tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(320)
			Dynamic tmp5 = this->xtypedef(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(320)
			tmp1 = ::haxe::rtti::TypeTree_obj::TTypedecl(tmp5);
		}
		else if (  ( _switch_2==HX_HCSTRING("abstract","\xe2","\xc0","\x7e","\xa8"))){
			HX_STACK_LINE(321)
			::haxe::xml::Fast tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(321)
			Dynamic tmp5 = this->xabstract(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(321)
			tmp1 = ::haxe::rtti::TypeTree_obj::TAbstractdecl(tmp5);
		}
		else  {
			HX_STACK_LINE(322)
			::haxe::xml::Fast tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(322)
			tmp1 = this->xerror(tmp4);
		}
;
;
	}
	HX_STACK_LINE(317)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,processElement,return )

cpp::ArrayBase XmlParser_obj::xmeta( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xmeta",0xc3b23756,"haxe.rtti.XmlParser.xmeta","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",326,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(327)
	cpp::ArrayBase ml = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(ml,"ml");
	HX_STACK_LINE(328)
	{
		HX_STACK_LINE(328)
		::_List::ListIterator tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		{
			HX_STACK_LINE(328)
			::List tmp1 = x->nodes->resolve(HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(328)
			::List _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(328)
			tmp = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(328)
		::_List::ListIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(328)
		while((true)){
			HX_STACK_LINE(328)
			bool tmp1 = (_g->head != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(328)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(328)
			if ((tmp2)){
				HX_STACK_LINE(328)
				break;
			}
			HX_STACK_LINE(328)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(328)
			{
				HX_STACK_LINE(328)
				Dynamic tmp4 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(328)
				_g->val = tmp4;
				HX_STACK_LINE(328)
				Dynamic tmp5 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(328)
				_g->head = tmp5;
				HX_STACK_LINE(328)
				tmp3 = _g->val;
			}
			HX_STACK_LINE(328)
			::haxe::xml::Fast m = ((::haxe::xml::Fast)(tmp3));		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(329)
			Array< ::String > pl = Array_obj< ::String >::__new();		HX_STACK_VAR(pl,"pl");
			HX_STACK_LINE(330)
			{
				HX_STACK_LINE(330)
				::_List::ListIterator tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(330)
				{
					HX_STACK_LINE(330)
					::List tmp5 = m->nodes->resolve(HX_HCSTRING("e","\x65","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(330)
					::List _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(330)
					tmp4 = ::_List::ListIterator_obj::__new(_this->h);
				}
				HX_STACK_LINE(330)
				::_List::ListIterator _g1 = tmp4;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(330)
				while((true)){
					HX_STACK_LINE(330)
					bool tmp5 = (_g1->head != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(330)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(330)
					if ((tmp6)){
						HX_STACK_LINE(330)
						break;
					}
					HX_STACK_LINE(330)
					Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(330)
					{
						HX_STACK_LINE(330)
						Dynamic tmp8 = _g1->head->__GetItem((int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(330)
						_g1->val = tmp8;
						HX_STACK_LINE(330)
						Dynamic tmp9 = _g1->head->__GetItem((int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(330)
						_g1->head = tmp9;
						HX_STACK_LINE(330)
						tmp7 = _g1->val;
					}
					HX_STACK_LINE(330)
					::haxe::xml::Fast p = ((::haxe::xml::Fast)(tmp7));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(331)
					::String tmp8 = p->get_innerHTML();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(331)
					pl->push(tmp8);
				}
			}
			HX_STACK_LINE(332)
			::String tmp4 = m->att->resolve(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			struct _Function_3_1{
				inline static Dynamic Block( Array< ::String > &pl,::String &tmp4){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",332,0x53c9a498)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp4,false);
						__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , pl,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(332)
			Dynamic tmp5 = _Function_3_1::Block(pl,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(332)
			ml->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		}
	}
	HX_STACK_LINE(334)
	return ml;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xmeta,return )

::List XmlParser_obj::xoverloads( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xoverloads",0xe2124b88,"haxe.rtti.XmlParser.xoverloads","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",337,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(338)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(338)
	::List l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(339)
	Dynamic tmp1 = x->get_elements();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(339)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp1);  __it->hasNext(); ){
		::haxe::xml::Fast m = __it->next();
		{
			HX_STACK_LINE(340)
			::haxe::xml::Fast tmp2 = m;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(340)
			Dynamic tmp3 = this->xclassfield(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(340)
			l->add(tmp3);
		}
;
	}
	HX_STACK_LINE(342)
	::List tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(342)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xoverloads,return )

Dynamic XmlParser_obj::xpath( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xpath",0xc5aad236,"haxe.rtti.XmlParser.xpath","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",345,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(346)
	::String tmp = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(346)
	::String tmp1 = this->mkPath(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(346)
	::String path = tmp1;		HX_STACK_VAR(path,"path");
	HX_STACK_LINE(347)
	::List tmp2 = ::List_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(347)
	::List params = tmp2;		HX_STACK_VAR(params,"params");
	HX_STACK_LINE(348)
	Dynamic tmp3 = x->get_elements();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(348)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp3);  __it->hasNext(); ){
		::haxe::xml::Fast c = __it->next();
		{
			HX_STACK_LINE(349)
			::haxe::xml::Fast tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(349)
			::haxe::rtti::CType tmp5 = this->xtype(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(349)
			params->add(tmp5);
		}
;
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::List &params,::String &path){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",350,0x53c9a498)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a") , path,false);
				__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , params,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(350)
	Dynamic tmp4 = _Function_1_1::Block(params,path);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(350)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xpath,return )

Dynamic XmlParser_obj::xclass( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xclass",0xbace8a87,"haxe.rtti.XmlParser.xclass","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",356,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(357)
	Dynamic csuper = null();		HX_STACK_VAR(csuper,"csuper");
	HX_STACK_LINE(358)
	::String doc = null();		HX_STACK_VAR(doc,"doc");
	HX_STACK_LINE(359)
	::haxe::rtti::CType tdynamic = null();		HX_STACK_VAR(tdynamic,"tdynamic");
	HX_STACK_LINE(360)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(360)
	::List interfaces = tmp;		HX_STACK_VAR(interfaces,"interfaces");
	HX_STACK_LINE(361)
	::List tmp1 = ::List_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(361)
	::List fields = tmp1;		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(362)
	::List tmp2 = ::List_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(362)
	::List statics = tmp2;		HX_STACK_VAR(statics,"statics");
	HX_STACK_LINE(363)
	cpp::ArrayBase meta = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(meta,"meta");
	HX_STACK_LINE(364)
	Dynamic tmp3 = x->get_elements();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(364)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp3);  __it->hasNext(); ){
		::haxe::xml::Fast c = __it->next();
		{
			HX_STACK_LINE(365)
			::String tmp4 = c->get_name();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(365)
			::String _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(365)
			::String tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(365)
			::String _switch_3 = (tmp5);
			if (  ( _switch_3==HX_HCSTRING("haxe_doc","\x9f","\xc6","\x83","\x5f"))){
				HX_STACK_LINE(366)
				::String tmp6 = c->get_innerData();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(366)
				doc = tmp6;
			}
			else if (  ( _switch_3==HX_HCSTRING("extends","\x59","\xcd","\x5c","\x70"))){
				HX_STACK_LINE(367)
				::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(367)
				Dynamic tmp7 = this->xpath(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(367)
				csuper = tmp7;
			}
			else if (  ( _switch_3==HX_HCSTRING("implements","\x70","\xfd","\x43","\xa8"))){
				HX_STACK_LINE(368)
				::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(368)
				Dynamic tmp7 = this->xpath(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(368)
				interfaces->add(tmp7);
			}
			else if (  ( _switch_3==HX_HCSTRING("haxe_dynamic","\x26","\xc3","\xff","\x55"))){
				HX_STACK_LINE(369)
				::Xml tmp6 = c->x->firstElement();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(369)
				::haxe::xml::Fast tmp7 = ::haxe::xml::Fast_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(369)
				::haxe::rtti::CType tmp8 = this->xtype(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(369)
				tdynamic = tmp8;
			}
			else if (  ( _switch_3==HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"))){
				HX_STACK_LINE(370)
				::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(370)
				meta = this->xmeta(tmp6);
			}
			else  {
				HX_STACK_LINE(372)
				bool tmp6 = c->x->exists(HX_HCSTRING("static","\xae","\xdc","\xfb","\x05"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(372)
				if ((tmp6)){
					HX_STACK_LINE(373)
					::haxe::xml::Fast tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(373)
					Dynamic tmp8 = this->xclassfield(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(373)
					statics->add(tmp8);
				}
				else{
					HX_STACK_LINE(375)
					::haxe::xml::Fast tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(375)
					Dynamic tmp8 = this->xclassfield(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(375)
					fields->add(tmp8);
				}
			}
;
;
		}
;
	}
	HX_STACK_LINE(378)
	bool tmp4 = x->has->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(378)
	::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(378)
	if ((tmp4)){
		HX_STACK_LINE(378)
		tmp5 = x->att->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	}
	else{
		HX_STACK_LINE(378)
		tmp5 = null();
	}
	HX_STACK_LINE(379)
	::String tmp6 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(379)
	::String tmp7 = this->mkPath(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(380)
	bool tmp8 = x->has->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(380)
	::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(380)
	if ((tmp8)){
		HX_STACK_LINE(380)
		::String tmp10 = x->att->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(380)
		tmp9 = this->mkPath(tmp10);
	}
	else{
		HX_STACK_LINE(380)
		tmp9 = null();
	}
	HX_STACK_LINE(381)
	::String tmp10 = doc;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(382)
	bool tmp11 = x->x->exists(HX_HCSTRING("private","\x03","\x2d","\x6f","\x89"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(383)
	bool tmp12 = x->x->exists(HX_HCSTRING("extern","\x60","\xd5","\x1a","\xc7"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(384)
	bool tmp13 = x->x->exists(HX_HCSTRING("interface","\xb9","\x31","\xda","\x39"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(385)
	::String tmp14 = x->att->resolve(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(386)
	Dynamic tmp15 = csuper;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(387)
	::List tmp16 = interfaces;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(388)
	::List tmp17 = fields;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(389)
	::List tmp18 = statics;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(390)
	::haxe::rtti::CType tmp19 = tdynamic;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(391)
	::List tmp20 = this->defplat();		HX_STACK_VAR(tmp20,"tmp20");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp5,hx::ObjectPtr< ::haxe::rtti::XmlParser_obj > __this,bool &tmp13,::List &tmp17,::List &tmp20,::String &tmp9,bool &tmp11,::haxe::rtti::CType &tmp19,::String &tmp10,Dynamic &tmp15,cpp::ArrayBase &meta,::String &tmp7,bool &tmp12,::List &tmp16,::List &tmp18,::String &tmp14){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",377,0x53c9a498)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , tmp5,false);
				__result->Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a") , tmp7,false);
				__result->Add(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0") , tmp9,false);
				__result->Add(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00") , tmp10,false);
				__result->Add(HX_HCSTRING("isPrivate","\x39","\xaa","\x6d","\x8d") , tmp11,false);
				__result->Add(HX_HCSTRING("isExtern","\xea","\x70","\x84","\x1f") , tmp12,false);
				__result->Add(HX_HCSTRING("isInterface","\x6f","\xe8","\x5a","\x18") , tmp13,false);
				__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , __this->mkTypeParams(tmp14),false);
				__result->Add(HX_HCSTRING("superClass","\xbd","\xa8","\x07","\xa8") , tmp15,false);
				__result->Add(HX_HCSTRING("interfaces","\x9a","\x50","\x11","\x65") , tmp16,false);
				__result->Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80") , tmp17,false);
				__result->Add(HX_HCSTRING("statics","\x05","\x3c","\x65","\x36") , tmp18,false);
				__result->Add(HX_HCSTRING("tdynamic","\x8b","\x55","\xf1","\x20") , tmp19,false);
				__result->Add(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92") , tmp20,false);
				__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , meta,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(377)
	Dynamic tmp21 = _Function_1_1::Block(tmp5,this,tmp13,tmp17,tmp20,tmp9,tmp11,tmp19,tmp10,tmp15,meta,tmp7,tmp12,tmp16,tmp18,tmp14);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(377)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xclass,return )

Dynamic XmlParser_obj::xclassfield( ::haxe::xml::Fast x,Dynamic __o_defPublic){
Dynamic defPublic = __o_defPublic.Default(false);
	HX_STACK_FRAME("haxe.rtti.XmlParser","xclassfield",0x94fe80d3,"haxe.rtti.XmlParser.xclassfield","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",396,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(defPublic,"defPublic")
{
		HX_STACK_LINE(397)
		Dynamic tmp = x->get_elements();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		Dynamic e = tmp;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(398)
		::haxe::xml::Fast tmp1 = e->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(398)
		::haxe::rtti::CType tmp2 = this->xtype(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		::haxe::rtti::CType t = tmp2;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(399)
		::String doc = null();		HX_STACK_VAR(doc,"doc");
		HX_STACK_LINE(400)
		cpp::ArrayBase meta = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(meta,"meta");
		HX_STACK_LINE(401)
		::List overloads = null();		HX_STACK_VAR(overloads,"overloads");
		HX_STACK_LINE(402)
		Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(402)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp3);  __it->hasNext(); ){
			::haxe::xml::Fast c = __it->next();
			{
				HX_STACK_LINE(403)
				::String tmp4 = c->get_name();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(403)
				::String _g = tmp4;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(403)
				::String tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(403)
				::String _switch_4 = (tmp5);
				if (  ( _switch_4==HX_HCSTRING("haxe_doc","\x9f","\xc6","\x83","\x5f"))){
					HX_STACK_LINE(404)
					::String tmp6 = c->get_innerData();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(404)
					doc = tmp6;
				}
				else if (  ( _switch_4==HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"))){
					HX_STACK_LINE(405)
					::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(405)
					meta = this->xmeta(tmp6);
				}
				else if (  ( _switch_4==HX_HCSTRING("overloads","\xb9","\x65","\x83","\x49"))){
					HX_STACK_LINE(406)
					::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(406)
					::List tmp7 = this->xoverloads(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(406)
					overloads = tmp7;
				}
				else  {
					HX_STACK_LINE(407)
					::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(407)
					this->xerror(tmp6);
				}
;
;
			}
;
		}
		HX_STACK_LINE(410)
		::String tmp4 = x->get_name();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(411)
		::haxe::rtti::CType tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(412)
		bool tmp6 = x->x->exists(HX_HCSTRING("public","\xa9","\x80","\xf3","\x66"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(412)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(412)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(412)
		if ((tmp7)){
			HX_STACK_LINE(412)
			tmp8 = defPublic;
		}
		else{
			HX_STACK_LINE(412)
			tmp8 = true;
		}
		HX_STACK_LINE(413)
		bool tmp9 = x->x->exists(HX_HCSTRING("override","\x4c","\x22","\x28","\x49"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(414)
		bool tmp10 = x->has->resolve(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(414)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(414)
		if ((tmp10)){
			HX_STACK_LINE(414)
			::String tmp12 = x->att->resolve(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(414)
			tmp11 = ::Std_obj::parseInt(tmp12);
		}
		else{
			HX_STACK_LINE(414)
			tmp11 = null();
		}
		HX_STACK_LINE(415)
		::String tmp12 = doc;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(416)
		bool tmp13 = x->has->resolve(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(416)
		::haxe::rtti::Rights tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(416)
		if ((tmp13)){
			HX_STACK_LINE(416)
			::String tmp15 = x->att->resolve(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(416)
			tmp14 = this->mkRights(tmp15);
		}
		else{
			HX_STACK_LINE(416)
			tmp14 = ::haxe::rtti::Rights_obj::RNormal;
		}
		HX_STACK_LINE(417)
		bool tmp15 = x->has->resolve(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(417)
		::haxe::rtti::Rights tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(417)
		if ((tmp15)){
			HX_STACK_LINE(417)
			::String tmp17 = x->att->resolve(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(417)
			tmp16 = this->mkRights(tmp17);
		}
		else{
			HX_STACK_LINE(417)
			tmp16 = ::haxe::rtti::Rights_obj::RNormal;
		}
		HX_STACK_LINE(418)
		bool tmp17 = x->has->resolve(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(419)
		::List tmp18 = this->defplat();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(421)
		::List tmp19 = overloads;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(422)
		bool tmp20 = x->has->resolve(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(422)
		::String tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(422)
		if ((tmp20)){
			HX_STACK_LINE(422)
			tmp21 = x->att->resolve(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"));
		}
		else{
			HX_STACK_LINE(422)
			tmp21 = null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::haxe::rtti::CType &tmp5,hx::ObjectPtr< ::haxe::rtti::XmlParser_obj > __this,bool &tmp17,bool &tmp9,Dynamic &tmp11,::List &tmp19,::String &tmp4,::haxe::xml::Fast &x,::String &tmp21,cpp::ArrayBase &meta,bool &tmp8,::String &tmp12,::haxe::rtti::Rights &tmp16,::List &tmp18,::haxe::rtti::Rights &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",409,0x53c9a498)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp4,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , tmp5,false);
					__result->Add(HX_HCSTRING("isPublic","\x33","\x1c","\x5d","\xbf") , tmp8,false);
					__result->Add(HX_HCSTRING("isOverride","\x56","\x34","\xd7","\xc3") , tmp9,false);
					__result->Add(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47") , tmp11,false);
					__result->Add(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00") , tmp12,false);
					__result->Add(HX_HCSTRING("get","\x96","\x80","\x4e","\x00") , tmp14,false);
					__result->Add(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00") , tmp16,false);
					struct _Function_2_1{
						inline static Array< ::String > Block( hx::ObjectPtr< ::haxe::rtti::XmlParser_obj > __this,::haxe::xml::Fast &x){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",418,0x53c9a498)
							{
								HX_STACK_LINE(418)
								::String tmp22 = x->att->resolve(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(418)
								return __this->mkTypeParams(tmp22);
							}
							return null();
						}
					};
					__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , (  ((tmp17)) ? Array< ::String >(_Function_2_1::Block(__this,x)) : Array< ::String >(Array_obj< ::String >::__new()) ),false);
					__result->Add(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92") , tmp18,false);
					__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , meta,false);
					__result->Add(HX_HCSTRING("overloads","\xb9","\x65","\x83","\x49") , tmp19,false);
					__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp21,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(409)
		Dynamic tmp22 = _Function_1_1::Block(tmp5,this,tmp17,tmp9,tmp11,tmp19,tmp4,x,tmp21,meta,tmp8,tmp12,tmp16,tmp18,tmp14);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(409)
		return tmp22;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(XmlParser_obj,xclassfield,return )

Dynamic XmlParser_obj::xenum( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xenum",0xbe6f5792,"haxe.rtti.XmlParser.xenum","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",426,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(427)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(427)
	::List cl = tmp;		HX_STACK_VAR(cl,"cl");
	HX_STACK_LINE(428)
	::String doc = null();		HX_STACK_VAR(doc,"doc");
	HX_STACK_LINE(429)
	cpp::ArrayBase meta = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(meta,"meta");
	HX_STACK_LINE(430)
	Dynamic tmp1 = x->get_elements();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(430)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp1);  __it->hasNext(); ){
		::haxe::xml::Fast c = __it->next();
		{
			HX_STACK_LINE(431)
			::String tmp2 = c->get_name();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(431)
			bool tmp3 = (tmp2 == HX_HCSTRING("haxe_doc","\x9f","\xc6","\x83","\x5f"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(431)
			if ((tmp3)){
				HX_STACK_LINE(432)
				::String tmp4 = c->get_innerData();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(432)
				doc = tmp4;
			}
			else{
				HX_STACK_LINE(433)
				::String tmp4 = c->get_name();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(433)
				bool tmp5 = (tmp4 == HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(433)
				if ((tmp5)){
					HX_STACK_LINE(434)
					::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(434)
					meta = this->xmeta(tmp6);
				}
				else{
					HX_STACK_LINE(436)
					::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(436)
					Dynamic tmp7 = this->xenumfield(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(436)
					cl->add(tmp7);
				}
			}
		}
;
	}
	HX_STACK_LINE(438)
	bool tmp2 = x->has->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(438)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(438)
	if ((tmp2)){
		HX_STACK_LINE(438)
		tmp3 = x->att->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	}
	else{
		HX_STACK_LINE(438)
		tmp3 = null();
	}
	HX_STACK_LINE(439)
	::String tmp4 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(439)
	::String tmp5 = this->mkPath(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(440)
	bool tmp6 = x->has->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(440)
	::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(440)
	if ((tmp6)){
		HX_STACK_LINE(440)
		::String tmp8 = x->att->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(440)
		tmp7 = this->mkPath(tmp8);
	}
	else{
		HX_STACK_LINE(440)
		tmp7 = null();
	}
	HX_STACK_LINE(441)
	::String tmp8 = doc;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(442)
	bool tmp9 = x->x->exists(HX_HCSTRING("private","\x03","\x2d","\x6f","\x89"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(443)
	bool tmp10 = x->x->exists(HX_HCSTRING("extern","\x60","\xd5","\x1a","\xc7"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(444)
	::String tmp11 = x->att->resolve(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(445)
	::List tmp12 = cl;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(446)
	::List tmp13 = this->defplat();		HX_STACK_VAR(tmp13,"tmp13");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp5,hx::ObjectPtr< ::haxe::rtti::XmlParser_obj > __this,::List &tmp13,bool &tmp9,::String &tmp11,bool &tmp10,::String &tmp3,cpp::ArrayBase &meta,::String &tmp7,::String &tmp8,::List &tmp12){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",437,0x53c9a498)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , tmp3,false);
				__result->Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a") , tmp5,false);
				__result->Add(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0") , tmp7,false);
				__result->Add(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00") , tmp8,false);
				__result->Add(HX_HCSTRING("isPrivate","\x39","\xaa","\x6d","\x8d") , tmp9,false);
				__result->Add(HX_HCSTRING("isExtern","\xea","\x70","\x84","\x1f") , tmp10,false);
				__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , __this->mkTypeParams(tmp11),false);
				__result->Add(HX_HCSTRING("constructors","\x39","\x2e","\xc2","\x34") , tmp12,false);
				__result->Add(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92") , tmp13,false);
				__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , meta,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(437)
	Dynamic tmp14 = _Function_1_1::Block(tmp5,this,tmp13,tmp9,tmp11,tmp10,tmp3,meta,tmp7,tmp8,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(437)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xenum,return )

Dynamic XmlParser_obj::xenumfield( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xenumfield",0xfc438be8,"haxe.rtti.XmlParser.xenumfield","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",451,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(452)
	::List args = null();		HX_STACK_VAR(args,"args");
	HX_STACK_LINE(453)
	Dynamic tmp = x->x->elementsNamed(HX_HCSTRING("haxe_doc","\x9f","\xc6","\x83","\x5f"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(453)
	::Xml tmp1 = tmp->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(453)
	::Xml xdoc = tmp1;		HX_STACK_VAR(xdoc,"xdoc");
	HX_STACK_LINE(454)
	bool tmp2 = x->hasNode->resolve(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(454)
	cpp::ArrayBase meta;		HX_STACK_VAR(meta,"meta");
	HX_STACK_LINE(454)
	if ((tmp2)){
		HX_STACK_LINE(454)
		::haxe::xml::Fast tmp3 = x->node->resolve(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(454)
		meta = this->xmeta(tmp3);
	}
	else{
		HX_STACK_LINE(454)
		meta = cpp::ArrayBase_obj::__new();
	}
	HX_STACK_LINE(455)
	bool tmp3 = x->has->resolve(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(455)
	if ((tmp3)){
		HX_STACK_LINE(456)
		::String tmp4 = x->att->resolve(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(456)
		Array< ::String > names = tmp4.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(names,"names");
		HX_STACK_LINE(457)
		Dynamic tmp5 = x->get_elements();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(457)
		Dynamic elts = tmp5;		HX_STACK_VAR(elts,"elts");
		HX_STACK_LINE(458)
		::List tmp6 = ::List_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(458)
		args = tmp6;
		HX_STACK_LINE(459)
		{
			HX_STACK_LINE(459)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(459)
			while((true)){
				HX_STACK_LINE(459)
				bool tmp7 = (_g < names->length);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(459)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(459)
				if ((tmp8)){
					HX_STACK_LINE(459)
					break;
				}
				HX_STACK_LINE(459)
				::String tmp9 = names->__get(_g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(459)
				::String c = tmp9;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(459)
				++(_g);
				HX_STACK_LINE(460)
				bool opt = false;		HX_STACK_VAR(opt,"opt");
				HX_STACK_LINE(461)
				::String tmp10 = c.charAt((int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(461)
				bool tmp11 = (tmp10 == HX_HCSTRING("?","\x3f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(461)
				if ((tmp11)){
					HX_STACK_LINE(462)
					opt = true;
					HX_STACK_LINE(463)
					::String tmp12 = c.substr((int)1,null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(463)
					c = tmp12;
				}
				HX_STACK_LINE(466)
				::String tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(467)
				bool tmp13 = opt;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(468)
				::haxe::xml::Fast tmp14 = elts->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(468)
				::haxe::rtti::CType tmp15 = this->xtype(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				struct _Function_4_1{
					inline static Dynamic Block( bool &tmp13,::haxe::rtti::CType &tmp15,::String &tmp12){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",465,0x53c9a498)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp12,false);
							__result->Add(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00") , tmp13,false);
							__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp15,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(465)
				Dynamic tmp16 = _Function_4_1::Block(tmp13,tmp15,tmp12);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(465)
				args->add(tmp16);
			}
		}
	}
	HX_STACK_LINE(473)
	::String tmp4 = x->get_name();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(474)
	::List tmp5 = args;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(475)
	bool tmp6 = (xdoc == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(475)
	::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(475)
	if ((tmp6)){
		HX_STACK_LINE(475)
		tmp7 = null();
	}
	else{
		HX_STACK_LINE(475)
		::haxe::xml::Fast tmp8 = ::haxe::xml::Fast_obj::__new(xdoc);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(475)
		tmp7 = tmp8->get_innerData();
	}
	HX_STACK_LINE(477)
	::List tmp8 = this->defplat();		HX_STACK_VAR(tmp8,"tmp8");
	struct _Function_1_1{
		inline static Dynamic Block( ::List &tmp5,::String &tmp4,cpp::ArrayBase &meta,::String &tmp7,::List &tmp8){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",472,0x53c9a498)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp4,false);
				__result->Add(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40") , tmp5,false);
				__result->Add(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00") , tmp7,false);
				__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , meta,false);
				__result->Add(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92") , tmp8,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(472)
	Dynamic tmp9 = _Function_1_1::Block(tmp5,tmp4,meta,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(472)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xenumfield,return )

Dynamic XmlParser_obj::xabstract( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xabstract",0xbdd7c9f3,"haxe.rtti.XmlParser.xabstract","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",481,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(482)
	::String doc = null();		HX_STACK_VAR(doc,"doc");
	HX_STACK_LINE(482)
	Dynamic impl = null();		HX_STACK_VAR(impl,"impl");
	HX_STACK_LINE(482)
	::haxe::rtti::CType athis = null();		HX_STACK_VAR(athis,"athis");
	HX_STACK_LINE(483)
	cpp::ArrayBase meta = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(meta,"meta");
	HX_STACK_LINE(483)
	cpp::ArrayBase to = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(to,"to");
	HX_STACK_LINE(483)
	cpp::ArrayBase from = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(from,"from");
	HX_STACK_LINE(484)
	Dynamic tmp = x->get_elements();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(484)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp);  __it->hasNext(); ){
		::haxe::xml::Fast c = __it->next();
		{
			HX_STACK_LINE(485)
			::String tmp1 = c->get_name();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(485)
			::String _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(485)
			::String tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(485)
			::String _switch_5 = (tmp2);
			if (  ( _switch_5==HX_HCSTRING("haxe_doc","\x9f","\xc6","\x83","\x5f"))){
				HX_STACK_LINE(487)
				::String tmp3 = c->get_innerData();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(487)
				doc = tmp3;
			}
			else if (  ( _switch_5==HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"))){
				HX_STACK_LINE(489)
				::haxe::xml::Fast tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(489)
				meta = this->xmeta(tmp3);
			}
			else if (  ( _switch_5==HX_HCSTRING("to","\x7b","\x65","\x00","\x00"))){
				HX_STACK_LINE(491)
				Dynamic tmp3 = c->get_elements();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(491)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp3);  __it->hasNext(); ){
					::haxe::xml::Fast t = __it->next();
					{
						HX_STACK_LINE(492)
						::Xml tmp4 = t->x->firstElement();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(492)
						::haxe::xml::Fast tmp5 = ::haxe::xml::Fast_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(492)
						::haxe::rtti::CType tmp6 = this->xtype(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(492)
						bool tmp7 = t->has->resolve(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(492)
						::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(492)
						if ((tmp7)){
							HX_STACK_LINE(492)
							tmp8 = t->att->resolve(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));
						}
						else{
							HX_STACK_LINE(492)
							tmp8 = null();
						}
						struct _Function_4_1{
							inline static Dynamic Block( ::haxe::rtti::CType &tmp6,::String &tmp8){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",492,0x53c9a498)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp6,false);
									__result->Add(HX_HCSTRING("field","\xba","\x94","\x93","\x00") , tmp8,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(492)
						Dynamic tmp9 = _Function_4_1::Block(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(492)
						to->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
					}
;
				}
			}
			else if (  ( _switch_5==HX_HCSTRING("from","\x6a","\xa5","\xc2","\x43"))){
				HX_STACK_LINE(494)
				Dynamic tmp3 = c->get_elements();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(494)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp3);  __it->hasNext(); ){
					::haxe::xml::Fast t = __it->next();
					{
						HX_STACK_LINE(495)
						::Xml tmp4 = t->x->firstElement();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(495)
						::haxe::xml::Fast tmp5 = ::haxe::xml::Fast_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(495)
						::haxe::rtti::CType tmp6 = this->xtype(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(495)
						bool tmp7 = t->has->resolve(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(495)
						::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(495)
						if ((tmp7)){
							HX_STACK_LINE(495)
							tmp8 = t->att->resolve(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));
						}
						else{
							HX_STACK_LINE(495)
							tmp8 = null();
						}
						struct _Function_4_1{
							inline static Dynamic Block( ::haxe::rtti::CType &tmp6,::String &tmp8){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",495,0x53c9a498)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp6,false);
									__result->Add(HX_HCSTRING("field","\xba","\x94","\x93","\x00") , tmp8,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(495)
						Dynamic tmp9 = _Function_4_1::Block(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(495)
						from->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
					}
;
				}
			}
			else if (  ( _switch_5==HX_HCSTRING("impl","\xe0","\x7e","\xba","\x45"))){
				HX_STACK_LINE(497)
				::haxe::xml::Fast tmp3 = c->node->resolve(HX_HCSTRING("class","\x38","\x78","\x58","\x48"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(497)
				Dynamic tmp4 = this->xclass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(497)
				impl = tmp4;
			}
			else if (  ( _switch_5==HX_HCSTRING("this","\x5e","\x06","\xfc","\x4c"))){
				HX_STACK_LINE(499)
				::Xml tmp3 = c->x->firstElement();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(499)
				::haxe::xml::Fast tmp4 = ::haxe::xml::Fast_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(499)
				::haxe::rtti::CType tmp5 = this->xtype(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(499)
				athis = tmp5;
			}
			else  {
				HX_STACK_LINE(501)
				::haxe::xml::Fast tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(501)
				this->xerror(tmp3);
			}
;
;
		}
;
	}
	HX_STACK_LINE(504)
	bool tmp1 = x->has->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(504)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(504)
	if ((tmp1)){
		HX_STACK_LINE(504)
		tmp2 = x->att->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	}
	else{
		HX_STACK_LINE(504)
		tmp2 = null();
	}
	HX_STACK_LINE(505)
	::String tmp3 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(505)
	::String tmp4 = this->mkPath(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(506)
	bool tmp5 = x->has->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(506)
	::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(506)
	if ((tmp5)){
		HX_STACK_LINE(506)
		::String tmp7 = x->att->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(506)
		tmp6 = this->mkPath(tmp7);
	}
	else{
		HX_STACK_LINE(506)
		tmp6 = null();
	}
	HX_STACK_LINE(507)
	::String tmp7 = doc;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(508)
	bool tmp8 = x->x->exists(HX_HCSTRING("private","\x03","\x2d","\x6f","\x89"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(509)
	::String tmp9 = x->att->resolve(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(510)
	::List tmp10 = this->defplat();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(512)
	::haxe::rtti::CType tmp11 = athis;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(515)
	Dynamic tmp12 = impl;		HX_STACK_VAR(tmp12,"tmp12");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp6,hx::ObjectPtr< ::haxe::rtti::XmlParser_obj > __this,::String &tmp9,::haxe::rtti::CType &tmp11,::String &tmp4,::List &tmp10,::String &tmp2,cpp::ArrayBase &meta,::String &tmp7,bool &tmp8,cpp::ArrayBase &from,Dynamic &tmp12,cpp::ArrayBase &to){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",503,0x53c9a498)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , tmp2,false);
				__result->Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a") , tmp4,false);
				__result->Add(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0") , tmp6,false);
				__result->Add(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00") , tmp7,false);
				__result->Add(HX_HCSTRING("isPrivate","\x39","\xaa","\x6d","\x8d") , tmp8,false);
				__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , __this->mkTypeParams(tmp9),false);
				__result->Add(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92") , tmp10,false);
				__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , meta,false);
				__result->Add(HX_HCSTRING("athis","\x3f","\x4b","\xda","\x26") , tmp11,false);
				__result->Add(HX_HCSTRING("to","\x7b","\x65","\x00","\x00") , to,false);
				__result->Add(HX_HCSTRING("from","\x6a","\xa5","\xc2","\x43") , from,false);
				__result->Add(HX_HCSTRING("impl","\xe0","\x7e","\xba","\x45") , tmp12,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(503)
	Dynamic tmp13 = _Function_1_1::Block(tmp6,this,tmp9,tmp11,tmp4,tmp10,tmp2,meta,tmp7,tmp8,from,tmp12,to);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(503)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xabstract,return )

Dynamic XmlParser_obj::xtypedef( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xtypedef",0x82b2bb5a,"haxe.rtti.XmlParser.xtypedef","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",520,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(521)
	::String doc = null();		HX_STACK_VAR(doc,"doc");
	HX_STACK_LINE(522)
	::haxe::rtti::CType t = null();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(523)
	cpp::ArrayBase meta = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(meta,"meta");
	HX_STACK_LINE(524)
	Dynamic tmp = x->get_elements();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(524)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp);  __it->hasNext(); ){
		::haxe::xml::Fast c = __it->next();
		{
			HX_STACK_LINE(525)
			::String tmp1 = c->get_name();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(525)
			bool tmp2 = (tmp1 == HX_HCSTRING("haxe_doc","\x9f","\xc6","\x83","\x5f"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(525)
			if ((tmp2)){
				HX_STACK_LINE(526)
				::String tmp3 = c->get_innerData();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(526)
				doc = tmp3;
			}
			else{
				HX_STACK_LINE(527)
				::String tmp3 = c->get_name();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(527)
				bool tmp4 = (tmp3 == HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(527)
				if ((tmp4)){
					HX_STACK_LINE(528)
					::haxe::xml::Fast tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(528)
					meta = this->xmeta(tmp5);
				}
				else{
					HX_STACK_LINE(530)
					::haxe::xml::Fast tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(530)
					::haxe::rtti::CType tmp6 = this->xtype(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(530)
					t = tmp6;
				}
			}
		}
;
	}
	HX_STACK_LINE(531)
	::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(531)
	::haxe::ds::StringMap types = tmp1;		HX_STACK_VAR(types,"types");
	HX_STACK_LINE(532)
	::String tmp2 = this->curplatform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(532)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(532)
	if ((tmp3)){
		HX_STACK_LINE(533)
		::String tmp4 = this->curplatform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(533)
		::haxe::rtti::CType tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(533)
		types->set(tmp4,tmp5);
	}
	HX_STACK_LINE(535)
	bool tmp4 = x->has->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(535)
	::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(535)
	if ((tmp4)){
		HX_STACK_LINE(535)
		tmp5 = x->att->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	}
	else{
		HX_STACK_LINE(535)
		tmp5 = null();
	}
	HX_STACK_LINE(536)
	::String tmp6 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(536)
	::String tmp7 = this->mkPath(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(537)
	bool tmp8 = x->has->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(537)
	::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(537)
	if ((tmp8)){
		HX_STACK_LINE(537)
		::String tmp10 = x->att->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(537)
		tmp9 = this->mkPath(tmp10);
	}
	else{
		HX_STACK_LINE(537)
		tmp9 = null();
	}
	HX_STACK_LINE(538)
	::String tmp10 = doc;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(539)
	bool tmp11 = x->x->exists(HX_HCSTRING("private","\x03","\x2d","\x6f","\x89"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(540)
	::String tmp12 = x->att->resolve(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(541)
	::haxe::rtti::CType tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(534)
	::haxe::ds::StringMap tmp14 = types;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(543)
	::List tmp15 = this->defplat();		HX_STACK_VAR(tmp15,"tmp15");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp5,hx::ObjectPtr< ::haxe::rtti::XmlParser_obj > __this,::haxe::rtti::CType &tmp13,::String &tmp9,bool &tmp11,::String &tmp10,::List &tmp15,cpp::ArrayBase &meta,::String &tmp7,::String &tmp12,::haxe::ds::StringMap &tmp14){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",534,0x53c9a498)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , tmp5,false);
				__result->Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a") , tmp7,false);
				__result->Add(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0") , tmp9,false);
				__result->Add(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00") , tmp10,false);
				__result->Add(HX_HCSTRING("isPrivate","\x39","\xaa","\x6d","\x8d") , tmp11,false);
				__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , __this->mkTypeParams(tmp12),false);
				__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , tmp13,false);
				__result->Add(HX_HCSTRING("types","\x79","\x70","\xcb","\x1a") , tmp14,false);
				__result->Add(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92") , tmp15,false);
				__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , meta,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(534)
	Dynamic tmp16 = _Function_1_1::Block(tmp5,this,tmp13,tmp9,tmp11,tmp10,tmp15,meta,tmp7,tmp12,tmp14);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(534)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xtypedef,return )

::haxe::rtti::CType XmlParser_obj::xtype( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xtype",0xc861df4b,"haxe.rtti.XmlParser.xtype","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",548,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(549)
	::haxe::rtti::CType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(549)
	{
		HX_STACK_LINE(549)
		::String tmp1 = x->get_name();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(549)
		::String _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(549)
		::String tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(549)
		::String _switch_6 = (tmp2);
		if (  ( _switch_6==HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"))){
			HX_STACK_LINE(551)
			tmp = ::haxe::rtti::CType_obj::CUnknown;
		}
		else if (  ( _switch_6==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
			HX_STACK_LINE(553)
			::String tmp3 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(553)
			::String tmp4 = this->mkPath(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(553)
			::haxe::xml::Fast tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(553)
			::List tmp6 = this->xtypeparams(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(553)
			tmp = ::haxe::rtti::CType_obj::CEnum(tmp4,tmp6);
		}
		else if (  ( _switch_6==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
			HX_STACK_LINE(555)
			::String tmp3 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(555)
			::String tmp4 = this->mkPath(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(555)
			::haxe::xml::Fast tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(555)
			::List tmp6 = this->xtypeparams(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(555)
			tmp = ::haxe::rtti::CType_obj::CClass(tmp4,tmp6);
		}
		else if (  ( _switch_6==HX_HCSTRING("t","\x74","\x00","\x00","\x00"))){
			HX_STACK_LINE(557)
			::String tmp3 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(557)
			::String tmp4 = this->mkPath(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(557)
			::haxe::xml::Fast tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(557)
			::List tmp6 = this->xtypeparams(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(557)
			tmp = ::haxe::rtti::CType_obj::CTypedef(tmp4,tmp6);
		}
		else if (  ( _switch_6==HX_HCSTRING("x","\x78","\x00","\x00","\x00"))){
			HX_STACK_LINE(559)
			::String tmp3 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(559)
			::String tmp4 = this->mkPath(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(559)
			::haxe::xml::Fast tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(559)
			::List tmp6 = this->xtypeparams(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(559)
			tmp = ::haxe::rtti::CType_obj::CAbstract(tmp4,tmp6);
		}
		else if (  ( _switch_6==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
			HX_STACK_LINE(561)
			::List tmp3 = ::List_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(561)
			::List args = tmp3;		HX_STACK_VAR(args,"args");
			HX_STACK_LINE(562)
			::String tmp4 = x->att->resolve(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(562)
			Array< ::String > aname = tmp4.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(aname,"aname");
			HX_STACK_LINE(563)
			Dynamic tmp5 = aname->iterator();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(563)
			Dynamic eargs = tmp5;		HX_STACK_VAR(eargs,"eargs");
			HX_STACK_LINE(564)
			bool tmp6 = x->has->resolve(HX_HCSTRING("v","\x76","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(564)
			Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(564)
			if ((tmp6)){
				HX_STACK_LINE(564)
				::String tmp8 = x->att->resolve(HX_HCSTRING("v","\x76","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(564)
				tmp7 = tmp8.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"))->iterator();
			}
			else{
				HX_STACK_LINE(564)
				tmp7 = null();
			}
			HX_STACK_LINE(564)
			Dynamic evalues = tmp7;		HX_STACK_VAR(evalues,"evalues");
			HX_STACK_LINE(565)
			Dynamic tmp8 = x->get_elements();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(565)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp8);  __it->hasNext(); ){
				::haxe::xml::Fast e = __it->next();
				{
					HX_STACK_LINE(566)
					bool opt = false;		HX_STACK_VAR(opt,"opt");
					HX_STACK_LINE(567)
					::String tmp9 = eargs->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(567)
					::String a = tmp9;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(568)
					bool tmp10 = (a == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(568)
					if ((tmp10)){
						HX_STACK_LINE(569)
						a = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(570)
					::String tmp11 = a.charAt((int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(570)
					bool tmp12 = (tmp11 == HX_HCSTRING("?","\x3f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(570)
					if ((tmp12)){
						HX_STACK_LINE(571)
						opt = true;
						HX_STACK_LINE(572)
						::String tmp13 = a.substr((int)1,null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(572)
						a = tmp13;
					}
					HX_STACK_LINE(574)
					bool tmp13 = (evalues == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(574)
					::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(574)
					if ((tmp13)){
						HX_STACK_LINE(574)
						tmp14 = null();
					}
					else{
						HX_STACK_LINE(574)
						tmp14 = evalues->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();
					}
					HX_STACK_LINE(574)
					::String v = tmp14;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(576)
					::String tmp15 = a;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(577)
					bool tmp16 = opt;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(578)
					::haxe::xml::Fast tmp17 = e;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(578)
					::haxe::rtti::CType tmp18 = this->xtype(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(579)
					bool tmp19 = (v == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(579)
					::String tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(579)
					if ((tmp19)){
						HX_STACK_LINE(579)
						tmp20 = null();
					}
					else{
						HX_STACK_LINE(579)
						tmp20 = v;
					}
					struct _Function_4_1{
						inline static Dynamic Block( ::String &tmp20,::String &tmp15,bool &tmp16,::haxe::rtti::CType &tmp18){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",575,0x53c9a498)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp15,false);
								__result->Add(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00") , tmp16,false);
								__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp18,false);
								__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp20,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(575)
					Dynamic tmp21 = _Function_4_1::Block(tmp20,tmp15,tmp16,tmp18);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(575)
					args->add(tmp21);
				}
;
			}
			HX_STACK_LINE(582)
			Dynamic tmp9 = args->last();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(582)
			Dynamic ret = tmp9;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(583)
			Dynamic tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(583)
			args->remove(tmp10);
			HX_STACK_LINE(584)
			::List tmp11 = args;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(584)
			::haxe::rtti::CType tmp12 = ret->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(584)
			tmp = ::haxe::rtti::CType_obj::CFunction(tmp11,tmp12);
		}
		else if (  ( _switch_6==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
			HX_STACK_LINE(586)
			::List tmp3 = ::List_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(586)
			::List fields = tmp3;		HX_STACK_VAR(fields,"fields");
			HX_STACK_LINE(587)
			Dynamic tmp4 = x->get_elements();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(587)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp4);  __it->hasNext(); ){
				::haxe::xml::Fast f = __it->next();
				{
					HX_STACK_LINE(588)
					::haxe::xml::Fast tmp5 = f;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(588)
					Dynamic tmp6 = this->xclassfield(tmp5,true);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(588)
					Dynamic f1 = tmp6;		HX_STACK_VAR(f1,"f1");
					HX_STACK_LINE(589)
					::List tmp7 = ::List_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(589)
					f1->__FieldRef(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92")) = tmp7;
					HX_STACK_LINE(590)
					Dynamic tmp8 = f1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(590)
					fields->add(tmp8);
				}
;
			}
			HX_STACK_LINE(592)
			::List tmp5 = fields;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(592)
			tmp = ::haxe::rtti::CType_obj::CAnonymous(tmp5);
		}
		else if (  ( _switch_6==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
			HX_STACK_LINE(594)
			::haxe::rtti::CType t = null();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(595)
			::Xml tmp3 = x->x->firstElement();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(595)
			::Xml tx = tmp3;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(596)
			bool tmp4 = (tx != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(596)
			if ((tmp4)){
				HX_STACK_LINE(597)
				::haxe::xml::Fast tmp5 = ::haxe::xml::Fast_obj::__new(tx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(597)
				::haxe::rtti::CType tmp6 = this->xtype(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(597)
				t = tmp6;
			}
			HX_STACK_LINE(598)
			::haxe::rtti::CType tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(598)
			tmp = ::haxe::rtti::CType_obj::CDynamic(tmp5);
		}
		else  {
			HX_STACK_LINE(600)
			::haxe::xml::Fast tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(600)
			tmp = this->xerror(tmp3);
		}
;
;
	}
	HX_STACK_LINE(549)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xtype,return )

::List XmlParser_obj::xtypeparams( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xtypeparams",0x15d7e4d1,"haxe.rtti.XmlParser.xtypeparams","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",604,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(605)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(605)
	::List p = tmp;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(606)
	Dynamic tmp1 = x->get_elements();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(606)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp1);  __it->hasNext(); ){
		::haxe::xml::Fast c = __it->next();
		{
			HX_STACK_LINE(607)
			::haxe::xml::Fast tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(607)
			::haxe::rtti::CType tmp3 = this->xtype(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(607)
			p->add(tmp3);
		}
;
	}
	HX_STACK_LINE(608)
	::List tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(608)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xtypeparams,return )

::List XmlParser_obj::defplat( ){
	HX_STACK_FRAME("haxe.rtti.XmlParser","defplat",0xdc71768d,"haxe.rtti.XmlParser.defplat","/usr/lib/haxe/std/haxe/rtti/XmlParser.hx",611,0x53c9a498)
	HX_STACK_THIS(this)
	HX_STACK_LINE(612)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(612)
	::List l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(613)
	::String tmp1 = this->curplatform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(613)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(613)
	if ((tmp2)){
		HX_STACK_LINE(614)
		::String tmp3 = this->curplatform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(614)
		l->add(tmp3);
	}
	HX_STACK_LINE(615)
	::List tmp3 = l;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(615)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(XmlParser_obj,defplat,return )


XmlParser_obj::XmlParser_obj()
{
}

void XmlParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(XmlParser);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(curplatform,"curplatform");
	HX_MARK_END_CLASS();
}

void XmlParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(curplatform,"curplatform");
}

Dynamic XmlParser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"xmeta") ) { return xmeta_dyn(); }
		if (HX_FIELD_EQ(inName,"xpath") ) { return xpath_dyn(); }
		if (HX_FIELD_EQ(inName,"xenum") ) { return xenum_dyn(); }
		if (HX_FIELD_EQ(inName,"xtype") ) { return xtype_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mkPath") ) { return mkPath_dyn(); }
		if (HX_FIELD_EQ(inName,"xerror") ) { return xerror_dyn(); }
		if (HX_FIELD_EQ(inName,"xclass") ) { return xclass_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"defplat") ) { return defplat_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mkRights") ) { return mkRights_dyn(); }
		if (HX_FIELD_EQ(inName,"xtypedef") ) { return xtypedef_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"xabstract") ) { return xabstract_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"xoverloads") ) { return xoverloads_dyn(); }
		if (HX_FIELD_EQ(inName,"xenumfield") ) { return xenumfield_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curplatform") ) { return curplatform; }
		if (HX_FIELD_EQ(inName,"xclassfield") ) { return xclassfield_dyn(); }
		if (HX_FIELD_EQ(inName,"xtypeparams") ) { return xtypeparams_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mkTypeParams") ) { return mkTypeParams_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"processElement") ) { return processElement_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic XmlParser_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curplatform") ) { curplatform=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool XmlParser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void XmlParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("curplatform","\x33","\xb8","\x86","\x0f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(XmlParser_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsString,(int)offsetof(XmlParser_obj,curplatform),HX_HCSTRING("curplatform","\x33","\xb8","\x86","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("curplatform","\x33","\xb8","\x86","\x0f"),
	HX_HCSTRING("mkPath","\x23","\x78","\xf1","\x65"),
	HX_HCSTRING("mkTypeParams","\x9e","\xae","\x1b","\x38"),
	HX_HCSTRING("mkRights","\x15","\x03","\xae","\x3e"),
	HX_HCSTRING("xerror","\x50","\x18","\xfd","\x6d"),
	HX_HCSTRING("processElement","\x0d","\xf0","\xb2","\xb8"),
	HX_HCSTRING("xmeta","\x3d","\xe7","\x6e","\x60"),
	HX_HCSTRING("xoverloads","\x41","\x96","\x6b","\x6c"),
	HX_HCSTRING("xpath","\x1d","\x82","\x67","\x62"),
	HX_HCSTRING("xclass","\xc0","\xc4","\x2b","\x43"),
	HX_HCSTRING("xclassfield","\xfa","\x97","\xc6","\x18"),
	HX_HCSTRING("xenum","\x79","\x07","\x2c","\x5b"),
	HX_HCSTRING("xenumfield","\xa1","\xd6","\x9c","\x86"),
	HX_HCSTRING("xabstract","\x5a","\xf9","\xa7","\x89"),
	HX_HCSTRING("xtypedef","\xd3","\xb5","\x7d","\xc8"),
	HX_HCSTRING("xtype","\x32","\x8f","\x1e","\x65"),
	HX_HCSTRING("xtypeparams","\xf8","\xfb","\x9f","\x99"),
	HX_HCSTRING("defplat","\x34","\x2e","\xa7","\xa5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XmlParser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XmlParser_obj::__mClass,"__mClass");
};

#endif

hx::Class XmlParser_obj::__mClass;

void XmlParser_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.rtti.XmlParser","\xc7","\x27","\x12","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &XmlParser_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< XmlParser_obj >;
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

} // end namespace haxe
} // end namespace rtti
