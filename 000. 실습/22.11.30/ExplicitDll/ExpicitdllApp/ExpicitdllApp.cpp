#include <Windows.h>
#include <iostream>

typedef int (*pFunc)(int a, int b);

int main()
{

    std::string path_x64 = "../lib/Explicitdll_x64.dll";
    std::string pathd_x64 = "../lib/Explicitdlld_x64.dll";
    std::string path_x86 = "../lib/Explicitdll_x86.dll";
    std::string pathd_x86 = "../lib/Explicitdlld_x86.dll";

    HMODULE dll_handle = ::LoadLibraryA(pathd_x64.c_str());
    if (dll_handle != NULL) {
        
        
        pFunc dll_Plus = (pFunc)::GetProcAddress(dll_handle, "Plus");
        pFunc dll_Minus = (pFunc)::GetProcAddress(dll_handle, "Minus");

        int a = 10;
        int b = 5;
        int c = dll_Plus(a, b);
        int d = dll_Minus(a, b);

        std::cout << c << ", " << d << std::endl;

        ::FreeLibrary(dll_handle);
    }
}