#include <stdio.h>
#include <stdlib.h>

int bread = 0;
int breadPrice = 25;

int money = 140;

int breadCount;

int main(void) {
	int finalPrice;
	printf("How much bread do you want to buy?\n");
	scanf("%d", &breadCount);
	finalPrice = breadCount * breadPrice;
	if (finalPrice < money) {
		money -= finalPrice;
		bread += finalPrice / breadPrice;
		printf("You Have Bread: %d\n", bread);
		printf("You change: %d\n", money);
	}
	else
	{
		printf("Not enough money\n");
	}
	return 0;
}