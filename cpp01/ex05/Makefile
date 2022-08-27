NAME =	 Karen

SRC =	main.cpp\
		Karen.cpp


OBJS = ${SRC:.cpp=.o}



 CC = clang++

all : $(NAME)

$(NAME) : ${OBJS}
		
		$(CC) $(SRC) -o  $(NAME)  -Wall -Wextra -Werror

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all