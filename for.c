#include <stdio.h>

int main ()
{
int i;
for (i = 0; i < 10; i++)
{
int j;
for (j = i; j >= 0; j--)
{
printf("%d ", j);
}
printf("\n");
}
return (0);
}
