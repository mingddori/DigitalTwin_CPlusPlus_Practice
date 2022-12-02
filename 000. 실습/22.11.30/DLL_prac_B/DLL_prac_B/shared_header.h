#ifndef __SHARED_H__
#define __SHARED_H__



int shared_a = 100;
int shared_b = 100;

int sharedfunc() { return shared_a + shared_b; }

#endif // !__SHARED_H__