#ifndef INCLUDED_sx_themes_Theme
#define INCLUDED_sx_themes_Theme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(sx,themes,Theme)
HX_DECLARE_CLASS2(sx,widgets,Widget)
namespace sx{
namespace themes{


class HXCPP_CLASS_ATTRIBUTES  Theme_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Theme_obj OBJ_;
		Theme_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.themes.Theme")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Theme_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Theme_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Theme","\xe9","\xed","\xb3","\xa2"); }

		static void __boot();
		::haxe::ds::StringMap __styles;
		virtual Void initialize( );
		Dynamic initialize_dyn();

		virtual ::haxe::ds::StringMap styles( ::hx::Class cls);
		Dynamic styles_dyn();

		virtual Void apply( ::sx::widgets::Widget widget);
		Dynamic apply_dyn();

		static ::String DEFAULT_STYLE;
};

} // end namespace sx
} // end namespace themes

#endif /* INCLUDED_sx_themes_Theme */ 
