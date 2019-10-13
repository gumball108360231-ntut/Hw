#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	printf("enterr an integer:");
	scanf_s("%d", &num1);
	if ((num1 % 2) == 0)
	{
		printf("this integer is even");
		return 0;
	}
	else
	{
		printf("this integer is odd");
		return 0;
	}
}