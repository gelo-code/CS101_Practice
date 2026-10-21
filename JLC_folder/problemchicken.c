#include <stdio.h>

void getKm(float meter);
int main(){
	float meter;
	float km=1000;
	
	printf("METER TO KILOMETER\n");
	printf("Enter Meter\t");
	scanf("%f",&meter);
	getKm(meter);
}

void getKm(float kmeter)
{
	float km;
	km=kmeter/1000;
	printf("km:%.2f",km);
}
