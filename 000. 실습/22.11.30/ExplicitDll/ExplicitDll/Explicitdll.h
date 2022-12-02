#pragma once
#include <iostream>
#include <string>
#include "Explicitdll_shared.h"


#ifdef DLLPRAC_EXPORTS
	#define DLLPRAC_DECLSPEC __declspec(dllexport)
#else
	#define DLLPRAC_DECLSPEC __declspec(dllimport)
#endif


extern "C" DLLPRAC_DECLSPEC int Plus(int a, int b);
extern "C" DLLPRAC_DECLSPEC int Minus(int a, int b);

