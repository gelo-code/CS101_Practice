#include <stdio.h>

int computeSum(int x, int y, int z)
{
	int sum;
	sum = x+y+z;
	return sum;
}
int main()
{
	int a=1,b=2,c=3,x=200;
	x= computeSum(a,b,c);
	printf("Sum = %d",x);
}
