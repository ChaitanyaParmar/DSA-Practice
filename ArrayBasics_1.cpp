#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int a[5]; // Declaring Array
	a[0] = 1;
	a[1] = 2;
	a[2] = 3; // Assigning Values using Index
	a[3] = 4;
	a[4] = 5;
	
	cout << sizeof(a) << endl; // endl is used for newline
	cout << a[2] << endl;
	printf("%d\n", a[3]); // You can use C in CPP by importing <stdio.h>
}
