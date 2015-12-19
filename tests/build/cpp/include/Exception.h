#ifndef INCLUDED_Exception
#define INCLUDED_Exception

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS1(haxe,StackItem)


class HXCPP_CLASS_ATTRIBUTES  Exception_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Exception_obj OBJ_;
		Exception_obj();
		Void __construct(::String message,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Exception")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Exception_obj > __new(::String message,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Exception_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Exception","\x2f","\xf0","\x6c","\xeb"); }

		static void __boot();
		::String message;
		Dynamic pos;
		Array< ::Dynamic > stack;
		virtual Void truncateStack( Dynamic pos,hx::Null< int >  count);
		Dynamic truncateStack_dyn();

		virtual ::String stringStack( );
		Dynamic stringStack_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Array< ::Dynamic > buildStack( Array< ::Dynamic > stack);
		Dynamic buildStack_dyn();

		static ::Exception wrap( Dynamic e,Dynamic pos);
		static Dynamic wrap_dyn();

		static Dynamic processCallStackOnCreation;
		static inline Dynamic &processCallStackOnCreation_dyn() {return processCallStackOnCreation; }

};


#endif /* INCLUDED_Exception */ 
