#ifndef INCLUDED_sx_ds_ObjectPool
#define INCLUDED_sx_ds_ObjectPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,ds,ObjectPool)
namespace sx{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  ObjectPool_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectPool_obj OBJ_;
		ObjectPool_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.ds.ObjectPool")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectPool_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectPool_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ObjectPool","\x5b","\xfb","\x45","\xc3"); }

		int length;
		cpp::ArrayBase __pool;
		virtual Void push( Dynamic obj);
		Dynamic push_dyn();

		virtual Dynamic pop( );
		Dynamic pop_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

};

} // end namespace sx
} // end namespace ds

#endif /* INCLUDED_sx_ds_ObjectPool */ 
