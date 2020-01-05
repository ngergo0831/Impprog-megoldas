#include "main.h"
#include <stdlib.h>

int slength(set a){
	int *p = a.arr;
	while(*p++);
	return p - a.arr;
}

set stmetszet(set t1,set t2,int *db){
    int i=0 ,j=0,meret = *db;
    set t3;
    t3.arr = malloc((slength(t1)+slength(t2))*sizeof(int));
    int *p1 = t1.arr, *p2 = t2.arr;
    for(i=0;i<slength(t1);i++){
		for(j=0;j<slength(t2);j++){
			if(*((t1.arr)+i)==*((t2.arr)+j)) {
				t3.arr[meret]=t1.arr[i];
				meret++;
			}
		}
	}
	*db = meret;
	return t3;	
}
