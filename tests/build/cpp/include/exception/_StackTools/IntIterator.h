#ifndef INCLUDED_exception__StackTools_IntIterator
#define INCLUDED_exception__StackTools_IntIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(exception,_StackTools,IntIterator)
namespace exception{
namespace _StackTools{


class HXCPP_CLASS_ATTRIBUTES  IntIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IntIterator_obj OBJ_;
		IntIterator_obj();
		Void __construct(int from,int till);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="exception._StackTools.IntIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IntIterator_obj > __new(int from,int till);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IntIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("IntIterator","\xdd","\xb1","\x1b","\x62"); }

		int current;
		int till;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual int next( );
		Dynamic next_dyn();

};

} // end namespace exception
} // end namespace _StackTools

#endif /* INCLUDED_exception__StackTools_IntIterator */ 
