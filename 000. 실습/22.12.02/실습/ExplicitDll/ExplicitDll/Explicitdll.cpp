#include "Explicitdll.h"

int Plus(int a, int b) {
	return a + b;
}

int Minus(int a, int b) {
	return a - b;
}


int IncreaseReturn() {
	return shared_a += shared_b;
}