#include "lib.h"

void create_account(struct users **head)
{
	system("clear");
	char fullName[50];
	char email[50];
	char password[30];
	int age;

	struct users *user = malloc(sizeof(struct users));
	printf("Enter full name : ");
	scanf(" %[^\n]s", fullName);

	printf("Enter age : ");
	scanf("%d",&age);

	printf("Enter email : ");
	scanf("%s",email);

	printf("Enter Password : ");
	scanf("%s",password);
	user->fullName = strdup(fullName);
	user->email = strdup(email);
	user->password = strdup(password);
	user->age = age;
	if(*head == NULL)
	{
		*head = user;
		return;
	}
	user->link = *head;
	*head = user;
}