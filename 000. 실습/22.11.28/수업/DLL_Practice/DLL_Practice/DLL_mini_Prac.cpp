#include "DLL_mini_Prac.h"

int attacked(int health, int attack) {
	return health - attack;
}

int healed(int health, int heal) {
	return health + heal;
}