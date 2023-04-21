#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
        char name[25];
	int password;
	char morf;

	printf("are you male or famale m or f? ");
	scanf("%c", &morf);
	


	if (morf == 'm')
	{
	printf("Gender: %c\n", morf);
	}

	else if (morf == 'f')
	{
	printf("Gender: %c\n", morf);
	}
	else
	{
	printf("you are guy!\n");
	}
	printf("Enter your name:");
	scanf("%s", name);

	printf("Enter password");
	scanf("%d", &password);

	
	printf("User name: %s\nPassword: %d\nGender: %c\n", name, password, morf);
	
	
	return (0);
}
