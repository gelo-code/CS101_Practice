#include <stdio.h>

 float calculateSalary (float HoursWorked, float HourlyRate) {
}
 int main () {
	float Work_Rate,Overtime,Overtime_Pay,Total_Salary,Total_Rate;
	int Work_Hours;
	
	printf("\n-- EMPLOYEE OVERTIME PAY CALCULATOR --\n");
	
	printf("\nEnter The Total Hours Worked: ");
	scanf("%d", &Work_Hours);	
	printf("\nEnter The Hourly Rate: ");
	scanf("%f", &Work_Rate);
	
	Total_Salary = calculateSalary(Work_Hours,Work_Rate);
	Overtime = (Work_Hours - 40);
	Overtime_Pay = Overtime * 1.5;
	Total_Rate = Total_Salary + Overtime;
	
	printf("\nThe Total Hours Worked Is: %d", Work_Hours);
	printf("\nThe Hourly Rate Is: %2.f", Work_Rate);
	if (Work_Hours > 40) {
		printf("\nThe Total Salary Is: %2.f", Total_Rate);
	} else {
		printf("\nThe Total Salary Is: %2.f", calculateSalary(Work_Hours,Work_Rate));
	}
	return 0;
}

	
 
 
	
	
	


