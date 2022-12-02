#include <Windows.h>
#include <iostream>

typedef int (*pFunc)(int a, int b);
typedef int (*pTestFunc)();

int main()
{

    std::string path_x64 = "../lib/Explicitdll_x64.dll";
    std::string pathd_x64 = "../lib/Explicitdlld_x64.dll";
    std::string path_x86 = "../lib/Explicitdll_x86.dll";
    std::string pathd_x86 = "../lib/Explicitdlld_x86.dll";


#if defined(_WIN64) & defined(_DEBUG)
    HMODULE dll_handle1 = ::LoadLibraryA(pathd_x64.c_str());
    HMODULE dll_handle2 = ::LoadLibraryA(pathd_x64.c_str());
#elif defined(_WIN64) & defined(NDEBUG)
    HMODULE dll_handle1 = ::LoadLibraryA(pathd_x64.c_str());
    HMODULE dll_handle2 = ::LoadLibraryA(pathd_x64.c_str());
#endif

    if (dll_handle1 != NULL) {
        pTestFunc incReturn1 = (pTestFunc)GetProcAddress(dll_handle1, "IncreaseReturn");
        pTestFunc incReturn2 = (pTestFunc)GetProcAddress(dll_handle2, "IncreaseReturn");

        printf("dll_handle1 = %p, dll_handle2 = %p\n", dll_handle1, dll_handle2);
        printf("incReturn = %p, incReturn = %p\n", incReturn1, incReturn2);
        printf("Call incReturn1() = %d\n", incReturn1());
        printf("Call incReturn2() = %d", incReturn2());

        getchar();

        ::FreeLibrary(dll_handle1);
        ::FreeLibrary(dll_handle2);

        
    }
}