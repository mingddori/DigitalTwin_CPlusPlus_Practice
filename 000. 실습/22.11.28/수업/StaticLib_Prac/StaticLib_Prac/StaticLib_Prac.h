#pragma once
#pragma comment(lib, "StaticLib_Prac.lib")
#include <iostream>

// LIB는 extern로 치한해라
#define LIB extern;


LIB int Plus(int a, int b);
LIB int Minus(int a, int b);
LIB void Print(int a);