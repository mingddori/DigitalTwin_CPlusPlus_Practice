#pragma once

#ifndef __SOLVER_B_H__
#define __SOLVER_B_H__
#include <iostream>

#ifdef SOLVER_B_EXPORTS
#define SOLVER_B_DECLSPEC __declspec(dllexport)
#else
#define SOLVER_B_DECLSPEC __declspec(dllimport)
#endif


extern "C" SOLVER_B_DECLSPEC void Solve();



#endif // !__SOLVER_A_H__
