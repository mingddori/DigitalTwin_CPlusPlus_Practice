#include "DLLPrac_B.h"
#include "DLLPrac_A.h"



int main() {


	DLL_A_CLASS* dac = new DLL_A_CLASS();
	dac->PrintDllClass();
	delete dac;

	DLL_A_CLASS dac_tmp;
	dac_tmp.PrintDllClass();


	int a = 212;
	int b = 5;
	int c = Plus(a, b);
	int d = Minus(a, b);
	int e = Mul(a, b);
	int f = Div(a, b);

	Print(a);
	Print(a,b);
	Print(a, b, c);

	A::Duplicated();
	std::cout << std::endl;
	B::Duplicated();

	std::cout << std::endl << sharedfunc();




}