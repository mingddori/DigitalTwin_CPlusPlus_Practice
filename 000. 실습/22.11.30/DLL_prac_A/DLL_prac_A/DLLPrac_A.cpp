#include "DLLPrac_A.h"

int Plus(int a, int b) {
	return a + b;
}

int Minus(int a, int b) {
	return a - b;
}

int Mul(int a, int b) {
	return a * b;
}

int Div(int a, int b) {
	return a / b;
}

namespace A {
	void Duplicated() { printf("A"); };
}

/*
template <typename T>
T Cal(T a, T b) {
	return a + b;
}

사용불가
*/

DLL_A_CLASS::DLL_A_CLASS()
{
	dll_a = 0;
	dll_b = 2.5;
}

DLL_A_CLASS::~DLL_A_CLASS() {
}

void DLL_A_CLASS::PrintDllClass() {
	std::cout << dll_a << ", "\
		<< dll_b << std::endl;
}
