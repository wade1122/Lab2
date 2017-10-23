#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int count;
	float total = 0;
	float amount = 0;
	float tax = 0;

	printf("welcome to the Fair Tax Calculator!");
	printf("\nHere are some common expense categories:");
	printf("\nl:Housing,2:Food,3:Clothing,4Transportation,5Education,\n6:Health care,7:Vacations\n");
	
	for (count = 1; count <= 7; count++)
	{
		printf("Please input how much you paid expenses in category %d:", count);
		scanf_s("%f", &amount);
		total += amount;
	}
	tax = total*0.23;
	printf("Your total Fair would be $%.2f\n",tax);

	system("pause");
	return 0;
}