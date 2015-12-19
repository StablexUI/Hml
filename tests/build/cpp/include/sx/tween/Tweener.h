#ifndef INCLUDED_sx_tween_Tweener
#define INCLUDED_sx_tween_Tweener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,tween,Actuator)
HX_DECLARE_CLASS2(sx,tween,Tweener)
namespace sx{
namespace tween{


class HXCPP_CLASS_ATTRIBUTES  Tweener_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tweener_obj OBJ_;
		Tweener_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.tween.Tweener")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tweener_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tweener_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tweener","\x78","\xdb","\x11","\xa4"); }

		static void __boot();
		bool active;
		Array< ::Dynamic > __actuators;
		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void __update( Float currentTime);
		Dynamic __update_dyn();

		virtual ::sx::tween::Actuator __createActuator( Float duration,Dynamic setValuesFn,Dynamic setEndValuesFn);
		Dynamic __createActuator_dyn();

		static Float __time;
		static Array< ::Dynamic > __tweeners;
		static bool __pausedAll;
		static Float __pausedAllTime;
		static Float __totalPausedTime;
		static Dynamic getTime;
		static inline Dynamic &getTime_dyn() {return getTime; }

		static Void pauseAll( );
		static Dynamic pauseAll_dyn();

		static Void resumeAll( );
		static Dynamic resumeAll_dyn();

		static Void stopAll( );
		static Dynamic stopAll_dyn();

		static Void update( );
		static Dynamic update_dyn();

		static Void initialize( );
		static Dynamic initialize_dyn();

		static Void __updateTime( );
		static Dynamic __updateTime_dyn();

		static bool get_pausedAll( );
		static Dynamic get_pausedAll_dyn();

};

} // end namespace sx
} // end namespace tween

#endif /* INCLUDED_sx_tween_Tweener */ 
