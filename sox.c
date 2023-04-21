#include <stdio.h>

int main(void)
{
	int a;


	printf("Enter the number of shoes: ");
	scanf("%d", &a);

	double b = a / 2;

	printf("the total number of shoes is %d with pairs of %.2lf\n", a, b);

	return (0);
}

