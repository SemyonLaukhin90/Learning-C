#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	
	srand(time(NULL));
	
    while (1) {
        int randomNumber = ((rand() % 10) + 1);

        printf("Try guess number! 1 - 10\n");

        int inNumber;
        printf("You Number: ");
        scanf("%d", &inNumber);
        printf("%d\n", inNumber);

        if (randomNumber == inNumber) {
            printf("YES!\n");
            break;
            getchar();
        }
        else
        {
            printf("NO!\n");
        }
    }
    return 0;
}