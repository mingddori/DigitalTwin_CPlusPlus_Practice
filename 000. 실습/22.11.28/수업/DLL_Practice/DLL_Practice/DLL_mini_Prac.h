#pragma once
#include <iostream>
#include <string>


#ifdef DLLPRACTICE_EXPORTS

#define DLLPRAC_DECLSPEC __declspec(dllexport)

#else
#define DLLPRAC_DECLSPEC __declspec(dllimport)
#pragma comment(lib, "DLL_Practice")
#endif

DLLPRAC_DECLSPEC int attacked(int health, int attack);
DLLPRAC_DECLSPEC int healed(int health, int heal);