#include <stdio.h>

void computeSum(int x, int y, int z) {
	
	int sum;
	sum= x+y+z;
	printf("Sum= %d", sum);

}
int main() {
	
	int a=1, b=2, c=3;
	computeSum(a,b,c);
	return 0;
}

