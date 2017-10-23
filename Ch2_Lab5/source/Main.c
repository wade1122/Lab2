#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	float population = 6763;
	float rate = 0.0118;
	float newpop = population;
	float newpop2 = population;
	int year;
	float val;
	printf("%15s%30s%25s\n", "Years from now", "population(in millions", "Increace(in millions");

	for (year = 1; year <= 75; year++)
	{
		newpop2 = newpop;
		val = 1;
		for (int j =1 ; j <= year; j++) {
			val = val * (1 + rate);
		}
		newpop = population*val;
		printf("%15d%30.2f%25.2f\n",year, newpop, newpop - newpop2);
	}

	system("pause");
	return 0;
}