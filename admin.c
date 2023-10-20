#include "lib.h"

void printAllAccounts(struct users *head)
{
	system("clear");
	if(head == NULL)
		printf("There is no account\n");
	else
	{
		printf("\n");
		struct users *temp = head;
		while(temp != NULL)
		{
			printf("Full Name	:	%s\n", temp->fullName);
			printf("email		:	%s\n", temp->email);
			printf("age		:	%d\n", temp->age);
			printf("\n\n==============================\n\n");
			temp = temp->link;
		}
	}
	getchar();
	getchar();
}