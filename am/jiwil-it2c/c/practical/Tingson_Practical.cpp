#include <stdio.h>

float calculateSalary(float hoursWorked, float hourlyRate);

int main(){
	float workRate, overTime, totalSalary, overTimePay, totalPlusWorkRate;
	int workHours;
	
	printf("Enter the total hours worked: ");
	scanf("%d", &workHours);
	
	printf("Enter the hourly rate: ");
	scanf("%f", &workRate);
	
	totalSalary = calculateSalary(workHours, workRate);
	
	overTime = (workHours - 40);
	overTimePay = overTime * 1.5;
	totalPlusWorkRate = totalSalary + overTime;
	
	printf("\n========== OVERTIME PAY CALCULATOR ==========\n");
	printf("Total hours worked: %d\n", workHours);
	printf("Hourly rate: %.2f\n", workRate);
	
	if (workHours > 40) {
		printf("Total salary: %.2f\n", totalPlusWorkRate);
	} else {
		printf("Total salary: %.2f\n", calculateSalary(workHours, workRate));
	}

	
	
}
float calculateSalary(float hoursWorked, float hourlyRate){
	return hoursWorked * hourlyRate;
}
