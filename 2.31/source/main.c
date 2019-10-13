#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i;
	int j;
	int k;
	
	printf("number  square  cube\n");
	for (int i = 0; i <= 10; i++)
	{
		j = pow(i,2);
		k = pow(i,3);
		printf("%d     %d     %d\n", i, j, k);
	}
	system("pause");
	return 0;


}