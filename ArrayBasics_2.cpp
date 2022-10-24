#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int b[5] = {1, 2, 3}; // Initializing Array with Size
	int c[] = {1, 2, 3}; // Initializing Array without Size, it will take it from elements
	
	cout << sizeof(b) << endl;
	cout << b[2] << endl;
	cout << b[3] << endl; // Assigns 0 to the index with no elements
	
	cout << sizeof(c) << endl; // It will only count the size acc. to elements
	cout << c[2] << endl;
	cout << c[3] << endl; 
}
