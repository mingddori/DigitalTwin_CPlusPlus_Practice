#pragma once

#ifndef __SOLVER_A_H__
#define __SOLVER_A_H__
#include <iostream>

#ifdef SOLVER_A_EXPORTS
#define SOLVER_A_DECLSPEC __declspec(dllexport)
#else
#define SOLVER_A_DECLSPEC __declspec(dllimport)
#endif


extern "C" SOLVER_A_DECLSPEC void Solve();



#endif // !__SOLVER_A_H__
