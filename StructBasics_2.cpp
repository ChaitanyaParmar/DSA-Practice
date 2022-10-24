#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p, i;
	p = (int *)malloc(5 * sizeof(int));
	
	p[0] = 12;
	p[1] = 23;
	p[2] = 42;
	p[3] = 04;
	p[4] = 49;
	
	for(i = 0; i < 5; i++){
		printf("Element %d => %d\n", i+1, p[i]);
	}
}
