#ifndef INCLUDED_sx_skins_base_SkinBase
#define INCLUDED_sx_skins_base_SkinBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(sx,properties,metric,Padding)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS3(sx,properties,metric,SizeSetterProxy)
HX_DECLARE_CLASS3(sx,skins,base,SkinBase)
HX_DECLARE_CLASS2(sx,widgets,Widget)
namespace sx{
namespace skins{
namespace base{


class HXCPP_CLASS_ATTRIBUTES  SkinBase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SkinBase_obj OBJ_;
		SkinBase_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.skins.base.SkinBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SkinBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SkinBase_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SkinBase","\x4e","\x69","\x4a","\x6a"); }

		::sx::properties::metric::Padding __padding;
		::sx::widgets::Widget __widget;
		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual bool hasPadding( );
		Dynamic hasPadding_dyn();

		virtual Void usedBy( ::sx::widgets::Widget widget);
		Dynamic usedBy_dyn();

		virtual Void removed( );
		Dynamic removed_dyn();

		virtual Void __widgetResized( ::sx::widgets::Widget widget,::sx::properties::metric::Size changed,::String previousUnits,Float previousValue);
		Dynamic __widgetResized_dyn();

		virtual ::sx::properties::metric::Size __widgetWidthProvider( );
		Dynamic __widgetWidthProvider_dyn();

		virtual ::sx::properties::metric::Size __widgetHeightProvider( );
		Dynamic __widgetHeightProvider_dyn();

		virtual ::sx::properties::metric::Padding get_padding( );
		Dynamic get_padding_dyn();

		virtual ::sx::properties::metric::Padding set_padding( ::sx::properties::metric::Size v);
		Dynamic set_padding_dyn();

};

} // end namespace sx
} // end namespace skins
} // end namespace base

#endif /* INCLUDED_sx_skins_base_SkinBase */ 
