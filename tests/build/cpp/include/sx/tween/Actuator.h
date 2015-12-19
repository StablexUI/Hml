#ifndef INCLUDED_sx_tween_Actuator
#define INCLUDED_sx_tween_Actuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,tween,Actuator)
namespace sx{
namespace tween{


class HXCPP_CLASS_ATTRIBUTES  Actuator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Actuator_obj OBJ_;
		Actuator_obj();
		Void __construct(Float startTime,Float duration,Dynamic setValuesFn,Dynamic setEndValuesFn);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.tween.Actuator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Actuator_obj > __new(Float startTime,Float duration,Dynamic setValuesFn,Dynamic setEndValuesFn);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Actuator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Actuator","\x59","\xb9","\x59","\x9a"); }

		Float startTime;
		bool done;
		Float __duration;
		Dynamic __setValuesFn;
		Dynamic &__setValuesFn_dyn() { return __setValuesFn;}
		Dynamic __setEndValuesFn;
		Dynamic &__setEndValuesFn_dyn() { return __setEndValuesFn;}
		Dynamic __onUpdate;
		Dynamic &__onUpdate_dyn() { return __onUpdate;}
		Dynamic __onComplete;
		Dynamic &__onComplete_dyn() { return __onComplete;}
		virtual ::sx::tween::Actuator delay( Float offset);
		Dynamic delay_dyn();

		virtual ::sx::tween::Actuator ease( Dynamic fn);
		Dynamic ease_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void complete( );
		Dynamic complete_dyn();

		virtual ::sx::tween::Actuator onUpdate( Dynamic fn);
		Dynamic onUpdate_dyn();

		virtual ::sx::tween::Actuator onComplete( Dynamic fn);
		Dynamic onComplete_dyn();

		virtual Void __update( Float currentTime);
		Dynamic __update_dyn();

		Dynamic __ease;
		inline Dynamic &__ease_dyn() {return __ease; }

};

} // end namespace sx
} // end namespace tween

#endif /* INCLUDED_sx_tween_Actuator */ 
