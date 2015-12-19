#ifndef INCLUDED_Child
#define INCLUDED_Child

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
HX_DECLARE_CLASS0(Child)
HX_DECLARE_CLASS2(sx,widgets,Widget)


class HXCPP_CLASS_ATTRIBUTES  Child_obj : public ::sx::widgets::Widget_obj{
	public:
		typedef ::sx::widgets::Widget_obj super;
		typedef Child_obj OBJ_;
		Child_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Child")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Child_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Child_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Child","\x7c","\x19","\xe7","\xd8"); }

		bool level1_initialized;
		::sx::widgets::Widget level1;
		bool level2_initialized;
		::sx::widgets::Widget level2;
		virtual Void destroyHml( );
		Dynamic destroyHml_dyn();

		virtual ::sx::widgets::Widget set_level1( ::sx::widgets::Widget value);
		Dynamic set_level1_dyn();

		virtual ::sx::widgets::Widget set_level2( ::sx::widgets::Widget value);
		Dynamic set_level2_dyn();

		virtual ::sx::widgets::Widget get_level2( );
		Dynamic get_level2_dyn();

		virtual ::sx::widgets::Widget get_level1( );
		Dynamic get_level1_dyn();

};


#endif /* INCLUDED_Child */ 
