#include <stdio.h>

int main()
{
int i;
int j;

for (i = 1; i <= 10; i++)
{
for (j = 0; j <= 10; j++)
{
int a = i * j;

printf("%d ", a);

}

printf("\n");
}
return (0);

}
