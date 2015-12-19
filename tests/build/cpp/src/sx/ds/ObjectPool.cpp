#include <hxcpp.h>

#ifndef INCLUDED_sx_ds_ObjectPool
#include <sx/ds/ObjectPool.h>
#endif
namespace sx{
namespace ds{

Void ObjectPool_obj::__construct()
{
HX_STACK_FRAME("sx.ds.ObjectPool","new",0x73f579c3,"sx.ds.ObjectPool.new","sx/ds/ObjectPool.hx",9,0x62d9546d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->length = (int)0;
	HX_STACK_LINE(22)
	this->__pool = cpp::ArrayBase_obj::__new();
}
;
	return null();
}

//ObjectPool_obj::~ObjectPool_obj() { }

Dynamic ObjectPool_obj::__CreateEmpty() { return  new ObjectPool_obj; }
hx::ObjectPtr< ObjectPool_obj > ObjectPool_obj::__new()
{  hx::ObjectPtr< ObjectPool_obj > _result_ = new ObjectPool_obj();
	_result_->__construct();
	return _result_;}

Dynamic ObjectPool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectPool_obj > _result_ = new ObjectPool_obj();
	_result_->__construct();
	return _result_;}

Void ObjectPool_obj::push( Dynamic obj){
{
		HX_STACK_FRAME("sx.ds.ObjectPool","push",0x04339f17,"sx.ds.ObjectPool.push","sx/ds/ObjectPool.hx",30,0x62d9546d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(31)
		int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		Dynamic tmp1 = obj;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		hx::IndexRef((this->__pool).mPtr,tmp) = tmp1;
		HX_STACK_LINE(32)
		(this->length)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,push,(void))

Dynamic ObjectPool_obj::pop( ){
	HX_STACK_FRAME("sx.ds.ObjectPool","pop",0x73f706f4,"sx.ds.ObjectPool.pop","sx/ds/ObjectPool.hx",40,0x62d9546d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	if ((tmp1)){
		HX_STACK_LINE(42)
		(this->length)--;
		HX_STACK_LINE(43)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		Dynamic tmp3 = this->__pool->__GetItem(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		return tmp3;
	}
	else{
		HX_STACK_LINE(45)
		return null();
	}
	HX_STACK_LINE(41)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,pop,return )

Void ObjectPool_obj::clear( ){
{
		HX_STACK_FRAME("sx.ds.ObjectPool","clear",0x26c479b0,"sx.ds.ObjectPool.clear","sx/ds/ObjectPool.hx",54,0x62d9546d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(55)
			int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(55)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(55)
			while((true)){
				HX_STACK_LINE(55)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(55)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(55)
				if ((tmp2)){
					HX_STACK_LINE(55)
					break;
				}
				HX_STACK_LINE(55)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(55)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(56)
				hx::IndexRef((this->__pool).mPtr,i) = null();
			}
		}
		HX_STACK_LINE(58)
		this->length = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,clear,(void))


ObjectPool_obj::ObjectPool_obj()
{
}

void ObjectPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectPool);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(__pool,"__pool");
	HX_MARK_END_CLASS();
}

void ObjectPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(__pool,"__pool");
}

Dynamic ObjectPool_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"__pool") ) { return __pool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectPool_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__pool") ) { __pool=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ObjectPool_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ObjectPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ObjectPool_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectPool_obj,__pool),HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectPool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectPool_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectPool_obj::__mClass;

void ObjectPool_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.ds.ObjectPool","\x51","\xdc","\x26","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ObjectPool_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectPool_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sx
} // end namespace ds
