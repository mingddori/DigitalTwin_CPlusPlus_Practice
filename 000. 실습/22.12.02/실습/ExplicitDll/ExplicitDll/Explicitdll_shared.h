#ifndef __SHARED_H__
#define __SHARED_H__


#pragma data_seg(".SectionName")
int shared_a = 100;
int shared_b = 50;
#pragma data_seg()
#pragma comment(linker, "/SECTION:.SectionName,RWS")

int sharedfunc() { return shared_a + shared_b; }

#endif // !__SHARED_H__