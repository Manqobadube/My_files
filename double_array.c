#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/**
*main - double strings
*Return: 0
*/
int main(void)
{

int number[25][10] = {{1, 2, 3}, {2, 4, 6}};
int i;
int j;
const int row = i;
const int colum = j;

for (i = 0; i <= 1; i++)
{
for (j = 0; j <= 2; j++)
{
printf("%d\n", number[i][j]);
}
}
return (0);
}

