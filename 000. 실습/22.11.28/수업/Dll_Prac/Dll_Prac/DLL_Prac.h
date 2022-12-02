#pragma once
#include <iostream>

#ifdef DLLPRAC_EXPORTS
#define DLLPRAC_DECLSPEC __declspec(dllexport)
#else
#define DLLPRAC_DECLSPEC __declspec(dllimport)
#pragma comment(lib, "Dll_Prac.lib")
#endif

DLLPRAC_DECLSPEC int Plus(int a, int b);
DLLPRAC_DECLSPEC void Print(int a);