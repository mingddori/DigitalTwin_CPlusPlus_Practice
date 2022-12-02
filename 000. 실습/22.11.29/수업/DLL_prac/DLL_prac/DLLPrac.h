#pragma once
#include <iostream>
#include <string>


#ifdef DLLPRAC_EXPORTS

	#define DLLPRAC_DECLSPEC __declspec(dllexport)

#else
	#define DLLPRAC_DECLSPEC __declspec(dllimport)
	#if defined(_WIN64) & defined(_DEBUG)
		#pragma comment(lib, "DLL_pracd_x64")
	#elif defined(_WIN64) & defined(NDEBUG)
		#pragma comment(lib, "DLL_prac_x64")
	#elif defined(_WIN32) & defined(_DEBUG)
		#pragma comment(lib, "DLL_pracd_x86")
	#elif defined(_WIN32) & defined(NDEBUG)
		#pragma comment(lib, "DLL_prac_x86")
	#endif
#endif


DLLPRAC_DECLSPEC int attacked(int health, int attack);
DLLPRAC_DECLSPEC int healed(int health, int heal);