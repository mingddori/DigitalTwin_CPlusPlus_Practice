#include <Windows.h>
#include <iostream>

typedef void (*pFunc)();

int main(){

    std::string A_dll_path;
    std::string B_dll_path;

    HMODULE A_dll_handle = NULL;
    HMODULE B_dll_handle = NULL;

#if defined(_WIN64) & defined(_DEBUG)
    A_dll_path = "../lib/Solver_Ad_x64.dll";
    B_dll_path = "../lib/Solver_Bd_x64.dll";
    A_dll_handle = ::LoadLibraryA(A_dll_path.c_str());
    B_dll_handle = ::LoadLibraryA(B_dll_path.c_str());
#elif defined(_WIN64) & defined(NDEBUG)
    A_dll_path = "../lib/Solver_A_x64.dll";
    B_dll_path = "../lib/Solver_B_x64.dll";
    A_dll_handle = ::LoadLibraryA(A_dll_path.c_str());
    B_dll_handle = ::LoadLibraryA(B_dll_path.c_str());
#elif defined(_WIN32) & defined(_DEBUG)
    A_dll_path = "../lib/Solver_Ad_x86.dll";
    B_dll_path = "../lib/Solver_Bd_x86.dll";
    A_dll_handle = ::LoadLibraryA(A_dll_path.c_str());
    B_dll_handle = ::LoadLibraryA(B_dll_path.c_str());
#elif defined(_WIN32) & defined(NDEBUG)
    A_dll_path = "../lib/Solver_A_x86.dll";
    B_dll_path = "../lib/Solver_B_x86.dll";
    A_dll_handle = ::LoadLibraryA(A_dll_path.c_str());
    B_dll_handle = ::LoadLibraryA(B_dll_path.c_str());

#endif

    if (true)  // 입력 조건 판단
    {
        if (0) {} // A dll 로드 체크
        else if (0) {} // B dll 로드 체크 
        else {} // 예외 처리
    }





    ::FreeLibrary(A_dll_handle);
    ::FreeLibrary(B_dll_handle);

}