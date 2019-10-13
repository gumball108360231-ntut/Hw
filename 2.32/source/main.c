#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float i, j, k;
	printf("enter your height and your weight (with meter and kilogram)");
	scanf_s("%f%f", &i, &j);
	k = j / pow(i, 2);
	printf("%f\n", k);
	printf("Underweight: less than 18.5\n");
	printf("Normal: between 18.5 and 24.9\n");
	printf("Overweight: between 25 and 29.9\n");
	printf("Obese: 30 or greater\n");
	system("pause");
	return 0;
}