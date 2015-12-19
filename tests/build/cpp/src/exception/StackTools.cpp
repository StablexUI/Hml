#include <hxcpp.h>

#ifndef INCLUDED_exception_StackTools
#include <exception/StackTools.h>
#endif
#ifndef INCLUDED_exception__StackTools_IntIterator
#include <exception/_StackTools/IntIterator.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
namespace exception{

Void StackTools_obj::__construct()
{
	return null();
}

//StackTools_obj::~StackTools_obj() { }

Dynamic StackTools_obj::__CreateEmpty() { return  new StackTools_obj; }
hx::ObjectPtr< StackTools_obj > StackTools_obj::__new()
{  hx::ObjectPtr< StackTools_obj > _result_ = new StackTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic StackTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StackTools_obj > _result_ = new StackTools_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > StackTools_obj::truncate( Array< ::Dynamic > stack,Dynamic pos,hx::Null< bool >  __o_fromTop){
bool fromTop = __o_fromTop.Default(false);
	HX_STACK_FRAME("exception.StackTools","truncate",0xddaa56c2,"exception.StackTools.truncate","exception/StackTools.hx",25,0x021559cb)
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(fromTop,"fromTop")
{
		HX_STACK_LINE(30)
		Dynamic tmp = pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		bool tmp1 = fromTop;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		return ::exception::StackTools_obj::cppTruncate(stack,tmp,tmp1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StackTools_obj,truncate,return )

Array< ::Dynamic > StackTools_obj::cppTruncate( Array< ::Dynamic > stack,Dynamic pos,hx::Null< bool >  __o_fromTop){
bool fromTop = __o_fromTop.Default(false);
	HX_STACK_FRAME("exception.StackTools","cppTruncate",0xdd6f5fcd,"exception.StackTools.cppTruncate","exception/StackTools.hx",75,0x021559cb)
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(fromTop,"fromTop")
{
		HX_STACK_LINE(76)
		int posIndex = (int)0;		HX_STACK_VAR(posIndex,"posIndex");
		HX_STACK_LINE(78)
		bool tmp = fromTop;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		if ((tmp)){
			HX_STACK_LINE(78)
			tmp1 = (stack->length - (int)1);
		}
		else{
			HX_STACK_LINE(78)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(78)
		int from = tmp1;		HX_STACK_VAR(from,"from");
		HX_STACK_LINE(79)
		bool tmp2 = fromTop;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		if ((tmp2)){
			HX_STACK_LINE(79)
			tmp3 = (int)-1;
		}
		else{
			HX_STACK_LINE(79)
			tmp3 = stack->length;
		}
		HX_STACK_LINE(79)
		int till = tmp3;		HX_STACK_VAR(till,"till");
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			::exception::_StackTools::IntIterator tmp4 = ::exception::_StackTools::IntIterator_obj::__new(from,till);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			::exception::_StackTools::IntIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			while((true)){
				HX_STACK_LINE(81)
				bool tmp5 = (_g->current != _g->till);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(81)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(81)
				if ((tmp6)){
					HX_STACK_LINE(81)
					break;
				}
				HX_STACK_LINE(81)
				bool tmp7 = (_g->current < _g->till);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(81)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(81)
				if ((tmp7)){
					HX_STACK_LINE(81)
					tmp8 = (_g->current)++;
				}
				else{
					HX_STACK_LINE(81)
					tmp8 = (_g->current)--;
				}
				HX_STACK_LINE(81)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(82)
				{
					HX_STACK_LINE(82)
					::haxe::StackItem tmp9 = stack->__get(i).StaticCast< ::haxe::StackItem >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(82)
					::haxe::StackItem _g1 = tmp9;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(82)
					int _switch_1 = (_g1->__Index());
					if (  ( _switch_1==(int)2)){
						HX_STACK_LINE(82)
						::haxe::StackItem tmp10 = (::haxe::StackItem(_g1))->__Param(0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(82)
						bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(82)
						if ((tmp11)){
							HX_STACK_LINE(82)
							::haxe::StackItem tmp12 = (::haxe::StackItem(_g1))->__Param(0);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(82)
							int _switch_2 = (tmp12->__Index());
							if (  ( _switch_2==(int)3)){
								HX_STACK_LINE(82)
								int tmp13 = (::haxe::StackItem(_g1))->__Param(2);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(82)
								int line = tmp13;		HX_STACK_VAR(line,"line");
								HX_STACK_LINE(82)
								::String tmp14 = (::haxe::StackItem(_g1))->__Param(1);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(82)
								::String file = tmp14;		HX_STACK_VAR(file,"file");
								HX_STACK_LINE(82)
								::String tmp15 = (::haxe::StackItem((::haxe::StackItem(_g1))->__Param(0)))->__Param(1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(82)
								::String methodName = tmp15;		HX_STACK_VAR(methodName,"methodName");
								HX_STACK_LINE(82)
								::String tmp16 = (::haxe::StackItem((::haxe::StackItem(_g1))->__Param(0)))->__Param(0);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(82)
								::String className = tmp16;		HX_STACK_VAR(className,"className");
								HX_STACK_LINE(83)
								{
									HX_STACK_LINE(85)
									bool tmp17 = (className == pos->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(85)
									bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(85)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(85)
									if ((tmp18)){
										HX_STACK_LINE(85)
										tmp19 = (methodName == pos->__Field(HX_HCSTRING("methodName","\xcc","\x19","\x0f","\x12"), hx::paccDynamic ));
									}
									else{
										HX_STACK_LINE(85)
										tmp19 = false;
									}
									HX_STACK_LINE(85)
									bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(85)
									if ((tmp19)){
										HX_STACK_LINE(85)
										tmp20 = (line == pos->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic ));
									}
									else{
										HX_STACK_LINE(85)
										tmp20 = false;
									}
									HX_STACK_LINE(85)
									if ((tmp20)){
										HX_STACK_LINE(86)
										posIndex = i;
										HX_STACK_LINE(87)
										break;
									}
								}
							}
							else  {
							}
;
;
						}
						else{
						}
					}
					else  {
					}
;
;
				}
			}
		}
		HX_STACK_LINE(99)
		bool tmp4 = fromTop;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		if ((tmp4)){
			HX_STACK_LINE(99)
			int tmp5 = (posIndex + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			return stack->slice((int)0,tmp5);
		}
		else{
			HX_STACK_LINE(99)
			int tmp5 = posIndex;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			return stack->slice(tmp5,null());
		}
		HX_STACK_LINE(99)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StackTools_obj,cppTruncate,return )


StackTools_obj::StackTools_obj()
{
}

bool StackTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"truncate") ) { outValue = truncate_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cppTruncate") ) { outValue = cppTruncate_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StackTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StackTools_obj::__mClass,"__mClass");
};

#endif

hx::Class StackTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("truncate","\x66","\xbe","\xf9","\xce"),
	HX_HCSTRING("cppTruncate","\xa9","\x56","\xe1","\xe8"),
	::String(null()) };

void StackTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("exception.StackTools","\x92","\x43","\x88","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StackTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StackTools_obj >;
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

} // end namespace exception
