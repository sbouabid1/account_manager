#include "lib.h"

void loginAccUser(struct users *head)
{
	system("clear");
	if(head == NULL)
	{
		printf("There is no acc");
		return;
	}

	char email[50];
	char password[30];

	printf("Enter your email : ");
	scanf("%s", email);

	printf("Enter password : ");
	scanf("%s", password);

	struct users *temp = head;
	while(temp != NULL)
	{
		if(strcmp(temp->email, email) == 0 && strcmp(temp->password, password) == 0 )
		{
			int opt;

			printf("\nlogin successful \n\n");
			getchar();
			getchar();
			do{
				system("clear");
				printf("Hello %s welcome to your account \n\n",temp->fullName);
				printf("1# for show your information \n");
				printf("2# for update your information \n");
				printf("Enter you option : ");
				scanf("%d",&opt);
				switch(opt){
					case 1:
						showUserInfo(temp);
						break;
					case 2:
						updateUserInfo(temp);
						break;
				}

			}while(opt != 0);
			getchar(); // bax thyed \n mn scanf
			return;
		}
		temp = temp->link;
	}

	printf("This account does not exist");
	getchar();
	getchar();
}
