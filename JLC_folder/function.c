#include <stdio.h>

float getKm(float m, float km){
	
	return m / km;
}
	
int main()
{
	float meter, km=1000,converted;
	printf("Enter meter\t");
	scanf("%f",&meter);
	converted=getKm(meter,km);
	printf("converted:%.2f",converted);
}
