#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct users{
	char *email;
	char *password;

	char *fullName;
	int age;

	struct users *link;
};

void printAllAccounts(struct users *head);
void create_account(struct users **head);
void loginAccUser(struct users *head);
void showUserInfo(struct users *user);
void updateUserInfo(struct users *user);
#endif
