#include <stdio.h>

int main()
{
int x[] = {2, 4, 6, 7, 9};
int i;
int sum = (2 + 4 + 6 + 7 + 9);

for (i = 0; i <= 4; i++)
{
printf("Enter student number: ");
scanf("%d", &i);
printf("student maks:%d\n", x[i]);
}
for (i = 0; i <= 0; i++)
{
printf("The total marks of students: %d\n", sum);
}
for (i = 0; i <= 0; i++)
{
double agv = sum / (double) 5;
printf("the avarage is: %.2lf\n", agv);
}

return (0);
}
