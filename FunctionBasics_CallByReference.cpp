#include <iostream>
using namespace std;

void swap(int &x, int &y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main(){
	int num1 = 15, num2 = 10;
	
	cout << "Number 1 => " << num1 << endl;
	cout << "Number 2 => " << num2 << endl;
	
	swap(num1, num2);
	
	cout << "Number 1 => " << num1 << endl;
	cout << "Number 2 => " << num2 << endl;
}

// Here the values will be modified after the function call, THIS ONLY WORKS IN C++.
