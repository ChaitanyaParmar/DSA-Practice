#include <stdio.h>
#include <stdlib.h>

//void fun(int a[], int n){ // You can use this as well
void fun(int *a, int n){
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main(){
	int a[] = {2, 4, 6, 8, 10};
	int n = 5, i;
	fun(a, n);
}
