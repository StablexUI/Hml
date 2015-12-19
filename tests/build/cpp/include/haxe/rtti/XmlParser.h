#ifndef INCLUDED_haxe_rtti_XmlParser
#define INCLUDED_haxe_rtti_XmlParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(haxe,rtti,CType)
HX_DECLARE_CLASS2(haxe,rtti,Rights)
HX_DECLARE_CLASS2(haxe,rtti,TypeTree)
HX_DECLARE_CLASS2(haxe,rtti,XmlParser)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace haxe{
namespace rtti{


class HXCPP_CLASS_ATTRIBUTES  XmlParser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef XmlParser_obj OBJ_;
		XmlParser_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.rtti.XmlParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< XmlParser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XmlParser_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("XmlParser","\xf6","\xd9","\xa1","\x8a"); }

		Array< ::Dynamic > root;
		::String curplatform;
		virtual ::String mkPath( ::String p);
		Dynamic mkPath_dyn();

		virtual Array< ::String > mkTypeParams( ::String p);
		Dynamic mkTypeParams_dyn();

		virtual ::haxe::rtti::Rights mkRights( ::String r);
		Dynamic mkRights_dyn();

		virtual Dynamic xerror( ::haxe::xml::Fast c);
		Dynamic xerror_dyn();

		virtual ::haxe::rtti::TypeTree processElement( ::Xml x);
		Dynamic processElement_dyn();

		virtual cpp::ArrayBase xmeta( ::haxe::xml::Fast x);
		Dynamic xmeta_dyn();

		virtual ::List xoverloads( ::haxe::xml::Fast x);
		Dynamic xoverloads_dyn();

		virtual Dynamic xpath( ::haxe::xml::Fast x);
		Dynamic xpath_dyn();

		virtual Dynamic xclass( ::haxe::xml::Fast x);
		Dynamic xclass_dyn();

		virtual Dynamic xclassfield( ::haxe::xml::Fast x,Dynamic defPublic);
		Dynamic xclassfield_dyn();

		virtual Dynamic xenum( ::haxe::xml::Fast x);
		Dynamic xenum_dyn();

		virtual Dynamic xenumfield( ::haxe::xml::Fast x);
		Dynamic xenumfield_dyn();

		virtual Dynamic xabstract( ::haxe::xml::Fast x);
		Dynamic xabstract_dyn();

		virtual Dynamic xtypedef( ::haxe::xml::Fast x);
		Dynamic xtypedef_dyn();

		virtual ::haxe::rtti::CType xtype( ::haxe::xml::Fast x);
		Dynamic xtype_dyn();

		virtual ::List xtypeparams( ::haxe::xml::Fast x);
		Dynamic xtypeparams_dyn();

		virtual ::List defplat( );
		Dynamic defplat_dyn();

};

} // end namespace haxe
} // end namespace rtti

#endif /* INCLUDED_haxe_rtti_XmlParser */ 
