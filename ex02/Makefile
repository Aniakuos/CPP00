
NAME = account

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME):
		@clang++ $(CFLAGS) tests.cpp \
		-o $(NAME)

clean:

fclean:
	@rm -rf $(NAME)

re: fclean all