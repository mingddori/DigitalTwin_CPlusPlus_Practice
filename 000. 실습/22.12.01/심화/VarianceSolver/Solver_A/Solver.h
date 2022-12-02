#pragma once

#ifndef __SOLVER_H__
#define __SOLVER_H__

#include <Windows.h>
#include <iostream>

typedef void (*pFunc)();
typedef void (*pFunc_InputStr)(std::string str);

std::string _equation;
std::string _exponent;

HMODULE GetDll(LPCSTR dll_path)
{
	return ::LoadLibraryA(dll_path);
}

void ReleaseDll(HMODULE hDll) {
	::FreeLibrary(hDll);
}

void DllLoad_Solver(HMODULE hDll) {
	pFunc dll_solver = (pFunc)::GetProcAddress(hDll, "Solve");
	dll_solver();
}

void DllLoad_InputStrFunction(HMODULE hDll, LPCSTR func_name, std::string input_str) {
	if (hDll != NULL) {
		pFunc_InputStr dll_SetEquation = (pFunc_InputStr)::GetProcAddress(hDll, func_name);
		dll_SetEquation(input_str);
		

	}

}


#endif // !__SOLVER_H__

/*
std::string _equa;
		std::cout << "방정식을 입력해주세요 : ";
		std::cin >> _equa;
		dll_SetEquation(_equa);

*/