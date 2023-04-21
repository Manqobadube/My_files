#include <stdio.h>


int main()
{

char alpha;
char coma = ',';

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
printf("%c%c ", alpha, coma);
}
}
printf("\n");

int i;

for (i = 0; i <= 100; i++)
{
printf("%d ", i);
}
printf("\n");
return (0);
}
