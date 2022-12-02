#pragma once

#ifndef __SOLVER_B_H__
#define __SOLVER_B_H__
#include "../Solver_A/Solver.h"

#ifdef SOLVER_B_EXPORTS
#define SOLVER_B_DECLSPEC __declspec(dllexport)
#else
#define SOLVER_B_DECLSPEC __declspec(dllimport)
#endif

#if defined(_WIN64) & defined(_DEBUG)
#define SOLVER_B_DLL_NAME "../lib/Solver_Bd_x64.dll"

#elif defined(_WIN64) & defined(NDEBUG)
#define SOLVER_B_DLL_NAME "../lib/Solver_B_x64.dll"

#elif defined(_WIN32) & defined(_DEBUG)
#define SOLVER_B_DLL_NAME "../lib/Solver_Bd_x86.dll"

#elif defined(_WIN32) & defined(NDEBUG)
#define SOLVER_B_DLL_NAME "../lib/Solver_B_x86.dll"
#endif



extern "C" SOLVER_B_DECLSPEC void SetExponent(std::string exponent);
extern "C" SOLVER_B_DECLSPEC void SetEquation(std::string equation);
extern "C" SOLVER_B_DECLSPEC void Solve();




#endif // !__SOLVER_A_H__



