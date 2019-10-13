#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	printf("enter two integers:");
	scanf_s("%d%d", &num1, &num2);
	if (num1 / num2 * num2 == num1)
	{
		printf("%d is multiple of %d\n", num1, num2);
	}
	else
	{
		printf("%d is not multiple of %d\n", num1, num2);

	}
}