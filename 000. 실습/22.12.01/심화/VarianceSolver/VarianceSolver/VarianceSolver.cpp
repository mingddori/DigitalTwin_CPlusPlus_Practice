#include "Solver_A.h"
#include "Solver_B.h"






int main() {
	std::string target_equation, target_exponential;

	while (1) {
		
		std::cout << "방정식 차수 입력 : ";
		std::cin >> target_exponential;

		if (target_exponential == "1차")
		{
			//HMODULE hDll = ::LoadLibraryA(A_dll_path.c_str());
			HMODULE hDll = GetDll(SOLVER_A_DLL_NAME);
			if (hDll != NULL) {
				DllLoad_InputStrFunction(hDll, "SetEquation", target_exponential);
				std::cout << "방정식을 입력해주세요 : ";
				std::cin >> target_equation;
				DllLoad_InputStrFunction(hDll, "SetEquation", target_equation);
				DllLoad_Solver(hDll);
				ReleaseDll(hDll);
			}

		}
		else if (target_exponential == "2차") {
			HMODULE hDll = GetDll(SOLVER_B_DLL_NAME);
			if (hDll != NULL) {
				DllLoad_InputStrFunction(hDll, "SetEquation", target_exponential);
				std::cout << "방정식을 입력해주세요 : ";
				std::cin >> target_equation;
				DllLoad_InputStrFunction(hDll, "SetEquation", target_equation);
				DllLoad_Solver(hDll);
				ReleaseDll(hDll);
			}


		}
		else if (target_exponential == "3") {
			break;
		}
		else {

			std::cout << "Error :: 잘못 된 입력" << std::endl;

		}
	}


}