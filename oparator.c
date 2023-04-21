#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
*main - types of oparators
*Return: 0
*/
int main(void)
{
char oparator;
float num1;
float num2;

printf("Enter nun 1: ");
scanf("%f", &num1);
printf("Enter num 2: ");
scanf("%f", &num2);
printf("Enter an oparator: ");
getchar();
scanf("%c", &oparator);

if (oparator == '-')
{
double result = ((double) num1 - num2);
printf("result: %.2lf\n", result);
}

else if (oparator == '+')
{
double result = ((double) num1 + num2);
printf("result: %.2lf\n", result);
}

else if (oparator == '*')
{
double result = ((double) num1 * num2);
printf("result: %.2lf\n", result);
}
else if (oparator == '/')
{
double result = ((double) num1 / num2);
printf("result: %.2lf\n", result);
}
else
{
printf("invalid!! use - or + or * or / as an oparator\n");
}
return (0);
}
