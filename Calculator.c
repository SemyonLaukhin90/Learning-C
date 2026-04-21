#include <stdio.h>
#include <stdlib.h>

int num1;
int num2;

char action;

float result;

int main(void) {
	printf("\n");
	printf("num1: ");
	scanf("%d", &num1);
	printf("\n");
	printf("action: ");
	scanf(" %c", &action);
	printf("\n");
	printf("num2: ");
	scanf("%d", &num2);
	printf("\n");
	switch (action) {
	case  '-':
		result = num1 - num2;
		printf("Result: %f\n", result);
		break;
	case '+':
		result = num1 + num2;
		printf("Result: %f\n", result);
		break;
	case '*':
		result = num1 * num2;
		printf("Result: %f\n", result);
		break;
	case '/':
		result = num1 / num2;
		printf("Result: %f\n", result);
		break;
	default:
		printf("unknown symbol");
		break;
	}
	return 0;
}