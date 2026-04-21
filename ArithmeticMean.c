#include <stdio.h>
#include <stdlib.h>

float array[25];

float number;

float result;
float finalResult;

int calculateCount = 0;

int main(void) {
	printf("Write the numbers\n");
	for (int i = 0; i < 25; i++) {
		scanf("%f", &number);
		if (number == 0) {
			break;
		}
		else
		{
			array[i] = number;
		}
	}
	if (number == 0) {
		for (int i = 0; i < 25; i++) {
			if (array[i] == 0) continue;
			result += array[i];
			calculateCount++;
		}
		finalResult = result / calculateCount;
		printf("Arithmetic Mean: %f\n", finalResult);
	}
	return 0;
}