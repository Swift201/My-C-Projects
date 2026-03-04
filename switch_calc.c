#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double num1, num2 , result;
	char operation;

	printf("<--------|Calculator (Switch Edition)|-------->\n");
	
	printf("Enter The First Number : ");
	(void)scanf("%lf", &num1);


	printf("Enter The Operation(+,-,*,/) : ");
	(void)scanf(" %c", &operation);


	printf("Enter The Secound Number : ");
	(void)scanf("%lf", &num2);


	switch (operation) {
		
	case '+':
		result = num1 + num2;
		printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
		break;
    
	case '-':
		result = num1 - num2;
		printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
		break;

	case '*':
		result = num1 * num2;
		printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
		break;
    
	 case '/':
			if (num2 != 0) {
				result = num1 / num2;
				printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                
			}
			else {
				printf("Error! Division by zero is not allowed.\n");
				
			}
			break;
	default:
		printf("Invalid operator! Please use +, -, *, /.\n");
	
	}

	return 0;
}
