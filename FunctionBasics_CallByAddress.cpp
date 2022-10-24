#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	int num1 = 15, num2 = 10;
	
	printf("Number 1 = %d\n", num1);
	printf("Number 2 = %d\n", num2);
	
	swap(&num1, &num2);
	
	printf("Number 1 = %d\n", num1);
	printf("Number 2 = %d\n", num2);
}

// Here the values will be modified after the function call
