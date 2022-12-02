#include "DLLPrac_B.h"

void Print(int a) {
	printf("%d\n", a);
}

void Print(int a, int b) {
	printf("%d, %d\n", a, b);
}

void Print(int a, int b, int c) {
	printf("%d, %d, %d\n", a, b, c);
}


namespace B {
	void Duplicated() { printf("B"); };
}