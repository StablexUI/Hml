#ifndef INCLUDED_sx_skins__ASkin_ASkin_Impl_
#define INCLUDED_sx_skins__ASkin_ASkin_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(sx,skins,_ASkin,ASkin_Impl_)
HX_DECLARE_CLASS3(sx,skins,base,SkinBase)
namespace sx{
namespace skins{
namespace _ASkin{


class HXCPP_CLASS_ATTRIBUTES  ASkin_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ASkin_Impl__obj OBJ_;
		ASkin_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.skins._ASkin.ASkin_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ASkin_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ASkin_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ASkin_Impl_","\x7e","\x0e","\xf8","\xdb"); }

		static ::sx::skins::base::SkinBase __byName( ::String name);
		static Dynamic __byName_dyn();

};

} // end namespace sx
} // end namespace skins
} // end namespace _ASkin

#endif /* INCLUDED_sx_skins__ASkin_ASkin_Impl_ */ 
