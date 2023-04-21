#include <stdio.h>


int main()
{

int i;
int j;

int x[2][3] = {{1, 2, 3},{2, 4, 6}};

for (i = 0; i < 2; i++)
{
for (j = 0; j < 3; j++)
{
printf("%d\n", x[i][j]);
}
}
return (0);
}
