#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(){
	int tomb1[]={4,16,88,3,6,7,10,90,5,12};
	int tomb2[]={6,7,11,8,1,100,300,32,0,12};
	int meret = 0;
	//int *tomb3 = tmetszet(tomb1,tomb2,&meret);
	
	set stomb1,stomb2,stomb3;
	stomb1.arr = tomb1;
	stomb2.arr = tomb2;
	stomb3 = stmetszet(stomb1,stomb2,&meret);
	
	printf("%d\n",slength(stomb3));
	free(stomb3.arr);
	return 0;
}
