#include <iostream>
using namespace std;

struct rect{
	float length;
	float breadth;
};

int main(){
//	struct rect r; // Definition
	struct rect r = {10, 5}; // Definition & Initialization
	r.length = 15.2;
	r.breadth = 10.5; // Changing values using dot operator
//	printf("Size of structure is %lu", sizeof(r));
//	printf("\nArea of Rectangle is %.2f", r.length * r.breadth); // C language code
	cout << r.length << endl; 
	cout << r.breadth << endl;
	cout << r.length * r.breadth << endl;
}
