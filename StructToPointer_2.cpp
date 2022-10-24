#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
	int length;
	int breadth;
};

int main(){
	struct Rectangle *p;
	p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // Dynamic Memory Allocation
	
	p->length = 15;
	p->breadth = 20;
	
	printf("Length = %d\n", p->length);
	printf("Breadth = %d\n", p->breadth);
}
