#include "lib.h"

void updateUserInfo(struct users *user)
{
	system("clear");
	printf("you can update your information here \n\n");
	printf("enter new name : ");
	scanf(" %[^\n]s", user->fullName);
	printf("enter new age : ");
	scanf("%d", &user->age);
	printf("enter new email : ");
	scanf("%s", user->email);
	printf("enter new password : ");
	scanf("%s", user->password);

	printf("\n\nUpdated successfully\n");
	getchar();
	getchar();
}
