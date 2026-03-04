#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float salary,excused_days, unexcused_days;
	float fine_excused, fine_unexcused, net_salary;
	
	printf("<--- Salary Calculator --->\n");
	
	printf("Enter Your Salary : ");
	scanf("%f", &salary);

	printf("Enter Days With Medical Excuse : ");
	scanf("%f", &excused_days);

	printf("Enter Days Without Medical Excuse : ");
	scanf("%f", &unexcused_days);

	fine_excused = excused_days * 50;
	fine_unexcused = unexcused_days * 100;
	net_salary = salary - (fine_excused + fine_unexcused);

	printf("Excused Fine (50/day) : %.2f \n", fine_excused);
	printf("UnExcused Fine (100/day) : %.2f \n", fine_unexcused);
	printf("<--------------------------------->\n");
	printf("The Total Is %.2f \n", net_salary);

	return 0;
}
