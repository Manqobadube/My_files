#include <stdio.h>
#include <stdlib.h>


int main()
{
int x = 2;
int *p = &x;

x = *p;

printf("pointer %d\n", x);
printf("pointer %d\n", *p);

//*p = 4;
printf("pointer %ld\n", sizeof(*p));
return 0;
}
