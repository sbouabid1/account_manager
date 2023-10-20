#include "lib.h"

int main()
{
	int option;
	char name[15] = "User";
	struct users *head = NULL;

	do{
		system("clear");
		printf("\e[6;1;19t");
		printf("\033[0;35m \e[3m\"Hello %s welcome to the system\" \e[0m  \033[0m\n\n",name);
		printf("\e[6;1;t");
		printf("1# For create Account \n");
		printf("2# For login  \n");
		printf("3# For admins \n");
		printf("0# For exit \n\n");
		printf("enter option : ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				
				create_account(&head);
				break;
			case 2:
				loginAccUser(head);
				break;
			case 3:
				printAllAccounts(head);
				break;
		}
	}while(option != 0 );
	system("clear");

	struct users *current = head;
    while (current != NULL) {
        struct users *next = current->link;
        free(current);
        current = next;
    }
	return 0;
}
