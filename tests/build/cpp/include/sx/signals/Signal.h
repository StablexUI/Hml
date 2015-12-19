#ifndef INCLUDED_sx_signals_Signal
#define INCLUDED_sx_signals_Signal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,signals,Signal)
namespace sx{
namespace signals{


class HXCPP_CLASS_ATTRIBUTES  Signal_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Signal_obj OBJ_;
		Signal_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.signals.Signal")
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

		cpp::ArrayBase __listeners;
		bool __listenersInUse;
		virtual Void add( Dynamic listener);
		Dynamic add_dyn();

		virtual bool unique( Dynamic listener);
		Dynamic unique_dyn();

		virtual bool remove( Dynamic listener);
		Dynamic remove_dyn();

		virtual bool will( Dynamic listener);
		Dynamic will_dyn();

		virtual int __indexOf( Dynamic listener);
		Dynamic __indexOf_dyn();

		virtual Void __cloneListenersInUse( );
		Dynamic __cloneListenersInUse_dyn();

		virtual int get_listenersCount( );
		Dynamic get_listenersCount_dyn();

};

} // end namespace sx
} // end namespace signals

#endif /* INCLUDED_sx_signals_Signal */ 
