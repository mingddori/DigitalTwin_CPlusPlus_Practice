#pragma once
#if defined(_WIN64) & defined(_DEBUG)
#pragma comment(lib, "TestLibd_x64")
#elif defined(_WIN64) & defined(NDEBUG)
#pragma comment(lib, "TestLib_x64")
#elif defined(_WIN32) & defined(_DEBUG)
#pragma comment(lib, "TestLibd_x86")
#elif defined(_WIN32) & defined(NDEBUG)
#pragma comment(lib, "TestLib_x86")
#endif

#include <iostream>

extern int Plus(int a, int b);
extern void Print(int a);
