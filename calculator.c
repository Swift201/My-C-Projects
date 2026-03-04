#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float num1, num2, result;
	char oprator;

	printf("Please Enter First Number : ");
	scanf("%f", &num1);

	printf("Please Enter The Oprator (+,-,*,/) :  ");
	scanf(" %c", &oprator);

	printf("Please Enter The Secound Number : ");
	scanf("%f", &num2);

	if (oprator == '+') result = num1 + num2;
	else if (oprator == '-') result = num1 - num2;
	else if (oprator == '*') result = num1 * num2;
	else if (oprator == '/') 
	{
		if (num2 != 0)  result = num1 / num2;
		else {
			printf("Error: Cannot divide by zero!\n");
			return 1;
		}
	}

	printf("The Result Is %.2f \n", result);

	return 0;
}
