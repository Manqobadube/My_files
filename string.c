#include <stdio.h>
#include <string.h>

int main()
{

char name[20];

printf("what is your name? ");
scanf("%s", name);
printf("lengh of your name %lu\n", strlen(name));

char copy[20];
strcpy(copy, name);
printf("copy name: %s\n", copy);

char lastname[10];
printf("last name?");
scanf("%s", lastname);
strcat(copy, lastname);
printf("full name is: %s \n", lastname);

return (0);
}
