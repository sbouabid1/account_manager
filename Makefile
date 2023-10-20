CC = gcc
SRCF = admin.c login.c creat_account.c showUserInfo.c updateUserInfo.c 
OBJF = $(SRCF:.c=.o)
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = lib.a

all: $(NAME)

$(NAME) : $(OBJF)
	ar -rc $(NAME) $(OBJF)

play:
	$(CC) main.c $(NAME)
	./a.out

clean:
	$(RM) $(OBJF)
fclean: clean
	$(RM) $(NAME)

re: fclean all