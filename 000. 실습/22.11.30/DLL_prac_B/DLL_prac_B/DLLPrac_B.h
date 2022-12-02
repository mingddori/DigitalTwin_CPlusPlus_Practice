#pragma once
#include <iostream>
#include <string>
#include "shared_header.h"


#ifdef DLLPRAC_EXPORTS

	#define DLLPRAC_DECLSPEC __declspec(dllexport)

#else
	#define DLLPRAC_DECLSPEC __declspec(dllimport)
	#if defined(_WIN64) & defined(_DEBUG)
		#pragma comment(lib, "DLL_prac_Bd_x64")
	#elif defined(_WIN64) & defined(NDEBUG)
		#pragma comment(lib, "DLL_prac_B_x64")
	#elif defined(_WIN32) & defined(_DEBUG)
		#pragma comment(lib, "DLL_prac_Bd_x86")
	#elif defined(_WIN32) & defined(NDEBUG)
		#pragma comment(lib, "DLL_prac_B_x86")
	#endif
#endif


DLLPRAC_DECLSPEC void Print(int a);
DLLPRAC_DECLSPEC void Print(int a, int b);
DLLPRAC_DECLSPEC void Print(int a, int b, int c);


namespace B {
	DLLPRAC_DECLSPEC void Duplicated();
}