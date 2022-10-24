#include <stdio.h>
#include <stdlib.h>

int add(int x, int y){
	return x + y;
}

int main(){
	int a = 10, b = 20, c;
	c = add(a, b);
	printf("Answer is %d", c);
}

// Changes done in the function will not affect the actual parameters in main()
