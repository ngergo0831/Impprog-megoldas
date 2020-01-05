#ifndef __MAIN_H__
#define __MAIN_H__

typedef struct set{
	int *arr;
	int size;
}set;

//int * tmetszet(int *t1,int *t2,int *db);
//int length(int * tomb);
int slength(set a);
set stmetszet(set t1,set t2,int *db);

#endif 


