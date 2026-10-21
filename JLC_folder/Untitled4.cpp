#include <stdio.h>
int  computeSum(int x, int y, int z)
{
	return x+y+z;
}
int main()
{
	int a=5, b=10, c=20, sum;
	sum = computeSum(a,b,c);
	printf("sum= %d",sum);	
}
