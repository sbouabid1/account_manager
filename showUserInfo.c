#include "lib.h"

void showUserInfo(struct users *user)
{
	system("clear");
	printf("Full Name	:	%s\n", user->fullName);
	printf("email		:	%s\n", user->email);
	printf("age		:	%d\n", user->age);
	getchar();
	getchar();
}