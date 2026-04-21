#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int array[11];
int startNumber;
int cellNumber;
int addNumber;
int deleteNumber;

int main(void) {

	while (1) {
		printf("your list: ");
		for (int i = 1; i < 11; i++) {
			printf(" %d ", array[i]);
		}
		printf("\n\n");
		printf("want added in your list?\n1.add\n2.delete\n3.exit\n\n");
		scanf("%d", &startNumber);
		printf("\n");
		if (startNumber == 1)
		{
			printf("enter cell (1-10)\n\n");
			scanf("%d", &cellNumber);
			printf("\n");
			if (cellNumber > 0 && cellNumber < 11) {
				printf("enter number\n\n");
				scanf("%d", &addNumber);
				printf("\n");
				array[cellNumber] = addNumber;
				getchar();
				startNumber = 0;
			}
			else {
				printf("error command\n\n");
				scanf("%d", &cellNumber);
				printf("\n");
			}
		}
		else if (startNumber == 2)
		{
			printf("enter cell (0-10)\n\n");
			scanf("%d", &cellNumber);
			printf("\n");
			if (cellNumber > 0 && cellNumber < 11) {
				printf("you want delete %d cell?\n1.yes\n2.no\n\n", cellNumber);
				scanf("%d", &addNumber);
				printf("\n");
				if (addNumber == 1) {
					array[cellNumber] = 0;
				}
				else {
					startNumber = 0;
				}
			}
			else {
				printf("error command\n\n");
				scanf("%d", &cellNumber);
				printf("\n");
			}
		}
		else if (startNumber == 3)
		{
			break;
		}
		else
		{
			printf("error command\n\n");
			scanf("%d", &startNumber);
			printf("\n");
		}
	}
	return 0;
}