#ifndef INCLUDED_Signal
#define INCLUDED_Signal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
HX_DECLARE_CLASS0(Signal)
HX_DECLARE_CLASS2(sx,widgets,Widget)


class HXCPP_CLASS_ATTRIBUTES  Signal_obj : public ::sx::widgets::Widget_obj{
	public:
		typedef ::sx::widgets::Widget_obj super;
		typedef Signal_obj OBJ_;
		Signal_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Signal")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Signal_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Signal_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Signal","\x88","\xa2","\x1a","\xe9"); }

		bool simpleClicked_initialized;
		bool simpleClicked;
		bool closureBlockClicked_initialized;
		bool closureBlockClicked;
		bool closureSingleExprClicked_initialized;
		bool closureSingleExprClicked;
		bool simple_initialized;
		::sx::widgets::Widget simple;
		bool closureBlockBody_initialized;
		::sx::widgets::Widget closureBlockBody;
		bool closureSingleExpr_initialized;
		::sx::widgets::Widget closureSingleExpr;
		virtual Void destroyHml( );
		Dynamic destroyHml_dyn();

		virtual bool set_simpleClicked( bool value);
		Dynamic set_simpleClicked_dyn();

		virtual bool get_simpleClicked( );
		Dynamic get_simpleClicked_dyn();

		virtual bool set_closureBlockClicked( bool value);
		Dynamic set_closureBlockClicked_dyn();

		virtual bool get_closureBlockClicked( );
		Dynamic get_closureBlockClicked_dyn();

		virtual bool set_closureSingleExprClicked( bool value);
		Dynamic set_closureSingleExprClicked_dyn();

		virtual bool get_closureSingleExprClicked( );
		Dynamic get_closureSingleExprClicked_dyn();

		virtual ::sx::widgets::Widget set_simple( ::sx::widgets::Widget value);
		Dynamic set_simple_dyn();

		virtual ::sx::widgets::Widget get_simple( );
		Dynamic get_simple_dyn();

		virtual ::sx::widgets::Widget set_closureBlockBody( ::sx::widgets::Widget value);
		Dynamic set_closureBlockBody_dyn();

		virtual ::sx::widgets::Widget get_closureBlockBody( );
		Dynamic get_closureBlockBody_dyn();

		virtual ::sx::widgets::Widget set_closureSingleExpr( ::sx::widgets::Widget value);
		Dynamic set_closureSingleExpr_dyn();

		virtual ::sx::widgets::Widget get_closureSingleExpr( );
		Dynamic get_closureSingleExpr_dyn();

};


#endif /* INCLUDED_Signal */ 
