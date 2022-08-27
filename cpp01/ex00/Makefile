NAME =	 Zombie

SRC =	main.cpp\
		newZombie.cpp\
		Zombie.cpp\
		randomChump.cpp


OBJS = ${SRC:.cpp=.o}



 CC = clang++ -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : ${OBJS}
		
		$(CC) $(SRC) -o  $(NAME)  -Wall -Wextra -Werror

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all