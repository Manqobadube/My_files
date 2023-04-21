#include <stdio.h>
#include <stdlib.h>

void fun()
{
int static x = 0;
x++;
printf("value of x %d\n", x);
}
int main()
{
fun();
fun();
fun();
return (0);
}

