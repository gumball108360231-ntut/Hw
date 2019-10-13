#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float i; 
	float j; 
	float k; 
	float a; 
	float b;
	float c; 
	float d;
	printf("enter total miles driven per day\n");
	scanf_s("%f", &i);
	printf("enter cost per gallon of gasoline(TWD)\n");
	scanf_s("%f", &j);
	printf("enter average miles per gallon\n");
	scanf_s("%f", &k);
	printf("enter parking fees per day(TWD)\n");
	scanf_s("%f", &a);
	printf("enter tolls per day(TWD)\n");
	scanf_s("%f", &b);
	c = (i / k) * j;
	d = c + a + b;
	printf("cost %f per day of driving to work\n", d);
}