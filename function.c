#include <stdio.h>

int getSum(int r,int z)//adds 2 numbers
{
	return r+z;
}

int main()
{
	int a,b,x;
	printf("Enter 2 integers\t");
	scanf("%d %d",&a,&b);
	x=getSum(a,b);//function call
	printf("x=%d",x);
}


