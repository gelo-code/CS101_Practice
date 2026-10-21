#include <stdio.h>

float calculateSalary(float hoursWorked, float hourlyRate);

int main(){
	float workRate, overTimeHours, totalSalary, overTimePay, totalPlusWorkRate;
	int workHours;
	
	printf("Enter the total hours worked: ");
	scanf("%d", &workHours);
	
	printf("Enter the hourly rate: ");
	scanf("%f", &workRate);
	
	totalSalary = calculateSalary(workHours, workRate);
	
	printf("\n========== OVERTIME PAY CALCULATOR ==========\n");
	printf("Total hours worked: %d\n", workHours);
	printf("Hourly rate: %.2f\n", workRate);
	
	if (workHours > 40) {
		overTimeHours = (workHours - 40);
		overTimePay =  (overTimeHours * workRate) * 1.5;
		totalPlusWorkRate = totalSalary + overTimePay;
		printf("Total salary: %.2f\n", totalPlusWorkRate);
	} else {
		printf("Total salary: %.2f\n", calculateSalary(workHours, workRate));
	}

	
	
}
float calculateSalary(float hoursWorked, float hourlyRate){
	if (hoursWorked > 40){
		return (((hoursWorked - 40)* hourlyRate)*1.5) + (40 * hourlyRate);
	} else {
		return hoursWorked * hourlyRate;
	}
}

	
