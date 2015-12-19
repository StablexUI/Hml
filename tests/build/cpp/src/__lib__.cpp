#include <hxcpp.h>

#include <stdio.h>

extern "C" void __hxcpp_main();

extern "C" void __hxcpp_lib_main();

#ifndef INCLUDED_HUnit
#include <HUnit.h>
#endif


void __hxcpp_main() {
::HUnit_obj::main();
	}

void __hxcpp_lib_main() {
	HX_TOP_OF_STACK
	hx::Boot();
	__boot_all();
	__hxcpp_main();
	}
