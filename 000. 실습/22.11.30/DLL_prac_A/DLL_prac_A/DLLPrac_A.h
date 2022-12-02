#pragma once
#include <iostream>
#include <string>
#include "shared_header.h"


#ifdef DLLPRAC_EXPORTS

	#define DLLPRAC_DECLSPEC __declspec(dllexport)

#else
	#define DLLPRAC_DECLSPEC __declspec(dllimport)
	#if defined(_WIN64) & defined(_DEBUG)
		#pragma comment(lib, "DLL_prac_Ad_x64")
	#elif defined(_WIN64) & defined(NDEBUG)
		#pragma comment(lib, "DLL_prac_A_x64")
	#elif defined(_WIN32) & defined(_DEBUG)
		#pragma comment(lib, "DLL_prac_Ad_x86")
	#elif defined(_WIN32) & defined(NDEBUG)
		#pragma comment(lib, "DLL_prac_A_x86")
	#endif
#endif


DLLPRAC_DECLSPEC int Plus(int a, int b);
DLLPRAC_DECLSPEC int Minus(int a, int b);
DLLPRAC_DECLSPEC int Mul(int a, int b);
DLLPRAC_DECLSPEC int Div(int a, int b);


namespace A {

	DLLPRAC_DECLSPEC void Duplicated();
}

/*
template <typename T>
DLLPRAC_DECLSPEC T Car(T a, T b);

사용불가
*/

class DLLPRAC_DECLSPEC DLL_A_CLASS {
private:
	int dll_a;
	double dll_b;

public :
	DLL_A_CLASS();
	virtual ~DLL_A_CLASS();

	void PrintDllClass();
};