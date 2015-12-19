#ifndef INCLUDED_sx_Sx
#define INCLUDED_sx_Sx

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(sx,Sx)
HX_DECLARE_CLASS3(sx,backend,dummy,BackendManager)
HX_DECLARE_CLASS3(sx,backend,interfaces,IBackendManager)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS2(sx,signals,Signal)
HX_DECLARE_CLASS3(sx,skins,base,SkinBase)
HX_DECLARE_CLASS2(sx,themes,Theme)
HX_DECLARE_CLASS2(sx,widgets,Widget)
namespace sx{


class HXCPP_CLASS_ATTRIBUTES  Sx_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sx_obj OBJ_;
		Sx_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.Sx")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sx_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sx_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Sx","\xc5","\x48","\x00","\x00"); }

		static void __boot();
		static Float dipFactor;
		static bool pixelSnapping;
		static ::sx::backend::dummy::BackendManager __backendManager;
		static ::sx::themes::Theme theme;
		static ::sx::widgets::Widget __root;
		static ::sx::signals::Signal __onFrame;
		static ::haxe::ds::StringMap __skins;
		static cpp::ArrayBase __initTasks;
		static Dynamic __readyCallback;
		static Dynamic &__readyCallback_dyn() { return __readyCallback;}
		static Float toDip( Float px);
		static Dynamic toDip_dyn();

		static Float toPx( Float dip);
		static Dynamic toPx_dyn();

		static Float snap( Float value);
		static Dynamic snap_dyn();

		static Void setBackendManger( ::sx::backend::dummy::BackendManager manager);
		static Dynamic setBackendManger_dyn();

		static Void registerSkin( ::String name,Dynamic factory);
		static Dynamic registerSkin_dyn();

		static Void addInitTask( Dynamic task);
		static Dynamic addInitTask_dyn();

		static Void init( Dynamic readyCallback);
		static Dynamic init_dyn();

		static ::sx::skins::base::SkinBase skin( ::String name);
		static Dynamic skin_dyn();

		static Void dropSkins( );
		static Dynamic dropSkins_dyn();

		static Void frame( );
		static Dynamic frame_dyn();

		static Void __doneInitTask( Dynamic task);
		static Dynamic __doneInitTask_dyn();

		static Void __initializationFinished( );
		static Dynamic __initializationFinished_dyn();

		static ::sx::backend::dummy::BackendManager get_backendManager( );
		static Dynamic get_backendManager_dyn();

		static ::sx::widgets::Widget get_root( );
		static Dynamic get_root_dyn();

		static ::sx::widgets::Widget set_root( ::sx::widgets::Widget value);
		static Dynamic set_root_dyn();

		static ::sx::properties::metric::Size get_stageWidth( );
		static Dynamic get_stageWidth_dyn();

		static ::sx::properties::metric::Size get_stageHeight( );
		static Dynamic get_stageHeight_dyn();

		static ::sx::signals::Signal get_onFrame( );
		static Dynamic get_onFrame_dyn();

};

} // end namespace sx

#endif /* INCLUDED_sx_Sx */ 
