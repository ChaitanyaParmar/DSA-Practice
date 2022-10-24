#include<stdio.h>

int main(){
	int n;
	
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	
	int a[n];
	int i;
	printf("Enter the elements\n");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	int *p;
	p = a;
	for(i = 0; i < n; i++){
		printf("Element %d => %d\n", i+1, p[i]);
	}
}
