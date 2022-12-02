#pragma once

#ifndef __SOLVER_A_H__
#define __SOLVER_A_H__
#include "Solver.h"

#ifdef SOLVER_A_EXPORTS
#define SOLVER_A_DECLSPEC __declspec(dllexport)
#else
#define SOLVER_A_DECLSPEC __declspec(dllimport)
#endif

#if defined(_WIN64) & defined(_DEBUG)
#define SOLVER_A_DLL_NAME "../lib/Solver_Ad_x64.dll"

#elif defined(_WIN64) & defined(NDEBUG)
#define SOLVER_A_DLL_NAME "../lib/Solver_A_x64.dll"

#elif defined(_WIN32) & defined(_DEBUG)
#define SOLVER_A_DLL_NAME "../lib/Solver_Ad_x86.dll"

#elif defined(_WIN32) & defined(NDEBUG)
#define SOLVER_A_DLL_NAME "../lib/Solver_A_x86.dll"
#endif



extern "C" SOLVER_A_DECLSPEC void SetExponent(std::string exponent);
extern "C" SOLVER_A_DECLSPEC void SetEquation(std::string equation);
extern "C" SOLVER_A_DECLSPEC void Solve();




#endif // !__SOLVER_A_H__

