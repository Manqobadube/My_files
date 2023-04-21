#include <stdio.h>

int main()
{
int i;
int j;
//int m = i * j;

for (i = 0; i < 12; i++)
{
for (j = i; j >= 0;)
{
printf("%d ", j);
j--;
}
printf("\n");
}
return (0);
}
